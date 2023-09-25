#include "code_08001360.h"
#include "memory_heap.h"

asm(".include \"include/gba.inc\"");//Temporary

// Can be better split

static u16 D_03000098;
static D_0300009c_func D_0300009c;


void func_08001360(void) {
    func_08003f28();
    D_03000098 = FALSE;
    D_0300009c = NULL;
    return;
}


void func_08001380(void) {
    func_08006e00();
    func_08003f50();
    if (D_0300009c != NULL) {
        D_0300009c();
    }
    D_03000098 = TRUE;
    return;
}


void func_080013a8(void) {
    volatile s32 temp;

    if (!(REG_DISPCNT & DISPCNT_FORCE_BLANK)) {
        while (!D_03000098) {
			temp = *((s32 *)GameROMBase + get_agb_random_var());
		}
    }

    D_03000098 = FALSE;
}


void func_080013e8(D_0300009c_func arg1) {
	D_0300009c = arg1;
}


/* INPUT LISTENER */


static u16 D_030000a0;
static u16 D_030000a2;
static u16 D_030000a4;
static u16 D_030000a6;
static u8 sRecMode;
static u8 sRecPaused;
static u8 sRecKeyTimer;
static u16 sRecKeyFilter;
static u16 *sRecMemory;


// Reset Input Buffers
void reset_main_key_buffers(u16 keys) {
    D_03004ac0 = keys;
    D_03004afc = 0;
    D_030053b8 = 0;
    D_03004b00 = 0;
    D_030000a0 = keys;
    D_030000a2 = 0;
    return;
}


// Reset Recorded Input Buffers
void reset_rec_key_buffers(u16 keys) {
    D_030046b8 = keys;
    D_03005378 = 0;
    D_0300537c = 0;
    D_030046b4 = 0;
    D_030000a4 = keys;
    D_030000a6 = 0;
    return;
}


// Init. Input Listener
void init_key_listener(void) {
    reset_main_key_buffers(~REG_KEY);
    reset_rec_key_buffers(0);
    sRecMode = 0;
    sRecKeyFilter = 0x3ff;
}


// Register Input
void update_main_key_buffers(u16 keys) {
    D_03004afc = keys & (keys ^ D_03004ac0);
    D_03004b00 = D_03004ac0 & (keys ^ D_03004ac0);
    D_03004ac0 = keys;

    // Key Repeat Delay
    if (D_03004afc != 0) {
        D_030053b8 = D_03004afc;
        D_030000a2 = 0;
    }
    if (D_03004afc == 0) {
        D_030053b8 = 0;
        if (D_030000a0 == keys) {
            D_030000a2++;
            if (D_030000a2 > 14) {
                D_030000a2 = 12;
                D_030053b8 = keys;
            }
        } else {
            D_030000a2 = 0;
        }
        D_030000a0 = D_03004ac0;
    }
}


// Register Recorded Input
void update_rec_key_buffers(u16 keys) {
    D_03005378 = keys & (keys ^ D_030046b8);
    D_030046b4 = D_030046b8 & (keys ^ D_030046b8);
    D_030046b8 = keys;

    // Key Repeat Delay
    if (D_03005378 != 0) {
        D_0300537c = D_03005378;
        D_030000a6 = 0;
    }
    if (D_03005378 == 0) {
        D_0300537c = 0;
        if (D_030000a4 == keys) {
            D_030000a6++;
            if (D_030000a6 > 14) {
                D_030000a6 = 12;
                D_0300537c = keys;
            }
        } else {
            D_030000a6 = 0;
        }
        D_030000a4 = D_030046b8;
    }
}


// Update Input Listener
void update_key_listener(void) {
    u16 keys, recordedKeys;

    keys = ~REG_KEY;
    keys &= sRecKeyFilter;

    switch (sRecMode) {
        case 0: // Default
            break;

        case 1: // Record Inputs
            if (!sRecPaused && (sRecCurrentKey < sRecMaxKeys)) {
                if ((sRecMemory[sRecCurrentKey] & 0x3ff) == keys) {
                    sRecKeyTimer++;
                    if (sRecKeyTimer >= 64) {
                        sRecKeyTimer = 0;
                        sRecCurrentKey++;
                        if (sRecCurrentKey < sRecMaxKeys) {
                            sRecMemory[sRecCurrentKey] = keys;
                        }
                    } else {
                        sRecMemory[sRecCurrentKey] += (1 << 10);
                    }
                } else {
                    sRecKeyTimer = 0;
                    sRecCurrentKey++;
                    if (sRecCurrentKey < sRecMaxKeys) {
                        sRecMemory[sRecCurrentKey] = keys;
                    }
                }
            }
            break;

        case 2: // Play Recording to Main Buffers - Ignore Real-Time Inputs
        case 3: // Play Recording to Secondary Buffers
        case 4: // Play Recording to Main Buffers - Include Real-Time Inputs
            recordedKeys = 0;
            if (sRecCurrentKey < sRecMaxKeys) {
                if (sRecPaused) {
                    recordedKeys = sRecMemory[sRecCurrentKey] & sRecKeyFilter;
                } else {
                    if (sRecKeyTimer != 0) {
                        sRecKeyTimer--;
                        recordedKeys = sRecMemory[sRecCurrentKey] & sRecKeyFilter;
                    } else {
                        sRecCurrentKey++;
                        if (sRecCurrentKey < sRecMaxKeys) {
                            recordedKeys = sRecMemory[sRecCurrentKey] & sRecKeyFilter;
                            sRecKeyTimer = (sRecMemory[sRecCurrentKey] >> 10);
                        }
                    }
                }
            }
            if (sRecMode == 2) {
                keys = recordedKeys;
            }
            if (sRecMode == 4) {
                keys |= recordedKeys;
            }
            if (sRecMode == 3) {
                update_rec_key_buffers(recordedKeys);
            }
            break;
    }

    update_main_key_buffers(keys);
}


// Set Recording Mode
void key_rec_set_mode(u32 mode, u16 keyFilter, u16 *recording, u32 maxInputs) {
    u16 keys = ~REG_KEY;
    u32 recordedKeys;

    sRecMode = mode;
    sRecKeyFilter = keyFilter;
    sRecPaused = FALSE;
    sRecMemory = recording;
    sRecMaxKeys = maxInputs;
    sRecCurrentKey = 0;
    sRecKeyTimer = 0;
    reset_rec_key_buffers(0);

    switch (mode) {
        case 0: // Default
            break;

        case 1: // Record Inputs
            dma3_fill(0, recording, maxInputs * 2, 0x20, 0x200);
            recording[0] = keys & keyFilter;
            break;

        case 2: // Play Recording to Main Buffers - Ignore Real-Time Inputs
            keys = (recording[0] & 0x3ff);
            sRecKeyTimer = recording[0] >> 10;
            break;

        case 3: // Play Recording to Secondary Buffers
            recordedKeys = recording[0] & 0x3ff;
            sRecKeyTimer = recording[0] >> 10;
            reset_rec_key_buffers(recordedKeys & keyFilter);
            break;

        case 4: // Play Recording to Main Buffers - Include Real-Time Inputs
            keys |= (recording[0] & 0x3ff);
            sRecKeyTimer = recording[0] >> 10;
            break;
    }

    reset_main_key_buffers(keys & keyFilter);
}


// Pause Input Recording
void key_rec_set_paused(u32 pause) {
    sRecPaused = pause;
}


// Get Next Recording Key
u32 key_rec_get_next(void) {
    if (sRecCurrentKey < sRecMaxKeys) {
        return sRecCurrentKey + 1;
    } else {
        return sRecCurrentKey;
    }
}


// Check if Recording Has Reached the End
u32 key_rec_reached_end(void) {
    return (sRecCurrentKey >= sRecMaxKeys);
}


/* DIRECT MEMORY ACCESS */


// DMA3 Set
void dma3_set(const void *source, void *destination, u32 bytesToSet, u16 unit, u32 bytesPerInterrupt) {
    const void *src = source;
    void *dest = destination;
    u32 dmaSize = unit / 16;

    while (bytesToSet != 0) {
        REG_DMA3SAD = (u32)src;
        REG_DMA3DAD = (u32)dest;

        if (bytesToSet <= bytesPerInterrupt) {
            bytesPerInterrupt = bytesToSet;
        }

        REG_DMA3CNT_L = bytesPerInterrupt >> dmaSize;
        REG_DMA3CNT_H = (
            DMACNT_DEST_INC_TYPE_INCREMENT
            | DMACNT_SRC_INC_TYPE_INCREMENT
            | ((dmaSize != 1) << 10)
            | DMACNT_START_MODE_IMMEDIATE
            | DMACNT_ENABLE
        );

        src += bytesPerInterrupt;
        dest += bytesPerInterrupt;
        bytesToSet -= bytesPerInterrupt;
    }
}


// DMA3 Fill
void dma3_fill(u32 value, void *destination, u32 bytesToFill, u16 unit, u32 bytesPerInterrupt) {
    void *dest = destination;
    u32 dmaSize = unit / 16;

    while (bytesToFill != 0) {
        REG_DMA3SAD = (u32)&value;
        REG_DMA3DAD = (u32)dest;

        if (bytesToFill <= bytesPerInterrupt) {
            bytesPerInterrupt = bytesToFill;
        }

        REG_DMA3CNT_L = bytesPerInterrupt >> dmaSize;
        REG_DMA3CNT_H = (
            DMACNT_DEST_INC_TYPE_INCREMENT
            | DMACNT_SRC_INC_TYPE_UNCHANGED
            | ((dmaSize != 1) << 10)
            | DMACNT_START_MODE_IMMEDIATE
            | DMACNT_ENABLE
        );

        dest += bytesPerInterrupt;
        bytesToFill -= bytesPerInterrupt;
    }
}


/* MATH */


static u16 sRandom; // [D_030000b4] Static Random Variable


// Set Global Random Value
void set_agb_random_var(u32 val) {
    sRandom = val;
    return;
}


// Get Global Random Value
u16 get_agb_random_var(void) {
    sRandom = sRandom * 109 + 1021;
    return sRandom;
}


// AGB Random
u16 agb_random(u16 var) {   // Random
    sRandom = sRandom * 109 + 1021;
    return (sRandom * var) >> 16;
}


// Interpolated Sine (4-bits additional precision)
s32 func_080019a4(u32 fullAngle) {
    u32 a0, a1, af;
    u8 angle;

    fullAngle &= 0xFFF;
    angle = (fullAngle >> 4);

    a0 = angle & 0xFF;
    a1 = (angle + 1) & 0xFF;
    af = fullAngle & 0xF;

    return ((D_08935fcc[a0] * (0x10 - af)) + (D_08935fcc[a1] * af)) >> 4;
}


// Interpolated Cosine (4-bits additional precision)
s32 func_080019e4(u32 fullAngle) {
    u32 a0, a1, af;
    u8 angle;

    fullAngle &= 0xFFF;
    angle = (fullAngle >> 4);

    a0 = angle & 0xFF;
    a1 = (angle + 1) & 0xFF;
    af = fullAngle & 0xF;

    return ((D_089361cc[a0] * (0x10 - af)) + (D_089361cc[a1] * af)) >> 4;
}


/* PALETTE INTERPOLATOR */


#define FAST_BLEND_PAL_TO_PAL_SIZE ((u32)fast_blend_pal_to_pal_end - (u32)fast_blend_pal_to_pal)
#define FAST_BLEND_COL_TO_PAL_SIZE ((u32)fast_blend_col_to_pal_end - (u32)fast_blend_col_to_pal)

extern void fast_blend_pal_to_pal(void *args);
extern void *fast_blend_pal_to_pal_end;
extern void fast_blend_col_to_pal(void *args);
extern void *fast_blend_col_to_pal_end;

static s32 fast_blend_pal_code[32]; // Palette Interpolation Function


// Stub
void func_08001a24_stub(void) {
}


// Immediately Blend Palette (Color->Array)
void func_08001a28(const u16 *sourceA, u32 valueB, u16 *outputDest, u32 totalColors, u32 progress) {
    void (*interpolatePalette)() = (void *)(fast_blend_pal_code);
    u32 args[5];

    args[0] = (u32)(valueB);
    args[1] = (u32)(sourceA);
    args[2] = (u32)(outputDest);
    args[3] = (u32)(totalColors);
    args[4] = (u32)(0x100 - progress);
    dma3_set(fast_blend_col_to_pal, interpolatePalette, 0x80, 0x20, 0x100);
    interpolatePalette(args);
}


// Blend Palette with Interpolator (https://decomp.me/scratch/EvpB4)
#include "asm/code_08001360/asm_08001a64.s"


// Update Palette Interpolation
void func_08001b48(struct PaletteInterpolator *task) {
    if ((task == NULL) || !task->isActive) {
        return;
    }

    task->runningTime++;
    if (task->runningTime > task->duration) {
        task->isActive = FALSE;
        return;
    }

    func_08001a64(task, 0);
}


// Initialise Palette Output for Interpolation
void func_08001b98(struct PaletteInterpolator *task, u32 indexOffset) {
    const u16 *src;
    u16 *dest;

    src = task->sourceA + indexOffset;
    dest = task->outputDest + indexOffset;

    switch (task->sourceType) {
        case 0:
        case 1:
        case 3:
            dma3_set(src, dest, task->totalPalettes * 0x20, 0x10, 0x100);
            break;
        case 2:
            dma3_fill((u32)src | ((u32)src << 16), dest, task->totalPalettes * 0x20, 0x10, 0x100);
            break;
    }
}


// Initialise Palette Interpolator (Array->Array)
void func_08001bf8(struct PaletteInterpolator *task, u32 duration, u32 totalPalettes, const u16 *sourceA, const u16 *sourceB, u16 *outputBackup, u16 *outputDest) {
    if (task == NULL) {
        return;
    }

    task->duration = duration;
    task->runningTime = 0;
    task->totalPalettes = totalPalettes;
    task->sourceA = sourceA;
    task->sourceB = sourceB;
    task->outputBackup = outputBackup;
    task->outputDest = outputDest;
    task->sourceType = 0;
    task->isActive = TRUE;
    func_08001b98(task, 0);
}


// Initialise Palette Interpolator (Color->Array)
void func_08001c64(struct PaletteInterpolator *task, u32 duration, u32 totalPalettes, const u16 *valueA, const u16 *sourceB, u16 *outputBackup, u16 *outputDest) {
    if (task == NULL) {
        return;
    }

    task->duration = duration;
    task->runningTime = 0;
    task->totalPalettes = totalPalettes;
    task->sourceA = valueA;
    task->sourceB = sourceB;
    task->outputBackup = outputBackup;
    task->outputDest = outputDest;
    task->sourceType = 2;
    task->isActive = TRUE;
    func_08001b98(task, 0);
}


// Initialise Palette Interpolator (Array->Color)
void func_08001cd8(struct PaletteInterpolator *task, u32 duration, u32 totalPalettes, const u16 *sourceA, const u16 *valueB, u16 *outputBackup, u16 *outputDest) {
    if (task == NULL) {
        return;
    }

    task->duration = duration;
    task->runningTime = 0;
    task->totalPalettes = totalPalettes;
    task->sourceA = sourceA;
    task->sourceB = valueB;
    task->outputBackup = outputBackup;
    task->outputDest = outputDest;
    task->sourceType = 3;
    task->isActive = TRUE;
    func_08001b98(task, 0);
}


// Copy Contents of OutputDest to OutputBackup
void func_08001d44(struct PaletteInterpolator *task) {
    if (task == NULL || !task->isActive || task->outputBackup == NULL) {
        return;
    }

    dma3_set(task->outputDest, task->outputBackup, 0x200, 0x20, 0x80);
}


// Update Palette Interpolator (using PaletteMask)
void func_08001d74(struct PaletteInterpolator *task) {
    s32 i;

    if (task == NULL || !task->isActive) {
        return;
    }

    task->runningTime++;
    if (task->runningTime > task->duration) {
        task->isActive = FALSE;
        return;
    }

    for (i = 0; i < 16; i++) {
        if (((task->paletteMask >> i) & 1) != 0) {
            func_08001a64(task, i * 16);
        }
    }
}


// Blend Palette (Array->Array)
void func_08001ddc(u8 alpha, u8 totalPalettes, const u16 *sourceA, const u16 *sourceB, u16 *outputDest) {
    struct PaletteInterpolator task;

    task.duration = 32;
    task.runningTime = alpha;
    task.totalPalettes = totalPalettes;
    task.sourceA = sourceA;
    task.sourceB = sourceB;
    task.outputDest = outputDest;
    task.sourceType = 0;
    task.isActive = TRUE;

    func_08001a64(&task, 0);
}


// Blend Palette (Color->Array)
void func_08001e4c(u8 alpha, u8 totalPalettes, u32 valueA, const u16 *sourceB, u16 *outputDest) {
    struct PaletteInterpolator task;

    task.duration = 32;
    task.runningTime = alpha;
    task.totalPalettes = totalPalettes;
    task.sourceA = (void *)valueA;
    task.sourceB = sourceB;
    task.outputDest = outputDest;
    task.sourceType = 2;
    task.isActive = TRUE;

    func_08001a64(&task, 0);
}


// Blend Palette (Array->Color)
void func_08001ec4(u8 alpha, u8 totalPalettes, const u16 *sourceA, u32 valueB, u16 *outputDest) {
    struct PaletteInterpolator task;

    task.duration = 32;
    task.runningTime = alpha;
    task.totalPalettes = totalPalettes;
    task.sourceA = sourceA;
    task.sourceB = (void *)valueB;
    task.outputDest = outputDest;
    task.sourceType = 3;
    task.isActive = TRUE;

    func_08001a64(&task, 0);
}


// Start Palette Interpolator (Array->Array)
struct PaletteInterpolator *func_08001f34(struct PaletteInterpolatorInputs *inputs) {
    struct PaletteInterpolator *task;

    task = mem_heap_alloc(sizeof(struct PaletteInterpolator));
    func_08001bf8(task, inputs->duration, inputs->totalPalettes, inputs->sourceA, inputs->sourceB, NULL, inputs->outputDest);

    return task;
}


// Start Palette Interpolator (Color->Array)
struct PaletteInterpolator *func_08001f64(struct PaletteInterpolatorInputs *inputs) {
    struct PaletteInterpolator *task;

    task = mem_heap_alloc(sizeof(struct PaletteInterpolator));
    func_08001c64(task, inputs->duration, inputs->totalPalettes, inputs->sourceA, inputs->sourceB, NULL, inputs->outputDest);

    return task;
}


// Start Palette Interpolator (Array->Color)
struct PaletteInterpolator *func_08001f94(struct PaletteInterpolatorInputs *inputs) {
    struct PaletteInterpolator *task;

    task = mem_heap_alloc(sizeof(struct PaletteInterpolator));
    func_08001cd8(task, inputs->duration, inputs->totalPalettes, inputs->sourceA, inputs->sourceB, NULL, inputs->outputDest);

    return task;
}


// Update Palette Interpolator
u32 func_08001fc4(struct PaletteInterpolator *task) {
    func_08001b48(task);

    return !task->isActive;
}


// Interpolate Palettes (Array->Array)
s32 func_08001fe0(u16 memID, u8 duration, u8 totalPalettes, const u16 *sourceA, const u16 *sourceB, u16 *outputDest) {
    struct PaletteInterpolatorInputs info;

    info.duration = duration;
    info.totalPalettes = totalPalettes;
    info.sourceA = sourceA;
    info.sourceB = sourceB;
    info.outputDest = outputDest;

    return start_new_task(memID, &D_089363cc, &info, NULL, 0);
}


// Interpolate Palettes (Color->Array)
s32 func_08002018(u16 memID, u8 duration, u8 totalPalettes, u32 valueA, const u16 *sourceB, u16 *outputDest) {
    struct PaletteInterpolatorInputs info;

    info.duration = duration;
    info.totalPalettes = totalPalettes;
    info.sourceA = (void *)valueA;
    info.sourceB = sourceB;
    info.outputDest = outputDest;

    return start_new_task(memID, &D_089363dc, &info, NULL, 0);
}


// Interpolate Palettes (Array->Color)
s32 func_08002050(u16 memID, u8 duration, u8 totalPalettes, const u16 *sourceA, u32 valueB, u16 *outputDest) {
    struct PaletteInterpolatorInputs info;

    info.duration = duration;
    info.totalPalettes = totalPalettes;
    info.sourceA = sourceA;
    info.sourceB = (void *)valueB;
    info.outputDest = outputDest;

    return start_new_task(memID, &D_089363ec, &info, NULL, 0);
}


// ?
#include "asm/code_08001360/asm_08002088.s"


/* ROTATION/SCALING PARAMETER GROUPS */


static s32 D_03000138[64]; // unknown type
static s32 D_03000238[64]; // unknown type
static s32 D_03000338[2]; // unknown type
static s32 D_03000340[8]; // unknown type
static s32 D_03000360[2]; // unknown type
static s32 D_03000368[32]; // unknown type

#include "asm/code_08001360/asm_080020ec.s"

#include "asm/code_08001360/asm_08002150.s"

#include "asm/code_08001360/asm_08002194.s"

#include "asm/code_08001360/asm_080021b8.s"

#include "asm/code_08001360/asm_0800222c.s"

#include "asm/code_08001360/asm_08002260.s"

#include "asm/code_08001360/asm_08002280.s"

#include "asm/code_08001360/asm_080022bc.s"

#include "asm/code_08001360/asm_080022d8.s"

#include "asm/code_08001360/asm_080022f4.s"

#include "asm/code_08001360/asm_08002310.s"

#include "asm/code_08001360/asm_0800232c.s"

#include "asm/code_08001360/asm_080024dc.s"

#include "asm/code_08001360/asm_08002500.s"

#include "asm/code_08001360/asm_08002520.s"

#include "asm/code_08001360/asm_0800253c.s"

#include "asm/code_08001360/asm_08002584.s"

#include "asm/code_08001360/asm_080025bc.s"

#include "asm/code_08001360/asm_080025d8.s"

#include "asm/code_08001360/asm_080025fc.s"


/* SOUND */


#include "asm/code_08001360/asm_08002630.s"

#include "asm/code_08001360/asm_08002634.s"

#include "asm/code_08001360/asm_0800267c.s"

#include "asm/code_08001360/asm_08002698.s"

#include "asm/code_08001360/asm_080026c4.s"

#include "asm/code_08001360/asm_080026fc.s"

#include "asm/code_08001360/asm_0800274c.s"

#include "asm/code_08001360/asm_08002794.s"

#include "asm/code_08001360/asm_080027dc.s"

#include "asm/code_08001360/asm_08002828.s"

#include "asm/code_08001360/asm_08002838.s"

#include "asm/code_08001360/asm_08002868.s"

#include "asm/code_08001360/asm_08002880.s"

#include "asm/code_08001360/asm_08002894.s"

#include "asm/code_08001360/asm_080028a8.s"

#include "asm/code_08001360/asm_080028c4.s"

#include "asm/code_08001360/asm_080028d8.s"

#include "asm/code_08001360/asm_080028ec.s"

#include "asm/code_08001360/asm_08002920.s"

#include "asm/code_08001360/asm_08002934.s"

#include "asm/code_08001360/asm_0800294c.s"

#include "asm/code_08001360/asm_08002968.s"

#include "asm/code_08001360/asm_08002978.s"

#include "asm/code_08001360/asm_0800298c.s"

#include "asm/code_08001360/asm_080029b0.s"

#include "asm/code_08001360/asm_080029c4.s"

#include "asm/code_08001360/asm_080029d8.s"

#include "asm/code_08001360/asm_08002a18.s"


/* GRAPHICS TABLES */


enum CompressionLevelsEnum {
    COMPRESSION_LEVEL_NONE,
    COMPRESSION_LEVEL_RLE,
    COMPRESSION_LEVEL_HUFFMAN
};

extern s32 (*D_03004af0)(const u16 *src, u16 *dest, const u8 *rleData, u32 sizeData);
extern u32 D_03005390[]; // rle decompression save state
extern u8 D_030053b0; // boolean


// Ensure Valid Destination Pointer..?
void *func_08002a54(void *dest) {
    if ((s32)dest < 0) {
        dest = *(void **)((s32)dest & 0x7fffffff);
    }
    return dest;
}


// Initialise GfxTableLoader
void func_08002a6c(struct GfxTableLoader *info, const struct GraphicsTable *gfxTable, u32 limit) {
    if (gfxTable->src != NULL) {
        while (gfxTable->size == FUNCTION_GFX_SOURCE) {
            GfxTableSrcFunc func = gfxTable->src;
            func(gfxTable->dest);
            gfxTable++;
        }

        info->active = TRUE;
        info->limit = limit;
        info->gfxTable = gfxTable;
        info->dest = (void *)func_08002a54(gfxTable->dest);
        info->src = gfxTable->src;

        // Uncompressed
        if (gfxTable->size != COMPRESSED_GFX_SOURCE) {
            info->compressionLevel = COMPRESSION_LEVEL_NONE;
            info->size = gfxTable->size;
            return;
        }

        // Compressed (RLE)
        info->src = (void *)func_0800869c(info->src);
        info->compressionLevel = COMPRESSION_LEVEL_RLE;
        info->size = 1;
        info->decodingRLE = FALSE;

        // Double Compressed (Huffman + RLE)
        if (((struct CompressedGraphics *)info->src)->doubleCompressed) {
            info->compressionLevel = COMPRESSION_LEVEL_HUFFMAN;
            info->decompressingHuffman = FALSE;
        }
    } else {
        info->active = FALSE;
        return;
    }
}


// Update GfxTableLoader
void func_08002b10(struct GfxTableLoader *info) {
    const struct GraphicsTable *gfxTable;
    const struct CompressedGraphics *comp;
    const struct Huffman *huffman;
    s32 processLimit;
    u32 size;
    u32 offset;
    const void *src;
    u16 *dest;
    u32 i;
    u32 finished;

    if (!info->active) {
        return;
    }

    processLimit = info->limit;

    while (processLimit != 0) {
        switch (info->compressionLevel) {
            case COMPRESSION_LEVEL_NONE:
                size = processLimit;
                if (processLimit > info->size) size = info->size;
                offset = 0x20;
                src = info->src;
                if ((u32)src & 3) offset = 0x10;
                dest = info->dest;
                if ((u32)dest & 3) offset = 0x10;
                if ((u32)size & 3) offset = 0x10;
                dma3_set(src, dest, size, offset, 0x100);
                processLimit -= size;
                info->size -= size;
                if (info->size == 0) {
                    break;
                }
                (u32) info->src += size;
                (u32) info->dest += size;
                continue;

            case COMPRESSION_LEVEL_RLE:
                if (info->decodingRLE) {
                    D_030053b0 = TRUE;
                    for (i = 0; i < 8; i++) {
                        D_03005390[i] = info->rleSaveState[i];
                    }
                    size = func_08003ea4();
                } else {
                    D_030053b0 = FALSE;
                    comp = info->src;
                    src = comp->data.raw;
                    if (comp->doubleCompressed) {
                        src = info->dest + comp->rleOffset - comp->data.huffman->size;
                    }
                    size = D_03004af0(src, info->dest, comp->rleData, (comp->rleSize << 16) | (info->limit / 4));
                }
                if (D_030053b0) {
                    info->decodingRLE = TRUE;
                    for (i = 0; i < 8; i++) {
                        info->rleSaveState[i] = D_03005390[i];
                    }
                    D_030053b0 = FALSE;
                } else {
                    info->decodingRLE = FALSE;
                }
                processLimit -= size;
                if (processLimit < 0) {
                    processLimit = 0;
                }
                if (info->decodingRLE) {
                    return;
                }
                info->size = 0;
                break;

            case COMPRESSION_LEVEL_HUFFMAN:
                if (info->decompressingHuffman) {
                    finished = func_080085e4(info->huffmanSaveState);
                } else {
                    comp = info->src;
                    info->decompressingHuffman = TRUE;
                    // Fake-match below:
                    size = (u32)comp->data.huffman;
                    // <audible booing>
                    finished = func_08008594(comp->data.huffman, (info->dest + comp->rleOffset - comp->data.huffman->size), info->limit, info->huffmanSaveState);
                }
                info->size -= info->limit;
                if (info->size < 0) {
                    info->size = 0;
                }
                if (finished) {
                    info->decompressingHuffman = FALSE;
                    info->compressionLevel = COMPRESSION_LEVEL_RLE;
                }
                return;
        }

        gfxTable = ++info->gfxTable;
        if (gfxTable->src != NULL) {
            while (gfxTable->size == FUNCTION_GFX_SOURCE) {
                GfxTableSrcFunc func = gfxTable->src;
                func(gfxTable->dest);
                gfxTable++;
            }
            if (gfxTable->size != COMPRESSED_GFX_SOURCE) {
                info->compressionLevel = COMPRESSION_LEVEL_NONE;
                info->src = gfxTable->src;
                info->dest = (void *)func_08002a54(gfxTable->dest);
                info->size = gfxTable->size;
            } else {
                info->compressionLevel = COMPRESSION_LEVEL_RLE;
                info->src = (void *)func_0800869c(gfxTable->src);
                info->dest = (void *)func_08002a54(gfxTable->dest);
                info->size = 1;
                info->decodingRLE = FALSE;

                comp = info->src;
                if (comp->doubleCompressed) {
                    info->compressionLevel = COMPRESSION_LEVEL_HUFFMAN;
                    info->decompressingHuffman = FALSE;
                }
            }
        } else {
            info->active = FALSE;
            return;
        }
    }
}

#include "asm/code_08001360/asm_08002db0.s"

#include "asm/code_08001360/asm_08002db8.s"

#include "asm/code_08001360/asm_08002dc4.s"

#include "asm/code_08001360/asm_08002dec.s"

#include "asm/code_08001360/asm_08002e18.s"

#include "asm/code_08001360/asm_08002e2c.s"

#include "asm/code_08001360/asm_08002e44.s"

#include "asm/code_08001360/asm_08002e5c.s"

#include "asm/code_08001360/asm_08002e78.s"


// LoadGfxTableTask Start
void *func_08002eb0(struct LoadGfxTableTaskInputs *inputs) {
    struct GfxTableLoader *info;

    info = mem_heap_alloc(sizeof(struct GfxTableLoader));
    func_08002a6c(info, inputs->gfxTable, inputs->limit);
    return info;
}


// LoadGfxTableTask Update
u32 func_08002ecc(struct GfxTableLoader *info) {
    func_08002b10(info);
    return !info->active;
}


// New LoadGfxTableTask
s32 func_08002ee0(u16 memID, const struct GraphicsTable *gfxTable, u32 limit) {
    struct LoadGfxTableTaskInputs inputs;

    inputs.gfxTable = gfxTable;
    inputs.limit = limit;
    return start_new_task(memID, &D_089363fc, &inputs, NULL, 0);
}


#include "asm/code_08001360/asm_08002f04.s"

#include "asm/code_08001360/asm_08002f40.s"

#include "asm/code_08001360/asm_08002f48.s"

#include "asm/code_08001360/asm_08002f54.s"

#include "asm/code_08001360/asm_08002f5c.s"


/* MATH */


#define FUNC_SQRT_SIZE ((u32)&math_sqrt_rom_end - (u32)math_sqrt_rom)

extern s32 math_sqrt_rom(s32 value);
extern void *math_sqrt_rom_end;
extern s32 (*math_sqrt)(s32 value);

static s32 math_sqrt_code[120];


// Init. sqrt()
void init_math_sqrt(void) {
    DmaCopy32(3, math_sqrt_rom, math_sqrt_code, FUNC_SQRT_SIZE);
    math_sqrt = (void *)math_sqrt_code;
}


// ? (8 bits)
u8 func_08002f9c(s16 arg0, s16 arg1) {
    s32 r6;
    s32 sign;

    r6 = 0;
    sign = 1;

    if (arg0 < 0) {
        arg0 = -arg0;
        r6 = (64 * 2);
        sign = -sign;
    }

    if (arg1 < 0) {
        arg1 = -arg1;
        sign = -sign;
    }

    if (arg0 < arg1) {
        s32 swap;

        r6 += (64 * sign);
        sign = -sign;
        swap = arg0;
        arg0 = arg1;
        arg1 = swap;
    }

    return r6 + (sign * D_0893640c[64 * arg1 / arg0]);
}


// ? (16 bits)
u16 func_08003004(s16 arg0, s16 arg1) {
    s32 r6;
    s32 sign;

    r6 = 0;
    sign = 1;

    if (arg0 < 0) {
        arg0 = -arg0;
        r6 = (512 * 2);
        sign = -sign;
    }

    if (arg1 < 0) {
        arg1 = -arg1;
        sign = -sign;
    }

    if (arg0 < arg1) {
        s32 swap;

        r6 += (512 * sign);
        sign = -sign;
        swap = arg0;
        arg0 = arg1;
        arg1 = swap;
    }

    return r6 + (sign * D_0893644e[256 * arg1 / arg0]);
}


/* AGB ... */


#include "asm/code_08001360/asm_08003070.s"

#include "asm/code_08001360/asm_0800318c.s"

#include "asm/code_08001360/asm_08003278.s"

#include "asm/code_08001360/asm_08003384.s"

#include "asm/code_08001360/asm_08003398.s"

#include "asm/code_08001360/asm_080033a0.s"

#include "asm/code_08001360/asm_0800351c.s"

#include "asm/code_08001360/asm_08003598.s"

#include "asm/code_08001360/asm_080035a0.s"

#include "asm/code_08001360/asm_080036c4.s"

#include "asm/code_08001360/asm_08003720.s"

#include "asm/code_08001360/asm_0800387c.s"

#include "asm/code_08001360/asm_080038b0.s"

#include "asm/code_08001360/asm_08003974.s"

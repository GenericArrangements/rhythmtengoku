#include "global.h"
#include "sound.h"
#include "lib_08049144.h"

asm(".include \"include/gba.inc\"");//Temporary


  // // // // // // // // // // // // // // // // // // // //

extern u8 D_03001578[4];
extern u8 *D_03001590;
extern struct AudioChannel *D_03001598;

extern u8  D_030015a7; // Initial value at D_03005b7c

extern u32 D_03001888; // this is like, sample data or something
extern u32 D_030024c8; // sample envelope or something
extern struct Bingus D_030028c8; // bingus
extern struct Bingus D_03002a48; // bingus

extern u16 D_030055f0;

extern u32 D_03005620[3];
extern u32 D_0300562c; // Current Speed (NOT Tempo)

extern u32 D_03005638;

extern u8  D_03005640; // Byte 0 of MIDI Event F0; Set by MIDI Controller 4C
extern struct AudioChannel *D_03005644; // Channel which most recently called MIDI Event F0
extern u16 D_03005648; // Set by MIDI Controller 0E; Current byte in D_03005b7c to set

extern struct MidiNote D_03005650[20]; // MIDI Notes
extern struct Bingus D_030056a0[4];

extern u16 D_03005b20; // Total Bytes in array at D_03005b7c

extern u8  D_03005b28; // Set by MIDI Controller 4D; Only set if D_03005b44 == 0

extern struct Jason D_03005b30;
extern u8  D_03005b3c; // Set by MIDI Controller 49; Cleared by MIDI Controller 4A and MIDI Event F0

extern u8  D_03005b44; // Must be clear for certain operations to work; Affects MIDI Controllers 49, 4A and 4D

extern u16 D_03005b78; // Current Available MIDI Note Slot
extern u8 *D_03005b7c; // Byte at offset D_03005648 set by MIDI Controller 10;
extern u16 D_03005b80;

extern struct Bingus *D_03005b88; // bingus
extern u16 D_03005b8c; // Total number of elements at D_030064bc
extern s8  D_03005b90[]; // Reverb controller..?

extern u32 *D_030064b0;
extern struct Bingus *D_030064bc; // bingus
extern u8  D_030064c0; // Set to 0 alongside all elements in D_03005620

  // // // // // // // // // // // // // // // // // // // //

extern s16  D_08a86008[]; // ?? (some curve)
extern InstrumentBank *instrumentBanks[]; // Instrument Bank Index
extern char D_08a865a4[]; // MIDI "Loop Start" Marker: '['
extern char D_08a865a8[]; // MIDI "Loop End" Marker: ']'

  // // // // // // // // // // // // // // // // // // // //





  //  //  //  //   ??? CODE   //  //  //  //


#include "asm/lib_08049144/asm_08049144.s"

#include "asm/lib_08049144/asm_0804930c.s"

#include "asm/lib_08049144/asm_08049394.s"

// [func_080493b0] ?
void func_080493b0(u32 id) {
    D_03005b88[id].unk0_b0 = 0;
}

// [func_080493c8] Store panning-related values to D_03005b88[id].
void func_080493c8(u32 id, u32 pan1, u32 pan2) {
    D_03005b88[id].unk2 = pan1;
    D_03005b88[id].unk3 = pan2;
}

#include "asm/lib_08049144/asm_080493e4.s"

#include "asm/lib_08049144/asm_080493f4.s"

#include "asm/lib_08049144/asm_08049450.s"

#include "asm/lib_08049144/asm_08049470.s"

#include "asm/lib_08049144/asm_08049490.s"

#include "asm/lib_08049144/asm_080497f8.s"

#include "asm/lib_08049144/asm_08049ad8.s"

#include "asm/lib_08049144/asm_08049b34.s"

#include "asm/lib_08049144/asm_08049b5c.s"

// [func_08049b70] (SUB) MIDI Controller 4A - ??
void func_08049b70(u32 arg0) {
    if (D_03005b44 == 0) D_03005620[0] = arg0;
}

// [func_08049b8c] MIDI Controller 4D - ??
void func_08049b8c(u8 arg0) {
    if (D_03005b44 == 0) D_03005b28 = arg0;
}

// [func_08049bac] ??
void func_08049bac(void) {
    D_03005620[2] = 0;
    D_03005620[1] = 0;
    D_03005620[0] = 0;
    D_030064c0 = 0;
    D_030064b0[D_03005638 - 2] = D_030064b0[D_03005638 - 1] = 0;
}

// [func_08049be4] MIDI Controller 49 - ??; MIDI Controller 4A - ??
void func_08049be4(void) {
    if (D_03005b44 == 0) func_08049bac();
}

#include "asm/lib_08049144/asm_08049bfc.s"

#include "asm/lib_08049144/asm_08049c34.s"

#include "asm/lib_08049144/asm_08049d08.s"

// [func_08049d30] ?? (Unload)
void func_08049d30(struct MidiChannelBus *mChnlBus, u32 id) {
    struct MidiChannel *mChnl = &mChnlBus->midiChannel[id];
    u32 i;

    if (mChnl->volumeWheel == 0) {
        func_08049db8(mChnlBus, id);
        return;
    }
    for (i = 0; i < D_03005b8c; i++) {
        if (D_030064bc[i].unk0_b0 && (D_030064bc[i].midiChannel == mChnl)) {
            D_030064bc[i].unk1C = 4;
        }
    }
    for (i = 0; i < 4; i++) {
        if (D_030056a0[i].unk0_b0 && (D_030056a0[i].midiChannel == mChnl)) {
            D_030056a0[i].unk1C = 4;
        }
    }
}

// [func_08049db8] ??
void func_08049db8(struct MidiChannelBus *mChnlBus, u32 id) {
    struct MidiChannel *mChnl = &mChnlBus->midiChannel[id];
    u32 i;

    for (i = 0; i < D_03005b8c; i++) {
        if (D_030064bc[i].unk0_b0 && (D_030064bc[i].midiChannel == mChnl)) {
            D_030064bc[i].unk0_b0 = 0;
            func_080493b0(i);
        }
    }
    for (i = 0; i < 4; i++) {
        if (D_030056a0[i].unk0_b0 && (D_030056a0[i].midiChannel == mChnl)) {
            D_030056a0[i].unk1C = 3;
            D_030056a0[i].unk1D = 0;
        }
    }
}

// [func_08049e3c] ?? (Unload)
void func_08049e3c(struct MidiChannelBus *mChnlBus) {
    u32 i;

    for (i = 0; i < mChnlBus->totalChannels; i++) {
        func_08049d30(mChnlBus, i);
    }
}

// [func_08049e64] ??
void func_08049e64(struct MidiChannelBus *midi_channelBus) {
    u32 i;
    for (i = 0; i < midi_channelBus->totalChannels; i++) {
        func_08049db8(midi_channelBus, i);
    }
}

// [func_08049e8c] ??
void func_08049e8c(struct MidiChannelBus *mChnlBus, u8 priority) {
    u32 i;

    mChnlBus->priority = priority;
    for (i = 0; i < mChnlBus->totalChannels; i++) {
        func_0804ad18(mChnlBus, i, 0);
    }
}

// [func_08049ec4] MIDI CHANNEL BUS - Set Selected Track Volume & Track Selection
void func_08049ec4(struct MidiChannelBus *mChnlBus, u8 volume, u16 selection) {
    mChnlBus->trackVol = volume;
    mChnlBus->trackSel = selection;
}

// [func_08049ecc] INITIALISE - MIDI Channel
void func_08049ecc(struct MidiChannel *mChnl) {
    mChnl->unk0_b0 = 0;
    mChnl->unk0_b1 = 0;
    mChnl->instPatch = 0;
    mChnl->unk0_b9 = 0;
    mChnl->volume = 0x64;
    mChnl->panning = 0x40;
    mChnl->expression = 0x7F;
    mChnl->unk4_b21 = 0;
    mChnl->modDepth = 0;
    mChnl->modType = 0;
    mChnl->unkC = 1;
    mChnl->modSpeed = 0x3C00;
    mChnl->modCount = 0;
    mChnl->modDelay = 0;
    mChnl->modDelayCount = 0;
    mChnl->modResult = 0;
    mChnl->pitchWheel = 0x2000;
    mChnl->modRange = 2;
    mChnl->priority = 0;
    mChnl->unk0_b30 = 0;
    mChnl->stereo = 0;
    mChnl->rndmPitch = 0x100;
    mChnl->rndmPitchFloor = 0x100;
    mChnl->rndmPitchRange = 0;
    mChnl->unk1C = 0;
    mChnl->unk1D = 0;
    mChnl->unk1E = 0;
}

// [func_08049fa0] INITIALISE - MIDI Channel Bus
void func_08049fa0(struct MidiChannelBus *mChnlBus, u32 totalChannels, struct MidiChannel *mChnl) {
    u32 i;

    mChnlBus->volume = 0x64;
    mChnlBus->trackVol = 0x64;
    mChnlBus->trackSel = 0;
    mChnlBus->unk4 = 0;
    mChnlBus->unk5 = 0;
    mChnlBus->pitch = 0;
    mChnlBus->unk8 = 0x1400;
    mChnlBus->unkC = &D_08a86008[0];

    mChnlBus->totalChannels = totalChannels;
    mChnlBus->midiChannel = mChnl;
    for (i = 0; i < totalChannels; i++) {
        func_08049ecc(&mChnl[i]);
    }

    mChnlBus->priority = 0;
    for (i = 0; i < 12; i++) {
        mChnlBus->unk1C[i] = 0;
    }
}

// [func_0804a014] INITIALISE - MIDI Channel Bus - Set Sound Bank
void func_0804a014(struct MidiChannelBus *mChnlBus, const InstrumentBank *instBank) {
    mChnlBus->soundBank = instBank;
}

#include "asm/lib_08049144/asm_0804a018.s"

#include "asm/lib_08049144/asm_0804a1f4.s"

#include "asm/lib_08049144/asm_0804a224.s"

#include "asm/lib_08049144/asm_0804a2c4.s"

#include "asm/lib_08049144/asm_0804a334.s"

// [func_0804a360] Initialise D_030064bc (Bingus)
void func_0804a360(u32 total, struct Bingus *bingus) {
    u32 i;

    D_03005b8c = total;
    D_030064bc = bingus;

    for (i = 0; i < D_03005b8c; i++) {
        D_030064bc[i].unk0_b0 = 0;
    }
}

#include "asm/lib_08049144/asm_0804a3a0.s"

#include "asm/lib_08049144/asm_0804a3fc.s"

#include "asm/lib_08049144/asm_0804a434.s"

#include "asm/lib_08049144/asm_0804a48c.s"

#include "asm/lib_08049144/asm_0804a4e0.s"

#include "asm/lib_08049144/asm_0804a5b4.s"

#include "asm/lib_08049144/asm_0804a628.s"

// [func_0804a65c] ?? (something about left panning)
u8 func_0804a65c(u8 panning) {
    if (panning > 0x3f) return 0x7f;
    else return panning << 1;
}

// [func_0804a674] ?? (something about right panning)
u8 func_0804a674(u8 panning) {
    if (panning <= 0x3f) return 0x7f;
    else return (0x7f - panning) << 1;
}

#include "asm/lib_08049144/asm_0804a690.s"

#include "asm/lib_08049144/asm_0804a6b0.s"


  //  //  //  //   MIDI CHANNEL OPERATIONS   //  //  //  //


// [func_0804aa40] MIDI CHANNEL - Set Pitch Wheel [Evnt_E]
void func_0804aa40(struct MidiChannelBus *mChnlBus, u32 id, u16 pitch) {
    mChnlBus->midiChannel[id].pitchWheel = pitch;
}

// [func_0804aa5c] MIDI CHANNEL - Set Volume [Ctrl_07]
void func_0804aa5c(struct MidiChannelBus *mChnlBus, u32 id, u8 volume) {
    mChnlBus->midiChannel[id].volume = volume;
}

// [func_0804aa7c] MIDI CHANNEL - Set Panning [Ctrl_0A]
void func_0804aa7c(struct MidiChannelBus *mChnlBus, u32 id, u8 panning) {
    mChnlBus->midiChannel[id].panning = panning;
    func_0804aae0(mChnlBus, id);
}

// [func_0804aaa4] MIDI CHANNEL - Return a net Panning value, factoring all relevant Panning controllers.
u8 func_0804aaa4(struct MidiChannelBus *mChnlBus, u32 id) {
    struct MidiChannel *mChnl = &mChnlBus->midiChannel[id];
    s32 panning = mChnl->panning + (mChnlBus->unk5 >> 1);

    // Include modulation if modType is set to "panning".
    if (mChnl->modType == 2) panning += (mChnl->modResult >> 1);

    // Clamp to 7 bits and return.
    if (panning < 0) panning = 0;
    if (panning > 0x7f) panning = 0x7f;
    return panning;
}

// [func_0804aae0] MIDI CHANNEL - ??? (called after setting channel panning)
void func_0804aae0(struct MidiChannelBus *mChnlBus, u32 id) {
    s32 panning = func_0804aaa4(mChnlBus, id);
    struct MidiChannel *mChnl = &mChnlBus->midiChannel[id];
    u32 isStereo = (mChnl->stereo) ? -1 : 1;
    s32 i = 0;
    struct Bingus *bingus = D_030064bc;

    for (i; i < D_03005b8c;) {
        if (bingus->unk0_b0 && (bingus->midiChannel == mChnl)) {
            panning += bingus->unk18;
            // Clamp to 7 bits.
            if (panning < 0) panning = 0;
            if (panning > 0x7f) panning = 0x7f;
            func_080493c8(i, func_0804a674(panning), func_0804a65c(panning) * isStereo);
        }
        i++;
        bingus++;
    }
}

// [func_0804ab88] MIDI Channel - Set Instrument/Patch [Evnt_C]
void func_0804ab88(struct MidiChannelBus *mChnlBus, u32 id, u8 inst) {
    mChnlBus->midiChannel[id].instPatch = inst;
}

// [func_0804aba8] MIDI CHANNEL - Set Expression [Ctrl_0B]
void func_0804aba8(struct MidiChannelBus *mChnlBus, u32 id, u8 expression) {
    mChnlBus->midiChannel[id].expression = expression;
}

// [func_0804abc8] MIDI CHANNEL - Set unk0_b9 [Ctrl_00; Ctrl_20]
void func_0804abc8(struct MidiChannelBus *mChnlBus, u32 id, u16 var) {
    u16 unk0_b9 = mChnlBus->midiChannel[id].unk0_b9;

    // MIDI Controller 00 - ??
    if (var & 0x8000) {
        unk0_b9 &= 0x3f80;     // Bits 0-6  = 0
        unk0_b9 |= (var << 7); // Bits 7-13 = var
    }
    // MIDI Controller 20 - ??
    else {
        unk0_b9 &= 0x7f; // Bits 7-13 = 0
        unk0_b9 |= var;  // Bits 0-6  = var
    }
    mChnlBus->midiChannel[id].unk0_b9 = unk0_b9;
}

// [func_0804ac24] MIDI CHANNEL - Set unk0_b0
void func_0804ac24(struct MidiChannelBus *mChnlBus, u32 id, u8 var) {
    mChnlBus->midiChannel[id].unk0_b0 = var;
}

// [func_0804ac40] MIDI CHANNEL - Set Modulation Depth [Ctrl_01]
void func_0804ac40(struct MidiChannelBus *mChnlBus, u32 id, u8 depth) {
    mChnlBus->midiChannel[id].modDepth = depth;
}

// [func_0804ac60] MIDI CHANNEL - Set unk4_b21
void func_0804ac60(struct MidiChannelBus *mChnlBus, u32 id, u8 var) {
    mChnlBus->midiChannel[id].unk4_b21 = var;
}

// [func_0804ac80] MIDI CHANNEL - Set Compression/Dampening? [Ctrl_48]
void func_0804ac80(struct MidiChannelBus *mChnlBus, u32 id, u8 comp) {
    mChnlBus->midiChannel[id].unk0_b30 = comp;
}

// [func_0804aca0] MIDI CHANNEL - Set Modulation Type [Ctrl_16]
void func_0804aca0(struct MidiChannelBus *mChnlBus, u32 id, u8 type) {
    mChnlBus->midiChannel[id].modType = type;
}

// [func_0804acc0] MIDI CHANNEL - Set unkC
void func_0804acc0(struct MidiChannelBus *mChnlBus, u32 id, u8 var) {
    mChnlBus->midiChannel[id].unkC = var;
}

// [func_0804accc] MIDI CHANNEL - Set Modulation Speed [Ctrl_15]
void func_0804accc(struct MidiChannelBus *mChnlBus, u32 id, u16 speed) {
    mChnlBus->midiChannel[id].modSpeed = speed << 8;
}

// [func_0804acd8] MIDI CHANNEL - Set Modulation Delay [Ctrl_1A]
void func_0804acd8(struct MidiChannelBus *mChnlBus, u32 id, u8 delay) {
    mChnlBus->midiChannel[id].modDelay = delay;
}

// [func_0804ace4] MIDI CHANNEL - Set Modulation Range [Ctrl_14]
void func_0804ace4(struct MidiChannelBus *mChnlBus, u32 id, u8 range) {
    mChnlBus->midiChannel[id].modRange = range;
}

// [func_0804acf0] MIDI CHANNEL - Set Offset/Split Stereo Effect [Ctrl_4B]
void func_0804acf0(struct MidiChannelBus *mChnlBus, u32 id, u32 var) {
    mChnlBus->midiChannel[id].stereo = var;
    func_0804aa7c(mChnlBus, id, mChnlBus->midiChannel[id].panning);
}

// [func_0804ad18] MIDI CHANNEL - Set Priority [Ctrl_21]
void func_0804ad18(struct MidiChannelBus *mChnlBus, u32 i, u8 priority) {
    mChnlBus->midiChannel[i].priority = priority + mChnlBus->priority;
}

// [func_0804ad38] MIDI CHANNEL - Set Random Pitch Variation [Ctrl_52]
void func_0804ad38(struct MidiChannelBus *mChnlBus, u32 id, u8 range) {
    u32 lowMax = 0x8000 / (u32) (range + 0x80);
    u32 highMax = 0x10000 / (u32) (0x100 - range);

    mChnlBus->midiChannel[id].rndmPitchFloor = lowMax;
    mChnlBus->midiChannel[id].rndmPitchRange = highMax - lowMax;
    mChnlBus->midiChannel[id].rndmPitch = 0x100;
}

// [func_0804ad90] MIDI CHANNEL - Set unk1C [Ctrl_53]
void func_0804ad90(struct MidiChannelBus *mChnlBus, u32 id, u8 var) {
    mChnlBus->midiChannel[id].unk1C = var;
}

// [func_0804ad9c] MIDI CHANNEL - Set unk1D & unk1E [Ctrl_54]
void func_0804ad9c(struct MidiChannelBus *mChnlBus, u32 id, u8 var) {
    mChnlBus->midiChannel[id].unk1D = var;
    mChnlBus->midiChannel[id].unk1E = var;
}


  //  //  //  //   MIDI CHANNEL BUS OPERATIONS   //  //  //  //


// [func_0804adb0] MIDI CHANNEL BUS - Set unk4
void func_0804adb0(struct MidiChannelBus *mChnlBus, u8 var) {
    mChnlBus->unk4 = var;
}

// [func_0804adb4] MIDI CHANNEL BUS - Set Volume
void func_0804adb4(struct MidiChannelBus *mChnlBus, u8 volume) {
    mChnlBus->volume = volume;
}

// [func_0804adb8] MIDI CHANNEL BUS - Set Panning
void func_0804adb8(struct MidiChannelBus *mChnlBus, s8 panning) {
    u32 i;
    mChnlBus->unk5 = panning;

    for (i = 0; i < mChnlBus->totalChannels; i++) {
        func_0804aae0(mChnlBus, i);
    }
}

// [func_0804ade4] MIDI CHANNEL BUS - Set Pitch
void func_0804ade4(struct MidiChannelBus *mChnlBus, s16 pitch) {
    mChnlBus->pitch = pitch;
}

// [func_0804ade8] MIDI CHANNEL BUS - Set Modulation Range
void func_0804ade8(struct MidiChannelBus *mChnlBus, u8 range) {
    u32 i;

    for (i = 0; i < mChnlBus->totalChannels; i++) {
        mChnlBus->midiChannel[i].modRange = range;
    }
}

// [func_0804ae14] MIDI CHANNEL BUS - Set unk8
void func_0804ae14(struct MidiChannelBus *mChnlBus, u16 var) {
    mChnlBus->unk8 = var;
}

// [func_0804ae18] MIDI CHANNEL BUS - Set unkC
void func_0804ae18(struct MidiChannelBus *mChnlBus, s16 *var) {
    mChnlBus->unkC = var;
}


  //  //  //  //   "JASON" STRUCT OPERATIONS   //  //  //  //


// [func_0804ae1c] ??
void func_0804ae1c(struct Jason* jason, u8 arg1, u8 arg2, u8 arg3, u8 arg4, u8 arg5) {
    jason->unk6 = 0;
    jason->unk7 = 0;
    jason->unk8 = 0;
    jason->unk0 = arg1;
    jason->unk1 = arg2;
    jason->unk2 = 0x10000 / arg3;
    jason->unk4 = arg4;
    jason->unk5 = arg5;
}

// [func_0804ae54] Set ?? [Ctrl_49]
void func_0804ae54(struct Jason *arg0) {
    arg0->unk6 = 1;
    arg0->unk8 = 0;
    arg0->unk7 = 0;
}

// [func_0804ae60] Set ?? [Ctrl_49; Ctrl_4A]
void func_0804ae60(struct Jason *arg0) {
    arg0->unk6 = 0;
    arg0->unk8 = 0;
    arg0->unk7 = 0;
}

#include "asm/lib_08049144/asm_0804ae6c.s"

#include "asm/lib_08049144/asm_0804af0c.s"

// [func_0804af30] Initialise D_030056a0 (Bingus) and D_03001578.
void func_0804af30(void) {
    u32 i;

    for (i = 0; i < 4; i++) {
        D_030056a0[i].unk0_b0 = 0;
    }

    for (i = 0; i < 4; i++) {
        D_03001578[i] = 0;
    }
    *D_03001590 = 0;
}

#include "asm/lib_08049144/asm_0804af74.s"

#include "asm/lib_08049144/asm_0804afa4.s"

#include "asm/lib_08049144/asm_0804afd8.s"

#include "asm/lib_08049144/asm_0804aff0.s"

#include "asm/lib_08049144/asm_0804b2c4.s"


  //  //  //  //   AUDIO CHANNEL OPERATIONS   //  //  //  //


// [func_0804b324] AUDIO CHANNEL - Parse 16-bit Big Endian value in Byte Stream.
u16 func_0804b324(u8 *stream) {
    return (stream[0] << 8) | stream[1];
}

// [func_0804b330] AUDIO CHANNEL - Parse 32-bit Big Endian value in Byte Stream.
u32 func_0804b330(u8 *stream) {
    return (stream[0]) << 0x18 | (stream[1]) << 0x10 | (stream[2]) << 8 | stream[3];
}

// [func_0804b348] AUDIO CHANNEL - Loop Marker Symbol Length
u32 func_0804b348(char label[]) {
    u8 i;

    for (i = 0; label[i] != 0; i++);
    return i;
}

// [func_0804b368] AUDIO CHANNEL - Store Sound Sequence
void func_0804b368(struct AudioChannel *channel, const struct SequenceData *seqData) {
    struct MidiChannelBus *mChnlBus;
    struct MidiTrackReader *mTrkReader;
    u8 *mTrkStream;
    u8 *mTrkStart;
    u32 chunkLength;
    u32 trackTotal;
    u32 deltaTime;
    u32 i;

    // Reading Sequence Data:
    if (func_0804b5a0(channel)) {
        if (channel->unk0_b21 && !channel->isPaused) {
            if (channel->sequenceData->priority > seqData->priority) return;
        }
    }
    mChnlBus = channel->midi_channelBus;
    func_08049e64(mChnlBus);
    func_08049fa0(mChnlBus, mChnlBus->totalChannels, mChnlBus->midiChannel);
    func_0804a014(mChnlBus, instrumentBanks[seqData->soundBank]);
    func_0804adb4(mChnlBus, seqData->volume);
    func_08049e8c(mChnlBus, seqData->priority);
    channel->sequenceData = seqData;
    channel->volume = seqData->volume;

    // Reading MIDI Data:
    mTrkStream = (u8 *)seqData->romAddress;

    // Header:
    mTrkStream += 4; // Skip (Header: "MThd")
    chunkLength = func_0804b330(mTrkStream);
    mTrkStream += 4; // Skip (Header: Length)
    trackTotal = func_0804b324(mTrkStream + 2); // Header: Number of MIDI Tracks
    channel->nTracksUsed = trackTotal;

    if (channel->nTracksUsed > channel->nTracksMax) {
        channel->nTracksUsed = channel->nTracksMax;
    }
    channel->midi_quarterNote = func_0804b324(mTrkStream + 4); // Header: Division
    mTrkStream += chunkLength; // Skip (Header: Data)

    // Track:
    mTrkReader = channel->midi_trackReader;
    for (i = 0; i < channel->nTracksUsed; i++) {
        mTrkStream += 4; // Skip (Track: Length)
        chunkLength = func_0804b330(mTrkStream);
        mTrkStream += 4; // Skip (Track: Length)
        mTrkStart = mTrkStream;
        mTrkStream += chunkLength;
        mTrkReader->unk0_b0 = 1;
        mTrkReader->start = mTrkStart;
        deltaTime = func_0804c398(&mTrkStart);
        mTrkReader->unkC = deltaTime << 8;
        mTrkReader->current = mTrkStart;
        mTrkReader->deltaTime = deltaTime;
        mTrkReader->unk0_b1 = 0;
        mTrkReader->unk0_b18 = 0;
        mTrkReader++;
    }

    // Other Data:
    channel->unk0_b10 = 0;
    channel->isPaused = 0;
    channel->speed = 1;
    channel->env_channelVol = 0x100;
    channel->env_speed = 0x100;
    channel->env_trackVol = 0x100;
    channel->volFadeType = 0;
    channel->env_volFadeEnv = 0x8000;
    channel->env_volFadeSpeed = 0;
    channel->midi_loopStartSym = &D_08a865a4[0];
    channel->midi_loopStartSymSize = func_0804b348(D_08a865a4);
    channel->midi_loopEndSym = &D_08a865a8[0];
    channel->midi_loopEndSymSize = func_0804b348(D_08a865a8);
    channel->midiController4E = 0x40;
    channel->midiController4F = 0x40;
    channel->midiController50 = 0x40;
    channel->midiController51 = 0x40;
    channel->unk34 = 0;
}

// [func_0804b534] AUDIO CHANNEL - Load & Store Sound Sequence from Index
void func_0804b534(u16 index) {
    struct AudioChannel *channel;
    const struct SequenceData *seqData;

    channel = D_08aa4460[D_08aa06f8[index].channelID].audioChannel;
    seqData = D_08aa06f8[index].sequenceData;
    func_0804b368(channel, seqData);
}

// [func_0804b560] AUDIO CHANNEL - Remove Sound Sequence
void func_0804b560(struct AudioChannel *channel) {
    func_08049e3c(channel->midi_channelBus);
    channel->sequenceData = 0;
}

// [func_0804b574] AUDIO CHANNEL - Pause/Unpause Sound Sequence { 0 = Unpause; 1 = Pause }
void func_0804b574(struct AudioChannel *channel, u8 pause) {
    channel->isPaused = pause;
    if (pause) func_08049e64(channel->midi_channelBus);
}

// [func_0804b5a0] AUDIO CHANNEL - Check for Active MIDI Readers
u32 func_0804b5a0(struct AudioChannel *channel) {
    u32 i;

    if (channel->sequenceData == 0) return 0;
    for (i = 0; i < channel->nTracksUsed; i++) {
        if (channel->midi_trackReader[i].unk0_b0) return 1;
    }
    return 0;
}

// [func_0804b5d8] AUDIO CHANNEL - Pause Channel
void func_0804b5d8(struct AudioChannel *channel) {
    func_0804b574(channel, 1);
}

// [func_0804b5e4] AUDIO CHANNEL - Unpause Channel
void func_0804b5e4(struct AudioChannel *channel) {
    func_0804b574(channel, 0);
}

// [func_0804b5f0] AUDIO CHANNEL - Pause All Channels
void func_0804b5f0(void) {
    u32 i;

    for (i = 0; i <= D_08aa4318; i++) {
        func_0804b574(D_08aa4324[i], 1);
    }
}

// [func_0804b620] AUDIO CHANNEL - Unpause All Channels
void func_0804b620(void) {
    u32 i;

    for (i = 0; i <= D_08aa4318; i++) {
        func_0804b574(D_08aa4324[i], 0);
    }
}

// [func_0804b650] AUDIO CHANNEL - Set Volume
void func_0804b650(struct AudioChannel *channel, u16 volume) {
    channel->env_channelVol = volume;
}

// [func_0804b654] AUDIO CHANNEL - Set Volume for Selected Tracks
void func_0804b654(struct AudioChannel *channel, u16 tracks, u16 volume) {
    channel->env_trackVol = volume;
    channel->env_trackSel = tracks;
}

// [func_0804b65c] AUDIO CHANNEL - Set Pitch
void func_0804b65c(struct AudioChannel *channel, u16 unused, s16 pitch) {
    func_0804ade4(channel->midi_channelBus, pitch);
}

// [func_0804b66c] AUDIO CHANNEL - Set Panning
void func_0804b66c(struct AudioChannel *channel, u16 unused, s8 panning) {
    func_0804adb8(channel->midi_channelBus, panning);
}

// [func_0804b67c] AUDIO CHANNEL - Pause Sound Sequence from Index
void func_0804b67c(u16 offset) {
    struct SequenceData *seqData = D_08aa06f8[offset].sequenceData;
    u32 i;

    for (i = 0; i <= D_08aa4318; i++) {
        if ((D_08aa4324[i] != 0) && (D_08aa4324[i]->sequenceData == seqData)) {
            func_0804b5d8(D_08aa4324[i]);
        }
    }
}

// [func_0804b6c4] UTIL - String.equals()
u32 func_0804b6c4(u8 *byteStream0, u8 *byteStream1, u32 length) {
    u32 i;

    for (i = 0; i < length; i++) {
        if (byteStream0[i] != byteStream1[i]) return 0;
    }
    return 1;
}

// [func_0804b6f0] UTIL - Playback Speed Formula
u32 func_0804b6f0(u16 tempo, u16 speedEnv, u16 quarterNote) {
    return (u32) (tempo * speedEnv * quarterNote) / 0xe10;
}

// [func_0804b710] AUDIO CHANNEL - Align Speed with BeatScript
void func_0804b710(struct AudioChannel *channel, u16 speedEnv) {
    u32 speed;

    channel->env_speed = speedEnv;
    speed = func_0804b6f0(channel->midi_tempo, speedEnv, channel->midi_quarterNote);
    if (speed == 0) speed = 1;
    channel->speed = speed;
}

// [func_0804b734] AUDIO CHANNEL - Apply Volume Fade { type = 0..3 }
void func_0804b734(struct AudioChannel *channel, u16 type, u16 time) {
    switch (type) {
        case 0: // Reset Fade
            channel->env_volFadeEnv = 0x8000;
            channel->env_volFadeSpeed = 0;
            break;

        case 1: // Fade In
            if (time == 0) time = 1;
            if (channel->volFadeType == 0) channel->env_volFadeEnv = 0;
            channel->env_volFadeSpeed = 0x8000 / time;
            channel->isPaused = 0;
            break;

        case 2: // Fade Out & Clear
        case 3: // Fade Out & Pause
            if (channel->volFadeType == 0) channel->env_volFadeEnv = 0x8000;
            if (time != 0) {
                channel->env_volFadeSpeed = 0x8000 / time;
            } else {
                channel->env_volFadeEnv = 0;
                channel->env_volFadeSpeed = 1;
                if (type == 2) {
                    type = 0;
                    func_0804b560(channel);
                } else {
                    func_0804b574(channel, 1);
                }
            }
            break;
    }
    channel->volFadeType = type;
}

// [func_0804b7dc] AUDIO CHANNEL - Volume Fade-Out & Clear
void func_0804b7dc(struct AudioChannel *channel, u16 time) {
    func_0804b734(channel, 2, time);
}

// [func_0804b7ec] AUDIO CHANNEL - Volume Fade-Out & Pause
void func_0804b7ec(struct AudioChannel *channel, u16 time) {
    func_0804b734(channel, 3, time);
}

// [func_0804b7fc] AUDIO CHANNEL - Volume Fade-In
void func_0804b7fc(struct AudioChannel *channel, u16 time) {
    func_0804b734(channel, 1, time);
}


  //  //  //  //   MIDI SEQUENCE OPERATIONS   //  //  //  //


// [func_0804b80c] MIDI - System-Exclusive Message [Evnt_F0]
void func_0804b80c(struct AudioChannel *channel, u8 *stream) {
    struct MidiChannelBus *mChnlBus = channel->midi_channelBus;
    u8 type = *stream;
    u32 i;

    stream++;
    switch (type) {
        case 0:
            func_08049be4();
            D_03005b3c = 0;
            D_03005640 = stream[0] * 2;
            func_0804ae1c(&D_03005b30, stream[1] * 2, stream[2] * 2, stream[3] * 2, stream[4] * 2, stream[5] * 2);
            func_08049b8c(stream[6]);
            D_03005644 = channel;
            break;

        case 1:
            for (i = 0; i < 12; i++) {
                mChnlBus->unk1C[i] = stream[i] - 0x40;
            }
            break;
    }
}

// [func_0804b898] MIDI - Meta Event (Loop Start, Loop End, Track End, Set Tempo)
u32 func_0804b898(struct AudioChannel *channel, u8 **upstream) {
    u8 *stream = *upstream;
    u8 event = *stream;
    u32 length;
    u32 tempo;

    stream++;
    length = func_0804c398(&stream);
    *upstream = stream + length;

    switch (event) {
        // Text Marker
        case 0x06:
            if (length == channel->midi_loopStartSymSize) {
                if (func_0804b6c4(channel->midi_loopStartSym, stream, length))
                    return 2;
            }
            if (length == channel->midi_loopEndSymSize) {
                if (func_0804b6c4(channel->midi_loopEndSym, stream, length))
                    return 3;
            }
            return 0;

        // End of Track
        case 0x2F:
            return 1;

        // Set Tempo
        case 0x51:
            tempo = (u32) 60000000 / ((stream[0] << 0x10) | (stream[1] << 0x8) | stream[2]);
            channel->midi_tempo = tempo;
            D_0300562c = func_0804b6f0(tempo, channel->env_speed, channel->midi_quarterNote);
            return 0;

        // Else, do nothing.
        default:
            return 0;
    }
}

// [func_0804b95c] MIDI - Controller Change [Evnt_B]
void func_0804b95c(struct AudioChannel *audioChnl, u32 id, u8 ctrl, u8 var) {
    struct MidiChannelBus *mChnlBus = audioChnl->midi_channelBus;

    switch (ctrl) {
        case 0x00: func_0804abc8(mChnlBus, id, var | 0x8000); break;
        case 0x01: func_0804ac40(mChnlBus, id, var); break;
        case 0x07: func_0804aa5c(mChnlBus, id, var); break;
        case 0x0A: func_0804aa7c(mChnlBus, id, var); break;
        case 0x0B: func_0804aba8(mChnlBus, id, var); break;
        case 0x14: func_0804ace4(mChnlBus, id, var); break;
        case 0x15: func_0804accc(mChnlBus, id, var); break;
        case 0x16: func_0804aca0(mChnlBus, id, var); break;
        case 0x1A: func_0804acd8(mChnlBus, id, var); break;
        case 0x20: func_0804abc8(mChnlBus, id, var); break;
        case 0x21: func_0804ad18(mChnlBus, id, var); break;
        case 0x0E: D_03005648 = var; break;
        case 0x10: if (D_03005648 < D_03005b20) D_03005b7c[D_03005648] = var; break;
        case 0x48: func_0804ac80(mChnlBus, id, var); break;
        case 0x49: D_03005b3c = var;
            switch (var) {
                case 0:
                case 1: func_0804ae60(&D_03005b30); break;
                case 2: func_08049be4(); func_0804ae54(&D_03005b30); break;
            } break;
        case 0x4A: D_03005b3c = 0;
            func_0804ae60(&D_03005b30);
            func_08049be4();
            func_08049b70((var * 2) - 0x80);
            break;
        case 0x4C: D_03005640 = var * 2; break;
        case 0x4D: func_08049b8c(var); break;
        case 0x4B: func_0804acf0(mChnlBus, id, var); break;
        case 0x4E: audioChnl->midiController4E = var; break;
        case 0x4F: audioChnl->midiController4F = var; break;
        case 0x50: audioChnl->midiController50 = var; break;
        case 0x51: audioChnl->midiController51 = var; break;
        case 0x52: func_0804ad38(mChnlBus, id, var); break;
        case 0x53: func_0804ad90(mChnlBus, id, var); break;
        case 0x54: func_0804ad9c(mChnlBus, id, var); break;
    }
}

// [func_0804bc5c] MIDI - Note Off/On [Evnt_8; Evnt_9]
void func_0804bc5c(u32 id, u32 key, u32 vel) {
    struct MidiNote *midiNote;

    if (D_03005b78 < 20) {
        midiNote = &D_03005650[D_03005b78++];
        midiNote->channel = id;
        midiNote->key = key;
        midiNote->velocity = vel;
    }
}

// [func_0804bcc0] MIDI - Messages/Events
u32 func_0804bcc0(struct AudioChannel *channel, u32 id) {
    u32 trackEndType = 0;
    struct MidiTrackReader *reader = &channel->midi_trackReader[id];
    struct MidiTrackReader *tempReader;
    u8 *byteStream = reader->current;
    u8 command;
    u16 mod;
    u32 i;

    // ??
    command = byteStream[0];
    if ((command & 0x80) != 0) {
        reader->unk0_b2 = command;
        byteStream++;
    }
    command = reader->unk0_b2;

    // MIDI Meta Events & System Messages
    if (command > 0xEF) {
        switch (command & 0x0F) {
            // MIDI System Exclusive Message (F0)
            case 0x00:
                i = func_0804c398(&byteStream);
                func_0804b80c(channel, byteStream);
                byteStream += i;
                break;

            // MIDI Meta Events (FF)
            case 0x0F:
                switch (func_0804b898(channel, &byteStream)) {
                    // End of Track
                    case 1:
                        func_0804accc(channel->midi_channelBus, id, 0);
                        return 1;

                    // Marker: Loop Start
                    case 2:
                        if (channel->unk0_b10) break;
                        reader->unk0_b1 = reader->unk0_b0;
                        reader->unk0_b10 = reader->unk0_b2;
                        reader->unk10 = byteStream;
                        reader->unk0_b18 = 1;
                        channel->unk34 = reader->deltaTime;
                        channel->unk0_b10 = 1;
                        break;

                    // Marker: Loop End
                    case 3:
                        if (!channel->unk0_b10) break;
                        for (i = 0; i < channel->nTracksUsed; i++) {
                            tempReader = &channel->midi_trackReader[i];
                            tempReader->unk0_b0 = tempReader->unk0_b1;
                            tempReader->unk0_b2 = tempReader->unk0_b10;
                            if (reader == tempReader) {
                                byteStream = reader->unk10;
                            } else {
                                tempReader->current = tempReader->unk10;
                                tempReader->unkC = reader->unkC;
                            }
                            func_08049d30(channel->midi_channelBus, i);
                        }
                        trackEndType = 2;
                        break;
                }
                break;

            // Else, do nothing.
            default:
                i = func_0804c398(&byteStream);
                byteStream += i;
                break;
        }
    }

    // MIDI Messages { 80, 90, A0, B0, C0, D0, E0 }
    else {
        switch (command & 0xF0) {
            // Note Off
            case 0x80:
                func_0804bc5c(id, byteStream[0], 0);
                byteStream += 2;
                break;

            // Note On
            case 0x90:
                func_0804bc5c(id, byteStream[0], byteStream[1]);
                byteStream += 2;
                break;

            // Polyphonic Key Pressure (Aftertouch) [Not Supported]
            case 0xA0:
                byteStream += 2;
                break;

            // MIDI Controller Change
            case 0xB0:
                func_0804b95c(channel, id, byteStream[0], byteStream[1]);
                byteStream += 2;
                break;

            // Program Change
            case 0xC0:
                func_0804ab88(channel->midi_channelBus, id, byteStream[0]);
                byteStream += 1;
                break;

            // Channel Pressure (Aftertouch) [Not Supported]
            case 0xD0:
                byteStream += 1;
                break;

            // Pitch Wheel Change
            case 0xE0:
                mod = (byteStream[0] & 0x7f) | ((byteStream[1] & 0x7f) << 7);
                func_0804aa40(channel->midi_channelBus, id, mod);
                byteStream += 2;
                break;
        }
    }

    // Close.
    reader->current = byteStream;
    return trackEndType;
}

#include "asm/lib_08049144/asm_0804bed0.s"

// [func_0804c040] Apply Volume (Real-Time)
void func_0804c040(struct AudioChannel *channel) {
    u32 volume;
    u32 temp;

    switch (channel->volFadeType) {
        case 0: // Reset Fade / None
            break;
        case 1: // Fade In
            channel->env_volFadeEnv += channel->env_volFadeSpeed;
            if ((s16) channel->env_volFadeEnv < 0) {
                channel->volFadeType = 0;
                channel->env_volFadeEnv = 0x8000;
                channel->env_volFadeSpeed = 0;
            }
            break;
        case 2: // Fade Out & Clear
            if (channel->env_volFadeEnv < channel->env_volFadeSpeed) {
                channel->volFadeType = 0;
                channel->env_volFadeEnv = 0;
                func_0804b560(channel); // Stop Channel
            } else {
                channel->env_volFadeEnv -= channel->env_volFadeSpeed;
            }
            break;
        case 3: // Fade Out & Pause
            if (channel->env_volFadeEnv < channel->env_volFadeSpeed) {
                channel->env_volFadeEnv = 0;
                func_0804b574(channel, 1); // Pause Channel
            } else {
                channel->env_volFadeEnv -= channel->env_volFadeSpeed;
            }
            break;
    }

    volume = (channel->volume * channel->env_channelVol * channel->env_volFadeEnv) >> 8;
    temp = volume >> 15;
    if (temp > 0xff) temp = 0xff;
    func_0804adb4(channel->midi_channelBus, temp);

    temp = ((volume >> 8) * channel->env_trackVol) >> 15;
    if (temp > 0xff) temp = 0xff;
    func_08049ec4(channel->midi_channelBus, (u8) temp, channel->env_trackSel);
}

#include "asm/lib_08049144/asm_0804c0f8.s"

// [func_0804c170] ??
void func_0804c170(void) {
    struct AudioChannel *channel;
    u32 speed;
    u32 i;
    s32 rvb0 = D_03005b90[0];
    s32 rvb1 = D_03005b90[1];
    s32 rvb2 = D_03005b90[2];
    s32 rvb3 = D_03005b90[3];

    D_030055f0 = REG_VCOUNT;

    for (i = 0; i <= D_08aa4318; i++) {
        channel = D_08aa4324[i];
        if (channel != 0) {
            func_0804c040(channel);
            func_0804c0f8(channel);
            func_08049d08(channel->midi_channelBus);
            if (channel->sequenceData != 0) {
                rvb0 -= 0x80 - (channel->midiController4E * 2);
                rvb1 -= 0x40 - (channel->midiController4F);
                rvb2 -= 0x40 - (channel->midiController50);
                rvb3 -= 0x40 - (channel->midiController51);
            }
        }
    }

    channel = D_03001598;
    if ((D_08aa431c != 0) && (channel != 0)) {
        func_0804c6c8();
        rvb0 -= 0x80 - (channel->midiController4E * 2);
        rvb1 -= 0x40 - (channel->midiController4F);
        rvb2 -= 0x40 - (channel->midiController50);
        rvb3 -= 0x40 - (channel->midiController51);
    }

    if ((D_03005644 != 0) && (D_03005b3c != 0)) {
        speed = func_0804b6f0(D_03005644->midi_tempo, D_03005644->env_speed, 0x18);
        func_0804ae6c(&D_03005b30, speed);
        func_08049b70((D_03005b30.unk7 * D_03005640) >> 8);
    }

    func_0804a334();
    D_03005b80 = REG_VCOUNT;

    if (rvb0 < 0) rvb0 = 0;
    if (rvb0 > 0x7f) rvb0 = 0x7f;
    if (rvb1 < 0) rvb1 = 0;
    if (rvb1 > 0x7f) rvb1 = 0x7f;
    if (rvb2 < 0) rvb2 = 0;
    if (rvb2 > 0x7f) rvb2 = 0x7f;
    if (rvb3 < 0) rvb3 = 0;
    if (rvb3 > 0x7f) rvb3 = 0x7f;

    func_08049b34(rvb0, rvb1, rvb2, rvb3);
    func_080497f8();
}

// [func_0804c340] Set Reverb
void func_0804c340(u32 arg0, u32 arg1, u32 arg2, u32 arg3) {
    D_03005b90[0] = arg0;
    D_03005b90[1] = arg1;
    D_03005b90[2] = arg2;
    D_03005b90[3] = arg3;
}

// [func_0804c358] STUB
void func_0804c358(void) {
}

// [func_0804c35c] INITIALISE - Audio Channels
void func_0804c35c(struct AudioChannel *channel, struct MidiChannelBus *mChnlBus, u32 nTracksMax, struct MidiTrackReader *mTrkReader, u32 type) {
    channel->sequenceData = 0;
    channel->midi_channelBus = mChnlBus;
    channel->nTracksMax = nTracksMax;
    channel->midi_trackReader = mTrkReader;
    channel->unk0_b21 = type;
    channel->volume = 0x64;
}

// [func_0804c398] MIDI - Parse Variable-Length Quantity
u32 func_0804c398(u8 **midiStream) {
    u8 *mStream = *midiStream;
    u8 current;
    u32 time = 0;

    do {
        current = *mStream;
        mStream++;
        time <<= 7;
        time |= (current & 0x7f);
    } while (current & 0x80);

    *midiStream = mStream;
    return time;
}

#include "asm/lib_08049144/asm_0804c3c0.s"

#include "asm/lib_08049144/asm_0804c4bc.s"

#include "asm/lib_08049144/asm_0804c508.s"

#include "asm/lib_08049144/asm_0804c6c8.s"

// [func_0804c778] INITIALISE - All?
void func_0804c778(void) {
    u32 i;

    func_08049490(0, 13379, 0x620, &D_03001888, 0x80, &D_030024c8, 12, &D_030028c8);
    func_0804af30();
    func_0804a360(12, &D_03002a48);

    for (i = 0; i <= 12; i++) {
        func_08049fa0(D_08aa4358[i].midiChannelBus, D_08aa4358[i].nTracksMax, D_08aa4358[i].midiChannels);
        func_0804c35c(D_08aa4358[i].audioChannel, D_08aa4358[i].midiChannelBus, D_08aa4358[i].nTracksMax, D_08aa4358[i].midiTrackReaders, D_08aa4358[i].unk0_b10);
    }

    D_03005b7c = &D_030015a7;
    D_03005b20 = 4;

    for (i = 0; i <= 3; i++) {
        D_03005b7c[i] = 0;
    }

    D_03005b3c = 0;
    D_03005644 = 0;
    D_03005b90[0] = 0;
    D_03005b90[1] = 0;
    D_03005b90[2] = 0;
    D_03005b90[3] = 0;
    D_03001598 = 0;
}

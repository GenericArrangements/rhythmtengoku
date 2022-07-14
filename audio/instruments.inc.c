#include "global.h"
#include "sound.h"

extern const struct WaveData sfx_001WaveData;
const struct InstrumentPCM instrumentPCM1 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_001WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x0059cc48,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00106a05,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_002WaveData;
const struct InstrumentPCM instrumentPCM2 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_002WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0000fc1f,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x00082378,
};

extern const struct WaveData sfx_002WaveData;
const struct InstrumentPCM instrumentPCM3 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_002WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00402433,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0000540a,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x00055552,
};

extern const struct WaveData sfx_003WaveData;
const struct InstrumentPCM instrumentPCM4 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_003WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_004WaveData;
const struct InstrumentPCM instrumentPCM5 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_004WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_005WaveData;
const struct InstrumentPCM instrumentPCM6 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_005WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_006WaveData;
const struct InstrumentPCM instrumentPCM7 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_006WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x00218000,
};

extern const struct WaveData sfx_007WaveData;
const struct InstrumentPCM instrumentPCM8 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_007WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_008WaveData;
const struct InstrumentPCM instrumentPCM9 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_008WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_009WaveData;
const struct InstrumentPCM instrumentPCM10 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_009WaveData,
    /* unk8   */ 0x00000000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x004d9364,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x00055552,
};

const struct InstrumentSubSplit instrumentSubSplit11 = {
    {
        /* Type */ INSTRUMENT_SUB_SPLIT,
        /* unk1 */ 0xc,
        /* unk2 */ 0x0,
    },
    /* unk4     */ (void *)0x08a86828, // POINTER
    /* Sub-bank */ (void *)0x08a98a0c, // POINTER
};

extern const struct WaveData sfx_010WaveData;
const struct InstrumentPCM instrumentPCM12 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_010WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x0066a052,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00106a05,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0018ea90,
};

extern const struct WaveData sfx_011WaveData;
const struct InstrumentPCM instrumentPCM13 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_011WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00267c1f,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0009d936,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x000f6a90,
};

const struct InstrumentSubRhythm instrumentSubRhythm14 = {
    {
        /* Type */ INSTRUMENT_SUB_RHYTHM,
        /* unk1 */ 0x24,
        /* unk2 */ 0x0,
    },
    /* Sub-bank */ (void *)0x08a998e4, // POINTER
};

const struct InstrumentSubRhythm instrumentSubRhythm15 = {
    {
        /* Type */ INSTRUMENT_SUB_RHYTHM,
        /* unk1 */ 0x24,
        /* unk2 */ 0x0,
    },
    /* Sub-bank */ (void *)0x08a9957c, // POINTER
};

const struct InstrumentSubRhythm instrumentSubRhythm16 = {
    {
        /* Type */ INSTRUMENT_SUB_RHYTHM,
        /* unk1 */ 0x24,
        /* unk2 */ 0x0,
    },
    /* Sub-bank */ (void *)0x08a9940c, // POINTER
};

extern const struct WaveData sfx_012WaveData;
const struct InstrumentPCM instrumentPCM17 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_012WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x001a433b,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_013WaveData;
const struct InstrumentPCM instrumentPCM18 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_013WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x001556a0,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_014WaveData;
const struct InstrumentPCM instrumentPCM19 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_014WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00267c1f,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0001a433,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_015WaveData;
const struct InstrumentPCM instrumentPCM20 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_015WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_016WaveData;
const struct InstrumentPCM instrumentPCM21 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_016WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00267c1f,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x000d219d,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_017WaveData;
const struct InstrumentPCM instrumentPCM22 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_017WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0001f83e,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x00082378,
};

extern const struct WaveData sfx_018WaveData;
const struct InstrumentPCM instrumentPCM23 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_018WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00015029,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_019WaveData;
const struct InstrumentPCM instrumentPCM24 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_019WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_020WaveData;
const struct InstrumentPCM instrumentPCM25 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_020WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_021WaveData;
const struct InstrumentPCM instrumentPCM26 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_021WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_022WaveData;
const struct InstrumentPCM instrumentPCM27 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_022WaveData,
    /* unk8   */ 0x00000000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x003a2e8b,
    /* unk14  */ 0x00034867,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_023WaveData;
const struct InstrumentPCM instrumentPCM28 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_023WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_024WaveData;
const struct InstrumentPCM instrumentPCM29 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_024WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_025WaveData;
const struct InstrumentPCM instrumentPCM30 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_025WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_026WaveData;
const struct InstrumentPCM instrumentPCM31 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_026WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x000b8000,
};

extern const struct WaveData sfx_015WaveData;
const struct InstrumentPCM instrumentPCM32 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_015WaveData,
    /* unk8   */ 0x00000000,
    /* unkC   */ 0x00335029,
    /* unk10  */ 0x00307c1f,
    /* unk14  */ 0x0001a433,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_027WaveData;
const struct InstrumentPCM instrumentPCM33 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_027WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00015029,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_028WaveData;
const struct InstrumentPCM instrumentPCM34 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_028WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0000540a,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_029WaveData;
const struct InstrumentPCM instrumentPCM35 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_029WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_030WaveData;
const struct InstrumentPCM instrumentPCM36 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_030WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

const struct InstrumentPSG instrumentPSG37 = {
    {
        /* Type */ INSTRUMENT_PSG,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Wave Channel */ NULL,
    /* unk8         */ 0x007f0000,
    /* unkC         */ 0x007e0000,
    /* unk10        */ 0x007f0000,
    /* unk14        */ 0x007f0000,
    /* unk18        */ 0x00000000,
    /* unk1C        */ 0x007f0000,
    /* Channel      */ PSG_PULSE_CHANNEL_1,
    /* unk21        */ 0x5c,
    /* unk22        */ 0x2,
};

extern const struct WaveData sfx_031WaveData;
const struct InstrumentPCM instrumentPCM38 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_031WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_032WaveData;
const struct InstrumentPCM instrumentPCM39 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_032WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_033WaveData;
const struct InstrumentPCM instrumentPCM40 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_033WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_034WaveData;
const struct InstrumentPCM instrumentPCM41 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_034WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_035WaveData;
const struct InstrumentPCM instrumentPCM42 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_035WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x000b8000,
};

extern const struct WaveData sfx_036WaveData;
const struct InstrumentPCM instrumentPCM43 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_036WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x000b8000,
};

extern const struct WaveData sfx_037WaveData;
const struct InstrumentPCM instrumentPCM44 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_037WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x000b8000,
};

extern const struct WaveData sfx_038WaveData;
const struct InstrumentPCM instrumentPCM45 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_038WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x000b8000,
};

extern const struct WaveData sfx_039WaveData;
const struct InstrumentPCM instrumentPCM46 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_039WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x00218000,
};

extern const struct WaveData sfx_040WaveData;
const struct InstrumentPCM instrumentPCM47 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_040WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0002a052,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_041WaveData;
const struct InstrumentPCM instrumentPCM48 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_041WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x0060364d,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00015029,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_015WaveData;
const struct InstrumentPCM instrumentPCM49 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_015WaveData,
    /* unk8   */ 0x00000000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00307c1f,
    /* unk14  */ 0x0002a052,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_042WaveData;
const struct InstrumentPCM instrumentPCM50 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_042WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_043WaveData;
const struct InstrumentPCM instrumentPCM51 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_043WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

const struct InstrumentSubRhythm instrumentSubRhythm52 = {
    {
        /* Type */ INSTRUMENT_SUB_RHYTHM,
        /* unk1 */ 0x24,
        /* unk2 */ 0x0,
    },
    /* Sub-bank */ (void *)0x08a9957c, // POINTER
};

const struct InstrumentSubRhythm instrumentSubRhythm53 = {
    {
        /* Type */ INSTRUMENT_SUB_RHYTHM,
        /* unk1 */ 0x24,
        /* unk2 */ 0x0,
    },
    /* Sub-bank */ (void *)0x08a9940c, // POINTER
};

const struct InstrumentSubRhythm instrumentSubRhythm54 = {
    {
        /* Type */ INSTRUMENT_SUB_RHYTHM,
        /* unk1 */ 0x24,
        /* unk2 */ 0x0,
    },
    /* Sub-bank */ (void *)0x08a996e4, // POINTER
};

const struct InstrumentSubRhythm instrumentSubRhythm55 = {
    {
        /* Type */ INSTRUMENT_SUB_RHYTHM,
        /* unk1 */ 0x24,
        /* unk2 */ 0x0,
    },
    /* Sub-bank */ (void *)0x08a99d3c, // POINTER
};

extern const struct WaveData sfx_044WaveData;
const struct InstrumentPCM instrumentPCM56 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_044WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_045WaveData;
const struct InstrumentPCM instrumentPCM57 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_045WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_046WaveData;
const struct InstrumentPCM instrumentPCM58 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_046WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_047WaveData;
const struct InstrumentPCM instrumentPCM59 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_047WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_048WaveData;
const struct InstrumentPCM instrumentPCM60 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_048WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_049WaveData;
const struct InstrumentPCM instrumentPCM61 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_049WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_050WaveData;
const struct InstrumentPCM instrumentPCM62 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_050WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_051WaveData;
const struct InstrumentPCM instrumentPCM63 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_051WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_052WaveData;
const struct InstrumentPCM instrumentPCM64 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_052WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_053WaveData;
const struct InstrumentPCM instrumentPCM65 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_053WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_054WaveData;
const struct InstrumentPCM instrumentPCM66 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_054WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_055WaveData;
const struct InstrumentPCM instrumentPCM67 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_055WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_056WaveData;
const struct InstrumentPCM instrumentPCM68 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_056WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_057WaveData;
const struct InstrumentPCM instrumentPCM69 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_057WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

const struct InstrumentPSG instrumentPSG70 = {
    {
        /* Type */ INSTRUMENT_PSG,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Wave Channel */ NULL,
    /* unk8         */ 0x007f0000,
    /* unkC         */ 0x007e0000,
    /* unk10        */ 0x007f0000,
    /* unk14        */ 0x007f0000,
    /* unk18        */ 0x00000000,
    /* unk1C        */ 0x007f0000,
    /* Channel      */ PSG_PULSE_CHANNEL_1,
    /* unk21        */ 0x0,
    /* unk22        */ 0x0,
};

extern const struct WaveData sfx_016WaveData;
const struct InstrumentPCM instrumentPCM71 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_016WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00267c1f,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x000d219d,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_027WaveData;
const struct InstrumentPCM instrumentPCM72 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_027WaveData,
    /* unk8   */ 0x00000000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x003a2e8b,
    /* unk14  */ 0x0000fc1f,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_015WaveData;
const struct InstrumentPCM instrumentPCM73 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_015WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_058WaveData;
const struct InstrumentPCM instrumentPCM74 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_058WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00034867,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_059WaveData;
const struct InstrumentPCM instrumentPCM75 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_059WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_008WaveData;
const struct InstrumentPCM instrumentPCM76 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_008WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_015WaveData;
const struct InstrumentPCM instrumentPCM77 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_015WaveData,
    /* unk8   */ 0x00000000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x0009b26c,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_060WaveData;
const struct InstrumentPCM instrumentPCM78 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_060WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00402433,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0001a433,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_061WaveData;
const struct InstrumentPCM instrumentPCM79 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_061WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0001a433,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_062WaveData;
const struct InstrumentPCM instrumentPCM80 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_062WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00267c1f,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0001a433,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

const struct InstrumentSubRhythm instrumentSubRhythm81 = {
    {
        /* Type */ INSTRUMENT_SUB_RHYTHM,
        /* unk1 */ 0x24,
        /* unk2 */ 0x0,
    },
    /* Sub-bank */ (void *)0x08a99d3c, // POINTER
};

extern const struct WaveData sfx_028WaveData;
const struct InstrumentPCM instrumentPCM82 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_028WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00402433,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0001a433,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_028WaveData;
const struct InstrumentPCM instrumentPCM83 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_028WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0000540a,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_060WaveData;
const struct InstrumentPCM instrumentPCM84 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_060WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00402433,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0001a433,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_043WaveData;
const struct InstrumentPCM instrumentPCM85 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_043WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_027WaveData;
const struct InstrumentPCM instrumentPCM86 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_027WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00015029,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_058WaveData;
const struct InstrumentPCM instrumentPCM87 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_058WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00034867,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_008WaveData;
const struct InstrumentPCM instrumentPCM88 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_008WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

const struct InstrumentPSG instrumentPSG89 = {
    {
        /* Type */ INSTRUMENT_PSG,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Wave Channel */ NULL,
    /* unk8         */ 0x007f0000,
    /* unkC         */ 0x007e0000,
    /* unk10        */ 0x007f0000,
    /* unk14        */ 0x007f0000,
    /* unk18        */ 0x00000000,
    /* unk1C        */ 0x007f0000,
    /* Channel      */ PSG_PULSE_CHANNEL_1,
    /* unk21        */ 0x0,
    /* unk22        */ 0x4,
};

const struct InstrumentPSG instrumentPSG90 = {
    {
        /* Type */ INSTRUMENT_PSG,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Wave Channel */ NULL,
    /* unk8         */ 0x007f0000,
    /* unkC         */ 0x007e0000,
    /* unk10        */ 0x007f0000,
    /* unk14        */ 0x007f0000,
    /* unk18        */ 0x00000000,
    /* unk1C        */ 0x007f0000,
    /* Channel      */ PSG_PULSE_CHANNEL_2,
    /* unk21        */ 0x0,
    /* unk22        */ 0x4,
};

extern const struct WaveData sfx_016WaveData;
const struct InstrumentPCM instrumentPCM91 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_016WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00267c1f,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x000d219d,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_059WaveData;
const struct InstrumentPCM instrumentPCM92 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_059WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

const struct InstrumentPSG instrumentPSG93 = {
    {
        /* Type */ INSTRUMENT_PSG,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Wave Channel */ NULL,
    /* unk8         */ 0x007f0000,
    /* unkC         */ 0x007e0000,
    /* unk10        */ 0x007f0000,
    /* unk14        */ 0x007f0000,
    /* unk18        */ 0x00000000,
    /* unk1C        */ 0x001fc000,
    /* Channel      */ PSG_NOISE_CHANNEL,
    /* unk21        */ 0x0,
    /* unk22        */ 0x0,
};

extern const struct WaveData sfx_031WaveData;
const struct InstrumentPCM instrumentPCM94 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_031WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_041WaveData;
const struct InstrumentPCM instrumentPCM95 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_041WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x0060364d,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00015029,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_063WaveData;
const struct InstrumentPCM instrumentPCM96 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_063WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_064WaveData;
const struct InstrumentPCM instrumentPCM97 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_064WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_065WaveData;
const struct InstrumentPCM instrumentPCM98 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_065WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_066WaveData;
const struct InstrumentPCM instrumentPCM99 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_066WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_067WaveData;
const struct InstrumentPCM instrumentPCM100 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_067WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_068WaveData;
const struct InstrumentPCM instrumentPCM101 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_068WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_069WaveData;
const struct InstrumentPCM instrumentPCM102 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_069WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_070WaveData;
const struct InstrumentPCM instrumentPCM103 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_070WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_071WaveData;
const struct InstrumentPCM instrumentPCM104 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_071WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_072WaveData;
const struct InstrumentPCM instrumentPCM105 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_072WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_073WaveData;
const struct InstrumentPCM instrumentPCM106 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_073WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_074WaveData;
const struct InstrumentPCM instrumentPCM107 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_074WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_075WaveData;
const struct InstrumentPCM instrumentPCM108 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_075WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_076WaveData;
const struct InstrumentPCM instrumentPCM109 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_076WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_077WaveData;
const struct InstrumentPCM instrumentPCM110 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_077WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_078WaveData;
const struct InstrumentPCM instrumentPCM111 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_078WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_079WaveData;
const struct InstrumentPCM instrumentPCM112 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_079WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_080WaveData;
const struct InstrumentPCM instrumentPCM113 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_080WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_081WaveData;
const struct InstrumentPCM instrumentPCM114 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_081WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_082WaveData;
const struct InstrumentPCM instrumentPCM115 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_082WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_083WaveData;
const struct InstrumentPCM instrumentPCM116 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_083WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_084WaveData;
const struct InstrumentPCM instrumentPCM117 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_084WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_085WaveData;
const struct InstrumentPCM instrumentPCM118 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_085WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

const struct InstrumentSubRhythm instrumentSubRhythm119 = {
    {
        /* Type */ INSTRUMENT_SUB_RHYTHM,
        /* unk1 */ 0x24,
        /* unk2 */ 0x0,
    },
    /* Sub-bank */ (void *)0x08a9940c, // POINTER
};

const struct InstrumentSubRhythm instrumentSubRhythm120 = {
    {
        /* Type */ INSTRUMENT_SUB_RHYTHM,
        /* unk1 */ 0x24,
        /* unk2 */ 0x0,
    },
    /* Sub-bank */ (void *)0x08a99d3c, // POINTER
};

extern const struct WaveData sfx_086WaveData;
const struct InstrumentPCM instrumentPCM121 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_086WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_087WaveData;
const struct InstrumentPCM instrumentPCM122 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_087WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

const struct InstrumentPSG instrumentPSG123 = {
    {
        /* Type */ INSTRUMENT_PSG,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Wave Channel */ NULL,
    /* unk8         */ 0x007f0000,
    /* unkC         */ 0x007e0000,
    /* unk10        */ 0x007f0000,
    /* unk14        */ 0x007f0000,
    /* unk18        */ 0x00000000,
    /* unk1C        */ 0x007f0000,
    /* Channel      */ PSG_PULSE_CHANNEL_1,
    /* unk21        */ 0x70,
    /* unk22        */ 0x4,
};

extern const struct WaveData sfx_034WaveData;
const struct InstrumentPCM instrumentPCM124 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_034WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_088WaveData;
const struct InstrumentPCM instrumentPCM125 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_088WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_089WaveData;
const struct InstrumentPCM instrumentPCM126 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_089WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_090WaveData;
const struct InstrumentPCM instrumentPCM127 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_090WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_091WaveData;
const struct InstrumentPCM instrumentPCM128 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_091WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_092WaveData;
const struct InstrumentPCM instrumentPCM129 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_092WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x00082378,
};

extern const struct WaveData sfx_093WaveData;
const struct InstrumentPCM instrumentPCM130 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_093WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00034867,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0018ea90,
};

extern const struct WaveData sfx_094WaveData;
const struct InstrumentPCM instrumentPCM131 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_094WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0018ea90,
};

extern const struct WaveData sfx_095WaveData;
const struct InstrumentPCM instrumentPCM132 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_095WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0018ea90,
};

extern const struct WaveData sfx_096WaveData;
const struct InstrumentPCM instrumentPCM133 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_096WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0018ea90,
};

extern const struct WaveData sfx_097WaveData;
const struct InstrumentPCM instrumentPCM134 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_097WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0018ea90,
};

extern const struct WaveData sfx_098WaveData;
const struct InstrumentPCM instrumentPCM135 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_098WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0018ea90,
};

extern const struct WaveData sfx_099WaveData;
const struct InstrumentPCM instrumentPCM136 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_099WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0018ea90,
};

extern const struct WaveData sfx_100WaveData;
const struct InstrumentPCM instrumentPCM137 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_100WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00034867,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0018ea90,
};

extern const struct WaveData sfx_101WaveData;
const struct InstrumentPCM instrumentPCM138 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_101WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0018ea90,
};

extern const struct WaveData sfx_102WaveData;
const struct InstrumentPCM instrumentPCM139 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_102WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00083502,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0018ea90,
};

extern const struct WaveData sfx_103WaveData;
const struct InstrumentPCM instrumentPCM140 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_103WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0018ea90,
};

extern const struct WaveData sfx_104WaveData;
const struct InstrumentPCM instrumentPCM141 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_104WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0018ea90,
};

extern const struct WaveData sfx_105WaveData;
const struct InstrumentPCM instrumentPCM142 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_105WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0018ea90,
};

extern const struct WaveData sfx_106WaveData;
const struct InstrumentPCM instrumentPCM143 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_106WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0018ea90,
};

extern const struct WaveData sfx_107WaveData;
const struct InstrumentPCM instrumentPCM144 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_107WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00015029,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

const struct InstrumentSubRhythm instrumentSubRhythm145 = {
    {
        /* Type */ INSTRUMENT_SUB_RHYTHM,
        /* unk1 */ 0x24,
        /* unk2 */ 0x0,
    },
    /* Sub-bank */ (void *)0x08a99d3c, // POINTER
};

extern const struct WaveData sfx_016WaveData;
const struct InstrumentPCM instrumentPCM146 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_016WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00267c1f,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x000d219d,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_108WaveData;
const struct InstrumentPCM instrumentPCM147 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_108WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00267c1f,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x000d219d,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_015WaveData;
const struct InstrumentPCM instrumentPCM148 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_015WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_109WaveData;
const struct InstrumentPCM instrumentPCM149 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_109WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0000fc1f,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_008WaveData;
const struct InstrumentPCM instrumentPCM150 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_008WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_110WaveData;
const struct InstrumentPCM instrumentPCM151 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_110WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x0066a052,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00034867,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_111WaveData;
const struct InstrumentPCM instrumentPCM152 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_111WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x0066a052,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00034867,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_112WaveData;
const struct InstrumentPCM instrumentPCM153 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_112WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x0066a052,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00034867,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_060WaveData;
const struct InstrumentPCM instrumentPCM154 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_060WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00402433,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0001a433,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_113WaveData;
const struct InstrumentPCM instrumentPCM155 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_113WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x00235dd1,
};

extern const struct WaveData sfx_114WaveData;
const struct InstrumentPCM instrumentPCM156 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_114WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

const struct InstrumentSubSplit instrumentSubSplit157 = {
    {
        /* Type */ INSTRUMENT_SUB_SPLIT,
        /* unk1 */ 0xc,
        /* unk2 */ 0x0,
    },
    /* unk4     */ (void *)0x08a865ac, // POINTER
    /* Sub-bank */ (void *)0x08a94448, // POINTER
};

extern const struct WaveData sfx_043WaveData;
const struct InstrumentPCM instrumentPCM158 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_043WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_042WaveData;
const struct InstrumentPCM instrumentPCM159 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_042WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_015WaveData;
const struct InstrumentPCM instrumentPCM160 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_015WaveData,
    /* unk8   */ 0x00000000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00307c1f,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_058WaveData;
const struct InstrumentPCM instrumentPCM161 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_058WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00034867,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_027WaveData;
const struct InstrumentPCM instrumentPCM162 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_027WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00015029,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_017WaveData;
const struct InstrumentPCM instrumentPCM163 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_017WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0001f83e,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x00082378,
};

extern const struct WaveData sfx_115WaveData;
const struct InstrumentPCM instrumentPCM164 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_115WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0001f83e,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_116WaveData;
const struct InstrumentPCM instrumentPCM165 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_116WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_028WaveData;
const struct InstrumentPCM instrumentPCM166 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_028WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0000540a,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_117WaveData;
const struct InstrumentPCM instrumentPCM167 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_117WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_118WaveData;
const struct InstrumentPCM instrumentPCM168 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_118WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_119WaveData;
const struct InstrumentPCM instrumentPCM169 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_119WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_120WaveData;
const struct InstrumentPCM instrumentPCM170 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_120WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_121WaveData;
const struct InstrumentPCM instrumentPCM171 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_121WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

const struct InstrumentPSG instrumentPSG172 = {
    {
        /* Type */ INSTRUMENT_PSG,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Wave Channel */ NULL,
    /* unk8         */ 0x007f0000,
    /* unkC         */ 0x007e0000,
    /* unk10        */ 0x007f0000,
    /* unk14        */ 0x007f0000,
    /* unk18        */ 0x00000000,
    /* unk1C        */ 0x007f0000,
    /* Channel      */ PSG_PULSE_CHANNEL_1,
    /* unk21        */ 0x0,
    /* unk22        */ 0x0,
};

const struct InstrumentPSG instrumentPSG173 = {
    {
        /* Type */ INSTRUMENT_PSG,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Wave Channel */ NULL,
    /* unk8         */ 0x007f0000,
    /* unkC         */ 0x007e0000,
    /* unk10        */ 0x007f0000,
    /* unk14        */ 0x007f0000,
    /* unk18        */ 0x00000000,
    /* unk1C        */ 0x007f0000,
    /* Channel      */ PSG_PULSE_CHANNEL_2,
    /* unk21        */ 0x0,
    /* unk22        */ 0x2,
};

extern const struct WaveData sfx_122WaveData;
const struct InstrumentPCM instrumentPCM174 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_122WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_121WaveData;
const struct InstrumentPCM instrumentPCM175 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_121WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_123WaveData;
const struct InstrumentPCM instrumentPCM176 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_123WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x00055552,
};

extern const struct WaveData sfx_124WaveData;
const struct InstrumentPCM instrumentPCM177 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_124WaveData,
    /* unk8   */ 0x00000000,
    /* unkC   */ 0x00267c1f,
    /* unk10  */ 0x0026c9b2,
    /* unk14  */ 0x00015029,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_125WaveData;
const struct InstrumentPCM instrumentPCM178 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_125WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00335029,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x000d219d,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x000b8000,
};

const struct InstrumentSubRhythm instrumentSubRhythm179 = {
    {
        /* Type */ INSTRUMENT_SUB_RHYTHM,
        /* unk1 */ 0x24,
        /* unk2 */ 0x0,
    },
    /* Sub-bank */ (void *)0x08a9957c, // POINTER
};

const struct InstrumentSubRhythm instrumentSubRhythm180 = {
    {
        /* Type */ INSTRUMENT_SUB_RHYTHM,
        /* unk1 */ 0x24,
        /* unk2 */ 0x0,
    },
    /* Sub-bank */ (void *)0x08a9940c, // POINTER
};

const struct InstrumentSubRhythm instrumentSubRhythm181 = {
    {
        /* Type */ INSTRUMENT_SUB_RHYTHM,
        /* unk1 */ 0x24,
        /* unk2 */ 0x0,
    },
    /* Sub-bank */ (void *)0x08a99d3c, // POINTER
};

extern const struct WaveData sfx_126WaveData;
const struct InstrumentPCM instrumentPCM182 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_126WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0002a052,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_127WaveData;
const struct InstrumentPCM instrumentPCM183 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_127WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_128WaveData;
const struct InstrumentPCM instrumentPCM184 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_128WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_129WaveData;
const struct InstrumentPCM instrumentPCM185 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_129WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_130WaveData;
const struct InstrumentPCM instrumentPCM186 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_130WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_131WaveData;
const struct InstrumentPCM instrumentPCM187 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_131WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_132WaveData;
const struct InstrumentPCM instrumentPCM188 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_132WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_133WaveData;
const struct InstrumentPCM instrumentPCM189 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_133WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_134WaveData;
const struct InstrumentPCM instrumentPCM190 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_134WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_135WaveData;
const struct InstrumentPCM instrumentPCM191 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_135WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_136WaveData;
const struct InstrumentPCM instrumentPCM192 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_136WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_137WaveData;
const struct InstrumentPCM instrumentPCM193 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_137WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_138WaveData;
const struct InstrumentPCM instrumentPCM194 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_138WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_139WaveData;
const struct InstrumentPCM instrumentPCM195 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_139WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_140WaveData;
const struct InstrumentPCM instrumentPCM196 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_140WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

const struct InstrumentSubRhythm instrumentSubRhythm197 = {
    {
        /* Type */ INSTRUMENT_SUB_RHYTHM,
        /* unk1 */ 0x24,
        /* unk2 */ 0x0,
    },
    /* Sub-bank */ (void *)0x08a99d3c, // POINTER
};

extern const struct WaveData sfx_141WaveData;
const struct InstrumentPCM instrumentPCM198 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_141WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_142WaveData;
const struct InstrumentPCM instrumentPCM199 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_142WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_143WaveData;
const struct InstrumentPCM instrumentPCM200 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_143WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_144WaveData;
const struct InstrumentPCM instrumentPCM201 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_144WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_145WaveData;
const struct InstrumentPCM instrumentPCM202 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_145WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_146WaveData;
const struct InstrumentPCM instrumentPCM203 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_146WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_147WaveData;
const struct InstrumentPCM instrumentPCM204 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_147WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

const struct InstrumentSubRhythm instrumentSubRhythm205 = {
    {
        /* Type */ INSTRUMENT_SUB_RHYTHM,
        /* unk1 */ 0x24,
        /* unk2 */ 0x0,
    },
    /* Sub-bank */ (void *)0x08a99d3c, // POINTER
};

extern const struct WaveData sfx_148WaveData;
const struct InstrumentPCM instrumentPCM206 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_148WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_149WaveData;
const struct InstrumentPCM instrumentPCM207 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_149WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_150WaveData;
const struct InstrumentPCM instrumentPCM208 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_150WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_151WaveData;
const struct InstrumentPCM instrumentPCM209 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_151WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_152WaveData;
const struct InstrumentPCM instrumentPCM210 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_152WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_153WaveData;
const struct InstrumentPCM instrumentPCM211 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_153WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x000690ce,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_154WaveData;
const struct InstrumentPCM instrumentPCM212 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_154WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_155WaveData;
const struct InstrumentPCM instrumentPCM213 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_155WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_156WaveData;
const struct InstrumentPCM instrumentPCM214 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_156WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_157WaveData;
const struct InstrumentPCM instrumentPCM215 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_157WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_158WaveData;
const struct InstrumentPCM instrumentPCM216 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_158WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_159WaveData;
const struct InstrumentPCM instrumentPCM217 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_159WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_160WaveData;
const struct InstrumentPCM instrumentPCM218 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_160WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_161WaveData;
const struct InstrumentPCM instrumentPCM219 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_161WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_162WaveData;
const struct InstrumentPCM instrumentPCM220 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_162WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_163WaveData;
const struct InstrumentPCM instrumentPCM221 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_163WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_164WaveData;
const struct InstrumentPCM instrumentPCM222 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_164WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_165WaveData;
const struct InstrumentPCM instrumentPCM223 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_165WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_166WaveData;
const struct InstrumentPCM instrumentPCM224 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_166WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_167WaveData;
const struct InstrumentPCM instrumentPCM225 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_167WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_168WaveData;
const struct InstrumentPCM instrumentPCM226 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_168WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_169WaveData;
const struct InstrumentPCM instrumentPCM227 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_169WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_170WaveData;
const struct InstrumentPCM instrumentPCM228 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_170WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_171WaveData;
const struct InstrumentPCM instrumentPCM229 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_171WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_172WaveData;
const struct InstrumentPCM instrumentPCM230 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_172WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_173WaveData;
const struct InstrumentPCM instrumentPCM231 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_173WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_174WaveData;
const struct InstrumentPCM instrumentPCM232 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_174WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_175WaveData;
const struct InstrumentPCM instrumentPCM233 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_175WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_176WaveData;
const struct InstrumentPCM instrumentPCM234 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_176WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_177WaveData;
const struct InstrumentPCM instrumentPCM235 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_177WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_178WaveData;
const struct InstrumentPCM instrumentPCM236 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_178WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_179WaveData;
const struct InstrumentPCM instrumentPCM237 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_179WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_180WaveData;
const struct InstrumentPCM instrumentPCM238 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_180WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_181WaveData;
const struct InstrumentPCM instrumentPCM239 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_181WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_182WaveData;
const struct InstrumentPCM instrumentPCM240 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_182WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_183WaveData;
const struct InstrumentPCM instrumentPCM241 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_183WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x000f6a90,
};

const struct InstrumentSubRhythm instrumentSubRhythm242 = {
    {
        /* Type */ INSTRUMENT_SUB_RHYTHM,
        /* unk1 */ 0x24,
        /* unk2 */ 0x0,
    },
    /* Sub-bank */ (void *)0x08a99d3c, // POINTER
};

extern const struct WaveData sfx_184WaveData;
const struct InstrumentPCM instrumentPCM243 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_184WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_185WaveData;
const struct InstrumentPCM instrumentPCM244 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_185WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_186WaveData;
const struct InstrumentPCM instrumentPCM245 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_186WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_187WaveData;
const struct InstrumentPCM instrumentPCM246 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_187WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_188WaveData;
const struct InstrumentPCM instrumentPCM247 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_188WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_189WaveData;
const struct InstrumentPCM instrumentPCM248 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_189WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_190WaveData;
const struct InstrumentPCM instrumentPCM249 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_190WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_191WaveData;
const struct InstrumentPCM instrumentPCM250 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_191WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x00082378,
};

extern const struct WaveData sfx_192WaveData;
const struct InstrumentPCM instrumentPCM251 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_192WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x000b8000,
};

extern const struct WaveData sfx_193WaveData;
const struct InstrumentPCM instrumentPCM252 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_193WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00034867,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x000b8000,
};

extern const struct WaveData sfx_003WaveData;
const struct InstrumentPCM instrumentPCM253 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_003WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_009WaveData;
const struct InstrumentPCM instrumentPCM254 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_009WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_041WaveData;
const struct InstrumentPCM instrumentPCM255 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_041WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x0060364d,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00015029,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_058WaveData;
const struct InstrumentPCM instrumentPCM256 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_058WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00034867,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_194WaveData;
const struct InstrumentPCM instrumentPCM257 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_194WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0000fc1f,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_108WaveData;
const struct InstrumentPCM instrumentPCM258 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_108WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00267c1f,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x000d219d,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_195WaveData;
const struct InstrumentPCM instrumentPCM259 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_195WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00034867,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0018ea90,
};

extern const struct WaveData sfx_196WaveData;
const struct InstrumentPCM instrumentPCM260 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_196WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0000a814,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_191WaveData;
const struct InstrumentPCM instrumentPCM261 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_191WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x00218000,
};

extern const struct WaveData sfx_197WaveData;
const struct InstrumentPCM instrumentPCM262 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_197WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x00082378,
};

extern const struct WaveData sfx_198WaveData;
const struct InstrumentPCM instrumentPCM263 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_198WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_199WaveData;
const struct InstrumentPCM instrumentPCM264 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_199WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_200WaveData;
const struct InstrumentPCM instrumentPCM265 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_200WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0001a433,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_201WaveData;
const struct InstrumentPCM instrumentPCM266 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_201WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0001f83e,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_202WaveData;
const struct InstrumentPCM instrumentPCM267 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_202WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x0060364d,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00015029,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_008WaveData;
const struct InstrumentPCM instrumentPCM268 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_008WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_013WaveData;
const struct InstrumentPCM instrumentPCM269 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_013WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x001556a0,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_203WaveData;
const struct InstrumentPCM instrumentPCM270 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_203WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00015029,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_114WaveData;
const struct InstrumentPCM instrumentPCM271 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_114WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_204WaveData;
const struct InstrumentPCM instrumentPCM272 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_204WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00034867,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_113WaveData;
const struct InstrumentPCM instrumentPCM273 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_113WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x00235dd1,
};

extern const struct WaveData sfx_017WaveData;
const struct InstrumentPCM instrumentPCM274 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_017WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0001f83e,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x00082378,
};

extern const struct WaveData sfx_205WaveData;
const struct InstrumentPCM instrumentPCM275 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_205WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0001f83e,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x00082378,
};

extern const struct WaveData sfx_042WaveData;
const struct InstrumentPCM instrumentPCM276 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_042WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_206WaveData;
const struct InstrumentPCM instrumentPCM277 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_206WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_207WaveData;
const struct InstrumentPCM instrumentPCM278 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_207WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_015WaveData;
const struct InstrumentPCM instrumentPCM279 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_015WaveData,
    /* unk8   */ 0x00000000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x001d1745,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_208WaveData;
const struct InstrumentPCM instrumentPCM280 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_208WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00034867,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_112WaveData;
const struct InstrumentPCM instrumentPCM281 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_112WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x0066a052,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00034867,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

const struct InstrumentSubSplit instrumentSubSplit282 = {
    {
        /* Type */ INSTRUMENT_SUB_SPLIT,
        /* unk1 */ 0xc,
        /* unk2 */ 0x0,
    },
    /* unk4     */ (void *)0x08a865ac, // POINTER
    /* Sub-bank */ (void *)0x08a97010, // POINTER
};

extern const struct WaveData sfx_015WaveData;
const struct InstrumentPCM instrumentPCM283 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_015WaveData,
    /* unk8   */ 0x00000000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x004d9364,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_209WaveData;
const struct InstrumentPCM instrumentPCM284 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_209WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_210WaveData;
const struct InstrumentPCM instrumentPCM285 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_210WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_211WaveData;
const struct InstrumentPCM instrumentPCM286 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_211WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

const struct InstrumentSubRhythm instrumentSubRhythm287 = {
    {
        /* Type */ INSTRUMENT_SUB_RHYTHM,
        /* unk1 */ 0x24,
        /* unk2 */ 0x0,
    },
    /* Sub-bank */ (void *)0x08a998e4, // POINTER
};

const struct InstrumentSubRhythm instrumentSubRhythm288 = {
    {
        /* Type */ INSTRUMENT_SUB_RHYTHM,
        /* unk1 */ 0x24,
        /* unk2 */ 0x0,
    },
    /* Sub-bank */ (void *)0x08a996e4, // POINTER
};

const struct InstrumentSubRhythm instrumentSubRhythm289 = {
    {
        /* Type */ INSTRUMENT_SUB_RHYTHM,
        /* unk1 */ 0x24,
        /* unk2 */ 0x0,
    },
    /* Sub-bank */ (void *)0x08a9940c, // POINTER
};

extern const struct WaveData sfx_212WaveData;
const struct InstrumentPCM instrumentPCM290 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_212WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x0019a814,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0002a052,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_117WaveData;
const struct InstrumentPCM instrumentPCM291 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_117WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_015WaveData;
const struct InstrumentPCM instrumentPCM292 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_015WaveData,
    /* unk8   */ 0x00000000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x001d1745,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_008WaveData;
const struct InstrumentPCM instrumentPCM293 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_008WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_023WaveData;
const struct InstrumentPCM instrumentPCM294 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_023WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_213WaveData;
const struct InstrumentPCM instrumentPCM295 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_213WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0002a052,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x000f6a90,
};

extern const struct WaveData sfx_214WaveData;
const struct InstrumentPCM instrumentPCM296 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_214WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_122WaveData;
const struct InstrumentPCM instrumentPCM297 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_122WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_215WaveData;
const struct InstrumentPCM instrumentPCM298 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_215WaveData,
    /* unk8   */ 0x00000000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x0043e0f8,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_216WaveData;
const struct InstrumentPCM instrumentPCM299 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_216WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_217WaveData;
const struct InstrumentPCM instrumentPCM300 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_217WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x000f6a90,
};

extern const struct WaveData sfx_107WaveData;
const struct InstrumentPCM instrumentPCM301 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_107WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00015029,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_215WaveData;
const struct InstrumentPCM instrumentPCM302 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_215WaveData,
    /* unk8   */ 0x00000000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00307c1f,
    /* unk14  */ 0x0013b26c,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x00218000,
};

extern const struct WaveData sfx_218WaveData;
const struct InstrumentPCM instrumentPCM303 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_218WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_219WaveData;
const struct InstrumentPCM instrumentPCM304 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_219WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0001638c,
};

extern const struct WaveData sfx_220WaveData;
const struct InstrumentPCM instrumentPCM305 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_220WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

const struct InstrumentSubRhythm instrumentSubRhythm306 = {
    {
        /* Type */ INSTRUMENT_SUB_RHYTHM,
        /* unk1 */ 0x24,
        /* unk2 */ 0x0,
    },
    /* Sub-bank */ (void *)0x08a99d3c, // POINTER
};

extern const struct WaveData sfx_221WaveData;
const struct InstrumentPCM instrumentPCM307 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_221WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x000b8000,
};

extern const struct WaveData sfx_222WaveData;
const struct InstrumentPCM instrumentPCM308 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_222WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x000b8000,
};

extern const struct WaveData sfx_093WaveData;
const struct InstrumentPCM instrumentPCM309 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_093WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00034867,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0018ea90,
};

extern const struct WaveData sfx_094WaveData;
const struct InstrumentPCM instrumentPCM310 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_094WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0018ea90,
};

extern const struct WaveData sfx_095WaveData;
const struct InstrumentPCM instrumentPCM311 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_095WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00083502,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0018ea90,
};

extern const struct WaveData sfx_096WaveData;
const struct InstrumentPCM instrumentPCM312 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_096WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0018ea90,
};

extern const struct WaveData sfx_097WaveData;
const struct InstrumentPCM instrumentPCM313 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_097WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0018ea90,
};

extern const struct WaveData sfx_098WaveData;
const struct InstrumentPCM instrumentPCM314 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_098WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0018ea90,
};

extern const struct WaveData sfx_099WaveData;
const struct InstrumentPCM instrumentPCM315 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_099WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0018ea90,
};

extern const struct WaveData sfx_100WaveData;
const struct InstrumentPCM instrumentPCM316 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_100WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00034867,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0018ea90,
};

extern const struct WaveData sfx_101WaveData;
const struct InstrumentPCM instrumentPCM317 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_101WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0018ea90,
};

extern const struct WaveData sfx_102WaveData;
const struct InstrumentPCM instrumentPCM318 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_102WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00083502,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0018ea90,
};

extern const struct WaveData sfx_103WaveData;
const struct InstrumentPCM instrumentPCM319 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_103WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0018ea90,
};

extern const struct WaveData sfx_104WaveData;
const struct InstrumentPCM instrumentPCM320 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_104WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0018ea90,
};

extern const struct WaveData sfx_105WaveData;
const struct InstrumentPCM instrumentPCM321 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_105WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0018ea90,
};

extern const struct WaveData sfx_106WaveData;
const struct InstrumentPCM instrumentPCM322 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_106WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0018ea90,
};

extern const struct WaveData sfx_223WaveData;
const struct InstrumentPCM instrumentPCM323 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_223WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x000b8000,
};

extern const struct WaveData sfx_224WaveData;
const struct InstrumentPCM instrumentPCM324 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_224WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0018ea90,
};

extern const struct WaveData sfx_225WaveData;
const struct InstrumentPCM instrumentPCM325 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_225WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0018ea90,
};

const struct InstrumentSubRhythm instrumentSubRhythm326 = {
    {
        /* Type */ INSTRUMENT_SUB_RHYTHM,
        /* unk1 */ 0x24,
        /* unk2 */ 0x0,
    },
    /* Sub-bank */ (void *)0x08a9940c, // POINTER
};

extern const struct WaveData sfx_226WaveData;
const struct InstrumentPCM instrumentPCM327 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_226WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_114WaveData;
const struct InstrumentPCM instrumentPCM328 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_114WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_200WaveData;
const struct InstrumentPCM instrumentPCM329 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_200WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_227WaveData;
const struct InstrumentPCM instrumentPCM330 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_227WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_228WaveData;
const struct InstrumentPCM instrumentPCM331 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_228WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0004ec9b,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_110WaveData;
const struct InstrumentPCM instrumentPCM332 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_110WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x0066a052,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00034867,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_111WaveData;
const struct InstrumentPCM instrumentPCM333 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_111WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x0066a052,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00034867,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_229WaveData;
const struct InstrumentPCM instrumentPCM334 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_229WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_230WaveData;
const struct InstrumentPCM instrumentPCM335 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_230WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_113WaveData;
const struct InstrumentPCM instrumentPCM336 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_113WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x00235dd1,
};

extern const struct WaveData sfx_207WaveData;
const struct InstrumentPCM instrumentPCM337 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_207WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_206WaveData;
const struct InstrumentPCM instrumentPCM338 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_206WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

const struct InstrumentSubSplit instrumentSubSplit339 = {
    {
        /* Type */ INSTRUMENT_SUB_SPLIT,
        /* unk1 */ 0xc,
        /* unk2 */ 0x0,
    },
    /* unk4     */ (void *)0x08a865ac, // POINTER
    /* Sub-bank */ (void *)0x08a95248, // POINTER
};

extern const struct WaveData sfx_211WaveData;
const struct InstrumentPCM instrumentPCM340 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_211WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_231WaveData;
const struct InstrumentPCM instrumentPCM341 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_231WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_232WaveData;
const struct InstrumentPCM instrumentPCM342 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_232WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_233WaveData;
const struct InstrumentPCM instrumentPCM343 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_233WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_234WaveData;
const struct InstrumentPCM instrumentPCM344 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_234WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00034867,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_235WaveData;
const struct InstrumentPCM instrumentPCM345 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_235WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

const struct InstrumentSubRhythm instrumentSubRhythm346 = {
    {
        /* Type */ INSTRUMENT_SUB_RHYTHM,
        /* unk1 */ 0x24,
        /* unk2 */ 0x0,
    },
    /* Sub-bank */ (void *)0x08a9957c, // POINTER
};

const struct InstrumentSubRhythm instrumentSubRhythm347 = {
    {
        /* Type */ INSTRUMENT_SUB_RHYTHM,
        /* unk1 */ 0x24,
        /* unk2 */ 0x0,
    },
    /* Sub-bank */ (void *)0x08a9940c, // POINTER
};

const struct InstrumentPSG instrumentPSG348 = {
    {
        /* Type */ INSTRUMENT_PSG,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Wave Channel */ NULL,
    /* unk8         */ 0x007f0000,
    /* unkC         */ 0x007e0000,
    /* unk10        */ 0x007f0000,
    /* unk14        */ 0x007f0000,
    /* unk18        */ 0x00000000,
    /* unk1C        */ 0x007f0000,
    /* Channel      */ PSG_PULSE_CHANNEL_1,
    /* unk21        */ 0x0,
    /* unk22        */ 0x0,
};

const struct InstrumentPSG instrumentPSG349 = {
    {
        /* Type */ INSTRUMENT_PSG,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Wave Channel */ NULL,
    /* unk8         */ 0x007f0000,
    /* unkC         */ 0x007e0000,
    /* unk10        */ 0x007f0000,
    /* unk14        */ 0x007f0000,
    /* unk18        */ 0x00000000,
    /* unk1C        */ 0x007f0000,
    /* Channel      */ PSG_PULSE_CHANNEL_1,
    /* unk21        */ 0x0,
    /* unk22        */ 0x2,
};

const struct InstrumentPSG instrumentPSG350 = {
    {
        /* Type */ INSTRUMENT_PSG,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Wave Channel */ NULL,
    /* unk8         */ 0x007f0000,
    /* unkC         */ 0x007e0000,
    /* unk10        */ 0x007f0000,
    /* unk14        */ 0x007f0000,
    /* unk18        */ 0x00000000,
    /* unk1C        */ 0x007f0000,
    /* Channel      */ PSG_PULSE_CHANNEL_1,
    /* unk21        */ 0x0,
    /* unk22        */ 0x4,
};

const struct InstrumentPSG instrumentPSG351 = {
    {
        /* Type */ INSTRUMENT_PSG,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Wave Channel */ NULL,
    /* unk8         */ 0x007f0000,
    /* unkC         */ 0x007e0000,
    /* unk10        */ 0x007f0000,
    /* unk14        */ 0x007f0000,
    /* unk18        */ 0x00000000,
    /* unk1C        */ 0x001fc000,
    /* Channel      */ PSG_PULSE_CHANNEL_1,
    /* unk21        */ 0x0,
    /* unk22        */ 0x0,
};

const struct InstrumentPSG instrumentPSG352 = {
    {
        /* Type */ INSTRUMENT_PSG,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Wave Channel */ NULL,
    /* unk8         */ 0x007f0000,
    /* unkC         */ 0x007e0000,
    /* unk10        */ 0x007f0000,
    /* unk14        */ 0x007f0000,
    /* unk18        */ 0x00000000,
    /* unk1C        */ 0x001fc000,
    /* Channel      */ PSG_PULSE_CHANNEL_1,
    /* unk21        */ 0x0,
    /* unk22        */ 0x2,
};

const struct InstrumentPSG instrumentPSG353 = {
    {
        /* Type */ INSTRUMENT_PSG,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Wave Channel */ NULL,
    /* unk8         */ 0x007f0000,
    /* unkC         */ 0x007e0000,
    /* unk10        */ 0x007f0000,
    /* unk14        */ 0x007f0000,
    /* unk18        */ 0x00000000,
    /* unk1C        */ 0x001fc000,
    /* Channel      */ PSG_PULSE_CHANNEL_1,
    /* unk21        */ 0x0,
    /* unk22        */ 0x4,
};

const struct InstrumentPSG instrumentPSG354 = {
    {
        /* Type */ INSTRUMENT_PSG,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Wave Channel */ NULL,
    /* unk8         */ 0x007f0000,
    /* unkC         */ 0x007e0000,
    /* unk10        */ 0x007f0000,
    /* unk14        */ 0x007f0000,
    /* unk18        */ 0x00000000,
    /* unk1C        */ 0x00091249,
    /* Channel      */ PSG_PULSE_CHANNEL_1,
    /* unk21        */ 0x0,
    /* unk22        */ 0x0,
};

const struct InstrumentPSG instrumentPSG355 = {
    {
        /* Type */ INSTRUMENT_PSG,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Wave Channel */ NULL,
    /* unk8         */ 0x007f0000,
    /* unkC         */ 0x007e0000,
    /* unk10        */ 0x007f0000,
    /* unk14        */ 0x007f0000,
    /* unk18        */ 0x00000000,
    /* unk1C        */ 0x00091249,
    /* Channel      */ PSG_PULSE_CHANNEL_1,
    /* unk21        */ 0x0,
    /* unk22        */ 0x2,
};

const struct InstrumentPSG instrumentPSG356 = {
    {
        /* Type */ INSTRUMENT_PSG,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Wave Channel */ NULL,
    /* unk8         */ 0x007f0000,
    /* unkC         */ 0x007e0000,
    /* unk10        */ 0x007f0000,
    /* unk14        */ 0x007f0000,
    /* unk18        */ 0x00000000,
    /* unk1C        */ 0x00091249,
    /* Channel      */ PSG_PULSE_CHANNEL_1,
    /* unk21        */ 0x0,
    /* unk22        */ 0x4,
};

const struct InstrumentPSG instrumentPSG357 = {
    {
        /* Type */ INSTRUMENT_PSG,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Wave Channel */ NULL,
    /* unk8         */ 0x007f0000,
    /* unkC         */ 0x00000000,
    /* unk10        */ 0x007f0000,
    /* unk14        */ 0x00054aaa,
    /* unk18        */ 0x00000000,
    /* unk1C        */ 0x00091249,
    /* Channel      */ PSG_PULSE_CHANNEL_1,
    /* unk21        */ 0x0,
    /* unk22        */ 0x0,
};

const struct InstrumentPSG instrumentPSG358 = {
    {
        /* Type */ INSTRUMENT_PSG,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Wave Channel */ NULL,
    /* unk8         */ 0x004cf83e,
    /* unkC         */ 0x007e0000,
    /* unk10        */ 0x00091249,
    /* unk14        */ 0x007f0000,
    /* unk18        */ 0x00000000,
    /* unk1C        */ 0x00091249,
    /* Channel      */ PSG_PULSE_CHANNEL_1,
    /* unk21        */ 0x0,
    /* unk22        */ 0x4,
};

const struct InstrumentPSG instrumentPSG359 = {
    {
        /* Type */ INSTRUMENT_PSG,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Wave Channel */ NULL,
    /* unk8         */ 0x007f0000,
    /* unkC         */ 0x007e0000,
    /* unk10        */ 0x007f0000,
    /* unk14        */ 0x007f0000,
    /* unk18        */ 0x00000000,
    /* unk1C        */ 0x007f0000,
    /* Channel      */ PSG_PULSE_CHANNEL_1,
    /* unk21        */ 0x48,
    /* unk22        */ 0x4,
};

const struct InstrumentPSG instrumentPSG360 = {
    {
        /* Type */ INSTRUMENT_PSG,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Wave Channel */ NULL,
    /* unk8         */ 0x007f0000,
    /* unkC         */ 0x007e0000,
    /* unk10        */ 0x007f0000,
    /* unk14        */ 0x007f0000,
    /* unk18        */ 0x00000000,
    /* unk1C        */ 0x007f0000,
    /* Channel      */ PSG_PULSE_CHANNEL_1,
    /* unk21        */ 0x50,
    /* unk22        */ 0x4,
};

const struct InstrumentPSG instrumentPSG361 = {
    {
        /* Type */ INSTRUMENT_PSG,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Wave Channel */ NULL,
    /* unk8         */ 0x007f0000,
    /* unkC         */ 0x007e0000,
    /* unk10        */ 0x007f0000,
    /* unk14        */ 0x007f0000,
    /* unk18        */ 0x00000000,
    /* unk1C        */ 0x007f0000,
    /* Channel      */ PSG_PULSE_CHANNEL_1,
    /* unk21        */ 0x58,
    /* unk22        */ 0x4,
};

const struct InstrumentPSG instrumentPSG362 = {
    {
        /* Type */ INSTRUMENT_PSG,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Wave Channel */ NULL,
    /* unk8         */ 0x007f0000,
    /* unkC         */ 0x007e0000,
    /* unk10        */ 0x007f0000,
    /* unk14        */ 0x007f0000,
    /* unk18        */ 0x00000000,
    /* unk1C        */ 0x007f0000,
    /* Channel      */ PSG_PULSE_CHANNEL_1,
    /* unk21        */ 0x88,
    /* unk22        */ 0x4,
};

const struct InstrumentPSG instrumentPSG363 = {
    {
        /* Type */ INSTRUMENT_PSG,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Wave Channel */ NULL,
    /* unk8         */ 0x007f0000,
    /* unkC         */ 0x007e0000,
    /* unk10        */ 0x007f0000,
    /* unk14        */ 0x007f0000,
    /* unk18        */ 0x00000000,
    /* unk1C        */ 0x007f0000,
    /* Channel      */ PSG_PULSE_CHANNEL_1,
    /* unk21        */ 0x90,
    /* unk22        */ 0x4,
};

const struct InstrumentPSG instrumentPSG364 = {
    {
        /* Type */ INSTRUMENT_PSG,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Wave Channel */ NULL,
    /* unk8         */ 0x007f0000,
    /* unkC         */ 0x007e0000,
    /* unk10        */ 0x007f0000,
    /* unk14        */ 0x007f0000,
    /* unk18        */ 0x00000000,
    /* unk1C        */ 0x007f0000,
    /* Channel      */ PSG_PULSE_CHANNEL_1,
    /* unk21        */ 0x98,
    /* unk22        */ 0x4,
};

const struct InstrumentPSG instrumentPSG365 = {
    {
        /* Type */ INSTRUMENT_PSG,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Wave Channel */ NULL,
    /* unk8         */ 0x007f0000,
    /* unkC         */ 0x007e0000,
    /* unk10        */ 0x007f0000,
    /* unk14        */ 0x007f0000,
    /* unk18        */ 0x00000000,
    /* unk1C        */ 0x007f0000,
    /* Channel      */ PSG_PULSE_CHANNEL_1,
    /* unk21        */ 0xc8,
    /* unk22        */ 0x4,
};

const struct InstrumentPSG instrumentPSG366 = {
    {
        /* Type */ INSTRUMENT_PSG,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Wave Channel */ NULL,
    /* unk8         */ 0x007f0000,
    /* unkC         */ 0x007e0000,
    /* unk10        */ 0x007f0000,
    /* unk14        */ 0x007f0000,
    /* unk18        */ 0x00000000,
    /* unk1C        */ 0x007f0000,
    /* Channel      */ PSG_PULSE_CHANNEL_1,
    /* unk21        */ 0xd0,
    /* unk22        */ 0x4,
};

const struct InstrumentPSG instrumentPSG367 = {
    {
        /* Type */ INSTRUMENT_PSG,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Wave Channel */ NULL,
    /* unk8         */ 0x007f0000,
    /* unkC         */ 0x007e0000,
    /* unk10        */ 0x007f0000,
    /* unk14        */ 0x007f0000,
    /* unk18        */ 0x00000000,
    /* unk1C        */ 0x007f0000,
    /* Channel      */ PSG_PULSE_CHANNEL_1,
    /* unk21        */ 0x10,
    /* unk22        */ 0x5,
};

const struct InstrumentPSG instrumentPSG368 = {
    {
        /* Type */ INSTRUMENT_PSG,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Wave Channel */ NULL,
    /* unk8         */ 0x007f0000,
    /* unkC         */ 0x007e0000,
    /* unk10        */ 0x007f0000,
    /* unk14        */ 0x007f0000,
    /* unk18        */ 0x00000000,
    /* unk1C        */ 0x007f0000,
    /* Channel      */ PSG_PULSE_CHANNEL_1,
    /* unk21        */ 0x50,
    /* unk22        */ 0x5,
};

const struct InstrumentPSG instrumentPSG369 = {
    {
        /* Type */ INSTRUMENT_PSG,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Wave Channel */ NULL,
    /* unk8         */ 0x007f0000,
    /* unkC         */ 0x007e0000,
    /* unk10        */ 0x007f0000,
    /* unk14        */ 0x007f0000,
    /* unk18        */ 0x00000000,
    /* unk1C        */ 0x007f0000,
    /* Channel      */ PSG_PULSE_CHANNEL_1,
    /* unk21        */ 0x6c,
    /* unk22        */ 0x4,
};

const struct InstrumentPSG instrumentPSG370 = {
    {
        /* Type */ INSTRUMENT_PSG,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Wave Channel */ NULL,
    /* unk8         */ 0x007f0000,
    /* unkC         */ 0x007e0000,
    /* unk10        */ 0x007f0000,
    /* unk14        */ 0x007f0000,
    /* unk18        */ 0x00000000,
    /* unk1C        */ 0x007f0000,
    /* Channel      */ PSG_PULSE_CHANNEL_1,
    /* unk21        */ 0x70,
    /* unk22        */ 0x4,
};

const struct InstrumentPSG instrumentPSG371 = {
    {
        /* Type */ INSTRUMENT_PSG,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Wave Channel */ NULL,
    /* unk8         */ 0x007f0000,
    /* unkC         */ 0x007e0000,
    /* unk10        */ 0x007f0000,
    /* unk14        */ 0x007f0000,
    /* unk18        */ 0x00000000,
    /* unk1C        */ 0x007f0000,
    /* Channel      */ PSG_PULSE_CHANNEL_1,
    /* unk21        */ 0x74,
    /* unk22        */ 0x4,
};

const struct InstrumentPSG instrumentPSG372 = {
    {
        /* Type */ INSTRUMENT_PSG,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Wave Channel */ NULL,
    /* unk8         */ 0x007f0000,
    /* unkC         */ 0x007e0000,
    /* unk10        */ 0x007f0000,
    /* unk14        */ 0x007f0000,
    /* unk18        */ 0x00000000,
    /* unk1C        */ 0x007f0000,
    /* Channel      */ PSG_PULSE_CHANNEL_1,
    /* unk21        */ 0x78,
    /* unk22        */ 0x4,
};

const struct InstrumentPSG instrumentPSG373 = {
    {
        /* Type */ INSTRUMENT_PSG,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Wave Channel */ NULL,
    /* unk8         */ 0x007f0000,
    /* unkC         */ 0x007e0000,
    /* unk10        */ 0x007f0000,
    /* unk14        */ 0x007f0000,
    /* unk18        */ 0x00000000,
    /* unk1C        */ 0x007f0000,
    /* Channel      */ PSG_PULSE_CHANNEL_1,
    /* unk21        */ 0x7c,
    /* unk22        */ 0x4,
};

const struct InstrumentPSG instrumentPSG374 = {
    {
        /* Type */ INSTRUMENT_PSG,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Wave Channel */ NULL,
    /* unk8         */ 0x007f0000,
    /* unkC         */ 0x007e0000,
    /* unk10        */ 0x007f0000,
    /* unk14        */ 0x007f0000,
    /* unk18        */ 0x00000000,
    /* unk1C        */ 0x007f0000,
    /* Channel      */ PSG_PULSE_CHANNEL_1,
    /* unk21        */ 0xec,
    /* unk22        */ 0x4,
};

const struct InstrumentPSG instrumentPSG375 = {
    {
        /* Type */ INSTRUMENT_PSG,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Wave Channel */ NULL,
    /* unk8         */ 0x007f0000,
    /* unkC         */ 0x007e0000,
    /* unk10        */ 0x007f0000,
    /* unk14        */ 0x007f0000,
    /* unk18        */ 0x00000000,
    /* unk1C        */ 0x007f0000,
    /* Channel      */ PSG_PULSE_CHANNEL_1,
    /* unk21        */ 0xf0,
    /* unk22        */ 0x4,
};

const struct InstrumentPSG instrumentPSG376 = {
    {
        /* Type */ INSTRUMENT_PSG,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Wave Channel */ NULL,
    /* unk8         */ 0x007f0000,
    /* unkC         */ 0x007e0000,
    /* unk10        */ 0x007f0000,
    /* unk14        */ 0x007f0000,
    /* unk18        */ 0x00000000,
    /* unk1C        */ 0x007f0000,
    /* Channel      */ PSG_PULSE_CHANNEL_1,
    /* unk21        */ 0xf4,
    /* unk22        */ 0x4,
};

const struct InstrumentPSG instrumentPSG377 = {
    {
        /* Type */ INSTRUMENT_PSG,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Wave Channel */ NULL,
    /* unk8         */ 0x007f0000,
    /* unkC         */ 0x007e0000,
    /* unk10        */ 0x007f0000,
    /* unk14        */ 0x007f0000,
    /* unk18        */ 0x00000000,
    /* unk1C        */ 0x007f0000,
    /* Channel      */ PSG_PULSE_CHANNEL_1,
    /* unk21        */ 0xf8,
    /* unk22        */ 0x4,
};

const struct InstrumentPSG instrumentPSG378 = {
    {
        /* Type */ INSTRUMENT_PSG,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Wave Channel */ NULL,
    /* unk8         */ 0x007f0000,
    /* unkC         */ 0x007e0000,
    /* unk10        */ 0x007f0000,
    /* unk14        */ 0x007f0000,
    /* unk18        */ 0x00000000,
    /* unk1C        */ 0x007f0000,
    /* Channel      */ PSG_PULSE_CHANNEL_1,
    /* unk21        */ 0xfc,
    /* unk22        */ 0x4,
};

const struct InstrumentPSG instrumentPSG379 = {
    {
        /* Type */ INSTRUMENT_PSG,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Wave Channel */ NULL,
    /* unk8         */ 0x007f0000,
    /* unkC         */ 0x007e0000,
    /* unk10        */ 0x007f0000,
    /* unk14        */ 0x007f0000,
    /* unk18        */ 0x00000000,
    /* unk1C        */ 0x007f0000,
    /* Channel      */ PSG_PULSE_CHANNEL_2,
    /* unk21        */ 0x0,
    /* unk22        */ 0x0,
};

const struct InstrumentPSG instrumentPSG380 = {
    {
        /* Type */ INSTRUMENT_PSG,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Wave Channel */ NULL,
    /* unk8         */ 0x007f0000,
    /* unkC         */ 0x007e0000,
    /* unk10        */ 0x007f0000,
    /* unk14        */ 0x007f0000,
    /* unk18        */ 0x00000000,
    /* unk1C        */ 0x007f0000,
    /* Channel      */ PSG_PULSE_CHANNEL_2,
    /* unk21        */ 0x0,
    /* unk22        */ 0x2,
};

const struct InstrumentPSG instrumentPSG381 = {
    {
        /* Type */ INSTRUMENT_PSG,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Wave Channel */ NULL,
    /* unk8         */ 0x007f0000,
    /* unkC         */ 0x007e0000,
    /* unk10        */ 0x007f0000,
    /* unk14        */ 0x007f0000,
    /* unk18        */ 0x00000000,
    /* unk1C        */ 0x007f0000,
    /* Channel      */ PSG_PULSE_CHANNEL_2,
    /* unk21        */ 0x0,
    /* unk22        */ 0x4,
};

const struct InstrumentPSG instrumentPSG382 = {
    {
        /* Type */ INSTRUMENT_PSG,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Wave Channel */ NULL,
    /* unk8         */ 0x007f0000,
    /* unkC         */ 0x007e0000,
    /* unk10        */ 0x007f0000,
    /* unk14        */ 0x007f0000,
    /* unk18        */ 0x00000000,
    /* unk1C        */ 0x001fc000,
    /* Channel      */ PSG_PULSE_CHANNEL_2,
    /* unk21        */ 0x0,
    /* unk22        */ 0x0,
};

const struct InstrumentPSG instrumentPSG383 = {
    {
        /* Type */ INSTRUMENT_PSG,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Wave Channel */ NULL,
    /* unk8         */ 0x007f0000,
    /* unkC         */ 0x007e0000,
    /* unk10        */ 0x007f0000,
    /* unk14        */ 0x007f0000,
    /* unk18        */ 0x00000000,
    /* unk1C        */ 0x001fc000,
    /* Channel      */ PSG_PULSE_CHANNEL_2,
    /* unk21        */ 0x0,
    /* unk22        */ 0x2,
};

const struct InstrumentPSG instrumentPSG384 = {
    {
        /* Type */ INSTRUMENT_PSG,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Wave Channel */ NULL,
    /* unk8         */ 0x007f0000,
    /* unkC         */ 0x007e0000,
    /* unk10        */ 0x007f0000,
    /* unk14        */ 0x007f0000,
    /* unk18        */ 0x00000000,
    /* unk1C        */ 0x001fc000,
    /* Channel      */ PSG_PULSE_CHANNEL_2,
    /* unk21        */ 0x0,
    /* unk22        */ 0x4,
};

const struct InstrumentPSG instrumentPSG385 = {
    {
        /* Type */ INSTRUMENT_PSG,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Wave Channel */ NULL,
    /* unk8         */ 0x007f0000,
    /* unkC         */ 0x007e0000,
    /* unk10        */ 0x007f0000,
    /* unk14        */ 0x007f0000,
    /* unk18        */ 0x00000000,
    /* unk1C        */ 0x00091249,
    /* Channel      */ PSG_PULSE_CHANNEL_2,
    /* unk21        */ 0x0,
    /* unk22        */ 0x0,
};

const struct InstrumentPSG instrumentPSG386 = {
    {
        /* Type */ INSTRUMENT_PSG,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Wave Channel */ NULL,
    /* unk8         */ 0x007f0000,
    /* unkC         */ 0x007e0000,
    /* unk10        */ 0x007f0000,
    /* unk14        */ 0x007f0000,
    /* unk18        */ 0x00000000,
    /* unk1C        */ 0x00091249,
    /* Channel      */ PSG_PULSE_CHANNEL_2,
    /* unk21        */ 0x0,
    /* unk22        */ 0x2,
};

const struct InstrumentPSG instrumentPSG387 = {
    {
        /* Type */ INSTRUMENT_PSG,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Wave Channel */ NULL,
    /* unk8         */ 0x007f0000,
    /* unkC         */ 0x007e0000,
    /* unk10        */ 0x007f0000,
    /* unk14        */ 0x007f0000,
    /* unk18        */ 0x00000000,
    /* unk1C        */ 0x00091249,
    /* Channel      */ PSG_PULSE_CHANNEL_2,
    /* unk21        */ 0x0,
    /* unk22        */ 0x4,
};

const struct InstrumentPSG instrumentPSG388 = {
    {
        /* Type */ INSTRUMENT_PSG,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Wave Channel */ NULL,
    /* unk8         */ 0x007f0000,
    /* unkC         */ 0x00000000,
    /* unk10        */ 0x007f0000,
    /* unk14        */ 0x00054aaa,
    /* unk18        */ 0x00000000,
    /* unk1C        */ 0x00091249,
    /* Channel      */ PSG_PULSE_CHANNEL_2,
    /* unk21        */ 0x0,
    /* unk22        */ 0x0,
};

const struct InstrumentPSG instrumentPSG389 = {
    {
        /* Type */ INSTRUMENT_PSG,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Wave Channel */ (void *)0x08a86870, // POINTER
    /* unk8         */ 0x007f0000,
    /* unkC         */ 0x007e0000,
    /* unk10        */ 0x007f0000,
    /* unk14        */ 0x007f0000,
    /* unk18        */ 0x00000000,
    /* unk1C        */ 0x007f0000,
    /* Channel      */ PSG_WAVE_CHANNEL,
    /* unk21        */ 0x0,
    /* unk22        */ 0x0,
};

const struct InstrumentPSG instrumentPSG390 = {
    {
        /* Type */ INSTRUMENT_PSG,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Wave Channel */ (void *)0x08a86880, // POINTER
    /* unk8         */ 0x007f0000,
    /* unkC         */ 0x007e0000,
    /* unk10        */ 0x007f0000,
    /* unk14        */ 0x007f0000,
    /* unk18        */ 0x00000000,
    /* unk1C        */ 0x007f0000,
    /* Channel      */ PSG_WAVE_CHANNEL,
    /* unk21        */ 0x0,
    /* unk22        */ 0x0,
};

const struct InstrumentPSG instrumentPSG391 = {
    {
        /* Type */ INSTRUMENT_PSG,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Wave Channel */ (void *)0x08a86890, // POINTER
    /* unk8         */ 0x007f0000,
    /* unkC         */ 0x007e0000,
    /* unk10        */ 0x007f0000,
    /* unk14        */ 0x007f0000,
    /* unk18        */ 0x00000000,
    /* unk1C        */ 0x007f0000,
    /* Channel      */ PSG_WAVE_CHANNEL,
    /* unk21        */ 0x0,
    /* unk22        */ 0x0,
};

const struct InstrumentPSG instrumentPSG392 = {
    {
        /* Type */ INSTRUMENT_PSG,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Wave Channel */ (void *)0x08a868a0, // POINTER
    /* unk8         */ 0x007f0000,
    /* unkC         */ 0x007e0000,
    /* unk10        */ 0x007f0000,
    /* unk14        */ 0x007f0000,
    /* unk18        */ 0x00000000,
    /* unk1C        */ 0x007f0000,
    /* Channel      */ PSG_WAVE_CHANNEL,
    /* unk21        */ 0x0,
    /* unk22        */ 0x0,
};

const struct InstrumentPSG instrumentPSG393 = {
    {
        /* Type */ INSTRUMENT_PSG,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Wave Channel */ (void *)0x08a868b0, // POINTER
    /* unk8         */ 0x007f0000,
    /* unkC         */ 0x007e0000,
    /* unk10        */ 0x007f0000,
    /* unk14        */ 0x007f0000,
    /* unk18        */ 0x00000000,
    /* unk1C        */ 0x007f0000,
    /* Channel      */ PSG_WAVE_CHANNEL,
    /* unk21        */ 0x0,
    /* unk22        */ 0x0,
};

const struct InstrumentPSG instrumentPSG394 = {
    {
        /* Type */ INSTRUMENT_PSG,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Wave Channel */ (void *)0x08a868c0, // POINTER
    /* unk8         */ 0x007f0000,
    /* unkC         */ 0x007e0000,
    /* unk10        */ 0x007f0000,
    /* unk14        */ 0x007f0000,
    /* unk18        */ 0x00000000,
    /* unk1C        */ 0x007f0000,
    /* Channel      */ PSG_WAVE_CHANNEL,
    /* unk21        */ 0x0,
    /* unk22        */ 0x0,
};

const struct InstrumentPSG instrumentPSG395 = {
    {
        /* Type */ INSTRUMENT_PSG,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Wave Channel */ (void *)0x08a868d0, // POINTER
    /* unk8         */ 0x007f0000,
    /* unkC         */ 0x007e0000,
    /* unk10        */ 0x007f0000,
    /* unk14        */ 0x007f0000,
    /* unk18        */ 0x00000000,
    /* unk1C        */ 0x007f0000,
    /* Channel      */ PSG_WAVE_CHANNEL,
    /* unk21        */ 0x0,
    /* unk22        */ 0x0,
};

const struct InstrumentPSG instrumentPSG396 = {
    {
        /* Type */ INSTRUMENT_PSG,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Wave Channel */ (void *)0x08a86870, // POINTER
    /* unk8         */ 0x007f0000,
    /* unkC         */ 0x007e0000,
    /* unk10        */ 0x007f0000,
    /* unk14        */ 0x007f0000,
    /* unk18        */ 0x00000000,
    /* unk1C        */ 0x001fc000,
    /* Channel      */ PSG_WAVE_CHANNEL,
    /* unk21        */ 0x0,
    /* unk22        */ 0x0,
};

const struct InstrumentPSG instrumentPSG397 = {
    {
        /* Type */ INSTRUMENT_PSG,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Wave Channel */ NULL,
    /* unk8         */ 0x007f0000,
    /* unkC         */ 0x007e0000,
    /* unk10        */ 0x007f0000,
    /* unk14        */ 0x007f0000,
    /* unk18        */ 0x00000000,
    /* unk1C        */ 0x007f0000,
    /* Channel      */ PSG_NOISE_CHANNEL,
    /* unk21        */ 0x0,
    /* unk22        */ 0x0,
};

const struct InstrumentPSG instrumentPSG398 = {
    {
        /* Type */ INSTRUMENT_PSG,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Wave Channel */ NULL,
    /* unk8         */ 0x007f0000,
    /* unkC         */ 0x007e0000,
    /* unk10        */ 0x007f0000,
    /* unk14        */ 0x007f0000,
    /* unk18        */ 0x00000000,
    /* unk1C        */ 0x001fc000,
    /* Channel      */ PSG_NOISE_CHANNEL,
    /* unk21        */ 0x0,
    /* unk22        */ 0x0,
};

const struct InstrumentPSG instrumentPSG399 = {
    {
        /* Type */ INSTRUMENT_PSG,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Wave Channel */ NULL,
    /* unk8         */ 0x007f0000,
    /* unkC         */ 0x007e0000,
    /* unk10        */ 0x007f0000,
    /* unk14        */ 0x007f0000,
    /* unk18        */ 0x00000000,
    /* unk1C        */ 0x00077878,
    /* Channel      */ PSG_NOISE_CHANNEL,
    /* unk21        */ 0x0,
    /* unk22        */ 0x0,
};

const struct InstrumentPSG instrumentPSG400 = {
    {
        /* Type */ INSTRUMENT_PSG,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Wave Channel */ NULL,
    /* unk8         */ 0x007f0000,
    /* unkC         */ 0x007e0000,
    /* unk10        */ 0x007f0000,
    /* unk14        */ 0x007f0000,
    /* unk18        */ 0x00000000,
    /* unk1C        */ 0x007f0000,
    /* Channel      */ PSG_NOISE_CHANNEL,
    /* unk21        */ 0x0,
    /* unk22        */ 0x8,
};

const struct InstrumentPSG instrumentPSG401 = {
    {
        /* Type */ INSTRUMENT_PSG,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Wave Channel */ NULL,
    /* unk8         */ 0x007f0000,
    /* unkC         */ 0x007e0000,
    /* unk10        */ 0x007f0000,
    /* unk14        */ 0x007f0000,
    /* unk18        */ 0x00000000,
    /* unk1C        */ 0x001fc000,
    /* Channel      */ PSG_NOISE_CHANNEL,
    /* unk21        */ 0x0,
    /* unk22        */ 0x8,
};

const struct InstrumentPSG instrumentPSG402 = {
    {
        /* Type */ INSTRUMENT_PSG,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Wave Channel */ NULL,
    /* unk8         */ 0x007f0000,
    /* unkC         */ 0x007e0000,
    /* unk10        */ 0x007f0000,
    /* unk14        */ 0x007f0000,
    /* unk18        */ 0x00000000,
    /* unk1C        */ 0x00077878,
    /* Channel      */ PSG_NOISE_CHANNEL,
    /* unk21        */ 0x0,
    /* unk22        */ 0x8,
};

const struct InstrumentPSG instrumentPSG403 = {
    {
        /* Type */ INSTRUMENT_PSG,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Wave Channel */ NULL,
    /* unk8         */ 0x007f0000,
    /* unkC         */ 0x007e0000,
    /* unk10        */ 0x007f0000,
    /* unk14        */ 0x007f0000,
    /* unk18        */ 0x00000000,
    /* unk1C        */ 0x007f0000,
    /* Channel      */ PSG_PULSE_CHANNEL_1,
    /* unk21        */ 0x50,
    /* unk22        */ 0x2,
};

const struct InstrumentPSG instrumentPSG404 = {
    {
        /* Type */ INSTRUMENT_PSG,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Wave Channel */ NULL,
    /* unk8         */ 0x007f0000,
    /* unkC         */ 0x007e0000,
    /* unk10        */ 0x007f0000,
    /* unk14        */ 0x007f0000,
    /* unk18        */ 0x00000000,
    /* unk1C        */ 0x007f0000,
    /* Channel      */ PSG_PULSE_CHANNEL_1,
    /* unk21        */ 0x58,
    /* unk22        */ 0x2,
};

const struct InstrumentPSG instrumentPSG405 = {
    {
        /* Type */ INSTRUMENT_PSG,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Wave Channel */ NULL,
    /* unk8         */ 0x007f0000,
    /* unkC         */ 0x007e0000,
    /* unk10        */ 0x007f0000,
    /* unk14        */ 0x007f0000,
    /* unk18        */ 0x00000000,
    /* unk1C        */ 0x007f0000,
    /* Channel      */ PSG_PULSE_CHANNEL_1,
    /* unk21        */ 0x90,
    /* unk22        */ 0x2,
};

const struct InstrumentPSG instrumentPSG406 = {
    {
        /* Type */ INSTRUMENT_PSG,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Wave Channel */ NULL,
    /* unk8         */ 0x007f0000,
    /* unkC         */ 0x007e0000,
    /* unk10        */ 0x007f0000,
    /* unk14        */ 0x007f0000,
    /* unk18        */ 0x00000000,
    /* unk1C        */ 0x007f0000,
    /* Channel      */ PSG_PULSE_CHANNEL_1,
    /* unk21        */ 0x98,
    /* unk22        */ 0x2,
};

const struct InstrumentPSG instrumentPSG407 = {
    {
        /* Type */ INSTRUMENT_PSG,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Wave Channel */ NULL,
    /* unk8         */ 0x007f0000,
    /* unkC         */ 0x007e0000,
    /* unk10        */ 0x007f0000,
    /* unk14        */ 0x007f0000,
    /* unk18        */ 0x00000000,
    /* unk1C        */ 0x007f0000,
    /* Channel      */ PSG_PULSE_CHANNEL_1,
    /* unk21        */ 0x10,
    /* unk22        */ 0x3,
};

const struct InstrumentPSG instrumentPSG408 = {
    {
        /* Type */ INSTRUMENT_PSG,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Wave Channel */ NULL,
    /* unk8         */ 0x007f0000,
    /* unkC         */ 0x007e0000,
    /* unk10        */ 0x007f0000,
    /* unk14        */ 0x007f0000,
    /* unk18        */ 0x00000000,
    /* unk1C        */ 0x007f0000,
    /* Channel      */ PSG_PULSE_CHANNEL_1,
    /* unk21        */ 0x50,
    /* unk22        */ 0x3,
};

const struct InstrumentPSG instrumentPSG409 = {
    {
        /* Type */ INSTRUMENT_PSG,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Wave Channel */ NULL,
    /* unk8         */ 0x007f0000,
    /* unkC         */ 0x007e0000,
    /* unk10        */ 0x007f0000,
    /* unk14        */ 0x007f0000,
    /* unk18        */ 0x00000000,
    /* unk1C        */ 0x007f0000,
    /* Channel      */ PSG_PULSE_CHANNEL_1,
    /* unk21        */ 0x50,
    /* unk22        */ 0x0,
};

const struct InstrumentPSG instrumentPSG410 = {
    {
        /* Type */ INSTRUMENT_PSG,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Wave Channel */ NULL,
    /* unk8         */ 0x007f0000,
    /* unkC         */ 0x007e0000,
    /* unk10        */ 0x007f0000,
    /* unk14        */ 0x007f0000,
    /* unk18        */ 0x00000000,
    /* unk1C        */ 0x007f0000,
    /* Channel      */ PSG_PULSE_CHANNEL_1,
    /* unk21        */ 0x58,
    /* unk22        */ 0x0,
};

const struct InstrumentPSG instrumentPSG411 = {
    {
        /* Type */ INSTRUMENT_PSG,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Wave Channel */ NULL,
    /* unk8         */ 0x007f0000,
    /* unkC         */ 0x007e0000,
    /* unk10        */ 0x007f0000,
    /* unk14        */ 0x007f0000,
    /* unk18        */ 0x00000000,
    /* unk1C        */ 0x007f0000,
    /* Channel      */ PSG_PULSE_CHANNEL_1,
    /* unk21        */ 0x90,
    /* unk22        */ 0x0,
};

const struct InstrumentPSG instrumentPSG412 = {
    {
        /* Type */ INSTRUMENT_PSG,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Wave Channel */ NULL,
    /* unk8         */ 0x007f0000,
    /* unkC         */ 0x007e0000,
    /* unk10        */ 0x007f0000,
    /* unk14        */ 0x007f0000,
    /* unk18        */ 0x00000000,
    /* unk1C        */ 0x007f0000,
    /* Channel      */ PSG_PULSE_CHANNEL_1,
    /* unk21        */ 0x98,
    /* unk22        */ 0x0,
};

const struct InstrumentPSG instrumentPSG413 = {
    {
        /* Type */ INSTRUMENT_PSG,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Wave Channel */ NULL,
    /* unk8         */ 0x007f0000,
    /* unkC         */ 0x007e0000,
    /* unk10        */ 0x007f0000,
    /* unk14        */ 0x007f0000,
    /* unk18        */ 0x00000000,
    /* unk1C        */ 0x007f0000,
    /* Channel      */ PSG_PULSE_CHANNEL_1,
    /* unk21        */ 0x10,
    /* unk22        */ 0x1,
};

const struct InstrumentPSG instrumentPSG414 = {
    {
        /* Type */ INSTRUMENT_PSG,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Wave Channel */ NULL,
    /* unk8         */ 0x007f0000,
    /* unkC         */ 0x007e0000,
    /* unk10        */ 0x007f0000,
    /* unk14        */ 0x007f0000,
    /* unk18        */ 0x00000000,
    /* unk1C        */ 0x007f0000,
    /* Channel      */ PSG_PULSE_CHANNEL_1,
    /* unk21        */ 0x50,
    /* unk22        */ 0x1,
};

const struct InstrumentPSG instrumentPSG415 = {
    {
        /* Type */ INSTRUMENT_PSG,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Wave Channel */ NULL,
    /* unk8         */ 0x0073745d,
    /* unkC         */ 0x00400000,
    /* unk10        */ 0x001fc000,
    /* unk14        */ 0x0004b425,
    /* unk18        */ 0x00000000,
    /* unk1C        */ 0x0004611a,
    /* Channel      */ PSG_PULSE_CHANNEL_1,
    /* unk21        */ 0x0,
    /* unk22        */ 0x4,
};

const struct InstrumentPSG instrumentPSG416 = {
    {
        /* Type */ INSTRUMENT_PSG,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Wave Channel */ NULL,
    /* unk8         */ 0x0073745d,
    /* unkC         */ 0x00400000,
    /* unk10        */ 0x001fc000,
    /* unk14        */ 0x0004b425,
    /* unk18        */ 0x00000000,
    /* unk1C        */ 0x0004611a,
    /* Channel      */ PSG_PULSE_CHANNEL_2,
    /* unk21        */ 0x0,
    /* unk22        */ 0x4,
};

extern const struct WaveData sfx_236WaveData;
const struct InstrumentPCM instrumentPCM417 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_236WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x00218000,
};

extern const struct WaveData sfx_237WaveData;
const struct InstrumentPCM instrumentPCM418 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_237WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_202WaveData;
const struct InstrumentPCM instrumentPCM419 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_202WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x0060364d,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00015029,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_003WaveData;
const struct InstrumentPCM instrumentPCM420 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_003WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_204WaveData;
const struct InstrumentPCM instrumentPCM421 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_204WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0000540a,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_196WaveData;
const struct InstrumentPCM instrumentPCM422 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_196WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0000a814,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_238WaveData;
const struct InstrumentPCM instrumentPCM423 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_238WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x0019a814,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0000a814,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_239WaveData;
const struct InstrumentPCM instrumentPCM424 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_239WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00024c48,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0018ea90,
};

extern const struct WaveData sfx_240WaveData;
const struct InstrumentPCM instrumentPCM425 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_240WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0001a433,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_241WaveData;
const struct InstrumentPCM instrumentPCM426 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_241WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_242WaveData;
const struct InstrumentPCM instrumentPCM427 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_242WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_243WaveData;
const struct InstrumentPCM instrumentPCM428 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_243WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_244WaveData;
const struct InstrumentPCM instrumentPCM429 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_244WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_245WaveData;
const struct InstrumentPCM instrumentPCM430 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_245WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_246WaveData;
const struct InstrumentPCM instrumentPCM431 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_246WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_247WaveData;
const struct InstrumentPCM instrumentPCM432 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_247WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_248WaveData;
const struct InstrumentPCM instrumentPCM433 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_248WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_249WaveData;
const struct InstrumentPCM instrumentPCM434 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_249WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_250WaveData;
const struct InstrumentPCM instrumentPCM435 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_250WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_251WaveData;
const struct InstrumentPCM instrumentPCM436 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_251WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_252WaveData;
const struct InstrumentPCM instrumentPCM437 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_252WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_253WaveData;
const struct InstrumentPCM instrumentPCM438 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_253WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_254WaveData;
const struct InstrumentPCM instrumentPCM439 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_254WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_255WaveData;
const struct InstrumentPCM instrumentPCM440 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_255WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_256WaveData;
const struct InstrumentPCM instrumentPCM441 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_256WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_257WaveData;
const struct InstrumentPCM instrumentPCM442 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_257WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_258WaveData;
const struct InstrumentPCM instrumentPCM443 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_258WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_259WaveData;
const struct InstrumentPCM instrumentPCM444 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_259WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_260WaveData;
const struct InstrumentPCM instrumentPCM445 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_260WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_229WaveData;
const struct InstrumentPCM instrumentPCM446 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_229WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0000fc1f,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_017WaveData;
const struct InstrumentPCM instrumentPCM447 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_017WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0001f83e,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x00082378,
};

extern const struct WaveData sfx_261WaveData;
const struct InstrumentPCM instrumentPCM448 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_261WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0001a433,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0018ea90,
};

extern const struct WaveData sfx_262WaveData;
const struct InstrumentPCM instrumentPCM449 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_262WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00335029,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0000fc1f,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_263WaveData;
const struct InstrumentPCM instrumentPCM450 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_263WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

const struct InstrumentSubSplit instrumentSubSplit451 = {
    {
        /* Type */ INSTRUMENT_SUB_SPLIT,
        /* unk1 */ 0xc,
        /* unk2 */ 0x0,
    },
    /* unk4     */ (void *)0x08a865ac, // POINTER
    /* Sub-bank */ (void *)0x08a95248, // POINTER
};

extern const struct WaveData sfx_264WaveData;
const struct InstrumentPCM instrumentPCM452 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_264WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0001a433,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0018ea90,
};

extern const struct WaveData sfx_265WaveData;
const struct InstrumentPCM instrumentPCM453 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_265WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00267c1f,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00034867,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_266WaveData;
const struct InstrumentPCM instrumentPCM454 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_266WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_267WaveData;
const struct InstrumentPCM instrumentPCM455 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_267WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_268WaveData;
const struct InstrumentPCM instrumentPCM456 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_268WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_269WaveData;
const struct InstrumentPCM instrumentPCM457 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_269WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_270WaveData;
const struct InstrumentPCM instrumentPCM458 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_270WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_271WaveData;
const struct InstrumentPCM instrumentPCM459 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_271WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_272WaveData;
const struct InstrumentPCM instrumentPCM460 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_272WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_273WaveData;
const struct InstrumentPCM instrumentPCM461 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_273WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_274WaveData;
const struct InstrumentPCM instrumentPCM462 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_274WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_275WaveData;
const struct InstrumentPCM instrumentPCM463 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_275WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

const struct InstrumentSubRhythm instrumentSubRhythm464 = {
    {
        /* Type */ INSTRUMENT_SUB_RHYTHM,
        /* unk1 */ 0x24,
        /* unk2 */ 0x0,
    },
    /* Sub-bank */ (void *)0x08a9940c, // POINTER
};

extern const struct WaveData sfx_221WaveData;
const struct InstrumentPCM instrumentPCM465 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_221WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x000b8000,
};

extern const struct WaveData sfx_122WaveData;
const struct InstrumentPCM instrumentPCM466 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_122WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

const struct InstrumentSubRhythm instrumentSubRhythm467 = {
    {
        /* Type */ INSTRUMENT_SUB_RHYTHM,
        /* unk1 */ 0x24,
        /* unk2 */ 0x0,
    },
    /* Sub-bank */ (void *)0x08a99d3c, // POINTER
};

extern const struct WaveData sfx_276WaveData;
const struct InstrumentPCM instrumentPCM468 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_276WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x00031548,
};

extern const struct WaveData sfx_277WaveData;
const struct InstrumentPCM instrumentPCM469 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_277WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_200WaveData;
const struct InstrumentPCM instrumentPCM470 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_200WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0001a433,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_194WaveData;
const struct InstrumentPCM instrumentPCM471 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_194WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00015029,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_195WaveData;
const struct InstrumentPCM instrumentPCM472 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_195WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x000690ce,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0018ea90,
};

extern const struct WaveData sfx_278WaveData;
const struct InstrumentPCM instrumentPCM473 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_278WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00106a05,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0018ea90,
};

extern const struct WaveData sfx_197WaveData;
const struct InstrumentPCM instrumentPCM474 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_197WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x00082378,
};

extern const struct WaveData sfx_279WaveData;
const struct InstrumentPCM instrumentPCM475 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_279WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0004ec9b,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_280WaveData;
const struct InstrumentPCM instrumentPCM476 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_280WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_281WaveData;
const struct InstrumentPCM instrumentPCM477 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_281WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x00082378,
};

extern const struct WaveData sfx_198WaveData;
const struct InstrumentPCM instrumentPCM478 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_198WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_282WaveData;
const struct InstrumentPCM instrumentPCM479 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_282WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_283WaveData;
const struct InstrumentPCM instrumentPCM480 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_283WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_284WaveData;
const struct InstrumentPCM instrumentPCM481 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_284WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_285WaveData;
const struct InstrumentPCM instrumentPCM482 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_285WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_117WaveData;
const struct InstrumentPCM instrumentPCM483 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_117WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

const struct InstrumentSubRhythm instrumentSubRhythm484 = {
    {
        /* Type */ INSTRUMENT_SUB_RHYTHM,
        /* unk1 */ 0x24,
        /* unk2 */ 0x0,
    },
    /* Sub-bank */ (void *)0x08a9957c, // POINTER
};

const struct InstrumentSubRhythm instrumentSubRhythm485 = {
    {
        /* Type */ INSTRUMENT_SUB_RHYTHM,
        /* unk1 */ 0x24,
        /* unk2 */ 0x0,
    },
    /* Sub-bank */ (void *)0x08a9940c, // POINTER
};

extern const struct WaveData sfx_118WaveData;
const struct InstrumentPCM instrumentPCM486 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_118WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_286WaveData;
const struct InstrumentPCM instrumentPCM487 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_286WaveData,
    /* unk8   */ 0x00000000,
    /* unkC   */ 0x00267c1f,
    /* unk10  */ 0x0043e0f8,
    /* unk14  */ 0x00015029,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_287WaveData;
const struct InstrumentPCM instrumentPCM488 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_287WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00335029,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0000fc1f,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_003WaveData;
const struct InstrumentPCM instrumentPCM489 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_003WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_226WaveData;
const struct InstrumentPCM instrumentPCM490 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_226WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x000690ce,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_288WaveData;
const struct InstrumentPCM instrumentPCM491 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_288WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00267c1f,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0000fc1f,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x00235dd1,
};

extern const struct WaveData sfx_289WaveData;
const struct InstrumentPCM instrumentPCM492 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_289WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_200WaveData;
const struct InstrumentPCM instrumentPCM493 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_200WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0001a433,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

const struct InstrumentSubRhythm instrumentSubRhythm494 = {
    {
        /* Type */ INSTRUMENT_SUB_RHYTHM,
        /* unk1 */ 0x24,
        /* unk2 */ 0x0,
    },
    /* Sub-bank */ (void *)0x08a9940c, // POINTER
};

extern const struct WaveData sfx_290WaveData;
const struct InstrumentPCM instrumentPCM495 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_290WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x000d219d,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_291WaveData;
const struct InstrumentPCM instrumentPCM496 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_291WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_006WaveData;
const struct InstrumentPCM instrumentPCM497 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_006WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x00218000,
};

extern const struct WaveData sfx_292WaveData;
const struct InstrumentPCM instrumentPCM498 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_292WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x000d219d,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_293WaveData;
const struct InstrumentPCM instrumentPCM499 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_293WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0000fc1f,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_294WaveData;
const struct InstrumentPCM instrumentPCM500 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_294WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00034867,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x000b8000,
};

extern const struct WaveData sfx_232WaveData;
const struct InstrumentPCM instrumentPCM501 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_232WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_206WaveData;
const struct InstrumentPCM instrumentPCM502 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_206WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_295WaveData;
const struct InstrumentPCM instrumentPCM503 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_295WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00034867,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x000b8000,
};

const struct InstrumentSubRhythm instrumentSubRhythm504 = {
    {
        /* Type */ INSTRUMENT_SUB_RHYTHM,
        /* unk1 */ 0x24,
        /* unk2 */ 0x0,
    },
    /* Sub-bank */ (void *)0x08a998e4, // POINTER
};

const struct InstrumentSubRhythm instrumentSubRhythm505 = {
    {
        /* Type */ INSTRUMENT_SUB_RHYTHM,
        /* unk1 */ 0x24,
        /* unk2 */ 0x0,
    },
    /* Sub-bank */ (void *)0x08a9940c, // POINTER
};

extern const struct WaveData sfx_296WaveData;
const struct InstrumentPCM instrumentPCM506 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_296WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00015029,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0018ea90,
};

extern const struct WaveData sfx_297WaveData;
const struct InstrumentPCM instrumentPCM507 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_297WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x0019a814,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0000a814,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_298WaveData;
const struct InstrumentPCM instrumentPCM508 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_298WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0000fc1f,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x00082378,
};

extern const struct WaveData sfx_299WaveData;
const struct InstrumentPCM instrumentPCM509 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_299WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x001a433b,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_204WaveData;
const struct InstrumentPCM instrumentPCM510 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_204WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00034867,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_230WaveData;
const struct InstrumentPCM instrumentPCM511 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_230WaveData,
    /* unk8   */ 0x00000000,
    /* unkC   */ 0x0019a814,
    /* unk10  */ 0x0043e0f8,
    /* unk14  */ 0x0000fc1f,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0018ea90,
};

const struct InstrumentSubRhythm instrumentSubRhythm512 = {
    {
        /* Type */ INSTRUMENT_SUB_RHYTHM,
        /* unk1 */ 0x24,
        /* unk2 */ 0x0,
    },
    /* Sub-bank */ (void *)0x08a9940c, // POINTER
};

extern const struct WaveData sfx_300WaveData;
const struct InstrumentPCM instrumentPCM513 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_300WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00015029,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_301WaveData;
const struct InstrumentPCM instrumentPCM514 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_301WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x000690ce,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x000f6a90,
};

extern const struct WaveData sfx_302WaveData;
const struct InstrumentPCM instrumentPCM515 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_302WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0009d936,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x000f6a90,
};

extern const struct WaveData sfx_303WaveData;
const struct InstrumentPCM instrumentPCM516 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_303WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0000fc1f,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_304WaveData;
const struct InstrumentPCM instrumentPCM517 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_304WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0000fc1f,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_234WaveData;
const struct InstrumentPCM instrumentPCM518 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_234WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00034867,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_229WaveData;
const struct InstrumentPCM instrumentPCM519 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_229WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_114WaveData;
const struct InstrumentPCM instrumentPCM520 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_114WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_194WaveData;
const struct InstrumentPCM instrumentPCM521 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_194WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0000fc1f,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_110WaveData;
const struct InstrumentPCM instrumentPCM522 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_110WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0000fc1f,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_111WaveData;
const struct InstrumentPCM instrumentPCM523 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_111WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0000fc1f,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

const struct InstrumentSubSplit instrumentSubSplit524 = {
    {
        /* Type */ INSTRUMENT_SUB_SPLIT,
        /* unk1 */ 0xc,
        /* unk2 */ 0x0,
    },
    /* unk4     */ (void *)0x08a865ac, // POINTER
    /* Sub-bank */ (void *)0x08a95248, // POINTER
};

extern const struct WaveData sfx_015WaveData;
const struct InstrumentPCM instrumentPCM525 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_015WaveData,
    /* unk8   */ 0x00000000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00307c1f,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_305WaveData;
const struct InstrumentPCM instrumentPCM526 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_305WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00267c1f,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0000fc1f,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x00235dd1,
};

extern const struct WaveData sfx_306WaveData;
const struct InstrumentPCM instrumentPCM527 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_306WaveData,
    /* unk8   */ 0x00000000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x0009b26c,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_307WaveData;
const struct InstrumentPCM instrumentPCM528 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_307WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0000fc1f,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

const struct InstrumentSubRhythm instrumentSubRhythm529 = {
    {
        /* Type */ INSTRUMENT_SUB_RHYTHM,
        /* unk1 */ 0x24,
        /* unk2 */ 0x0,
    },
    /* Sub-bank */ (void *)0x08a9940c, // POINTER
};

extern const struct WaveData sfx_308WaveData;
const struct InstrumentPCM instrumentPCM530 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_308WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00335029,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0000fc1f,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_238WaveData;
const struct InstrumentPCM instrumentPCM531 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_238WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x0019a814,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0000a814,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_309WaveData;
const struct InstrumentPCM instrumentPCM532 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_309WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x0019a814,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0000a814,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_114WaveData;
const struct InstrumentPCM instrumentPCM533 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_114WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_310WaveData;
const struct InstrumentPCM instrumentPCM534 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_310WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0000540a,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_203WaveData;
const struct InstrumentPCM instrumentPCM535 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_203WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00015029,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_311WaveData;
const struct InstrumentPCM instrumentPCM536 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_311WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00015029,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x000b8000,
};

extern const struct WaveData sfx_209WaveData;
const struct InstrumentPCM instrumentPCM537 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_209WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_210WaveData;
const struct InstrumentPCM instrumentPCM538 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_210WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x00082378,
};

extern const struct WaveData sfx_229WaveData;
const struct InstrumentPCM instrumentPCM539 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_229WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_211WaveData;
const struct InstrumentPCM instrumentPCM540 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_211WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_262WaveData;
const struct InstrumentPCM instrumentPCM541 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_262WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00335029,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0000fc1f,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_232WaveData;
const struct InstrumentPCM instrumentPCM542 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_232WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_312WaveData;
const struct InstrumentPCM instrumentPCM543 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_312WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x0019a814,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0000a814,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_313WaveData;
const struct InstrumentPCM instrumentPCM544 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_313WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0001a433,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x00082378,
};

extern const struct WaveData sfx_277WaveData;
const struct InstrumentPCM instrumentPCM545 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_277WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_314WaveData;
const struct InstrumentPCM instrumentPCM546 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_314WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00015029,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_205WaveData;
const struct InstrumentPCM instrumentPCM547 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_205WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0001f83e,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x00082378,
};

extern const struct WaveData sfx_122WaveData;
const struct InstrumentPCM instrumentPCM548 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_122WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_109WaveData;
const struct InstrumentPCM instrumentPCM549 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_109WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0000fc1f,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

const struct InstrumentSubRhythm instrumentSubRhythm550 = {
    {
        /* Type */ INSTRUMENT_SUB_RHYTHM,
        /* unk1 */ 0x24,
        /* unk2 */ 0x0,
    },
    /* Sub-bank */ (void *)0x08a9940c, // POINTER
};

extern const struct WaveData sfx_240WaveData;
const struct InstrumentPCM instrumentPCM551 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_240WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00015029,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_315WaveData;
const struct InstrumentPCM instrumentPCM552 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_315WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x000cd40a,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00015029,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_316WaveData;
const struct InstrumentPCM instrumentPCM553 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_316WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_317WaveData;
const struct InstrumentPCM instrumentPCM554 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_317WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00267c1f,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0000fc1f,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_239WaveData;
const struct InstrumentPCM instrumentPCM555 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_239WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00024c48,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0018ea90,
};

extern const struct WaveData sfx_318WaveData;
const struct InstrumentPCM instrumentPCM556 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_318WaveData,
    /* unk8   */ 0x00000000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x001d1745,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_005WaveData;
const struct InstrumentPCM instrumentPCM557 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_005WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_319WaveData;
const struct InstrumentPCM instrumentPCM558 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_319WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00335029,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0000fc1f,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_320WaveData;
const struct InstrumentPCM instrumentPCM559 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_320WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00335029,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0000fc1f,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

const struct InstrumentSubRhythm instrumentSubRhythm560 = {
    {
        /* Type */ INSTRUMENT_SUB_RHYTHM,
        /* unk1 */ 0x24,
        /* unk2 */ 0x0,
    },
    /* Sub-bank */ (void *)0x08a9957c, // POINTER
};

const struct InstrumentSubRhythm instrumentSubRhythm561 = {
    {
        /* Type */ INSTRUMENT_SUB_RHYTHM,
        /* unk1 */ 0x24,
        /* unk2 */ 0x0,
    },
    /* Sub-bank */ (void *)0x08a9940c, // POINTER
};

extern const struct WaveData sfx_321WaveData;
const struct InstrumentPCM instrumentPCM562 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_321WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x000f6a90,
};

extern const struct WaveData sfx_322WaveData;
const struct InstrumentPCM instrumentPCM563 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_322WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x0066a052,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x001f83e0,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x00235dd1,
};

extern const struct WaveData sfx_196WaveData;
const struct InstrumentPCM instrumentPCM564 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_196WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00015029,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_314WaveData;
const struct InstrumentPCM instrumentPCM565 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_314WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00015029,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_009WaveData;
const struct InstrumentPCM instrumentPCM566 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_009WaveData,
    /* unk8   */ 0x00000000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x004d9364,
    /* unk14  */ 0x00106a05,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x00055552,
};

extern const struct WaveData sfx_229WaveData;
const struct InstrumentPCM instrumentPCM567 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_229WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_321WaveData;
const struct InstrumentPCM instrumentPCM568 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_321WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x000f6a90,
};

extern const struct WaveData sfx_114WaveData;
const struct InstrumentPCM instrumentPCM569 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_114WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

const struct InstrumentSubRhythm instrumentSubRhythm570 = {
    {
        /* Type */ INSTRUMENT_SUB_RHYTHM,
        /* unk1 */ 0x24,
        /* unk2 */ 0x0,
    },
    /* Sub-bank */ (void *)0x08a9940c, // POINTER
};

extern const struct WaveData sfx_323WaveData;
const struct InstrumentPCM instrumentPCM571 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_323WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0001a433,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x00055552,
};

extern const struct WaveData sfx_324WaveData;
const struct InstrumentPCM instrumentPCM572 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_324WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0001a433,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x000b8000,
};

extern const struct WaveData sfx_013WaveData;
const struct InstrumentPCM instrumentPCM573 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_013WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x001556a0,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_325WaveData;
const struct InstrumentPCM instrumentPCM574 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_325WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00267c1f,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0001f83e,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_326WaveData;
const struct InstrumentPCM instrumentPCM575 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_326WaveData,
    /* unk8   */ 0x00000000,
    /* unkC   */ 0x004cf83e,
    /* unk10  */ 0x0009b26c,
    /* unk14  */ 0x00034867,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_327WaveData;
const struct InstrumentPCM instrumentPCM576 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_327WaveData,
    /* unk8   */ 0x00000000,
    /* unkC   */ 0x00402433,
    /* unk10  */ 0x00307c1f,
    /* unk14  */ 0x0000a814,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x000b8000,
};

extern const struct WaveData sfx_328WaveData;
const struct InstrumentPCM instrumentPCM577 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_328WaveData,
    /* unk8   */ 0x00000000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00307c1f,
    /* unk14  */ 0x001a433b,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_329WaveData;
const struct InstrumentPCM instrumentPCM578 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_329WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00267c1f,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x000690ce,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_321WaveData;
const struct InstrumentPCM instrumentPCM579 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_321WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x000f6a90,
};

extern const struct WaveData sfx_330WaveData;
const struct InstrumentPCM instrumentPCM580 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_330WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_331WaveData;
const struct InstrumentPCM instrumentPCM581 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_331WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_332WaveData;
const struct InstrumentPCM instrumentPCM582 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_332WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_333WaveData;
const struct InstrumentPCM instrumentPCM583 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_333WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

const struct InstrumentSubRhythm instrumentSubRhythm584 = {
    {
        /* Type */ INSTRUMENT_SUB_RHYTHM,
        /* unk1 */ 0x24,
        /* unk2 */ 0x0,
    },
    /* Sub-bank */ (void *)0x08a9940c, // POINTER
};

extern const struct WaveData sfx_334WaveData;
const struct InstrumentPCM instrumentPCM585 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_334WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x0060364d,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00015029,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_335WaveData;
const struct InstrumentPCM instrumentPCM586 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_335WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00034867,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x000f6a90,
};

extern const struct WaveData sfx_336WaveData;
const struct InstrumentPCM instrumentPCM587 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_336WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x0060364d,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00015029,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_337WaveData;
const struct InstrumentPCM instrumentPCM588 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_337WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00083502,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x000f6a90,
};

extern const struct WaveData sfx_330WaveData;
const struct InstrumentPCM instrumentPCM589 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_330WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x0059cc48,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0001a433,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_226WaveData;
const struct InstrumentPCM instrumentPCM590 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_226WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_041WaveData;
const struct InstrumentPCM instrumentPCM591 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_041WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x0060364d,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00015029,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

const struct InstrumentPSG instrumentPSG592 = {
    {
        /* Type */ INSTRUMENT_PSG,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Wave Channel */ NULL,
    /* unk8         */ 0x007f0000,
    /* unkC         */ 0x007e0000,
    /* unk10        */ 0x007f0000,
    /* unk14        */ 0x007f0000,
    /* unk18        */ 0x00000000,
    /* unk1C        */ 0x007f0000,
    /* Channel      */ PSG_PULSE_CHANNEL_1,
    /* unk21        */ 0x0,
    /* unk22        */ 0x4,
};

const struct InstrumentPSG instrumentPSG593 = {
    {
        /* Type */ INSTRUMENT_PSG,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Wave Channel */ NULL,
    /* unk8         */ 0x007f0000,
    /* unkC         */ 0x007e0000,
    /* unk10        */ 0x007f0000,
    /* unk14        */ 0x007f0000,
    /* unk18        */ 0x00000000,
    /* unk1C        */ 0x007f0000,
    /* Channel      */ PSG_PULSE_CHANNEL_2,
    /* unk21        */ 0x0,
    /* unk22        */ 0x4,
};

extern const struct WaveData sfx_315WaveData;
const struct InstrumentPCM instrumentPCM594 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_315WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x000cd40a,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00015029,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_321WaveData;
const struct InstrumentPCM instrumentPCM595 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_321WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x000f6a90,
};

const struct InstrumentSubSplit instrumentSubSplit596 = {
    {
        /* Type */ INSTRUMENT_SUB_SPLIT,
        /* unk1 */ 0xc,
        /* unk2 */ 0x0,
    },
    /* unk4     */ (void *)0x08a8660c, // POINTER
    /* Sub-bank */ (void *)0x08a96c10, // POINTER
};

const struct InstrumentSubRhythm instrumentSubRhythm597 = {
    {
        /* Type */ INSTRUMENT_SUB_RHYTHM,
        /* unk1 */ 0x24,
        /* unk2 */ 0x0,
    },
    /* Sub-bank */ (void *)0x08a9940c, // POINTER
};

extern const struct WaveData sfx_338WaveData;
const struct InstrumentPCM instrumentPCM598 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_338WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x0060364d,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00015029,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_202WaveData;
const struct InstrumentPCM instrumentPCM599 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_202WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x0060364d,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00015029,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_339WaveData;
const struct InstrumentPCM instrumentPCM600 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_339WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_340WaveData;
const struct InstrumentPCM instrumentPCM601 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_340WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00015029,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x000b8000,
};

extern const struct WaveData sfx_341WaveData;
const struct InstrumentPCM instrumentPCM602 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_341WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x000690ce,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_342WaveData;
const struct InstrumentPCM instrumentPCM603 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_342WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x0060364d,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00015029,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_321WaveData;
const struct InstrumentPCM instrumentPCM604 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_321WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x000f6a90,
};

extern const struct WaveData sfx_009WaveData;
const struct InstrumentPCM instrumentPCM605 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_009WaveData,
    /* unk8   */ 0x00000000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00307c1f,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_308WaveData;
const struct InstrumentPCM instrumentPCM606 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_308WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00335029,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0002a052,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_238WaveData;
const struct InstrumentPCM instrumentPCM607 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_238WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x0019a814,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00034867,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_311WaveData;
const struct InstrumentPCM instrumentPCM608 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_311WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00015029,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x000b8000,
};

const struct InstrumentSubRhythm instrumentSubRhythm609 = {
    {
        /* Type */ INSTRUMENT_SUB_RHYTHM,
        /* unk1 */ 0x24,
        /* unk2 */ 0x0,
    },
    /* Sub-bank */ (void *)0x08a9940c, // POINTER
};

extern const struct WaveData sfx_124WaveData;
const struct InstrumentPCM instrumentPCM610 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_124WaveData,
    /* unk8   */ 0x00000000,
    /* unkC   */ 0x00267c1f,
    /* unk10  */ 0x0026c9b2,
    /* unk14  */ 0x00015029,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_313WaveData;
const struct InstrumentPCM instrumentPCM611 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_313WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00034867,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x00082378,
};

extern const struct WaveData sfx_343WaveData;
const struct InstrumentPCM instrumentPCM612 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_343WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_289WaveData;
const struct InstrumentPCM instrumentPCM613 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_289WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_200WaveData;
const struct InstrumentPCM instrumentPCM614 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_200WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0001a433,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_110WaveData;
const struct InstrumentPCM instrumentPCM615 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_110WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0000fc1f,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_111WaveData;
const struct InstrumentPCM instrumentPCM616 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_111WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0000fc1f,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_344WaveData;
const struct InstrumentPCM instrumentPCM617 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_344WaveData,
    /* unk8   */ 0x00000000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x0000f83e,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0000c000,
};

extern const struct WaveData sfx_345WaveData;
const struct InstrumentPCM instrumentPCM618 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_345WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0018ea90,
};

extern const struct WaveData sfx_346WaveData;
const struct InstrumentPCM instrumentPCM619 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_346WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_033WaveData;
const struct InstrumentPCM instrumentPCM620 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_033WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

const struct InstrumentSubSplit instrumentSubSplit621 = {
    {
        /* Type */ INSTRUMENT_SUB_SPLIT,
        /* unk1 */ 0xc,
        /* unk2 */ 0x0,
    },
    /* unk4     */ (void *)0x08a865ac, // POINTER
    /* Sub-bank */ (void *)0x08a97010, // POINTER
};

const struct InstrumentSubRhythm instrumentSubRhythm622 = {
    {
        /* Type */ INSTRUMENT_SUB_RHYTHM,
        /* unk1 */ 0x24,
        /* unk2 */ 0x0,
    },
    /* Sub-bank */ (void *)0x08a9940c, // POINTER
};

extern const struct WaveData sfx_347WaveData;
const struct InstrumentPCM instrumentPCM623 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_347WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0001a433,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_201WaveData;
const struct InstrumentPCM instrumentPCM624 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_201WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0001f83e,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_348WaveData;
const struct InstrumentPCM instrumentPCM625 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_348WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00335029,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x000690ce,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_199WaveData;
const struct InstrumentPCM instrumentPCM626 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_199WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_349WaveData;
const struct InstrumentPCM instrumentPCM627 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_349WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_350WaveData;
const struct InstrumentPCM instrumentPCM628 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_350WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_351WaveData;
const struct InstrumentPCM instrumentPCM629 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_351WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_352WaveData;
const struct InstrumentPCM instrumentPCM630 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_352WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_353WaveData;
const struct InstrumentPCM instrumentPCM631 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_353WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_229WaveData;
const struct InstrumentPCM instrumentPCM632 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_229WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00034867,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_354WaveData;
const struct InstrumentPCM instrumentPCM633 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_354WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00335029,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0001f83e,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_015WaveData;
const struct InstrumentPCM instrumentPCM634 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_015WaveData,
    /* unk8   */ 0x00000000,
    /* unkC   */ 0x004cf83e,
    /* unk10  */ 0x00307c1f,
    /* unk14  */ 0x00015029,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

const struct InstrumentSubSplit instrumentSubSplit635 = {
    {
        /* Type */ INSTRUMENT_SUB_SPLIT,
        /* unk1 */ 0xc,
        /* unk2 */ 0x0,
    },
    /* unk4     */ (void *)0x08a8666c, // POINTER
    /* Sub-bank */ (void *)0x08a97210, // POINTER
};

const struct InstrumentSubRhythm instrumentSubRhythm636 = {
    {
        /* Type */ INSTRUMENT_SUB_RHYTHM,
        /* unk1 */ 0x24,
        /* unk2 */ 0x0,
    },
    /* Sub-bank */ (void *)0x08a9940c, // POINTER
};

extern const struct WaveData sfx_355WaveData;
const struct InstrumentPCM instrumentPCM637 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_355WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0001a433,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_356WaveData;
const struct InstrumentPCM instrumentPCM638 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_356WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0001a433,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_300WaveData;
const struct InstrumentPCM instrumentPCM639 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_300WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0001a433,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x00218000,
};

extern const struct WaveData sfx_354WaveData;
const struct InstrumentPCM instrumentPCM640 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_354WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00335029,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0000fc1f,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001faea0,
};

extern const struct WaveData sfx_113WaveData;
const struct InstrumentPCM instrumentPCM641 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_113WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x00235dd1,
};

extern const struct WaveData sfx_262WaveData;
const struct InstrumentPCM instrumentPCM642 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_262WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00335029,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0000fc1f,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_206WaveData;
const struct InstrumentPCM instrumentPCM643 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_206WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_290WaveData;
const struct InstrumentPCM instrumentPCM644 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_290WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x000d219d,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_207WaveData;
const struct InstrumentPCM instrumentPCM645 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_207WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_291WaveData;
const struct InstrumentPCM instrumentPCM646 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_291WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_262WaveData;
const struct InstrumentPCM instrumentPCM647 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_262WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x0066a052,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0000fc1f,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

const struct InstrumentSubSplit instrumentSubSplit648 = {
    {
        /* Type */ INSTRUMENT_SUB_SPLIT,
        /* unk1 */ 0xc,
        /* unk2 */ 0x0,
    },
    /* unk4     */ (void *)0x08a865ac, // POINTER
    /* Sub-bank */ (void *)0x08a97010, // POINTER
};

const struct InstrumentSubRhythm instrumentSubRhythm649 = {
    {
        /* Type */ INSTRUMENT_SUB_RHYTHM,
        /* unk1 */ 0x24,
        /* unk2 */ 0x0,
    },
    /* Sub-bank */ (void *)0x08a9940c, // POINTER
};

extern const struct WaveData sfx_357WaveData;
const struct InstrumentPCM instrumentPCM650 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_357WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0000a814,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_358WaveData;
const struct InstrumentPCM instrumentPCM651 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_358WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0000a814,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_359WaveData;
const struct InstrumentPCM instrumentPCM652 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_359WaveData,
    /* unk8   */ 0x00000000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x003a2e8b,
    /* unk14  */ 0x0000fc1f,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_060WaveData;
const struct InstrumentPCM instrumentPCM653 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_060WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0001a433,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_061WaveData;
const struct InstrumentPCM instrumentPCM654 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_061WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0001a433,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_360WaveData;
const struct InstrumentPCM instrumentPCM655 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_360WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0000a814,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_361WaveData;
const struct InstrumentPCM instrumentPCM656 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_361WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0001a433,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_196WaveData;
const struct InstrumentPCM instrumentPCM657 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_196WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0000a814,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_362WaveData;
const struct InstrumentPCM instrumentPCM658 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_362WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0004ec9b,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_017WaveData;
const struct InstrumentPCM instrumentPCM659 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_017WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0001f83e,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x00082378,
};

const struct InstrumentSubSplit instrumentSubSplit660 = {
    {
        /* Type */ INSTRUMENT_SUB_SPLIT,
        /* unk1 */ 0xc,
        /* unk2 */ 0x0,
    },
    /* unk4     */ (void *)0x08a866cc, // POINTER
    /* Sub-bank */ (void *)0x08a97610, // POINTER
};

const struct InstrumentSubSplit instrumentSubSplit661 = {
    {
        /* Type */ INSTRUMENT_SUB_SPLIT,
        /* unk1 */ 0xc,
        /* unk2 */ 0x0,
    },
    /* unk4     */ (void *)0x08a8672c, // POINTER
    /* Sub-bank */ (void *)0x08a97610, // POINTER
};

const struct InstrumentSubRhythm instrumentSubRhythm662 = {
    {
        /* Type */ INSTRUMENT_SUB_RHYTHM,
        /* unk1 */ 0x24,
        /* unk2 */ 0x0,
    },
    /* Sub-bank */ (void *)0x08a9940c, // POINTER
};

extern const struct WaveData sfx_006WaveData;
const struct InstrumentPCM instrumentPCM663 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_006WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x00218000,
};

extern const struct WaveData sfx_229WaveData;
const struct InstrumentPCM instrumentPCM664 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_229WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_363WaveData;
const struct InstrumentPCM instrumentPCM665 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_363WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00335029,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0000fc1f,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_364WaveData;
const struct InstrumentPCM instrumentPCM666 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_364WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00335029,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0000fc1f,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_028WaveData;
const struct InstrumentPCM instrumentPCM667 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_028WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0000540a,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_262WaveData;
const struct InstrumentPCM instrumentPCM668 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_262WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00335029,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0000fc1f,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_260WaveData;
const struct InstrumentPCM instrumentPCM669 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_260WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_262WaveData;
const struct InstrumentPCM instrumentPCM670 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_262WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_365WaveData;
const struct InstrumentPCM instrumentPCM671 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_365WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_366WaveData;
const struct InstrumentPCM instrumentPCM672 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_366WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x000690ce,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_367WaveData;
const struct InstrumentPCM instrumentPCM673 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_367WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_368WaveData;
const struct InstrumentPCM instrumentPCM674 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_368WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0000a814,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_369WaveData;
const struct InstrumentPCM instrumentPCM675 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_369WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0000a814,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_370WaveData;
const struct InstrumentPCM instrumentPCM676 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_370WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0000a814,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

const struct InstrumentSubRhythm instrumentSubRhythm677 = {
    {
        /* Type */ INSTRUMENT_SUB_RHYTHM,
        /* unk1 */ 0x24,
        /* unk2 */ 0x0,
    },
    /* Sub-bank */ (void *)0x08a9957c, // POINTER
};

const struct InstrumentSubRhythm instrumentSubRhythm678 = {
    {
        /* Type */ INSTRUMENT_SUB_RHYTHM,
        /* unk1 */ 0x24,
        /* unk2 */ 0x0,
    },
    /* Sub-bank */ (void *)0x08a9940c, // POINTER
};

extern const struct WaveData sfx_371WaveData;
const struct InstrumentPCM instrumentPCM679 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_371WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0001a433,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x000f6a90,
};

extern const struct WaveData sfx_229WaveData;
const struct InstrumentPCM instrumentPCM680 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_229WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0000fc1f,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_372WaveData;
const struct InstrumentPCM instrumentPCM681 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_372WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x00055552,
};

extern const struct WaveData sfx_262WaveData;
const struct InstrumentPCM instrumentPCM682 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_262WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00335029,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0000fc1f,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_015WaveData;
const struct InstrumentPCM instrumentPCM683 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_015WaveData,
    /* unk8   */ 0x00000000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00307c1f,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_018WaveData;
const struct InstrumentPCM instrumentPCM684 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_018WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0000a814,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

const struct InstrumentSubRhythm instrumentSubRhythm685 = {
    {
        /* Type */ INSTRUMENT_SUB_RHYTHM,
        /* unk1 */ 0x24,
        /* unk2 */ 0x0,
    },
    /* Sub-bank */ (void *)0x08a9957c, // POINTER
};

const struct InstrumentSubRhythm instrumentSubRhythm686 = {
    {
        /* Type */ INSTRUMENT_SUB_RHYTHM,
        /* unk1 */ 0x24,
        /* unk2 */ 0x0,
    },
    /* Sub-bank */ (void *)0x08a9940c, // POINTER
};

extern const struct WaveData sfx_373WaveData;
const struct InstrumentPCM instrumentPCM687 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_373WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0001f83e,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_374WaveData;
const struct InstrumentPCM instrumentPCM688 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_374WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0001f83e,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_375WaveData;
const struct InstrumentPCM instrumentPCM689 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_375WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0001f83e,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0018ea90,
};

extern const struct WaveData sfx_376WaveData;
const struct InstrumentPCM instrumentPCM690 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_376WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0000fc1f,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_260WaveData;
const struct InstrumentPCM instrumentPCM691 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_260WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_377WaveData;
const struct InstrumentPCM instrumentPCM692 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_377WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_378WaveData;
const struct InstrumentPCM instrumentPCM693 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_378WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00335029,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0000fc1f,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_379WaveData;
const struct InstrumentPCM instrumentPCM694 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_379WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0003f07c,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_261WaveData;
const struct InstrumentPCM instrumentPCM695 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_261WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0001a433,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0018ea90,
};

extern const struct WaveData sfx_261WaveData;
const struct InstrumentPCM instrumentPCM696 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_261WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00335029,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0001a433,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0018ea90,
};

extern const struct WaveData sfx_113WaveData;
const struct InstrumentPCM instrumentPCM697 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_113WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x00235dd1,
};

extern const struct WaveData sfx_028WaveData;
const struct InstrumentPCM instrumentPCM698 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_028WaveData,
    /* unk8   */ 0x00000000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x0026c9b2,
    /* unk14  */ 0x0000fc1f,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_380WaveData;
const struct InstrumentPCM instrumentPCM699 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_380WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0000540a,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_381WaveData;
const struct InstrumentPCM instrumentPCM700 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_381WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0001f83e,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_293WaveData;
const struct InstrumentPCM instrumentPCM701 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_293WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00034867,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_289WaveData;
const struct InstrumentPCM instrumentPCM702 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_289WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_346WaveData;
const struct InstrumentPCM instrumentPCM703 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_346WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_375WaveData;
const struct InstrumentPCM instrumentPCM704 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_375WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0001f83e,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

const struct InstrumentSubSplit instrumentSubSplit705 = {
    {
        /* Type */ INSTRUMENT_SUB_SPLIT,
        /* unk1 */ 0xc,
        /* unk2 */ 0x0,
    },
    /* unk4     */ (void *)0x08a865ac, // POINTER
    /* Sub-bank */ (void *)0x08a97010, // POINTER
};

const struct InstrumentSubSplit instrumentSubSplit706 = {
    {
        /* Type */ INSTRUMENT_SUB_SPLIT,
        /* unk1 */ 0x30,
        /* unk2 */ 0x0,
    },
    /* unk4     */ (void *)0x08a8678c, // POINTER
    /* Sub-bank */ (void *)0x08a97c10, // POINTER
};

const struct InstrumentSubRhythm instrumentSubRhythm707 = {
    {
        /* Type */ INSTRUMENT_SUB_RHYTHM,
        /* unk1 */ 0x24,
        /* unk2 */ 0x0,
    },
    /* Sub-bank */ (void *)0x08a9957c, // POINTER
};

const struct InstrumentSubRhythm instrumentSubRhythm708 = {
    {
        /* Type */ INSTRUMENT_SUB_RHYTHM,
        /* unk1 */ 0x24,
        /* unk2 */ 0x0,
    },
    /* Sub-bank */ (void *)0x08a9940c, // POINTER
};

extern const struct WaveData sfx_382WaveData;
const struct InstrumentPCM instrumentPCM709 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_382WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0001f83e,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

const struct InstrumentPSG instrumentPSG710 = {
    {
        /* Type */ INSTRUMENT_PSG,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Wave Channel */ NULL,
    /* unk8         */ 0x007f0000,
    /* unkC         */ 0x007e0000,
    /* unk10        */ 0x007f0000,
    /* unk14        */ 0x007f0000,
    /* unk18        */ 0x00000000,
    /* unk1C        */ 0x001fc000,
    /* Channel      */ PSG_PULSE_CHANNEL_1,
    /* unk21        */ 0x0,
    /* unk22        */ 0x4,
};

const struct InstrumentPSG instrumentPSG711 = {
    {
        /* Type */ INSTRUMENT_PSG,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Wave Channel */ NULL,
    /* unk8         */ 0x007f0000,
    /* unkC         */ 0x007e0000,
    /* unk10        */ 0x007f0000,
    /* unk14        */ 0x007f0000,
    /* unk18        */ 0x00000000,
    /* unk1C        */ 0x001fc000,
    /* Channel      */ PSG_PULSE_CHANNEL_2,
    /* unk21        */ 0x0,
    /* unk22        */ 0x4,
};

extern const struct WaveData sfx_383WaveData;
const struct InstrumentPCM instrumentPCM712 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_383WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0001f83e,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_384WaveData;
const struct InstrumentPCM instrumentPCM713 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_384WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00015029,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_309WaveData;
const struct InstrumentPCM instrumentPCM714 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_309WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x0019a814,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0000a814,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_321WaveData;
const struct InstrumentPCM instrumentPCM715 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_321WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x000f6a90,
};

extern const struct WaveData sfx_385WaveData;
const struct InstrumentPCM instrumentPCM716 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_385WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_348WaveData;
const struct InstrumentPCM instrumentPCM717 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_348WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00335029,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x000690ce,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_015WaveData;
const struct InstrumentPCM instrumentPCM718 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_015WaveData,
    /* unk8   */ 0x00000000,
    /* unkC   */ 0x004cf83e,
    /* unk10  */ 0x00307c1f,
    /* unk14  */ 0x00015029,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_226WaveData;
const struct InstrumentPCM instrumentPCM719 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_226WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_386WaveData;
const struct InstrumentPCM instrumentPCM720 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_386WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x000cd40a,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0013b26c,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_313WaveData;
const struct InstrumentPCM instrumentPCM721 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_313WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x000690ce,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x00082378,
};

extern const struct WaveData sfx_017WaveData;
const struct InstrumentPCM instrumentPCM722 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_017WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00034867,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_293WaveData;
const struct InstrumentPCM instrumentPCM723 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_293WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0001a433,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x000f6a90,
};

extern const struct WaveData sfx_387WaveData;
const struct InstrumentPCM instrumentPCM724 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_387WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0000fc1f,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_342WaveData;
const struct InstrumentPCM instrumentPCM725 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_342WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x0060364d,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00015029,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_043WaveData;
const struct InstrumentPCM instrumentPCM726 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_043WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

const struct InstrumentSubRhythm instrumentSubRhythm727 = {
    {
        /* Type */ INSTRUMENT_SUB_RHYTHM,
        /* unk1 */ 0x24,
        /* unk2 */ 0x0,
    },
    /* Sub-bank */ (void *)0x08a9957c, // POINTER
};

const struct InstrumentSubRhythm instrumentSubRhythm728 = {
    {
        /* Type */ INSTRUMENT_SUB_RHYTHM,
        /* unk1 */ 0x24,
        /* unk2 */ 0x0,
    },
    /* Sub-bank */ (void *)0x08a996e4, // POINTER
};

const struct InstrumentSubRhythm instrumentSubRhythm729 = {
    {
        /* Type */ INSTRUMENT_SUB_RHYTHM,
        /* unk1 */ 0x24,
        /* unk2 */ 0x0,
    },
    /* Sub-bank */ (void *)0x08a9940c, // POINTER
};

extern const struct WaveData sfx_388WaveData;
const struct InstrumentPCM instrumentPCM730 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_388WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0001f83e,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_028WaveData;
const struct InstrumentPCM instrumentPCM731 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_028WaveData,
    /* unk8   */ 0x00000000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x0026c9b2,
    /* unk14  */ 0x0000fc1f,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_389WaveData;
const struct InstrumentPCM instrumentPCM732 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_389WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0001f83e,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_015WaveData;
const struct InstrumentPCM instrumentPCM733 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_015WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_348WaveData;
const struct InstrumentPCM instrumentPCM734 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_348WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00335029,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x000690ce,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_301WaveData;
const struct InstrumentPCM instrumentPCM735 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_301WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x000690ce,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x000f6a90,
};

extern const struct WaveData sfx_302WaveData;
const struct InstrumentPCM instrumentPCM736 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_302WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0009d936,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x000f6a90,
};

extern const struct WaveData sfx_390WaveData;
const struct InstrumentPCM instrumentPCM737 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_390WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0001f83e,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_043WaveData;
const struct InstrumentPCM instrumentPCM738 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_043WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_355WaveData;
const struct InstrumentPCM instrumentPCM739 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_355WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0001a433,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_356WaveData;
const struct InstrumentPCM instrumentPCM740 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_356WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0001a433,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_300WaveData;
const struct InstrumentPCM instrumentPCM741 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_300WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0001a433,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x00218000,
};

extern const struct WaveData sfx_354WaveData;
const struct InstrumentPCM instrumentPCM742 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_354WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00335029,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0000fc1f,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001faea0,
};

extern const struct WaveData sfx_113WaveData;
const struct InstrumentPCM instrumentPCM743 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_113WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x00235dd1,
};

extern const struct WaveData sfx_262WaveData;
const struct InstrumentPCM instrumentPCM744 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_262WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00335029,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0000fc1f,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_206WaveData;
const struct InstrumentPCM instrumentPCM745 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_206WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_290WaveData;
const struct InstrumentPCM instrumentPCM746 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_290WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x000d219d,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_207WaveData;
const struct InstrumentPCM instrumentPCM747 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_207WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_291WaveData;
const struct InstrumentPCM instrumentPCM748 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_291WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_262WaveData;
const struct InstrumentPCM instrumentPCM749 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_262WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x0066a052,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0000fc1f,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

const struct InstrumentSubSplit instrumentSubSplit750 = {
    {
        /* Type */ INSTRUMENT_SUB_SPLIT,
        /* unk1 */ 0xc,
        /* unk2 */ 0x0,
    },
    /* unk4     */ (void *)0x08a865ac, // POINTER
    /* Sub-bank */ (void *)0x08a97010, // POINTER
};

extern const struct WaveData sfx_322WaveData;
const struct InstrumentPCM instrumentPCM751 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_322WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x0066a052,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x001f83e0,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x00235dd1,
};

extern const struct WaveData sfx_289WaveData;
const struct InstrumentPCM instrumentPCM752 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_289WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_201WaveData;
const struct InstrumentPCM instrumentPCM753 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_201WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0001f83e,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_194WaveData;
const struct InstrumentPCM instrumentPCM754 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_194WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0000fc1f,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_359WaveData;
const struct InstrumentPCM instrumentPCM755 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_359WaveData,
    /* unk8   */ 0x00000000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x003a2e8b,
    /* unk14  */ 0x0000fc1f,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_391WaveData;
const struct InstrumentPCM instrumentPCM756 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_391WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

const struct InstrumentPSG instrumentPSG757 = {
    {
        /* Type */ INSTRUMENT_PSG,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Wave Channel */ NULL,
    /* unk8         */ 0x0073745d,
    /* unkC         */ 0x00400000,
    /* unk10        */ 0x001fc000,
    /* unk14        */ 0x0004b425,
    /* unk18        */ 0x00000000,
    /* unk1C        */ 0x007f0000,
    /* Channel      */ PSG_PULSE_CHANNEL_1,
    /* unk21        */ 0x0,
    /* unk22        */ 0x4,
};

const struct InstrumentPSG instrumentPSG758 = {
    {
        /* Type */ INSTRUMENT_PSG,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Wave Channel */ NULL,
    /* unk8         */ 0x0073745d,
    /* unkC         */ 0x00400000,
    /* unk10        */ 0x001fc000,
    /* unk14        */ 0x0004b425,
    /* unk18        */ 0x00000000,
    /* unk1C        */ 0x007f0000,
    /* Channel      */ PSG_PULSE_CHANNEL_2,
    /* unk21        */ 0x0,
    /* unk22        */ 0x4,
};

const struct InstrumentPSG instrumentPSG759 = {
    {
        /* Type */ INSTRUMENT_PSG,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Wave Channel */ (void *)0x08a86870, // POINTER
    /* unk8         */ 0x007f0000,
    /* unkC         */ 0x00400000,
    /* unk10        */ 0x007f0000,
    /* unk14        */ 0x0004b425,
    /* unk18        */ 0x00000000,
    /* unk1C        */ 0x007f0000,
    /* Channel      */ PSG_WAVE_CHANNEL,
    /* unk21        */ 0x0,
    /* unk22        */ 0x0,
};

const struct InstrumentPSG instrumentPSG760 = {
    {
        /* Type */ INSTRUMENT_PSG,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Wave Channel */ (void *)0x08a86880, // POINTER
    /* unk8         */ 0x007f0000,
    /* unkC         */ 0x007e0000,
    /* unk10        */ 0x007f0000,
    /* unk14        */ 0x007f0000,
    /* unk18        */ 0x00000000,
    /* unk1C        */ 0x007f0000,
    /* Channel      */ PSG_WAVE_CHANNEL,
    /* unk21        */ 0x0,
    /* unk22        */ 0x0,
};

const struct InstrumentPSG instrumentPSG761 = {
    {
        /* Type */ INSTRUMENT_PSG,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Wave Channel */ (void *)0x08a86890, // POINTER
    /* unk8         */ 0x007f0000,
    /* unkC         */ 0x007e0000,
    /* unk10        */ 0x007f0000,
    /* unk14        */ 0x007f0000,
    /* unk18        */ 0x00000000,
    /* unk1C        */ 0x007f0000,
    /* Channel      */ PSG_WAVE_CHANNEL,
    /* unk21        */ 0x0,
    /* unk22        */ 0x0,
};

const struct InstrumentPSG instrumentPSG762 = {
    {
        /* Type */ INSTRUMENT_PSG,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Wave Channel */ (void *)0x08a868a0, // POINTER
    /* unk8         */ 0x007f0000,
    /* unkC         */ 0x007e0000,
    /* unk10        */ 0x007f0000,
    /* unk14        */ 0x007f0000,
    /* unk18        */ 0x00000000,
    /* unk1C        */ 0x007f0000,
    /* Channel      */ PSG_WAVE_CHANNEL,
    /* unk21        */ 0x0,
    /* unk22        */ 0x0,
};

const struct InstrumentPSG instrumentPSG763 = {
    {
        /* Type */ INSTRUMENT_PSG,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Wave Channel */ (void *)0x08a868b0, // POINTER
    /* unk8         */ 0x007f0000,
    /* unkC         */ 0x007e0000,
    /* unk10        */ 0x007f0000,
    /* unk14        */ 0x007f0000,
    /* unk18        */ 0x00000000,
    /* unk1C        */ 0x007f0000,
    /* Channel      */ PSG_WAVE_CHANNEL,
    /* unk21        */ 0x0,
    /* unk22        */ 0x0,
};

const struct InstrumentPSG instrumentPSG764 = {
    {
        /* Type */ INSTRUMENT_PSG,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Wave Channel */ (void *)0x08a868c0, // POINTER
    /* unk8         */ 0x007f0000,
    /* unkC         */ 0x007e0000,
    /* unk10        */ 0x007f0000,
    /* unk14        */ 0x007f0000,
    /* unk18        */ 0x00000000,
    /* unk1C        */ 0x007f0000,
    /* Channel      */ PSG_WAVE_CHANNEL,
    /* unk21        */ 0x0,
    /* unk22        */ 0x0,
};

const struct InstrumentPSG instrumentPSG765 = {
    {
        /* Type */ INSTRUMENT_PSG,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Wave Channel */ (void *)0x08a868d0, // POINTER
    /* unk8         */ 0x007f0000,
    /* unkC         */ 0x007e0000,
    /* unk10        */ 0x007f0000,
    /* unk14        */ 0x007f0000,
    /* unk18        */ 0x00000000,
    /* unk1C        */ 0x007f0000,
    /* Channel      */ PSG_WAVE_CHANNEL,
    /* unk21        */ 0x0,
    /* unk22        */ 0x0,
};

const struct InstrumentPSG instrumentPSG766 = {
    {
        /* Type */ INSTRUMENT_PSG,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Wave Channel */ (void *)0x08a86870, // POINTER
    /* unk8         */ 0x007f0000,
    /* unkC         */ 0x007e0000,
    /* unk10        */ 0x007f0000,
    /* unk14        */ 0x007f0000,
    /* unk18        */ 0x00000000,
    /* unk1C        */ 0x001fc000,
    /* Channel      */ PSG_WAVE_CHANNEL,
    /* unk21        */ 0x0,
    /* unk22        */ 0x0,
};

extern const struct WaveData sfx_392WaveData;
const struct InstrumentPCM instrumentPCM767 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_392WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0000fc1f,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_393WaveData;
const struct InstrumentPCM instrumentPCM768 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_393WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0000fc1f,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

const struct InstrumentSubSplit instrumentSubSplit769 = {
    {
        /* Type */ INSTRUMENT_SUB_SPLIT,
        /* unk1 */ 0x30,
        /* unk2 */ 0x0,
    },
    /* unk4     */ (void *)0x08a867c8, // POINTER
    /* Sub-bank */ (void *)0x08a98010, // POINTER
};

const struct InstrumentSubRhythm instrumentSubRhythm770 = {
    {
        /* Type */ INSTRUMENT_SUB_RHYTHM,
        /* unk1 */ 0x24,
        /* unk2 */ 0x0,
    },
    /* Sub-bank */ (void *)0x08a9957c, // POINTER
};

const struct InstrumentSubRhythm instrumentSubRhythm771 = {
    {
        /* Type */ INSTRUMENT_SUB_RHYTHM,
        /* unk1 */ 0x24,
        /* unk2 */ 0x0,
    },
    /* Sub-bank */ (void *)0x08a9940c, // POINTER
};

extern const struct WaveData sfx_394WaveData;
const struct InstrumentPCM instrumentPCM772 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_394WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0001a433,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x000f6a90,
};

extern const struct WaveData sfx_395WaveData;
const struct InstrumentPCM instrumentPCM773 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_395WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0001a433,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x000f6a90,
};

extern const struct WaveData sfx_396WaveData;
const struct InstrumentPCM instrumentPCM774 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_396WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0000fc1f,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x000f6a90,
};

extern const struct WaveData sfx_397WaveData;
const struct InstrumentPCM instrumentPCM775 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_397WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00024c48,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x000f6a90,
};

extern const struct WaveData sfx_398WaveData;
const struct InstrumentPCM instrumentPCM776 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_398WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0000fc1f,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x000f6a90,
};

extern const struct WaveData sfx_015WaveData;
const struct InstrumentPCM instrumentPCM777 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_015WaveData,
    /* unk8   */ 0x00000000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x004d9364,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_399WaveData;
const struct InstrumentPCM instrumentPCM778 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_399WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00024c48,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_126WaveData;
const struct InstrumentPCM instrumentPCM779 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_126WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0002a052,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_127WaveData;
const struct InstrumentPCM instrumentPCM780 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_127WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

const struct InstrumentSubRhythm instrumentSubRhythm781 = {
    {
        /* Type */ INSTRUMENT_SUB_RHYTHM,
        /* unk1 */ 0x24,
        /* unk2 */ 0x0,
    },
    /* Sub-bank */ (void *)0x08a9957c, // POINTER
};

const struct InstrumentSubRhythm instrumentSubRhythm782 = {
    {
        /* Type */ INSTRUMENT_SUB_RHYTHM,
        /* unk1 */ 0x24,
        /* unk2 */ 0x0,
    },
    /* Sub-bank */ (void *)0x08a99a14, // POINTER
};

extern const struct WaveData sfx_400WaveData;
const struct InstrumentPCM instrumentPCM783 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_400WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00015029,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_398WaveData;
const struct InstrumentPCM instrumentPCM784 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_398WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00015029,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x000f6a90,
};

extern const struct WaveData sfx_235WaveData;
const struct InstrumentPCM instrumentPCM785 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_235WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_401WaveData;
const struct InstrumentPCM instrumentPCM786 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_401WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_260WaveData;
const struct InstrumentPCM instrumentPCM787 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_260WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_399WaveData;
const struct InstrumentPCM instrumentPCM788 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_399WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00024c48,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

const struct InstrumentSubRhythm instrumentSubRhythm789 = {
    {
        /* Type */ INSTRUMENT_SUB_RHYTHM,
        /* unk1 */ 0x24,
        /* unk2 */ 0x0,
    },
    /* Sub-bank */ (void *)0x08a9957c, // POINTER
};

const struct InstrumentSubRhythm instrumentSubRhythm790 = {
    {
        /* Type */ INSTRUMENT_SUB_RHYTHM,
        /* unk1 */ 0x24,
        /* unk2 */ 0x0,
    },
    /* Sub-bank */ (void *)0x08a99a14, // POINTER
};

const struct InstrumentSubRhythm instrumentSubRhythm791 = {
    {
        /* Type */ INSTRUMENT_SUB_RHYTHM,
        /* unk1 */ 0x24,
        /* unk2 */ 0x0,
    },
    /* Sub-bank */ (void *)0x08a9940c, // POINTER
};

extern const struct WaveData sfx_263WaveData;
const struct InstrumentPCM instrumentPCM792 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_263WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_229WaveData;
const struct InstrumentPCM instrumentPCM793 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_229WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001ba35f,
};

extern const struct WaveData sfx_194WaveData;
const struct InstrumentPCM instrumentPCM794 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_194WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00015029,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_399WaveData;
const struct InstrumentPCM instrumentPCM795 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_399WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00024c48,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_402WaveData;
const struct InstrumentPCM instrumentPCM796 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_402WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x00235dd1,
};

extern const struct WaveData sfx_403WaveData;
const struct InstrumentPCM instrumentPCM797 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_403WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x00235dd1,
};

extern const struct WaveData sfx_404WaveData;
const struct InstrumentPCM instrumentPCM798 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_404WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x00235dd1,
};

const struct InstrumentSubSplit instrumentSubSplit799 = {
    {
        /* Type */ INSTRUMENT_SUB_SPLIT,
        /* unk1 */ 0x24,
        /* unk2 */ 0x0,
    },
    /* unk4     */ (void *)0x08a867ec, // POINTER
    /* Sub-bank */ (void *)0x08a9860c, // POINTER
};

const struct InstrumentSubRhythm instrumentSubRhythm800 = {
    {
        /* Type */ INSTRUMENT_SUB_RHYTHM,
        /* unk1 */ 0x24,
        /* unk2 */ 0x0,
    },
    /* Sub-bank */ (void *)0x08a9957c, // POINTER
};

const struct InstrumentSubRhythm instrumentSubRhythm801 = {
    {
        /* Type */ INSTRUMENT_SUB_RHYTHM,
        /* unk1 */ 0x24,
        /* unk2 */ 0x0,
    },
    /* Sub-bank */ (void *)0x08a9940c, // POINTER
};

extern const struct WaveData sfx_405WaveData;
const struct InstrumentPCM instrumentPCM802 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_405WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00267c1f,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00015029,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_406WaveData;
const struct InstrumentPCM instrumentPCM803 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_406WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_407WaveData;
const struct InstrumentPCM instrumentPCM804 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_407WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_408WaveData;
const struct InstrumentPCM instrumentPCM805 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_408WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_409WaveData;
const struct InstrumentPCM instrumentPCM806 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_409WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_202WaveData;
const struct InstrumentPCM instrumentPCM807 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_202WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x0060364d,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00015029,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_410WaveData;
const struct InstrumentPCM instrumentPCM808 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_410WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

const struct InstrumentSubRhythm instrumentSubRhythm809 = {
    {
        /* Type */ INSTRUMENT_SUB_RHYTHM,
        /* unk1 */ 0x24,
        /* unk2 */ 0x0,
    },
    /* Sub-bank */ (void *)0x08a9957c, // POINTER
};

const struct InstrumentSubRhythm instrumentSubRhythm810 = {
    {
        /* Type */ INSTRUMENT_SUB_RHYTHM,
        /* unk1 */ 0x24,
        /* unk2 */ 0x0,
    },
    /* Sub-bank */ (void *)0x08a9940c, // POINTER
};

extern const struct WaveData sfx_300WaveData;
const struct InstrumentPCM instrumentPCM811 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_300WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0001a433,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x00218000,
};

extern const struct WaveData sfx_058WaveData;
const struct InstrumentPCM instrumentPCM812 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_058WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00034867,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x00218000,
};

extern const struct WaveData sfx_306WaveData;
const struct InstrumentPCM instrumentPCM813 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_306WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_391WaveData;
const struct InstrumentPCM instrumentPCM814 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_391WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_373WaveData;
const struct InstrumentPCM instrumentPCM815 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_373WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0001f83e,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_110WaveData;
const struct InstrumentPCM instrumentPCM816 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_110WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0000a814,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_363WaveData;
const struct InstrumentPCM instrumentPCM817 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_363WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00335029,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0000fc1f,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_005WaveData;
const struct InstrumentPCM instrumentPCM818 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_005WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_293WaveData;
const struct InstrumentPCM instrumentPCM819 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_293WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00034867,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_411WaveData;
const struct InstrumentPCM instrumentPCM820 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_411WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0000540a,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_412WaveData;
const struct InstrumentPCM instrumentPCM821 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_412WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0001a433,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x00218000,
};

extern const struct WaveData sfx_413WaveData;
const struct InstrumentPCM instrumentPCM822 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_413WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0000540a,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0022bd20,
};

extern const struct WaveData sfx_414WaveData;
const struct InstrumentPCM instrumentPCM823 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_414WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00034867,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_415WaveData;
const struct InstrumentPCM instrumentPCM824 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_415WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x00218000,
};

extern const struct WaveData sfx_416WaveData;
const struct InstrumentPCM instrumentPCM825 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_416WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00015029,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x00218000,
};

extern const struct WaveData sfx_417WaveData;
const struct InstrumentPCM instrumentPCM826 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_417WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00015029,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x00055552,
};

extern const struct WaveData sfx_418WaveData;
const struct InstrumentPCM instrumentPCM827 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_418WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00015029,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x00055552,
};

extern const struct WaveData sfx_419WaveData;
const struct InstrumentPCM instrumentPCM828 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_419WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00015029,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x00055552,
};

extern const struct WaveData sfx_420WaveData;
const struct InstrumentPCM instrumentPCM829 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_420WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00083502,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_421WaveData;
const struct InstrumentPCM instrumentPCM830 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_421WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0001f83e,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

const struct InstrumentSubSplit instrumentSubSplit831 = {
    {
        /* Type */ INSTRUMENT_SUB_SPLIT,
        /* unk1 */ 0xc,
        /* unk2 */ 0x0,
    },
    /* unk4     */ (void *)0x08a865ac, // POINTER
    /* Sub-bank */ (void *)0x08a97010, // POINTER
};

const struct InstrumentSubSplit instrumentSubSplit832 = {
    {
        /* Type */ INSTRUMENT_SUB_SPLIT,
        /* unk1 */ 0xc,
        /* unk2 */ 0x0,
    },
    /* unk4     */ (void *)0x08a86828, // POINTER
    /* Sub-bank */ (void *)0x08a98a0c, // POINTER
};

const struct InstrumentSubRhythm instrumentSubRhythm833 = {
    {
        /* Type */ INSTRUMENT_SUB_RHYTHM,
        /* unk1 */ 0x24,
        /* unk2 */ 0x0,
    },
    /* Sub-bank */ (void *)0x08a9957c, // POINTER
};

const struct InstrumentSubRhythm instrumentSubRhythm834 = {
    {
        /* Type */ INSTRUMENT_SUB_RHYTHM,
        /* unk1 */ 0x24,
        /* unk2 */ 0x0,
    },
    /* Sub-bank */ (void *)0x08a99b4c, // POINTER
};

const struct InstrumentSubRhythm instrumentSubRhythm835 = {
    {
        /* Type */ INSTRUMENT_SUB_RHYTHM,
        /* unk1 */ 0x24,
        /* unk2 */ 0x0,
    },
    /* Sub-bank */ (void *)0x08a9940c, // POINTER
};

extern const struct WaveData sfx_422WaveData;
const struct InstrumentPCM instrumentPCM836 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_422WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0000fc1f,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_423WaveData;
const struct InstrumentPCM instrumentPCM837 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_423WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00267c1f,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00015029,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_313WaveData;
const struct InstrumentPCM instrumentPCM838 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_313WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00034867,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_292WaveData;
const struct InstrumentPCM instrumentPCM839 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_292WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00106a05,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_387WaveData;
const struct InstrumentPCM instrumentPCM840 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_387WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0000fc1f,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_424WaveData;
const struct InstrumentPCM instrumentPCM841 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_424WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0000a814,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_421WaveData;
const struct InstrumentPCM instrumentPCM842 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_421WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0001f83e,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_425WaveData;
const struct InstrumentPCM instrumentPCM843 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_425WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x000690ce,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_320WaveData;
const struct InstrumentPCM instrumentPCM844 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_320WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00335029,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0000fc1f,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_420WaveData;
const struct InstrumentPCM instrumentPCM845 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_420WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00083502,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_421WaveData;
const struct InstrumentPCM instrumentPCM846 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_421WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0001f83e,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_426WaveData;
const struct InstrumentPCM instrumentPCM847 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_426WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00335029,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00015029,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

const struct InstrumentSubSplit instrumentSubSplit848 = {
    {
        /* Type */ INSTRUMENT_SUB_SPLIT,
        /* unk1 */ 0xc,
        /* unk2 */ 0x0,
    },
    /* unk4     */ (void *)0x08a86828, // POINTER
    /* Sub-bank */ (void *)0x08a98a0c, // POINTER
};

const struct InstrumentSubSplit instrumentSubSplit849 = {
    {
        /* Type */ INSTRUMENT_SUB_SPLIT,
        /* unk1 */ 0x24,
        /* unk2 */ 0x0,
    },
    /* unk4     */ (void *)0x08a867ec, // POINTER
    /* Sub-bank */ (void *)0x08a9860c, // POINTER
};

const struct InstrumentSubRhythm instrumentSubRhythm850 = {
    {
        /* Type */ INSTRUMENT_SUB_RHYTHM,
        /* unk1 */ 0x24,
        /* unk2 */ 0x0,
    },
    /* Sub-bank */ (void *)0x08a9957c, // POINTER
};

const struct InstrumentSubRhythm instrumentSubRhythm851 = {
    {
        /* Type */ INSTRUMENT_SUB_RHYTHM,
        /* unk1 */ 0x24,
        /* unk2 */ 0x0,
    },
    /* Sub-bank */ (void *)0x08a99c60, // POINTER
};

const struct InstrumentSubRhythm instrumentSubRhythm852 = {
    {
        /* Type */ INSTRUMENT_SUB_RHYTHM,
        /* unk1 */ 0x24,
        /* unk2 */ 0x0,
    },
    /* Sub-bank */ (void *)0x08a9940c, // POINTER
};

extern const struct WaveData sfx_039WaveData;
const struct InstrumentPCM instrumentPCM853 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_039WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x00218000,
};

extern const struct WaveData sfx_398WaveData;
const struct InstrumentPCM instrumentPCM854 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_398WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0000fc1f,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x000f6a90,
};

extern const struct WaveData sfx_007WaveData;
const struct InstrumentPCM instrumentPCM855 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_007WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_001WaveData;
const struct InstrumentPCM instrumentPCM856 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_001WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x0059cc48,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00106a05,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_003WaveData;
const struct InstrumentPCM instrumentPCM857 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_003WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

const struct InstrumentPSG instrumentPSG858 = {
    {
        /* Type */ INSTRUMENT_PSG,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Wave Channel */ NULL,
    /* unk8         */ 0x007f0000,
    /* unkC         */ 0x007e0000,
    /* unk10        */ 0x007f0000,
    /* unk14        */ 0x007f0000,
    /* unk18        */ 0x00000000,
    /* unk1C        */ 0x007f0000,
    /* Channel      */ PSG_PULSE_CHANNEL_1,
    /* unk21        */ 0x0,
    /* unk22        */ 0x4,
};

const struct InstrumentPSG instrumentPSG859 = {
    {
        /* Type */ INSTRUMENT_PSG,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Wave Channel */ NULL,
    /* unk8         */ 0x007f0000,
    /* unkC         */ 0x007e0000,
    /* unk10        */ 0x007f0000,
    /* unk14        */ 0x007f0000,
    /* unk18        */ 0x00000000,
    /* unk1C        */ 0x007f0000,
    /* Channel      */ PSG_PULSE_CHANNEL_2,
    /* unk21        */ 0x0,
    /* unk22        */ 0x4,
};

extern const struct WaveData sfx_203WaveData;
const struct InstrumentPCM instrumentPCM860 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_203WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00015029,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_239WaveData;
const struct InstrumentPCM instrumentPCM861 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_239WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00024c48,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0018ea90,
};

extern const struct WaveData sfx_012WaveData;
const struct InstrumentPCM instrumentPCM862 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_012WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x001a433b,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_386WaveData;
const struct InstrumentPCM instrumentPCM863 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_386WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x000cd40a,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0013b26c,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_008WaveData;
const struct InstrumentPCM instrumentPCM864 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_008WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_383WaveData;
const struct InstrumentPCM instrumentPCM865 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_383WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0001f83e,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_329WaveData;
const struct InstrumentPCM instrumentPCM866 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_329WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00267c1f,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x000690ce,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_005WaveData;
const struct InstrumentPCM instrumentPCM867 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_005WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_321WaveData;
const struct InstrumentPCM instrumentPCM868 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_321WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x000f6a90,
};

extern const struct WaveData sfx_235WaveData;
const struct InstrumentPCM instrumentPCM869 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_235WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_342WaveData;
const struct InstrumentPCM instrumentPCM870 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_342WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x0060364d,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00015029,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_401WaveData;
const struct InstrumentPCM instrumentPCM871 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_401WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_114WaveData;
const struct InstrumentPCM instrumentPCM872 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_114WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_196WaveData;
const struct InstrumentPCM instrumentPCM873 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_196WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0000a814,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_310WaveData;
const struct InstrumentPCM instrumentPCM874 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_310WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0000540a,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_303WaveData;
const struct InstrumentPCM instrumentPCM875 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_303WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0000fc1f,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_423WaveData;
const struct InstrumentPCM instrumentPCM876 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_423WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00267c1f,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00015029,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_226WaveData;
const struct InstrumentPCM instrumentPCM877 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_226WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_203WaveData;
const struct InstrumentPCM instrumentPCM878 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_203WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00015029,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_309WaveData;
const struct InstrumentPCM instrumentPCM879 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_309WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x0019a814,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0000a814,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_124WaveData;
const struct InstrumentPCM instrumentPCM880 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_124WaveData,
    /* unk8   */ 0x00000000,
    /* unkC   */ 0x00267c1f,
    /* unk10  */ 0x0026c9b2,
    /* unk14  */ 0x00015029,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_313WaveData;
const struct InstrumentPCM instrumentPCM881 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_313WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00034867,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x00082378,
};

extern const struct WaveData sfx_354WaveData;
const struct InstrumentPCM instrumentPCM882 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_354WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00335029,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0001f83e,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_118WaveData;
const struct InstrumentPCM instrumentPCM883 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_118WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_322WaveData;
const struct InstrumentPCM instrumentPCM884 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_322WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x0066a052,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x001f83e0,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x00235dd1,
};

extern const struct WaveData sfx_335WaveData;
const struct InstrumentPCM instrumentPCM885 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_335WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00034867,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x000f6a90,
};

extern const struct WaveData sfx_297WaveData;
const struct InstrumentPCM instrumentPCM886 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_297WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x0019a814,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0000a814,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_308WaveData;
const struct InstrumentPCM instrumentPCM887 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_308WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00335029,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0000fc1f,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_238WaveData;
const struct InstrumentPCM instrumentPCM888 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_238WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x0019a814,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0000a814,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_305WaveData;
const struct InstrumentPCM instrumentPCM889 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_305WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00267c1f,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0000fc1f,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x00235dd1,
};

extern const struct WaveData sfx_410WaveData;
const struct InstrumentPCM instrumentPCM890 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_410WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_315WaveData;
const struct InstrumentPCM instrumentPCM891 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_315WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x000cd40a,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00015029,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_015WaveData;
const struct InstrumentPCM instrumentPCM892 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_015WaveData,
    /* unk8   */ 0x00000000,
    /* unkC   */ 0x004cf83e,
    /* unk10  */ 0x00307c1f,
    /* unk14  */ 0x00015029,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_320WaveData;
const struct InstrumentPCM instrumentPCM893 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_320WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00335029,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0000fc1f,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_113WaveData;
const struct InstrumentPCM instrumentPCM894 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_113WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x00235dd1,
};

extern const struct WaveData sfx_399WaveData;
const struct InstrumentPCM instrumentPCM895 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_399WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00024c48,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_190WaveData;
const struct InstrumentPCM instrumentPCM896 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_190WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_011WaveData;
const struct InstrumentPCM instrumentPCM897 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_011WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00267c1f,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0009d936,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x000f6a90,
};

extern const struct WaveData sfx_006WaveData;
const struct InstrumentPCM instrumentPCM898 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_006WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x00218000,
};

const struct InstrumentSubRhythm instrumentSubRhythm899 = {
    {
        /* Type */ INSTRUMENT_SUB_RHYTHM,
        /* unk1 */ 0x24,
        /* unk2 */ 0x0,
    },
    /* Sub-bank */ (void *)0x08a9957c, // POINTER
};

const struct InstrumentSubRhythm instrumentSubRhythm900 = {
    {
        /* Type */ INSTRUMENT_SUB_RHYTHM,
        /* unk1 */ 0x24,
        /* unk2 */ 0x0,
    },
    /* Sub-bank */ (void *)0x08a99a14, // POINTER
};

const struct InstrumentSubRhythm instrumentSubRhythm901 = {
    {
        /* Type */ INSTRUMENT_SUB_RHYTHM,
        /* unk1 */ 0x24,
        /* unk2 */ 0x0,
    },
    /* Sub-bank */ (void *)0x08a9940c, // POINTER
};

extern const struct WaveData sfx_292WaveData;
const struct InstrumentPCM instrumentPCM902 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_292WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00106a05,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_226WaveData;
const struct InstrumentPCM instrumentPCM903 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_226WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_293WaveData;
const struct InstrumentPCM instrumentPCM904 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_293WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0000fc1f,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_302WaveData;
const struct InstrumentPCM instrumentPCM905 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_302WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x000690ce,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_400WaveData;
const struct InstrumentPCM instrumentPCM906 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_400WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00015029,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0018ea90,
};

extern const struct WaveData sfx_338WaveData;
const struct InstrumentPCM instrumentPCM907 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_338WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x0060364d,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00015029,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_335WaveData;
const struct InstrumentPCM instrumentPCM908 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_335WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0004ec9b,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_427WaveData;
const struct InstrumentPCM instrumentPCM909 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_427WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_428WaveData;
const struct InstrumentPCM instrumentPCM910 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_428WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00015029,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

const struct InstrumentSubRhythm instrumentSubRhythm911 = {
    {
        /* Type */ INSTRUMENT_SUB_RHYTHM,
        /* unk1 */ 0x24,
        /* unk2 */ 0x0,
    },
    /* Sub-bank */ (void *)0x08a9957c, // POINTER
};

const struct InstrumentSubRhythm instrumentSubRhythm912 = {
    {
        /* Type */ INSTRUMENT_SUB_RHYTHM,
        /* unk1 */ 0x24,
        /* unk2 */ 0x0,
    },
    /* Sub-bank */ (void *)0x08a9940c, // POINTER
};

extern const struct WaveData sfx_429WaveData;
const struct InstrumentPCM instrumentPCM913 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_429WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_217WaveData;
const struct InstrumentPCM instrumentPCM914 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_217WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x000f6a90,
};

extern const struct WaveData sfx_430WaveData;
const struct InstrumentPCM instrumentPCM915 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_430WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x000b8000,
};

extern const struct WaveData sfx_431WaveData;
const struct InstrumentPCM instrumentPCM916 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_431WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_432WaveData;
const struct InstrumentPCM instrumentPCM917 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_432WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_433WaveData;
const struct InstrumentPCM instrumentPCM918 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_433WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_026WaveData;
const struct InstrumentPCM instrumentPCM919 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_026WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00034867,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_117WaveData;
const struct InstrumentPCM instrumentPCM920 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_117WaveData,
    /* unk8   */ 0x00000000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x0004d936,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0001638c,
};

extern const struct WaveData sfx_434WaveData;
const struct InstrumentPCM instrumentPCM921 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_434WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0016554d,
};

extern const struct WaveData sfx_405WaveData;
const struct InstrumentPCM instrumentPCM922 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_405WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00267c1f,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00015029,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_017WaveData;
const struct InstrumentPCM instrumentPCM923 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_017WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00034867,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x00082378,
};

extern const struct WaveData sfx_042WaveData;
const struct InstrumentPCM instrumentPCM924 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_042WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_196WaveData;
const struct InstrumentPCM instrumentPCM925 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_196WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0000a814,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_041WaveData;
const struct InstrumentPCM instrumentPCM926 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_041WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x0060364d,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00015029,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

const struct InstrumentSubSplit instrumentSubSplit927 = {
    {
        /* Type */ INSTRUMENT_SUB_SPLIT,
        /* unk1 */ 0xc,
        /* unk2 */ 0x0,
    },
    /* unk4     */ (void *)0x08a8666c, // POINTER
    /* Sub-bank */ (void *)0x08a97210, // POINTER
};

extern const struct WaveData sfx_203WaveData;
const struct InstrumentPCM instrumentPCM928 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_203WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00015029,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_038WaveData;
const struct InstrumentPCM instrumentPCM929 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_038WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x000b8000,
};

extern const struct WaveData sfx_028WaveData;
const struct InstrumentPCM instrumentPCM930 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_028WaveData,
    /* unk8   */ 0x00000000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x0043e0f8,
    /* unk14  */ 0x0000540a,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_400WaveData;
const struct InstrumentPCM instrumentPCM931 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_400WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00015029,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0018ea90,
};

extern const struct WaveData sfx_230WaveData;
const struct InstrumentPCM instrumentPCM932 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_230WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x000cd40a,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0001a433,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_293WaveData;
const struct InstrumentPCM instrumentPCM933 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_293WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0001a433,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x000f6a90,
};

const struct InstrumentSubSplit instrumentSubSplit934 = {
    {
        /* Type */ INSTRUMENT_SUB_SPLIT,
        /* unk1 */ 0xc,
        /* unk2 */ 0x0,
    },
    /* unk4     */ (void *)0x08a865ac, // POINTER
    /* Sub-bank */ (void *)0x08a97010, // POINTER
};

extern const struct WaveData sfx_230WaveData;
const struct InstrumentPCM instrumentPCM935 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_230WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x000cd40a,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0000a814,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_435WaveData;
const struct InstrumentPCM instrumentPCM936 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_435WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_226WaveData;
const struct InstrumentPCM instrumentPCM937 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_226WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_289WaveData;
const struct InstrumentPCM instrumentPCM938 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_289WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_436WaveData;
const struct InstrumentPCM instrumentPCM939 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_436WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0001a433,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_437WaveData;
const struct InstrumentPCM instrumentPCM940 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_437WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_438WaveData;
const struct InstrumentPCM instrumentPCM941 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_438WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_006WaveData;
const struct InstrumentPCM instrumentPCM942 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_006WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x00218000,
};

extern const struct WaveData sfx_309WaveData;
const struct InstrumentPCM instrumentPCM943 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_309WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x0019a814,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0000a814,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_439WaveData;
const struct InstrumentPCM instrumentPCM944 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_439WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_237WaveData;
const struct InstrumentPCM instrumentPCM945 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_237WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_344WaveData;
const struct InstrumentPCM instrumentPCM946 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_344WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_122WaveData;
const struct InstrumentPCM instrumentPCM947 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_122WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_217WaveData;
const struct InstrumentPCM instrumentPCM948 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_217WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x000f6a90,
};

extern const struct WaveData sfx_136WaveData;
const struct InstrumentPCM instrumentPCM949 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_136WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_107WaveData;
const struct InstrumentPCM instrumentPCM950 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_107WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00015029,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_129WaveData;
const struct InstrumentPCM instrumentPCM951 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_129WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_214WaveData;
const struct InstrumentPCM instrumentPCM952 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_214WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

const struct InstrumentSubRhythm instrumentSubRhythm953 = {
    {
        /* Type */ INSTRUMENT_SUB_RHYTHM,
        /* unk1 */ 0x24,
        /* unk2 */ 0x0,
    },
    /* Sub-bank */ (void *)0x08a99b4c, // POINTER
};

const struct InstrumentSubRhythm instrumentSubRhythm954 = {
    {
        /* Type */ INSTRUMENT_SUB_RHYTHM,
        /* unk1 */ 0x24,
        /* unk2 */ 0x0,
    },
    /* Sub-bank */ (void *)0x08a998e4, // POINTER
};

const struct InstrumentSubRhythm instrumentSubRhythm955 = {
    {
        /* Type */ INSTRUMENT_SUB_RHYTHM,
        /* unk1 */ 0x24,
        /* unk2 */ 0x0,
    },
    /* Sub-bank */ (void *)0x08a9957c, // POINTER
};

const struct InstrumentSubRhythm instrumentSubRhythm956 = {
    {
        /* Type */ INSTRUMENT_SUB_RHYTHM,
        /* unk1 */ 0x24,
        /* unk2 */ 0x0,
    },
    /* Sub-bank */ (void *)0x08a996e4, // POINTER
};

const struct InstrumentSubRhythm instrumentSubRhythm957 = {
    {
        /* Type */ INSTRUMENT_SUB_RHYTHM,
        /* unk1 */ 0x24,
        /* unk2 */ 0x0,
    },
    /* Sub-bank */ (void *)0x08a9940c, // POINTER
};

extern const struct WaveData sfx_440WaveData;
const struct InstrumentPCM instrumentPCM958 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_440WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_441WaveData;
const struct InstrumentPCM instrumentPCM959 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_441WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_442WaveData;
const struct InstrumentPCM instrumentPCM960 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_442WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_443WaveData;
const struct InstrumentPCM instrumentPCM961 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0xfff0,
    },
    /* Sample */ &sfx_443WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_444WaveData;
const struct InstrumentPCM instrumentPCM962 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0xffe0,
    },
    /* Sample */ &sfx_444WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_445WaveData;
const struct InstrumentPCM instrumentPCM963 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0xffe0,
    },
    /* Sample */ &sfx_445WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_446WaveData;
const struct InstrumentPCM instrumentPCM964 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0xffe0,
    },
    /* Sample */ &sfx_446WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_447WaveData;
const struct InstrumentPCM instrumentPCM965 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_447WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_448WaveData;
const struct InstrumentPCM instrumentPCM966 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0xffe0,
    },
    /* Sample */ &sfx_448WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_449WaveData;
const struct InstrumentPCM instrumentPCM967 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0xffe0,
    },
    /* Sample */ &sfx_449WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_450WaveData;
const struct InstrumentPCM instrumentPCM968 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0xffe0,
    },
    /* Sample */ &sfx_450WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_451WaveData;
const struct InstrumentPCM instrumentPCM969 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0xffe0,
    },
    /* Sample */ &sfx_451WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_452WaveData;
const struct InstrumentPCM instrumentPCM970 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_452WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_087WaveData;
const struct InstrumentPCM instrumentPCM971 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3e,
        /* unk2 */ 0x3f,
    },
    /* Sample */ &sfx_087WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_087WaveData;
const struct InstrumentPCM instrumentPCM972 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x41,
        /* unk2 */ 0x10,
    },
    /* Sample */ &sfx_087WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_453WaveData;
const struct InstrumentPCM instrumentPCM973 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_453WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0004ec9b,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x000f6a90,
};

extern const struct WaveData sfx_454WaveData;
const struct InstrumentPCM instrumentPCM974 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_454WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x00082378,
};

extern const struct WaveData sfx_455WaveData;
const struct InstrumentPCM instrumentPCM975 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_455WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x00082378,
};

extern const struct WaveData sfx_087WaveData;
const struct InstrumentPCM instrumentPCM976 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0xffc1,
    },
    /* Sample */ &sfx_087WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_456WaveData;
const struct InstrumentPCM instrumentPCM977 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_456WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_457WaveData;
const struct InstrumentPCM instrumentPCM978 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_457WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0009d936,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0018ea90,
};

extern const struct WaveData sfx_458WaveData;
const struct InstrumentPCM instrumentPCM979 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_458WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_459WaveData;
const struct InstrumentPCM instrumentPCM980 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_459WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_460WaveData;
const struct InstrumentPCM instrumentPCM981 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_460WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_461WaveData;
const struct InstrumentPCM instrumentPCM982 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_461WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_462WaveData;
const struct InstrumentPCM instrumentPCM983 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_462WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_463WaveData;
const struct InstrumentPCM instrumentPCM984 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_463WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_464WaveData;
const struct InstrumentPCM instrumentPCM985 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_464WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_465WaveData;
const struct InstrumentPCM instrumentPCM986 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_465WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_466WaveData;
const struct InstrumentPCM instrumentPCM987 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_466WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_086WaveData;
const struct InstrumentPCM instrumentPCM988 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_086WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_467WaveData;
const struct InstrumentPCM instrumentPCM989 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_467WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_385WaveData;
const struct InstrumentPCM instrumentPCM990 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_385WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_468WaveData;
const struct InstrumentPCM instrumentPCM991 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x34,
        /* unk2 */ 0xffe0,
    },
    /* Sample */ &sfx_468WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_450WaveData;
const struct InstrumentPCM instrumentPCM992 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0xffe0,
    },
    /* Sample */ &sfx_450WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_468WaveData;
const struct InstrumentPCM instrumentPCM993 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x38,
        /* unk2 */ 0xfff0,
    },
    /* Sample */ &sfx_468WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_468WaveData;
const struct InstrumentPCM instrumentPCM994 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x0,
    },
    /* Sample */ &sfx_468WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_469WaveData;
const struct InstrumentPCM instrumentPCM995 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3e,
        /* unk2 */ 0xffc0,
    },
    /* Sample */ &sfx_469WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_470WaveData;
const struct InstrumentPCM instrumentPCM996 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_470WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_471WaveData;
const struct InstrumentPCM instrumentPCM997 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_471WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00034867,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_472WaveData;
const struct InstrumentPCM instrumentPCM998 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_472WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_473WaveData;
const struct InstrumentPCM instrumentPCM999 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0xffc0,
    },
    /* Sample */ &sfx_473WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_474WaveData;
const struct InstrumentPCM instrumentPCM1000 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0xffe0,
    },
    /* Sample */ &sfx_474WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00034867,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x000f6a90,
};

extern const struct WaveData sfx_475WaveData;
const struct InstrumentPCM instrumentPCM1001 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_475WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_476WaveData;
const struct InstrumentPCM instrumentPCM1002 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_476WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_477WaveData;
const struct InstrumentPCM instrumentPCM1003 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x60,
    },
    /* Sample */ &sfx_477WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_478WaveData;
const struct InstrumentPCM instrumentPCM1004 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_478WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_477WaveData;
const struct InstrumentPCM instrumentPCM1005 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x35,
        /* unk2 */ 0x60,
    },
    /* Sample */ &sfx_477WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_479WaveData;
const struct InstrumentPCM instrumentPCM1006 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_479WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_480WaveData;
const struct InstrumentPCM instrumentPCM1007 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x10,
    },
    /* Sample */ &sfx_480WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_450WaveData;
const struct InstrumentPCM instrumentPCM1008 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0xffe0,
    },
    /* Sample */ &sfx_450WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x000690ce,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x000f6a90,
};

extern const struct WaveData sfx_481WaveData;
const struct InstrumentPCM instrumentPCM1009 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0xfff0,
    },
    /* Sample */ &sfx_481WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_482WaveData;
const struct InstrumentPCM instrumentPCM1010 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_482WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_483WaveData;
const struct InstrumentPCM instrumentPCM1011 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_483WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_484WaveData;
const struct InstrumentPCM instrumentPCM1012 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0xffc1,
    },
    /* Sample */ &sfx_484WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_485WaveData;
const struct InstrumentPCM instrumentPCM1013 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_485WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_216WaveData;
const struct InstrumentPCM instrumentPCM1014 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x3f,
    },
    /* Sample */ &sfx_216WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_486WaveData;
const struct InstrumentPCM instrumentPCM1015 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0xc,
    },
    /* Sample */ &sfx_486WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_487WaveData;
const struct InstrumentPCM instrumentPCM1016 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0xffc1,
    },
    /* Sample */ &sfx_487WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_488WaveData;
const struct InstrumentPCM instrumentPCM1017 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0xc,
    },
    /* Sample */ &sfx_488WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_489WaveData;
const struct InstrumentPCM instrumentPCM1018 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_489WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_490WaveData;
const struct InstrumentPCM instrumentPCM1019 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_490WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_491WaveData;
const struct InstrumentPCM instrumentPCM1020 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_491WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_492WaveData;
const struct InstrumentPCM instrumentPCM1021 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_492WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_493WaveData;
const struct InstrumentPCM instrumentPCM1022 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_493WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_494WaveData;
const struct InstrumentPCM instrumentPCM1023 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_494WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_487WaveData;
const struct InstrumentPCM instrumentPCM1024 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0xffc1,
    },
    /* Sample */ &sfx_487WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x000690ce,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_495WaveData;
const struct InstrumentPCM instrumentPCM1025 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_495WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_496WaveData;
const struct InstrumentPCM instrumentPCM1026 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_496WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_497WaveData;
const struct InstrumentPCM instrumentPCM1027 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0xffe0,
    },
    /* Sample */ &sfx_497WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_498WaveData;
const struct InstrumentPCM instrumentPCM1028 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x20,
    },
    /* Sample */ &sfx_498WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_499WaveData;
const struct InstrumentPCM instrumentPCM1029 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_499WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_500WaveData;
const struct InstrumentPCM instrumentPCM1030 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_500WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x000b8000,
};

extern const struct WaveData sfx_501WaveData;
const struct InstrumentPCM instrumentPCM1031 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_501WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x000b8000,
};

extern const struct WaveData sfx_502WaveData;
const struct InstrumentPCM instrumentPCM1032 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_502WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x000b8000,
};

extern const struct WaveData sfx_503WaveData;
const struct InstrumentPCM instrumentPCM1033 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x30,
    },
    /* Sample */ &sfx_503WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x000b8000,
};

extern const struct WaveData sfx_504WaveData;
const struct InstrumentPCM instrumentPCM1034 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_504WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x000b8000,
};

extern const struct WaveData sfx_505WaveData;
const struct InstrumentPCM instrumentPCM1035 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0xffe0,
    },
    /* Sample */ &sfx_505WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x000b8000,
};

extern const struct WaveData sfx_506WaveData;
const struct InstrumentPCM instrumentPCM1036 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_506WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x000b8000,
};

extern const struct WaveData sfx_507WaveData;
const struct InstrumentPCM instrumentPCM1037 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_507WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x000b8000,
};

extern const struct WaveData sfx_508WaveData;
const struct InstrumentPCM instrumentPCM1038 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_508WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x000b8000,
};

extern const struct WaveData sfx_509WaveData;
const struct InstrumentPCM instrumentPCM1039 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_509WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x000b8000,
};

extern const struct WaveData sfx_510WaveData;
const struct InstrumentPCM instrumentPCM1040 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_510WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_511WaveData;
const struct InstrumentPCM instrumentPCM1041 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_511WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_512WaveData;
const struct InstrumentPCM instrumentPCM1042 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_512WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_513WaveData;
const struct InstrumentPCM instrumentPCM1043 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_513WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_514WaveData;
const struct InstrumentPCM instrumentPCM1044 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_514WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_515WaveData;
const struct InstrumentPCM instrumentPCM1045 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_515WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_516WaveData;
const struct InstrumentPCM instrumentPCM1046 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_516WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_517WaveData;
const struct InstrumentPCM instrumentPCM1047 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_517WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x000690ce,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_518WaveData;
const struct InstrumentPCM instrumentPCM1048 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_518WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00034867,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_518WaveData;
const struct InstrumentPCM instrumentPCM1049 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x39,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_518WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00034867,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_489WaveData;
const struct InstrumentPCM instrumentPCM1050 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_489WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_519WaveData;
const struct InstrumentPCM instrumentPCM1051 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_519WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_520WaveData;
const struct InstrumentPCM instrumentPCM1052 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_520WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_521WaveData;
const struct InstrumentPCM instrumentPCM1053 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3e,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_521WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_522WaveData;
const struct InstrumentPCM instrumentPCM1054 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_522WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00034867,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_523WaveData;
const struct InstrumentPCM instrumentPCM1055 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_523WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00024c48,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_524WaveData;
const struct InstrumentPCM instrumentPCM1056 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x40,
    },
    /* Sample */ &sfx_524WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x000690ce,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_525WaveData;
const struct InstrumentPCM instrumentPCM1057 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0xffc1,
    },
    /* Sample */ &sfx_525WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0018ea90,
};

extern const struct WaveData sfx_526WaveData;
const struct InstrumentPCM instrumentPCM1058 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_526WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x000690ce,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_527WaveData;
const struct InstrumentPCM instrumentPCM1059 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_527WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x000690ce,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_528WaveData;
const struct InstrumentPCM instrumentPCM1060 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_528WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00034867,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_529WaveData;
const struct InstrumentPCM instrumentPCM1061 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x39,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_529WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x00082378,
};

extern const struct WaveData sfx_529WaveData;
const struct InstrumentPCM instrumentPCM1062 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_529WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x00082378,
};

extern const struct WaveData sfx_506WaveData;
const struct InstrumentPCM instrumentPCM1063 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_506WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x000b8000,
};

extern const struct WaveData sfx_530WaveData;
const struct InstrumentPCM instrumentPCM1064 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x38,
        /* unk2 */ 0x30,
    },
    /* Sample */ &sfx_530WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x00082378,
};

extern const struct WaveData sfx_531WaveData;
const struct InstrumentPCM instrumentPCM1065 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_531WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_530WaveData;
const struct InstrumentPCM instrumentPCM1066 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x20,
    },
    /* Sample */ &sfx_530WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x00082378,
};

extern const struct WaveData sfx_532WaveData;
const struct InstrumentPCM instrumentPCM1067 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_532WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x000b8000,
};

extern const struct WaveData sfx_533WaveData;
const struct InstrumentPCM instrumentPCM1068 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_533WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x000b8000,
};

extern const struct WaveData sfx_534WaveData;
const struct InstrumentPCM instrumentPCM1069 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_534WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_535WaveData;
const struct InstrumentPCM instrumentPCM1070 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_535WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_536WaveData;
const struct InstrumentPCM instrumentPCM1071 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0xffe0,
    },
    /* Sample */ &sfx_536WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x000690ce,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_435WaveData;
const struct InstrumentPCM instrumentPCM1072 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_435WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_537WaveData;
const struct InstrumentPCM instrumentPCM1073 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x20,
    },
    /* Sample */ &sfx_537WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_538WaveData;
const struct InstrumentPCM instrumentPCM1074 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_538WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00034867,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_539WaveData;
const struct InstrumentPCM instrumentPCM1075 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_539WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_540WaveData;
const struct InstrumentPCM instrumentPCM1076 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_540WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_541WaveData;
const struct InstrumentPCM instrumentPCM1077 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_541WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_542WaveData;
const struct InstrumentPCM instrumentPCM1078 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_542WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_543WaveData;
const struct InstrumentPCM instrumentPCM1079 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x40,
    },
    /* Sample */ &sfx_543WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_544WaveData;
const struct InstrumentPCM instrumentPCM1080 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_544WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_545WaveData;
const struct InstrumentPCM instrumentPCM1081 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_545WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_546WaveData;
const struct InstrumentPCM instrumentPCM1082 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x30,
    },
    /* Sample */ &sfx_546WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_547WaveData;
const struct InstrumentPCM instrumentPCM1083 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0xffd0,
    },
    /* Sample */ &sfx_547WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_548WaveData;
const struct InstrumentPCM instrumentPCM1084 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_548WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_549WaveData;
const struct InstrumentPCM instrumentPCM1085 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x30,
    },
    /* Sample */ &sfx_549WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0001a433,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_550WaveData;
const struct InstrumentPCM instrumentPCM1086 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_550WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_220WaveData;
const struct InstrumentPCM instrumentPCM1087 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_220WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_218WaveData;
const struct InstrumentPCM instrumentPCM1088 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_218WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_551WaveData;
const struct InstrumentPCM instrumentPCM1089 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_551WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x00218000,
};

extern const struct WaveData sfx_552WaveData;
const struct InstrumentPCM instrumentPCM1090 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_552WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x00218000,
};

extern const struct WaveData sfx_553WaveData;
const struct InstrumentPCM instrumentPCM1091 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_553WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x00218000,
};

extern const struct WaveData sfx_554WaveData;
const struct InstrumentPCM instrumentPCM1092 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_554WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x00218000,
};

extern const struct WaveData sfx_555WaveData;
const struct InstrumentPCM instrumentPCM1093 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_555WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x00218000,
};

extern const struct WaveData sfx_556WaveData;
const struct InstrumentPCM instrumentPCM1094 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_556WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x00218000,
};

extern const struct WaveData sfx_557WaveData;
const struct InstrumentPCM instrumentPCM1095 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_557WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x00218000,
};

extern const struct WaveData sfx_558WaveData;
const struct InstrumentPCM instrumentPCM1096 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_558WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x00218000,
};

extern const struct WaveData sfx_559WaveData;
const struct InstrumentPCM instrumentPCM1097 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_559WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x00218000,
};

extern const struct WaveData sfx_560WaveData;
const struct InstrumentPCM instrumentPCM1098 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_560WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x00218000,
};

extern const struct WaveData sfx_561WaveData;
const struct InstrumentPCM instrumentPCM1099 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_561WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_562WaveData;
const struct InstrumentPCM instrumentPCM1100 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_562WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_233WaveData;
const struct InstrumentPCM instrumentPCM1101 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_233WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_563WaveData;
const struct InstrumentPCM instrumentPCM1102 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_563WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_564WaveData;
const struct InstrumentPCM instrumentPCM1103 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x3f,
    },
    /* Sample */ &sfx_564WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_565WaveData;
const struct InstrumentPCM instrumentPCM1104 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x39,
        /* unk2 */ 0xffc8,
    },
    /* Sample */ &sfx_565WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00034867,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_565WaveData;
const struct InstrumentPCM instrumentPCM1105 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0xffc1,
    },
    /* Sample */ &sfx_565WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00034867,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_566WaveData;
const struct InstrumentPCM instrumentPCM1106 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x20,
    },
    /* Sample */ &sfx_566WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_567WaveData;
const struct InstrumentPCM instrumentPCM1107 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x30,
    },
    /* Sample */ &sfx_567WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_087WaveData;
const struct InstrumentPCM instrumentPCM1108 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_087WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_446WaveData;
const struct InstrumentPCM instrumentPCM1109 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x30,
    },
    /* Sample */ &sfx_446WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_474WaveData;
const struct InstrumentPCM instrumentPCM1110 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x30,
    },
    /* Sample */ &sfx_474WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00034867,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x000f6a90,
};

extern const struct WaveData sfx_216WaveData;
const struct InstrumentPCM instrumentPCM1111 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0xffc1,
    },
    /* Sample */ &sfx_216WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_568WaveData;
const struct InstrumentPCM instrumentPCM1112 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_568WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_569WaveData;
const struct InstrumentPCM instrumentPCM1113 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_569WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_570WaveData;
const struct InstrumentPCM instrumentPCM1114 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_570WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_571WaveData;
const struct InstrumentPCM instrumentPCM1115 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x20,
    },
    /* Sample */ &sfx_571WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_572WaveData;
const struct InstrumentPCM instrumentPCM1116 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_572WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_573WaveData;
const struct InstrumentPCM instrumentPCM1117 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_573WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_574WaveData;
const struct InstrumentPCM instrumentPCM1118 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_574WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_575WaveData;
const struct InstrumentPCM instrumentPCM1119 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_575WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_576WaveData;
const struct InstrumentPCM instrumentPCM1120 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_576WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_577WaveData;
const struct InstrumentPCM instrumentPCM1121 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_577WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_578WaveData;
const struct InstrumentPCM instrumentPCM1122 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_578WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_579WaveData;
const struct InstrumentPCM instrumentPCM1123 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_579WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_580WaveData;
const struct InstrumentPCM instrumentPCM1124 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_580WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_581WaveData;
const struct InstrumentPCM instrumentPCM1125 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_581WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_582WaveData;
const struct InstrumentPCM instrumentPCM1126 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_582WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_583WaveData;
const struct InstrumentPCM instrumentPCM1127 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_583WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_584WaveData;
const struct InstrumentPCM instrumentPCM1128 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_584WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_585WaveData;
const struct InstrumentPCM instrumentPCM1129 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_585WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_586WaveData;
const struct InstrumentPCM instrumentPCM1130 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_586WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_587WaveData;
const struct InstrumentPCM instrumentPCM1131 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_587WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_440WaveData;
const struct InstrumentPCM instrumentPCM1132 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_440WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_441WaveData;
const struct InstrumentPCM instrumentPCM1133 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_441WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_442WaveData;
const struct InstrumentPCM instrumentPCM1134 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_442WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_443WaveData;
const struct InstrumentPCM instrumentPCM1135 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_443WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_444WaveData;
const struct InstrumentPCM instrumentPCM1136 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_444WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_445WaveData;
const struct InstrumentPCM instrumentPCM1137 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_445WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_446WaveData;
const struct InstrumentPCM instrumentPCM1138 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_446WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_447WaveData;
const struct InstrumentPCM instrumentPCM1139 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_447WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_448WaveData;
const struct InstrumentPCM instrumentPCM1140 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_448WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_449WaveData;
const struct InstrumentPCM instrumentPCM1141 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_449WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_450WaveData;
const struct InstrumentPCM instrumentPCM1142 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_450WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_451WaveData;
const struct InstrumentPCM instrumentPCM1143 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_451WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_452WaveData;
const struct InstrumentPCM instrumentPCM1144 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_452WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_087WaveData;
const struct InstrumentPCM instrumentPCM1145 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_087WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_087WaveData;
const struct InstrumentPCM instrumentPCM1146 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_087WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_453WaveData;
const struct InstrumentPCM instrumentPCM1147 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_453WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0004ec9b,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x000f6a90,
};

extern const struct WaveData sfx_454WaveData;
const struct InstrumentPCM instrumentPCM1148 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_454WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x00082378,
};

extern const struct WaveData sfx_455WaveData;
const struct InstrumentPCM instrumentPCM1149 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_455WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x00082378,
};

extern const struct WaveData sfx_087WaveData;
const struct InstrumentPCM instrumentPCM1150 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_087WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_456WaveData;
const struct InstrumentPCM instrumentPCM1151 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_456WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_457WaveData;
const struct InstrumentPCM instrumentPCM1152 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_457WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0009d936,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0018ea90,
};

extern const struct WaveData sfx_458WaveData;
const struct InstrumentPCM instrumentPCM1153 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_458WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_459WaveData;
const struct InstrumentPCM instrumentPCM1154 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_459WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_460WaveData;
const struct InstrumentPCM instrumentPCM1155 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_460WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_461WaveData;
const struct InstrumentPCM instrumentPCM1156 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_461WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_462WaveData;
const struct InstrumentPCM instrumentPCM1157 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_462WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_463WaveData;
const struct InstrumentPCM instrumentPCM1158 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_463WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_518WaveData;
const struct InstrumentPCM instrumentPCM1159 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_518WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00034867,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_465WaveData;
const struct InstrumentPCM instrumentPCM1160 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_465WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_466WaveData;
const struct InstrumentPCM instrumentPCM1161 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_466WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_086WaveData;
const struct InstrumentPCM instrumentPCM1162 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_086WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_467WaveData;
const struct InstrumentPCM instrumentPCM1163 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_467WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_385WaveData;
const struct InstrumentPCM instrumentPCM1164 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_385WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_468WaveData;
const struct InstrumentPCM instrumentPCM1165 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_468WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_450WaveData;
const struct InstrumentPCM instrumentPCM1166 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_450WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_468WaveData;
const struct InstrumentPCM instrumentPCM1167 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_468WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_468WaveData;
const struct InstrumentPCM instrumentPCM1168 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_468WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_469WaveData;
const struct InstrumentPCM instrumentPCM1169 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_469WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_470WaveData;
const struct InstrumentPCM instrumentPCM1170 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_470WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_471WaveData;
const struct InstrumentPCM instrumentPCM1171 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_471WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00034867,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_472WaveData;
const struct InstrumentPCM instrumentPCM1172 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_472WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_473WaveData;
const struct InstrumentPCM instrumentPCM1173 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_473WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_474WaveData;
const struct InstrumentPCM instrumentPCM1174 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_474WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00034867,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x000f6a90,
};

extern const struct WaveData sfx_475WaveData;
const struct InstrumentPCM instrumentPCM1175 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_475WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_476WaveData;
const struct InstrumentPCM instrumentPCM1176 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_476WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_477WaveData;
const struct InstrumentPCM instrumentPCM1177 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_477WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_478WaveData;
const struct InstrumentPCM instrumentPCM1178 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_478WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_477WaveData;
const struct InstrumentPCM instrumentPCM1179 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_477WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_479WaveData;
const struct InstrumentPCM instrumentPCM1180 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_479WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_480WaveData;
const struct InstrumentPCM instrumentPCM1181 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_480WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_450WaveData;
const struct InstrumentPCM instrumentPCM1182 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_450WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x000690ce,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x000f6a90,
};

extern const struct WaveData sfx_481WaveData;
const struct InstrumentPCM instrumentPCM1183 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_481WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_482WaveData;
const struct InstrumentPCM instrumentPCM1184 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_482WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_483WaveData;
const struct InstrumentPCM instrumentPCM1185 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_483WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_484WaveData;
const struct InstrumentPCM instrumentPCM1186 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_484WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_216WaveData;
const struct InstrumentPCM instrumentPCM1187 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_216WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_486WaveData;
const struct InstrumentPCM instrumentPCM1188 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_486WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_487WaveData;
const struct InstrumentPCM instrumentPCM1189 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_487WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_488WaveData;
const struct InstrumentPCM instrumentPCM1190 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_488WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_489WaveData;
const struct InstrumentPCM instrumentPCM1191 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_489WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_490WaveData;
const struct InstrumentPCM instrumentPCM1192 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_490WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_491WaveData;
const struct InstrumentPCM instrumentPCM1193 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_491WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_492WaveData;
const struct InstrumentPCM instrumentPCM1194 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_492WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_493WaveData;
const struct InstrumentPCM instrumentPCM1195 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_493WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_494WaveData;
const struct InstrumentPCM instrumentPCM1196 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_494WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_495WaveData;
const struct InstrumentPCM instrumentPCM1197 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_495WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_496WaveData;
const struct InstrumentPCM instrumentPCM1198 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_496WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_497WaveData;
const struct InstrumentPCM instrumentPCM1199 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_497WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_498WaveData;
const struct InstrumentPCM instrumentPCM1200 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_498WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_499WaveData;
const struct InstrumentPCM instrumentPCM1201 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_499WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_500WaveData;
const struct InstrumentPCM instrumentPCM1202 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_500WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x000b8000,
};

extern const struct WaveData sfx_501WaveData;
const struct InstrumentPCM instrumentPCM1203 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_501WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x000b8000,
};

extern const struct WaveData sfx_502WaveData;
const struct InstrumentPCM instrumentPCM1204 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_502WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x000b8000,
};

extern const struct WaveData sfx_503WaveData;
const struct InstrumentPCM instrumentPCM1205 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_503WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x000b8000,
};

extern const struct WaveData sfx_504WaveData;
const struct InstrumentPCM instrumentPCM1206 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_504WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x000b8000,
};

extern const struct WaveData sfx_505WaveData;
const struct InstrumentPCM instrumentPCM1207 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_505WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x000b8000,
};

extern const struct WaveData sfx_506WaveData;
const struct InstrumentPCM instrumentPCM1208 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_506WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x000b8000,
};

extern const struct WaveData sfx_507WaveData;
const struct InstrumentPCM instrumentPCM1209 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_507WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x000b8000,
};

extern const struct WaveData sfx_508WaveData;
const struct InstrumentPCM instrumentPCM1210 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_508WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x000b8000,
};

extern const struct WaveData sfx_509WaveData;
const struct InstrumentPCM instrumentPCM1211 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_509WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x000b8000,
};

extern const struct WaveData sfx_510WaveData;
const struct InstrumentPCM instrumentPCM1212 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_510WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_511WaveData;
const struct InstrumentPCM instrumentPCM1213 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_511WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_512WaveData;
const struct InstrumentPCM instrumentPCM1214 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_512WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_513WaveData;
const struct InstrumentPCM instrumentPCM1215 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_513WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_514WaveData;
const struct InstrumentPCM instrumentPCM1216 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_514WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_515WaveData;
const struct InstrumentPCM instrumentPCM1217 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_515WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_516WaveData;
const struct InstrumentPCM instrumentPCM1218 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_516WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

const struct InstrumentSubRhythm instrumentSubRhythm1219 = {
    {
        /* Type */ INSTRUMENT_SUB_RHYTHM,
        /* unk1 */ 0x24,
        /* unk2 */ 0x0,
    },
    /* Sub-bank */ (void *)0x08a996e4, // POINTER
};

extern const struct WaveData sfx_588WaveData;
const struct InstrumentPCM instrumentPCM1220 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x20,
    },
    /* Sample */ &sfx_588WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x000f6a90,
};

extern const struct WaveData sfx_589WaveData;
const struct InstrumentPCM instrumentPCM1221 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x20,
    },
    /* Sample */ &sfx_589WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_590WaveData;
const struct InstrumentPCM instrumentPCM1222 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x20,
    },
    /* Sample */ &sfx_590WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x000f6a90,
};

extern const struct WaveData sfx_591WaveData;
const struct InstrumentPCM instrumentPCM1223 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_591WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_190WaveData;
const struct InstrumentPCM instrumentPCM1224 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_190WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_449WaveData;
const struct InstrumentPCM instrumentPCM1225 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0xffe0,
    },
    /* Sample */ &sfx_449WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_592WaveData;
const struct InstrumentPCM instrumentPCM1226 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0xffd0,
    },
    /* Sample */ &sfx_592WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x000f6a90,
};

extern const struct WaveData sfx_593WaveData;
const struct InstrumentPCM instrumentPCM1227 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0xffd0,
    },
    /* Sample */ &sfx_593WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x000f6a90,
};

extern const struct WaveData sfx_594WaveData;
const struct InstrumentPCM instrumentPCM1228 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x30,
    },
    /* Sample */ &sfx_594WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x000f6a90,
};

extern const struct WaveData sfx_594WaveData;
const struct InstrumentPCM instrumentPCM1229 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x35,
        /* unk2 */ 0x30,
    },
    /* Sample */ &sfx_594WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x000f6a90,
};

extern const struct WaveData sfx_590WaveData;
const struct InstrumentPCM instrumentPCM1230 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x30,
        /* unk2 */ 0xffe0,
    },
    /* Sample */ &sfx_590WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_588WaveData;
const struct InstrumentPCM instrumentPCM1231 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x37,
        /* unk2 */ 0x20,
    },
    /* Sample */ &sfx_588WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x000f6a90,
};

extern const struct WaveData sfx_588WaveData;
const struct InstrumentPCM instrumentPCM1232 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3e,
        /* unk2 */ 0x20,
    },
    /* Sample */ &sfx_588WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x000f6a90,
};

extern const struct WaveData sfx_588WaveData;
const struct InstrumentPCM instrumentPCM1233 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x40,
        /* unk2 */ 0x20,
    },
    /* Sample */ &sfx_588WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x000f6a90,
};

extern const struct WaveData sfx_595WaveData;
const struct InstrumentPCM instrumentPCM1234 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x40,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_595WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x000f6a90,
};

extern const struct WaveData sfx_596WaveData;
const struct InstrumentPCM instrumentPCM1235 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x40,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_596WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x000f6a90,
};

extern const struct WaveData sfx_597WaveData;
const struct InstrumentPCM instrumentPCM1236 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x40,
        /* unk2 */ 0xffe0,
    },
    /* Sample */ &sfx_597WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x000f6a90,
};

extern const struct WaveData sfx_598WaveData;
const struct InstrumentPCM instrumentPCM1237 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x40,
        /* unk2 */ 0xffe0,
    },
    /* Sample */ &sfx_598WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x000f6a90,
};

extern const struct WaveData sfx_141WaveData;
const struct InstrumentPCM instrumentPCM1238 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_141WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_142WaveData;
const struct InstrumentPCM instrumentPCM1239 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_142WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_143WaveData;
const struct InstrumentPCM instrumentPCM1240 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_143WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_599WaveData;
const struct InstrumentPCM instrumentPCM1241 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x40,
        /* unk2 */ 0x3f,
    },
    /* Sample */ &sfx_599WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x000f6a90,
};

extern const struct WaveData sfx_600WaveData;
const struct InstrumentPCM instrumentPCM1242 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_600WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_131WaveData;
const struct InstrumentPCM instrumentPCM1243 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_131WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_132WaveData;
const struct InstrumentPCM instrumentPCM1244 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_132WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_133WaveData;
const struct InstrumentPCM instrumentPCM1245 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_133WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_134WaveData;
const struct InstrumentPCM instrumentPCM1246 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_134WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_135WaveData;
const struct InstrumentPCM instrumentPCM1247 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_135WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_136WaveData;
const struct InstrumentPCM instrumentPCM1248 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_136WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_601WaveData;
const struct InstrumentPCM instrumentPCM1249 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_601WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_602WaveData;
const struct InstrumentPCM instrumentPCM1250 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_602WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_603WaveData;
const struct InstrumentPCM instrumentPCM1251 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_603WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_604WaveData;
const struct InstrumentPCM instrumentPCM1252 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_604WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_605WaveData;
const struct InstrumentPCM instrumentPCM1253 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_605WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_606WaveData;
const struct InstrumentPCM instrumentPCM1254 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_606WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_607WaveData;
const struct InstrumentPCM instrumentPCM1255 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_607WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_608WaveData;
const struct InstrumentPCM instrumentPCM1256 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_608WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_609WaveData;
const struct InstrumentPCM instrumentPCM1257 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_609WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_610WaveData;
const struct InstrumentPCM instrumentPCM1258 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_610WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_611WaveData;
const struct InstrumentPCM instrumentPCM1259 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_611WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_612WaveData;
const struct InstrumentPCM instrumentPCM1260 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_612WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_613WaveData;
const struct InstrumentPCM instrumentPCM1261 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_613WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_614WaveData;
const struct InstrumentPCM instrumentPCM1262 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_614WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_615WaveData;
const struct InstrumentPCM instrumentPCM1263 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_615WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_616WaveData;
const struct InstrumentPCM instrumentPCM1264 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_616WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_617WaveData;
const struct InstrumentPCM instrumentPCM1265 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_617WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_618WaveData;
const struct InstrumentPCM instrumentPCM1266 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_618WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_619WaveData;
const struct InstrumentPCM instrumentPCM1267 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_619WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_620WaveData;
const struct InstrumentPCM instrumentPCM1268 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_620WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_621WaveData;
const struct InstrumentPCM instrumentPCM1269 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_621WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_622WaveData;
const struct InstrumentPCM instrumentPCM1270 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_622WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_623WaveData;
const struct InstrumentPCM instrumentPCM1271 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_623WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_624WaveData;
const struct InstrumentPCM instrumentPCM1272 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_624WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_625WaveData;
const struct InstrumentPCM instrumentPCM1273 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_625WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_626WaveData;
const struct InstrumentPCM instrumentPCM1274 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_626WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_627WaveData;
const struct InstrumentPCM instrumentPCM1275 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_627WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_628WaveData;
const struct InstrumentPCM instrumentPCM1276 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_628WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_629WaveData;
const struct InstrumentPCM instrumentPCM1277 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_629WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_630WaveData;
const struct InstrumentPCM instrumentPCM1278 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_630WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_631WaveData;
const struct InstrumentPCM instrumentPCM1279 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_631WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_632WaveData;
const struct InstrumentPCM instrumentPCM1280 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_632WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_633WaveData;
const struct InstrumentPCM instrumentPCM1281 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_633WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_634WaveData;
const struct InstrumentPCM instrumentPCM1282 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_634WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_635WaveData;
const struct InstrumentPCM instrumentPCM1283 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_635WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_636WaveData;
const struct InstrumentPCM instrumentPCM1284 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_636WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_637WaveData;
const struct InstrumentPCM instrumentPCM1285 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_637WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_638WaveData;
const struct InstrumentPCM instrumentPCM1286 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_638WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_639WaveData;
const struct InstrumentPCM instrumentPCM1287 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_639WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_640WaveData;
const struct InstrumentPCM instrumentPCM1288 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_640WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_641WaveData;
const struct InstrumentPCM instrumentPCM1289 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_641WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_642WaveData;
const struct InstrumentPCM instrumentPCM1290 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_642WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_643WaveData;
const struct InstrumentPCM instrumentPCM1291 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_643WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_644WaveData;
const struct InstrumentPCM instrumentPCM1292 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_644WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_645WaveData;
const struct InstrumentPCM instrumentPCM1293 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_645WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_646WaveData;
const struct InstrumentPCM instrumentPCM1294 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_646WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_647WaveData;
const struct InstrumentPCM instrumentPCM1295 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_647WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_648WaveData;
const struct InstrumentPCM instrumentPCM1296 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_648WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_649WaveData;
const struct InstrumentPCM instrumentPCM1297 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_649WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_650WaveData;
const struct InstrumentPCM instrumentPCM1298 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_650WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_651WaveData;
const struct InstrumentPCM instrumentPCM1299 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_651WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_652WaveData;
const struct InstrumentPCM instrumentPCM1300 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_652WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_653WaveData;
const struct InstrumentPCM instrumentPCM1301 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_653WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_654WaveData;
const struct InstrumentPCM instrumentPCM1302 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_654WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_655WaveData;
const struct InstrumentPCM instrumentPCM1303 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_655WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_656WaveData;
const struct InstrumentPCM instrumentPCM1304 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_656WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_657WaveData;
const struct InstrumentPCM instrumentPCM1305 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_657WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_658WaveData;
const struct InstrumentPCM instrumentPCM1306 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_658WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_659WaveData;
const struct InstrumentPCM instrumentPCM1307 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_659WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_660WaveData;
const struct InstrumentPCM instrumentPCM1308 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_660WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_661WaveData;
const struct InstrumentPCM instrumentPCM1309 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_661WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_662WaveData;
const struct InstrumentPCM instrumentPCM1310 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_662WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_663WaveData;
const struct InstrumentPCM instrumentPCM1311 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_663WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_664WaveData;
const struct InstrumentPCM instrumentPCM1312 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_664WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_665WaveData;
const struct InstrumentPCM instrumentPCM1313 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_665WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_666WaveData;
const struct InstrumentPCM instrumentPCM1314 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_666WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_667WaveData;
const struct InstrumentPCM instrumentPCM1315 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_667WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_668WaveData;
const struct InstrumentPCM instrumentPCM1316 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_668WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_669WaveData;
const struct InstrumentPCM instrumentPCM1317 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_669WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_670WaveData;
const struct InstrumentPCM instrumentPCM1318 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_670WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_671WaveData;
const struct InstrumentPCM instrumentPCM1319 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_671WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_672WaveData;
const struct InstrumentPCM instrumentPCM1320 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_672WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_673WaveData;
const struct InstrumentPCM instrumentPCM1321 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_673WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_674WaveData;
const struct InstrumentPCM instrumentPCM1322 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_674WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_675WaveData;
const struct InstrumentPCM instrumentPCM1323 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_675WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_676WaveData;
const struct InstrumentPCM instrumentPCM1324 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_676WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_677WaveData;
const struct InstrumentPCM instrumentPCM1325 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_677WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_678WaveData;
const struct InstrumentPCM instrumentPCM1326 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_678WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_679WaveData;
const struct InstrumentPCM instrumentPCM1327 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_679WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_680WaveData;
const struct InstrumentPCM instrumentPCM1328 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_680WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_681WaveData;
const struct InstrumentPCM instrumentPCM1329 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_681WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_682WaveData;
const struct InstrumentPCM instrumentPCM1330 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_682WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_683WaveData;
const struct InstrumentPCM instrumentPCM1331 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_683WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_684WaveData;
const struct InstrumentPCM instrumentPCM1332 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_684WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_685WaveData;
const struct InstrumentPCM instrumentPCM1333 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_685WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_686WaveData;
const struct InstrumentPCM instrumentPCM1334 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_686WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_687WaveData;
const struct InstrumentPCM instrumentPCM1335 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_687WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_688WaveData;
const struct InstrumentPCM instrumentPCM1336 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_688WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_689WaveData;
const struct InstrumentPCM instrumentPCM1337 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_689WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_690WaveData;
const struct InstrumentPCM instrumentPCM1338 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_690WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_691WaveData;
const struct InstrumentPCM instrumentPCM1339 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_691WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_692WaveData;
const struct InstrumentPCM instrumentPCM1340 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_692WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_693WaveData;
const struct InstrumentPCM instrumentPCM1341 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_693WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_694WaveData;
const struct InstrumentPCM instrumentPCM1342 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_694WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_695WaveData;
const struct InstrumentPCM instrumentPCM1343 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_695WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_696WaveData;
const struct InstrumentPCM instrumentPCM1344 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_696WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_697WaveData;
const struct InstrumentPCM instrumentPCM1345 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_697WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_698WaveData;
const struct InstrumentPCM instrumentPCM1346 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_698WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_699WaveData;
const struct InstrumentPCM instrumentPCM1347 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_699WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_700WaveData;
const struct InstrumentPCM instrumentPCM1348 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_700WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_701WaveData;
const struct InstrumentPCM instrumentPCM1349 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_701WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_702WaveData;
const struct InstrumentPCM instrumentPCM1350 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_702WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_703WaveData;
const struct InstrumentPCM instrumentPCM1351 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_703WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_704WaveData;
const struct InstrumentPCM instrumentPCM1352 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_704WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_705WaveData;
const struct InstrumentPCM instrumentPCM1353 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_705WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_706WaveData;
const struct InstrumentPCM instrumentPCM1354 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_706WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_707WaveData;
const struct InstrumentPCM instrumentPCM1355 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_707WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_708WaveData;
const struct InstrumentPCM instrumentPCM1356 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_708WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_709WaveData;
const struct InstrumentPCM instrumentPCM1357 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_709WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_710WaveData;
const struct InstrumentPCM instrumentPCM1358 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_710WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_711WaveData;
const struct InstrumentPCM instrumentPCM1359 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_711WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_712WaveData;
const struct InstrumentPCM instrumentPCM1360 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_712WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_713WaveData;
const struct InstrumentPCM instrumentPCM1361 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_713WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_714WaveData;
const struct InstrumentPCM instrumentPCM1362 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_714WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_715WaveData;
const struct InstrumentPCM instrumentPCM1363 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_715WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_716WaveData;
const struct InstrumentPCM instrumentPCM1364 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_716WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_717WaveData;
const struct InstrumentPCM instrumentPCM1365 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_717WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_718WaveData;
const struct InstrumentPCM instrumentPCM1366 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_718WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_719WaveData;
const struct InstrumentPCM instrumentPCM1367 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_719WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_720WaveData;
const struct InstrumentPCM instrumentPCM1368 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_720WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_721WaveData;
const struct InstrumentPCM instrumentPCM1369 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_721WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_722WaveData;
const struct InstrumentPCM instrumentPCM1370 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_722WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_723WaveData;
const struct InstrumentPCM instrumentPCM1371 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_723WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_724WaveData;
const struct InstrumentPCM instrumentPCM1372 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_724WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_725WaveData;
const struct InstrumentPCM instrumentPCM1373 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_725WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_726WaveData;
const struct InstrumentPCM instrumentPCM1374 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_726WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_727WaveData;
const struct InstrumentPCM instrumentPCM1375 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_727WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_728WaveData;
const struct InstrumentPCM instrumentPCM1376 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_728WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_729WaveData;
const struct InstrumentPCM instrumentPCM1377 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_729WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_730WaveData;
const struct InstrumentPCM instrumentPCM1378 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_730WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_731WaveData;
const struct InstrumentPCM instrumentPCM1379 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_731WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_732WaveData;
const struct InstrumentPCM instrumentPCM1380 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_732WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_733WaveData;
const struct InstrumentPCM instrumentPCM1381 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_733WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_734WaveData;
const struct InstrumentPCM instrumentPCM1382 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_734WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_735WaveData;
const struct InstrumentPCM instrumentPCM1383 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_735WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_736WaveData;
const struct InstrumentPCM instrumentPCM1384 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_736WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_737WaveData;
const struct InstrumentPCM instrumentPCM1385 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_737WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_738WaveData;
const struct InstrumentPCM instrumentPCM1386 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_738WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_739WaveData;
const struct InstrumentPCM instrumentPCM1387 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_739WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_740WaveData;
const struct InstrumentPCM instrumentPCM1388 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_740WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_741WaveData;
const struct InstrumentPCM instrumentPCM1389 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_741WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_742WaveData;
const struct InstrumentPCM instrumentPCM1390 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_742WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_743WaveData;
const struct InstrumentPCM instrumentPCM1391 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_743WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_744WaveData;
const struct InstrumentPCM instrumentPCM1392 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_744WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_745WaveData;
const struct InstrumentPCM instrumentPCM1393 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_745WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_746WaveData;
const struct InstrumentPCM instrumentPCM1394 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_746WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_747WaveData;
const struct InstrumentPCM instrumentPCM1395 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_747WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_748WaveData;
const struct InstrumentPCM instrumentPCM1396 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_748WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_749WaveData;
const struct InstrumentPCM instrumentPCM1397 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_749WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_750WaveData;
const struct InstrumentPCM instrumentPCM1398 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_750WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_751WaveData;
const struct InstrumentPCM instrumentPCM1399 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_751WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_752WaveData;
const struct InstrumentPCM instrumentPCM1400 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_752WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_753WaveData;
const struct InstrumentPCM instrumentPCM1401 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_753WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_754WaveData;
const struct InstrumentPCM instrumentPCM1402 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_754WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_755WaveData;
const struct InstrumentPCM instrumentPCM1403 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_755WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_756WaveData;
const struct InstrumentPCM instrumentPCM1404 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_756WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_757WaveData;
const struct InstrumentPCM instrumentPCM1405 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_757WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_758WaveData;
const struct InstrumentPCM instrumentPCM1406 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_758WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_759WaveData;
const struct InstrumentPCM instrumentPCM1407 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_759WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_760WaveData;
const struct InstrumentPCM instrumentPCM1408 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_760WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_761WaveData;
const struct InstrumentPCM instrumentPCM1409 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_761WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_762WaveData;
const struct InstrumentPCM instrumentPCM1410 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_762WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_763WaveData;
const struct InstrumentPCM instrumentPCM1411 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_763WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_764WaveData;
const struct InstrumentPCM instrumentPCM1412 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_764WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_765WaveData;
const struct InstrumentPCM instrumentPCM1413 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_765WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_766WaveData;
const struct InstrumentPCM instrumentPCM1414 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_766WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_767WaveData;
const struct InstrumentPCM instrumentPCM1415 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_767WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_768WaveData;
const struct InstrumentPCM instrumentPCM1416 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_768WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_769WaveData;
const struct InstrumentPCM instrumentPCM1417 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_769WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_770WaveData;
const struct InstrumentPCM instrumentPCM1418 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_770WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_771WaveData;
const struct InstrumentPCM instrumentPCM1419 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_771WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_772WaveData;
const struct InstrumentPCM instrumentPCM1420 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_772WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_773WaveData;
const struct InstrumentPCM instrumentPCM1421 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_773WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_774WaveData;
const struct InstrumentPCM instrumentPCM1422 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_774WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_775WaveData;
const struct InstrumentPCM instrumentPCM1423 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_775WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_776WaveData;
const struct InstrumentPCM instrumentPCM1424 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_776WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_777WaveData;
const struct InstrumentPCM instrumentPCM1425 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_777WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_778WaveData;
const struct InstrumentPCM instrumentPCM1426 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_778WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_779WaveData;
const struct InstrumentPCM instrumentPCM1427 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_779WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_780WaveData;
const struct InstrumentPCM instrumentPCM1428 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_780WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_781WaveData;
const struct InstrumentPCM instrumentPCM1429 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_781WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_782WaveData;
const struct InstrumentPCM instrumentPCM1430 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_782WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_783WaveData;
const struct InstrumentPCM instrumentPCM1431 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_783WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_784WaveData;
const struct InstrumentPCM instrumentPCM1432 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_784WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_785WaveData;
const struct InstrumentPCM instrumentPCM1433 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_785WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_786WaveData;
const struct InstrumentPCM instrumentPCM1434 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_786WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_787WaveData;
const struct InstrumentPCM instrumentPCM1435 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_787WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0018ea90,
};

extern const struct WaveData sfx_788WaveData;
const struct InstrumentPCM instrumentPCM1436 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_788WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x000b8000,
};

extern const struct WaveData sfx_789WaveData;
const struct InstrumentPCM instrumentPCM1437 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_789WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_790WaveData;
const struct InstrumentPCM instrumentPCM1438 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_790WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x0019a814,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00106a05,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_791WaveData;
const struct InstrumentPCM instrumentPCM1439 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_791WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0018ea90,
};

extern const struct WaveData sfx_449WaveData;
const struct InstrumentPCM instrumentPCM1440 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0xffe0,
    },
    /* Sample */ &sfx_449WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_792WaveData;
const struct InstrumentPCM instrumentPCM1441 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_792WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_451WaveData;
const struct InstrumentPCM instrumentPCM1442 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0xffe0,
    },
    /* Sample */ &sfx_451WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_793WaveData;
const struct InstrumentPCM instrumentPCM1443 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x30,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_793WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x0019a814,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00024c48,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x00082378,
};

extern const struct WaveData sfx_591WaveData;
const struct InstrumentPCM instrumentPCM1444 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_591WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_793WaveData;
const struct InstrumentPCM instrumentPCM1445 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x36,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_793WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x0019a814,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00024c48,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x00082378,
};

extern const struct WaveData sfx_793WaveData;
const struct InstrumentPCM instrumentPCM1446 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_793WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x0019a814,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00024c48,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x00082378,
};

extern const struct WaveData sfx_794WaveData;
const struct InstrumentPCM instrumentPCM1447 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_794WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00014867,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00034867,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x00082378,
};

extern const struct WaveData sfx_795WaveData;
const struct InstrumentPCM instrumentPCM1448 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_795WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x0019a814,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0013b26c,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x000f6a90,
};

extern const struct WaveData sfx_796WaveData;
const struct InstrumentPCM instrumentPCM1449 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x39,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_796WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_796WaveData;
const struct InstrumentPCM instrumentPCM1450 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3f,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_796WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_796WaveData;
const struct InstrumentPCM instrumentPCM1451 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x46,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_796WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_797WaveData;
const struct InstrumentPCM instrumentPCM1452 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_797WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_798WaveData;
const struct InstrumentPCM instrumentPCM1453 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_798WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_799WaveData;
const struct InstrumentPCM instrumentPCM1454 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_799WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_456WaveData;
const struct InstrumentPCM instrumentPCM1455 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_456WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_800WaveData;
const struct InstrumentPCM instrumentPCM1456 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_800WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x004cf83e,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x000690ce,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x00022aa4,
};

extern const struct WaveData sfx_801WaveData;
const struct InstrumentPCM instrumentPCM1457 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_801WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_600WaveData;
const struct InstrumentPCM instrumentPCM1458 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_600WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_588WaveData;
const struct InstrumentPCM instrumentPCM1459 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_588WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x000f6a90,
};

extern const struct WaveData sfx_589WaveData;
const struct InstrumentPCM instrumentPCM1460 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_589WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_802WaveData;
const struct InstrumentPCM instrumentPCM1461 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_802WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x000f6a90,
};

extern const struct WaveData sfx_803WaveData;
const struct InstrumentPCM instrumentPCM1462 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_803WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00267c1f,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00034867,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x00082378,
};

extern const struct WaveData sfx_188WaveData;
const struct InstrumentPCM instrumentPCM1463 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x20,
    },
    /* Sample */ &sfx_188WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_804WaveData;
const struct InstrumentPCM instrumentPCM1464 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_804WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00267c1f,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x000690ce,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x00082378,
};

extern const struct WaveData sfx_805WaveData;
const struct InstrumentPCM instrumentPCM1465 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_805WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x000f6a90,
};

extern const struct WaveData sfx_806WaveData;
const struct InstrumentPCM instrumentPCM1466 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_806WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x000f6a90,
};

extern const struct WaveData sfx_807WaveData;
const struct InstrumentPCM instrumentPCM1467 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_807WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x000f6a90,
};

extern const struct WaveData sfx_023WaveData;
const struct InstrumentPCM instrumentPCM1468 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_023WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_808WaveData;
const struct InstrumentPCM instrumentPCM1469 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_808WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0018ea90,
};

extern const struct WaveData sfx_809WaveData;
const struct InstrumentPCM instrumentPCM1470 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_809WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x0066a052,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00034867,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0018ea90,
};

extern const struct WaveData sfx_810WaveData;
const struct InstrumentPCM instrumentPCM1471 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_810WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x0019a814,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0004ec9b,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x00082378,
};

extern const struct WaveData sfx_811WaveData;
const struct InstrumentPCM instrumentPCM1472 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_811WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x0019a814,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0004ec9b,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x00082378,
};

extern const struct WaveData sfx_812WaveData;
const struct InstrumentPCM instrumentPCM1473 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_812WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00133e0f,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x000690ce,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x00082378,
};

extern const struct WaveData sfx_813WaveData;
const struct InstrumentPCM instrumentPCM1474 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_813WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x0019a814,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0004ec9b,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x00082378,
};

extern const struct WaveData sfx_814WaveData;
const struct InstrumentPCM instrumentPCM1475 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x37,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_814WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x00031548,
};

extern const struct WaveData sfx_123WaveData;
const struct InstrumentPCM instrumentPCM1476 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_123WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x00055552,
};

extern const struct WaveData sfx_815WaveData;
const struct InstrumentPCM instrumentPCM1477 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_815WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x00055552,
};

extern const struct WaveData sfx_816WaveData;
const struct InstrumentPCM instrumentPCM1478 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_816WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x00055552,
};

extern const struct WaveData sfx_817WaveData;
const struct InstrumentPCM instrumentPCM1479 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_817WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x00055552,
};

extern const struct WaveData sfx_818WaveData;
const struct InstrumentPCM instrumentPCM1480 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_818WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_819WaveData;
const struct InstrumentPCM instrumentPCM1481 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_819WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_820WaveData;
const struct InstrumentPCM instrumentPCM1482 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_820WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_821WaveData;
const struct InstrumentPCM instrumentPCM1483 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_821WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_822WaveData;
const struct InstrumentPCM instrumentPCM1484 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_822WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_823WaveData;
const struct InstrumentPCM instrumentPCM1485 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_823WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x0066a052,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_824WaveData;
const struct InstrumentPCM instrumentPCM1486 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_824WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0018ea90,
};

extern const struct WaveData sfx_034WaveData;
const struct InstrumentPCM instrumentPCM1487 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_034WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_600WaveData;
const struct InstrumentPCM instrumentPCM1488 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_600WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x00013fff,
};

extern const struct WaveData sfx_825WaveData;
const struct InstrumentPCM instrumentPCM1489 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_825WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_030WaveData;
const struct InstrumentPCM instrumentPCM1490 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_030WaveData,
    /* unk8   */ 0x00000000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00307c1f,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_826WaveData;
const struct InstrumentPCM instrumentPCM1491 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_826WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_827WaveData;
const struct InstrumentPCM instrumentPCM1492 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_827WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_828WaveData;
const struct InstrumentPCM instrumentPCM1493 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_828WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_829WaveData;
const struct InstrumentPCM instrumentPCM1494 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_829WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_830WaveData;
const struct InstrumentPCM instrumentPCM1495 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_830WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_831WaveData;
const struct InstrumentPCM instrumentPCM1496 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_831WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_832WaveData;
const struct InstrumentPCM instrumentPCM1497 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_832WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_833WaveData;
const struct InstrumentPCM instrumentPCM1498 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_833WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_834WaveData;
const struct InstrumentPCM instrumentPCM1499 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_834WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x000f6a90,
};

extern const struct WaveData sfx_835WaveData;
const struct InstrumentPCM instrumentPCM1500 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_835WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

const struct InstrumentPSG instrumentPSG1501 = {
    {
        /* Type */ INSTRUMENT_PSG,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Wave Channel */ NULL,
    /* unk8         */ 0x007f0000,
    /* unkC         */ 0x007e0000,
    /* unk10        */ 0x007f0000,
    /* unk14        */ 0x007f0000,
    /* unk18        */ 0x00000000,
    /* unk1C        */ 0x007f0000,
    /* Channel      */ PSG_NOISE_CHANNEL,
    /* unk21        */ 0x0,
    /* unk22        */ 0x0,
};

extern const struct WaveData sfx_824WaveData;
const struct InstrumentPCM instrumentPCM1502 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_824WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_836WaveData;
const struct InstrumentPCM instrumentPCM1503 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_836WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_791WaveData;
const struct InstrumentPCM instrumentPCM1504 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_791WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0018ea90,
};

extern const struct WaveData sfx_837WaveData;
const struct InstrumentPCM instrumentPCM1505 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_837WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0018ea90,
};

extern const struct WaveData sfx_838WaveData;
const struct InstrumentPCM instrumentPCM1506 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_838WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_839WaveData;
const struct InstrumentPCM instrumentPCM1507 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_839WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_824WaveData;
const struct InstrumentPCM instrumentPCM1508 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_824WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_509WaveData;
const struct InstrumentPCM instrumentPCM1509 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_509WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_840WaveData;
const struct InstrumentPCM instrumentPCM1510 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_840WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_832WaveData;
const struct InstrumentPCM instrumentPCM1511 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_832WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_818WaveData;
const struct InstrumentPCM instrumentPCM1512 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_818WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_841WaveData;
const struct InstrumentPCM instrumentPCM1513 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_841WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_823WaveData;
const struct InstrumentPCM instrumentPCM1514 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_823WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x0066a052,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_127WaveData;
const struct InstrumentPCM instrumentPCM1515 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_127WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_842WaveData;
const struct InstrumentPCM instrumentPCM1516 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_842WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_835WaveData;
const struct InstrumentPCM instrumentPCM1517 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_835WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

const struct InstrumentPSG instrumentPSG1518 = {
    {
        /* Type */ INSTRUMENT_PSG,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Wave Channel */ NULL,
    /* unk8         */ 0x007f0000,
    /* unkC         */ 0x007e0000,
    /* unk10        */ 0x007f0000,
    /* unk14        */ 0x007f0000,
    /* unk18        */ 0x00000000,
    /* unk1C        */ 0x007f0000,
    /* Channel      */ PSG_NOISE_CHANNEL,
    /* unk21        */ 0x0,
    /* unk22        */ 0x0,
};

extern const struct WaveData sfx_819WaveData;
const struct InstrumentPCM instrumentPCM1519 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_819WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_843WaveData;
const struct InstrumentPCM instrumentPCM1520 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_843WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_844WaveData;
const struct InstrumentPCM instrumentPCM1521 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_844WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_845WaveData;
const struct InstrumentPCM instrumentPCM1522 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_845WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_846WaveData;
const struct InstrumentPCM instrumentPCM1523 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_846WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_839WaveData;
const struct InstrumentPCM instrumentPCM1524 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_839WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_847WaveData;
const struct InstrumentPCM instrumentPCM1525 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_847WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_848WaveData;
const struct InstrumentPCM instrumentPCM1526 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_848WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_849WaveData;
const struct InstrumentPCM instrumentPCM1527 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_849WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_429WaveData;
const struct InstrumentPCM instrumentPCM1528 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_429WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_820WaveData;
const struct InstrumentPCM instrumentPCM1529 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_820WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_850WaveData;
const struct InstrumentPCM instrumentPCM1530 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_850WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_851WaveData;
const struct InstrumentPCM instrumentPCM1531 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_851WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_852WaveData;
const struct InstrumentPCM instrumentPCM1532 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_852WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_853WaveData;
const struct InstrumentPCM instrumentPCM1533 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_853WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_854WaveData;
const struct InstrumentPCM instrumentPCM1534 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_854WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_004WaveData;
const struct InstrumentPCM instrumentPCM1535 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_004WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_428WaveData;
const struct InstrumentPCM instrumentPCM1536 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_428WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00015029,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_214WaveData;
const struct InstrumentPCM instrumentPCM1537 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_214WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_122WaveData;
const struct InstrumentPCM instrumentPCM1538 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_122WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_855WaveData;
const struct InstrumentPCM instrumentPCM1539 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_855WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_818WaveData;
const struct InstrumentPCM instrumentPCM1540 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_818WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_819WaveData;
const struct InstrumentPCM instrumentPCM1541 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_819WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_835WaveData;
const struct InstrumentPCM instrumentPCM1542 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_835WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_856WaveData;
const struct InstrumentPCM instrumentPCM1543 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_856WaveData,
    /* unk8   */ 0x00000000,
    /* unkC   */ 0x0073745d,
    /* unk10  */ 0x005c1f07,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_857WaveData;
const struct InstrumentPCM instrumentPCM1544 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_857WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

const struct InstrumentPSG instrumentPSG1545 = {
    {
        /* Type */ INSTRUMENT_PSG,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Wave Channel */ NULL,
    /* unk8         */ 0x007f0000,
    /* unkC         */ 0x007e0000,
    /* unk10        */ 0x007f0000,
    /* unk14        */ 0x007f0000,
    /* unk18        */ 0x00000000,
    /* unk1C        */ 0x000418c6,
    /* Channel      */ PSG_NOISE_CHANNEL,
    /* unk21        */ 0x0,
    /* unk22        */ 0x8,
};

extern const struct WaveData sfx_820WaveData;
const struct InstrumentPCM instrumentPCM1546 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_820WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x000f6a90,
};

extern const struct WaveData sfx_834WaveData;
const struct InstrumentPCM instrumentPCM1547 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_834WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x000f6a90,
};

extern const struct WaveData sfx_858WaveData;
const struct InstrumentPCM instrumentPCM1548 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_858WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_859WaveData;
const struct InstrumentPCM instrumentPCM1549 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_859WaveData,
    /* unk8   */ 0x00000000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x005c1f07,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_086WaveData;
const struct InstrumentPCM instrumentPCM1550 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_086WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_197WaveData;
const struct InstrumentPCM instrumentPCM1551 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_197WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_860WaveData;
const struct InstrumentPCM instrumentPCM1552 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_860WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00335029,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x001a433b,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x00031548,
};

extern const struct WaveData sfx_860WaveData;
const struct InstrumentPCM instrumentPCM1553 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_860WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x004cf83e,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x000690ce,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0018ea90,
};

extern const struct WaveData sfx_432WaveData;
const struct InstrumentPCM instrumentPCM1554 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_432WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

const struct InstrumentSubRhythm instrumentSubRhythm1555 = {
    {
        /* Type */ INSTRUMENT_SUB_RHYTHM,
        /* unk1 */ 0x24,
        /* unk2 */ 0x0,
    },
    /* Sub-bank */ (void *)0x08a9a2e8, // POINTER
};

extern const struct WaveData sfx_832WaveData;
const struct InstrumentPCM instrumentPCM1556 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_832WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_222WaveData;
const struct InstrumentPCM instrumentPCM1557 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_222WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_829WaveData;
const struct InstrumentPCM instrumentPCM1558 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_829WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

const struct InstrumentPSG instrumentPSG1559 = {
    {
        /* Type */ INSTRUMENT_PSG,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Wave Channel */ NULL,
    /* unk8         */ 0x007f0000,
    /* unkC         */ 0x007e0000,
    /* unk10        */ 0x007f0000,
    /* unk14        */ 0x007f0000,
    /* unk18        */ 0x00000000,
    /* unk1C        */ 0x007f0000,
    /* Channel      */ PSG_PULSE_CHANNEL_1,
    /* unk21        */ 0x0,
    /* unk22        */ 0x4,
};

extern const struct WaveData sfx_861WaveData;
const struct InstrumentPCM instrumentPCM1560 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_861WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

const struct InstrumentPSG instrumentPSG1561 = {
    {
        /* Type */ INSTRUMENT_PSG,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Wave Channel */ NULL,
    /* unk8         */ 0x007f0000,
    /* unkC         */ 0x007e0000,
    /* unk10        */ 0x007f0000,
    /* unk14        */ 0x007f0000,
    /* unk18        */ 0x00000000,
    /* unk1C        */ 0x001fc000,
    /* Channel      */ PSG_PULSE_CHANNEL_1,
    /* unk21        */ 0x0,
    /* unk22        */ 0x4,
};

extern const struct WaveData sfx_824WaveData;
const struct InstrumentPCM instrumentPCM1562 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_824WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_862WaveData;
const struct InstrumentPCM instrumentPCM1563 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_862WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_279WaveData;
const struct InstrumentPCM instrumentPCM1564 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_279WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00000000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0004ec9b,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_863WaveData;
const struct InstrumentPCM instrumentPCM1565 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_863WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_864WaveData;
const struct InstrumentPCM instrumentPCM1566 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_864WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_834WaveData;
const struct InstrumentPCM instrumentPCM1567 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_834WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x000f6a90,
};

extern const struct WaveData sfx_836WaveData;
const struct InstrumentPCM instrumentPCM1568 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_836WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_829WaveData;
const struct InstrumentPCM instrumentPCM1569 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_829WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_865WaveData;
const struct InstrumentPCM instrumentPCM1570 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_865WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_792WaveData;
const struct InstrumentPCM instrumentPCM1571 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_792WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_866WaveData;
const struct InstrumentPCM instrumentPCM1572 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_866WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0018ea90,
};

extern const struct WaveData sfx_865WaveData;
const struct InstrumentPCM instrumentPCM1573 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_865WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_867WaveData;
const struct InstrumentPCM instrumentPCM1574 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_867WaveData,
    /* unk8   */ 0x00000000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x001364d9,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_434WaveData;
const struct InstrumentPCM instrumentPCM1575 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_434WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0016554d,
};

extern const struct WaveData sfx_346WaveData;
const struct InstrumentPCM instrumentPCM1576 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_346WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0016554d,
};

const struct InstrumentSubRhythm instrumentSubRhythm1577 = {
    {
        /* Type */ INSTRUMENT_SUB_RHYTHM,
        /* unk1 */ 0x24,
        /* unk2 */ 0x0,
    },
    /* Sub-bank */ (void *)0x08a9940c, // POINTER
};

const struct InstrumentPSG instrumentPSG1578 = {
    {
        /* Type */ INSTRUMENT_PSG,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Wave Channel */ NULL,
    /* unk8         */ 0x007f0000,
    /* unkC         */ 0x007e0000,
    /* unk10        */ 0x007f0000,
    /* unk14        */ 0x007f0000,
    /* unk18        */ 0x00000000,
    /* unk1C        */ 0x007f0000,
    /* Channel      */ PSG_PULSE_CHANNEL_1,
    /* unk21        */ 0x0,
    /* unk22        */ 0x4,
};

const struct InstrumentSubRhythm instrumentSubRhythm1579 = {
    {
        /* Type */ INSTRUMENT_SUB_RHYTHM,
        /* unk1 */ 0x24,
        /* unk2 */ 0x0,
    },
    /* Sub-bank */ (void *)0x08a9a240, // POINTER
};

extern const struct WaveData sfx_868WaveData;
const struct InstrumentPCM instrumentPCM1580 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_868WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_869WaveData;
const struct InstrumentPCM instrumentPCM1581 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_869WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_431WaveData;
const struct InstrumentPCM instrumentPCM1582 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_431WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_030WaveData;
const struct InstrumentPCM instrumentPCM1583 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_030WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_870WaveData;
const struct InstrumentPCM instrumentPCM1584 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_870WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_792WaveData;
const struct InstrumentPCM instrumentPCM1585 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_792WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_865WaveData;
const struct InstrumentPCM instrumentPCM1586 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_865WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_871WaveData;
const struct InstrumentPCM instrumentPCM1587 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_871WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_872WaveData;
const struct InstrumentPCM instrumentPCM1588 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_872WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_873WaveData;
const struct InstrumentPCM instrumentPCM1589 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_873WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_856WaveData;
const struct InstrumentPCM instrumentPCM1590 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_856WaveData,
    /* unk8   */ 0x00000000,
    /* unkC   */ 0x0073745d,
    /* unk10  */ 0x005c1f07,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_874WaveData;
const struct InstrumentPCM instrumentPCM1591 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_874WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

const struct InstrumentPSG instrumentPSG1592 = {
    {
        /* Type */ INSTRUMENT_PSG,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Wave Channel */ NULL,
    /* unk8         */ 0x007f0000,
    /* unkC         */ 0x007e0000,
    /* unk10        */ 0x007f0000,
    /* unk14        */ 0x007f0000,
    /* unk18        */ 0x00000000,
    /* unk1C        */ 0x001fc000,
    /* Channel      */ PSG_PULSE_CHANNEL_1,
    /* unk21        */ 0x0,
    /* unk22        */ 0x4,
};

extern const struct WaveData sfx_875WaveData;
const struct InstrumentPCM instrumentPCM1593 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_875WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_876WaveData;
const struct InstrumentPCM instrumentPCM1594 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_876WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_877WaveData;
const struct InstrumentPCM instrumentPCM1595 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_877WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_791WaveData;
const struct InstrumentPCM instrumentPCM1596 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_791WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0018ea90,
};

extern const struct WaveData sfx_878WaveData;
const struct InstrumentPCM instrumentPCM1597 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_878WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_879WaveData;
const struct InstrumentPCM instrumentPCM1598 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_879WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_791WaveData;
const struct InstrumentPCM instrumentPCM1599 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_791WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0018ea90,
};

const struct InstrumentSubRhythm instrumentSubRhythm1600 = {
    {
        /* Type */ INSTRUMENT_SUB_RHYTHM,
        /* unk1 */ 0x24,
        /* unk2 */ 0x0,
    },
    /* Sub-bank */ (void *)0x08a9a2e8, // POINTER
};

extern const struct WaveData sfx_880WaveData;
const struct InstrumentPCM instrumentPCM1601 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_880WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_881WaveData;
const struct InstrumentPCM instrumentPCM1602 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_881WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_863WaveData;
const struct InstrumentPCM instrumentPCM1603 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_863WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_030WaveData;
const struct InstrumentPCM instrumentPCM1604 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_030WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_430WaveData;
const struct InstrumentPCM instrumentPCM1605 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_430WaveData,
    /* unk8   */ 0x00000000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x005745d1,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_842WaveData;
const struct InstrumentPCM instrumentPCM1606 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_842WaveData,
    /* unk8   */ 0x00000000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x003a2e8b,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_882WaveData;
const struct InstrumentPCM instrumentPCM1607 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_882WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_883WaveData;
const struct InstrumentPCM instrumentPCM1608 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_883WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_884WaveData;
const struct InstrumentPCM instrumentPCM1609 = {
    {
        /* Type */ INSTRUMENT_PCM_FIXED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_884WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_214WaveData;
const struct InstrumentPCM instrumentPCM1610 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_214WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_122WaveData;
const struct InstrumentPCM instrumentPCM1611 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_122WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_885WaveData;
const struct InstrumentPCM instrumentPCM1612 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_885WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_886WaveData;
const struct InstrumentPCM instrumentPCM1613 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_886WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_823WaveData;
const struct InstrumentPCM instrumentPCM1614 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_823WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x0066a052,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_887WaveData;
const struct InstrumentPCM instrumentPCM1615 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_887WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_885WaveData;
const struct InstrumentPCM instrumentPCM1616 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_885WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_198WaveData;
const struct InstrumentPCM instrumentPCM1617 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_198WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

const struct InstrumentSubRhythm instrumentSubRhythm1618 = {
    {
        /* Type */ INSTRUMENT_SUB_RHYTHM,
        /* unk1 */ 0x24,
        /* unk2 */ 0x0,
    },
    /* Sub-bank */ (void *)0x08a996e4, // POINTER
};

extern const struct WaveData sfx_197WaveData;
const struct InstrumentPCM instrumentPCM1619 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_197WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_030WaveData;
const struct InstrumentPCM instrumentPCM1620 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_030WaveData,
    /* unk8   */ 0x00000000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x005745d1,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_888WaveData;
const struct InstrumentPCM instrumentPCM1621 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_888WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

const struct InstrumentPSG instrumentPSG1622 = {
    {
        /* Type */ INSTRUMENT_PSG,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Wave Channel */ NULL,
    /* unk8         */ 0x0073745d,
    /* unkC         */ 0x007e0000,
    /* unk10        */ 0x001fc000,
    /* unk14        */ 0x007f0000,
    /* unk18        */ 0x00000000,
    /* unk1C        */ 0x007f0000,
    /* Channel      */ PSG_PULSE_CHANNEL_1,
    /* unk21        */ 0x0,
    /* unk22        */ 0x4,
};

const struct InstrumentPSG instrumentPSG1623 = {
    {
        /* Type */ INSTRUMENT_PSG,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Wave Channel */ NULL,
    /* unk8         */ 0x0073745d,
    /* unkC         */ 0x007e0000,
    /* unk10        */ 0x001fc000,
    /* unk14        */ 0x007f0000,
    /* unk18        */ 0x00000000,
    /* unk1C        */ 0x007f0000,
    /* Channel      */ PSG_PULSE_CHANNEL_2,
    /* unk21        */ 0x0,
    /* unk22        */ 0x4,
};

extern const struct WaveData sfx_086WaveData;
const struct InstrumentPCM instrumentPCM1624 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_086WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_796WaveData;
const struct InstrumentPCM instrumentPCM1625 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x46,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_796WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_889WaveData;
const struct InstrumentPCM instrumentPCM1626 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_889WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0016554d,
};

extern const struct WaveData sfx_433WaveData;
const struct InstrumentPCM instrumentPCM1627 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_433WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_819WaveData;
const struct InstrumentPCM instrumentPCM1628 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_819WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_890WaveData;
const struct InstrumentPCM instrumentPCM1629 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_890WaveData,
    /* unk8   */ 0x00000000,
    /* unkC   */ 0x0073745d,
    /* unk10  */ 0x0043e0f8,
    /* unk14  */ 0x001f2fd6,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0018ea90,
};

extern const struct WaveData sfx_834WaveData;
const struct InstrumentPCM instrumentPCM1630 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_834WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x000f6a90,
};

extern const struct WaveData sfx_891WaveData;
const struct InstrumentPCM instrumentPCM1631 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_891WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_859WaveData;
const struct InstrumentPCM instrumentPCM1632 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_859WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_892WaveData;
const struct InstrumentPCM instrumentPCM1633 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_892WaveData,
    /* unk8   */ 0x00000000,
    /* unkC   */ 0x00402433,
    /* unk10  */ 0x003a2e8b,
    /* unk14  */ 0x001d8ba2,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x00082378,
};

extern const struct WaveData sfx_874WaveData;
const struct InstrumentPCM instrumentPCM1634 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_874WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

const struct InstrumentPSG instrumentPSG1635 = {
    {
        /* Type */ INSTRUMENT_PSG,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Wave Channel */ NULL,
    /* unk8         */ 0x007f0000,
    /* unkC         */ 0x007e0000,
    /* unk10        */ 0x007f0000,
    /* unk14        */ 0x007f0000,
    /* unk18        */ 0x00000000,
    /* unk1C        */ 0x00077878,
    /* Channel      */ PSG_PULSE_CHANNEL_1,
    /* unk21        */ 0x0,
    /* unk22        */ 0x4,
};

const struct InstrumentPSG instrumentPSG1636 = {
    {
        /* Type */ INSTRUMENT_PSG,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Wave Channel */ NULL,
    /* unk8         */ 0x007f0000,
    /* unkC         */ 0x007e0000,
    /* unk10        */ 0x007f0000,
    /* unk14        */ 0x007f0000,
    /* unk18        */ 0x00000000,
    /* unk1C        */ 0x00077878,
    /* Channel      */ PSG_PULSE_CHANNEL_2,
    /* unk21        */ 0x0,
    /* unk22        */ 0x4,
};

const struct InstrumentPSG instrumentPSG1637 = {
    {
        /* Type */ INSTRUMENT_PSG,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Wave Channel */ NULL,
    /* unk8         */ 0x007f0000,
    /* unkC         */ 0x007e0000,
    /* unk10        */ 0x007f0000,
    /* unk14        */ 0x007f0000,
    /* unk18        */ 0x00000000,
    /* unk1C        */ 0x007f0000,
    /* Channel      */ PSG_PULSE_CHANNEL_1,
    /* unk21        */ 0x90,
    /* unk22        */ 0x4,
};

extern const struct WaveData sfx_892WaveData;
const struct InstrumentPCM instrumentPCM1638 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_892WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x0066a052,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x001d8ba2,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0006aa9f,
};

extern const struct WaveData sfx_893WaveData;
const struct InstrumentPCM instrumentPCM1639 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_893WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_864WaveData;
const struct InstrumentPCM instrumentPCM1640 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_864WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_790WaveData;
const struct InstrumentPCM instrumentPCM1641 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_790WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x0019a814,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00106a05,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0013e350,
};

extern const struct WaveData sfx_894WaveData;
const struct InstrumentPCM instrumentPCM1642 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_894WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_895WaveData;
const struct InstrumentPCM instrumentPCM1643 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_895WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

const struct InstrumentPSG instrumentPSG1644 = {
    {
        /* Type */ INSTRUMENT_PSG,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Wave Channel */ NULL,
    /* unk8         */ 0x007f0000,
    /* unkC         */ 0x007e0000,
    /* unk10        */ 0x007f0000,
    /* unk14        */ 0x007f0000,
    /* unk18        */ 0x00000000,
    /* unk1C        */ 0x007f0000,
    /* Channel      */ PSG_PULSE_CHANNEL_1,
    /* unk21        */ 0x0,
    /* unk22        */ 0x4,
};

extern const struct WaveData sfx_896WaveData;
const struct InstrumentPCM instrumentPCM1645 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_896WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_897WaveData;
const struct InstrumentPCM instrumentPCM1646 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_897WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_898WaveData;
const struct InstrumentPCM instrumentPCM1647 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_898WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_899WaveData;
const struct InstrumentPCM instrumentPCM1648 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_899WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_900WaveData;
const struct InstrumentPCM instrumentPCM1649 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_900WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

const struct InstrumentPSG instrumentPSG1650 = {
    {
        /* Type */ INSTRUMENT_PSG,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Wave Channel */ NULL,
    /* unk8         */ 0x007f0000,
    /* unkC         */ 0x007e0000,
    /* unk10        */ 0x007f0000,
    /* unk14        */ 0x007f0000,
    /* unk18        */ 0x00000000,
    /* unk1C        */ 0x007f0000,
    /* Channel      */ PSG_PULSE_CHANNEL_1,
    /* unk21        */ 0x0,
    /* unk22        */ 0x4,
};

const struct InstrumentPSG instrumentPSG1651 = {
    {
        /* Type */ INSTRUMENT_PSG,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Wave Channel */ NULL,
    /* unk8         */ 0x007f0000,
    /* unkC         */ 0x007e0000,
    /* unk10        */ 0x007f0000,
    /* unk14        */ 0x007f0000,
    /* unk18        */ 0x00000000,
    /* unk1C        */ 0x007f0000,
    /* Channel      */ PSG_PULSE_CHANNEL_2,
    /* unk21        */ 0x0,
    /* unk22        */ 0x4,
};

const struct InstrumentPSG instrumentPSG1652 = {
    {
        /* Type */ INSTRUMENT_PSG,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Wave Channel */ NULL,
    /* unk8         */ 0x007f0000,
    /* unkC         */ 0x007e0000,
    /* unk10        */ 0x007f0000,
    /* unk14        */ 0x007f0000,
    /* unk18        */ 0x00000000,
    /* unk1C        */ 0x007f0000,
    /* Channel      */ PSG_PULSE_CHANNEL_1,
    /* unk21        */ 0xd0,
    /* unk22        */ 0x4,
};

const struct InstrumentPSG instrumentPSG1653 = {
    {
        /* Type */ INSTRUMENT_PSG,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Wave Channel */ NULL,
    /* unk8         */ 0x007f0000,
    /* unkC         */ 0x007e0000,
    /* unk10        */ 0x007f0000,
    /* unk14        */ 0x007f0000,
    /* unk18        */ 0x00000000,
    /* unk1C        */ 0x007f0000,
    /* Channel      */ PSG_PULSE_CHANNEL_1,
    /* unk21        */ 0x58,
    /* unk22        */ 0x4,
};

const struct InstrumentPSG instrumentPSG1654 = {
    {
        /* Type */ INSTRUMENT_PSG,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Wave Channel */ NULL,
    /* unk8         */ 0x0066a052,
    /* unkC         */ 0x007e0000,
    /* unk10        */ 0x00122492,
    /* unk14        */ 0x007f0000,
    /* unk18        */ 0x00000000,
    /* unk1C        */ 0x003f8000,
    /* Channel      */ PSG_PULSE_CHANNEL_1,
    /* unk21        */ 0x78,
    /* unk22        */ 0x4,
};

extern const struct WaveData sfx_439WaveData;
const struct InstrumentPCM instrumentPCM1655 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_439WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_901WaveData;
const struct InstrumentPCM instrumentPCM1656 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_901WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0011952a,
};

extern const struct WaveData sfx_901WaveData;
const struct InstrumentPCM instrumentPCM1657 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_901WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x00082378,
};

extern const struct WaveData sfx_902WaveData;
const struct InstrumentPCM instrumentPCM1658 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_902WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x000f6a90,
};

const struct InstrumentSubRhythm instrumentSubRhythm1659 = {
    {
        /* Type */ INSTRUMENT_SUB_RHYTHM,
        /* unk1 */ 0x18,
        /* unk2 */ 0x0,
    },
    /* Sub-bank */ (void *)0x08a9a240, // POINTER
};

extern const struct WaveData sfx_903WaveData;
const struct InstrumentPCM instrumentPCM1660 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_903WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00402433,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0000540a,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x00082378,
};

extern const struct WaveData sfx_904WaveData;
const struct InstrumentPCM instrumentPCM1661 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_904WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_905WaveData;
const struct InstrumentPCM instrumentPCM1662 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_905WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_906WaveData;
const struct InstrumentPCM instrumentPCM1663 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_906WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_907WaveData;
const struct InstrumentPCM instrumentPCM1664 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_907WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_908WaveData;
const struct InstrumentPCM instrumentPCM1665 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_908WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0001638c,
};

extern const struct WaveData sfx_909WaveData;
const struct InstrumentPCM instrumentPCM1666 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_909WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_910WaveData;
const struct InstrumentPCM instrumentPCM1667 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_910WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_911WaveData;
const struct InstrumentPCM instrumentPCM1668 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_911WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_912WaveData;
const struct InstrumentPCM instrumentPCM1669 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_912WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_913WaveData;
const struct InstrumentPCM instrumentPCM1670 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_913WaveData,
    /* unk8   */ 0x00000000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x001364d9,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0001638c,
};

extern const struct WaveData sfx_914WaveData;
const struct InstrumentPCM instrumentPCM1671 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_914WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_915WaveData;
const struct InstrumentPCM instrumentPCM1672 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_915WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_916WaveData;
const struct InstrumentPCM instrumentPCM1673 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_916WaveData,
    /* unk8   */ 0x00000000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x001364d9,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0000c000,
};

extern const struct WaveData sfx_917WaveData;
const struct InstrumentPCM instrumentPCM1674 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_917WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_918WaveData;
const struct InstrumentPCM instrumentPCM1675 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_918WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_919WaveData;
const struct InstrumentPCM instrumentPCM1676 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_919WaveData,
    /* unk8   */ 0x00000000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x001364d9,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0001638c,
};

extern const struct WaveData sfx_919WaveData;
const struct InstrumentPCM instrumentPCM1677 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_919WaveData,
    /* unk8   */ 0x00000000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x004d9364,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_920WaveData;
const struct InstrumentPCM instrumentPCM1678 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_920WaveData,
    /* unk8   */ 0x00000000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x001364d9,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x00031548,
};

extern const struct WaveData sfx_921WaveData;
const struct InstrumentPCM instrumentPCM1679 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_921WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_922WaveData;
const struct InstrumentPCM instrumentPCM1680 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_922WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_923WaveData;
const struct InstrumentPCM instrumentPCM1681 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_923WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_859WaveData;
const struct InstrumentPCM instrumentPCM1682 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_859WaveData,
    /* unk8   */ 0x00000000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x004d9364,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_924WaveData;
const struct InstrumentPCM instrumentPCM1683 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_924WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_925WaveData;
const struct InstrumentPCM instrumentPCM1684 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_925WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_926WaveData;
const struct InstrumentPCM instrumentPCM1685 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_926WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_927WaveData;
const struct InstrumentPCM instrumentPCM1686 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_927WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_928WaveData;
const struct InstrumentPCM instrumentPCM1687 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_928WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_929WaveData;
const struct InstrumentPCM instrumentPCM1688 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x38,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_929WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_930WaveData;
const struct InstrumentPCM instrumentPCM1689 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_930WaveData,
    /* unk8   */ 0x00000000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x001364d9,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x00082378,
};

extern const struct WaveData sfx_931WaveData;
const struct InstrumentPCM instrumentPCM1690 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_931WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x0018ea90,
};

extern const struct WaveData sfx_844WaveData;
const struct InstrumentPCM instrumentPCM1691 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_844WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_868WaveData;
const struct InstrumentPCM instrumentPCM1692 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_868WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_869WaveData;
const struct InstrumentPCM instrumentPCM1693 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_869WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_431WaveData;
const struct InstrumentPCM instrumentPCM1694 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_431WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_880WaveData;
const struct InstrumentPCM instrumentPCM1695 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_880WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_883WaveData;
const struct InstrumentPCM instrumentPCM1696 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_883WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_884WaveData;
const struct InstrumentPCM instrumentPCM1697 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_884WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_887WaveData;
const struct InstrumentPCM instrumentPCM1698 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_887WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_825WaveData;
const struct InstrumentPCM instrumentPCM1699 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_825WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_827WaveData;
const struct InstrumentPCM instrumentPCM1700 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_827WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_811WaveData;
const struct InstrumentPCM instrumentPCM1701 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_811WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x0019a814,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0004ec9b,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x00082378,
};

extern const struct WaveData sfx_812WaveData;
const struct InstrumentPCM instrumentPCM1702 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_812WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x00133e0f,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x000690ce,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x00082378,
};

extern const struct WaveData sfx_813WaveData;
const struct InstrumentPCM instrumentPCM1703 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_813WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x0019a814,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x0004ec9b,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x00082378,
};

extern const struct WaveData sfx_834WaveData;
const struct InstrumentPCM instrumentPCM1704 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_834WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x000f6a90,
};

extern const struct WaveData sfx_461WaveData;
const struct InstrumentPCM instrumentPCM1705 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_461WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_463WaveData;
const struct InstrumentPCM instrumentPCM1706 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_463WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_087WaveData;
const struct InstrumentPCM instrumentPCM1707 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_087WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x000b8000,
};

extern const struct WaveData sfx_468WaveData;
const struct InstrumentPCM instrumentPCM1708 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_468WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001e7fba,
};

extern const struct WaveData sfx_898WaveData;
const struct InstrumentPCM instrumentPCM1709 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_898WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_899WaveData;
const struct InstrumentPCM instrumentPCM1710 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_899WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_932WaveData;
const struct InstrumentPCM instrumentPCM1711 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_932WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_933WaveData;
const struct InstrumentPCM instrumentPCM1712 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_933WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_934WaveData;
const struct InstrumentPCM instrumentPCM1713 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_934WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_935WaveData;
const struct InstrumentPCM instrumentPCM1714 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_935WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_936WaveData;
const struct InstrumentPCM instrumentPCM1715 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_936WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_937WaveData;
const struct InstrumentPCM instrumentPCM1716 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_937WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_938WaveData;
const struct InstrumentPCM instrumentPCM1717 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_938WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_939WaveData;
const struct InstrumentPCM instrumentPCM1718 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_939WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_940WaveData;
const struct InstrumentPCM instrumentPCM1719 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_940WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_941WaveData;
const struct InstrumentPCM instrumentPCM1720 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_941WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_942WaveData;
const struct InstrumentPCM instrumentPCM1721 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_942WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_943WaveData;
const struct InstrumentPCM instrumentPCM1722 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_943WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_944WaveData;
const struct InstrumentPCM instrumentPCM1723 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_944WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_945WaveData;
const struct InstrumentPCM instrumentPCM1724 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_945WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_946WaveData;
const struct InstrumentPCM instrumentPCM1725 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_946WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_947WaveData;
const struct InstrumentPCM instrumentPCM1726 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_947WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_948WaveData;
const struct InstrumentPCM instrumentPCM1727 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_948WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_949WaveData;
const struct InstrumentPCM instrumentPCM1728 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_949WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_950WaveData;
const struct InstrumentPCM instrumentPCM1729 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_950WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_951WaveData;
const struct InstrumentPCM instrumentPCM1730 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_951WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_952WaveData;
const struct InstrumentPCM instrumentPCM1731 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_952WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_953WaveData;
const struct InstrumentPCM instrumentPCM1732 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_953WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_954WaveData;
const struct InstrumentPCM instrumentPCM1733 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_954WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_955WaveData;
const struct InstrumentPCM instrumentPCM1734 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_955WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_956WaveData;
const struct InstrumentPCM instrumentPCM1735 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_956WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_957WaveData;
const struct InstrumentPCM instrumentPCM1736 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_957WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_958WaveData;
const struct InstrumentPCM instrumentPCM1737 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_958WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_959WaveData;
const struct InstrumentPCM instrumentPCM1738 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_959WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_960WaveData;
const struct InstrumentPCM instrumentPCM1739 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_960WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_961WaveData;
const struct InstrumentPCM instrumentPCM1740 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_961WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

extern const struct WaveData sfx_962WaveData;
const struct InstrumentPCM instrumentPCM1741 = {
    {
        /* Type */ INSTRUMENT_PCM_ALIGNED,
        /* unk1 */ 0x3c,
        /* unk2 */ 0x7f,
    },
    /* Sample */ &sfx_962WaveData,
    /* unk8   */ 0x007f0000,
    /* unkC   */ 0x007f0000,
    /* unk10  */ 0x00600000,
    /* unk14  */ 0x00208000,
    /* unk18  */ 0x00000000,
    /* unk1C  */ 0x001fc000,
};

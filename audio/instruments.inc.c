#include "global.h"
#include "sound.h"

extern const struct SampleInfo sfx_001SampleInfo;
const struct InstrumentPCM instrumentPCMData1 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_001SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x59cc48,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x106a05,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_002SampleInfo;
const struct InstrumentPCM instrumentPCMData2 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_002SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x00fc1f,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x082378,
};

extern const struct SampleInfo sfx_002SampleInfo;
const struct InstrumentPCM instrumentPCMData3 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_002SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x402433,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x00540a,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x055552,
};

extern const struct SampleInfo sfx_003SampleInfo;
const struct InstrumentPCM instrumentPCMData4 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_003SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_004SampleInfo;
const struct InstrumentPCM instrumentPCMData5 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_004SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_005SampleInfo;
const struct InstrumentPCM instrumentPCMData6 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_005SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_006SampleInfo;
const struct InstrumentPCM instrumentPCMData7 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_006SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x218000,
};

extern const struct SampleInfo sfx_007SampleInfo;
const struct InstrumentPCM instrumentPCMData8 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_007SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_008SampleInfo;
const struct InstrumentPCM instrumentPCMData9 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_008SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_009SampleInfo;
const struct InstrumentPCM instrumentPCMData10 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_009SampleInfo,
    /* ADSR Init */ 0x000000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x4d9364,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x055552,
};

const struct InstrumentSubbankMultiKey instrumentSubbankMultiKeyData11 = {
    /* Type      */ INSTRUMENT_SUBBANK_MULTI_KEY,
    /* Total     */ 12,
    /* Splits    */ (u8 *) 0x08a86828, // POINTER
    /* Sub-Bank  */ (const union Instrument **) 0x08a98a0c, // POINTER
};

extern const struct SampleInfo sfx_010SampleInfo;
const struct InstrumentPCM instrumentPCMData12 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_010SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x66a052,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x106a05,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x18ea90,
};

extern const struct SampleInfo sfx_011SampleInfo;
const struct InstrumentPCM instrumentPCMData13 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_011SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x267c1f,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x09d936,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x0f6a90,
};

const struct InstrumentSubbankSingleKey instrumentSubbankSingleKeyData14 = {
    /* Type      */ INSTRUMENT_SUBBANK_SINGLE_KEY,
    /* Total     */ 36,
    /* Sub-Bank  */ (const union Instrument **) 0x08a998e4, // POINTER
};

const struct InstrumentSubbankSingleKey instrumentSubbankSingleKeyData15 = {
    /* Type      */ INSTRUMENT_SUBBANK_SINGLE_KEY,
    /* Total     */ 36,
    /* Sub-Bank  */ (const union Instrument **) 0x08a9957c, // POINTER
};

const struct InstrumentSubbankSingleKey instrumentSubbankSingleKeyData16 = {
    /* Type      */ INSTRUMENT_SUBBANK_SINGLE_KEY,
    /* Total     */ 36,
    /* Sub-Bank  */ (const union Instrument **) 0x08a9940c, // POINTER
};

extern const struct SampleInfo sfx_012SampleInfo;
const struct InstrumentPCM instrumentPCMData17 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_012SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x1a433b,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_013SampleInfo;
const struct InstrumentPCM instrumentPCMData18 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_013SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x1556a0,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_014SampleInfo;
const struct InstrumentPCM instrumentPCMData19 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_014SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x267c1f,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x01a433,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_015SampleInfo;
const struct InstrumentPCM instrumentPCMData20 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_015SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_016SampleInfo;
const struct InstrumentPCM instrumentPCMData21 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_016SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x267c1f,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x0d219d,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_017SampleInfo;
const struct InstrumentPCM instrumentPCMData22 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_017SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x01f83e,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x082378,
};

extern const struct SampleInfo sfx_018SampleInfo;
const struct InstrumentPCM instrumentPCMData23 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_018SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x015029,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_019SampleInfo;
const struct InstrumentPCM instrumentPCMData24 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_019SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_020SampleInfo;
const struct InstrumentPCM instrumentPCMData25 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_020SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_021SampleInfo;
const struct InstrumentPCM instrumentPCMData26 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_021SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_022SampleInfo;
const struct InstrumentPCM instrumentPCMData27 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_022SampleInfo,
    /* ADSR Init */ 0x000000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x3a2e8b,
    /* ADSR Dec  */ 0x034867,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_023SampleInfo;
const struct InstrumentPCM instrumentPCMData28 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_023SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_024SampleInfo;
const struct InstrumentPCM instrumentPCMData29 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_024SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_025SampleInfo;
const struct InstrumentPCM instrumentPCMData30 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_025SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_026SampleInfo;
const struct InstrumentPCM instrumentPCMData31 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_026SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x0b8000,
};

extern const struct SampleInfo sfx_015SampleInfo;
const struct InstrumentPCM instrumentPCMData32 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_015SampleInfo,
    /* ADSR Init */ 0x000000,
    /* ADSR Sus  */ 0x335029,
    /* ADSR Atk  */ 0x307c1f,
    /* ADSR Dec  */ 0x01a433,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_027SampleInfo;
const struct InstrumentPCM instrumentPCMData33 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_027SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x015029,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_028SampleInfo;
const struct InstrumentPCM instrumentPCMData34 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_028SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x00540a,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_029SampleInfo;
const struct InstrumentPCM instrumentPCMData35 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_029SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_030SampleInfo;
const struct InstrumentPCM instrumentPCMData36 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_030SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

const struct InstrumentPSG instrumentPSGData37 = {
    /* Type      */ INSTRUMENT_PSG,
    /* Key       */ 0x3C,
    /* Panning   */ 127,
    /* PSG Wave  */ NULL,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7e0000,
    /* ADSR Atk  */ 0x7f0000,
    /* ADSR Dec  */ 0x7f0000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x7f0000,
    /* PSG Chnl  */ PSG_PULSE_CHANNEL_1,
    /* PSG Len   */ 0,
    /* PSG Sweep */ 23,
    /* PSG Tone  */ PSG_TONE_DUTY_25,
    /* PSG Noise */ 0,
};

extern const struct SampleInfo sfx_031SampleInfo;
const struct InstrumentPCM instrumentPCMData38 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_031SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_032SampleInfo;
const struct InstrumentPCM instrumentPCMData39 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_032SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_033SampleInfo;
const struct InstrumentPCM instrumentPCMData40 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_033SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_034SampleInfo;
const struct InstrumentPCM instrumentPCMData41 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_034SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_035SampleInfo;
const struct InstrumentPCM instrumentPCMData42 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_035SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x0b8000,
};

extern const struct SampleInfo sfx_036SampleInfo;
const struct InstrumentPCM instrumentPCMData43 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_036SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x0b8000,
};

extern const struct SampleInfo sfx_037SampleInfo;
const struct InstrumentPCM instrumentPCMData44 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_037SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x0b8000,
};

extern const struct SampleInfo sfx_038SampleInfo;
const struct InstrumentPCM instrumentPCMData45 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_038SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x0b8000,
};

extern const struct SampleInfo sfx_039SampleInfo;
const struct InstrumentPCM instrumentPCMData46 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_039SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x218000,
};

extern const struct SampleInfo sfx_040SampleInfo;
const struct InstrumentPCM instrumentPCMData47 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_040SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x02a052,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_041SampleInfo;
const struct InstrumentPCM instrumentPCMData48 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_041SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x60364d,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x015029,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_015SampleInfo;
const struct InstrumentPCM instrumentPCMData49 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_015SampleInfo,
    /* ADSR Init */ 0x000000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x307c1f,
    /* ADSR Dec  */ 0x02a052,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_042SampleInfo;
const struct InstrumentPCM instrumentPCMData50 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_042SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_043SampleInfo;
const struct InstrumentPCM instrumentPCMData51 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_043SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

const struct InstrumentSubbankSingleKey instrumentSubbankSingleKeyData52 = {
    /* Type      */ INSTRUMENT_SUBBANK_SINGLE_KEY,
    /* Total     */ 36,
    /* Sub-Bank  */ (const union Instrument **) 0x08a9957c, // POINTER
};

const struct InstrumentSubbankSingleKey instrumentSubbankSingleKeyData53 = {
    /* Type      */ INSTRUMENT_SUBBANK_SINGLE_KEY,
    /* Total     */ 36,
    /* Sub-Bank  */ (const union Instrument **) 0x08a9940c, // POINTER
};

const struct InstrumentSubbankSingleKey instrumentSubbankSingleKeyData54 = {
    /* Type      */ INSTRUMENT_SUBBANK_SINGLE_KEY,
    /* Total     */ 36,
    /* Sub-Bank  */ (const union Instrument **) 0x08a996e4, // POINTER
};

const struct InstrumentSubbankSingleKey instrumentSubbankSingleKeyData55 = {
    /* Type      */ INSTRUMENT_SUBBANK_SINGLE_KEY,
    /* Total     */ 36,
    /* Sub-Bank  */ (const union Instrument **) 0x08a99d3c, // POINTER
};

extern const struct SampleInfo sfx_044SampleInfo;
const struct InstrumentPCM instrumentPCMData56 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_044SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_045SampleInfo;
const struct InstrumentPCM instrumentPCMData57 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_045SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_046SampleInfo;
const struct InstrumentPCM instrumentPCMData58 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_046SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_047SampleInfo;
const struct InstrumentPCM instrumentPCMData59 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_047SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_048SampleInfo;
const struct InstrumentPCM instrumentPCMData60 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_048SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_049SampleInfo;
const struct InstrumentPCM instrumentPCMData61 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_049SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_050SampleInfo;
const struct InstrumentPCM instrumentPCMData62 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_050SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_051SampleInfo;
const struct InstrumentPCM instrumentPCMData63 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_051SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_052SampleInfo;
const struct InstrumentPCM instrumentPCMData64 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_052SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_053SampleInfo;
const struct InstrumentPCM instrumentPCMData65 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_053SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_054SampleInfo;
const struct InstrumentPCM instrumentPCMData66 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_054SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_055SampleInfo;
const struct InstrumentPCM instrumentPCMData67 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_055SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_056SampleInfo;
const struct InstrumentPCM instrumentPCMData68 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_056SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_057SampleInfo;
const struct InstrumentPCM instrumentPCMData69 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_057SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

const struct InstrumentPSG instrumentPSGData70 = {
    /* Type      */ INSTRUMENT_PSG,
    /* Key       */ 0x3C,
    /* Panning   */ 127,
    /* PSG Wave  */ NULL,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7e0000,
    /* ADSR Atk  */ 0x7f0000,
    /* ADSR Dec  */ 0x7f0000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x7f0000,
    /* PSG Chnl  */ PSG_PULSE_CHANNEL_1,
    /* PSG Len   */ 0,
    /* PSG Sweep */ 0,
    /* PSG Tone  */ PSG_TONE_DUTY_12_5,
    /* PSG Noise */ 0,
};

extern const struct SampleInfo sfx_016SampleInfo;
const struct InstrumentPCM instrumentPCMData71 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_016SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x267c1f,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x0d219d,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_027SampleInfo;
const struct InstrumentPCM instrumentPCMData72 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_027SampleInfo,
    /* ADSR Init */ 0x000000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x3a2e8b,
    /* ADSR Dec  */ 0x00fc1f,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_015SampleInfo;
const struct InstrumentPCM instrumentPCMData73 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_015SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_058SampleInfo;
const struct InstrumentPCM instrumentPCMData74 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_058SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x034867,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_059SampleInfo;
const struct InstrumentPCM instrumentPCMData75 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_059SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_008SampleInfo;
const struct InstrumentPCM instrumentPCMData76 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_008SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_015SampleInfo;
const struct InstrumentPCM instrumentPCMData77 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_015SampleInfo,
    /* ADSR Init */ 0x000000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x09b26c,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_060SampleInfo;
const struct InstrumentPCM instrumentPCMData78 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_060SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x402433,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x01a433,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_061SampleInfo;
const struct InstrumentPCM instrumentPCMData79 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_061SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x01a433,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_062SampleInfo;
const struct InstrumentPCM instrumentPCMData80 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_062SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x267c1f,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x01a433,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

const struct InstrumentSubbankSingleKey instrumentSubbankSingleKeyData81 = {
    /* Type      */ INSTRUMENT_SUBBANK_SINGLE_KEY,
    /* Total     */ 36,
    /* Sub-Bank  */ (const union Instrument **) 0x08a99d3c, // POINTER
};

extern const struct SampleInfo sfx_028SampleInfo;
const struct InstrumentPCM instrumentPCMData82 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_028SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x402433,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x01a433,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_028SampleInfo;
const struct InstrumentPCM instrumentPCMData83 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_028SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x00540a,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_060SampleInfo;
const struct InstrumentPCM instrumentPCMData84 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_060SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x402433,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x01a433,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_043SampleInfo;
const struct InstrumentPCM instrumentPCMData85 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_043SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_027SampleInfo;
const struct InstrumentPCM instrumentPCMData86 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_027SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x015029,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_058SampleInfo;
const struct InstrumentPCM instrumentPCMData87 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_058SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x034867,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_008SampleInfo;
const struct InstrumentPCM instrumentPCMData88 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_008SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

const struct InstrumentPSG instrumentPSGData89 = {
    /* Type      */ INSTRUMENT_PSG,
    /* Key       */ 0x3C,
    /* Panning   */ 127,
    /* PSG Wave  */ NULL,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7e0000,
    /* ADSR Atk  */ 0x7f0000,
    /* ADSR Dec  */ 0x7f0000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x7f0000,
    /* PSG Chnl  */ PSG_PULSE_CHANNEL_1,
    /* PSG Len   */ 0,
    /* PSG Sweep */ 0,
    /* PSG Tone  */ PSG_TONE_DUTY_50,
    /* PSG Noise */ 0,
};

const struct InstrumentPSG instrumentPSGData90 = {
    /* Type      */ INSTRUMENT_PSG,
    /* Key       */ 0x3C,
    /* Panning   */ 127,
    /* PSG Wave  */ NULL,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7e0000,
    /* ADSR Atk  */ 0x7f0000,
    /* ADSR Dec  */ 0x7f0000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x7f0000,
    /* PSG Chnl  */ PSG_PULSE_CHANNEL_2,
    /* PSG Len   */ 0,
    /* PSG Sweep */ 0,
    /* PSG Tone  */ PSG_TONE_DUTY_50,
    /* PSG Noise */ 0,
};

extern const struct SampleInfo sfx_016SampleInfo;
const struct InstrumentPCM instrumentPCMData91 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_016SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x267c1f,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x0d219d,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_059SampleInfo;
const struct InstrumentPCM instrumentPCMData92 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_059SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

const struct InstrumentPSG instrumentPSGData93 = {
    /* Type      */ INSTRUMENT_PSG,
    /* Key       */ 0x3C,
    /* Panning   */ 127,
    /* PSG Wave  */ NULL,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7e0000,
    /* ADSR Atk  */ 0x7f0000,
    /* ADSR Dec  */ 0x7f0000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
    /* PSG Chnl  */ PSG_NOISE_CHANNEL,
    /* PSG Len   */ 0,
    /* PSG Sweep */ 0,
    /* PSG Tone  */ 0,
    /* PSG Noise */ PSG_NOISE_COUNTER_15,
};

extern const struct SampleInfo sfx_031SampleInfo;
const struct InstrumentPCM instrumentPCMData94 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_031SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_041SampleInfo;
const struct InstrumentPCM instrumentPCMData95 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_041SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x60364d,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x015029,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_063SampleInfo;
const struct InstrumentPCM instrumentPCMData96 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_063SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_064SampleInfo;
const struct InstrumentPCM instrumentPCMData97 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_064SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_065SampleInfo;
const struct InstrumentPCM instrumentPCMData98 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_065SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_066SampleInfo;
const struct InstrumentPCM instrumentPCMData99 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_066SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_067SampleInfo;
const struct InstrumentPCM instrumentPCMData100 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_067SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_068SampleInfo;
const struct InstrumentPCM instrumentPCMData101 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_068SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_069SampleInfo;
const struct InstrumentPCM instrumentPCMData102 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_069SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_070SampleInfo;
const struct InstrumentPCM instrumentPCMData103 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_070SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_071SampleInfo;
const struct InstrumentPCM instrumentPCMData104 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_071SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_072SampleInfo;
const struct InstrumentPCM instrumentPCMData105 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_072SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_073SampleInfo;
const struct InstrumentPCM instrumentPCMData106 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_073SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_074SampleInfo;
const struct InstrumentPCM instrumentPCMData107 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_074SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_075SampleInfo;
const struct InstrumentPCM instrumentPCMData108 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_075SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_076SampleInfo;
const struct InstrumentPCM instrumentPCMData109 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_076SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_077SampleInfo;
const struct InstrumentPCM instrumentPCMData110 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_077SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_078SampleInfo;
const struct InstrumentPCM instrumentPCMData111 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_078SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_079SampleInfo;
const struct InstrumentPCM instrumentPCMData112 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_079SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_080SampleInfo;
const struct InstrumentPCM instrumentPCMData113 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_080SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_081SampleInfo;
const struct InstrumentPCM instrumentPCMData114 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_081SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_082SampleInfo;
const struct InstrumentPCM instrumentPCMData115 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_082SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_083SampleInfo;
const struct InstrumentPCM instrumentPCMData116 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_083SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_084SampleInfo;
const struct InstrumentPCM instrumentPCMData117 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_084SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_085SampleInfo;
const struct InstrumentPCM instrumentPCMData118 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_085SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

const struct InstrumentSubbankSingleKey instrumentSubbankSingleKeyData119 = {
    /* Type      */ INSTRUMENT_SUBBANK_SINGLE_KEY,
    /* Total     */ 36,
    /* Sub-Bank  */ (const union Instrument **) 0x08a9940c, // POINTER
};

const struct InstrumentSubbankSingleKey instrumentSubbankSingleKeyData120 = {
    /* Type      */ INSTRUMENT_SUBBANK_SINGLE_KEY,
    /* Total     */ 36,
    /* Sub-Bank  */ (const union Instrument **) 0x08a99d3c, // POINTER
};

extern const struct SampleInfo sfx_086SampleInfo;
const struct InstrumentPCM instrumentPCMData121 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_086SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_087SampleInfo;
const struct InstrumentPCM instrumentPCMData122 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_087SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

const struct InstrumentPSG instrumentPSGData123 = {
    /* Type      */ INSTRUMENT_PSG,
    /* Key       */ 0x3C,
    /* Panning   */ 127,
    /* PSG Wave  */ NULL,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7e0000,
    /* ADSR Atk  */ 0x7f0000,
    /* ADSR Dec  */ 0x7f0000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x7f0000,
    /* PSG Chnl  */ PSG_PULSE_CHANNEL_1,
    /* PSG Len   */ 0,
    /* PSG Sweep */ 28,
    /* PSG Tone  */ PSG_TONE_DUTY_50,
    /* PSG Noise */ 0,
};

extern const struct SampleInfo sfx_034SampleInfo;
const struct InstrumentPCM instrumentPCMData124 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_034SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_088SampleInfo;
const struct InstrumentPCM instrumentPCMData125 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_088SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_089SampleInfo;
const struct InstrumentPCM instrumentPCMData126 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_089SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_090SampleInfo;
const struct InstrumentPCM instrumentPCMData127 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_090SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_091SampleInfo;
const struct InstrumentPCM instrumentPCMData128 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_091SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_092SampleInfo;
const struct InstrumentPCM instrumentPCMData129 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_092SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x082378,
};

extern const struct SampleInfo sfx_093SampleInfo;
const struct InstrumentPCM instrumentPCMData130 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_093SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x034867,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x18ea90,
};

extern const struct SampleInfo sfx_094SampleInfo;
const struct InstrumentPCM instrumentPCMData131 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_094SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x18ea90,
};

extern const struct SampleInfo sfx_095SampleInfo;
const struct InstrumentPCM instrumentPCMData132 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_095SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x18ea90,
};

extern const struct SampleInfo sfx_096SampleInfo;
const struct InstrumentPCM instrumentPCMData133 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_096SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x18ea90,
};

extern const struct SampleInfo sfx_097SampleInfo;
const struct InstrumentPCM instrumentPCMData134 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_097SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x18ea90,
};

extern const struct SampleInfo sfx_098SampleInfo;
const struct InstrumentPCM instrumentPCMData135 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_098SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x18ea90,
};

extern const struct SampleInfo sfx_099SampleInfo;
const struct InstrumentPCM instrumentPCMData136 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_099SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x18ea90,
};

extern const struct SampleInfo sfx_100SampleInfo;
const struct InstrumentPCM instrumentPCMData137 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_100SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x034867,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x18ea90,
};

extern const struct SampleInfo sfx_101SampleInfo;
const struct InstrumentPCM instrumentPCMData138 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_101SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x18ea90,
};

extern const struct SampleInfo sfx_102SampleInfo;
const struct InstrumentPCM instrumentPCMData139 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_102SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x083502,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x18ea90,
};

extern const struct SampleInfo sfx_103SampleInfo;
const struct InstrumentPCM instrumentPCMData140 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_103SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x18ea90,
};

extern const struct SampleInfo sfx_104SampleInfo;
const struct InstrumentPCM instrumentPCMData141 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_104SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x18ea90,
};

extern const struct SampleInfo sfx_105SampleInfo;
const struct InstrumentPCM instrumentPCMData142 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_105SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x18ea90,
};

extern const struct SampleInfo sfx_106SampleInfo;
const struct InstrumentPCM instrumentPCMData143 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_106SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x18ea90,
};

extern const struct SampleInfo sfx_107SampleInfo;
const struct InstrumentPCM instrumentPCMData144 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_107SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x015029,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

const struct InstrumentSubbankSingleKey instrumentSubbankSingleKeyData145 = {
    /* Type      */ INSTRUMENT_SUBBANK_SINGLE_KEY,
    /* Total     */ 36,
    /* Sub-Bank  */ (const union Instrument **) 0x08a99d3c, // POINTER
};

extern const struct SampleInfo sfx_016SampleInfo;
const struct InstrumentPCM instrumentPCMData146 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_016SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x267c1f,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x0d219d,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_108SampleInfo;
const struct InstrumentPCM instrumentPCMData147 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_108SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x267c1f,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x0d219d,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_015SampleInfo;
const struct InstrumentPCM instrumentPCMData148 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_015SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_109SampleInfo;
const struct InstrumentPCM instrumentPCMData149 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_109SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x00fc1f,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_008SampleInfo;
const struct InstrumentPCM instrumentPCMData150 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_008SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_110SampleInfo;
const struct InstrumentPCM instrumentPCMData151 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_110SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x66a052,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x034867,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_111SampleInfo;
const struct InstrumentPCM instrumentPCMData152 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_111SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x66a052,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x034867,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_112SampleInfo;
const struct InstrumentPCM instrumentPCMData153 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_112SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x66a052,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x034867,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_060SampleInfo;
const struct InstrumentPCM instrumentPCMData154 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_060SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x402433,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x01a433,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_113SampleInfo;
const struct InstrumentPCM instrumentPCMData155 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_113SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x235dd1,
};

extern const struct SampleInfo sfx_114SampleInfo;
const struct InstrumentPCM instrumentPCMData156 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_114SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

const struct InstrumentSubbankMultiKey instrumentSubbankMultiKeyData157 = {
    /* Type      */ INSTRUMENT_SUBBANK_MULTI_KEY,
    /* Total     */ 12,
    /* Splits    */ (u8 *) 0x08a865ac, // POINTER
    /* Sub-Bank  */ (const union Instrument **) 0x08a94448, // POINTER
};

extern const struct SampleInfo sfx_043SampleInfo;
const struct InstrumentPCM instrumentPCMData158 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_043SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_042SampleInfo;
const struct InstrumentPCM instrumentPCMData159 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_042SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_015SampleInfo;
const struct InstrumentPCM instrumentPCMData160 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_015SampleInfo,
    /* ADSR Init */ 0x000000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x307c1f,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_058SampleInfo;
const struct InstrumentPCM instrumentPCMData161 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_058SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x034867,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_027SampleInfo;
const struct InstrumentPCM instrumentPCMData162 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_027SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x015029,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_017SampleInfo;
const struct InstrumentPCM instrumentPCMData163 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_017SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x01f83e,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x082378,
};

extern const struct SampleInfo sfx_115SampleInfo;
const struct InstrumentPCM instrumentPCMData164 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_115SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x01f83e,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_116SampleInfo;
const struct InstrumentPCM instrumentPCMData165 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_116SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_028SampleInfo;
const struct InstrumentPCM instrumentPCMData166 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_028SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x00540a,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_117SampleInfo;
const struct InstrumentPCM instrumentPCMData167 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_117SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_118SampleInfo;
const struct InstrumentPCM instrumentPCMData168 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_118SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_119SampleInfo;
const struct InstrumentPCM instrumentPCMData169 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_119SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_120SampleInfo;
const struct InstrumentPCM instrumentPCMData170 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_120SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_121SampleInfo;
const struct InstrumentPCM instrumentPCMData171 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_121SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

const struct InstrumentPSG instrumentPSGData172 = {
    /* Type      */ INSTRUMENT_PSG,
    /* Key       */ 0x3C,
    /* Panning   */ 127,
    /* PSG Wave  */ NULL,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7e0000,
    /* ADSR Atk  */ 0x7f0000,
    /* ADSR Dec  */ 0x7f0000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x7f0000,
    /* PSG Chnl  */ PSG_PULSE_CHANNEL_1,
    /* PSG Len   */ 0,
    /* PSG Sweep */ 0,
    /* PSG Tone  */ PSG_TONE_DUTY_12_5,
    /* PSG Noise */ 0,
};

const struct InstrumentPSG instrumentPSGData173 = {
    /* Type      */ INSTRUMENT_PSG,
    /* Key       */ 0x3C,
    /* Panning   */ 127,
    /* PSG Wave  */ NULL,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7e0000,
    /* ADSR Atk  */ 0x7f0000,
    /* ADSR Dec  */ 0x7f0000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x7f0000,
    /* PSG Chnl  */ PSG_PULSE_CHANNEL_2,
    /* PSG Len   */ 0,
    /* PSG Sweep */ 0,
    /* PSG Tone  */ PSG_TONE_DUTY_25,
    /* PSG Noise */ 0,
};

extern const struct SampleInfo sfx_122SampleInfo;
const struct InstrumentPCM instrumentPCMData174 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_122SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_121SampleInfo;
const struct InstrumentPCM instrumentPCMData175 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_121SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_123SampleInfo;
const struct InstrumentPCM instrumentPCMData176 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_123SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x055552,
};

extern const struct SampleInfo sfx_124SampleInfo;
const struct InstrumentPCM instrumentPCMData177 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_124SampleInfo,
    /* ADSR Init */ 0x000000,
    /* ADSR Sus  */ 0x267c1f,
    /* ADSR Atk  */ 0x26c9b2,
    /* ADSR Dec  */ 0x015029,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_125SampleInfo;
const struct InstrumentPCM instrumentPCMData178 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_125SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x335029,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x0d219d,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x0b8000,
};

const struct InstrumentSubbankSingleKey instrumentSubbankSingleKeyData179 = {
    /* Type      */ INSTRUMENT_SUBBANK_SINGLE_KEY,
    /* Total     */ 36,
    /* Sub-Bank  */ (const union Instrument **) 0x08a9957c, // POINTER
};

const struct InstrumentSubbankSingleKey instrumentSubbankSingleKeyData180 = {
    /* Type      */ INSTRUMENT_SUBBANK_SINGLE_KEY,
    /* Total     */ 36,
    /* Sub-Bank  */ (const union Instrument **) 0x08a9940c, // POINTER
};

const struct InstrumentSubbankSingleKey instrumentSubbankSingleKeyData181 = {
    /* Type      */ INSTRUMENT_SUBBANK_SINGLE_KEY,
    /* Total     */ 36,
    /* Sub-Bank  */ (const union Instrument **) 0x08a99d3c, // POINTER
};

extern const struct SampleInfo sfx_126SampleInfo;
const struct InstrumentPCM instrumentPCMData182 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_126SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x02a052,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_127SampleInfo;
const struct InstrumentPCM instrumentPCMData183 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_127SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_128SampleInfo;
const struct InstrumentPCM instrumentPCMData184 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_128SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_129SampleInfo;
const struct InstrumentPCM instrumentPCMData185 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_129SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_130SampleInfo;
const struct InstrumentPCM instrumentPCMData186 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_130SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_131SampleInfo;
const struct InstrumentPCM instrumentPCMData187 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_131SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_132SampleInfo;
const struct InstrumentPCM instrumentPCMData188 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_132SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_133SampleInfo;
const struct InstrumentPCM instrumentPCMData189 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_133SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_134SampleInfo;
const struct InstrumentPCM instrumentPCMData190 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_134SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_135SampleInfo;
const struct InstrumentPCM instrumentPCMData191 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_135SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_136SampleInfo;
const struct InstrumentPCM instrumentPCMData192 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_136SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_137SampleInfo;
const struct InstrumentPCM instrumentPCMData193 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_137SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_138SampleInfo;
const struct InstrumentPCM instrumentPCMData194 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_138SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_139SampleInfo;
const struct InstrumentPCM instrumentPCMData195 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_139SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_140SampleInfo;
const struct InstrumentPCM instrumentPCMData196 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_140SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

const struct InstrumentSubbankSingleKey instrumentSubbankSingleKeyData197 = {
    /* Type      */ INSTRUMENT_SUBBANK_SINGLE_KEY,
    /* Total     */ 36,
    /* Sub-Bank  */ (const union Instrument **) 0x08a99d3c, // POINTER
};

extern const struct SampleInfo sfx_141SampleInfo;
const struct InstrumentPCM instrumentPCMData198 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_141SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_142SampleInfo;
const struct InstrumentPCM instrumentPCMData199 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_142SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_143SampleInfo;
const struct InstrumentPCM instrumentPCMData200 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_143SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_144SampleInfo;
const struct InstrumentPCM instrumentPCMData201 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_144SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_145SampleInfo;
const struct InstrumentPCM instrumentPCMData202 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_145SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_146SampleInfo;
const struct InstrumentPCM instrumentPCMData203 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_146SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_147SampleInfo;
const struct InstrumentPCM instrumentPCMData204 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_147SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

const struct InstrumentSubbankSingleKey instrumentSubbankSingleKeyData205 = {
    /* Type      */ INSTRUMENT_SUBBANK_SINGLE_KEY,
    /* Total     */ 36,
    /* Sub-Bank  */ (const union Instrument **) 0x08a99d3c, // POINTER
};

extern const struct SampleInfo sfx_148SampleInfo;
const struct InstrumentPCM instrumentPCMData206 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_148SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_149SampleInfo;
const struct InstrumentPCM instrumentPCMData207 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_149SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_150SampleInfo;
const struct InstrumentPCM instrumentPCMData208 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_150SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_151SampleInfo;
const struct InstrumentPCM instrumentPCMData209 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_151SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_152SampleInfo;
const struct InstrumentPCM instrumentPCMData210 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_152SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_153SampleInfo;
const struct InstrumentPCM instrumentPCMData211 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_153SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x0690ce,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_154SampleInfo;
const struct InstrumentPCM instrumentPCMData212 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_154SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_155SampleInfo;
const struct InstrumentPCM instrumentPCMData213 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_155SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_156SampleInfo;
const struct InstrumentPCM instrumentPCMData214 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_156SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_157SampleInfo;
const struct InstrumentPCM instrumentPCMData215 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_157SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_158SampleInfo;
const struct InstrumentPCM instrumentPCMData216 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_158SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_159SampleInfo;
const struct InstrumentPCM instrumentPCMData217 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_159SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_160SampleInfo;
const struct InstrumentPCM instrumentPCMData218 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_160SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_161SampleInfo;
const struct InstrumentPCM instrumentPCMData219 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_161SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_162SampleInfo;
const struct InstrumentPCM instrumentPCMData220 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_162SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_163SampleInfo;
const struct InstrumentPCM instrumentPCMData221 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_163SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_164SampleInfo;
const struct InstrumentPCM instrumentPCMData222 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_164SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_165SampleInfo;
const struct InstrumentPCM instrumentPCMData223 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_165SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_166SampleInfo;
const struct InstrumentPCM instrumentPCMData224 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_166SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_167SampleInfo;
const struct InstrumentPCM instrumentPCMData225 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_167SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_168SampleInfo;
const struct InstrumentPCM instrumentPCMData226 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_168SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_169SampleInfo;
const struct InstrumentPCM instrumentPCMData227 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_169SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_170SampleInfo;
const struct InstrumentPCM instrumentPCMData228 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_170SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_171SampleInfo;
const struct InstrumentPCM instrumentPCMData229 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_171SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_172SampleInfo;
const struct InstrumentPCM instrumentPCMData230 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_172SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_173SampleInfo;
const struct InstrumentPCM instrumentPCMData231 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_173SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_174SampleInfo;
const struct InstrumentPCM instrumentPCMData232 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_174SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_175SampleInfo;
const struct InstrumentPCM instrumentPCMData233 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_175SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_176SampleInfo;
const struct InstrumentPCM instrumentPCMData234 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_176SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_177SampleInfo;
const struct InstrumentPCM instrumentPCMData235 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_177SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_178SampleInfo;
const struct InstrumentPCM instrumentPCMData236 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_178SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_179SampleInfo;
const struct InstrumentPCM instrumentPCMData237 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_179SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_180SampleInfo;
const struct InstrumentPCM instrumentPCMData238 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_180SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_181SampleInfo;
const struct InstrumentPCM instrumentPCMData239 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_181SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_182SampleInfo;
const struct InstrumentPCM instrumentPCMData240 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_182SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_183SampleInfo;
const struct InstrumentPCM instrumentPCMData241 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_183SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x0f6a90,
};

const struct InstrumentSubbankSingleKey instrumentSubbankSingleKeyData242 = {
    /* Type      */ INSTRUMENT_SUBBANK_SINGLE_KEY,
    /* Total     */ 36,
    /* Sub-Bank  */ (const union Instrument **) 0x08a99d3c, // POINTER
};

extern const struct SampleInfo sfx_184SampleInfo;
const struct InstrumentPCM instrumentPCMData243 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_184SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_185SampleInfo;
const struct InstrumentPCM instrumentPCMData244 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_185SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_186SampleInfo;
const struct InstrumentPCM instrumentPCMData245 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_186SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_187SampleInfo;
const struct InstrumentPCM instrumentPCMData246 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_187SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_188SampleInfo;
const struct InstrumentPCM instrumentPCMData247 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_188SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_189SampleInfo;
const struct InstrumentPCM instrumentPCMData248 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_189SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_190SampleInfo;
const struct InstrumentPCM instrumentPCMData249 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_190SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_191SampleInfo;
const struct InstrumentPCM instrumentPCMData250 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_191SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x082378,
};

extern const struct SampleInfo sfx_192SampleInfo;
const struct InstrumentPCM instrumentPCMData251 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_192SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x0b8000,
};

extern const struct SampleInfo sfx_193SampleInfo;
const struct InstrumentPCM instrumentPCMData252 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_193SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x034867,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x0b8000,
};

extern const struct SampleInfo sfx_003SampleInfo;
const struct InstrumentPCM instrumentPCMData253 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_003SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_009SampleInfo;
const struct InstrumentPCM instrumentPCMData254 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_009SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_041SampleInfo;
const struct InstrumentPCM instrumentPCMData255 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_041SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x60364d,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x015029,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_058SampleInfo;
const struct InstrumentPCM instrumentPCMData256 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_058SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x034867,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_194SampleInfo;
const struct InstrumentPCM instrumentPCMData257 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_194SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x00fc1f,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_108SampleInfo;
const struct InstrumentPCM instrumentPCMData258 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_108SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x267c1f,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x0d219d,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_195SampleInfo;
const struct InstrumentPCM instrumentPCMData259 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_195SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x034867,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x18ea90,
};

extern const struct SampleInfo sfx_196SampleInfo;
const struct InstrumentPCM instrumentPCMData260 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_196SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x00a814,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_191SampleInfo;
const struct InstrumentPCM instrumentPCMData261 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_191SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x218000,
};

extern const struct SampleInfo sfx_197SampleInfo;
const struct InstrumentPCM instrumentPCMData262 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_197SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x082378,
};

extern const struct SampleInfo sfx_198SampleInfo;
const struct InstrumentPCM instrumentPCMData263 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_198SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_199SampleInfo;
const struct InstrumentPCM instrumentPCMData264 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_199SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_200SampleInfo;
const struct InstrumentPCM instrumentPCMData265 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_200SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x01a433,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_201SampleInfo;
const struct InstrumentPCM instrumentPCMData266 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_201SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x01f83e,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_202SampleInfo;
const struct InstrumentPCM instrumentPCMData267 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_202SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x60364d,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x015029,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_008SampleInfo;
const struct InstrumentPCM instrumentPCMData268 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_008SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_013SampleInfo;
const struct InstrumentPCM instrumentPCMData269 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_013SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x1556a0,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_203SampleInfo;
const struct InstrumentPCM instrumentPCMData270 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_203SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x015029,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_114SampleInfo;
const struct InstrumentPCM instrumentPCMData271 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_114SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_204SampleInfo;
const struct InstrumentPCM instrumentPCMData272 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_204SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x034867,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_113SampleInfo;
const struct InstrumentPCM instrumentPCMData273 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_113SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x235dd1,
};

extern const struct SampleInfo sfx_017SampleInfo;
const struct InstrumentPCM instrumentPCMData274 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_017SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x01f83e,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x082378,
};

extern const struct SampleInfo sfx_205SampleInfo;
const struct InstrumentPCM instrumentPCMData275 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_205SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x01f83e,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x082378,
};

extern const struct SampleInfo sfx_042SampleInfo;
const struct InstrumentPCM instrumentPCMData276 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_042SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_206SampleInfo;
const struct InstrumentPCM instrumentPCMData277 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_206SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_207SampleInfo;
const struct InstrumentPCM instrumentPCMData278 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_207SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_015SampleInfo;
const struct InstrumentPCM instrumentPCMData279 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_015SampleInfo,
    /* ADSR Init */ 0x000000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x1d1745,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_208SampleInfo;
const struct InstrumentPCM instrumentPCMData280 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_208SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x034867,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_112SampleInfo;
const struct InstrumentPCM instrumentPCMData281 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_112SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x66a052,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x034867,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

const struct InstrumentSubbankMultiKey instrumentSubbankMultiKeyData282 = {
    /* Type      */ INSTRUMENT_SUBBANK_MULTI_KEY,
    /* Total     */ 12,
    /* Splits    */ (u8 *) 0x08a865ac, // POINTER
    /* Sub-Bank  */ (const union Instrument **) 0x08a97010, // POINTER
};

extern const struct SampleInfo sfx_015SampleInfo;
const struct InstrumentPCM instrumentPCMData283 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_015SampleInfo,
    /* ADSR Init */ 0x000000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x4d9364,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_209SampleInfo;
const struct InstrumentPCM instrumentPCMData284 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_209SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_210SampleInfo;
const struct InstrumentPCM instrumentPCMData285 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_210SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_211SampleInfo;
const struct InstrumentPCM instrumentPCMData286 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_211SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

const struct InstrumentSubbankSingleKey instrumentSubbankSingleKeyData287 = {
    /* Type      */ INSTRUMENT_SUBBANK_SINGLE_KEY,
    /* Total     */ 36,
    /* Sub-Bank  */ (const union Instrument **) 0x08a998e4, // POINTER
};

const struct InstrumentSubbankSingleKey instrumentSubbankSingleKeyData288 = {
    /* Type      */ INSTRUMENT_SUBBANK_SINGLE_KEY,
    /* Total     */ 36,
    /* Sub-Bank  */ (const union Instrument **) 0x08a996e4, // POINTER
};

const struct InstrumentSubbankSingleKey instrumentSubbankSingleKeyData289 = {
    /* Type      */ INSTRUMENT_SUBBANK_SINGLE_KEY,
    /* Total     */ 36,
    /* Sub-Bank  */ (const union Instrument **) 0x08a9940c, // POINTER
};

extern const struct SampleInfo sfx_212SampleInfo;
const struct InstrumentPCM instrumentPCMData290 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_212SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x19a814,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x02a052,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_117SampleInfo;
const struct InstrumentPCM instrumentPCMData291 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_117SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_015SampleInfo;
const struct InstrumentPCM instrumentPCMData292 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_015SampleInfo,
    /* ADSR Init */ 0x000000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x1d1745,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_008SampleInfo;
const struct InstrumentPCM instrumentPCMData293 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_008SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_023SampleInfo;
const struct InstrumentPCM instrumentPCMData294 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_023SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_213SampleInfo;
const struct InstrumentPCM instrumentPCMData295 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_213SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x02a052,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x0f6a90,
};

extern const struct SampleInfo sfx_214SampleInfo;
const struct InstrumentPCM instrumentPCMData296 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_214SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_122SampleInfo;
const struct InstrumentPCM instrumentPCMData297 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_122SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_215SampleInfo;
const struct InstrumentPCM instrumentPCMData298 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_215SampleInfo,
    /* ADSR Init */ 0x000000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x43e0f8,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_216SampleInfo;
const struct InstrumentPCM instrumentPCMData299 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_216SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_217SampleInfo;
const struct InstrumentPCM instrumentPCMData300 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_217SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x0f6a90,
};

extern const struct SampleInfo sfx_107SampleInfo;
const struct InstrumentPCM instrumentPCMData301 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_107SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x015029,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_215SampleInfo;
const struct InstrumentPCM instrumentPCMData302 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_215SampleInfo,
    /* ADSR Init */ 0x000000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x307c1f,
    /* ADSR Dec  */ 0x13b26c,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x218000,
};

extern const struct SampleInfo sfx_218SampleInfo;
const struct InstrumentPCM instrumentPCMData303 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_218SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_219SampleInfo;
const struct InstrumentPCM instrumentPCMData304 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_219SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x01638c,
};

extern const struct SampleInfo sfx_220SampleInfo;
const struct InstrumentPCM instrumentPCMData305 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_220SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

const struct InstrumentSubbankSingleKey instrumentSubbankSingleKeyData306 = {
    /* Type      */ INSTRUMENT_SUBBANK_SINGLE_KEY,
    /* Total     */ 36,
    /* Sub-Bank  */ (const union Instrument **) 0x08a99d3c, // POINTER
};

extern const struct SampleInfo sfx_221SampleInfo;
const struct InstrumentPCM instrumentPCMData307 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_221SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x0b8000,
};

extern const struct SampleInfo sfx_222SampleInfo;
const struct InstrumentPCM instrumentPCMData308 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_222SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x0b8000,
};

extern const struct SampleInfo sfx_093SampleInfo;
const struct InstrumentPCM instrumentPCMData309 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_093SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x034867,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x18ea90,
};

extern const struct SampleInfo sfx_094SampleInfo;
const struct InstrumentPCM instrumentPCMData310 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_094SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x18ea90,
};

extern const struct SampleInfo sfx_095SampleInfo;
const struct InstrumentPCM instrumentPCMData311 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_095SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x083502,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x18ea90,
};

extern const struct SampleInfo sfx_096SampleInfo;
const struct InstrumentPCM instrumentPCMData312 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_096SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x18ea90,
};

extern const struct SampleInfo sfx_097SampleInfo;
const struct InstrumentPCM instrumentPCMData313 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_097SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x18ea90,
};

extern const struct SampleInfo sfx_098SampleInfo;
const struct InstrumentPCM instrumentPCMData314 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_098SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x18ea90,
};

extern const struct SampleInfo sfx_099SampleInfo;
const struct InstrumentPCM instrumentPCMData315 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_099SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x18ea90,
};

extern const struct SampleInfo sfx_100SampleInfo;
const struct InstrumentPCM instrumentPCMData316 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_100SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x034867,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x18ea90,
};

extern const struct SampleInfo sfx_101SampleInfo;
const struct InstrumentPCM instrumentPCMData317 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_101SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x18ea90,
};

extern const struct SampleInfo sfx_102SampleInfo;
const struct InstrumentPCM instrumentPCMData318 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_102SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x083502,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x18ea90,
};

extern const struct SampleInfo sfx_103SampleInfo;
const struct InstrumentPCM instrumentPCMData319 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_103SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x18ea90,
};

extern const struct SampleInfo sfx_104SampleInfo;
const struct InstrumentPCM instrumentPCMData320 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_104SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x18ea90,
};

extern const struct SampleInfo sfx_105SampleInfo;
const struct InstrumentPCM instrumentPCMData321 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_105SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x18ea90,
};

extern const struct SampleInfo sfx_106SampleInfo;
const struct InstrumentPCM instrumentPCMData322 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_106SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x18ea90,
};

extern const struct SampleInfo sfx_223SampleInfo;
const struct InstrumentPCM instrumentPCMData323 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_223SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x0b8000,
};

extern const struct SampleInfo sfx_224SampleInfo;
const struct InstrumentPCM instrumentPCMData324 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_224SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x18ea90,
};

extern const struct SampleInfo sfx_225SampleInfo;
const struct InstrumentPCM instrumentPCMData325 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_225SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x18ea90,
};

const struct InstrumentSubbankSingleKey instrumentSubbankSingleKeyData326 = {
    /* Type      */ INSTRUMENT_SUBBANK_SINGLE_KEY,
    /* Total     */ 36,
    /* Sub-Bank  */ (const union Instrument **) 0x08a9940c, // POINTER
};

extern const struct SampleInfo sfx_226SampleInfo;
const struct InstrumentPCM instrumentPCMData327 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_226SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_114SampleInfo;
const struct InstrumentPCM instrumentPCMData328 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_114SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_200SampleInfo;
const struct InstrumentPCM instrumentPCMData329 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_200SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_227SampleInfo;
const struct InstrumentPCM instrumentPCMData330 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_227SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_228SampleInfo;
const struct InstrumentPCM instrumentPCMData331 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_228SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x04ec9b,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_110SampleInfo;
const struct InstrumentPCM instrumentPCMData332 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_110SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x66a052,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x034867,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_111SampleInfo;
const struct InstrumentPCM instrumentPCMData333 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_111SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x66a052,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x034867,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_229SampleInfo;
const struct InstrumentPCM instrumentPCMData334 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_229SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_230SampleInfo;
const struct InstrumentPCM instrumentPCMData335 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_230SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_113SampleInfo;
const struct InstrumentPCM instrumentPCMData336 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_113SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x235dd1,
};

extern const struct SampleInfo sfx_207SampleInfo;
const struct InstrumentPCM instrumentPCMData337 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_207SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_206SampleInfo;
const struct InstrumentPCM instrumentPCMData338 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_206SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

const struct InstrumentSubbankMultiKey instrumentSubbankMultiKeyData339 = {
    /* Type      */ INSTRUMENT_SUBBANK_MULTI_KEY,
    /* Total     */ 12,
    /* Splits    */ (u8 *) 0x08a865ac, // POINTER
    /* Sub-Bank  */ (const union Instrument **) 0x08a95248, // POINTER
};

extern const struct SampleInfo sfx_211SampleInfo;
const struct InstrumentPCM instrumentPCMData340 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_211SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_231SampleInfo;
const struct InstrumentPCM instrumentPCMData341 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_231SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_232SampleInfo;
const struct InstrumentPCM instrumentPCMData342 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_232SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_233SampleInfo;
const struct InstrumentPCM instrumentPCMData343 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_233SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_234SampleInfo;
const struct InstrumentPCM instrumentPCMData344 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_234SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x034867,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_235SampleInfo;
const struct InstrumentPCM instrumentPCMData345 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_235SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

const struct InstrumentSubbankSingleKey instrumentSubbankSingleKeyData346 = {
    /* Type      */ INSTRUMENT_SUBBANK_SINGLE_KEY,
    /* Total     */ 36,
    /* Sub-Bank  */ (const union Instrument **) 0x08a9957c, // POINTER
};

const struct InstrumentSubbankSingleKey instrumentSubbankSingleKeyData347 = {
    /* Type      */ INSTRUMENT_SUBBANK_SINGLE_KEY,
    /* Total     */ 36,
    /* Sub-Bank  */ (const union Instrument **) 0x08a9940c, // POINTER
};

const struct InstrumentPSG instrumentPSGData348 = {
    /* Type      */ INSTRUMENT_PSG,
    /* Key       */ 0x3C,
    /* Panning   */ 127,
    /* PSG Wave  */ NULL,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7e0000,
    /* ADSR Atk  */ 0x7f0000,
    /* ADSR Dec  */ 0x7f0000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x7f0000,
    /* PSG Chnl  */ PSG_PULSE_CHANNEL_1,
    /* PSG Len   */ 0,
    /* PSG Sweep */ 0,
    /* PSG Tone  */ PSG_TONE_DUTY_12_5,
    /* PSG Noise */ 0,
};

const struct InstrumentPSG instrumentPSGData349 = {
    /* Type      */ INSTRUMENT_PSG,
    /* Key       */ 0x3C,
    /* Panning   */ 127,
    /* PSG Wave  */ NULL,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7e0000,
    /* ADSR Atk  */ 0x7f0000,
    /* ADSR Dec  */ 0x7f0000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x7f0000,
    /* PSG Chnl  */ PSG_PULSE_CHANNEL_1,
    /* PSG Len   */ 0,
    /* PSG Sweep */ 0,
    /* PSG Tone  */ PSG_TONE_DUTY_25,
    /* PSG Noise */ 0,
};

const struct InstrumentPSG instrumentPSGData350 = {
    /* Type      */ INSTRUMENT_PSG,
    /* Key       */ 0x3C,
    /* Panning   */ 127,
    /* PSG Wave  */ NULL,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7e0000,
    /* ADSR Atk  */ 0x7f0000,
    /* ADSR Dec  */ 0x7f0000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x7f0000,
    /* PSG Chnl  */ PSG_PULSE_CHANNEL_1,
    /* PSG Len   */ 0,
    /* PSG Sweep */ 0,
    /* PSG Tone  */ PSG_TONE_DUTY_50,
    /* PSG Noise */ 0,
};

const struct InstrumentPSG instrumentPSGData351 = {
    /* Type      */ INSTRUMENT_PSG,
    /* Key       */ 0x3C,
    /* Panning   */ 127,
    /* PSG Wave  */ NULL,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7e0000,
    /* ADSR Atk  */ 0x7f0000,
    /* ADSR Dec  */ 0x7f0000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
    /* PSG Chnl  */ PSG_PULSE_CHANNEL_1,
    /* PSG Len   */ 0,
    /* PSG Sweep */ 0,
    /* PSG Tone  */ PSG_TONE_DUTY_12_5,
    /* PSG Noise */ 0,
};

const struct InstrumentPSG instrumentPSGData352 = {
    /* Type      */ INSTRUMENT_PSG,
    /* Key       */ 0x3C,
    /* Panning   */ 127,
    /* PSG Wave  */ NULL,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7e0000,
    /* ADSR Atk  */ 0x7f0000,
    /* ADSR Dec  */ 0x7f0000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
    /* PSG Chnl  */ PSG_PULSE_CHANNEL_1,
    /* PSG Len   */ 0,
    /* PSG Sweep */ 0,
    /* PSG Tone  */ PSG_TONE_DUTY_25,
    /* PSG Noise */ 0,
};

const struct InstrumentPSG instrumentPSGData353 = {
    /* Type      */ INSTRUMENT_PSG,
    /* Key       */ 0x3C,
    /* Panning   */ 127,
    /* PSG Wave  */ NULL,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7e0000,
    /* ADSR Atk  */ 0x7f0000,
    /* ADSR Dec  */ 0x7f0000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
    /* PSG Chnl  */ PSG_PULSE_CHANNEL_1,
    /* PSG Len   */ 0,
    /* PSG Sweep */ 0,
    /* PSG Tone  */ PSG_TONE_DUTY_50,
    /* PSG Noise */ 0,
};

const struct InstrumentPSG instrumentPSGData354 = {
    /* Type      */ INSTRUMENT_PSG,
    /* Key       */ 0x3C,
    /* Panning   */ 127,
    /* PSG Wave  */ NULL,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7e0000,
    /* ADSR Atk  */ 0x7f0000,
    /* ADSR Dec  */ 0x7f0000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x091249,
    /* PSG Chnl  */ PSG_PULSE_CHANNEL_1,
    /* PSG Len   */ 0,
    /* PSG Sweep */ 0,
    /* PSG Tone  */ PSG_TONE_DUTY_12_5,
    /* PSG Noise */ 0,
};

const struct InstrumentPSG instrumentPSGData355 = {
    /* Type      */ INSTRUMENT_PSG,
    /* Key       */ 0x3C,
    /* Panning   */ 127,
    /* PSG Wave  */ NULL,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7e0000,
    /* ADSR Atk  */ 0x7f0000,
    /* ADSR Dec  */ 0x7f0000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x091249,
    /* PSG Chnl  */ PSG_PULSE_CHANNEL_1,
    /* PSG Len   */ 0,
    /* PSG Sweep */ 0,
    /* PSG Tone  */ PSG_TONE_DUTY_25,
    /* PSG Noise */ 0,
};

const struct InstrumentPSG instrumentPSGData356 = {
    /* Type      */ INSTRUMENT_PSG,
    /* Key       */ 0x3C,
    /* Panning   */ 127,
    /* PSG Wave  */ NULL,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7e0000,
    /* ADSR Atk  */ 0x7f0000,
    /* ADSR Dec  */ 0x7f0000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x091249,
    /* PSG Chnl  */ PSG_PULSE_CHANNEL_1,
    /* PSG Len   */ 0,
    /* PSG Sweep */ 0,
    /* PSG Tone  */ PSG_TONE_DUTY_50,
    /* PSG Noise */ 0,
};

const struct InstrumentPSG instrumentPSGData357 = {
    /* Type      */ INSTRUMENT_PSG,
    /* Key       */ 0x3C,
    /* Panning   */ 127,
    /* PSG Wave  */ NULL,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x7f0000,
    /* ADSR Dec  */ 0x054aaa,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x091249,
    /* PSG Chnl  */ PSG_PULSE_CHANNEL_1,
    /* PSG Len   */ 0,
    /* PSG Sweep */ 0,
    /* PSG Tone  */ PSG_TONE_DUTY_12_5,
    /* PSG Noise */ 0,
};

const struct InstrumentPSG instrumentPSGData358 = {
    /* Type      */ INSTRUMENT_PSG,
    /* Key       */ 0x3C,
    /* Panning   */ 127,
    /* PSG Wave  */ NULL,
    /* ADSR Init */ 0x4cf83e,
    /* ADSR Sus  */ 0x7e0000,
    /* ADSR Atk  */ 0x091249,
    /* ADSR Dec  */ 0x7f0000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x091249,
    /* PSG Chnl  */ PSG_PULSE_CHANNEL_1,
    /* PSG Len   */ 0,
    /* PSG Sweep */ 0,
    /* PSG Tone  */ PSG_TONE_DUTY_50,
    /* PSG Noise */ 0,
};

const struct InstrumentPSG instrumentPSGData359 = {
    /* Type      */ INSTRUMENT_PSG,
    /* Key       */ 0x3C,
    /* Panning   */ 127,
    /* PSG Wave  */ NULL,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7e0000,
    /* ADSR Atk  */ 0x7f0000,
    /* ADSR Dec  */ 0x7f0000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x7f0000,
    /* PSG Chnl  */ PSG_PULSE_CHANNEL_1,
    /* PSG Len   */ 0,
    /* PSG Sweep */ 18,
    /* PSG Tone  */ PSG_TONE_DUTY_50,
    /* PSG Noise */ 0,
};

const struct InstrumentPSG instrumentPSGData360 = {
    /* Type      */ INSTRUMENT_PSG,
    /* Key       */ 0x3C,
    /* Panning   */ 127,
    /* PSG Wave  */ NULL,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7e0000,
    /* ADSR Atk  */ 0x7f0000,
    /* ADSR Dec  */ 0x7f0000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x7f0000,
    /* PSG Chnl  */ PSG_PULSE_CHANNEL_1,
    /* PSG Len   */ 0,
    /* PSG Sweep */ 20,
    /* PSG Tone  */ PSG_TONE_DUTY_50,
    /* PSG Noise */ 0,
};

const struct InstrumentPSG instrumentPSGData361 = {
    /* Type      */ INSTRUMENT_PSG,
    /* Key       */ 0x3C,
    /* Panning   */ 127,
    /* PSG Wave  */ NULL,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7e0000,
    /* ADSR Atk  */ 0x7f0000,
    /* ADSR Dec  */ 0x7f0000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x7f0000,
    /* PSG Chnl  */ PSG_PULSE_CHANNEL_1,
    /* PSG Len   */ 0,
    /* PSG Sweep */ 22,
    /* PSG Tone  */ PSG_TONE_DUTY_50,
    /* PSG Noise */ 0,
};

const struct InstrumentPSG instrumentPSGData362 = {
    /* Type      */ INSTRUMENT_PSG,
    /* Key       */ 0x3C,
    /* Panning   */ 127,
    /* PSG Wave  */ NULL,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7e0000,
    /* ADSR Atk  */ 0x7f0000,
    /* ADSR Dec  */ 0x7f0000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x7f0000,
    /* PSG Chnl  */ PSG_PULSE_CHANNEL_1,
    /* PSG Len   */ 0,
    /* PSG Sweep */ 34,
    /* PSG Tone  */ PSG_TONE_DUTY_50,
    /* PSG Noise */ 0,
};

const struct InstrumentPSG instrumentPSGData363 = {
    /* Type      */ INSTRUMENT_PSG,
    /* Key       */ 0x3C,
    /* Panning   */ 127,
    /* PSG Wave  */ NULL,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7e0000,
    /* ADSR Atk  */ 0x7f0000,
    /* ADSR Dec  */ 0x7f0000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x7f0000,
    /* PSG Chnl  */ PSG_PULSE_CHANNEL_1,
    /* PSG Len   */ 0,
    /* PSG Sweep */ 36,
    /* PSG Tone  */ PSG_TONE_DUTY_50,
    /* PSG Noise */ 0,
};

const struct InstrumentPSG instrumentPSGData364 = {
    /* Type      */ INSTRUMENT_PSG,
    /* Key       */ 0x3C,
    /* Panning   */ 127,
    /* PSG Wave  */ NULL,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7e0000,
    /* ADSR Atk  */ 0x7f0000,
    /* ADSR Dec  */ 0x7f0000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x7f0000,
    /* PSG Chnl  */ PSG_PULSE_CHANNEL_1,
    /* PSG Len   */ 0,
    /* PSG Sweep */ 38,
    /* PSG Tone  */ PSG_TONE_DUTY_50,
    /* PSG Noise */ 0,
};

const struct InstrumentPSG instrumentPSGData365 = {
    /* Type      */ INSTRUMENT_PSG,
    /* Key       */ 0x3C,
    /* Panning   */ 127,
    /* PSG Wave  */ NULL,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7e0000,
    /* ADSR Atk  */ 0x7f0000,
    /* ADSR Dec  */ 0x7f0000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x7f0000,
    /* PSG Chnl  */ PSG_PULSE_CHANNEL_1,
    /* PSG Len   */ 0,
    /* PSG Sweep */ 50,
    /* PSG Tone  */ PSG_TONE_DUTY_50,
    /* PSG Noise */ 0,
};

const struct InstrumentPSG instrumentPSGData366 = {
    /* Type      */ INSTRUMENT_PSG,
    /* Key       */ 0x3C,
    /* Panning   */ 127,
    /* PSG Wave  */ NULL,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7e0000,
    /* ADSR Atk  */ 0x7f0000,
    /* ADSR Dec  */ 0x7f0000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x7f0000,
    /* PSG Chnl  */ PSG_PULSE_CHANNEL_1,
    /* PSG Len   */ 0,
    /* PSG Sweep */ 52,
    /* PSG Tone  */ PSG_TONE_DUTY_50,
    /* PSG Noise */ 0,
};

const struct InstrumentPSG instrumentPSGData367 = {
    /* Type      */ INSTRUMENT_PSG,
    /* Key       */ 0x3C,
    /* Panning   */ 127,
    /* PSG Wave  */ NULL,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7e0000,
    /* ADSR Atk  */ 0x7f0000,
    /* ADSR Dec  */ 0x7f0000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x7f0000,
    /* PSG Chnl  */ PSG_PULSE_CHANNEL_1,
    /* PSG Len   */ 0,
    /* PSG Sweep */ 68,
    /* PSG Tone  */ PSG_TONE_DUTY_50,
    /* PSG Noise */ 0,
};

const struct InstrumentPSG instrumentPSGData368 = {
    /* Type      */ INSTRUMENT_PSG,
    /* Key       */ 0x3C,
    /* Panning   */ 127,
    /* PSG Wave  */ NULL,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7e0000,
    /* ADSR Atk  */ 0x7f0000,
    /* ADSR Dec  */ 0x7f0000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x7f0000,
    /* PSG Chnl  */ PSG_PULSE_CHANNEL_1,
    /* PSG Len   */ 0,
    /* PSG Sweep */ 84,
    /* PSG Tone  */ PSG_TONE_DUTY_50,
    /* PSG Noise */ 0,
};

const struct InstrumentPSG instrumentPSGData369 = {
    /* Type      */ INSTRUMENT_PSG,
    /* Key       */ 0x3C,
    /* Panning   */ 127,
    /* PSG Wave  */ NULL,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7e0000,
    /* ADSR Atk  */ 0x7f0000,
    /* ADSR Dec  */ 0x7f0000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x7f0000,
    /* PSG Chnl  */ PSG_PULSE_CHANNEL_1,
    /* PSG Len   */ 0,
    /* PSG Sweep */ 27,
    /* PSG Tone  */ PSG_TONE_DUTY_50,
    /* PSG Noise */ 0,
};

const struct InstrumentPSG instrumentPSGData370 = {
    /* Type      */ INSTRUMENT_PSG,
    /* Key       */ 0x3C,
    /* Panning   */ 127,
    /* PSG Wave  */ NULL,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7e0000,
    /* ADSR Atk  */ 0x7f0000,
    /* ADSR Dec  */ 0x7f0000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x7f0000,
    /* PSG Chnl  */ PSG_PULSE_CHANNEL_1,
    /* PSG Len   */ 0,
    /* PSG Sweep */ 28,
    /* PSG Tone  */ PSG_TONE_DUTY_50,
    /* PSG Noise */ 0,
};

const struct InstrumentPSG instrumentPSGData371 = {
    /* Type      */ INSTRUMENT_PSG,
    /* Key       */ 0x3C,
    /* Panning   */ 127,
    /* PSG Wave  */ NULL,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7e0000,
    /* ADSR Atk  */ 0x7f0000,
    /* ADSR Dec  */ 0x7f0000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x7f0000,
    /* PSG Chnl  */ PSG_PULSE_CHANNEL_1,
    /* PSG Len   */ 0,
    /* PSG Sweep */ 29,
    /* PSG Tone  */ PSG_TONE_DUTY_50,
    /* PSG Noise */ 0,
};

const struct InstrumentPSG instrumentPSGData372 = {
    /* Type      */ INSTRUMENT_PSG,
    /* Key       */ 0x3C,
    /* Panning   */ 127,
    /* PSG Wave  */ NULL,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7e0000,
    /* ADSR Atk  */ 0x7f0000,
    /* ADSR Dec  */ 0x7f0000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x7f0000,
    /* PSG Chnl  */ PSG_PULSE_CHANNEL_1,
    /* PSG Len   */ 0,
    /* PSG Sweep */ 30,
    /* PSG Tone  */ PSG_TONE_DUTY_50,
    /* PSG Noise */ 0,
};

const struct InstrumentPSG instrumentPSGData373 = {
    /* Type      */ INSTRUMENT_PSG,
    /* Key       */ 0x3C,
    /* Panning   */ 127,
    /* PSG Wave  */ NULL,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7e0000,
    /* ADSR Atk  */ 0x7f0000,
    /* ADSR Dec  */ 0x7f0000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x7f0000,
    /* PSG Chnl  */ PSG_PULSE_CHANNEL_1,
    /* PSG Len   */ 0,
    /* PSG Sweep */ 31,
    /* PSG Tone  */ PSG_TONE_DUTY_50,
    /* PSG Noise */ 0,
};

const struct InstrumentPSG instrumentPSGData374 = {
    /* Type      */ INSTRUMENT_PSG,
    /* Key       */ 0x3C,
    /* Panning   */ 127,
    /* PSG Wave  */ NULL,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7e0000,
    /* ADSR Atk  */ 0x7f0000,
    /* ADSR Dec  */ 0x7f0000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x7f0000,
    /* PSG Chnl  */ PSG_PULSE_CHANNEL_1,
    /* PSG Len   */ 0,
    /* PSG Sweep */ 59,
    /* PSG Tone  */ PSG_TONE_DUTY_50,
    /* PSG Noise */ 0,
};

const struct InstrumentPSG instrumentPSGData375 = {
    /* Type      */ INSTRUMENT_PSG,
    /* Key       */ 0x3C,
    /* Panning   */ 127,
    /* PSG Wave  */ NULL,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7e0000,
    /* ADSR Atk  */ 0x7f0000,
    /* ADSR Dec  */ 0x7f0000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x7f0000,
    /* PSG Chnl  */ PSG_PULSE_CHANNEL_1,
    /* PSG Len   */ 0,
    /* PSG Sweep */ 60,
    /* PSG Tone  */ PSG_TONE_DUTY_50,
    /* PSG Noise */ 0,
};

const struct InstrumentPSG instrumentPSGData376 = {
    /* Type      */ INSTRUMENT_PSG,
    /* Key       */ 0x3C,
    /* Panning   */ 127,
    /* PSG Wave  */ NULL,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7e0000,
    /* ADSR Atk  */ 0x7f0000,
    /* ADSR Dec  */ 0x7f0000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x7f0000,
    /* PSG Chnl  */ PSG_PULSE_CHANNEL_1,
    /* PSG Len   */ 0,
    /* PSG Sweep */ 61,
    /* PSG Tone  */ PSG_TONE_DUTY_50,
    /* PSG Noise */ 0,
};

const struct InstrumentPSG instrumentPSGData377 = {
    /* Type      */ INSTRUMENT_PSG,
    /* Key       */ 0x3C,
    /* Panning   */ 127,
    /* PSG Wave  */ NULL,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7e0000,
    /* ADSR Atk  */ 0x7f0000,
    /* ADSR Dec  */ 0x7f0000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x7f0000,
    /* PSG Chnl  */ PSG_PULSE_CHANNEL_1,
    /* PSG Len   */ 0,
    /* PSG Sweep */ 62,
    /* PSG Tone  */ PSG_TONE_DUTY_50,
    /* PSG Noise */ 0,
};

const struct InstrumentPSG instrumentPSGData378 = {
    /* Type      */ INSTRUMENT_PSG,
    /* Key       */ 0x3C,
    /* Panning   */ 127,
    /* PSG Wave  */ NULL,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7e0000,
    /* ADSR Atk  */ 0x7f0000,
    /* ADSR Dec  */ 0x7f0000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x7f0000,
    /* PSG Chnl  */ PSG_PULSE_CHANNEL_1,
    /* PSG Len   */ 0,
    /* PSG Sweep */ 63,
    /* PSG Tone  */ PSG_TONE_DUTY_50,
    /* PSG Noise */ 0,
};

const struct InstrumentPSG instrumentPSGData379 = {
    /* Type      */ INSTRUMENT_PSG,
    /* Key       */ 0x3C,
    /* Panning   */ 127,
    /* PSG Wave  */ NULL,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7e0000,
    /* ADSR Atk  */ 0x7f0000,
    /* ADSR Dec  */ 0x7f0000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x7f0000,
    /* PSG Chnl  */ PSG_PULSE_CHANNEL_2,
    /* PSG Len   */ 0,
    /* PSG Sweep */ 0,
    /* PSG Tone  */ PSG_TONE_DUTY_12_5,
    /* PSG Noise */ 0,
};

const struct InstrumentPSG instrumentPSGData380 = {
    /* Type      */ INSTRUMENT_PSG,
    /* Key       */ 0x3C,
    /* Panning   */ 127,
    /* PSG Wave  */ NULL,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7e0000,
    /* ADSR Atk  */ 0x7f0000,
    /* ADSR Dec  */ 0x7f0000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x7f0000,
    /* PSG Chnl  */ PSG_PULSE_CHANNEL_2,
    /* PSG Len   */ 0,
    /* PSG Sweep */ 0,
    /* PSG Tone  */ PSG_TONE_DUTY_25,
    /* PSG Noise */ 0,
};

const struct InstrumentPSG instrumentPSGData381 = {
    /* Type      */ INSTRUMENT_PSG,
    /* Key       */ 0x3C,
    /* Panning   */ 127,
    /* PSG Wave  */ NULL,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7e0000,
    /* ADSR Atk  */ 0x7f0000,
    /* ADSR Dec  */ 0x7f0000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x7f0000,
    /* PSG Chnl  */ PSG_PULSE_CHANNEL_2,
    /* PSG Len   */ 0,
    /* PSG Sweep */ 0,
    /* PSG Tone  */ PSG_TONE_DUTY_50,
    /* PSG Noise */ 0,
};

const struct InstrumentPSG instrumentPSGData382 = {
    /* Type      */ INSTRUMENT_PSG,
    /* Key       */ 0x3C,
    /* Panning   */ 127,
    /* PSG Wave  */ NULL,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7e0000,
    /* ADSR Atk  */ 0x7f0000,
    /* ADSR Dec  */ 0x7f0000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
    /* PSG Chnl  */ PSG_PULSE_CHANNEL_2,
    /* PSG Len   */ 0,
    /* PSG Sweep */ 0,
    /* PSG Tone  */ PSG_TONE_DUTY_12_5,
    /* PSG Noise */ 0,
};

const struct InstrumentPSG instrumentPSGData383 = {
    /* Type      */ INSTRUMENT_PSG,
    /* Key       */ 0x3C,
    /* Panning   */ 127,
    /* PSG Wave  */ NULL,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7e0000,
    /* ADSR Atk  */ 0x7f0000,
    /* ADSR Dec  */ 0x7f0000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
    /* PSG Chnl  */ PSG_PULSE_CHANNEL_2,
    /* PSG Len   */ 0,
    /* PSG Sweep */ 0,
    /* PSG Tone  */ PSG_TONE_DUTY_25,
    /* PSG Noise */ 0,
};

const struct InstrumentPSG instrumentPSGData384 = {
    /* Type      */ INSTRUMENT_PSG,
    /* Key       */ 0x3C,
    /* Panning   */ 127,
    /* PSG Wave  */ NULL,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7e0000,
    /* ADSR Atk  */ 0x7f0000,
    /* ADSR Dec  */ 0x7f0000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
    /* PSG Chnl  */ PSG_PULSE_CHANNEL_2,
    /* PSG Len   */ 0,
    /* PSG Sweep */ 0,
    /* PSG Tone  */ PSG_TONE_DUTY_50,
    /* PSG Noise */ 0,
};

const struct InstrumentPSG instrumentPSGData385 = {
    /* Type      */ INSTRUMENT_PSG,
    /* Key       */ 0x3C,
    /* Panning   */ 127,
    /* PSG Wave  */ NULL,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7e0000,
    /* ADSR Atk  */ 0x7f0000,
    /* ADSR Dec  */ 0x7f0000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x091249,
    /* PSG Chnl  */ PSG_PULSE_CHANNEL_2,
    /* PSG Len   */ 0,
    /* PSG Sweep */ 0,
    /* PSG Tone  */ PSG_TONE_DUTY_12_5,
    /* PSG Noise */ 0,
};

const struct InstrumentPSG instrumentPSGData386 = {
    /* Type      */ INSTRUMENT_PSG,
    /* Key       */ 0x3C,
    /* Panning   */ 127,
    /* PSG Wave  */ NULL,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7e0000,
    /* ADSR Atk  */ 0x7f0000,
    /* ADSR Dec  */ 0x7f0000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x091249,
    /* PSG Chnl  */ PSG_PULSE_CHANNEL_2,
    /* PSG Len   */ 0,
    /* PSG Sweep */ 0,
    /* PSG Tone  */ PSG_TONE_DUTY_25,
    /* PSG Noise */ 0,
};

const struct InstrumentPSG instrumentPSGData387 = {
    /* Type      */ INSTRUMENT_PSG,
    /* Key       */ 0x3C,
    /* Panning   */ 127,
    /* PSG Wave  */ NULL,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7e0000,
    /* ADSR Atk  */ 0x7f0000,
    /* ADSR Dec  */ 0x7f0000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x091249,
    /* PSG Chnl  */ PSG_PULSE_CHANNEL_2,
    /* PSG Len   */ 0,
    /* PSG Sweep */ 0,
    /* PSG Tone  */ PSG_TONE_DUTY_50,
    /* PSG Noise */ 0,
};

const struct InstrumentPSG instrumentPSGData388 = {
    /* Type      */ INSTRUMENT_PSG,
    /* Key       */ 0x3C,
    /* Panning   */ 127,
    /* PSG Wave  */ NULL,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x7f0000,
    /* ADSR Dec  */ 0x054aaa,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x091249,
    /* PSG Chnl  */ PSG_PULSE_CHANNEL_2,
    /* PSG Len   */ 0,
    /* PSG Sweep */ 0,
    /* PSG Tone  */ PSG_TONE_DUTY_12_5,
    /* PSG Noise */ 0,
};

const struct InstrumentPSG instrumentPSGData389 = {
    /* Type      */ INSTRUMENT_PSG,
    /* Key       */ 0x3C,
    /* Panning   */ 127,
    /* PSG Wave  */ (u32 *) 0x08a86870, // POINTER
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7e0000,
    /* ADSR Atk  */ 0x7f0000,
    /* ADSR Dec  */ 0x7f0000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x7f0000,
    /* PSG Chnl  */ PSG_WAVE_CHANNEL,
    /* PSG Len   */ 0,
    /* PSG Sweep */ 0,
    /* PSG Tone  */ 0,
    /* PSG Noise */ 0,
};

const struct InstrumentPSG instrumentPSGData390 = {
    /* Type      */ INSTRUMENT_PSG,
    /* Key       */ 0x3C,
    /* Panning   */ 127,
    /* PSG Wave  */ (u32 *) 0x08a86880, // POINTER
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7e0000,
    /* ADSR Atk  */ 0x7f0000,
    /* ADSR Dec  */ 0x7f0000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x7f0000,
    /* PSG Chnl  */ PSG_WAVE_CHANNEL,
    /* PSG Len   */ 0,
    /* PSG Sweep */ 0,
    /* PSG Tone  */ 0,
    /* PSG Noise */ 0,
};

const struct InstrumentPSG instrumentPSGData391 = {
    /* Type      */ INSTRUMENT_PSG,
    /* Key       */ 0x3C,
    /* Panning   */ 127,
    /* PSG Wave  */ (u32 *) 0x08a86890, // POINTER
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7e0000,
    /* ADSR Atk  */ 0x7f0000,
    /* ADSR Dec  */ 0x7f0000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x7f0000,
    /* PSG Chnl  */ PSG_WAVE_CHANNEL,
    /* PSG Len   */ 0,
    /* PSG Sweep */ 0,
    /* PSG Tone  */ 0,
    /* PSG Noise */ 0,
};

const struct InstrumentPSG instrumentPSGData392 = {
    /* Type      */ INSTRUMENT_PSG,
    /* Key       */ 0x3C,
    /* Panning   */ 127,
    /* PSG Wave  */ (u32 *) 0x08a868a0, // POINTER
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7e0000,
    /* ADSR Atk  */ 0x7f0000,
    /* ADSR Dec  */ 0x7f0000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x7f0000,
    /* PSG Chnl  */ PSG_WAVE_CHANNEL,
    /* PSG Len   */ 0,
    /* PSG Sweep */ 0,
    /* PSG Tone  */ 0,
    /* PSG Noise */ 0,
};

const struct InstrumentPSG instrumentPSGData393 = {
    /* Type      */ INSTRUMENT_PSG,
    /* Key       */ 0x3C,
    /* Panning   */ 127,
    /* PSG Wave  */ (u32 *) 0x08a868b0, // POINTER
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7e0000,
    /* ADSR Atk  */ 0x7f0000,
    /* ADSR Dec  */ 0x7f0000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x7f0000,
    /* PSG Chnl  */ PSG_WAVE_CHANNEL,
    /* PSG Len   */ 0,
    /* PSG Sweep */ 0,
    /* PSG Tone  */ 0,
    /* PSG Noise */ 0,
};

const struct InstrumentPSG instrumentPSGData394 = {
    /* Type      */ INSTRUMENT_PSG,
    /* Key       */ 0x3C,
    /* Panning   */ 127,
    /* PSG Wave  */ (u32 *) 0x08a868c0, // POINTER
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7e0000,
    /* ADSR Atk  */ 0x7f0000,
    /* ADSR Dec  */ 0x7f0000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x7f0000,
    /* PSG Chnl  */ PSG_WAVE_CHANNEL,
    /* PSG Len   */ 0,
    /* PSG Sweep */ 0,
    /* PSG Tone  */ 0,
    /* PSG Noise */ 0,
};

const struct InstrumentPSG instrumentPSGData395 = {
    /* Type      */ INSTRUMENT_PSG,
    /* Key       */ 0x3C,
    /* Panning   */ 127,
    /* PSG Wave  */ (u32 *) 0x08a868d0, // POINTER
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7e0000,
    /* ADSR Atk  */ 0x7f0000,
    /* ADSR Dec  */ 0x7f0000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x7f0000,
    /* PSG Chnl  */ PSG_WAVE_CHANNEL,
    /* PSG Len   */ 0,
    /* PSG Sweep */ 0,
    /* PSG Tone  */ 0,
    /* PSG Noise */ 0,
};

const struct InstrumentPSG instrumentPSGData396 = {
    /* Type      */ INSTRUMENT_PSG,
    /* Key       */ 0x3C,
    /* Panning   */ 127,
    /* PSG Wave  */ (u32 *) 0x08a86870, // POINTER
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7e0000,
    /* ADSR Atk  */ 0x7f0000,
    /* ADSR Dec  */ 0x7f0000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
    /* PSG Chnl  */ PSG_WAVE_CHANNEL,
    /* PSG Len   */ 0,
    /* PSG Sweep */ 0,
    /* PSG Tone  */ 0,
    /* PSG Noise */ 0,
};

const struct InstrumentPSG instrumentPSGData397 = {
    /* Type      */ INSTRUMENT_PSG,
    /* Key       */ 0x3C,
    /* Panning   */ 127,
    /* PSG Wave  */ NULL,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7e0000,
    /* ADSR Atk  */ 0x7f0000,
    /* ADSR Dec  */ 0x7f0000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x7f0000,
    /* PSG Chnl  */ PSG_NOISE_CHANNEL,
    /* PSG Len   */ 0,
    /* PSG Sweep */ 0,
    /* PSG Tone  */ 0,
    /* PSG Noise */ PSG_NOISE_COUNTER_15,
};

const struct InstrumentPSG instrumentPSGData398 = {
    /* Type      */ INSTRUMENT_PSG,
    /* Key       */ 0x3C,
    /* Panning   */ 127,
    /* PSG Wave  */ NULL,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7e0000,
    /* ADSR Atk  */ 0x7f0000,
    /* ADSR Dec  */ 0x7f0000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
    /* PSG Chnl  */ PSG_NOISE_CHANNEL,
    /* PSG Len   */ 0,
    /* PSG Sweep */ 0,
    /* PSG Tone  */ 0,
    /* PSG Noise */ PSG_NOISE_COUNTER_15,
};

const struct InstrumentPSG instrumentPSGData399 = {
    /* Type      */ INSTRUMENT_PSG,
    /* Key       */ 0x3C,
    /* Panning   */ 127,
    /* PSG Wave  */ NULL,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7e0000,
    /* ADSR Atk  */ 0x7f0000,
    /* ADSR Dec  */ 0x7f0000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x077878,
    /* PSG Chnl  */ PSG_NOISE_CHANNEL,
    /* PSG Len   */ 0,
    /* PSG Sweep */ 0,
    /* PSG Tone  */ 0,
    /* PSG Noise */ PSG_NOISE_COUNTER_15,
};

const struct InstrumentPSG instrumentPSGData400 = {
    /* Type      */ INSTRUMENT_PSG,
    /* Key       */ 0x3C,
    /* Panning   */ 127,
    /* PSG Wave  */ NULL,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7e0000,
    /* ADSR Atk  */ 0x7f0000,
    /* ADSR Dec  */ 0x7f0000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x7f0000,
    /* PSG Chnl  */ PSG_NOISE_CHANNEL,
    /* PSG Len   */ 0,
    /* PSG Sweep */ 0,
    /* PSG Tone  */ 0,
    /* PSG Noise */ PSG_NOISE_COUNTER_7,
};

const struct InstrumentPSG instrumentPSGData401 = {
    /* Type      */ INSTRUMENT_PSG,
    /* Key       */ 0x3C,
    /* Panning   */ 127,
    /* PSG Wave  */ NULL,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7e0000,
    /* ADSR Atk  */ 0x7f0000,
    /* ADSR Dec  */ 0x7f0000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
    /* PSG Chnl  */ PSG_NOISE_CHANNEL,
    /* PSG Len   */ 0,
    /* PSG Sweep */ 0,
    /* PSG Tone  */ 0,
    /* PSG Noise */ PSG_NOISE_COUNTER_7,
};

const struct InstrumentPSG instrumentPSGData402 = {
    /* Type      */ INSTRUMENT_PSG,
    /* Key       */ 0x3C,
    /* Panning   */ 127,
    /* PSG Wave  */ NULL,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7e0000,
    /* ADSR Atk  */ 0x7f0000,
    /* ADSR Dec  */ 0x7f0000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x077878,
    /* PSG Chnl  */ PSG_NOISE_CHANNEL,
    /* PSG Len   */ 0,
    /* PSG Sweep */ 0,
    /* PSG Tone  */ 0,
    /* PSG Noise */ PSG_NOISE_COUNTER_7,
};

const struct InstrumentPSG instrumentPSGData403 = {
    /* Type      */ INSTRUMENT_PSG,
    /* Key       */ 0x3C,
    /* Panning   */ 127,
    /* PSG Wave  */ NULL,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7e0000,
    /* ADSR Atk  */ 0x7f0000,
    /* ADSR Dec  */ 0x7f0000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x7f0000,
    /* PSG Chnl  */ PSG_PULSE_CHANNEL_1,
    /* PSG Len   */ 0,
    /* PSG Sweep */ 20,
    /* PSG Tone  */ PSG_TONE_DUTY_25,
    /* PSG Noise */ 0,
};

const struct InstrumentPSG instrumentPSGData404 = {
    /* Type      */ INSTRUMENT_PSG,
    /* Key       */ 0x3C,
    /* Panning   */ 127,
    /* PSG Wave  */ NULL,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7e0000,
    /* ADSR Atk  */ 0x7f0000,
    /* ADSR Dec  */ 0x7f0000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x7f0000,
    /* PSG Chnl  */ PSG_PULSE_CHANNEL_1,
    /* PSG Len   */ 0,
    /* PSG Sweep */ 22,
    /* PSG Tone  */ PSG_TONE_DUTY_25,
    /* PSG Noise */ 0,
};

const struct InstrumentPSG instrumentPSGData405 = {
    /* Type      */ INSTRUMENT_PSG,
    /* Key       */ 0x3C,
    /* Panning   */ 127,
    /* PSG Wave  */ NULL,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7e0000,
    /* ADSR Atk  */ 0x7f0000,
    /* ADSR Dec  */ 0x7f0000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x7f0000,
    /* PSG Chnl  */ PSG_PULSE_CHANNEL_1,
    /* PSG Len   */ 0,
    /* PSG Sweep */ 36,
    /* PSG Tone  */ PSG_TONE_DUTY_25,
    /* PSG Noise */ 0,
};

const struct InstrumentPSG instrumentPSGData406 = {
    /* Type      */ INSTRUMENT_PSG,
    /* Key       */ 0x3C,
    /* Panning   */ 127,
    /* PSG Wave  */ NULL,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7e0000,
    /* ADSR Atk  */ 0x7f0000,
    /* ADSR Dec  */ 0x7f0000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x7f0000,
    /* PSG Chnl  */ PSG_PULSE_CHANNEL_1,
    /* PSG Len   */ 0,
    /* PSG Sweep */ 38,
    /* PSG Tone  */ PSG_TONE_DUTY_25,
    /* PSG Noise */ 0,
};

const struct InstrumentPSG instrumentPSGData407 = {
    /* Type      */ INSTRUMENT_PSG,
    /* Key       */ 0x3C,
    /* Panning   */ 127,
    /* PSG Wave  */ NULL,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7e0000,
    /* ADSR Atk  */ 0x7f0000,
    /* ADSR Dec  */ 0x7f0000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x7f0000,
    /* PSG Chnl  */ PSG_PULSE_CHANNEL_1,
    /* PSG Len   */ 0,
    /* PSG Sweep */ 68,
    /* PSG Tone  */ PSG_TONE_DUTY_25,
    /* PSG Noise */ 0,
};

const struct InstrumentPSG instrumentPSGData408 = {
    /* Type      */ INSTRUMENT_PSG,
    /* Key       */ 0x3C,
    /* Panning   */ 127,
    /* PSG Wave  */ NULL,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7e0000,
    /* ADSR Atk  */ 0x7f0000,
    /* ADSR Dec  */ 0x7f0000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x7f0000,
    /* PSG Chnl  */ PSG_PULSE_CHANNEL_1,
    /* PSG Len   */ 0,
    /* PSG Sweep */ 84,
    /* PSG Tone  */ PSG_TONE_DUTY_25,
    /* PSG Noise */ 0,
};

const struct InstrumentPSG instrumentPSGData409 = {
    /* Type      */ INSTRUMENT_PSG,
    /* Key       */ 0x3C,
    /* Panning   */ 127,
    /* PSG Wave  */ NULL,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7e0000,
    /* ADSR Atk  */ 0x7f0000,
    /* ADSR Dec  */ 0x7f0000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x7f0000,
    /* PSG Chnl  */ PSG_PULSE_CHANNEL_1,
    /* PSG Len   */ 0,
    /* PSG Sweep */ 20,
    /* PSG Tone  */ PSG_TONE_DUTY_12_5,
    /* PSG Noise */ 0,
};

const struct InstrumentPSG instrumentPSGData410 = {
    /* Type      */ INSTRUMENT_PSG,
    /* Key       */ 0x3C,
    /* Panning   */ 127,
    /* PSG Wave  */ NULL,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7e0000,
    /* ADSR Atk  */ 0x7f0000,
    /* ADSR Dec  */ 0x7f0000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x7f0000,
    /* PSG Chnl  */ PSG_PULSE_CHANNEL_1,
    /* PSG Len   */ 0,
    /* PSG Sweep */ 22,
    /* PSG Tone  */ PSG_TONE_DUTY_12_5,
    /* PSG Noise */ 0,
};

const struct InstrumentPSG instrumentPSGData411 = {
    /* Type      */ INSTRUMENT_PSG,
    /* Key       */ 0x3C,
    /* Panning   */ 127,
    /* PSG Wave  */ NULL,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7e0000,
    /* ADSR Atk  */ 0x7f0000,
    /* ADSR Dec  */ 0x7f0000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x7f0000,
    /* PSG Chnl  */ PSG_PULSE_CHANNEL_1,
    /* PSG Len   */ 0,
    /* PSG Sweep */ 36,
    /* PSG Tone  */ PSG_TONE_DUTY_12_5,
    /* PSG Noise */ 0,
};

const struct InstrumentPSG instrumentPSGData412 = {
    /* Type      */ INSTRUMENT_PSG,
    /* Key       */ 0x3C,
    /* Panning   */ 127,
    /* PSG Wave  */ NULL,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7e0000,
    /* ADSR Atk  */ 0x7f0000,
    /* ADSR Dec  */ 0x7f0000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x7f0000,
    /* PSG Chnl  */ PSG_PULSE_CHANNEL_1,
    /* PSG Len   */ 0,
    /* PSG Sweep */ 38,
    /* PSG Tone  */ PSG_TONE_DUTY_12_5,
    /* PSG Noise */ 0,
};

const struct InstrumentPSG instrumentPSGData413 = {
    /* Type      */ INSTRUMENT_PSG,
    /* Key       */ 0x3C,
    /* Panning   */ 127,
    /* PSG Wave  */ NULL,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7e0000,
    /* ADSR Atk  */ 0x7f0000,
    /* ADSR Dec  */ 0x7f0000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x7f0000,
    /* PSG Chnl  */ PSG_PULSE_CHANNEL_1,
    /* PSG Len   */ 0,
    /* PSG Sweep */ 68,
    /* PSG Tone  */ PSG_TONE_DUTY_12_5,
    /* PSG Noise */ 0,
};

const struct InstrumentPSG instrumentPSGData414 = {
    /* Type      */ INSTRUMENT_PSG,
    /* Key       */ 0x3C,
    /* Panning   */ 127,
    /* PSG Wave  */ NULL,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7e0000,
    /* ADSR Atk  */ 0x7f0000,
    /* ADSR Dec  */ 0x7f0000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x7f0000,
    /* PSG Chnl  */ PSG_PULSE_CHANNEL_1,
    /* PSG Len   */ 0,
    /* PSG Sweep */ 84,
    /* PSG Tone  */ PSG_TONE_DUTY_12_5,
    /* PSG Noise */ 0,
};

const struct InstrumentPSG instrumentPSGData415 = {
    /* Type      */ INSTRUMENT_PSG,
    /* Key       */ 0x3C,
    /* Panning   */ 127,
    /* PSG Wave  */ NULL,
    /* ADSR Init */ 0x73745d,
    /* ADSR Sus  */ 0x400000,
    /* ADSR Atk  */ 0x1fc000,
    /* ADSR Dec  */ 0x04b425,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x04611a,
    /* PSG Chnl  */ PSG_PULSE_CHANNEL_1,
    /* PSG Len   */ 0,
    /* PSG Sweep */ 0,
    /* PSG Tone  */ PSG_TONE_DUTY_50,
    /* PSG Noise */ 0,
};

const struct InstrumentPSG instrumentPSGData416 = {
    /* Type      */ INSTRUMENT_PSG,
    /* Key       */ 0x3C,
    /* Panning   */ 127,
    /* PSG Wave  */ NULL,
    /* ADSR Init */ 0x73745d,
    /* ADSR Sus  */ 0x400000,
    /* ADSR Atk  */ 0x1fc000,
    /* ADSR Dec  */ 0x04b425,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x04611a,
    /* PSG Chnl  */ PSG_PULSE_CHANNEL_2,
    /* PSG Len   */ 0,
    /* PSG Sweep */ 0,
    /* PSG Tone  */ PSG_TONE_DUTY_50,
    /* PSG Noise */ 0,
};

extern const struct SampleInfo sfx_236SampleInfo;
const struct InstrumentPCM instrumentPCMData417 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_236SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x218000,
};

extern const struct SampleInfo sfx_237SampleInfo;
const struct InstrumentPCM instrumentPCMData418 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_237SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_202SampleInfo;
const struct InstrumentPCM instrumentPCMData419 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_202SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x60364d,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x015029,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_003SampleInfo;
const struct InstrumentPCM instrumentPCMData420 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_003SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_204SampleInfo;
const struct InstrumentPCM instrumentPCMData421 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_204SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x00540a,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_196SampleInfo;
const struct InstrumentPCM instrumentPCMData422 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_196SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x00a814,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_238SampleInfo;
const struct InstrumentPCM instrumentPCMData423 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_238SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x19a814,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x00a814,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_239SampleInfo;
const struct InstrumentPCM instrumentPCMData424 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_239SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x024c48,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x18ea90,
};

extern const struct SampleInfo sfx_240SampleInfo;
const struct InstrumentPCM instrumentPCMData425 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_240SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x01a433,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_241SampleInfo;
const struct InstrumentPCM instrumentPCMData426 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_241SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_242SampleInfo;
const struct InstrumentPCM instrumentPCMData427 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_242SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_243SampleInfo;
const struct InstrumentPCM instrumentPCMData428 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_243SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_244SampleInfo;
const struct InstrumentPCM instrumentPCMData429 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_244SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_245SampleInfo;
const struct InstrumentPCM instrumentPCMData430 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_245SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_246SampleInfo;
const struct InstrumentPCM instrumentPCMData431 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_246SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_247SampleInfo;
const struct InstrumentPCM instrumentPCMData432 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_247SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_248SampleInfo;
const struct InstrumentPCM instrumentPCMData433 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_248SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_249SampleInfo;
const struct InstrumentPCM instrumentPCMData434 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_249SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_250SampleInfo;
const struct InstrumentPCM instrumentPCMData435 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_250SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_251SampleInfo;
const struct InstrumentPCM instrumentPCMData436 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_251SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_252SampleInfo;
const struct InstrumentPCM instrumentPCMData437 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_252SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_253SampleInfo;
const struct InstrumentPCM instrumentPCMData438 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_253SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_254SampleInfo;
const struct InstrumentPCM instrumentPCMData439 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_254SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_255SampleInfo;
const struct InstrumentPCM instrumentPCMData440 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_255SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_256SampleInfo;
const struct InstrumentPCM instrumentPCMData441 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_256SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_257SampleInfo;
const struct InstrumentPCM instrumentPCMData442 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_257SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_258SampleInfo;
const struct InstrumentPCM instrumentPCMData443 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_258SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_259SampleInfo;
const struct InstrumentPCM instrumentPCMData444 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_259SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_260SampleInfo;
const struct InstrumentPCM instrumentPCMData445 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_260SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_229SampleInfo;
const struct InstrumentPCM instrumentPCMData446 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_229SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x00fc1f,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_017SampleInfo;
const struct InstrumentPCM instrumentPCMData447 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_017SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x01f83e,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x082378,
};

extern const struct SampleInfo sfx_261SampleInfo;
const struct InstrumentPCM instrumentPCMData448 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_261SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x01a433,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x18ea90,
};

extern const struct SampleInfo sfx_262SampleInfo;
const struct InstrumentPCM instrumentPCMData449 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_262SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x335029,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x00fc1f,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_263SampleInfo;
const struct InstrumentPCM instrumentPCMData450 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_263SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

const struct InstrumentSubbankMultiKey instrumentSubbankMultiKeyData451 = {
    /* Type      */ INSTRUMENT_SUBBANK_MULTI_KEY,
    /* Total     */ 12,
    /* Splits    */ (u8 *) 0x08a865ac, // POINTER
    /* Sub-Bank  */ (const union Instrument **) 0x08a95248, // POINTER
};

extern const struct SampleInfo sfx_264SampleInfo;
const struct InstrumentPCM instrumentPCMData452 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_264SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x01a433,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x18ea90,
};

extern const struct SampleInfo sfx_265SampleInfo;
const struct InstrumentPCM instrumentPCMData453 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_265SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x267c1f,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x034867,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_266SampleInfo;
const struct InstrumentPCM instrumentPCMData454 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_266SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_267SampleInfo;
const struct InstrumentPCM instrumentPCMData455 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_267SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_268SampleInfo;
const struct InstrumentPCM instrumentPCMData456 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_268SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_269SampleInfo;
const struct InstrumentPCM instrumentPCMData457 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_269SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_270SampleInfo;
const struct InstrumentPCM instrumentPCMData458 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_270SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_271SampleInfo;
const struct InstrumentPCM instrumentPCMData459 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_271SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_272SampleInfo;
const struct InstrumentPCM instrumentPCMData460 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_272SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_273SampleInfo;
const struct InstrumentPCM instrumentPCMData461 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_273SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_274SampleInfo;
const struct InstrumentPCM instrumentPCMData462 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_274SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_275SampleInfo;
const struct InstrumentPCM instrumentPCMData463 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_275SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

const struct InstrumentSubbankSingleKey instrumentSubbankSingleKeyData464 = {
    /* Type      */ INSTRUMENT_SUBBANK_SINGLE_KEY,
    /* Total     */ 36,
    /* Sub-Bank  */ (const union Instrument **) 0x08a9940c, // POINTER
};

extern const struct SampleInfo sfx_221SampleInfo;
const struct InstrumentPCM instrumentPCMData465 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_221SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x0b8000,
};

extern const struct SampleInfo sfx_122SampleInfo;
const struct InstrumentPCM instrumentPCMData466 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_122SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

const struct InstrumentSubbankSingleKey instrumentSubbankSingleKeyData467 = {
    /* Type      */ INSTRUMENT_SUBBANK_SINGLE_KEY,
    /* Total     */ 36,
    /* Sub-Bank  */ (const union Instrument **) 0x08a99d3c, // POINTER
};

extern const struct SampleInfo sfx_276SampleInfo;
const struct InstrumentPCM instrumentPCMData468 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_276SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x031548,
};

extern const struct SampleInfo sfx_277SampleInfo;
const struct InstrumentPCM instrumentPCMData469 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_277SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_200SampleInfo;
const struct InstrumentPCM instrumentPCMData470 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_200SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x01a433,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_194SampleInfo;
const struct InstrumentPCM instrumentPCMData471 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_194SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x015029,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_195SampleInfo;
const struct InstrumentPCM instrumentPCMData472 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_195SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x0690ce,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x18ea90,
};

extern const struct SampleInfo sfx_278SampleInfo;
const struct InstrumentPCM instrumentPCMData473 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_278SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x106a05,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x18ea90,
};

extern const struct SampleInfo sfx_197SampleInfo;
const struct InstrumentPCM instrumentPCMData474 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_197SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x082378,
};

extern const struct SampleInfo sfx_279SampleInfo;
const struct InstrumentPCM instrumentPCMData475 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_279SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x04ec9b,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_280SampleInfo;
const struct InstrumentPCM instrumentPCMData476 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_280SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_281SampleInfo;
const struct InstrumentPCM instrumentPCMData477 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_281SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x082378,
};

extern const struct SampleInfo sfx_198SampleInfo;
const struct InstrumentPCM instrumentPCMData478 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_198SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_282SampleInfo;
const struct InstrumentPCM instrumentPCMData479 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_282SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_283SampleInfo;
const struct InstrumentPCM instrumentPCMData480 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_283SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_284SampleInfo;
const struct InstrumentPCM instrumentPCMData481 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_284SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_285SampleInfo;
const struct InstrumentPCM instrumentPCMData482 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_285SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_117SampleInfo;
const struct InstrumentPCM instrumentPCMData483 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_117SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

const struct InstrumentSubbankSingleKey instrumentSubbankSingleKeyData484 = {
    /* Type      */ INSTRUMENT_SUBBANK_SINGLE_KEY,
    /* Total     */ 36,
    /* Sub-Bank  */ (const union Instrument **) 0x08a9957c, // POINTER
};

const struct InstrumentSubbankSingleKey instrumentSubbankSingleKeyData485 = {
    /* Type      */ INSTRUMENT_SUBBANK_SINGLE_KEY,
    /* Total     */ 36,
    /* Sub-Bank  */ (const union Instrument **) 0x08a9940c, // POINTER
};

extern const struct SampleInfo sfx_118SampleInfo;
const struct InstrumentPCM instrumentPCMData486 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_118SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_286SampleInfo;
const struct InstrumentPCM instrumentPCMData487 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_286SampleInfo,
    /* ADSR Init */ 0x000000,
    /* ADSR Sus  */ 0x267c1f,
    /* ADSR Atk  */ 0x43e0f8,
    /* ADSR Dec  */ 0x015029,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_287SampleInfo;
const struct InstrumentPCM instrumentPCMData488 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_287SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x335029,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x00fc1f,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_003SampleInfo;
const struct InstrumentPCM instrumentPCMData489 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_003SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_226SampleInfo;
const struct InstrumentPCM instrumentPCMData490 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_226SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x0690ce,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_288SampleInfo;
const struct InstrumentPCM instrumentPCMData491 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_288SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x267c1f,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x00fc1f,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x235dd1,
};

extern const struct SampleInfo sfx_289SampleInfo;
const struct InstrumentPCM instrumentPCMData492 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_289SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_200SampleInfo;
const struct InstrumentPCM instrumentPCMData493 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_200SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x01a433,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

const struct InstrumentSubbankSingleKey instrumentSubbankSingleKeyData494 = {
    /* Type      */ INSTRUMENT_SUBBANK_SINGLE_KEY,
    /* Total     */ 36,
    /* Sub-Bank  */ (const union Instrument **) 0x08a9940c, // POINTER
};

extern const struct SampleInfo sfx_290SampleInfo;
const struct InstrumentPCM instrumentPCMData495 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_290SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x0d219d,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_291SampleInfo;
const struct InstrumentPCM instrumentPCMData496 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_291SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_006SampleInfo;
const struct InstrumentPCM instrumentPCMData497 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_006SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x218000,
};

extern const struct SampleInfo sfx_292SampleInfo;
const struct InstrumentPCM instrumentPCMData498 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_292SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x0d219d,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_293SampleInfo;
const struct InstrumentPCM instrumentPCMData499 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_293SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x00fc1f,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_294SampleInfo;
const struct InstrumentPCM instrumentPCMData500 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_294SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x034867,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x0b8000,
};

extern const struct SampleInfo sfx_232SampleInfo;
const struct InstrumentPCM instrumentPCMData501 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_232SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_206SampleInfo;
const struct InstrumentPCM instrumentPCMData502 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_206SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_295SampleInfo;
const struct InstrumentPCM instrumentPCMData503 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_295SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x034867,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x0b8000,
};

const struct InstrumentSubbankSingleKey instrumentSubbankSingleKeyData504 = {
    /* Type      */ INSTRUMENT_SUBBANK_SINGLE_KEY,
    /* Total     */ 36,
    /* Sub-Bank  */ (const union Instrument **) 0x08a998e4, // POINTER
};

const struct InstrumentSubbankSingleKey instrumentSubbankSingleKeyData505 = {
    /* Type      */ INSTRUMENT_SUBBANK_SINGLE_KEY,
    /* Total     */ 36,
    /* Sub-Bank  */ (const union Instrument **) 0x08a9940c, // POINTER
};

extern const struct SampleInfo sfx_296SampleInfo;
const struct InstrumentPCM instrumentPCMData506 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_296SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x015029,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x18ea90,
};

extern const struct SampleInfo sfx_297SampleInfo;
const struct InstrumentPCM instrumentPCMData507 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_297SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x19a814,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x00a814,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_298SampleInfo;
const struct InstrumentPCM instrumentPCMData508 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_298SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x00fc1f,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x082378,
};

extern const struct SampleInfo sfx_299SampleInfo;
const struct InstrumentPCM instrumentPCMData509 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_299SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x1a433b,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_204SampleInfo;
const struct InstrumentPCM instrumentPCMData510 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_204SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x034867,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_230SampleInfo;
const struct InstrumentPCM instrumentPCMData511 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_230SampleInfo,
    /* ADSR Init */ 0x000000,
    /* ADSR Sus  */ 0x19a814,
    /* ADSR Atk  */ 0x43e0f8,
    /* ADSR Dec  */ 0x00fc1f,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x18ea90,
};

const struct InstrumentSubbankSingleKey instrumentSubbankSingleKeyData512 = {
    /* Type      */ INSTRUMENT_SUBBANK_SINGLE_KEY,
    /* Total     */ 36,
    /* Sub-Bank  */ (const union Instrument **) 0x08a9940c, // POINTER
};

extern const struct SampleInfo sfx_300SampleInfo;
const struct InstrumentPCM instrumentPCMData513 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_300SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x015029,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_301SampleInfo;
const struct InstrumentPCM instrumentPCMData514 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_301SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x0690ce,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x0f6a90,
};

extern const struct SampleInfo sfx_302SampleInfo;
const struct InstrumentPCM instrumentPCMData515 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_302SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x09d936,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x0f6a90,
};

extern const struct SampleInfo sfx_303SampleInfo;
const struct InstrumentPCM instrumentPCMData516 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_303SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x00fc1f,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_304SampleInfo;
const struct InstrumentPCM instrumentPCMData517 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_304SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x00fc1f,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_234SampleInfo;
const struct InstrumentPCM instrumentPCMData518 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_234SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x034867,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_229SampleInfo;
const struct InstrumentPCM instrumentPCMData519 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_229SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_114SampleInfo;
const struct InstrumentPCM instrumentPCMData520 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_114SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_194SampleInfo;
const struct InstrumentPCM instrumentPCMData521 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_194SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x00fc1f,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_110SampleInfo;
const struct InstrumentPCM instrumentPCMData522 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_110SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x00fc1f,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_111SampleInfo;
const struct InstrumentPCM instrumentPCMData523 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_111SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x00fc1f,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

const struct InstrumentSubbankMultiKey instrumentSubbankMultiKeyData524 = {
    /* Type      */ INSTRUMENT_SUBBANK_MULTI_KEY,
    /* Total     */ 12,
    /* Splits    */ (u8 *) 0x08a865ac, // POINTER
    /* Sub-Bank  */ (const union Instrument **) 0x08a95248, // POINTER
};

extern const struct SampleInfo sfx_015SampleInfo;
const struct InstrumentPCM instrumentPCMData525 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_015SampleInfo,
    /* ADSR Init */ 0x000000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x307c1f,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_305SampleInfo;
const struct InstrumentPCM instrumentPCMData526 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_305SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x267c1f,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x00fc1f,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x235dd1,
};

extern const struct SampleInfo sfx_306SampleInfo;
const struct InstrumentPCM instrumentPCMData527 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_306SampleInfo,
    /* ADSR Init */ 0x000000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x09b26c,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_307SampleInfo;
const struct InstrumentPCM instrumentPCMData528 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_307SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x00fc1f,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

const struct InstrumentSubbankSingleKey instrumentSubbankSingleKeyData529 = {
    /* Type      */ INSTRUMENT_SUBBANK_SINGLE_KEY,
    /* Total     */ 36,
    /* Sub-Bank  */ (const union Instrument **) 0x08a9940c, // POINTER
};

extern const struct SampleInfo sfx_308SampleInfo;
const struct InstrumentPCM instrumentPCMData530 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_308SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x335029,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x00fc1f,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_238SampleInfo;
const struct InstrumentPCM instrumentPCMData531 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_238SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x19a814,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x00a814,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_309SampleInfo;
const struct InstrumentPCM instrumentPCMData532 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_309SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x19a814,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x00a814,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_114SampleInfo;
const struct InstrumentPCM instrumentPCMData533 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_114SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_310SampleInfo;
const struct InstrumentPCM instrumentPCMData534 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_310SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x00540a,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_203SampleInfo;
const struct InstrumentPCM instrumentPCMData535 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_203SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x015029,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_311SampleInfo;
const struct InstrumentPCM instrumentPCMData536 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_311SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x015029,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x0b8000,
};

extern const struct SampleInfo sfx_209SampleInfo;
const struct InstrumentPCM instrumentPCMData537 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_209SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_210SampleInfo;
const struct InstrumentPCM instrumentPCMData538 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_210SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x082378,
};

extern const struct SampleInfo sfx_229SampleInfo;
const struct InstrumentPCM instrumentPCMData539 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_229SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_211SampleInfo;
const struct InstrumentPCM instrumentPCMData540 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_211SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_262SampleInfo;
const struct InstrumentPCM instrumentPCMData541 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_262SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x335029,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x00fc1f,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_232SampleInfo;
const struct InstrumentPCM instrumentPCMData542 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_232SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_312SampleInfo;
const struct InstrumentPCM instrumentPCMData543 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_312SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x19a814,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x00a814,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_313SampleInfo;
const struct InstrumentPCM instrumentPCMData544 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_313SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x01a433,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x082378,
};

extern const struct SampleInfo sfx_277SampleInfo;
const struct InstrumentPCM instrumentPCMData545 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_277SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_314SampleInfo;
const struct InstrumentPCM instrumentPCMData546 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_314SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x015029,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_205SampleInfo;
const struct InstrumentPCM instrumentPCMData547 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_205SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x01f83e,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x082378,
};

extern const struct SampleInfo sfx_122SampleInfo;
const struct InstrumentPCM instrumentPCMData548 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_122SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_109SampleInfo;
const struct InstrumentPCM instrumentPCMData549 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_109SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x00fc1f,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

const struct InstrumentSubbankSingleKey instrumentSubbankSingleKeyData550 = {
    /* Type      */ INSTRUMENT_SUBBANK_SINGLE_KEY,
    /* Total     */ 36,
    /* Sub-Bank  */ (const union Instrument **) 0x08a9940c, // POINTER
};

extern const struct SampleInfo sfx_240SampleInfo;
const struct InstrumentPCM instrumentPCMData551 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_240SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x015029,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_315SampleInfo;
const struct InstrumentPCM instrumentPCMData552 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_315SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x0cd40a,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x015029,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_316SampleInfo;
const struct InstrumentPCM instrumentPCMData553 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_316SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_317SampleInfo;
const struct InstrumentPCM instrumentPCMData554 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_317SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x267c1f,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x00fc1f,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_239SampleInfo;
const struct InstrumentPCM instrumentPCMData555 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_239SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x024c48,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x18ea90,
};

extern const struct SampleInfo sfx_318SampleInfo;
const struct InstrumentPCM instrumentPCMData556 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_318SampleInfo,
    /* ADSR Init */ 0x000000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x1d1745,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_005SampleInfo;
const struct InstrumentPCM instrumentPCMData557 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_005SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_319SampleInfo;
const struct InstrumentPCM instrumentPCMData558 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_319SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x335029,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x00fc1f,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_320SampleInfo;
const struct InstrumentPCM instrumentPCMData559 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_320SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x335029,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x00fc1f,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

const struct InstrumentSubbankSingleKey instrumentSubbankSingleKeyData560 = {
    /* Type      */ INSTRUMENT_SUBBANK_SINGLE_KEY,
    /* Total     */ 36,
    /* Sub-Bank  */ (const union Instrument **) 0x08a9957c, // POINTER
};

const struct InstrumentSubbankSingleKey instrumentSubbankSingleKeyData561 = {
    /* Type      */ INSTRUMENT_SUBBANK_SINGLE_KEY,
    /* Total     */ 36,
    /* Sub-Bank  */ (const union Instrument **) 0x08a9940c, // POINTER
};

extern const struct SampleInfo sfx_321SampleInfo;
const struct InstrumentPCM instrumentPCMData562 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_321SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x0f6a90,
};

extern const struct SampleInfo sfx_322SampleInfo;
const struct InstrumentPCM instrumentPCMData563 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_322SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x66a052,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x1f83e0,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x235dd1,
};

extern const struct SampleInfo sfx_196SampleInfo;
const struct InstrumentPCM instrumentPCMData564 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_196SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x015029,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_314SampleInfo;
const struct InstrumentPCM instrumentPCMData565 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_314SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x015029,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_009SampleInfo;
const struct InstrumentPCM instrumentPCMData566 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_009SampleInfo,
    /* ADSR Init */ 0x000000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x4d9364,
    /* ADSR Dec  */ 0x106a05,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x055552,
};

extern const struct SampleInfo sfx_229SampleInfo;
const struct InstrumentPCM instrumentPCMData567 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_229SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_321SampleInfo;
const struct InstrumentPCM instrumentPCMData568 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_321SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x0f6a90,
};

extern const struct SampleInfo sfx_114SampleInfo;
const struct InstrumentPCM instrumentPCMData569 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_114SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

const struct InstrumentSubbankSingleKey instrumentSubbankSingleKeyData570 = {
    /* Type      */ INSTRUMENT_SUBBANK_SINGLE_KEY,
    /* Total     */ 36,
    /* Sub-Bank  */ (const union Instrument **) 0x08a9940c, // POINTER
};

extern const struct SampleInfo sfx_323SampleInfo;
const struct InstrumentPCM instrumentPCMData571 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_323SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x01a433,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x055552,
};

extern const struct SampleInfo sfx_324SampleInfo;
const struct InstrumentPCM instrumentPCMData572 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_324SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x01a433,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x0b8000,
};

extern const struct SampleInfo sfx_013SampleInfo;
const struct InstrumentPCM instrumentPCMData573 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_013SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x1556a0,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_325SampleInfo;
const struct InstrumentPCM instrumentPCMData574 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_325SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x267c1f,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x01f83e,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_326SampleInfo;
const struct InstrumentPCM instrumentPCMData575 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_326SampleInfo,
    /* ADSR Init */ 0x000000,
    /* ADSR Sus  */ 0x4cf83e,
    /* ADSR Atk  */ 0x09b26c,
    /* ADSR Dec  */ 0x034867,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_327SampleInfo;
const struct InstrumentPCM instrumentPCMData576 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_327SampleInfo,
    /* ADSR Init */ 0x000000,
    /* ADSR Sus  */ 0x402433,
    /* ADSR Atk  */ 0x307c1f,
    /* ADSR Dec  */ 0x00a814,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x0b8000,
};

extern const struct SampleInfo sfx_328SampleInfo;
const struct InstrumentPCM instrumentPCMData577 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_328SampleInfo,
    /* ADSR Init */ 0x000000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x307c1f,
    /* ADSR Dec  */ 0x1a433b,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_329SampleInfo;
const struct InstrumentPCM instrumentPCMData578 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_329SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x267c1f,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x0690ce,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_321SampleInfo;
const struct InstrumentPCM instrumentPCMData579 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_321SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x0f6a90,
};

extern const struct SampleInfo sfx_330SampleInfo;
const struct InstrumentPCM instrumentPCMData580 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_330SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_331SampleInfo;
const struct InstrumentPCM instrumentPCMData581 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_331SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_332SampleInfo;
const struct InstrumentPCM instrumentPCMData582 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_332SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_333SampleInfo;
const struct InstrumentPCM instrumentPCMData583 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_333SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

const struct InstrumentSubbankSingleKey instrumentSubbankSingleKeyData584 = {
    /* Type      */ INSTRUMENT_SUBBANK_SINGLE_KEY,
    /* Total     */ 36,
    /* Sub-Bank  */ (const union Instrument **) 0x08a9940c, // POINTER
};

extern const struct SampleInfo sfx_334SampleInfo;
const struct InstrumentPCM instrumentPCMData585 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_334SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x60364d,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x015029,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_335SampleInfo;
const struct InstrumentPCM instrumentPCMData586 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_335SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x034867,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x0f6a90,
};

extern const struct SampleInfo sfx_336SampleInfo;
const struct InstrumentPCM instrumentPCMData587 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_336SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x60364d,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x015029,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_337SampleInfo;
const struct InstrumentPCM instrumentPCMData588 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_337SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x083502,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x0f6a90,
};

extern const struct SampleInfo sfx_330SampleInfo;
const struct InstrumentPCM instrumentPCMData589 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_330SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x59cc48,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x01a433,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_226SampleInfo;
const struct InstrumentPCM instrumentPCMData590 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_226SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_041SampleInfo;
const struct InstrumentPCM instrumentPCMData591 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_041SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x60364d,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x015029,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

const struct InstrumentPSG instrumentPSGData592 = {
    /* Type      */ INSTRUMENT_PSG,
    /* Key       */ 0x3C,
    /* Panning   */ 127,
    /* PSG Wave  */ NULL,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7e0000,
    /* ADSR Atk  */ 0x7f0000,
    /* ADSR Dec  */ 0x7f0000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x7f0000,
    /* PSG Chnl  */ PSG_PULSE_CHANNEL_1,
    /* PSG Len   */ 0,
    /* PSG Sweep */ 0,
    /* PSG Tone  */ PSG_TONE_DUTY_50,
    /* PSG Noise */ 0,
};

const struct InstrumentPSG instrumentPSGData593 = {
    /* Type      */ INSTRUMENT_PSG,
    /* Key       */ 0x3C,
    /* Panning   */ 127,
    /* PSG Wave  */ NULL,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7e0000,
    /* ADSR Atk  */ 0x7f0000,
    /* ADSR Dec  */ 0x7f0000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x7f0000,
    /* PSG Chnl  */ PSG_PULSE_CHANNEL_2,
    /* PSG Len   */ 0,
    /* PSG Sweep */ 0,
    /* PSG Tone  */ PSG_TONE_DUTY_50,
    /* PSG Noise */ 0,
};

extern const struct SampleInfo sfx_315SampleInfo;
const struct InstrumentPCM instrumentPCMData594 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_315SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x0cd40a,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x015029,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_321SampleInfo;
const struct InstrumentPCM instrumentPCMData595 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_321SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x0f6a90,
};

const struct InstrumentSubbankMultiKey instrumentSubbankMultiKeyData596 = {
    /* Type      */ INSTRUMENT_SUBBANK_MULTI_KEY,
    /* Total     */ 12,
    /* Splits    */ (u8 *) 0x08a8660c, // POINTER
    /* Sub-Bank  */ (const union Instrument **) 0x08a96c10, // POINTER
};

const struct InstrumentSubbankSingleKey instrumentSubbankSingleKeyData597 = {
    /* Type      */ INSTRUMENT_SUBBANK_SINGLE_KEY,
    /* Total     */ 36,
    /* Sub-Bank  */ (const union Instrument **) 0x08a9940c, // POINTER
};

extern const struct SampleInfo sfx_338SampleInfo;
const struct InstrumentPCM instrumentPCMData598 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_338SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x60364d,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x015029,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_202SampleInfo;
const struct InstrumentPCM instrumentPCMData599 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_202SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x60364d,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x015029,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_339SampleInfo;
const struct InstrumentPCM instrumentPCMData600 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_339SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_340SampleInfo;
const struct InstrumentPCM instrumentPCMData601 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_340SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x015029,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x0b8000,
};

extern const struct SampleInfo sfx_341SampleInfo;
const struct InstrumentPCM instrumentPCMData602 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_341SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x0690ce,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_342SampleInfo;
const struct InstrumentPCM instrumentPCMData603 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_342SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x60364d,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x015029,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_321SampleInfo;
const struct InstrumentPCM instrumentPCMData604 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_321SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x0f6a90,
};

extern const struct SampleInfo sfx_009SampleInfo;
const struct InstrumentPCM instrumentPCMData605 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_009SampleInfo,
    /* ADSR Init */ 0x000000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x307c1f,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_308SampleInfo;
const struct InstrumentPCM instrumentPCMData606 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_308SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x335029,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x02a052,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_238SampleInfo;
const struct InstrumentPCM instrumentPCMData607 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_238SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x19a814,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x034867,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_311SampleInfo;
const struct InstrumentPCM instrumentPCMData608 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_311SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x015029,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x0b8000,
};

const struct InstrumentSubbankSingleKey instrumentSubbankSingleKeyData609 = {
    /* Type      */ INSTRUMENT_SUBBANK_SINGLE_KEY,
    /* Total     */ 36,
    /* Sub-Bank  */ (const union Instrument **) 0x08a9940c, // POINTER
};

extern const struct SampleInfo sfx_124SampleInfo;
const struct InstrumentPCM instrumentPCMData610 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_124SampleInfo,
    /* ADSR Init */ 0x000000,
    /* ADSR Sus  */ 0x267c1f,
    /* ADSR Atk  */ 0x26c9b2,
    /* ADSR Dec  */ 0x015029,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_313SampleInfo;
const struct InstrumentPCM instrumentPCMData611 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_313SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x034867,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x082378,
};

extern const struct SampleInfo sfx_343SampleInfo;
const struct InstrumentPCM instrumentPCMData612 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_343SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_289SampleInfo;
const struct InstrumentPCM instrumentPCMData613 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_289SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_200SampleInfo;
const struct InstrumentPCM instrumentPCMData614 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_200SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x01a433,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_110SampleInfo;
const struct InstrumentPCM instrumentPCMData615 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_110SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x00fc1f,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_111SampleInfo;
const struct InstrumentPCM instrumentPCMData616 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_111SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x00fc1f,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_344SampleInfo;
const struct InstrumentPCM instrumentPCMData617 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_344SampleInfo,
    /* ADSR Init */ 0x000000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x00f83e,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x00c000,
};

extern const struct SampleInfo sfx_345SampleInfo;
const struct InstrumentPCM instrumentPCMData618 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_345SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x18ea90,
};

extern const struct SampleInfo sfx_346SampleInfo;
const struct InstrumentPCM instrumentPCMData619 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_346SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_033SampleInfo;
const struct InstrumentPCM instrumentPCMData620 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_033SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

const struct InstrumentSubbankMultiKey instrumentSubbankMultiKeyData621 = {
    /* Type      */ INSTRUMENT_SUBBANK_MULTI_KEY,
    /* Total     */ 12,
    /* Splits    */ (u8 *) 0x08a865ac, // POINTER
    /* Sub-Bank  */ (const union Instrument **) 0x08a97010, // POINTER
};

const struct InstrumentSubbankSingleKey instrumentSubbankSingleKeyData622 = {
    /* Type      */ INSTRUMENT_SUBBANK_SINGLE_KEY,
    /* Total     */ 36,
    /* Sub-Bank  */ (const union Instrument **) 0x08a9940c, // POINTER
};

extern const struct SampleInfo sfx_347SampleInfo;
const struct InstrumentPCM instrumentPCMData623 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_347SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x01a433,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_201SampleInfo;
const struct InstrumentPCM instrumentPCMData624 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_201SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x01f83e,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_348SampleInfo;
const struct InstrumentPCM instrumentPCMData625 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_348SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x335029,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x0690ce,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_199SampleInfo;
const struct InstrumentPCM instrumentPCMData626 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_199SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_349SampleInfo;
const struct InstrumentPCM instrumentPCMData627 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_349SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_350SampleInfo;
const struct InstrumentPCM instrumentPCMData628 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_350SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_351SampleInfo;
const struct InstrumentPCM instrumentPCMData629 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_351SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_352SampleInfo;
const struct InstrumentPCM instrumentPCMData630 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_352SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_353SampleInfo;
const struct InstrumentPCM instrumentPCMData631 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_353SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_229SampleInfo;
const struct InstrumentPCM instrumentPCMData632 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_229SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x034867,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_354SampleInfo;
const struct InstrumentPCM instrumentPCMData633 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_354SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x335029,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x01f83e,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_015SampleInfo;
const struct InstrumentPCM instrumentPCMData634 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_015SampleInfo,
    /* ADSR Init */ 0x000000,
    /* ADSR Sus  */ 0x4cf83e,
    /* ADSR Atk  */ 0x307c1f,
    /* ADSR Dec  */ 0x015029,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

const struct InstrumentSubbankMultiKey instrumentSubbankMultiKeyData635 = {
    /* Type      */ INSTRUMENT_SUBBANK_MULTI_KEY,
    /* Total     */ 12,
    /* Splits    */ (u8 *) 0x08a8666c, // POINTER
    /* Sub-Bank  */ (const union Instrument **) 0x08a97210, // POINTER
};

const struct InstrumentSubbankSingleKey instrumentSubbankSingleKeyData636 = {
    /* Type      */ INSTRUMENT_SUBBANK_SINGLE_KEY,
    /* Total     */ 36,
    /* Sub-Bank  */ (const union Instrument **) 0x08a9940c, // POINTER
};

extern const struct SampleInfo sfx_355SampleInfo;
const struct InstrumentPCM instrumentPCMData637 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_355SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x01a433,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_356SampleInfo;
const struct InstrumentPCM instrumentPCMData638 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_356SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x01a433,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_300SampleInfo;
const struct InstrumentPCM instrumentPCMData639 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_300SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x01a433,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x218000,
};

extern const struct SampleInfo sfx_354SampleInfo;
const struct InstrumentPCM instrumentPCMData640 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_354SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x335029,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x00fc1f,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1faea0,
};

extern const struct SampleInfo sfx_113SampleInfo;
const struct InstrumentPCM instrumentPCMData641 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_113SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x235dd1,
};

extern const struct SampleInfo sfx_262SampleInfo;
const struct InstrumentPCM instrumentPCMData642 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_262SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x335029,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x00fc1f,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_206SampleInfo;
const struct InstrumentPCM instrumentPCMData643 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_206SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_290SampleInfo;
const struct InstrumentPCM instrumentPCMData644 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_290SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x0d219d,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_207SampleInfo;
const struct InstrumentPCM instrumentPCMData645 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_207SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_291SampleInfo;
const struct InstrumentPCM instrumentPCMData646 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_291SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_262SampleInfo;
const struct InstrumentPCM instrumentPCMData647 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_262SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x66a052,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x00fc1f,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

const struct InstrumentSubbankMultiKey instrumentSubbankMultiKeyData648 = {
    /* Type      */ INSTRUMENT_SUBBANK_MULTI_KEY,
    /* Total     */ 12,
    /* Splits    */ (u8 *) 0x08a865ac, // POINTER
    /* Sub-Bank  */ (const union Instrument **) 0x08a97010, // POINTER
};

const struct InstrumentSubbankSingleKey instrumentSubbankSingleKeyData649 = {
    /* Type      */ INSTRUMENT_SUBBANK_SINGLE_KEY,
    /* Total     */ 36,
    /* Sub-Bank  */ (const union Instrument **) 0x08a9940c, // POINTER
};

extern const struct SampleInfo sfx_357SampleInfo;
const struct InstrumentPCM instrumentPCMData650 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_357SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x00a814,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_358SampleInfo;
const struct InstrumentPCM instrumentPCMData651 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_358SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x00a814,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_359SampleInfo;
const struct InstrumentPCM instrumentPCMData652 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_359SampleInfo,
    /* ADSR Init */ 0x000000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x3a2e8b,
    /* ADSR Dec  */ 0x00fc1f,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_060SampleInfo;
const struct InstrumentPCM instrumentPCMData653 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_060SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x01a433,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_061SampleInfo;
const struct InstrumentPCM instrumentPCMData654 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_061SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x01a433,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_360SampleInfo;
const struct InstrumentPCM instrumentPCMData655 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_360SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x00a814,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_361SampleInfo;
const struct InstrumentPCM instrumentPCMData656 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_361SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x01a433,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_196SampleInfo;
const struct InstrumentPCM instrumentPCMData657 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_196SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x00a814,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_362SampleInfo;
const struct InstrumentPCM instrumentPCMData658 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_362SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x04ec9b,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_017SampleInfo;
const struct InstrumentPCM instrumentPCMData659 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_017SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x01f83e,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x082378,
};

const struct InstrumentSubbankMultiKey instrumentSubbankMultiKeyData660 = {
    /* Type      */ INSTRUMENT_SUBBANK_MULTI_KEY,
    /* Total     */ 12,
    /* Splits    */ (u8 *) 0x08a866cc, // POINTER
    /* Sub-Bank  */ (const union Instrument **) 0x08a97610, // POINTER
};

const struct InstrumentSubbankMultiKey instrumentSubbankMultiKeyData661 = {
    /* Type      */ INSTRUMENT_SUBBANK_MULTI_KEY,
    /* Total     */ 12,
    /* Splits    */ (u8 *) 0x08a8672c, // POINTER
    /* Sub-Bank  */ (const union Instrument **) 0x08a97610, // POINTER
};

const struct InstrumentSubbankSingleKey instrumentSubbankSingleKeyData662 = {
    /* Type      */ INSTRUMENT_SUBBANK_SINGLE_KEY,
    /* Total     */ 36,
    /* Sub-Bank  */ (const union Instrument **) 0x08a9940c, // POINTER
};

extern const struct SampleInfo sfx_006SampleInfo;
const struct InstrumentPCM instrumentPCMData663 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_006SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x218000,
};

extern const struct SampleInfo sfx_229SampleInfo;
const struct InstrumentPCM instrumentPCMData664 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_229SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_363SampleInfo;
const struct InstrumentPCM instrumentPCMData665 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_363SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x335029,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x00fc1f,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_364SampleInfo;
const struct InstrumentPCM instrumentPCMData666 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_364SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x335029,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x00fc1f,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_028SampleInfo;
const struct InstrumentPCM instrumentPCMData667 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_028SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x00540a,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_262SampleInfo;
const struct InstrumentPCM instrumentPCMData668 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_262SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x335029,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x00fc1f,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_260SampleInfo;
const struct InstrumentPCM instrumentPCMData669 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_260SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_262SampleInfo;
const struct InstrumentPCM instrumentPCMData670 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_262SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_365SampleInfo;
const struct InstrumentPCM instrumentPCMData671 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_365SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_366SampleInfo;
const struct InstrumentPCM instrumentPCMData672 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_366SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x0690ce,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_367SampleInfo;
const struct InstrumentPCM instrumentPCMData673 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_367SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_368SampleInfo;
const struct InstrumentPCM instrumentPCMData674 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_368SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x00a814,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_369SampleInfo;
const struct InstrumentPCM instrumentPCMData675 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_369SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x00a814,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_370SampleInfo;
const struct InstrumentPCM instrumentPCMData676 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_370SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x00a814,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

const struct InstrumentSubbankSingleKey instrumentSubbankSingleKeyData677 = {
    /* Type      */ INSTRUMENT_SUBBANK_SINGLE_KEY,
    /* Total     */ 36,
    /* Sub-Bank  */ (const union Instrument **) 0x08a9957c, // POINTER
};

const struct InstrumentSubbankSingleKey instrumentSubbankSingleKeyData678 = {
    /* Type      */ INSTRUMENT_SUBBANK_SINGLE_KEY,
    /* Total     */ 36,
    /* Sub-Bank  */ (const union Instrument **) 0x08a9940c, // POINTER
};

extern const struct SampleInfo sfx_371SampleInfo;
const struct InstrumentPCM instrumentPCMData679 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_371SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x01a433,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x0f6a90,
};

extern const struct SampleInfo sfx_229SampleInfo;
const struct InstrumentPCM instrumentPCMData680 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_229SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x00fc1f,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_372SampleInfo;
const struct InstrumentPCM instrumentPCMData681 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_372SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x055552,
};

extern const struct SampleInfo sfx_262SampleInfo;
const struct InstrumentPCM instrumentPCMData682 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_262SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x335029,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x00fc1f,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_015SampleInfo;
const struct InstrumentPCM instrumentPCMData683 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_015SampleInfo,
    /* ADSR Init */ 0x000000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x307c1f,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_018SampleInfo;
const struct InstrumentPCM instrumentPCMData684 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_018SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x00a814,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

const struct InstrumentSubbankSingleKey instrumentSubbankSingleKeyData685 = {
    /* Type      */ INSTRUMENT_SUBBANK_SINGLE_KEY,
    /* Total     */ 36,
    /* Sub-Bank  */ (const union Instrument **) 0x08a9957c, // POINTER
};

const struct InstrumentSubbankSingleKey instrumentSubbankSingleKeyData686 = {
    /* Type      */ INSTRUMENT_SUBBANK_SINGLE_KEY,
    /* Total     */ 36,
    /* Sub-Bank  */ (const union Instrument **) 0x08a9940c, // POINTER
};

extern const struct SampleInfo sfx_373SampleInfo;
const struct InstrumentPCM instrumentPCMData687 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_373SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x01f83e,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_374SampleInfo;
const struct InstrumentPCM instrumentPCMData688 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_374SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x01f83e,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_375SampleInfo;
const struct InstrumentPCM instrumentPCMData689 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_375SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x01f83e,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x18ea90,
};

extern const struct SampleInfo sfx_376SampleInfo;
const struct InstrumentPCM instrumentPCMData690 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_376SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x00fc1f,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_260SampleInfo;
const struct InstrumentPCM instrumentPCMData691 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_260SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_377SampleInfo;
const struct InstrumentPCM instrumentPCMData692 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_377SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_378SampleInfo;
const struct InstrumentPCM instrumentPCMData693 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_378SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x335029,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x00fc1f,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_379SampleInfo;
const struct InstrumentPCM instrumentPCMData694 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_379SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x03f07c,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_261SampleInfo;
const struct InstrumentPCM instrumentPCMData695 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_261SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x01a433,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x18ea90,
};

extern const struct SampleInfo sfx_261SampleInfo;
const struct InstrumentPCM instrumentPCMData696 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_261SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x335029,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x01a433,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x18ea90,
};

extern const struct SampleInfo sfx_113SampleInfo;
const struct InstrumentPCM instrumentPCMData697 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_113SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x235dd1,
};

extern const struct SampleInfo sfx_028SampleInfo;
const struct InstrumentPCM instrumentPCMData698 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_028SampleInfo,
    /* ADSR Init */ 0x000000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x26c9b2,
    /* ADSR Dec  */ 0x00fc1f,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_380SampleInfo;
const struct InstrumentPCM instrumentPCMData699 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_380SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x00540a,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_381SampleInfo;
const struct InstrumentPCM instrumentPCMData700 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_381SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x01f83e,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_293SampleInfo;
const struct InstrumentPCM instrumentPCMData701 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_293SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x034867,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_289SampleInfo;
const struct InstrumentPCM instrumentPCMData702 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_289SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_346SampleInfo;
const struct InstrumentPCM instrumentPCMData703 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_346SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_375SampleInfo;
const struct InstrumentPCM instrumentPCMData704 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_375SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x01f83e,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

const struct InstrumentSubbankMultiKey instrumentSubbankMultiKeyData705 = {
    /* Type      */ INSTRUMENT_SUBBANK_MULTI_KEY,
    /* Total     */ 12,
    /* Splits    */ (u8 *) 0x08a865ac, // POINTER
    /* Sub-Bank  */ (const union Instrument **) 0x08a97010, // POINTER
};

const struct InstrumentSubbankMultiKey instrumentSubbankMultiKeyData706 = {
    /* Type      */ INSTRUMENT_SUBBANK_MULTI_KEY,
    /* Total     */ 48,
    /* Splits    */ (u8 *) 0x08a8678c, // POINTER
    /* Sub-Bank  */ (const union Instrument **) 0x08a97c10, // POINTER
};

const struct InstrumentSubbankSingleKey instrumentSubbankSingleKeyData707 = {
    /* Type      */ INSTRUMENT_SUBBANK_SINGLE_KEY,
    /* Total     */ 36,
    /* Sub-Bank  */ (const union Instrument **) 0x08a9957c, // POINTER
};

const struct InstrumentSubbankSingleKey instrumentSubbankSingleKeyData708 = {
    /* Type      */ INSTRUMENT_SUBBANK_SINGLE_KEY,
    /* Total     */ 36,
    /* Sub-Bank  */ (const union Instrument **) 0x08a9940c, // POINTER
};

extern const struct SampleInfo sfx_382SampleInfo;
const struct InstrumentPCM instrumentPCMData709 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_382SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x01f83e,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

const struct InstrumentPSG instrumentPSGData710 = {
    /* Type      */ INSTRUMENT_PSG,
    /* Key       */ 0x3C,
    /* Panning   */ 127,
    /* PSG Wave  */ NULL,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7e0000,
    /* ADSR Atk  */ 0x7f0000,
    /* ADSR Dec  */ 0x7f0000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
    /* PSG Chnl  */ PSG_PULSE_CHANNEL_1,
    /* PSG Len   */ 0,
    /* PSG Sweep */ 0,
    /* PSG Tone  */ PSG_TONE_DUTY_50,
    /* PSG Noise */ 0,
};

const struct InstrumentPSG instrumentPSGData711 = {
    /* Type      */ INSTRUMENT_PSG,
    /* Key       */ 0x3C,
    /* Panning   */ 127,
    /* PSG Wave  */ NULL,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7e0000,
    /* ADSR Atk  */ 0x7f0000,
    /* ADSR Dec  */ 0x7f0000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
    /* PSG Chnl  */ PSG_PULSE_CHANNEL_2,
    /* PSG Len   */ 0,
    /* PSG Sweep */ 0,
    /* PSG Tone  */ PSG_TONE_DUTY_50,
    /* PSG Noise */ 0,
};

extern const struct SampleInfo sfx_383SampleInfo;
const struct InstrumentPCM instrumentPCMData712 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_383SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x01f83e,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_384SampleInfo;
const struct InstrumentPCM instrumentPCMData713 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_384SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x015029,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_309SampleInfo;
const struct InstrumentPCM instrumentPCMData714 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_309SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x19a814,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x00a814,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_321SampleInfo;
const struct InstrumentPCM instrumentPCMData715 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_321SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x0f6a90,
};

extern const struct SampleInfo sfx_385SampleInfo;
const struct InstrumentPCM instrumentPCMData716 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_385SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_348SampleInfo;
const struct InstrumentPCM instrumentPCMData717 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_348SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x335029,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x0690ce,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_015SampleInfo;
const struct InstrumentPCM instrumentPCMData718 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_015SampleInfo,
    /* ADSR Init */ 0x000000,
    /* ADSR Sus  */ 0x4cf83e,
    /* ADSR Atk  */ 0x307c1f,
    /* ADSR Dec  */ 0x015029,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_226SampleInfo;
const struct InstrumentPCM instrumentPCMData719 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_226SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_386SampleInfo;
const struct InstrumentPCM instrumentPCMData720 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_386SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x0cd40a,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x13b26c,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_313SampleInfo;
const struct InstrumentPCM instrumentPCMData721 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_313SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x0690ce,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x082378,
};

extern const struct SampleInfo sfx_017SampleInfo;
const struct InstrumentPCM instrumentPCMData722 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_017SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x034867,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_293SampleInfo;
const struct InstrumentPCM instrumentPCMData723 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_293SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x01a433,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x0f6a90,
};

extern const struct SampleInfo sfx_387SampleInfo;
const struct InstrumentPCM instrumentPCMData724 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_387SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x00fc1f,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_342SampleInfo;
const struct InstrumentPCM instrumentPCMData725 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_342SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x60364d,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x015029,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_043SampleInfo;
const struct InstrumentPCM instrumentPCMData726 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_043SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

const struct InstrumentSubbankSingleKey instrumentSubbankSingleKeyData727 = {
    /* Type      */ INSTRUMENT_SUBBANK_SINGLE_KEY,
    /* Total     */ 36,
    /* Sub-Bank  */ (const union Instrument **) 0x08a9957c, // POINTER
};

const struct InstrumentSubbankSingleKey instrumentSubbankSingleKeyData728 = {
    /* Type      */ INSTRUMENT_SUBBANK_SINGLE_KEY,
    /* Total     */ 36,
    /* Sub-Bank  */ (const union Instrument **) 0x08a996e4, // POINTER
};

const struct InstrumentSubbankSingleKey instrumentSubbankSingleKeyData729 = {
    /* Type      */ INSTRUMENT_SUBBANK_SINGLE_KEY,
    /* Total     */ 36,
    /* Sub-Bank  */ (const union Instrument **) 0x08a9940c, // POINTER
};

extern const struct SampleInfo sfx_388SampleInfo;
const struct InstrumentPCM instrumentPCMData730 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_388SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x01f83e,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_028SampleInfo;
const struct InstrumentPCM instrumentPCMData731 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_028SampleInfo,
    /* ADSR Init */ 0x000000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x26c9b2,
    /* ADSR Dec  */ 0x00fc1f,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_389SampleInfo;
const struct InstrumentPCM instrumentPCMData732 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_389SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x01f83e,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_015SampleInfo;
const struct InstrumentPCM instrumentPCMData733 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_015SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_348SampleInfo;
const struct InstrumentPCM instrumentPCMData734 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_348SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x335029,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x0690ce,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_301SampleInfo;
const struct InstrumentPCM instrumentPCMData735 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_301SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x0690ce,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x0f6a90,
};

extern const struct SampleInfo sfx_302SampleInfo;
const struct InstrumentPCM instrumentPCMData736 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_302SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x09d936,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x0f6a90,
};

extern const struct SampleInfo sfx_390SampleInfo;
const struct InstrumentPCM instrumentPCMData737 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_390SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x01f83e,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_043SampleInfo;
const struct InstrumentPCM instrumentPCMData738 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_043SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_355SampleInfo;
const struct InstrumentPCM instrumentPCMData739 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_355SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x01a433,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_356SampleInfo;
const struct InstrumentPCM instrumentPCMData740 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_356SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x01a433,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_300SampleInfo;
const struct InstrumentPCM instrumentPCMData741 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_300SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x01a433,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x218000,
};

extern const struct SampleInfo sfx_354SampleInfo;
const struct InstrumentPCM instrumentPCMData742 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_354SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x335029,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x00fc1f,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1faea0,
};

extern const struct SampleInfo sfx_113SampleInfo;
const struct InstrumentPCM instrumentPCMData743 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_113SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x235dd1,
};

extern const struct SampleInfo sfx_262SampleInfo;
const struct InstrumentPCM instrumentPCMData744 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_262SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x335029,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x00fc1f,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_206SampleInfo;
const struct InstrumentPCM instrumentPCMData745 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_206SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_290SampleInfo;
const struct InstrumentPCM instrumentPCMData746 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_290SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x0d219d,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_207SampleInfo;
const struct InstrumentPCM instrumentPCMData747 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_207SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_291SampleInfo;
const struct InstrumentPCM instrumentPCMData748 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_291SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_262SampleInfo;
const struct InstrumentPCM instrumentPCMData749 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_262SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x66a052,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x00fc1f,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

const struct InstrumentSubbankMultiKey instrumentSubbankMultiKeyData750 = {
    /* Type      */ INSTRUMENT_SUBBANK_MULTI_KEY,
    /* Total     */ 12,
    /* Splits    */ (u8 *) 0x08a865ac, // POINTER
    /* Sub-Bank  */ (const union Instrument **) 0x08a97010, // POINTER
};

extern const struct SampleInfo sfx_322SampleInfo;
const struct InstrumentPCM instrumentPCMData751 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_322SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x66a052,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x1f83e0,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x235dd1,
};

extern const struct SampleInfo sfx_289SampleInfo;
const struct InstrumentPCM instrumentPCMData752 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_289SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_201SampleInfo;
const struct InstrumentPCM instrumentPCMData753 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_201SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x01f83e,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_194SampleInfo;
const struct InstrumentPCM instrumentPCMData754 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_194SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x00fc1f,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_359SampleInfo;
const struct InstrumentPCM instrumentPCMData755 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_359SampleInfo,
    /* ADSR Init */ 0x000000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x3a2e8b,
    /* ADSR Dec  */ 0x00fc1f,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_391SampleInfo;
const struct InstrumentPCM instrumentPCMData756 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_391SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

const struct InstrumentPSG instrumentPSGData757 = {
    /* Type      */ INSTRUMENT_PSG,
    /* Key       */ 0x3C,
    /* Panning   */ 127,
    /* PSG Wave  */ NULL,
    /* ADSR Init */ 0x73745d,
    /* ADSR Sus  */ 0x400000,
    /* ADSR Atk  */ 0x1fc000,
    /* ADSR Dec  */ 0x04b425,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x7f0000,
    /* PSG Chnl  */ PSG_PULSE_CHANNEL_1,
    /* PSG Len   */ 0,
    /* PSG Sweep */ 0,
    /* PSG Tone  */ PSG_TONE_DUTY_50,
    /* PSG Noise */ 0,
};

const struct InstrumentPSG instrumentPSGData758 = {
    /* Type      */ INSTRUMENT_PSG,
    /* Key       */ 0x3C,
    /* Panning   */ 127,
    /* PSG Wave  */ NULL,
    /* ADSR Init */ 0x73745d,
    /* ADSR Sus  */ 0x400000,
    /* ADSR Atk  */ 0x1fc000,
    /* ADSR Dec  */ 0x04b425,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x7f0000,
    /* PSG Chnl  */ PSG_PULSE_CHANNEL_2,
    /* PSG Len   */ 0,
    /* PSG Sweep */ 0,
    /* PSG Tone  */ PSG_TONE_DUTY_50,
    /* PSG Noise */ 0,
};

const struct InstrumentPSG instrumentPSGData759 = {
    /* Type      */ INSTRUMENT_PSG,
    /* Key       */ 0x3C,
    /* Panning   */ 127,
    /* PSG Wave  */ (u32 *) 0x08a86870, // POINTER
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x400000,
    /* ADSR Atk  */ 0x7f0000,
    /* ADSR Dec  */ 0x04b425,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x7f0000,
    /* PSG Chnl  */ PSG_WAVE_CHANNEL,
    /* PSG Len   */ 0,
    /* PSG Sweep */ 0,
    /* PSG Tone  */ 0,
    /* PSG Noise */ 0,
};

const struct InstrumentPSG instrumentPSGData760 = {
    /* Type      */ INSTRUMENT_PSG,
    /* Key       */ 0x3C,
    /* Panning   */ 127,
    /* PSG Wave  */ (u32 *) 0x08a86880, // POINTER
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7e0000,
    /* ADSR Atk  */ 0x7f0000,
    /* ADSR Dec  */ 0x7f0000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x7f0000,
    /* PSG Chnl  */ PSG_WAVE_CHANNEL,
    /* PSG Len   */ 0,
    /* PSG Sweep */ 0,
    /* PSG Tone  */ 0,
    /* PSG Noise */ 0,
};

const struct InstrumentPSG instrumentPSGData761 = {
    /* Type      */ INSTRUMENT_PSG,
    /* Key       */ 0x3C,
    /* Panning   */ 127,
    /* PSG Wave  */ (u32 *) 0x08a86890, // POINTER
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7e0000,
    /* ADSR Atk  */ 0x7f0000,
    /* ADSR Dec  */ 0x7f0000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x7f0000,
    /* PSG Chnl  */ PSG_WAVE_CHANNEL,
    /* PSG Len   */ 0,
    /* PSG Sweep */ 0,
    /* PSG Tone  */ 0,
    /* PSG Noise */ 0,
};

const struct InstrumentPSG instrumentPSGData762 = {
    /* Type      */ INSTRUMENT_PSG,
    /* Key       */ 0x3C,
    /* Panning   */ 127,
    /* PSG Wave  */ (u32 *) 0x08a868a0, // POINTER
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7e0000,
    /* ADSR Atk  */ 0x7f0000,
    /* ADSR Dec  */ 0x7f0000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x7f0000,
    /* PSG Chnl  */ PSG_WAVE_CHANNEL,
    /* PSG Len   */ 0,
    /* PSG Sweep */ 0,
    /* PSG Tone  */ 0,
    /* PSG Noise */ 0,
};

const struct InstrumentPSG instrumentPSGData763 = {
    /* Type      */ INSTRUMENT_PSG,
    /* Key       */ 0x3C,
    /* Panning   */ 127,
    /* PSG Wave  */ (u32 *) 0x08a868b0, // POINTER
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7e0000,
    /* ADSR Atk  */ 0x7f0000,
    /* ADSR Dec  */ 0x7f0000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x7f0000,
    /* PSG Chnl  */ PSG_WAVE_CHANNEL,
    /* PSG Len   */ 0,
    /* PSG Sweep */ 0,
    /* PSG Tone  */ 0,
    /* PSG Noise */ 0,
};

const struct InstrumentPSG instrumentPSGData764 = {
    /* Type      */ INSTRUMENT_PSG,
    /* Key       */ 0x3C,
    /* Panning   */ 127,
    /* PSG Wave  */ (u32 *) 0x08a868c0, // POINTER
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7e0000,
    /* ADSR Atk  */ 0x7f0000,
    /* ADSR Dec  */ 0x7f0000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x7f0000,
    /* PSG Chnl  */ PSG_WAVE_CHANNEL,
    /* PSG Len   */ 0,
    /* PSG Sweep */ 0,
    /* PSG Tone  */ 0,
    /* PSG Noise */ 0,
};

const struct InstrumentPSG instrumentPSGData765 = {
    /* Type      */ INSTRUMENT_PSG,
    /* Key       */ 0x3C,
    /* Panning   */ 127,
    /* PSG Wave  */ (u32 *) 0x08a868d0, // POINTER
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7e0000,
    /* ADSR Atk  */ 0x7f0000,
    /* ADSR Dec  */ 0x7f0000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x7f0000,
    /* PSG Chnl  */ PSG_WAVE_CHANNEL,
    /* PSG Len   */ 0,
    /* PSG Sweep */ 0,
    /* PSG Tone  */ 0,
    /* PSG Noise */ 0,
};

const struct InstrumentPSG instrumentPSGData766 = {
    /* Type      */ INSTRUMENT_PSG,
    /* Key       */ 0x3C,
    /* Panning   */ 127,
    /* PSG Wave  */ (u32 *) 0x08a86870, // POINTER
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7e0000,
    /* ADSR Atk  */ 0x7f0000,
    /* ADSR Dec  */ 0x7f0000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
    /* PSG Chnl  */ PSG_WAVE_CHANNEL,
    /* PSG Len   */ 0,
    /* PSG Sweep */ 0,
    /* PSG Tone  */ 0,
    /* PSG Noise */ 0,
};

extern const struct SampleInfo sfx_392SampleInfo;
const struct InstrumentPCM instrumentPCMData767 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_392SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x00fc1f,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_393SampleInfo;
const struct InstrumentPCM instrumentPCMData768 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_393SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x00fc1f,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

const struct InstrumentSubbankMultiKey instrumentSubbankMultiKeyData769 = {
    /* Type      */ INSTRUMENT_SUBBANK_MULTI_KEY,
    /* Total     */ 48,
    /* Splits    */ (u8 *) 0x08a867c8, // POINTER
    /* Sub-Bank  */ (const union Instrument **) 0x08a98010, // POINTER
};

const struct InstrumentSubbankSingleKey instrumentSubbankSingleKeyData770 = {
    /* Type      */ INSTRUMENT_SUBBANK_SINGLE_KEY,
    /* Total     */ 36,
    /* Sub-Bank  */ (const union Instrument **) 0x08a9957c, // POINTER
};

const struct InstrumentSubbankSingleKey instrumentSubbankSingleKeyData771 = {
    /* Type      */ INSTRUMENT_SUBBANK_SINGLE_KEY,
    /* Total     */ 36,
    /* Sub-Bank  */ (const union Instrument **) 0x08a9940c, // POINTER
};

extern const struct SampleInfo sfx_394SampleInfo;
const struct InstrumentPCM instrumentPCMData772 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_394SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x01a433,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x0f6a90,
};

extern const struct SampleInfo sfx_395SampleInfo;
const struct InstrumentPCM instrumentPCMData773 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_395SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x01a433,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x0f6a90,
};

extern const struct SampleInfo sfx_396SampleInfo;
const struct InstrumentPCM instrumentPCMData774 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_396SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x00fc1f,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x0f6a90,
};

extern const struct SampleInfo sfx_397SampleInfo;
const struct InstrumentPCM instrumentPCMData775 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_397SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x024c48,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x0f6a90,
};

extern const struct SampleInfo sfx_398SampleInfo;
const struct InstrumentPCM instrumentPCMData776 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_398SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x00fc1f,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x0f6a90,
};

extern const struct SampleInfo sfx_015SampleInfo;
const struct InstrumentPCM instrumentPCMData777 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_015SampleInfo,
    /* ADSR Init */ 0x000000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x4d9364,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_399SampleInfo;
const struct InstrumentPCM instrumentPCMData778 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_399SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x024c48,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_126SampleInfo;
const struct InstrumentPCM instrumentPCMData779 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_126SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x02a052,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_127SampleInfo;
const struct InstrumentPCM instrumentPCMData780 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_127SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

const struct InstrumentSubbankSingleKey instrumentSubbankSingleKeyData781 = {
    /* Type      */ INSTRUMENT_SUBBANK_SINGLE_KEY,
    /* Total     */ 36,
    /* Sub-Bank  */ (const union Instrument **) 0x08a9957c, // POINTER
};

const struct InstrumentSubbankSingleKey instrumentSubbankSingleKeyData782 = {
    /* Type      */ INSTRUMENT_SUBBANK_SINGLE_KEY,
    /* Total     */ 36,
    /* Sub-Bank  */ (const union Instrument **) 0x08a99a14, // POINTER
};

extern const struct SampleInfo sfx_400SampleInfo;
const struct InstrumentPCM instrumentPCMData783 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_400SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x015029,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_398SampleInfo;
const struct InstrumentPCM instrumentPCMData784 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_398SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x015029,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x0f6a90,
};

extern const struct SampleInfo sfx_235SampleInfo;
const struct InstrumentPCM instrumentPCMData785 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_235SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_401SampleInfo;
const struct InstrumentPCM instrumentPCMData786 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_401SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_260SampleInfo;
const struct InstrumentPCM instrumentPCMData787 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_260SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_399SampleInfo;
const struct InstrumentPCM instrumentPCMData788 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_399SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x024c48,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

const struct InstrumentSubbankSingleKey instrumentSubbankSingleKeyData789 = {
    /* Type      */ INSTRUMENT_SUBBANK_SINGLE_KEY,
    /* Total     */ 36,
    /* Sub-Bank  */ (const union Instrument **) 0x08a9957c, // POINTER
};

const struct InstrumentSubbankSingleKey instrumentSubbankSingleKeyData790 = {
    /* Type      */ INSTRUMENT_SUBBANK_SINGLE_KEY,
    /* Total     */ 36,
    /* Sub-Bank  */ (const union Instrument **) 0x08a99a14, // POINTER
};

const struct InstrumentSubbankSingleKey instrumentSubbankSingleKeyData791 = {
    /* Type      */ INSTRUMENT_SUBBANK_SINGLE_KEY,
    /* Total     */ 36,
    /* Sub-Bank  */ (const union Instrument **) 0x08a9940c, // POINTER
};

extern const struct SampleInfo sfx_263SampleInfo;
const struct InstrumentPCM instrumentPCMData792 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_263SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_229SampleInfo;
const struct InstrumentPCM instrumentPCMData793 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_229SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1ba35f,
};

extern const struct SampleInfo sfx_194SampleInfo;
const struct InstrumentPCM instrumentPCMData794 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_194SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x015029,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_399SampleInfo;
const struct InstrumentPCM instrumentPCMData795 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_399SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x024c48,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_402SampleInfo;
const struct InstrumentPCM instrumentPCMData796 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_402SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x235dd1,
};

extern const struct SampleInfo sfx_403SampleInfo;
const struct InstrumentPCM instrumentPCMData797 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_403SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x235dd1,
};

extern const struct SampleInfo sfx_404SampleInfo;
const struct InstrumentPCM instrumentPCMData798 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_404SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x235dd1,
};

const struct InstrumentSubbankMultiKey instrumentSubbankMultiKeyData799 = {
    /* Type      */ INSTRUMENT_SUBBANK_MULTI_KEY,
    /* Total     */ 36,
    /* Splits    */ (u8 *) 0x08a867ec, // POINTER
    /* Sub-Bank  */ (const union Instrument **) 0x08a9860c, // POINTER
};

const struct InstrumentSubbankSingleKey instrumentSubbankSingleKeyData800 = {
    /* Type      */ INSTRUMENT_SUBBANK_SINGLE_KEY,
    /* Total     */ 36,
    /* Sub-Bank  */ (const union Instrument **) 0x08a9957c, // POINTER
};

const struct InstrumentSubbankSingleKey instrumentSubbankSingleKeyData801 = {
    /* Type      */ INSTRUMENT_SUBBANK_SINGLE_KEY,
    /* Total     */ 36,
    /* Sub-Bank  */ (const union Instrument **) 0x08a9940c, // POINTER
};

extern const struct SampleInfo sfx_405SampleInfo;
const struct InstrumentPCM instrumentPCMData802 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_405SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x267c1f,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x015029,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_406SampleInfo;
const struct InstrumentPCM instrumentPCMData803 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_406SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_407SampleInfo;
const struct InstrumentPCM instrumentPCMData804 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_407SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_408SampleInfo;
const struct InstrumentPCM instrumentPCMData805 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_408SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_409SampleInfo;
const struct InstrumentPCM instrumentPCMData806 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_409SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_202SampleInfo;
const struct InstrumentPCM instrumentPCMData807 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_202SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x60364d,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x015029,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_410SampleInfo;
const struct InstrumentPCM instrumentPCMData808 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_410SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

const struct InstrumentSubbankSingleKey instrumentSubbankSingleKeyData809 = {
    /* Type      */ INSTRUMENT_SUBBANK_SINGLE_KEY,
    /* Total     */ 36,
    /* Sub-Bank  */ (const union Instrument **) 0x08a9957c, // POINTER
};

const struct InstrumentSubbankSingleKey instrumentSubbankSingleKeyData810 = {
    /* Type      */ INSTRUMENT_SUBBANK_SINGLE_KEY,
    /* Total     */ 36,
    /* Sub-Bank  */ (const union Instrument **) 0x08a9940c, // POINTER
};

extern const struct SampleInfo sfx_300SampleInfo;
const struct InstrumentPCM instrumentPCMData811 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_300SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x01a433,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x218000,
};

extern const struct SampleInfo sfx_058SampleInfo;
const struct InstrumentPCM instrumentPCMData812 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_058SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x034867,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x218000,
};

extern const struct SampleInfo sfx_306SampleInfo;
const struct InstrumentPCM instrumentPCMData813 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_306SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_391SampleInfo;
const struct InstrumentPCM instrumentPCMData814 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_391SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_373SampleInfo;
const struct InstrumentPCM instrumentPCMData815 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_373SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x01f83e,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_110SampleInfo;
const struct InstrumentPCM instrumentPCMData816 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_110SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x00a814,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_363SampleInfo;
const struct InstrumentPCM instrumentPCMData817 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_363SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x335029,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x00fc1f,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_005SampleInfo;
const struct InstrumentPCM instrumentPCMData818 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_005SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_293SampleInfo;
const struct InstrumentPCM instrumentPCMData819 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_293SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x034867,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_411SampleInfo;
const struct InstrumentPCM instrumentPCMData820 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_411SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x00540a,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_412SampleInfo;
const struct InstrumentPCM instrumentPCMData821 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_412SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x01a433,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x218000,
};

extern const struct SampleInfo sfx_413SampleInfo;
const struct InstrumentPCM instrumentPCMData822 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_413SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x00540a,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x22bd20,
};

extern const struct SampleInfo sfx_414SampleInfo;
const struct InstrumentPCM instrumentPCMData823 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_414SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x034867,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_415SampleInfo;
const struct InstrumentPCM instrumentPCMData824 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_415SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x218000,
};

extern const struct SampleInfo sfx_416SampleInfo;
const struct InstrumentPCM instrumentPCMData825 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_416SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x015029,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x218000,
};

extern const struct SampleInfo sfx_417SampleInfo;
const struct InstrumentPCM instrumentPCMData826 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_417SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x015029,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x055552,
};

extern const struct SampleInfo sfx_418SampleInfo;
const struct InstrumentPCM instrumentPCMData827 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_418SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x015029,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x055552,
};

extern const struct SampleInfo sfx_419SampleInfo;
const struct InstrumentPCM instrumentPCMData828 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_419SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x015029,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x055552,
};

extern const struct SampleInfo sfx_420SampleInfo;
const struct InstrumentPCM instrumentPCMData829 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_420SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x083502,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_421SampleInfo;
const struct InstrumentPCM instrumentPCMData830 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_421SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x01f83e,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

const struct InstrumentSubbankMultiKey instrumentSubbankMultiKeyData831 = {
    /* Type      */ INSTRUMENT_SUBBANK_MULTI_KEY,
    /* Total     */ 12,
    /* Splits    */ (u8 *) 0x08a865ac, // POINTER
    /* Sub-Bank  */ (const union Instrument **) 0x08a97010, // POINTER
};

const struct InstrumentSubbankMultiKey instrumentSubbankMultiKeyData832 = {
    /* Type      */ INSTRUMENT_SUBBANK_MULTI_KEY,
    /* Total     */ 12,
    /* Splits    */ (u8 *) 0x08a86828, // POINTER
    /* Sub-Bank  */ (const union Instrument **) 0x08a98a0c, // POINTER
};

const struct InstrumentSubbankSingleKey instrumentSubbankSingleKeyData833 = {
    /* Type      */ INSTRUMENT_SUBBANK_SINGLE_KEY,
    /* Total     */ 36,
    /* Sub-Bank  */ (const union Instrument **) 0x08a9957c, // POINTER
};

const struct InstrumentSubbankSingleKey instrumentSubbankSingleKeyData834 = {
    /* Type      */ INSTRUMENT_SUBBANK_SINGLE_KEY,
    /* Total     */ 36,
    /* Sub-Bank  */ (const union Instrument **) 0x08a99b4c, // POINTER
};

const struct InstrumentSubbankSingleKey instrumentSubbankSingleKeyData835 = {
    /* Type      */ INSTRUMENT_SUBBANK_SINGLE_KEY,
    /* Total     */ 36,
    /* Sub-Bank  */ (const union Instrument **) 0x08a9940c, // POINTER
};

extern const struct SampleInfo sfx_422SampleInfo;
const struct InstrumentPCM instrumentPCMData836 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_422SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x00fc1f,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_423SampleInfo;
const struct InstrumentPCM instrumentPCMData837 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_423SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x267c1f,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x015029,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_313SampleInfo;
const struct InstrumentPCM instrumentPCMData838 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_313SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x034867,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_292SampleInfo;
const struct InstrumentPCM instrumentPCMData839 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_292SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x106a05,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_387SampleInfo;
const struct InstrumentPCM instrumentPCMData840 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_387SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x00fc1f,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_424SampleInfo;
const struct InstrumentPCM instrumentPCMData841 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_424SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x00a814,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_421SampleInfo;
const struct InstrumentPCM instrumentPCMData842 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_421SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x01f83e,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_425SampleInfo;
const struct InstrumentPCM instrumentPCMData843 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_425SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x0690ce,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_320SampleInfo;
const struct InstrumentPCM instrumentPCMData844 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_320SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x335029,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x00fc1f,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_420SampleInfo;
const struct InstrumentPCM instrumentPCMData845 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_420SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x083502,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_421SampleInfo;
const struct InstrumentPCM instrumentPCMData846 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_421SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x01f83e,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_426SampleInfo;
const struct InstrumentPCM instrumentPCMData847 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_426SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x335029,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x015029,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

const struct InstrumentSubbankMultiKey instrumentSubbankMultiKeyData848 = {
    /* Type      */ INSTRUMENT_SUBBANK_MULTI_KEY,
    /* Total     */ 12,
    /* Splits    */ (u8 *) 0x08a86828, // POINTER
    /* Sub-Bank  */ (const union Instrument **) 0x08a98a0c, // POINTER
};

const struct InstrumentSubbankMultiKey instrumentSubbankMultiKeyData849 = {
    /* Type      */ INSTRUMENT_SUBBANK_MULTI_KEY,
    /* Total     */ 36,
    /* Splits    */ (u8 *) 0x08a867ec, // POINTER
    /* Sub-Bank  */ (const union Instrument **) 0x08a9860c, // POINTER
};

const struct InstrumentSubbankSingleKey instrumentSubbankSingleKeyData850 = {
    /* Type      */ INSTRUMENT_SUBBANK_SINGLE_KEY,
    /* Total     */ 36,
    /* Sub-Bank  */ (const union Instrument **) 0x08a9957c, // POINTER
};

const struct InstrumentSubbankSingleKey instrumentSubbankSingleKeyData851 = {
    /* Type      */ INSTRUMENT_SUBBANK_SINGLE_KEY,
    /* Total     */ 36,
    /* Sub-Bank  */ (const union Instrument **) 0x08a99c60, // POINTER
};

const struct InstrumentSubbankSingleKey instrumentSubbankSingleKeyData852 = {
    /* Type      */ INSTRUMENT_SUBBANK_SINGLE_KEY,
    /* Total     */ 36,
    /* Sub-Bank  */ (const union Instrument **) 0x08a9940c, // POINTER
};

extern const struct SampleInfo sfx_039SampleInfo;
const struct InstrumentPCM instrumentPCMData853 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_039SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x218000,
};

extern const struct SampleInfo sfx_398SampleInfo;
const struct InstrumentPCM instrumentPCMData854 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_398SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x00fc1f,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x0f6a90,
};

extern const struct SampleInfo sfx_007SampleInfo;
const struct InstrumentPCM instrumentPCMData855 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_007SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_001SampleInfo;
const struct InstrumentPCM instrumentPCMData856 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_001SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x59cc48,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x106a05,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_003SampleInfo;
const struct InstrumentPCM instrumentPCMData857 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_003SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

const struct InstrumentPSG instrumentPSGData858 = {
    /* Type      */ INSTRUMENT_PSG,
    /* Key       */ 0x3C,
    /* Panning   */ 127,
    /* PSG Wave  */ NULL,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7e0000,
    /* ADSR Atk  */ 0x7f0000,
    /* ADSR Dec  */ 0x7f0000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x7f0000,
    /* PSG Chnl  */ PSG_PULSE_CHANNEL_1,
    /* PSG Len   */ 0,
    /* PSG Sweep */ 0,
    /* PSG Tone  */ PSG_TONE_DUTY_50,
    /* PSG Noise */ 0,
};

const struct InstrumentPSG instrumentPSGData859 = {
    /* Type      */ INSTRUMENT_PSG,
    /* Key       */ 0x3C,
    /* Panning   */ 127,
    /* PSG Wave  */ NULL,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7e0000,
    /* ADSR Atk  */ 0x7f0000,
    /* ADSR Dec  */ 0x7f0000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x7f0000,
    /* PSG Chnl  */ PSG_PULSE_CHANNEL_2,
    /* PSG Len   */ 0,
    /* PSG Sweep */ 0,
    /* PSG Tone  */ PSG_TONE_DUTY_50,
    /* PSG Noise */ 0,
};

extern const struct SampleInfo sfx_203SampleInfo;
const struct InstrumentPCM instrumentPCMData860 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_203SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x015029,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_239SampleInfo;
const struct InstrumentPCM instrumentPCMData861 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_239SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x024c48,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x18ea90,
};

extern const struct SampleInfo sfx_012SampleInfo;
const struct InstrumentPCM instrumentPCMData862 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_012SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x1a433b,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_386SampleInfo;
const struct InstrumentPCM instrumentPCMData863 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_386SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x0cd40a,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x13b26c,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_008SampleInfo;
const struct InstrumentPCM instrumentPCMData864 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_008SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_383SampleInfo;
const struct InstrumentPCM instrumentPCMData865 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_383SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x01f83e,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_329SampleInfo;
const struct InstrumentPCM instrumentPCMData866 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_329SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x267c1f,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x0690ce,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_005SampleInfo;
const struct InstrumentPCM instrumentPCMData867 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_005SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_321SampleInfo;
const struct InstrumentPCM instrumentPCMData868 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_321SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x0f6a90,
};

extern const struct SampleInfo sfx_235SampleInfo;
const struct InstrumentPCM instrumentPCMData869 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_235SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_342SampleInfo;
const struct InstrumentPCM instrumentPCMData870 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_342SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x60364d,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x015029,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_401SampleInfo;
const struct InstrumentPCM instrumentPCMData871 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_401SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_114SampleInfo;
const struct InstrumentPCM instrumentPCMData872 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_114SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_196SampleInfo;
const struct InstrumentPCM instrumentPCMData873 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_196SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x00a814,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_310SampleInfo;
const struct InstrumentPCM instrumentPCMData874 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_310SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x00540a,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_303SampleInfo;
const struct InstrumentPCM instrumentPCMData875 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_303SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x00fc1f,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_423SampleInfo;
const struct InstrumentPCM instrumentPCMData876 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_423SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x267c1f,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x015029,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_226SampleInfo;
const struct InstrumentPCM instrumentPCMData877 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_226SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_203SampleInfo;
const struct InstrumentPCM instrumentPCMData878 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_203SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x015029,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_309SampleInfo;
const struct InstrumentPCM instrumentPCMData879 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_309SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x19a814,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x00a814,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_124SampleInfo;
const struct InstrumentPCM instrumentPCMData880 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_124SampleInfo,
    /* ADSR Init */ 0x000000,
    /* ADSR Sus  */ 0x267c1f,
    /* ADSR Atk  */ 0x26c9b2,
    /* ADSR Dec  */ 0x015029,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_313SampleInfo;
const struct InstrumentPCM instrumentPCMData881 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_313SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x034867,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x082378,
};

extern const struct SampleInfo sfx_354SampleInfo;
const struct InstrumentPCM instrumentPCMData882 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_354SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x335029,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x01f83e,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_118SampleInfo;
const struct InstrumentPCM instrumentPCMData883 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_118SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_322SampleInfo;
const struct InstrumentPCM instrumentPCMData884 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_322SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x66a052,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x1f83e0,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x235dd1,
};

extern const struct SampleInfo sfx_335SampleInfo;
const struct InstrumentPCM instrumentPCMData885 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_335SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x034867,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x0f6a90,
};

extern const struct SampleInfo sfx_297SampleInfo;
const struct InstrumentPCM instrumentPCMData886 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_297SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x19a814,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x00a814,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_308SampleInfo;
const struct InstrumentPCM instrumentPCMData887 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_308SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x335029,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x00fc1f,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_238SampleInfo;
const struct InstrumentPCM instrumentPCMData888 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_238SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x19a814,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x00a814,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_305SampleInfo;
const struct InstrumentPCM instrumentPCMData889 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_305SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x267c1f,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x00fc1f,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x235dd1,
};

extern const struct SampleInfo sfx_410SampleInfo;
const struct InstrumentPCM instrumentPCMData890 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_410SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_315SampleInfo;
const struct InstrumentPCM instrumentPCMData891 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_315SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x0cd40a,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x015029,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_015SampleInfo;
const struct InstrumentPCM instrumentPCMData892 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_015SampleInfo,
    /* ADSR Init */ 0x000000,
    /* ADSR Sus  */ 0x4cf83e,
    /* ADSR Atk  */ 0x307c1f,
    /* ADSR Dec  */ 0x015029,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_320SampleInfo;
const struct InstrumentPCM instrumentPCMData893 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_320SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x335029,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x00fc1f,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_113SampleInfo;
const struct InstrumentPCM instrumentPCMData894 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_113SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x235dd1,
};

extern const struct SampleInfo sfx_399SampleInfo;
const struct InstrumentPCM instrumentPCMData895 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_399SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x024c48,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_190SampleInfo;
const struct InstrumentPCM instrumentPCMData896 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_190SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_011SampleInfo;
const struct InstrumentPCM instrumentPCMData897 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_011SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x267c1f,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x09d936,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x0f6a90,
};

extern const struct SampleInfo sfx_006SampleInfo;
const struct InstrumentPCM instrumentPCMData898 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_006SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x218000,
};

const struct InstrumentSubbankSingleKey instrumentSubbankSingleKeyData899 = {
    /* Type      */ INSTRUMENT_SUBBANK_SINGLE_KEY,
    /* Total     */ 36,
    /* Sub-Bank  */ (const union Instrument **) 0x08a9957c, // POINTER
};

const struct InstrumentSubbankSingleKey instrumentSubbankSingleKeyData900 = {
    /* Type      */ INSTRUMENT_SUBBANK_SINGLE_KEY,
    /* Total     */ 36,
    /* Sub-Bank  */ (const union Instrument **) 0x08a99a14, // POINTER
};

const struct InstrumentSubbankSingleKey instrumentSubbankSingleKeyData901 = {
    /* Type      */ INSTRUMENT_SUBBANK_SINGLE_KEY,
    /* Total     */ 36,
    /* Sub-Bank  */ (const union Instrument **) 0x08a9940c, // POINTER
};

extern const struct SampleInfo sfx_292SampleInfo;
const struct InstrumentPCM instrumentPCMData902 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_292SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x106a05,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_226SampleInfo;
const struct InstrumentPCM instrumentPCMData903 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_226SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_293SampleInfo;
const struct InstrumentPCM instrumentPCMData904 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_293SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x00fc1f,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_302SampleInfo;
const struct InstrumentPCM instrumentPCMData905 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_302SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x0690ce,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_400SampleInfo;
const struct InstrumentPCM instrumentPCMData906 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_400SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x015029,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x18ea90,
};

extern const struct SampleInfo sfx_338SampleInfo;
const struct InstrumentPCM instrumentPCMData907 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_338SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x60364d,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x015029,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_335SampleInfo;
const struct InstrumentPCM instrumentPCMData908 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_335SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x04ec9b,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_427SampleInfo;
const struct InstrumentPCM instrumentPCMData909 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_427SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_428SampleInfo;
const struct InstrumentPCM instrumentPCMData910 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_428SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x015029,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

const struct InstrumentSubbankSingleKey instrumentSubbankSingleKeyData911 = {
    /* Type      */ INSTRUMENT_SUBBANK_SINGLE_KEY,
    /* Total     */ 36,
    /* Sub-Bank  */ (const union Instrument **) 0x08a9957c, // POINTER
};

const struct InstrumentSubbankSingleKey instrumentSubbankSingleKeyData912 = {
    /* Type      */ INSTRUMENT_SUBBANK_SINGLE_KEY,
    /* Total     */ 36,
    /* Sub-Bank  */ (const union Instrument **) 0x08a9940c, // POINTER
};

extern const struct SampleInfo sfx_429SampleInfo;
const struct InstrumentPCM instrumentPCMData913 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_429SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_217SampleInfo;
const struct InstrumentPCM instrumentPCMData914 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_217SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x0f6a90,
};

extern const struct SampleInfo sfx_430SampleInfo;
const struct InstrumentPCM instrumentPCMData915 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_430SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x0b8000,
};

extern const struct SampleInfo sfx_431SampleInfo;
const struct InstrumentPCM instrumentPCMData916 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_431SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_432SampleInfo;
const struct InstrumentPCM instrumentPCMData917 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_432SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_433SampleInfo;
const struct InstrumentPCM instrumentPCMData918 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_433SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_026SampleInfo;
const struct InstrumentPCM instrumentPCMData919 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_026SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x034867,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_117SampleInfo;
const struct InstrumentPCM instrumentPCMData920 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_117SampleInfo,
    /* ADSR Init */ 0x000000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x04d936,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x01638c,
};

extern const struct SampleInfo sfx_434SampleInfo;
const struct InstrumentPCM instrumentPCMData921 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_434SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x16554d,
};

extern const struct SampleInfo sfx_405SampleInfo;
const struct InstrumentPCM instrumentPCMData922 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_405SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x267c1f,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x015029,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_017SampleInfo;
const struct InstrumentPCM instrumentPCMData923 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_017SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x034867,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x082378,
};

extern const struct SampleInfo sfx_042SampleInfo;
const struct InstrumentPCM instrumentPCMData924 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_042SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_196SampleInfo;
const struct InstrumentPCM instrumentPCMData925 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_196SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x00a814,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_041SampleInfo;
const struct InstrumentPCM instrumentPCMData926 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_041SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x60364d,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x015029,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

const struct InstrumentSubbankMultiKey instrumentSubbankMultiKeyData927 = {
    /* Type      */ INSTRUMENT_SUBBANK_MULTI_KEY,
    /* Total     */ 12,
    /* Splits    */ (u8 *) 0x08a8666c, // POINTER
    /* Sub-Bank  */ (const union Instrument **) 0x08a97210, // POINTER
};

extern const struct SampleInfo sfx_203SampleInfo;
const struct InstrumentPCM instrumentPCMData928 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_203SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x015029,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_038SampleInfo;
const struct InstrumentPCM instrumentPCMData929 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_038SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x0b8000,
};

extern const struct SampleInfo sfx_028SampleInfo;
const struct InstrumentPCM instrumentPCMData930 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_028SampleInfo,
    /* ADSR Init */ 0x000000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x43e0f8,
    /* ADSR Dec  */ 0x00540a,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_400SampleInfo;
const struct InstrumentPCM instrumentPCMData931 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_400SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x015029,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x18ea90,
};

extern const struct SampleInfo sfx_230SampleInfo;
const struct InstrumentPCM instrumentPCMData932 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_230SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x0cd40a,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x01a433,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_293SampleInfo;
const struct InstrumentPCM instrumentPCMData933 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_293SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x01a433,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x0f6a90,
};

const struct InstrumentSubbankMultiKey instrumentSubbankMultiKeyData934 = {
    /* Type      */ INSTRUMENT_SUBBANK_MULTI_KEY,
    /* Total     */ 12,
    /* Splits    */ (u8 *) 0x08a865ac, // POINTER
    /* Sub-Bank  */ (const union Instrument **) 0x08a97010, // POINTER
};

extern const struct SampleInfo sfx_230SampleInfo;
const struct InstrumentPCM instrumentPCMData935 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_230SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x0cd40a,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x00a814,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_435SampleInfo;
const struct InstrumentPCM instrumentPCMData936 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_435SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_226SampleInfo;
const struct InstrumentPCM instrumentPCMData937 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_226SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_289SampleInfo;
const struct InstrumentPCM instrumentPCMData938 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_289SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_436SampleInfo;
const struct InstrumentPCM instrumentPCMData939 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_436SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x01a433,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_437SampleInfo;
const struct InstrumentPCM instrumentPCMData940 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_437SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_438SampleInfo;
const struct InstrumentPCM instrumentPCMData941 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_438SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_006SampleInfo;
const struct InstrumentPCM instrumentPCMData942 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_006SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x218000,
};

extern const struct SampleInfo sfx_309SampleInfo;
const struct InstrumentPCM instrumentPCMData943 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_309SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x19a814,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x00a814,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_439SampleInfo;
const struct InstrumentPCM instrumentPCMData944 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_439SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_237SampleInfo;
const struct InstrumentPCM instrumentPCMData945 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_237SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_344SampleInfo;
const struct InstrumentPCM instrumentPCMData946 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_344SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_122SampleInfo;
const struct InstrumentPCM instrumentPCMData947 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_122SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_217SampleInfo;
const struct InstrumentPCM instrumentPCMData948 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_217SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x0f6a90,
};

extern const struct SampleInfo sfx_136SampleInfo;
const struct InstrumentPCM instrumentPCMData949 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_136SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_107SampleInfo;
const struct InstrumentPCM instrumentPCMData950 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_107SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x015029,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_129SampleInfo;
const struct InstrumentPCM instrumentPCMData951 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_129SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_214SampleInfo;
const struct InstrumentPCM instrumentPCMData952 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_214SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

const struct InstrumentSubbankSingleKey instrumentSubbankSingleKeyData953 = {
    /* Type      */ INSTRUMENT_SUBBANK_SINGLE_KEY,
    /* Total     */ 36,
    /* Sub-Bank  */ (const union Instrument **) 0x08a99b4c, // POINTER
};

const struct InstrumentSubbankSingleKey instrumentSubbankSingleKeyData954 = {
    /* Type      */ INSTRUMENT_SUBBANK_SINGLE_KEY,
    /* Total     */ 36,
    /* Sub-Bank  */ (const union Instrument **) 0x08a998e4, // POINTER
};

const struct InstrumentSubbankSingleKey instrumentSubbankSingleKeyData955 = {
    /* Type      */ INSTRUMENT_SUBBANK_SINGLE_KEY,
    /* Total     */ 36,
    /* Sub-Bank  */ (const union Instrument **) 0x08a9957c, // POINTER
};

const struct InstrumentSubbankSingleKey instrumentSubbankSingleKeyData956 = {
    /* Type      */ INSTRUMENT_SUBBANK_SINGLE_KEY,
    /* Total     */ 36,
    /* Sub-Bank  */ (const union Instrument **) 0x08a996e4, // POINTER
};

const struct InstrumentSubbankSingleKey instrumentSubbankSingleKeyData957 = {
    /* Type      */ INSTRUMENT_SUBBANK_SINGLE_KEY,
    /* Total     */ 36,
    /* Sub-Bank  */ (const union Instrument **) 0x08a9940c, // POINTER
};

extern const struct SampleInfo sfx_440SampleInfo;
const struct InstrumentPCM instrumentPCMData958 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_440SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_441SampleInfo;
const struct InstrumentPCM instrumentPCMData959 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_441SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_442SampleInfo;
const struct InstrumentPCM instrumentPCMData960 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_442SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_443SampleInfo;
const struct InstrumentPCM instrumentPCMData961 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ -16,
    /* Sample    */ &sfx_443SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_444SampleInfo;
const struct InstrumentPCM instrumentPCMData962 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ -32,
    /* Sample    */ &sfx_444SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_445SampleInfo;
const struct InstrumentPCM instrumentPCMData963 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ -32,
    /* Sample    */ &sfx_445SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_446SampleInfo;
const struct InstrumentPCM instrumentPCMData964 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ -32,
    /* Sample    */ &sfx_446SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_447SampleInfo;
const struct InstrumentPCM instrumentPCMData965 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_447SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_448SampleInfo;
const struct InstrumentPCM instrumentPCMData966 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ -32,
    /* Sample    */ &sfx_448SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_449SampleInfo;
const struct InstrumentPCM instrumentPCMData967 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ -32,
    /* Sample    */ &sfx_449SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_450SampleInfo;
const struct InstrumentPCM instrumentPCMData968 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ -32,
    /* Sample    */ &sfx_450SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_451SampleInfo;
const struct InstrumentPCM instrumentPCMData969 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ -32,
    /* Sample    */ &sfx_451SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_452SampleInfo;
const struct InstrumentPCM instrumentPCMData970 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_452SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_087SampleInfo;
const struct InstrumentPCM instrumentPCMData971 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3E,
    /* unkEffect */ 0,
    /* Panning   */ 63,
    /* Sample    */ &sfx_087SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_087SampleInfo;
const struct InstrumentPCM instrumentPCMData972 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x41,
    /* unkEffect */ 0,
    /* Panning   */ 16,
    /* Sample    */ &sfx_087SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_453SampleInfo;
const struct InstrumentPCM instrumentPCMData973 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_453SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x04ec9b,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x0f6a90,
};

extern const struct SampleInfo sfx_454SampleInfo;
const struct InstrumentPCM instrumentPCMData974 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_454SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x082378,
};

extern const struct SampleInfo sfx_455SampleInfo;
const struct InstrumentPCM instrumentPCMData975 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_455SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x082378,
};

extern const struct SampleInfo sfx_087SampleInfo;
const struct InstrumentPCM instrumentPCMData976 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ -63,
    /* Sample    */ &sfx_087SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_456SampleInfo;
const struct InstrumentPCM instrumentPCMData977 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_456SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_457SampleInfo;
const struct InstrumentPCM instrumentPCMData978 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_457SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x09d936,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x18ea90,
};

extern const struct SampleInfo sfx_458SampleInfo;
const struct InstrumentPCM instrumentPCMData979 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_458SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_459SampleInfo;
const struct InstrumentPCM instrumentPCMData980 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_459SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_460SampleInfo;
const struct InstrumentPCM instrumentPCMData981 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_460SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_461SampleInfo;
const struct InstrumentPCM instrumentPCMData982 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_461SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_462SampleInfo;
const struct InstrumentPCM instrumentPCMData983 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_462SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_463SampleInfo;
const struct InstrumentPCM instrumentPCMData984 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_463SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_464SampleInfo;
const struct InstrumentPCM instrumentPCMData985 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_464SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_465SampleInfo;
const struct InstrumentPCM instrumentPCMData986 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_465SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_466SampleInfo;
const struct InstrumentPCM instrumentPCMData987 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_466SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_086SampleInfo;
const struct InstrumentPCM instrumentPCMData988 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_086SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_467SampleInfo;
const struct InstrumentPCM instrumentPCMData989 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_467SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_385SampleInfo;
const struct InstrumentPCM instrumentPCMData990 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_385SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_468SampleInfo;
const struct InstrumentPCM instrumentPCMData991 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x34,
    /* unkEffect */ 0,
    /* Panning   */ -32,
    /* Sample    */ &sfx_468SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_450SampleInfo;
const struct InstrumentPCM instrumentPCMData992 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ -32,
    /* Sample    */ &sfx_450SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_468SampleInfo;
const struct InstrumentPCM instrumentPCMData993 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x38,
    /* unkEffect */ 0,
    /* Panning   */ -16,
    /* Sample    */ &sfx_468SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_468SampleInfo;
const struct InstrumentPCM instrumentPCMData994 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 0,
    /* Sample    */ &sfx_468SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_469SampleInfo;
const struct InstrumentPCM instrumentPCMData995 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3E,
    /* unkEffect */ 0,
    /* Panning   */ -64,
    /* Sample    */ &sfx_469SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_470SampleInfo;
const struct InstrumentPCM instrumentPCMData996 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_470SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_471SampleInfo;
const struct InstrumentPCM instrumentPCMData997 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_471SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x034867,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_472SampleInfo;
const struct InstrumentPCM instrumentPCMData998 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_472SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_473SampleInfo;
const struct InstrumentPCM instrumentPCMData999 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ -64,
    /* Sample    */ &sfx_473SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_474SampleInfo;
const struct InstrumentPCM instrumentPCMData1000 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ -32,
    /* Sample    */ &sfx_474SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x034867,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x0f6a90,
};

extern const struct SampleInfo sfx_475SampleInfo;
const struct InstrumentPCM instrumentPCMData1001 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_475SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_476SampleInfo;
const struct InstrumentPCM instrumentPCMData1002 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_476SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_477SampleInfo;
const struct InstrumentPCM instrumentPCMData1003 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 96,
    /* Sample    */ &sfx_477SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_478SampleInfo;
const struct InstrumentPCM instrumentPCMData1004 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_478SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_477SampleInfo;
const struct InstrumentPCM instrumentPCMData1005 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x35,
    /* unkEffect */ 0,
    /* Panning   */ 96,
    /* Sample    */ &sfx_477SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_479SampleInfo;
const struct InstrumentPCM instrumentPCMData1006 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_479SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_480SampleInfo;
const struct InstrumentPCM instrumentPCMData1007 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 16,
    /* Sample    */ &sfx_480SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_450SampleInfo;
const struct InstrumentPCM instrumentPCMData1008 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ -32,
    /* Sample    */ &sfx_450SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x0690ce,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x0f6a90,
};

extern const struct SampleInfo sfx_481SampleInfo;
const struct InstrumentPCM instrumentPCMData1009 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ -16,
    /* Sample    */ &sfx_481SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_482SampleInfo;
const struct InstrumentPCM instrumentPCMData1010 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_482SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_483SampleInfo;
const struct InstrumentPCM instrumentPCMData1011 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_483SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_484SampleInfo;
const struct InstrumentPCM instrumentPCMData1012 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ -63,
    /* Sample    */ &sfx_484SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_485SampleInfo;
const struct InstrumentPCM instrumentPCMData1013 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_485SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_216SampleInfo;
const struct InstrumentPCM instrumentPCMData1014 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 63,
    /* Sample    */ &sfx_216SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_486SampleInfo;
const struct InstrumentPCM instrumentPCMData1015 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 12,
    /* Sample    */ &sfx_486SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_487SampleInfo;
const struct InstrumentPCM instrumentPCMData1016 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ -63,
    /* Sample    */ &sfx_487SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_488SampleInfo;
const struct InstrumentPCM instrumentPCMData1017 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 12,
    /* Sample    */ &sfx_488SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_489SampleInfo;
const struct InstrumentPCM instrumentPCMData1018 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_489SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_490SampleInfo;
const struct InstrumentPCM instrumentPCMData1019 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_490SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_491SampleInfo;
const struct InstrumentPCM instrumentPCMData1020 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_491SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_492SampleInfo;
const struct InstrumentPCM instrumentPCMData1021 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_492SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_493SampleInfo;
const struct InstrumentPCM instrumentPCMData1022 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_493SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_494SampleInfo;
const struct InstrumentPCM instrumentPCMData1023 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_494SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_487SampleInfo;
const struct InstrumentPCM instrumentPCMData1024 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ -63,
    /* Sample    */ &sfx_487SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x0690ce,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_495SampleInfo;
const struct InstrumentPCM instrumentPCMData1025 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_495SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_496SampleInfo;
const struct InstrumentPCM instrumentPCMData1026 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_496SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_497SampleInfo;
const struct InstrumentPCM instrumentPCMData1027 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ -32,
    /* Sample    */ &sfx_497SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_498SampleInfo;
const struct InstrumentPCM instrumentPCMData1028 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 32,
    /* Sample    */ &sfx_498SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_499SampleInfo;
const struct InstrumentPCM instrumentPCMData1029 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_499SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_500SampleInfo;
const struct InstrumentPCM instrumentPCMData1030 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_500SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x0b8000,
};

extern const struct SampleInfo sfx_501SampleInfo;
const struct InstrumentPCM instrumentPCMData1031 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_501SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x0b8000,
};

extern const struct SampleInfo sfx_502SampleInfo;
const struct InstrumentPCM instrumentPCMData1032 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_502SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x0b8000,
};

extern const struct SampleInfo sfx_503SampleInfo;
const struct InstrumentPCM instrumentPCMData1033 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 48,
    /* Sample    */ &sfx_503SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x0b8000,
};

extern const struct SampleInfo sfx_504SampleInfo;
const struct InstrumentPCM instrumentPCMData1034 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_504SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x0b8000,
};

extern const struct SampleInfo sfx_505SampleInfo;
const struct InstrumentPCM instrumentPCMData1035 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ -32,
    /* Sample    */ &sfx_505SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x0b8000,
};

extern const struct SampleInfo sfx_506SampleInfo;
const struct InstrumentPCM instrumentPCMData1036 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_506SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x0b8000,
};

extern const struct SampleInfo sfx_507SampleInfo;
const struct InstrumentPCM instrumentPCMData1037 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_507SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x0b8000,
};

extern const struct SampleInfo sfx_508SampleInfo;
const struct InstrumentPCM instrumentPCMData1038 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_508SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x0b8000,
};

extern const struct SampleInfo sfx_509SampleInfo;
const struct InstrumentPCM instrumentPCMData1039 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_509SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x0b8000,
};

extern const struct SampleInfo sfx_510SampleInfo;
const struct InstrumentPCM instrumentPCMData1040 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_510SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_511SampleInfo;
const struct InstrumentPCM instrumentPCMData1041 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_511SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_512SampleInfo;
const struct InstrumentPCM instrumentPCMData1042 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_512SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_513SampleInfo;
const struct InstrumentPCM instrumentPCMData1043 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_513SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_514SampleInfo;
const struct InstrumentPCM instrumentPCMData1044 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_514SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_515SampleInfo;
const struct InstrumentPCM instrumentPCMData1045 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_515SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_516SampleInfo;
const struct InstrumentPCM instrumentPCMData1046 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_516SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_517SampleInfo;
const struct InstrumentPCM instrumentPCMData1047 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_517SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x0690ce,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_518SampleInfo;
const struct InstrumentPCM instrumentPCMData1048 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_518SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x034867,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_518SampleInfo;
const struct InstrumentPCM instrumentPCMData1049 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x39,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_518SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x034867,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_489SampleInfo;
const struct InstrumentPCM instrumentPCMData1050 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_489SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_519SampleInfo;
const struct InstrumentPCM instrumentPCMData1051 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_519SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_520SampleInfo;
const struct InstrumentPCM instrumentPCMData1052 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_520SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_521SampleInfo;
const struct InstrumentPCM instrumentPCMData1053 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3E,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_521SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_522SampleInfo;
const struct InstrumentPCM instrumentPCMData1054 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_522SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x034867,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_523SampleInfo;
const struct InstrumentPCM instrumentPCMData1055 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_523SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x024c48,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_524SampleInfo;
const struct InstrumentPCM instrumentPCMData1056 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 64,
    /* Sample    */ &sfx_524SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x0690ce,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_525SampleInfo;
const struct InstrumentPCM instrumentPCMData1057 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ -63,
    /* Sample    */ &sfx_525SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x18ea90,
};

extern const struct SampleInfo sfx_526SampleInfo;
const struct InstrumentPCM instrumentPCMData1058 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_526SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x0690ce,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_527SampleInfo;
const struct InstrumentPCM instrumentPCMData1059 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_527SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x0690ce,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_528SampleInfo;
const struct InstrumentPCM instrumentPCMData1060 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_528SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x034867,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_529SampleInfo;
const struct InstrumentPCM instrumentPCMData1061 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x39,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_529SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x082378,
};

extern const struct SampleInfo sfx_529SampleInfo;
const struct InstrumentPCM instrumentPCMData1062 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_529SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x082378,
};

extern const struct SampleInfo sfx_506SampleInfo;
const struct InstrumentPCM instrumentPCMData1063 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_506SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x0b8000,
};

extern const struct SampleInfo sfx_530SampleInfo;
const struct InstrumentPCM instrumentPCMData1064 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x38,
    /* unkEffect */ 0,
    /* Panning   */ 48,
    /* Sample    */ &sfx_530SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x082378,
};

extern const struct SampleInfo sfx_531SampleInfo;
const struct InstrumentPCM instrumentPCMData1065 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_531SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_530SampleInfo;
const struct InstrumentPCM instrumentPCMData1066 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 32,
    /* Sample    */ &sfx_530SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x082378,
};

extern const struct SampleInfo sfx_532SampleInfo;
const struct InstrumentPCM instrumentPCMData1067 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_532SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x0b8000,
};

extern const struct SampleInfo sfx_533SampleInfo;
const struct InstrumentPCM instrumentPCMData1068 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_533SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x0b8000,
};

extern const struct SampleInfo sfx_534SampleInfo;
const struct InstrumentPCM instrumentPCMData1069 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_534SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_535SampleInfo;
const struct InstrumentPCM instrumentPCMData1070 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_535SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_536SampleInfo;
const struct InstrumentPCM instrumentPCMData1071 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ -32,
    /* Sample    */ &sfx_536SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x0690ce,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_435SampleInfo;
const struct InstrumentPCM instrumentPCMData1072 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_435SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_537SampleInfo;
const struct InstrumentPCM instrumentPCMData1073 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 32,
    /* Sample    */ &sfx_537SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_538SampleInfo;
const struct InstrumentPCM instrumentPCMData1074 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_538SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x034867,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_539SampleInfo;
const struct InstrumentPCM instrumentPCMData1075 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_539SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_540SampleInfo;
const struct InstrumentPCM instrumentPCMData1076 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_540SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_541SampleInfo;
const struct InstrumentPCM instrumentPCMData1077 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_541SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_542SampleInfo;
const struct InstrumentPCM instrumentPCMData1078 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_542SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_543SampleInfo;
const struct InstrumentPCM instrumentPCMData1079 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 64,
    /* Sample    */ &sfx_543SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_544SampleInfo;
const struct InstrumentPCM instrumentPCMData1080 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_544SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_545SampleInfo;
const struct InstrumentPCM instrumentPCMData1081 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_545SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_546SampleInfo;
const struct InstrumentPCM instrumentPCMData1082 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 48,
    /* Sample    */ &sfx_546SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_547SampleInfo;
const struct InstrumentPCM instrumentPCMData1083 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ -48,
    /* Sample    */ &sfx_547SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_548SampleInfo;
const struct InstrumentPCM instrumentPCMData1084 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_548SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_549SampleInfo;
const struct InstrumentPCM instrumentPCMData1085 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 48,
    /* Sample    */ &sfx_549SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x01a433,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_550SampleInfo;
const struct InstrumentPCM instrumentPCMData1086 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_550SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_220SampleInfo;
const struct InstrumentPCM instrumentPCMData1087 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_220SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_218SampleInfo;
const struct InstrumentPCM instrumentPCMData1088 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_218SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_551SampleInfo;
const struct InstrumentPCM instrumentPCMData1089 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_551SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x218000,
};

extern const struct SampleInfo sfx_552SampleInfo;
const struct InstrumentPCM instrumentPCMData1090 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_552SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x218000,
};

extern const struct SampleInfo sfx_553SampleInfo;
const struct InstrumentPCM instrumentPCMData1091 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_553SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x218000,
};

extern const struct SampleInfo sfx_554SampleInfo;
const struct InstrumentPCM instrumentPCMData1092 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_554SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x218000,
};

extern const struct SampleInfo sfx_555SampleInfo;
const struct InstrumentPCM instrumentPCMData1093 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_555SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x218000,
};

extern const struct SampleInfo sfx_556SampleInfo;
const struct InstrumentPCM instrumentPCMData1094 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_556SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x218000,
};

extern const struct SampleInfo sfx_557SampleInfo;
const struct InstrumentPCM instrumentPCMData1095 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_557SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x218000,
};

extern const struct SampleInfo sfx_558SampleInfo;
const struct InstrumentPCM instrumentPCMData1096 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_558SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x218000,
};

extern const struct SampleInfo sfx_559SampleInfo;
const struct InstrumentPCM instrumentPCMData1097 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_559SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x218000,
};

extern const struct SampleInfo sfx_560SampleInfo;
const struct InstrumentPCM instrumentPCMData1098 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_560SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x218000,
};

extern const struct SampleInfo sfx_561SampleInfo;
const struct InstrumentPCM instrumentPCMData1099 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_561SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_562SampleInfo;
const struct InstrumentPCM instrumentPCMData1100 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_562SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_233SampleInfo;
const struct InstrumentPCM instrumentPCMData1101 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_233SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_563SampleInfo;
const struct InstrumentPCM instrumentPCMData1102 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_563SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_564SampleInfo;
const struct InstrumentPCM instrumentPCMData1103 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 63,
    /* Sample    */ &sfx_564SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_565SampleInfo;
const struct InstrumentPCM instrumentPCMData1104 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x39,
    /* unkEffect */ 0,
    /* Panning   */ -56,
    /* Sample    */ &sfx_565SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x034867,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_565SampleInfo;
const struct InstrumentPCM instrumentPCMData1105 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ -63,
    /* Sample    */ &sfx_565SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x034867,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_566SampleInfo;
const struct InstrumentPCM instrumentPCMData1106 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 32,
    /* Sample    */ &sfx_566SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_567SampleInfo;
const struct InstrumentPCM instrumentPCMData1107 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 48,
    /* Sample    */ &sfx_567SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_087SampleInfo;
const struct InstrumentPCM instrumentPCMData1108 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_087SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_446SampleInfo;
const struct InstrumentPCM instrumentPCMData1109 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 48,
    /* Sample    */ &sfx_446SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_474SampleInfo;
const struct InstrumentPCM instrumentPCMData1110 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 48,
    /* Sample    */ &sfx_474SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x034867,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x0f6a90,
};

extern const struct SampleInfo sfx_216SampleInfo;
const struct InstrumentPCM instrumentPCMData1111 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ -63,
    /* Sample    */ &sfx_216SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_568SampleInfo;
const struct InstrumentPCM instrumentPCMData1112 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_568SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_569SampleInfo;
const struct InstrumentPCM instrumentPCMData1113 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_569SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_570SampleInfo;
const struct InstrumentPCM instrumentPCMData1114 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_570SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_571SampleInfo;
const struct InstrumentPCM instrumentPCMData1115 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 32,
    /* Sample    */ &sfx_571SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_572SampleInfo;
const struct InstrumentPCM instrumentPCMData1116 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_572SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_573SampleInfo;
const struct InstrumentPCM instrumentPCMData1117 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_573SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_574SampleInfo;
const struct InstrumentPCM instrumentPCMData1118 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_574SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_575SampleInfo;
const struct InstrumentPCM instrumentPCMData1119 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_575SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_576SampleInfo;
const struct InstrumentPCM instrumentPCMData1120 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_576SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_577SampleInfo;
const struct InstrumentPCM instrumentPCMData1121 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_577SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_578SampleInfo;
const struct InstrumentPCM instrumentPCMData1122 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_578SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_579SampleInfo;
const struct InstrumentPCM instrumentPCMData1123 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_579SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_580SampleInfo;
const struct InstrumentPCM instrumentPCMData1124 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_580SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_581SampleInfo;
const struct InstrumentPCM instrumentPCMData1125 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_581SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_582SampleInfo;
const struct InstrumentPCM instrumentPCMData1126 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_582SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_583SampleInfo;
const struct InstrumentPCM instrumentPCMData1127 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_583SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_584SampleInfo;
const struct InstrumentPCM instrumentPCMData1128 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_584SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_585SampleInfo;
const struct InstrumentPCM instrumentPCMData1129 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_585SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_586SampleInfo;
const struct InstrumentPCM instrumentPCMData1130 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_586SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_587SampleInfo;
const struct InstrumentPCM instrumentPCMData1131 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_587SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_440SampleInfo;
const struct InstrumentPCM instrumentPCMData1132 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_440SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_441SampleInfo;
const struct InstrumentPCM instrumentPCMData1133 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_441SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_442SampleInfo;
const struct InstrumentPCM instrumentPCMData1134 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_442SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_443SampleInfo;
const struct InstrumentPCM instrumentPCMData1135 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_443SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_444SampleInfo;
const struct InstrumentPCM instrumentPCMData1136 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_444SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_445SampleInfo;
const struct InstrumentPCM instrumentPCMData1137 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_445SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_446SampleInfo;
const struct InstrumentPCM instrumentPCMData1138 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_446SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_447SampleInfo;
const struct InstrumentPCM instrumentPCMData1139 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_447SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_448SampleInfo;
const struct InstrumentPCM instrumentPCMData1140 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_448SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_449SampleInfo;
const struct InstrumentPCM instrumentPCMData1141 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_449SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_450SampleInfo;
const struct InstrumentPCM instrumentPCMData1142 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_450SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_451SampleInfo;
const struct InstrumentPCM instrumentPCMData1143 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_451SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_452SampleInfo;
const struct InstrumentPCM instrumentPCMData1144 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_452SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_087SampleInfo;
const struct InstrumentPCM instrumentPCMData1145 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_087SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_087SampleInfo;
const struct InstrumentPCM instrumentPCMData1146 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_087SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_453SampleInfo;
const struct InstrumentPCM instrumentPCMData1147 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_453SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x04ec9b,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x0f6a90,
};

extern const struct SampleInfo sfx_454SampleInfo;
const struct InstrumentPCM instrumentPCMData1148 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_454SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x082378,
};

extern const struct SampleInfo sfx_455SampleInfo;
const struct InstrumentPCM instrumentPCMData1149 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_455SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x082378,
};

extern const struct SampleInfo sfx_087SampleInfo;
const struct InstrumentPCM instrumentPCMData1150 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_087SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_456SampleInfo;
const struct InstrumentPCM instrumentPCMData1151 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_456SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_457SampleInfo;
const struct InstrumentPCM instrumentPCMData1152 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_457SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x09d936,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x18ea90,
};

extern const struct SampleInfo sfx_458SampleInfo;
const struct InstrumentPCM instrumentPCMData1153 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_458SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_459SampleInfo;
const struct InstrumentPCM instrumentPCMData1154 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_459SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_460SampleInfo;
const struct InstrumentPCM instrumentPCMData1155 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_460SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_461SampleInfo;
const struct InstrumentPCM instrumentPCMData1156 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_461SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_462SampleInfo;
const struct InstrumentPCM instrumentPCMData1157 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_462SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_463SampleInfo;
const struct InstrumentPCM instrumentPCMData1158 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_463SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_518SampleInfo;
const struct InstrumentPCM instrumentPCMData1159 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_518SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x034867,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_465SampleInfo;
const struct InstrumentPCM instrumentPCMData1160 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_465SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_466SampleInfo;
const struct InstrumentPCM instrumentPCMData1161 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_466SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_086SampleInfo;
const struct InstrumentPCM instrumentPCMData1162 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_086SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_467SampleInfo;
const struct InstrumentPCM instrumentPCMData1163 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_467SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_385SampleInfo;
const struct InstrumentPCM instrumentPCMData1164 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_385SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_468SampleInfo;
const struct InstrumentPCM instrumentPCMData1165 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_468SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_450SampleInfo;
const struct InstrumentPCM instrumentPCMData1166 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_450SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_468SampleInfo;
const struct InstrumentPCM instrumentPCMData1167 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_468SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_468SampleInfo;
const struct InstrumentPCM instrumentPCMData1168 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_468SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_469SampleInfo;
const struct InstrumentPCM instrumentPCMData1169 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_469SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_470SampleInfo;
const struct InstrumentPCM instrumentPCMData1170 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_470SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_471SampleInfo;
const struct InstrumentPCM instrumentPCMData1171 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_471SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x034867,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_472SampleInfo;
const struct InstrumentPCM instrumentPCMData1172 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_472SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_473SampleInfo;
const struct InstrumentPCM instrumentPCMData1173 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_473SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_474SampleInfo;
const struct InstrumentPCM instrumentPCMData1174 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_474SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x034867,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x0f6a90,
};

extern const struct SampleInfo sfx_475SampleInfo;
const struct InstrumentPCM instrumentPCMData1175 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_475SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_476SampleInfo;
const struct InstrumentPCM instrumentPCMData1176 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_476SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_477SampleInfo;
const struct InstrumentPCM instrumentPCMData1177 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_477SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_478SampleInfo;
const struct InstrumentPCM instrumentPCMData1178 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_478SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_477SampleInfo;
const struct InstrumentPCM instrumentPCMData1179 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_477SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_479SampleInfo;
const struct InstrumentPCM instrumentPCMData1180 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_479SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_480SampleInfo;
const struct InstrumentPCM instrumentPCMData1181 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_480SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_450SampleInfo;
const struct InstrumentPCM instrumentPCMData1182 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_450SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x0690ce,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x0f6a90,
};

extern const struct SampleInfo sfx_481SampleInfo;
const struct InstrumentPCM instrumentPCMData1183 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_481SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_482SampleInfo;
const struct InstrumentPCM instrumentPCMData1184 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_482SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_483SampleInfo;
const struct InstrumentPCM instrumentPCMData1185 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_483SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_484SampleInfo;
const struct InstrumentPCM instrumentPCMData1186 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_484SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_216SampleInfo;
const struct InstrumentPCM instrumentPCMData1187 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_216SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_486SampleInfo;
const struct InstrumentPCM instrumentPCMData1188 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_486SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_487SampleInfo;
const struct InstrumentPCM instrumentPCMData1189 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_487SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_488SampleInfo;
const struct InstrumentPCM instrumentPCMData1190 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_488SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_489SampleInfo;
const struct InstrumentPCM instrumentPCMData1191 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_489SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_490SampleInfo;
const struct InstrumentPCM instrumentPCMData1192 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_490SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_491SampleInfo;
const struct InstrumentPCM instrumentPCMData1193 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_491SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_492SampleInfo;
const struct InstrumentPCM instrumentPCMData1194 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_492SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_493SampleInfo;
const struct InstrumentPCM instrumentPCMData1195 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_493SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_494SampleInfo;
const struct InstrumentPCM instrumentPCMData1196 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_494SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_495SampleInfo;
const struct InstrumentPCM instrumentPCMData1197 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_495SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_496SampleInfo;
const struct InstrumentPCM instrumentPCMData1198 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_496SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_497SampleInfo;
const struct InstrumentPCM instrumentPCMData1199 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_497SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_498SampleInfo;
const struct InstrumentPCM instrumentPCMData1200 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_498SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_499SampleInfo;
const struct InstrumentPCM instrumentPCMData1201 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_499SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_500SampleInfo;
const struct InstrumentPCM instrumentPCMData1202 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_500SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x0b8000,
};

extern const struct SampleInfo sfx_501SampleInfo;
const struct InstrumentPCM instrumentPCMData1203 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_501SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x0b8000,
};

extern const struct SampleInfo sfx_502SampleInfo;
const struct InstrumentPCM instrumentPCMData1204 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_502SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x0b8000,
};

extern const struct SampleInfo sfx_503SampleInfo;
const struct InstrumentPCM instrumentPCMData1205 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_503SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x0b8000,
};

extern const struct SampleInfo sfx_504SampleInfo;
const struct InstrumentPCM instrumentPCMData1206 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_504SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x0b8000,
};

extern const struct SampleInfo sfx_505SampleInfo;
const struct InstrumentPCM instrumentPCMData1207 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_505SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x0b8000,
};

extern const struct SampleInfo sfx_506SampleInfo;
const struct InstrumentPCM instrumentPCMData1208 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_506SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x0b8000,
};

extern const struct SampleInfo sfx_507SampleInfo;
const struct InstrumentPCM instrumentPCMData1209 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_507SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x0b8000,
};

extern const struct SampleInfo sfx_508SampleInfo;
const struct InstrumentPCM instrumentPCMData1210 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_508SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x0b8000,
};

extern const struct SampleInfo sfx_509SampleInfo;
const struct InstrumentPCM instrumentPCMData1211 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_509SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x0b8000,
};

extern const struct SampleInfo sfx_510SampleInfo;
const struct InstrumentPCM instrumentPCMData1212 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_510SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_511SampleInfo;
const struct InstrumentPCM instrumentPCMData1213 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_511SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_512SampleInfo;
const struct InstrumentPCM instrumentPCMData1214 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_512SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_513SampleInfo;
const struct InstrumentPCM instrumentPCMData1215 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_513SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_514SampleInfo;
const struct InstrumentPCM instrumentPCMData1216 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_514SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_515SampleInfo;
const struct InstrumentPCM instrumentPCMData1217 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_515SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_516SampleInfo;
const struct InstrumentPCM instrumentPCMData1218 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_516SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

const struct InstrumentSubbankSingleKey instrumentSubbankSingleKeyData1219 = {
    /* Type      */ INSTRUMENT_SUBBANK_SINGLE_KEY,
    /* Total     */ 36,
    /* Sub-Bank  */ (const union Instrument **) 0x08a996e4, // POINTER
};

extern const struct SampleInfo sfx_588SampleInfo;
const struct InstrumentPCM instrumentPCMData1220 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 32,
    /* Sample    */ &sfx_588SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x0f6a90,
};

extern const struct SampleInfo sfx_589SampleInfo;
const struct InstrumentPCM instrumentPCMData1221 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 32,
    /* Sample    */ &sfx_589SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_590SampleInfo;
const struct InstrumentPCM instrumentPCMData1222 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 32,
    /* Sample    */ &sfx_590SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x0f6a90,
};

extern const struct SampleInfo sfx_591SampleInfo;
const struct InstrumentPCM instrumentPCMData1223 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_591SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_190SampleInfo;
const struct InstrumentPCM instrumentPCMData1224 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_190SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_449SampleInfo;
const struct InstrumentPCM instrumentPCMData1225 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ -32,
    /* Sample    */ &sfx_449SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_592SampleInfo;
const struct InstrumentPCM instrumentPCMData1226 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ -48,
    /* Sample    */ &sfx_592SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x0f6a90,
};

extern const struct SampleInfo sfx_593SampleInfo;
const struct InstrumentPCM instrumentPCMData1227 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ -48,
    /* Sample    */ &sfx_593SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x0f6a90,
};

extern const struct SampleInfo sfx_594SampleInfo;
const struct InstrumentPCM instrumentPCMData1228 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 48,
    /* Sample    */ &sfx_594SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x0f6a90,
};

extern const struct SampleInfo sfx_594SampleInfo;
const struct InstrumentPCM instrumentPCMData1229 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x35,
    /* unkEffect */ 0,
    /* Panning   */ 48,
    /* Sample    */ &sfx_594SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x0f6a90,
};

extern const struct SampleInfo sfx_590SampleInfo;
const struct InstrumentPCM instrumentPCMData1230 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x30,
    /* unkEffect */ 0,
    /* Panning   */ -32,
    /* Sample    */ &sfx_590SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_588SampleInfo;
const struct InstrumentPCM instrumentPCMData1231 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x37,
    /* unkEffect */ 0,
    /* Panning   */ 32,
    /* Sample    */ &sfx_588SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x0f6a90,
};

extern const struct SampleInfo sfx_588SampleInfo;
const struct InstrumentPCM instrumentPCMData1232 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3E,
    /* unkEffect */ 0,
    /* Panning   */ 32,
    /* Sample    */ &sfx_588SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x0f6a90,
};

extern const struct SampleInfo sfx_588SampleInfo;
const struct InstrumentPCM instrumentPCMData1233 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x40,
    /* unkEffect */ 0,
    /* Panning   */ 32,
    /* Sample    */ &sfx_588SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x0f6a90,
};

extern const struct SampleInfo sfx_595SampleInfo;
const struct InstrumentPCM instrumentPCMData1234 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x40,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_595SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x0f6a90,
};

extern const struct SampleInfo sfx_596SampleInfo;
const struct InstrumentPCM instrumentPCMData1235 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x40,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_596SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x0f6a90,
};

extern const struct SampleInfo sfx_597SampleInfo;
const struct InstrumentPCM instrumentPCMData1236 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x40,
    /* unkEffect */ 0,
    /* Panning   */ -32,
    /* Sample    */ &sfx_597SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x0f6a90,
};

extern const struct SampleInfo sfx_598SampleInfo;
const struct InstrumentPCM instrumentPCMData1237 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x40,
    /* unkEffect */ 0,
    /* Panning   */ -32,
    /* Sample    */ &sfx_598SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x0f6a90,
};

extern const struct SampleInfo sfx_141SampleInfo;
const struct InstrumentPCM instrumentPCMData1238 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_141SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_142SampleInfo;
const struct InstrumentPCM instrumentPCMData1239 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_142SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_143SampleInfo;
const struct InstrumentPCM instrumentPCMData1240 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_143SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_599SampleInfo;
const struct InstrumentPCM instrumentPCMData1241 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x40,
    /* unkEffect */ 0,
    /* Panning   */ 63,
    /* Sample    */ &sfx_599SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x0f6a90,
};

extern const struct SampleInfo sfx_600SampleInfo;
const struct InstrumentPCM instrumentPCMData1242 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_600SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_131SampleInfo;
const struct InstrumentPCM instrumentPCMData1243 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_131SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_132SampleInfo;
const struct InstrumentPCM instrumentPCMData1244 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_132SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_133SampleInfo;
const struct InstrumentPCM instrumentPCMData1245 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_133SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_134SampleInfo;
const struct InstrumentPCM instrumentPCMData1246 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_134SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_135SampleInfo;
const struct InstrumentPCM instrumentPCMData1247 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_135SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_136SampleInfo;
const struct InstrumentPCM instrumentPCMData1248 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_136SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_601SampleInfo;
const struct InstrumentPCM instrumentPCMData1249 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_601SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_602SampleInfo;
const struct InstrumentPCM instrumentPCMData1250 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_602SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_603SampleInfo;
const struct InstrumentPCM instrumentPCMData1251 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_603SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_604SampleInfo;
const struct InstrumentPCM instrumentPCMData1252 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_604SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_605SampleInfo;
const struct InstrumentPCM instrumentPCMData1253 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_605SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_606SampleInfo;
const struct InstrumentPCM instrumentPCMData1254 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_606SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_607SampleInfo;
const struct InstrumentPCM instrumentPCMData1255 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_607SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_608SampleInfo;
const struct InstrumentPCM instrumentPCMData1256 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_608SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_609SampleInfo;
const struct InstrumentPCM instrumentPCMData1257 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_609SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_610SampleInfo;
const struct InstrumentPCM instrumentPCMData1258 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_610SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_611SampleInfo;
const struct InstrumentPCM instrumentPCMData1259 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_611SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_612SampleInfo;
const struct InstrumentPCM instrumentPCMData1260 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_612SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_613SampleInfo;
const struct InstrumentPCM instrumentPCMData1261 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_613SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_614SampleInfo;
const struct InstrumentPCM instrumentPCMData1262 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_614SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_615SampleInfo;
const struct InstrumentPCM instrumentPCMData1263 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_615SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_616SampleInfo;
const struct InstrumentPCM instrumentPCMData1264 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_616SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_617SampleInfo;
const struct InstrumentPCM instrumentPCMData1265 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_617SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_618SampleInfo;
const struct InstrumentPCM instrumentPCMData1266 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_618SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_619SampleInfo;
const struct InstrumentPCM instrumentPCMData1267 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_619SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_620SampleInfo;
const struct InstrumentPCM instrumentPCMData1268 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_620SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_621SampleInfo;
const struct InstrumentPCM instrumentPCMData1269 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_621SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_622SampleInfo;
const struct InstrumentPCM instrumentPCMData1270 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_622SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_623SampleInfo;
const struct InstrumentPCM instrumentPCMData1271 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_623SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_624SampleInfo;
const struct InstrumentPCM instrumentPCMData1272 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_624SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_625SampleInfo;
const struct InstrumentPCM instrumentPCMData1273 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_625SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_626SampleInfo;
const struct InstrumentPCM instrumentPCMData1274 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_626SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_627SampleInfo;
const struct InstrumentPCM instrumentPCMData1275 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_627SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_628SampleInfo;
const struct InstrumentPCM instrumentPCMData1276 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_628SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_629SampleInfo;
const struct InstrumentPCM instrumentPCMData1277 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_629SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_630SampleInfo;
const struct InstrumentPCM instrumentPCMData1278 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_630SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_631SampleInfo;
const struct InstrumentPCM instrumentPCMData1279 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_631SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_632SampleInfo;
const struct InstrumentPCM instrumentPCMData1280 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_632SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_633SampleInfo;
const struct InstrumentPCM instrumentPCMData1281 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_633SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_634SampleInfo;
const struct InstrumentPCM instrumentPCMData1282 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_634SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_635SampleInfo;
const struct InstrumentPCM instrumentPCMData1283 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_635SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_636SampleInfo;
const struct InstrumentPCM instrumentPCMData1284 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_636SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_637SampleInfo;
const struct InstrumentPCM instrumentPCMData1285 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_637SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_638SampleInfo;
const struct InstrumentPCM instrumentPCMData1286 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_638SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_639SampleInfo;
const struct InstrumentPCM instrumentPCMData1287 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_639SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_640SampleInfo;
const struct InstrumentPCM instrumentPCMData1288 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_640SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_641SampleInfo;
const struct InstrumentPCM instrumentPCMData1289 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_641SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_642SampleInfo;
const struct InstrumentPCM instrumentPCMData1290 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_642SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_643SampleInfo;
const struct InstrumentPCM instrumentPCMData1291 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_643SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_644SampleInfo;
const struct InstrumentPCM instrumentPCMData1292 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_644SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_645SampleInfo;
const struct InstrumentPCM instrumentPCMData1293 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_645SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_646SampleInfo;
const struct InstrumentPCM instrumentPCMData1294 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_646SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_647SampleInfo;
const struct InstrumentPCM instrumentPCMData1295 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_647SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_648SampleInfo;
const struct InstrumentPCM instrumentPCMData1296 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_648SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_649SampleInfo;
const struct InstrumentPCM instrumentPCMData1297 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_649SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_650SampleInfo;
const struct InstrumentPCM instrumentPCMData1298 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_650SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_651SampleInfo;
const struct InstrumentPCM instrumentPCMData1299 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_651SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_652SampleInfo;
const struct InstrumentPCM instrumentPCMData1300 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_652SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_653SampleInfo;
const struct InstrumentPCM instrumentPCMData1301 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_653SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_654SampleInfo;
const struct InstrumentPCM instrumentPCMData1302 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_654SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_655SampleInfo;
const struct InstrumentPCM instrumentPCMData1303 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_655SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_656SampleInfo;
const struct InstrumentPCM instrumentPCMData1304 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_656SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_657SampleInfo;
const struct InstrumentPCM instrumentPCMData1305 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_657SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_658SampleInfo;
const struct InstrumentPCM instrumentPCMData1306 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_658SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_659SampleInfo;
const struct InstrumentPCM instrumentPCMData1307 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_659SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_660SampleInfo;
const struct InstrumentPCM instrumentPCMData1308 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_660SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_661SampleInfo;
const struct InstrumentPCM instrumentPCMData1309 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_661SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_662SampleInfo;
const struct InstrumentPCM instrumentPCMData1310 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_662SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_663SampleInfo;
const struct InstrumentPCM instrumentPCMData1311 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_663SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_664SampleInfo;
const struct InstrumentPCM instrumentPCMData1312 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_664SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_665SampleInfo;
const struct InstrumentPCM instrumentPCMData1313 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_665SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_666SampleInfo;
const struct InstrumentPCM instrumentPCMData1314 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_666SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_667SampleInfo;
const struct InstrumentPCM instrumentPCMData1315 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_667SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_668SampleInfo;
const struct InstrumentPCM instrumentPCMData1316 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_668SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_669SampleInfo;
const struct InstrumentPCM instrumentPCMData1317 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_669SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_670SampleInfo;
const struct InstrumentPCM instrumentPCMData1318 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_670SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_671SampleInfo;
const struct InstrumentPCM instrumentPCMData1319 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_671SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_672SampleInfo;
const struct InstrumentPCM instrumentPCMData1320 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_672SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_673SampleInfo;
const struct InstrumentPCM instrumentPCMData1321 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_673SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_674SampleInfo;
const struct InstrumentPCM instrumentPCMData1322 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_674SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_675SampleInfo;
const struct InstrumentPCM instrumentPCMData1323 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_675SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_676SampleInfo;
const struct InstrumentPCM instrumentPCMData1324 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_676SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_677SampleInfo;
const struct InstrumentPCM instrumentPCMData1325 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_677SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_678SampleInfo;
const struct InstrumentPCM instrumentPCMData1326 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_678SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_679SampleInfo;
const struct InstrumentPCM instrumentPCMData1327 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_679SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_680SampleInfo;
const struct InstrumentPCM instrumentPCMData1328 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_680SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_681SampleInfo;
const struct InstrumentPCM instrumentPCMData1329 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_681SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_682SampleInfo;
const struct InstrumentPCM instrumentPCMData1330 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_682SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_683SampleInfo;
const struct InstrumentPCM instrumentPCMData1331 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_683SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_684SampleInfo;
const struct InstrumentPCM instrumentPCMData1332 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_684SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_685SampleInfo;
const struct InstrumentPCM instrumentPCMData1333 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_685SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_686SampleInfo;
const struct InstrumentPCM instrumentPCMData1334 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_686SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_687SampleInfo;
const struct InstrumentPCM instrumentPCMData1335 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_687SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_688SampleInfo;
const struct InstrumentPCM instrumentPCMData1336 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_688SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_689SampleInfo;
const struct InstrumentPCM instrumentPCMData1337 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_689SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_690SampleInfo;
const struct InstrumentPCM instrumentPCMData1338 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_690SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_691SampleInfo;
const struct InstrumentPCM instrumentPCMData1339 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_691SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_692SampleInfo;
const struct InstrumentPCM instrumentPCMData1340 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_692SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_693SampleInfo;
const struct InstrumentPCM instrumentPCMData1341 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_693SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_694SampleInfo;
const struct InstrumentPCM instrumentPCMData1342 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_694SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_695SampleInfo;
const struct InstrumentPCM instrumentPCMData1343 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_695SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_696SampleInfo;
const struct InstrumentPCM instrumentPCMData1344 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_696SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_697SampleInfo;
const struct InstrumentPCM instrumentPCMData1345 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_697SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_698SampleInfo;
const struct InstrumentPCM instrumentPCMData1346 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_698SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_699SampleInfo;
const struct InstrumentPCM instrumentPCMData1347 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_699SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_700SampleInfo;
const struct InstrumentPCM instrumentPCMData1348 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_700SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_701SampleInfo;
const struct InstrumentPCM instrumentPCMData1349 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_701SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_702SampleInfo;
const struct InstrumentPCM instrumentPCMData1350 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_702SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_703SampleInfo;
const struct InstrumentPCM instrumentPCMData1351 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_703SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_704SampleInfo;
const struct InstrumentPCM instrumentPCMData1352 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_704SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_705SampleInfo;
const struct InstrumentPCM instrumentPCMData1353 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_705SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_706SampleInfo;
const struct InstrumentPCM instrumentPCMData1354 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_706SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_707SampleInfo;
const struct InstrumentPCM instrumentPCMData1355 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_707SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_708SampleInfo;
const struct InstrumentPCM instrumentPCMData1356 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_708SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_709SampleInfo;
const struct InstrumentPCM instrumentPCMData1357 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_709SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_710SampleInfo;
const struct InstrumentPCM instrumentPCMData1358 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_710SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_711SampleInfo;
const struct InstrumentPCM instrumentPCMData1359 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_711SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_712SampleInfo;
const struct InstrumentPCM instrumentPCMData1360 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_712SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_713SampleInfo;
const struct InstrumentPCM instrumentPCMData1361 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_713SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_714SampleInfo;
const struct InstrumentPCM instrumentPCMData1362 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_714SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_715SampleInfo;
const struct InstrumentPCM instrumentPCMData1363 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_715SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_716SampleInfo;
const struct InstrumentPCM instrumentPCMData1364 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_716SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_717SampleInfo;
const struct InstrumentPCM instrumentPCMData1365 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_717SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_718SampleInfo;
const struct InstrumentPCM instrumentPCMData1366 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_718SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_719SampleInfo;
const struct InstrumentPCM instrumentPCMData1367 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_719SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_720SampleInfo;
const struct InstrumentPCM instrumentPCMData1368 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_720SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_721SampleInfo;
const struct InstrumentPCM instrumentPCMData1369 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_721SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_722SampleInfo;
const struct InstrumentPCM instrumentPCMData1370 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_722SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_723SampleInfo;
const struct InstrumentPCM instrumentPCMData1371 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_723SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_724SampleInfo;
const struct InstrumentPCM instrumentPCMData1372 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_724SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_725SampleInfo;
const struct InstrumentPCM instrumentPCMData1373 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_725SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_726SampleInfo;
const struct InstrumentPCM instrumentPCMData1374 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_726SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_727SampleInfo;
const struct InstrumentPCM instrumentPCMData1375 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_727SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_728SampleInfo;
const struct InstrumentPCM instrumentPCMData1376 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_728SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_729SampleInfo;
const struct InstrumentPCM instrumentPCMData1377 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_729SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_730SampleInfo;
const struct InstrumentPCM instrumentPCMData1378 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_730SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_731SampleInfo;
const struct InstrumentPCM instrumentPCMData1379 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_731SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_732SampleInfo;
const struct InstrumentPCM instrumentPCMData1380 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_732SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_733SampleInfo;
const struct InstrumentPCM instrumentPCMData1381 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_733SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_734SampleInfo;
const struct InstrumentPCM instrumentPCMData1382 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_734SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_735SampleInfo;
const struct InstrumentPCM instrumentPCMData1383 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_735SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_736SampleInfo;
const struct InstrumentPCM instrumentPCMData1384 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_736SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_737SampleInfo;
const struct InstrumentPCM instrumentPCMData1385 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_737SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_738SampleInfo;
const struct InstrumentPCM instrumentPCMData1386 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_738SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_739SampleInfo;
const struct InstrumentPCM instrumentPCMData1387 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_739SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_740SampleInfo;
const struct InstrumentPCM instrumentPCMData1388 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_740SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_741SampleInfo;
const struct InstrumentPCM instrumentPCMData1389 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_741SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_742SampleInfo;
const struct InstrumentPCM instrumentPCMData1390 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_742SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_743SampleInfo;
const struct InstrumentPCM instrumentPCMData1391 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_743SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_744SampleInfo;
const struct InstrumentPCM instrumentPCMData1392 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_744SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_745SampleInfo;
const struct InstrumentPCM instrumentPCMData1393 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_745SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_746SampleInfo;
const struct InstrumentPCM instrumentPCMData1394 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_746SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_747SampleInfo;
const struct InstrumentPCM instrumentPCMData1395 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_747SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_748SampleInfo;
const struct InstrumentPCM instrumentPCMData1396 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_748SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_749SampleInfo;
const struct InstrumentPCM instrumentPCMData1397 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_749SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_750SampleInfo;
const struct InstrumentPCM instrumentPCMData1398 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_750SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_751SampleInfo;
const struct InstrumentPCM instrumentPCMData1399 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_751SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_752SampleInfo;
const struct InstrumentPCM instrumentPCMData1400 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_752SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_753SampleInfo;
const struct InstrumentPCM instrumentPCMData1401 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_753SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_754SampleInfo;
const struct InstrumentPCM instrumentPCMData1402 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_754SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_755SampleInfo;
const struct InstrumentPCM instrumentPCMData1403 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_755SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_756SampleInfo;
const struct InstrumentPCM instrumentPCMData1404 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_756SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_757SampleInfo;
const struct InstrumentPCM instrumentPCMData1405 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_757SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_758SampleInfo;
const struct InstrumentPCM instrumentPCMData1406 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_758SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_759SampleInfo;
const struct InstrumentPCM instrumentPCMData1407 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_759SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_760SampleInfo;
const struct InstrumentPCM instrumentPCMData1408 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_760SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_761SampleInfo;
const struct InstrumentPCM instrumentPCMData1409 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_761SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_762SampleInfo;
const struct InstrumentPCM instrumentPCMData1410 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_762SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_763SampleInfo;
const struct InstrumentPCM instrumentPCMData1411 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_763SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_764SampleInfo;
const struct InstrumentPCM instrumentPCMData1412 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_764SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_765SampleInfo;
const struct InstrumentPCM instrumentPCMData1413 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_765SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_766SampleInfo;
const struct InstrumentPCM instrumentPCMData1414 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_766SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_767SampleInfo;
const struct InstrumentPCM instrumentPCMData1415 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_767SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_768SampleInfo;
const struct InstrumentPCM instrumentPCMData1416 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_768SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_769SampleInfo;
const struct InstrumentPCM instrumentPCMData1417 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_769SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_770SampleInfo;
const struct InstrumentPCM instrumentPCMData1418 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_770SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_771SampleInfo;
const struct InstrumentPCM instrumentPCMData1419 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_771SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_772SampleInfo;
const struct InstrumentPCM instrumentPCMData1420 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_772SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_773SampleInfo;
const struct InstrumentPCM instrumentPCMData1421 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_773SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_774SampleInfo;
const struct InstrumentPCM instrumentPCMData1422 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_774SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_775SampleInfo;
const struct InstrumentPCM instrumentPCMData1423 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_775SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_776SampleInfo;
const struct InstrumentPCM instrumentPCMData1424 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_776SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_777SampleInfo;
const struct InstrumentPCM instrumentPCMData1425 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_777SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_778SampleInfo;
const struct InstrumentPCM instrumentPCMData1426 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_778SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_779SampleInfo;
const struct InstrumentPCM instrumentPCMData1427 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_779SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_780SampleInfo;
const struct InstrumentPCM instrumentPCMData1428 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_780SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_781SampleInfo;
const struct InstrumentPCM instrumentPCMData1429 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_781SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_782SampleInfo;
const struct InstrumentPCM instrumentPCMData1430 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_782SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_783SampleInfo;
const struct InstrumentPCM instrumentPCMData1431 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_783SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_784SampleInfo;
const struct InstrumentPCM instrumentPCMData1432 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_784SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_785SampleInfo;
const struct InstrumentPCM instrumentPCMData1433 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_785SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_786SampleInfo;
const struct InstrumentPCM instrumentPCMData1434 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_786SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_787SampleInfo;
const struct InstrumentPCM instrumentPCMData1435 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_787SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x18ea90,
};

extern const struct SampleInfo sfx_788SampleInfo;
const struct InstrumentPCM instrumentPCMData1436 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_788SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x0b8000,
};

extern const struct SampleInfo sfx_789SampleInfo;
const struct InstrumentPCM instrumentPCMData1437 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_789SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_790SampleInfo;
const struct InstrumentPCM instrumentPCMData1438 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_790SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x19a814,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x106a05,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_791SampleInfo;
const struct InstrumentPCM instrumentPCMData1439 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_791SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x18ea90,
};

extern const struct SampleInfo sfx_449SampleInfo;
const struct InstrumentPCM instrumentPCMData1440 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ -32,
    /* Sample    */ &sfx_449SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_792SampleInfo;
const struct InstrumentPCM instrumentPCMData1441 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_792SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_451SampleInfo;
const struct InstrumentPCM instrumentPCMData1442 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ -32,
    /* Sample    */ &sfx_451SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_793SampleInfo;
const struct InstrumentPCM instrumentPCMData1443 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x30,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_793SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x19a814,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x024c48,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x082378,
};

extern const struct SampleInfo sfx_591SampleInfo;
const struct InstrumentPCM instrumentPCMData1444 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_591SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_793SampleInfo;
const struct InstrumentPCM instrumentPCMData1445 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x36,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_793SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x19a814,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x024c48,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x082378,
};

extern const struct SampleInfo sfx_793SampleInfo;
const struct InstrumentPCM instrumentPCMData1446 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_793SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x19a814,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x024c48,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x082378,
};

extern const struct SampleInfo sfx_794SampleInfo;
const struct InstrumentPCM instrumentPCMData1447 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_794SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x014867,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x034867,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x082378,
};

extern const struct SampleInfo sfx_795SampleInfo;
const struct InstrumentPCM instrumentPCMData1448 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_795SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x19a814,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x13b26c,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x0f6a90,
};

extern const struct SampleInfo sfx_796SampleInfo;
const struct InstrumentPCM instrumentPCMData1449 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x39,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_796SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_796SampleInfo;
const struct InstrumentPCM instrumentPCMData1450 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3F,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_796SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_796SampleInfo;
const struct InstrumentPCM instrumentPCMData1451 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x46,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_796SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_797SampleInfo;
const struct InstrumentPCM instrumentPCMData1452 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_797SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_798SampleInfo;
const struct InstrumentPCM instrumentPCMData1453 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_798SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_799SampleInfo;
const struct InstrumentPCM instrumentPCMData1454 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_799SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_456SampleInfo;
const struct InstrumentPCM instrumentPCMData1455 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_456SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_800SampleInfo;
const struct InstrumentPCM instrumentPCMData1456 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_800SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x4cf83e,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x0690ce,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x022aa4,
};

extern const struct SampleInfo sfx_801SampleInfo;
const struct InstrumentPCM instrumentPCMData1457 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_801SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_600SampleInfo;
const struct InstrumentPCM instrumentPCMData1458 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_600SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_588SampleInfo;
const struct InstrumentPCM instrumentPCMData1459 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_588SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x0f6a90,
};

extern const struct SampleInfo sfx_589SampleInfo;
const struct InstrumentPCM instrumentPCMData1460 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_589SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_802SampleInfo;
const struct InstrumentPCM instrumentPCMData1461 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_802SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x0f6a90,
};

extern const struct SampleInfo sfx_803SampleInfo;
const struct InstrumentPCM instrumentPCMData1462 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_803SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x267c1f,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x034867,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x082378,
};

extern const struct SampleInfo sfx_188SampleInfo;
const struct InstrumentPCM instrumentPCMData1463 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 32,
    /* Sample    */ &sfx_188SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_804SampleInfo;
const struct InstrumentPCM instrumentPCMData1464 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_804SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x267c1f,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x0690ce,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x082378,
};

extern const struct SampleInfo sfx_805SampleInfo;
const struct InstrumentPCM instrumentPCMData1465 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_805SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x0f6a90,
};

extern const struct SampleInfo sfx_806SampleInfo;
const struct InstrumentPCM instrumentPCMData1466 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_806SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x0f6a90,
};

extern const struct SampleInfo sfx_807SampleInfo;
const struct InstrumentPCM instrumentPCMData1467 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_807SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x0f6a90,
};

extern const struct SampleInfo sfx_023SampleInfo;
const struct InstrumentPCM instrumentPCMData1468 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_023SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_808SampleInfo;
const struct InstrumentPCM instrumentPCMData1469 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_808SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x18ea90,
};

extern const struct SampleInfo sfx_809SampleInfo;
const struct InstrumentPCM instrumentPCMData1470 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_809SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x66a052,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x034867,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x18ea90,
};

extern const struct SampleInfo sfx_810SampleInfo;
const struct InstrumentPCM instrumentPCMData1471 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_810SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x19a814,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x04ec9b,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x082378,
};

extern const struct SampleInfo sfx_811SampleInfo;
const struct InstrumentPCM instrumentPCMData1472 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_811SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x19a814,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x04ec9b,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x082378,
};

extern const struct SampleInfo sfx_812SampleInfo;
const struct InstrumentPCM instrumentPCMData1473 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_812SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x133e0f,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x0690ce,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x082378,
};

extern const struct SampleInfo sfx_813SampleInfo;
const struct InstrumentPCM instrumentPCMData1474 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_813SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x19a814,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x04ec9b,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x082378,
};

extern const struct SampleInfo sfx_814SampleInfo;
const struct InstrumentPCM instrumentPCMData1475 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x37,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_814SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x031548,
};

extern const struct SampleInfo sfx_123SampleInfo;
const struct InstrumentPCM instrumentPCMData1476 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_123SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x055552,
};

extern const struct SampleInfo sfx_815SampleInfo;
const struct InstrumentPCM instrumentPCMData1477 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_815SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x055552,
};

extern const struct SampleInfo sfx_816SampleInfo;
const struct InstrumentPCM instrumentPCMData1478 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_816SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x055552,
};

extern const struct SampleInfo sfx_817SampleInfo;
const struct InstrumentPCM instrumentPCMData1479 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_817SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x055552,
};

extern const struct SampleInfo sfx_818SampleInfo;
const struct InstrumentPCM instrumentPCMData1480 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_818SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_819SampleInfo;
const struct InstrumentPCM instrumentPCMData1481 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_819SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_820SampleInfo;
const struct InstrumentPCM instrumentPCMData1482 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_820SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_821SampleInfo;
const struct InstrumentPCM instrumentPCMData1483 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_821SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_822SampleInfo;
const struct InstrumentPCM instrumentPCMData1484 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_822SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_823SampleInfo;
const struct InstrumentPCM instrumentPCMData1485 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_823SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x66a052,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_824SampleInfo;
const struct InstrumentPCM instrumentPCMData1486 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_824SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x18ea90,
};

extern const struct SampleInfo sfx_034SampleInfo;
const struct InstrumentPCM instrumentPCMData1487 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_034SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_600SampleInfo;
const struct InstrumentPCM instrumentPCMData1488 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_600SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x013fff,
};

extern const struct SampleInfo sfx_825SampleInfo;
const struct InstrumentPCM instrumentPCMData1489 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_825SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_030SampleInfo;
const struct InstrumentPCM instrumentPCMData1490 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_030SampleInfo,
    /* ADSR Init */ 0x000000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x307c1f,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_826SampleInfo;
const struct InstrumentPCM instrumentPCMData1491 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_826SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_827SampleInfo;
const struct InstrumentPCM instrumentPCMData1492 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_827SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_828SampleInfo;
const struct InstrumentPCM instrumentPCMData1493 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_828SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_829SampleInfo;
const struct InstrumentPCM instrumentPCMData1494 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_829SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_830SampleInfo;
const struct InstrumentPCM instrumentPCMData1495 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_830SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_831SampleInfo;
const struct InstrumentPCM instrumentPCMData1496 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_831SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_832SampleInfo;
const struct InstrumentPCM instrumentPCMData1497 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_832SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_833SampleInfo;
const struct InstrumentPCM instrumentPCMData1498 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_833SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_834SampleInfo;
const struct InstrumentPCM instrumentPCMData1499 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_834SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x0f6a90,
};

extern const struct SampleInfo sfx_835SampleInfo;
const struct InstrumentPCM instrumentPCMData1500 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_835SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

const struct InstrumentPSG instrumentPSGData1501 = {
    /* Type      */ INSTRUMENT_PSG,
    /* Key       */ 0x3C,
    /* Panning   */ 127,
    /* PSG Wave  */ NULL,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7e0000,
    /* ADSR Atk  */ 0x7f0000,
    /* ADSR Dec  */ 0x7f0000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x7f0000,
    /* PSG Chnl  */ PSG_NOISE_CHANNEL,
    /* PSG Len   */ 0,
    /* PSG Sweep */ 0,
    /* PSG Tone  */ 0,
    /* PSG Noise */ PSG_NOISE_COUNTER_15,
};

extern const struct SampleInfo sfx_824SampleInfo;
const struct InstrumentPCM instrumentPCMData1502 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_824SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_836SampleInfo;
const struct InstrumentPCM instrumentPCMData1503 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_836SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_791SampleInfo;
const struct InstrumentPCM instrumentPCMData1504 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_791SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x18ea90,
};

extern const struct SampleInfo sfx_837SampleInfo;
const struct InstrumentPCM instrumentPCMData1505 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_837SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x18ea90,
};

extern const struct SampleInfo sfx_838SampleInfo;
const struct InstrumentPCM instrumentPCMData1506 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_838SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_839SampleInfo;
const struct InstrumentPCM instrumentPCMData1507 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_839SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_824SampleInfo;
const struct InstrumentPCM instrumentPCMData1508 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_824SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_509SampleInfo;
const struct InstrumentPCM instrumentPCMData1509 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_509SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_840SampleInfo;
const struct InstrumentPCM instrumentPCMData1510 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_840SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_832SampleInfo;
const struct InstrumentPCM instrumentPCMData1511 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_832SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_818SampleInfo;
const struct InstrumentPCM instrumentPCMData1512 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_818SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_841SampleInfo;
const struct InstrumentPCM instrumentPCMData1513 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_841SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_823SampleInfo;
const struct InstrumentPCM instrumentPCMData1514 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_823SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x66a052,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_127SampleInfo;
const struct InstrumentPCM instrumentPCMData1515 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_127SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_842SampleInfo;
const struct InstrumentPCM instrumentPCMData1516 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_842SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_835SampleInfo;
const struct InstrumentPCM instrumentPCMData1517 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_835SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

const struct InstrumentPSG instrumentPSGData1518 = {
    /* Type      */ INSTRUMENT_PSG,
    /* Key       */ 0x3C,
    /* Panning   */ 127,
    /* PSG Wave  */ NULL,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7e0000,
    /* ADSR Atk  */ 0x7f0000,
    /* ADSR Dec  */ 0x7f0000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x7f0000,
    /* PSG Chnl  */ PSG_NOISE_CHANNEL,
    /* PSG Len   */ 0,
    /* PSG Sweep */ 0,
    /* PSG Tone  */ 0,
    /* PSG Noise */ PSG_NOISE_COUNTER_15,
};

extern const struct SampleInfo sfx_819SampleInfo;
const struct InstrumentPCM instrumentPCMData1519 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_819SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_843SampleInfo;
const struct InstrumentPCM instrumentPCMData1520 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_843SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_844SampleInfo;
const struct InstrumentPCM instrumentPCMData1521 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_844SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_845SampleInfo;
const struct InstrumentPCM instrumentPCMData1522 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_845SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_846SampleInfo;
const struct InstrumentPCM instrumentPCMData1523 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_846SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_839SampleInfo;
const struct InstrumentPCM instrumentPCMData1524 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_839SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_847SampleInfo;
const struct InstrumentPCM instrumentPCMData1525 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_847SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_848SampleInfo;
const struct InstrumentPCM instrumentPCMData1526 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_848SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_849SampleInfo;
const struct InstrumentPCM instrumentPCMData1527 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_849SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_429SampleInfo;
const struct InstrumentPCM instrumentPCMData1528 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_429SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_820SampleInfo;
const struct InstrumentPCM instrumentPCMData1529 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_820SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_850SampleInfo;
const struct InstrumentPCM instrumentPCMData1530 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_850SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_851SampleInfo;
const struct InstrumentPCM instrumentPCMData1531 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_851SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_852SampleInfo;
const struct InstrumentPCM instrumentPCMData1532 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_852SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_853SampleInfo;
const struct InstrumentPCM instrumentPCMData1533 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_853SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_854SampleInfo;
const struct InstrumentPCM instrumentPCMData1534 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_854SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_004SampleInfo;
const struct InstrumentPCM instrumentPCMData1535 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_004SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_428SampleInfo;
const struct InstrumentPCM instrumentPCMData1536 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_428SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x015029,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_214SampleInfo;
const struct InstrumentPCM instrumentPCMData1537 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_214SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_122SampleInfo;
const struct InstrumentPCM instrumentPCMData1538 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_122SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_855SampleInfo;
const struct InstrumentPCM instrumentPCMData1539 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_855SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_818SampleInfo;
const struct InstrumentPCM instrumentPCMData1540 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_818SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_819SampleInfo;
const struct InstrumentPCM instrumentPCMData1541 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_819SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_835SampleInfo;
const struct InstrumentPCM instrumentPCMData1542 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_835SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_856SampleInfo;
const struct InstrumentPCM instrumentPCMData1543 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_856SampleInfo,
    /* ADSR Init */ 0x000000,
    /* ADSR Sus  */ 0x73745d,
    /* ADSR Atk  */ 0x5c1f07,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_857SampleInfo;
const struct InstrumentPCM instrumentPCMData1544 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_857SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

const struct InstrumentPSG instrumentPSGData1545 = {
    /* Type      */ INSTRUMENT_PSG,
    /* Key       */ 0x3C,
    /* Panning   */ 127,
    /* PSG Wave  */ NULL,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7e0000,
    /* ADSR Atk  */ 0x7f0000,
    /* ADSR Dec  */ 0x7f0000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x0418c6,
    /* PSG Chnl  */ PSG_NOISE_CHANNEL,
    /* PSG Len   */ 0,
    /* PSG Sweep */ 0,
    /* PSG Tone  */ 0,
    /* PSG Noise */ PSG_NOISE_COUNTER_7,
};

extern const struct SampleInfo sfx_820SampleInfo;
const struct InstrumentPCM instrumentPCMData1546 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_820SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x0f6a90,
};

extern const struct SampleInfo sfx_834SampleInfo;
const struct InstrumentPCM instrumentPCMData1547 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_834SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x0f6a90,
};

extern const struct SampleInfo sfx_858SampleInfo;
const struct InstrumentPCM instrumentPCMData1548 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_858SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_859SampleInfo;
const struct InstrumentPCM instrumentPCMData1549 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_859SampleInfo,
    /* ADSR Init */ 0x000000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x5c1f07,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_086SampleInfo;
const struct InstrumentPCM instrumentPCMData1550 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_086SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_197SampleInfo;
const struct InstrumentPCM instrumentPCMData1551 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_197SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_860SampleInfo;
const struct InstrumentPCM instrumentPCMData1552 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_860SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x335029,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x1a433b,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x031548,
};

extern const struct SampleInfo sfx_860SampleInfo;
const struct InstrumentPCM instrumentPCMData1553 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_860SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x4cf83e,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x0690ce,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x18ea90,
};

extern const struct SampleInfo sfx_432SampleInfo;
const struct InstrumentPCM instrumentPCMData1554 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_432SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

const struct InstrumentSubbankSingleKey instrumentSubbankSingleKeyData1555 = {
    /* Type      */ INSTRUMENT_SUBBANK_SINGLE_KEY,
    /* Total     */ 36,
    /* Sub-Bank  */ (const union Instrument **) 0x08a9a2e8, // POINTER
};

extern const struct SampleInfo sfx_832SampleInfo;
const struct InstrumentPCM instrumentPCMData1556 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_832SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_222SampleInfo;
const struct InstrumentPCM instrumentPCMData1557 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_222SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_829SampleInfo;
const struct InstrumentPCM instrumentPCMData1558 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_829SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

const struct InstrumentPSG instrumentPSGData1559 = {
    /* Type      */ INSTRUMENT_PSG,
    /* Key       */ 0x3C,
    /* Panning   */ 127,
    /* PSG Wave  */ NULL,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7e0000,
    /* ADSR Atk  */ 0x7f0000,
    /* ADSR Dec  */ 0x7f0000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x7f0000,
    /* PSG Chnl  */ PSG_PULSE_CHANNEL_1,
    /* PSG Len   */ 0,
    /* PSG Sweep */ 0,
    /* PSG Tone  */ PSG_TONE_DUTY_50,
    /* PSG Noise */ 0,
};

extern const struct SampleInfo sfx_861SampleInfo;
const struct InstrumentPCM instrumentPCMData1560 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_861SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

const struct InstrumentPSG instrumentPSGData1561 = {
    /* Type      */ INSTRUMENT_PSG,
    /* Key       */ 0x3C,
    /* Panning   */ 127,
    /* PSG Wave  */ NULL,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7e0000,
    /* ADSR Atk  */ 0x7f0000,
    /* ADSR Dec  */ 0x7f0000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
    /* PSG Chnl  */ PSG_PULSE_CHANNEL_1,
    /* PSG Len   */ 0,
    /* PSG Sweep */ 0,
    /* PSG Tone  */ PSG_TONE_DUTY_50,
    /* PSG Noise */ 0,
};

extern const struct SampleInfo sfx_824SampleInfo;
const struct InstrumentPCM instrumentPCMData1562 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_824SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_862SampleInfo;
const struct InstrumentPCM instrumentPCMData1563 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_862SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_279SampleInfo;
const struct InstrumentPCM instrumentPCMData1564 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_279SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x04ec9b,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_863SampleInfo;
const struct InstrumentPCM instrumentPCMData1565 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_863SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_864SampleInfo;
const struct InstrumentPCM instrumentPCMData1566 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_864SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_834SampleInfo;
const struct InstrumentPCM instrumentPCMData1567 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_834SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x0f6a90,
};

extern const struct SampleInfo sfx_836SampleInfo;
const struct InstrumentPCM instrumentPCMData1568 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_836SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_829SampleInfo;
const struct InstrumentPCM instrumentPCMData1569 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_829SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_865SampleInfo;
const struct InstrumentPCM instrumentPCMData1570 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_865SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_792SampleInfo;
const struct InstrumentPCM instrumentPCMData1571 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_792SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_866SampleInfo;
const struct InstrumentPCM instrumentPCMData1572 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_866SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x18ea90,
};

extern const struct SampleInfo sfx_865SampleInfo;
const struct InstrumentPCM instrumentPCMData1573 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_865SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_867SampleInfo;
const struct InstrumentPCM instrumentPCMData1574 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_867SampleInfo,
    /* ADSR Init */ 0x000000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x1364d9,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_434SampleInfo;
const struct InstrumentPCM instrumentPCMData1575 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_434SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x16554d,
};

extern const struct SampleInfo sfx_346SampleInfo;
const struct InstrumentPCM instrumentPCMData1576 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_346SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x16554d,
};

const struct InstrumentSubbankSingleKey instrumentSubbankSingleKeyData1577 = {
    /* Type      */ INSTRUMENT_SUBBANK_SINGLE_KEY,
    /* Total     */ 36,
    /* Sub-Bank  */ (const union Instrument **) 0x08a9940c, // POINTER
};

const struct InstrumentPSG instrumentPSGData1578 = {
    /* Type      */ INSTRUMENT_PSG,
    /* Key       */ 0x3C,
    /* Panning   */ 127,
    /* PSG Wave  */ NULL,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7e0000,
    /* ADSR Atk  */ 0x7f0000,
    /* ADSR Dec  */ 0x7f0000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x7f0000,
    /* PSG Chnl  */ PSG_PULSE_CHANNEL_1,
    /* PSG Len   */ 0,
    /* PSG Sweep */ 0,
    /* PSG Tone  */ PSG_TONE_DUTY_50,
    /* PSG Noise */ 0,
};

const struct InstrumentSubbankSingleKey instrumentSubbankSingleKeyData1579 = {
    /* Type      */ INSTRUMENT_SUBBANK_SINGLE_KEY,
    /* Total     */ 36,
    /* Sub-Bank  */ (const union Instrument **) 0x08a9a240, // POINTER
};

extern const struct SampleInfo sfx_868SampleInfo;
const struct InstrumentPCM instrumentPCMData1580 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_868SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_869SampleInfo;
const struct InstrumentPCM instrumentPCMData1581 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_869SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_431SampleInfo;
const struct InstrumentPCM instrumentPCMData1582 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_431SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_030SampleInfo;
const struct InstrumentPCM instrumentPCMData1583 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_030SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_870SampleInfo;
const struct InstrumentPCM instrumentPCMData1584 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_870SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_792SampleInfo;
const struct InstrumentPCM instrumentPCMData1585 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_792SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_865SampleInfo;
const struct InstrumentPCM instrumentPCMData1586 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_865SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_871SampleInfo;
const struct InstrumentPCM instrumentPCMData1587 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_871SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_872SampleInfo;
const struct InstrumentPCM instrumentPCMData1588 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_872SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_873SampleInfo;
const struct InstrumentPCM instrumentPCMData1589 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_873SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_856SampleInfo;
const struct InstrumentPCM instrumentPCMData1590 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_856SampleInfo,
    /* ADSR Init */ 0x000000,
    /* ADSR Sus  */ 0x73745d,
    /* ADSR Atk  */ 0x5c1f07,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_874SampleInfo;
const struct InstrumentPCM instrumentPCMData1591 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_874SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

const struct InstrumentPSG instrumentPSGData1592 = {
    /* Type      */ INSTRUMENT_PSG,
    /* Key       */ 0x3C,
    /* Panning   */ 127,
    /* PSG Wave  */ NULL,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7e0000,
    /* ADSR Atk  */ 0x7f0000,
    /* ADSR Dec  */ 0x7f0000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
    /* PSG Chnl  */ PSG_PULSE_CHANNEL_1,
    /* PSG Len   */ 0,
    /* PSG Sweep */ 0,
    /* PSG Tone  */ PSG_TONE_DUTY_50,
    /* PSG Noise */ 0,
};

extern const struct SampleInfo sfx_875SampleInfo;
const struct InstrumentPCM instrumentPCMData1593 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_875SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_876SampleInfo;
const struct InstrumentPCM instrumentPCMData1594 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_876SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_877SampleInfo;
const struct InstrumentPCM instrumentPCMData1595 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_877SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_791SampleInfo;
const struct InstrumentPCM instrumentPCMData1596 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_791SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x18ea90,
};

extern const struct SampleInfo sfx_878SampleInfo;
const struct InstrumentPCM instrumentPCMData1597 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_878SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_879SampleInfo;
const struct InstrumentPCM instrumentPCMData1598 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_879SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_791SampleInfo;
const struct InstrumentPCM instrumentPCMData1599 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_791SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x18ea90,
};

const struct InstrumentSubbankSingleKey instrumentSubbankSingleKeyData1600 = {
    /* Type      */ INSTRUMENT_SUBBANK_SINGLE_KEY,
    /* Total     */ 36,
    /* Sub-Bank  */ (const union Instrument **) 0x08a9a2e8, // POINTER
};

extern const struct SampleInfo sfx_880SampleInfo;
const struct InstrumentPCM instrumentPCMData1601 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_880SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_881SampleInfo;
const struct InstrumentPCM instrumentPCMData1602 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_881SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_863SampleInfo;
const struct InstrumentPCM instrumentPCMData1603 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_863SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_030SampleInfo;
const struct InstrumentPCM instrumentPCMData1604 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_030SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_430SampleInfo;
const struct InstrumentPCM instrumentPCMData1605 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_430SampleInfo,
    /* ADSR Init */ 0x000000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x5745d1,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_842SampleInfo;
const struct InstrumentPCM instrumentPCMData1606 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_842SampleInfo,
    /* ADSR Init */ 0x000000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x3a2e8b,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_882SampleInfo;
const struct InstrumentPCM instrumentPCMData1607 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_882SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_883SampleInfo;
const struct InstrumentPCM instrumentPCMData1608 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_883SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_884SampleInfo;
const struct InstrumentPCM instrumentPCMData1609 = {
    /* Type      */ INSTRUMENT_PCM_UNPITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_884SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_214SampleInfo;
const struct InstrumentPCM instrumentPCMData1610 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_214SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_122SampleInfo;
const struct InstrumentPCM instrumentPCMData1611 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_122SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_885SampleInfo;
const struct InstrumentPCM instrumentPCMData1612 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_885SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_886SampleInfo;
const struct InstrumentPCM instrumentPCMData1613 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_886SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_823SampleInfo;
const struct InstrumentPCM instrumentPCMData1614 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_823SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x66a052,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_887SampleInfo;
const struct InstrumentPCM instrumentPCMData1615 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_887SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_885SampleInfo;
const struct InstrumentPCM instrumentPCMData1616 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_885SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_198SampleInfo;
const struct InstrumentPCM instrumentPCMData1617 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_198SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

const struct InstrumentSubbankSingleKey instrumentSubbankSingleKeyData1618 = {
    /* Type      */ INSTRUMENT_SUBBANK_SINGLE_KEY,
    /* Total     */ 36,
    /* Sub-Bank  */ (const union Instrument **) 0x08a996e4, // POINTER
};

extern const struct SampleInfo sfx_197SampleInfo;
const struct InstrumentPCM instrumentPCMData1619 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_197SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_030SampleInfo;
const struct InstrumentPCM instrumentPCMData1620 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_030SampleInfo,
    /* ADSR Init */ 0x000000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x5745d1,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_888SampleInfo;
const struct InstrumentPCM instrumentPCMData1621 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_888SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

const struct InstrumentPSG instrumentPSGData1622 = {
    /* Type      */ INSTRUMENT_PSG,
    /* Key       */ 0x3C,
    /* Panning   */ 127,
    /* PSG Wave  */ NULL,
    /* ADSR Init */ 0x73745d,
    /* ADSR Sus  */ 0x7e0000,
    /* ADSR Atk  */ 0x1fc000,
    /* ADSR Dec  */ 0x7f0000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x7f0000,
    /* PSG Chnl  */ PSG_PULSE_CHANNEL_1,
    /* PSG Len   */ 0,
    /* PSG Sweep */ 0,
    /* PSG Tone  */ PSG_TONE_DUTY_50,
    /* PSG Noise */ 0,
};

const struct InstrumentPSG instrumentPSGData1623 = {
    /* Type      */ INSTRUMENT_PSG,
    /* Key       */ 0x3C,
    /* Panning   */ 127,
    /* PSG Wave  */ NULL,
    /* ADSR Init */ 0x73745d,
    /* ADSR Sus  */ 0x7e0000,
    /* ADSR Atk  */ 0x1fc000,
    /* ADSR Dec  */ 0x7f0000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x7f0000,
    /* PSG Chnl  */ PSG_PULSE_CHANNEL_2,
    /* PSG Len   */ 0,
    /* PSG Sweep */ 0,
    /* PSG Tone  */ PSG_TONE_DUTY_50,
    /* PSG Noise */ 0,
};

extern const struct SampleInfo sfx_086SampleInfo;
const struct InstrumentPCM instrumentPCMData1624 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_086SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_796SampleInfo;
const struct InstrumentPCM instrumentPCMData1625 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x46,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_796SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_889SampleInfo;
const struct InstrumentPCM instrumentPCMData1626 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_889SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x16554d,
};

extern const struct SampleInfo sfx_433SampleInfo;
const struct InstrumentPCM instrumentPCMData1627 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_433SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_819SampleInfo;
const struct InstrumentPCM instrumentPCMData1628 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_819SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_890SampleInfo;
const struct InstrumentPCM instrumentPCMData1629 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_890SampleInfo,
    /* ADSR Init */ 0x000000,
    /* ADSR Sus  */ 0x73745d,
    /* ADSR Atk  */ 0x43e0f8,
    /* ADSR Dec  */ 0x1f2fd6,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x18ea90,
};

extern const struct SampleInfo sfx_834SampleInfo;
const struct InstrumentPCM instrumentPCMData1630 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_834SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x0f6a90,
};

extern const struct SampleInfo sfx_891SampleInfo;
const struct InstrumentPCM instrumentPCMData1631 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_891SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_859SampleInfo;
const struct InstrumentPCM instrumentPCMData1632 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_859SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_892SampleInfo;
const struct InstrumentPCM instrumentPCMData1633 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_892SampleInfo,
    /* ADSR Init */ 0x000000,
    /* ADSR Sus  */ 0x402433,
    /* ADSR Atk  */ 0x3a2e8b,
    /* ADSR Dec  */ 0x1d8ba2,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x082378,
};

extern const struct SampleInfo sfx_874SampleInfo;
const struct InstrumentPCM instrumentPCMData1634 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_874SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

const struct InstrumentPSG instrumentPSGData1635 = {
    /* Type      */ INSTRUMENT_PSG,
    /* Key       */ 0x3C,
    /* Panning   */ 127,
    /* PSG Wave  */ NULL,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7e0000,
    /* ADSR Atk  */ 0x7f0000,
    /* ADSR Dec  */ 0x7f0000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x077878,
    /* PSG Chnl  */ PSG_PULSE_CHANNEL_1,
    /* PSG Len   */ 0,
    /* PSG Sweep */ 0,
    /* PSG Tone  */ PSG_TONE_DUTY_50,
    /* PSG Noise */ 0,
};

const struct InstrumentPSG instrumentPSGData1636 = {
    /* Type      */ INSTRUMENT_PSG,
    /* Key       */ 0x3C,
    /* Panning   */ 127,
    /* PSG Wave  */ NULL,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7e0000,
    /* ADSR Atk  */ 0x7f0000,
    /* ADSR Dec  */ 0x7f0000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x077878,
    /* PSG Chnl  */ PSG_PULSE_CHANNEL_2,
    /* PSG Len   */ 0,
    /* PSG Sweep */ 0,
    /* PSG Tone  */ PSG_TONE_DUTY_50,
    /* PSG Noise */ 0,
};

const struct InstrumentPSG instrumentPSGData1637 = {
    /* Type      */ INSTRUMENT_PSG,
    /* Key       */ 0x3C,
    /* Panning   */ 127,
    /* PSG Wave  */ NULL,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7e0000,
    /* ADSR Atk  */ 0x7f0000,
    /* ADSR Dec  */ 0x7f0000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x7f0000,
    /* PSG Chnl  */ PSG_PULSE_CHANNEL_1,
    /* PSG Len   */ 0,
    /* PSG Sweep */ 36,
    /* PSG Tone  */ PSG_TONE_DUTY_50,
    /* PSG Noise */ 0,
};

extern const struct SampleInfo sfx_892SampleInfo;
const struct InstrumentPCM instrumentPCMData1638 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_892SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x66a052,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x1d8ba2,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x06aa9f,
};

extern const struct SampleInfo sfx_893SampleInfo;
const struct InstrumentPCM instrumentPCMData1639 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_893SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_864SampleInfo;
const struct InstrumentPCM instrumentPCMData1640 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_864SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_790SampleInfo;
const struct InstrumentPCM instrumentPCMData1641 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_790SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x19a814,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x106a05,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleInfo sfx_894SampleInfo;
const struct InstrumentPCM instrumentPCMData1642 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_894SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_895SampleInfo;
const struct InstrumentPCM instrumentPCMData1643 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_895SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

const struct InstrumentPSG instrumentPSGData1644 = {
    /* Type      */ INSTRUMENT_PSG,
    /* Key       */ 0x3C,
    /* Panning   */ 127,
    /* PSG Wave  */ NULL,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7e0000,
    /* ADSR Atk  */ 0x7f0000,
    /* ADSR Dec  */ 0x7f0000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x7f0000,
    /* PSG Chnl  */ PSG_PULSE_CHANNEL_1,
    /* PSG Len   */ 0,
    /* PSG Sweep */ 0,
    /* PSG Tone  */ PSG_TONE_DUTY_50,
    /* PSG Noise */ 0,
};

extern const struct SampleInfo sfx_896SampleInfo;
const struct InstrumentPCM instrumentPCMData1645 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_896SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_897SampleInfo;
const struct InstrumentPCM instrumentPCMData1646 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_897SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_898SampleInfo;
const struct InstrumentPCM instrumentPCMData1647 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_898SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_899SampleInfo;
const struct InstrumentPCM instrumentPCMData1648 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_899SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_900SampleInfo;
const struct InstrumentPCM instrumentPCMData1649 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_900SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

const struct InstrumentPSG instrumentPSGData1650 = {
    /* Type      */ INSTRUMENT_PSG,
    /* Key       */ 0x3C,
    /* Panning   */ 127,
    /* PSG Wave  */ NULL,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7e0000,
    /* ADSR Atk  */ 0x7f0000,
    /* ADSR Dec  */ 0x7f0000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x7f0000,
    /* PSG Chnl  */ PSG_PULSE_CHANNEL_1,
    /* PSG Len   */ 0,
    /* PSG Sweep */ 0,
    /* PSG Tone  */ PSG_TONE_DUTY_50,
    /* PSG Noise */ 0,
};

const struct InstrumentPSG instrumentPSGData1651 = {
    /* Type      */ INSTRUMENT_PSG,
    /* Key       */ 0x3C,
    /* Panning   */ 127,
    /* PSG Wave  */ NULL,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7e0000,
    /* ADSR Atk  */ 0x7f0000,
    /* ADSR Dec  */ 0x7f0000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x7f0000,
    /* PSG Chnl  */ PSG_PULSE_CHANNEL_2,
    /* PSG Len   */ 0,
    /* PSG Sweep */ 0,
    /* PSG Tone  */ PSG_TONE_DUTY_50,
    /* PSG Noise */ 0,
};

const struct InstrumentPSG instrumentPSGData1652 = {
    /* Type      */ INSTRUMENT_PSG,
    /* Key       */ 0x3C,
    /* Panning   */ 127,
    /* PSG Wave  */ NULL,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7e0000,
    /* ADSR Atk  */ 0x7f0000,
    /* ADSR Dec  */ 0x7f0000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x7f0000,
    /* PSG Chnl  */ PSG_PULSE_CHANNEL_1,
    /* PSG Len   */ 0,
    /* PSG Sweep */ 52,
    /* PSG Tone  */ PSG_TONE_DUTY_50,
    /* PSG Noise */ 0,
};

const struct InstrumentPSG instrumentPSGData1653 = {
    /* Type      */ INSTRUMENT_PSG,
    /* Key       */ 0x3C,
    /* Panning   */ 127,
    /* PSG Wave  */ NULL,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7e0000,
    /* ADSR Atk  */ 0x7f0000,
    /* ADSR Dec  */ 0x7f0000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x7f0000,
    /* PSG Chnl  */ PSG_PULSE_CHANNEL_1,
    /* PSG Len   */ 0,
    /* PSG Sweep */ 22,
    /* PSG Tone  */ PSG_TONE_DUTY_50,
    /* PSG Noise */ 0,
};

const struct InstrumentPSG instrumentPSGData1654 = {
    /* Type      */ INSTRUMENT_PSG,
    /* Key       */ 0x3C,
    /* Panning   */ 127,
    /* PSG Wave  */ NULL,
    /* ADSR Init */ 0x66a052,
    /* ADSR Sus  */ 0x7e0000,
    /* ADSR Atk  */ 0x122492,
    /* ADSR Dec  */ 0x7f0000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x3f8000,
    /* PSG Chnl  */ PSG_PULSE_CHANNEL_1,
    /* PSG Len   */ 0,
    /* PSG Sweep */ 30,
    /* PSG Tone  */ PSG_TONE_DUTY_50,
    /* PSG Noise */ 0,
};

extern const struct SampleInfo sfx_439SampleInfo;
const struct InstrumentPCM instrumentPCMData1655 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_439SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_901SampleInfo;
const struct InstrumentPCM instrumentPCMData1656 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_901SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x11952a,
};

extern const struct SampleInfo sfx_901SampleInfo;
const struct InstrumentPCM instrumentPCMData1657 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_901SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x082378,
};

extern const struct SampleInfo sfx_902SampleInfo;
const struct InstrumentPCM instrumentPCMData1658 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_902SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x0f6a90,
};

const struct InstrumentSubbankSingleKey instrumentSubbankSingleKeyData1659 = {
    /* Type      */ INSTRUMENT_SUBBANK_SINGLE_KEY,
    /* Total     */ 24,
    /* Sub-Bank  */ (const union Instrument **) 0x08a9a240, // POINTER
};

extern const struct SampleInfo sfx_903SampleInfo;
const struct InstrumentPCM instrumentPCMData1660 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_903SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x402433,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x00540a,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x082378,
};

extern const struct SampleInfo sfx_904SampleInfo;
const struct InstrumentPCM instrumentPCMData1661 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_904SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_905SampleInfo;
const struct InstrumentPCM instrumentPCMData1662 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_905SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_906SampleInfo;
const struct InstrumentPCM instrumentPCMData1663 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_906SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_907SampleInfo;
const struct InstrumentPCM instrumentPCMData1664 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_907SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_908SampleInfo;
const struct InstrumentPCM instrumentPCMData1665 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_908SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x01638c,
};

extern const struct SampleInfo sfx_909SampleInfo;
const struct InstrumentPCM instrumentPCMData1666 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_909SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_910SampleInfo;
const struct InstrumentPCM instrumentPCMData1667 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_910SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_911SampleInfo;
const struct InstrumentPCM instrumentPCMData1668 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_911SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_912SampleInfo;
const struct InstrumentPCM instrumentPCMData1669 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_912SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_913SampleInfo;
const struct InstrumentPCM instrumentPCMData1670 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_913SampleInfo,
    /* ADSR Init */ 0x000000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x1364d9,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x01638c,
};

extern const struct SampleInfo sfx_914SampleInfo;
const struct InstrumentPCM instrumentPCMData1671 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_914SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_915SampleInfo;
const struct InstrumentPCM instrumentPCMData1672 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_915SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_916SampleInfo;
const struct InstrumentPCM instrumentPCMData1673 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_916SampleInfo,
    /* ADSR Init */ 0x000000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x1364d9,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x00c000,
};

extern const struct SampleInfo sfx_917SampleInfo;
const struct InstrumentPCM instrumentPCMData1674 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_917SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_918SampleInfo;
const struct InstrumentPCM instrumentPCMData1675 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_918SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_919SampleInfo;
const struct InstrumentPCM instrumentPCMData1676 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_919SampleInfo,
    /* ADSR Init */ 0x000000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x1364d9,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x01638c,
};

extern const struct SampleInfo sfx_919SampleInfo;
const struct InstrumentPCM instrumentPCMData1677 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_919SampleInfo,
    /* ADSR Init */ 0x000000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x4d9364,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_920SampleInfo;
const struct InstrumentPCM instrumentPCMData1678 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_920SampleInfo,
    /* ADSR Init */ 0x000000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x1364d9,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x031548,
};

extern const struct SampleInfo sfx_921SampleInfo;
const struct InstrumentPCM instrumentPCMData1679 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_921SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_922SampleInfo;
const struct InstrumentPCM instrumentPCMData1680 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_922SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_923SampleInfo;
const struct InstrumentPCM instrumentPCMData1681 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_923SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_859SampleInfo;
const struct InstrumentPCM instrumentPCMData1682 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_859SampleInfo,
    /* ADSR Init */ 0x000000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x4d9364,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_924SampleInfo;
const struct InstrumentPCM instrumentPCMData1683 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_924SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_925SampleInfo;
const struct InstrumentPCM instrumentPCMData1684 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_925SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_926SampleInfo;
const struct InstrumentPCM instrumentPCMData1685 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_926SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_927SampleInfo;
const struct InstrumentPCM instrumentPCMData1686 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_927SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_928SampleInfo;
const struct InstrumentPCM instrumentPCMData1687 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_928SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_929SampleInfo;
const struct InstrumentPCM instrumentPCMData1688 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x38,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_929SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_930SampleInfo;
const struct InstrumentPCM instrumentPCMData1689 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_930SampleInfo,
    /* ADSR Init */ 0x000000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x1364d9,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x082378,
};

extern const struct SampleInfo sfx_931SampleInfo;
const struct InstrumentPCM instrumentPCMData1690 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_931SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x18ea90,
};

extern const struct SampleInfo sfx_844SampleInfo;
const struct InstrumentPCM instrumentPCMData1691 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_844SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_868SampleInfo;
const struct InstrumentPCM instrumentPCMData1692 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_868SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_869SampleInfo;
const struct InstrumentPCM instrumentPCMData1693 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_869SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_431SampleInfo;
const struct InstrumentPCM instrumentPCMData1694 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_431SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_880SampleInfo;
const struct InstrumentPCM instrumentPCMData1695 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_880SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_883SampleInfo;
const struct InstrumentPCM instrumentPCMData1696 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_883SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_884SampleInfo;
const struct InstrumentPCM instrumentPCMData1697 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_884SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_887SampleInfo;
const struct InstrumentPCM instrumentPCMData1698 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_887SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_825SampleInfo;
const struct InstrumentPCM instrumentPCMData1699 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_825SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_827SampleInfo;
const struct InstrumentPCM instrumentPCMData1700 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_827SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_811SampleInfo;
const struct InstrumentPCM instrumentPCMData1701 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_811SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x19a814,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x04ec9b,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x082378,
};

extern const struct SampleInfo sfx_812SampleInfo;
const struct InstrumentPCM instrumentPCMData1702 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_812SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x133e0f,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x0690ce,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x082378,
};

extern const struct SampleInfo sfx_813SampleInfo;
const struct InstrumentPCM instrumentPCMData1703 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_813SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x19a814,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x04ec9b,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x082378,
};

extern const struct SampleInfo sfx_834SampleInfo;
const struct InstrumentPCM instrumentPCMData1704 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_834SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x0f6a90,
};

extern const struct SampleInfo sfx_461SampleInfo;
const struct InstrumentPCM instrumentPCMData1705 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_461SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_463SampleInfo;
const struct InstrumentPCM instrumentPCMData1706 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_463SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_087SampleInfo;
const struct InstrumentPCM instrumentPCMData1707 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_087SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x0b8000,
};

extern const struct SampleInfo sfx_468SampleInfo;
const struct InstrumentPCM instrumentPCMData1708 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_468SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleInfo sfx_898SampleInfo;
const struct InstrumentPCM instrumentPCMData1709 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_898SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_899SampleInfo;
const struct InstrumentPCM instrumentPCMData1710 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_899SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_932SampleInfo;
const struct InstrumentPCM instrumentPCMData1711 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_932SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_933SampleInfo;
const struct InstrumentPCM instrumentPCMData1712 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_933SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_934SampleInfo;
const struct InstrumentPCM instrumentPCMData1713 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_934SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_935SampleInfo;
const struct InstrumentPCM instrumentPCMData1714 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_935SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_936SampleInfo;
const struct InstrumentPCM instrumentPCMData1715 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_936SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_937SampleInfo;
const struct InstrumentPCM instrumentPCMData1716 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_937SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_938SampleInfo;
const struct InstrumentPCM instrumentPCMData1717 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_938SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_939SampleInfo;
const struct InstrumentPCM instrumentPCMData1718 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_939SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_940SampleInfo;
const struct InstrumentPCM instrumentPCMData1719 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_940SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_941SampleInfo;
const struct InstrumentPCM instrumentPCMData1720 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_941SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_942SampleInfo;
const struct InstrumentPCM instrumentPCMData1721 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_942SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_943SampleInfo;
const struct InstrumentPCM instrumentPCMData1722 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_943SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_944SampleInfo;
const struct InstrumentPCM instrumentPCMData1723 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_944SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_945SampleInfo;
const struct InstrumentPCM instrumentPCMData1724 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_945SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_946SampleInfo;
const struct InstrumentPCM instrumentPCMData1725 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_946SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_947SampleInfo;
const struct InstrumentPCM instrumentPCMData1726 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_947SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_948SampleInfo;
const struct InstrumentPCM instrumentPCMData1727 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_948SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_949SampleInfo;
const struct InstrumentPCM instrumentPCMData1728 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_949SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_950SampleInfo;
const struct InstrumentPCM instrumentPCMData1729 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_950SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_951SampleInfo;
const struct InstrumentPCM instrumentPCMData1730 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_951SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_952SampleInfo;
const struct InstrumentPCM instrumentPCMData1731 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_952SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_953SampleInfo;
const struct InstrumentPCM instrumentPCMData1732 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_953SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_954SampleInfo;
const struct InstrumentPCM instrumentPCMData1733 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_954SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_955SampleInfo;
const struct InstrumentPCM instrumentPCMData1734 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_955SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_956SampleInfo;
const struct InstrumentPCM instrumentPCMData1735 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_956SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_957SampleInfo;
const struct InstrumentPCM instrumentPCMData1736 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_957SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_958SampleInfo;
const struct InstrumentPCM instrumentPCMData1737 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_958SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_959SampleInfo;
const struct InstrumentPCM instrumentPCMData1738 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_959SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_960SampleInfo;
const struct InstrumentPCM instrumentPCMData1739 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_960SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_961SampleInfo;
const struct InstrumentPCM instrumentPCMData1740 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_961SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleInfo sfx_962SampleInfo;
const struct InstrumentPCM instrumentPCMData1741 = {
    /* Type      */ INSTRUMENT_PCM_PITCHED,
    /* Key       */ 0x3C,
    /* unkEffect */ 0,
    /* Panning   */ 127,
    /* Sample    */ &sfx_962SampleInfo,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};
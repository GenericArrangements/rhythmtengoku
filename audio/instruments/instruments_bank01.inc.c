extern const struct WaveData sfx_001;
const struct InstrumentPCM InstPCM001 = {
    /* Type      */ INSTRUMENT_PCM_ALIGNED,
    /* Key       */ 0x3C,
    /* unkEffect */ FALSE,
    /* Panning   */ 127,
    /* Sample    */ &sfx_001,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x59cc48,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x106a05,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct WaveData sfx_002;
const struct InstrumentPCM InstPCM002 = {
    /* Type      */ INSTRUMENT_PCM_ALIGNED,
    /* Key       */ 0x3C,
    /* unkEffect */ FALSE,
    /* Panning   */ 127,
    /* Sample    */ &sfx_002,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x00fc1f,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x082378,
};

extern const struct WaveData sfx_002;
const struct InstrumentPCM InstPCM003 = {
    /* Type      */ INSTRUMENT_PCM_ALIGNED,
    /* Key       */ 0x3C,
    /* unkEffect */ FALSE,
    /* Panning   */ 127,
    /* Sample    */ &sfx_002,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x402433,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x00540a,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x055552,
};

extern const struct WaveData sfx_003;
const struct InstrumentPCM InstPCM004 = {
    /* Type      */ INSTRUMENT_PCM_ALIGNED,
    /* Key       */ 0x3C,
    /* unkEffect */ FALSE,
    /* Panning   */ 127,
    /* Sample    */ &sfx_003,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct WaveData sfx_004;
const struct InstrumentPCM InstPCM005 = {
    /* Type      */ INSTRUMENT_PCM_ALIGNED,
    /* Key       */ 0x3C,
    /* unkEffect */ FALSE,
    /* Panning   */ 127,
    /* Sample    */ &sfx_004,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct WaveData sfx_005;
const struct InstrumentPCM InstPCM006 = {
    /* Type      */ INSTRUMENT_PCM_ALIGNED,
    /* Key       */ 0x3C,
    /* unkEffect */ FALSE,
    /* Panning   */ 127,
    /* Sample    */ &sfx_005,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct WaveData sfx_006;
const struct InstrumentPCM InstPCM007 = {
    /* Type      */ INSTRUMENT_PCM_ALIGNED,
    /* Key       */ 0x3C,
    /* unkEffect */ FALSE,
    /* Panning   */ 127,
    /* Sample    */ &sfx_006,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x218000,
};

extern const struct WaveData sfx_007;
const struct InstrumentPCM InstPCM008 = {
    /* Type      */ INSTRUMENT_PCM_ALIGNED,
    /* Key       */ 0x3C,
    /* unkEffect */ FALSE,
    /* Panning   */ 127,
    /* Sample    */ &sfx_007,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct WaveData sfx_008;
const struct InstrumentPCM InstPCM009 = {
    /* Type      */ INSTRUMENT_PCM_ALIGNED,
    /* Key       */ 0x3C,
    /* unkEffect */ FALSE,
    /* Panning   */ 127,
    /* Sample    */ &sfx_008,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct WaveData sfx_009;
const struct InstrumentPCM InstPCM010 = {
    /* Type      */ INSTRUMENT_PCM_ALIGNED,
    /* Key       */ 0x3C,
    /* unkEffect */ FALSE,
    /* Panning   */ 127,
    /* Sample    */ &sfx_009,
    /* ADSR Init */ 0x000000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x4d9364,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x055552,
};

extern const u8 KeySplitTable9;
extern const InstrumentBank InstBank42;
const struct InstrumentSubSplit InstSubSpl011 = {
    /* Type      */ INSTRUMENT_SUB_SPLIT,
    /* Total     */ 12,
    /* Key Split */ &KeySplitTable9,
    /* Sub-Bank  */ &InstBank42
};

extern const struct WaveData sfx_010;
const struct InstrumentPCM InstPCM012 = {
    /* Type      */ INSTRUMENT_PCM_ALIGNED,
    /* Key       */ 0x3C,
    /* unkEffect */ FALSE,
    /* Panning   */ 127,
    /* Sample    */ &sfx_010,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x66a052,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x106a05,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x18ea90,
};

extern const struct WaveData sfx_011;
const struct InstrumentPCM InstPCM013 = {
    /* Type      */ INSTRUMENT_PCM_ALIGNED,
    /* Key       */ 0x3C,
    /* unkEffect */ FALSE,
    /* Panning   */ 127,
    /* Sample    */ &sfx_011,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x267c1f,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x09d936,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x0f6a90,
};

extern const InstrumentBank InstBank50;
const struct InstrumentSubRhythm InstSubRhy014 = {
    /* Type      */ INSTRUMENT_SUB_RHYTHM,
    /* Total     */ 36,
    /* Sub-Bank  */ &InstBank50
};

extern const InstrumentBank InstBank48;
const struct InstrumentSubRhythm InstSubRhy015 = {
    /* Type      */ INSTRUMENT_SUB_RHYTHM,
    /* Total     */ 36,
    /* Sub-Bank  */ &InstBank48
};

extern const InstrumentBank InstBank47;
const struct InstrumentSubRhythm InstSubRhy016 = {
    /* Type      */ INSTRUMENT_SUB_RHYTHM,
    /* Total     */ 36,
    /* Sub-Bank  */ &InstBank47
};

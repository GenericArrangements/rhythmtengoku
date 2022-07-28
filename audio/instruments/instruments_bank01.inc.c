extern const struct SampleData sfx_001;
const struct InstrumentPCM instrument_pcm_0001 = {
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

extern const struct SampleData sfx_002;
const struct InstrumentPCM instrument_pcm_0002 = {
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

extern const struct SampleData sfx_002;
const struct InstrumentPCM instrument_pcm_0003 = {
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

extern const struct SampleData sfx_003;
const struct InstrumentPCM instrument_pcm_0004 = {
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

extern const struct SampleData sfx_004;
const struct InstrumentPCM instrument_pcm_0005 = {
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

extern const struct SampleData sfx_005;
const struct InstrumentPCM instrument_pcm_0006 = {
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

extern const struct SampleData sfx_006;
const struct InstrumentPCM instrument_pcm_0007 = {
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

extern const struct SampleData sfx_007;
const struct InstrumentPCM instrument_pcm_0008 = {
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

extern const struct SampleData sfx_008;
const struct InstrumentPCM instrument_pcm_0009 = {
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

extern const struct SampleData sfx_009;
const struct InstrumentPCM instrument_pcm_0010 = {
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

extern const union Instrument inst_bank_42[];
const struct InstrumentSubSplit instrument_spl_0011 = {
    /* Type      */ INSTRUMENT_SUB_SPLIT,
    /* Total     */ 12,
    /* Key Split */ keysplit_table_9,
    /* Sub-Bank  */ inst_bank_42
};

extern const struct SampleData sfx_010;
const struct InstrumentPCM instrument_pcm_0012 = {
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

extern const struct SampleData sfx_011;
const struct InstrumentPCM instrument_pcm_0013 = {
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

extern const union Instrument inst_bank_50[];
const struct InstrumentSubRhythm instrument_rhy_0014 = {
    /* Type      */ INSTRUMENT_SUB_RHYTHM,
    /* Total     */ 36,
    /* Sub-Bank  */ inst_bank_50
};

extern const union Instrument inst_bank_48[];
const struct InstrumentSubRhythm instrument_rhy_0015 = {
    /* Type      */ INSTRUMENT_SUB_RHYTHM,
    /* Total     */ 36,
    /* Sub-Bank  */ inst_bank_48
};

extern const union Instrument inst_bank_47[];
const struct InstrumentSubRhythm instrument_rhy_0016 = {
    /* Type      */ INSTRUMENT_SUB_RHYTHM,
    /* Total     */ 36,
    /* Sub-Bank  */ inst_bank_47
};

extern const struct SampleData sfx_263;
const struct InstrumentPCM instrument_pcm_0792 = {
    /* Type      */ INSTRUMENT_PCM_FIXED,
    /* Key       */ 0x3C,
    /* unkEffect */ FALSE,
    /* Panning   */ 127,
    /* Sample    */ &sfx_263,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleData sfx_229;
const struct InstrumentPCM instrument_pcm_0793 = {
    /* Type      */ INSTRUMENT_PCM_ALIGNED,
    /* Key       */ 0x3C,
    /* unkEffect */ FALSE,
    /* Panning   */ 127,
    /* Sample    */ &sfx_229,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1ba35f,
};

extern const struct SampleData sfx_194;
const struct InstrumentPCM instrument_pcm_0794 = {
    /* Type      */ INSTRUMENT_PCM_ALIGNED,
    /* Key       */ 0x3C,
    /* unkEffect */ FALSE,
    /* Panning   */ 127,
    /* Sample    */ &sfx_194,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x015029,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleData sfx_399;
const struct InstrumentPCM instrument_pcm_0795 = {
    /* Type      */ INSTRUMENT_PCM_ALIGNED,
    /* Key       */ 0x3C,
    /* unkEffect */ FALSE,
    /* Panning   */ 127,
    /* Sample    */ &sfx_399,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x024c48,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleData sfx_402;
const struct InstrumentPCM instrument_pcm_0796 = {
    /* Type      */ INSTRUMENT_PCM_ALIGNED,
    /* Key       */ 0x3C,
    /* unkEffect */ FALSE,
    /* Panning   */ 127,
    /* Sample    */ &sfx_402,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x235dd1,
};

extern const struct SampleData sfx_403;
const struct InstrumentPCM instrument_pcm_0797 = {
    /* Type      */ INSTRUMENT_PCM_ALIGNED,
    /* Key       */ 0x3C,
    /* unkEffect */ FALSE,
    /* Panning   */ 127,
    /* Sample    */ &sfx_403,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x235dd1,
};

extern const struct SampleData sfx_404;
const struct InstrumentPCM instrument_pcm_0798 = {
    /* Type      */ INSTRUMENT_PCM_ALIGNED,
    /* Key       */ 0x3C,
    /* unkEffect */ FALSE,
    /* Panning   */ 127,
    /* Sample    */ &sfx_404,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x235dd1,
};

extern const union Instrument inst_bank_40[];
const struct InstrumentSubSplit instrument_spl_0799 = {
    /* Type      */ INSTRUMENT_SUB_SPLIT,
    /* Total     */ 36,
    /* Key Split */ keysplit_table_8,
    /* Sub-Bank  */ inst_bank_40
};

extern const union Instrument inst_bank_48[];
const struct InstrumentSubRhythm instrument_rhy_0800 = {
    /* Type      */ INSTRUMENT_SUB_RHYTHM,
    /* Total     */ 36,
    /* Sub-Bank  */ inst_bank_48
};

extern const union Instrument inst_bank_47[];
const struct InstrumentSubRhythm instrument_rhy_0801 = {
    /* Type      */ INSTRUMENT_SUB_RHYTHM,
    /* Total     */ 36,
    /* Sub-Bank  */ inst_bank_47
};

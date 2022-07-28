extern const struct SampleData sfx_371;
const struct InstrumentPCM instrument_pcm_0679 = {
    /* Type      */ INSTRUMENT_PCM_ALIGNED,
    /* Key       */ 0x3C,
    /* unkEffect */ FALSE,
    /* Panning   */ 127,
    /* Sample    */ &sfx_371,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x01a433,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x0f6a90,
};

extern const struct SampleData sfx_229;
const struct InstrumentPCM instrument_pcm_0680 = {
    /* Type      */ INSTRUMENT_PCM_ALIGNED,
    /* Key       */ 0x3C,
    /* unkEffect */ FALSE,
    /* Panning   */ 127,
    /* Sample    */ &sfx_229,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x00fc1f,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleData sfx_372;
const struct InstrumentPCM instrument_pcm_0681 = {
    /* Type      */ INSTRUMENT_PCM_ALIGNED,
    /* Key       */ 0x3C,
    /* unkEffect */ FALSE,
    /* Panning   */ 127,
    /* Sample    */ &sfx_372,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x055552,
};

extern const struct SampleData sfx_262;
const struct InstrumentPCM instrument_pcm_0682 = {
    /* Type      */ INSTRUMENT_PCM_ALIGNED,
    /* Key       */ 0x3C,
    /* unkEffect */ FALSE,
    /* Panning   */ 127,
    /* Sample    */ &sfx_262,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x335029,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x00fc1f,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleData sfx_015;
const struct InstrumentPCM instrument_pcm_0683 = {
    /* Type      */ INSTRUMENT_PCM_ALIGNED,
    /* Key       */ 0x3C,
    /* unkEffect */ FALSE,
    /* Panning   */ 127,
    /* Sample    */ &sfx_015,
    /* ADSR Init */ 0x000000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x307c1f,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleData sfx_018;
const struct InstrumentPCM instrument_pcm_0684 = {
    /* Type      */ INSTRUMENT_PCM_ALIGNED,
    /* Key       */ 0x3C,
    /* unkEffect */ FALSE,
    /* Panning   */ 127,
    /* Sample    */ &sfx_018,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x00a814,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const union Instrument inst_bank_48[];
const struct InstrumentSubRhythm instrument_rhy_0685 = {
    /* Type      */ INSTRUMENT_SUB_RHYTHM,
    /* Total     */ 36,
    /* Sub-Bank  */ inst_bank_48
};

extern const union Instrument inst_bank_47[];
const struct InstrumentSubRhythm instrument_rhy_0686 = {
    /* Type      */ INSTRUMENT_SUB_RHYTHM,
    /* Total     */ 36,
    /* Sub-Bank  */ inst_bank_47
};

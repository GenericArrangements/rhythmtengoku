extern const struct SampleData sfx_296;
const struct InstrumentPCM instrument_pcm_0506 = {
    /* Type      */ INSTRUMENT_PCM_ALIGNED,
    /* Key       */ 0x3C,
    /* unkEffect */ FALSE,
    /* Panning   */ 127,
    /* Sample    */ &sfx_296,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x015029,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x18ea90,
};

extern const struct SampleData sfx_297;
const struct InstrumentPCM instrument_pcm_0507 = {
    /* Type      */ INSTRUMENT_PCM_ALIGNED,
    /* Key       */ 0x3C,
    /* unkEffect */ FALSE,
    /* Panning   */ 127,
    /* Sample    */ &sfx_297,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x19a814,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x00a814,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleData sfx_298;
const struct InstrumentPCM instrument_pcm_0508 = {
    /* Type      */ INSTRUMENT_PCM_ALIGNED,
    /* Key       */ 0x3C,
    /* unkEffect */ FALSE,
    /* Panning   */ 127,
    /* Sample    */ &sfx_298,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x00fc1f,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x082378,
};

extern const struct SampleData sfx_299;
const struct InstrumentPCM instrument_pcm_0509 = {
    /* Type      */ INSTRUMENT_PCM_ALIGNED,
    /* Key       */ 0x3C,
    /* unkEffect */ FALSE,
    /* Panning   */ 127,
    /* Sample    */ &sfx_299,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x1a433b,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleData sfx_204;
const struct InstrumentPCM instrument_pcm_0510 = {
    /* Type      */ INSTRUMENT_PCM_ALIGNED,
    /* Key       */ 0x3C,
    /* unkEffect */ FALSE,
    /* Panning   */ 127,
    /* Sample    */ &sfx_204,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x034867,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleData sfx_230;
const struct InstrumentPCM instrument_pcm_0511 = {
    /* Type      */ INSTRUMENT_PCM_ALIGNED,
    /* Key       */ 0x3C,
    /* unkEffect */ FALSE,
    /* Panning   */ 127,
    /* Sample    */ &sfx_230,
    /* ADSR Init */ 0x000000,
    /* ADSR Sus  */ 0x19a814,
    /* ADSR Atk  */ 0x43e0f8,
    /* ADSR Dec  */ 0x00fc1f,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x18ea90,
};

extern const union Instrument inst_bank_47[];
const struct InstrumentSubRhythm instrument_rhy_0512 = {
    /* Type      */ INSTRUMENT_SUB_RHYTHM,
    /* Total     */ 36,
    /* Sub-Bank  */ inst_bank_47
};

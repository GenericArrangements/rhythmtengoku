extern const struct SampleData sfx_400;
const struct InstrumentPCM InstPCM783 = {
    /* Type      */ INSTRUMENT_PCM_ALIGNED,
    /* Key       */ 0x3C,
    /* unkEffect */ FALSE,
    /* Panning   */ 127,
    /* Sample    */ &sfx_400,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x015029,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleData sfx_398;
const struct InstrumentPCM InstPCM784 = {
    /* Type      */ INSTRUMENT_PCM_FIXED,
    /* Key       */ 0x3C,
    /* unkEffect */ FALSE,
    /* Panning   */ 127,
    /* Sample    */ &sfx_398,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x000000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x015029,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x0f6a90,
};

extern const struct SampleData sfx_235;
const struct InstrumentPCM InstPCM785 = {
    /* Type      */ INSTRUMENT_PCM_ALIGNED,
    /* Key       */ 0x3C,
    /* unkEffect */ FALSE,
    /* Panning   */ 127,
    /* Sample    */ &sfx_235,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleData sfx_401;
const struct InstrumentPCM InstPCM786 = {
    /* Type      */ INSTRUMENT_PCM_ALIGNED,
    /* Key       */ 0x3C,
    /* unkEffect */ FALSE,
    /* Panning   */ 127,
    /* Sample    */ &sfx_401,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleData sfx_260;
const struct InstrumentPCM InstPCM787 = {
    /* Type      */ INSTRUMENT_PCM_ALIGNED,
    /* Key       */ 0x3C,
    /* unkEffect */ FALSE,
    /* Panning   */ 127,
    /* Sample    */ &sfx_260,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleData sfx_399;
const struct InstrumentPCM InstPCM788 = {
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

extern const InstrumentBank InstBank48;
const struct InstrumentSubRhythm InstSubRhy789 = {
    /* Type      */ INSTRUMENT_SUB_RHYTHM,
    /* Total     */ 36,
    /* Sub-Bank  */ &InstBank48
};

extern const InstrumentBank InstBank51;
const struct InstrumentSubRhythm InstSubRhy790 = {
    /* Type      */ INSTRUMENT_SUB_RHYTHM,
    /* Total     */ 36,
    /* Sub-Bank  */ &InstBank51
};

extern const InstrumentBank InstBank47;
const struct InstrumentSubRhythm InstSubRhy791 = {
    /* Type      */ INSTRUMENT_SUB_RHYTHM,
    /* Total     */ 36,
    /* Sub-Bank  */ &InstBank47
};

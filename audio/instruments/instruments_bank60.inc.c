extern const struct SampleData sfx_885;
const struct InstrumentPCM InstPCM1612 = {
    /* Type      */ INSTRUMENT_PCM_ALIGNED,
    /* Key       */ 0x3C,
    /* unkEffect */ FALSE,
    /* Panning   */ 127,
    /* Sample    */ &sfx_885,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleData sfx_886;
const struct InstrumentPCM InstPCM1613 = {
    /* Type      */ INSTRUMENT_PCM_ALIGNED,
    /* Key       */ 0x3C,
    /* unkEffect */ FALSE,
    /* Panning   */ 127,
    /* Sample    */ &sfx_886,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleData sfx_823;
const struct InstrumentPCM InstPCM1614 = {
    /* Type      */ INSTRUMENT_PCM_ALIGNED,
    /* Key       */ 0x3C,
    /* unkEffect */ FALSE,
    /* Panning   */ 127,
    /* Sample    */ &sfx_823,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x66a052,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleData sfx_887;
const struct InstrumentPCM InstPCM1615 = {
    /* Type      */ INSTRUMENT_PCM_ALIGNED,
    /* Key       */ 0x3C,
    /* unkEffect */ FALSE,
    /* Panning   */ 127,
    /* Sample    */ &sfx_887,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleData sfx_885;
const struct InstrumentPCM InstPCM1616 = {
    /* Type      */ INSTRUMENT_PCM_ALIGNED,
    /* Key       */ 0x3C,
    /* unkEffect */ FALSE,
    /* Panning   */ 127,
    /* Sample    */ &sfx_885,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleData sfx_198;
const struct InstrumentPCM InstPCM1617 = {
    /* Type      */ INSTRUMENT_PCM_ALIGNED,
    /* Key       */ 0x3C,
    /* unkEffect */ FALSE,
    /* Panning   */ 127,
    /* Sample    */ &sfx_198,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const InstrumentBank InstBank49;
const struct InstrumentSubRhythm InstSubRhy1618 = {
    /* Type      */ INSTRUMENT_SUB_RHYTHM,
    /* Total     */ 36,
    /* Sub-Bank  */ &InstBank49
};

extern const struct SampleData sfx_197;
const struct InstrumentPCM InstPCM1619 = {
    /* Type      */ INSTRUMENT_PCM_ALIGNED,
    /* Key       */ 0x3C,
    /* unkEffect */ FALSE,
    /* Panning   */ 127,
    /* Sample    */ &sfx_197,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

extern const struct SampleData sfx_030;
const struct InstrumentPCM InstPCM1620 = {
    /* Type      */ INSTRUMENT_PCM_ALIGNED,
    /* Key       */ 0x3C,
    /* unkEffect */ FALSE,
    /* Panning   */ 127,
    /* Sample    */ &sfx_030,
    /* ADSR Init */ 0x000000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x5745d1,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x13e350,
};

extern const struct SampleData sfx_888;
const struct InstrumentPCM InstPCM1621 = {
    /* Type      */ INSTRUMENT_PCM_ALIGNED,
    /* Key       */ 0x3C,
    /* unkEffect */ FALSE,
    /* Panning   */ 127,
    /* Sample    */ &sfx_888,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1fc000,
};

const struct InstrumentPSG InstPSG1622 = {
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

const struct InstrumentPSG InstPSG1623 = {
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

extern const struct SampleData sfx_086;
const struct InstrumentPCM InstPCM1624 = {
    /* Type      */ INSTRUMENT_PCM_ALIGNED,
    /* Key       */ 0x3C,
    /* unkEffect */ FALSE,
    /* Panning   */ 127,
    /* Sample    */ &sfx_086,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

extern const struct SampleData sfx_796;
const struct InstrumentPCM InstPCM1625 = {
    /* Type      */ INSTRUMENT_PCM_ALIGNED,
    /* Key       */ 0x46,
    /* unkEffect */ FALSE,
    /* Panning   */ 127,
    /* Sample    */ &sfx_796,
    /* ADSR Init */ 0x7f0000,
    /* ADSR Sus  */ 0x7f0000,
    /* ADSR Atk  */ 0x600000,
    /* ADSR Dec  */ 0x208000,
    /* ADSR Fade */ 0x000000,
    /* ADSR Rel  */ 0x1e7fba,
};

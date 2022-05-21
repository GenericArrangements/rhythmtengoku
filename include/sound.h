#pragma once

#define INSTRUMENT_PCM_PITCHED 0x41
#define INSTRUMENT_PCM_UNPITCHED 0x46
#define INSTRUMENT_PSG 0x50
#define INSTRUMENT_SUBBANK_SINGLE_KEY 0x52
#define INSTRUMENT_SUBBANK_MULTI_KEY 0x53

#define PSG_PULSE_CHANNEL_1 0
#define PSG_PULSE_CHANNEL_2 1
#define PSG_WAVE_CHANNEL 2
#define PSG_NOISE_CHANNEL 3

#define PSG_TONE_DUTY_12_5 0
#define PSG_TONE_DUTY_25   1
#define PSG_TONE_DUTY_50   2
#define PSG_TONE_DUTY_75   3

#define PSG_NOISE_COUNTER_15 0
#define PSG_NOISE_COUNTER_7  1



struct SampleInfo {
	u32 length;
	u32 sampleRate;
	u32 key;
	u32 loopStart;
	u32 loopEnd;
	const u32 *waveform;
};

struct InstrumentPCM {
	u8 type;
	u8 key:7;
    u8 distort:1;
	s16 panning;
	const struct SampleInfo *sample;
	s32 initial;
	s32 sustain;
	s32 attack;
	s32 decay;
	s32 fade;
	s32 release;
};

struct InstrumentPSG {
	u8 type;
	u8 key;
	s16 panning;
	u32 *wavetable;
	s32 initial;
	s32 sustain;
	s32 attack;
	s32 decay;
	s32 fade;
	s32 release;
	u32 channel:2;
	u32 length:8;
	u32 sweep:7;
    u32 dutyTone:2;
    u32 dutyNoise:13;
};

struct InstrumentSubbankSingleKey {
	u32 type:8;
    u32 total:24;
	const union Instrument **subBank;
};

struct InstrumentSubbankMultiKey {
	u32 type:8;
    u32 unk1:24;
	u8 *unk4;
	const union Instrument **subBank;
};

union Instrument {
    u8 undefinedType;
    struct InstrumentPCM pcm;
    struct InstrumentPSG psg;
    struct InstrumentSubbankSingleKey subSingle;
    struct InstrumentSubbankMultiKey subMulti;
};

typedef const u8 *InstrumentBank[];

struct SequenceData {
    const u32 *romAddress;
    u32 unk4f1:5;
    u32 soundBank:10;
    u32 volume:7;
    u32 unk4f4:8;
    u32 unk4f5:2;
    u32 unk8;
    const char *seqName;
    u32 iramChnlIndex;
};

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

struct SampleInfo {
	u32 length;
	u32 sampleRate;
	u32 pitch;
	u32 loopStart;
	u32 loopEnd;
	const u32 *romAddress;
};

struct InstrumentHeader {
	u8 type;
	u8 unk1;
	u16 unk2;
};

struct InstrumentPCM {
	struct InstrumentHeader header;
	const struct SampleInfo *sample;
	u32 unk8;
	u32 unkC;
	u32 unk10;
	u32 unk14;
	u32 unk18;
	u32 unk1C;
};

struct InstrumentPSG {
	struct InstrumentHeader header;
	void *waveChannel;
	u32 unk8;
	u32 unkC;
	u32 unk10;
	u32 unk14;
	u32 unk18;
	u32 unk1C;
	u8 channel;
	u8 unk21;
	u8 unk22;
};

struct InstrumentSubbankSingleKey {
	struct InstrumentHeader header;
	void *subbank;
};

struct InstrumentSubbankMultiKey {
	struct InstrumentHeader header;
	void *unk4;
	void *subbank;
};

typedef const struct InstrumentHeader *InstrumentBank[];

struct SequenceData {
    const u32 *romAddress;
    u32 unk4f1:5;
    u32 soundBank:10;
    u32 volume:7;
    u32 unk4f4:10;
    u32 unk8;
    const char *seqName;
    u32 iramChnlIndex;
};

 // // // RAM Structures // // //

struct MidiChannel {
    u32 unk0_b0:1;      // ??? [default = 0]
    u32 unk0_b1:1;      // ??? [default = 0]
    u32 instPatch:7;    // Instrument Patch Number [mEvnt_C; default = 0]
    u32 unk0_b9:14;     // ??? [mCtrl_00; mCtrl_20; default = 0]
    u32 volume:7;       // Channel Volume [mCtrl_07; default = 0x64]
    u32 unk0_b30:1;     // Compression? Reverb? [default = 0]
    u32 unk0_b31:1;     // Stereo/Chorus? [default = 0]
    u32 panning:7;      // Channel Panning [mCtrl_0A; default = 0x40]
    u32 expression:7;   // Expression [mCtrl_0B; default = 0x7f]
    u32 modDepth:7;     // Modulation Depth [mCtrl_01; default = 0]
    u32 unk4_b21:7;     // ??? [default = 0]
    u32 modType:2;      // Modulation Type [default = 0] { 0 = Pitch; 1 = Volume (Tremolo); 2 = Panning }
    u32 unk4_b30:2;     // ??? [no default]
    u32 pitchWheel:14;  // Pitch Wheel [mEvnt_E; default = 0x2000]
    u32 volumeWheel:8;  // Volume Wheel? [no default]
    u32 unk8_b22:10;    // ??? ( = AudioChannel_unk4.unk14_5 = seqData.unk4f4) [default = 0]
    u8  unkC;           // ??? [default = 1]
    s8  modResult;      // Modulation Result [mCtrl_01; default = 0]
    u8  unkE;
    u8  modWheelRange;  // Pitch Wheel Range [mCtrl_14; default = 2]
    u16 modSpeed;       // Modulation Counter Increment [mCtrl_15; default = 0x3C00]
    u16 modCount;       // Modulation Counter (ticks Up) [mCtrl_15; default = 0]
    u8  modDelay;       // Modulation Delay Time [mCtrl_1A; default = 0]
    u8  modDelayCount;  // Modulation Delay Counter (ticks down) [mCtrl_1A; default = 0]
    u16 rndmPitchFloor; // Random Pitch Minimum [mCtrl_52; default = 0x100]
    u16 rndmPitchRange; // Random Pitch Range [mCtrl_52; default = 0]
    u16 rndmPitch;      // Random Pitch Result [mCtrl_52; default = 0x100]
    u8  unk1C;          // [default = 0]
    u8  unk1D;          // [default = 0]
    u8  unk1E;          // [default = 0]
};

struct MidiChannelBus {
    u8  volume;
    u8  unk1;
    u16 unk2;
    u8  unk4;
    u8  unk5;
    u16 unk6;
    u16 unk8;
    s16 *unkC;      // ROM Pointer to a curve table(?) in the sound data section.
    const InstrumentBank *soundBank;
    u32 unk14_b0:5;
    u32 unk14_b5:27; // ??? ( = seqData.unk4f4)
    struct MidiChannel *midiChannel; // Array of MIDI Channels
    u8  unk1C[12];
};

struct MidiTrackReader {
    u32 unk0_0:1;
    u32 unk0_1:1;
    u32 unk0_2:16;
    u32 unk0_18:1;
    u8 *start;
    u8 *current;
    u32 unkC;
    u32 unk10;
    u32 unk14;
    u32 deltaTime;
};

// Audio Device Channel
struct AudioChannel {
    u32 unk0_trkMax:5;      // Maximum number of MIDI Tracks this Audio Channel is able to process. (?)
    u32 unk0_trkTotal:5;    // The number of MIDI Tracks being used by the given Sound Sequence.
    u32 unk0_10:1;
    u32 unk0_pause:1;       // Paused State { 0 = Unpaused; 1 = Paused }
    u32 unk0_12:15;
    u32 unk0_27:3;
    struct MidiChannelBus *midi_channelBus;     // ??: IWRAM Pointer (various sound data, e.g. InstrumentBank pointer)
    struct MidiTrackReader *midi_trackReader;   // MIDI: Array of structs which each keep track of a MIDI Track being processed.
    const struct SequenceData *sequenceData;    // SequenceData: Currently-loaded Sound Sequence.
    u32 speed1;     // ??: Similar but not directly tempo. [default = 1]
    char *midi_loopStartSym;    // MIDI: Label char denoting "Loop Start". [always D_08A865D4, '[']
    char *midi_loopEndSym;      // MIDI: Label char denoting "Loop End". [always D_08A865D8, ']']
    u8  midi_loopStartSymSize;  // MIDI: Value of func_0804B348(D_08A865A4). [1]
    u8  midi_loopEndSymSize;    // MIDI: Value of func_0804B348(D_08A865A8). [1]
    u16 midi_quarterNote;       // MIDI: Value denoting 1 beat. Read upon initialisation, and for any change in tempo. [always 0x18]
    u16 beatscript_channelVol;  // BeatScript: Audio Channel Volume Envelope. [default = 0x100]
    u16 beatscript_trackVol;    // BeatScript: Volume Envelope for a selection of MIDI Tracks. [default = 0x100]
    u16 beatscript_trackSel;    // BeatScript: Selection of MIDI Tracks to apply Volume Envelope.
    u16 speed2;     // ??: Similar to speed1, but with different values, and being 16-bit. [default = 0x100]
    u16 beatscript_volFadeMul;  // BeatScript: Volume multiplier used for fade-out and mute effects. [default = 0x8000]
    u16 beatscript_volFadeDcr;  // BeatScript: Higher values for faster fade-out. Is set to 1 when track is muted instantly. [default = 0]
    u8  seqData_channelVol;     // SequenceData: Volume Envelope
    u8  unk2D;      // ??: [default = 0x40]
    u8  unk2E;      // ??: [default = 0x40]
    u8  unk2F;      // ??: [default = 0x40]
    u8  unk30;      // ??: [default = 0x40]
    u32 unk34;      // ??: [default = 0]
};

struct AudioChannelInfo {
    struct AudioChannel *audioChannel;
    u32 null4;  // Empty
    u16 unk8;   // Maximum MIDI Tracks? { 5..15 }
    u16 unkC;   // ?? { 0, 1 }
};
struct AudioChannelInfo D_08aa4460[13]; // Audio Channel index, with other information.

struct SequenceDataAudioChannel {
    struct SequenceData *sequenceData; // Sound Sequence.
    u16 channelID; // Audio Channel to play the given Sound Sequence in. { 0..12 }
};
struct SequenceDataAudioChannel D_08aa06f8[1924]; // Sequence Data Audio Channel table.

struct AudioChannel *D_08aa4324[13]; // Array of Audio Channel pointers.
u8 D_08aa445c; // Total number of Audio Channels. [13]

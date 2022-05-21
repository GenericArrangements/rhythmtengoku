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
    u32 priority:10;
    u32 unk8;
    const char *seqName;
    u32 audioChannelIndex;
};

 // // // RAM Structures // // //

struct MidiChannel {
    u32 unk0_b0:1;      // ??? [default = 0]
    u32 unk0_b1:1;      // ??? [default = 0]
    u32 instPatch:7;    // Instrument Patch Number [mEvnt_C; default = 0]
    u32 unk0_b9:14;     // ??? [mCtrl_00; mCtrl_20; default = 0]
    u32 volume:7;       // Channel Volume [mCtrl_07; default = 0x64]
    u32 unk0_b30:1;     // Compression? Dampen? [mCtrl_48; default = 0]
    u32 stereo:1;       // Offset/Split Stereo Effect [mCtrl_4B; default = 0]
    u32 panning:7;      // Channel Panning [mCtrl_0A; default = 0x40]
    u32 expression:7;   // Expression [mCtrl_0B; default = 0x7f]
    u32 modDepth:7;     // Modulation Depth [mCtrl_01; default = 0]
    u32 unk4_b21:7;     // ??? [default = 0]
    u32 modType:2;      // Modulation Type [default = 0] { 0 = Pitch; 1 = Volume (Tremolo); 2 = Panning }
    u32 unk4_b30:2;     // ??? (might be unused) [no default]
    u32 pitchWheel:14;  // Pitch Wheel [mEvnt_E; default = 0x2000]
    u32 volumeWheel:8;  // Volume Wheel? [no default]
    u32 priority:10;    // Priority [mCtrl_20; default = 0]
    u8  unkC;           // ??? [default = 1]
    s8  modResult;      // Modulation Result [mCtrl_01; default = 0]
    u8  unkE;
    u8  modRange;       // Pitch Wheel Range [mCtrl_14; default = 2]
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
    u8  busVolume;
    u8  trackVolume;
    u16 trackSelect;
    s8  unk4;
    s8  panning;
    s16 pitch;
    u16 unk8;
    u16 *unkC;      // ROM Pointer to a curve table(?) in the sound data section.
    const InstrumentBank *soundBank;
    u32 totalChannels:5;
    u32 priority:27;
    struct MidiChannel *midiChannel; // Array of MIDI Channels
    s8  unk1C[12];
};

struct MidiTrackReader {
    u32 active_curr:1;  // Active State (Current)
    u32 active_loop:1;  // Active State (At Loop Start)
    u32 command_curr:8; // Command (Current)
    u32 command_loop:8; // Command (At Loop Start)
    u32 inLoop:1;       // Reader is within MIDI loop region (note: label may not be accurate). [default = 0]
    u8 *stream_start;   // Stream Position: Track Start
    u8 *stream_curr;    // Stream Position: Current
    u32 unkC;           // ?? ( = initial deltaTime << 8)
    u8 *stream_loop;    // Stream Position: Loop Start
    u32 unk14;          // ?? (may be unused?)
    u32 deltaTime;      // Time until next instruction? (already parsed from variable-length quantity)
};

// Audio Device Channel
struct AudioChannel {
    u32 nTracksMax:5;   // Maximum number of MIDI Tracks this Audio Channel is able to process.
    u32 nTracksUsed:5;  // Total number of MIDI Tracks used by the given Sound Sequence.
    u32 inLoop:1;       // Channel is currently within MIDI loop region. [default = 0]
    u32 isPaused:1;     // Paused State { 0 = Unpaused; 1 = Paused }
    u32 midiTempo:9;    // Current MIDI Tempo, in Beats Per Minute (BPM).
    u32 unk0_b21:1;     // ??? (set on startup. can prevent loading tracks if set to 1) { 0 = Music/Ambience Channel; 1 = Sound Effect Channel }
    u32 unk0_b22:5;     // (indeterminate split; may be unused entirely)
    u32 volumeFadeType:3;   // Type of currently-active Volume Fade { 0 = None; 1 = Fade-In; 2 = Fade-Out & Close; 3 = Fade-Out & Pause }
    struct MidiChannelBus *midiChannelBus;      // MIDI: Bus with effects for all MIDI Channels.
    struct MidiTrackReader *midiTrackReader;    // MIDI: Multiple structures which each keep track of a MIDI Track being processed.
    const struct SequenceData *sequenceData;    // SequenceData: Currently-loaded Sound Sequence.
    u32 channelSpeed;       // ??: Similar but not directly tempo. [default = 1]
    char *loopStartSym;     // MIDI: Label char denoting "Loop Start". [always D_08A865D4, '[']
    char *loopEndSym;       // MIDI: Label char denoting "Loop End". [always D_08A865D8, ']']
    u8  loopStartSymSize;   // MIDI: Value of func_0804B348(D_08A865A4). [1]
    u8  loopEndSymSize;     // MIDI: Value of func_0804B348(D_08A865A8). [1]
    u16 midiQuarterNote;    // MIDI: Value denoting 1 beat. Read upon initialisation, and for any change in tempo. [always 0x18]
    u16 channelGain;    // BeatScript: Channel Gain (Volume) Envelope. [default = 0x100]
    u16 trackGain;      // BeatScript: Gain Envelope for a selection of MIDI Tracks. [default = 0x100]
    u16 trackSelect;    // BeatScript: Selection of MIDI Tracks to apply Gain Envelope.
    u16 speedMulti;     // BeatScript: Speed Multiplier Envelope. [default = 0x100]
    u16 volumeFadeEnv;  // BeatScript: Volume Multiplier Envelope used for fade-out and mute effects. [default = 0x8000]
    u16 volumeFadeSpd;  // BeatScript: Higher values for faster fade-out. Is set to 1 when track is muted instantly. [default = 0]
    u8  channelVolume;  // SequenceData: Volume
    s8  midiController4E;   // ??: [default = 0x40]
    s8  midiController4F;   // ??: [default = 0x40]
    s8  midiController50;   // ??: [default = 0x40]
    s8  midiController51;   // ??: [default = 0x40]
    u32 unk34;      // ??: (is set to midiTrackReader->deltaTime upon hitting a loop start marker) [default = 0]
};


// Sequence Data Audio Channel table.
struct SequenceDataAudioChannel {
    struct SequenceData *sequenceData; // Sound Sequence.
    u16 channelID; // Audio Channel to play the given Sound Sequence in. { 0..12 }
} D_08aa06f8[1924];

u32 D_08aa4318; // Total number of Audio Channels - 1. [12]
u8  D_08aa431c; // Unknown: ?? [1]
u8  D_08aa431d; // Unknown: Sound Bank ID [0x45]
u8  D_08aa431e; // Unknown: Volume [0x7f]
u8  D_08aa431f; // Unknown: Priority [0]
u8  D_08aa4320; // Unknown: Tempo [0x96]

struct AudioChannel *D_08aa4324[13]; // Array of Audio Channel pointers.
struct {
    u32 id:5;
    u32 nTracksMax:5;
    u32 unk0_b10:6; // ??? (0 for music channels, 1 for sfx channels)
    struct MidiChannel *midiChannels;
    struct MidiChannelBus *midiChannelBus;
    struct MidiTrackReader *midiTrackReaders;
    struct AudioChannel *audioChannel;
} D_08aa4358[13];

u8 D_08aa445c; // Total number of Audio Channels. [13]

// Audio Channel index, with other information.
struct {
    struct AudioChannel *audioChannel;
    u32 null4;  // Empty
    u16 unk8;   // Maximum MIDI Tracks? { 5..15 }
    u16 unkC;   // ?? { 0, 1 }
} D_08aa4460[13];


struct SoundBuffer {
    u32 active:1;
    u32 key:7; // MIDI Key
    u32 velocity:7; // MIDI Velocity
    u32 unk0_b15:17;
    union {
        const struct InstrumentPCM *pcm;
        const struct InstrumentPSG *psg;
    } instrument;
    struct MidiChannelBus *midiChannelBus;
    struct MidiChannel *midiChannel;
    u16 unk10;
    u16 unk12;
    s16 unk14;
    u16 priority:15;
    u16 unk17_b7:1;
    s16 unk18; // ?? Panning
    u16 unk1A;
    struct BufferADSR {
        u32 stage:8;
        u32 envelope:24;
    } adsr;
};

struct Comms { // Sample Buffer?
    u32 active:1;
    u32 unk0_b1:1;
    u32 unk0_b2:1; // ?? ( = instPCM->unk1_b7)
    u32 unk0_b3:1; // ?? ( = mChnl->unk0_b30)
    u8 volume; // Volume Envelope
    u8 unk2; // ?? Panning 1
    u8 unk3; // ?? Panning 2
    const u32 *sample;   // Sample - Stream
    u32 length;         // Sample - Length
    u32 unkC;           // ??
    u32 loopStart;      // Sample - Loop Start
    u32 loopEnd;        // Sample - Loop End
    u32 pitch; // Pitch Envelope
    u32 unk1C; // ?? (samplerate-related)
};

struct Jason {
    u8  unk0;
    u8  unk1;
    u16 unk2;
    u8  unk4;
    u8  unk5;
    u8  unk6;
    s8  unk7;
    u32 unk8;
};

struct MidiNote {
    u32 channel:4;
    u32 key:7;
    u32 velocity:7;
};
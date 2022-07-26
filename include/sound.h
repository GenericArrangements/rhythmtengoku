#pragma once

enum SoundPlayersEnum {
    MUSIC_PLAYER_0,
    MUSIC_PLAYER_1,
    MUSIC_PLAYER_2,
    SFX_PLAYER_0,
    SFX_PLAYER_1,
    SFX_PLAYER_2,
    SFX_PLAYER_3,
    SFX_PLAYER_4,
    SFX_PLAYER_5,
    SFX_PLAYER_6,
    SFX_PLAYER_7,
    SFX_PLAYER_8,
    SFX_PLAYER_9
};

enum SoundPlayerTypesEnum {
    SOUNDPLAYER_TYPE_MUSIC,
    SOUNDPLAYER_TYPE_SFX
};

enum MidiChannelsEnum {
    MIDI_CHANNEL_0  = (1 << 0),
    MIDI_CHANNEL_1  = (1 << 1),
    MIDI_CHANNEL_2  = (1 << 2),
    MIDI_CHANNEL_3  = (1 << 3),
    MIDI_CHANNEL_4  = (1 << 4),
    MIDI_CHANNEL_5  = (1 << 5),
    MIDI_CHANNEL_6  = (1 << 6),
    MIDI_CHANNEL_7  = (1 << 7),
    MIDI_CHANNEL_8  = (1 << 8),
    MIDI_CHANNEL_9  = (1 << 9),
    MIDI_CHANNEL_10 = (1 << 10),
    MIDI_CHANNEL_11 = (1 << 11),
    MIDI_CHANNEL_12 = (1 << 12),
    MIDI_CHANNEL_13 = (1 << 13),
    MIDI_CHANNEL_14 = (1 << 14),
    MIDI_CHANNEL_15 = (1 << 15)
};

enum InstrumentBanksEnum {
	INST_BANK_UNUSED_0,
	INST_BANK_UNUSED_1,
	INST_BANK_UNUSED_2,
	INST_BANK_UNUSED_3,
	INST_BANK_UNUSED_4,
	INST_BANK_54,
	INST_BANK_UNUSED_5,
	INST_BANK_UNUSED_7,
	INST_BANK_UNUSED_8,
	INST_BANK_UNUSED_9,
	INST_BANK_UNUSED_10,
	INST_BANK_UNUSED_11,
	INST_BANK_UNUSED_12,
	INST_BANK_UNUSED_13,
	INST_BANK_UNUSED_14,
	INST_BANK_UNUSED_15,
	INST_BANK_UNUSED_16,
	INST_BANK_55,
	INST_BANK_1,
	INST_BANK_2,
	INST_BANK_3,
	INST_BANK_4,
	INST_BANK_5,
	INST_BANK_6,
	INST_BANK_7,
	INST_BANK_8,
	INST_BANK_9,
	INST_BANK_10,
	INST_BANK_11,
	INST_BANK_12,
	INST_BANK_13,
	INST_BANK_14,
	INST_BANK_15,
	INST_BANK_16,
	INST_BANK_17,
	INST_BANK_UNUSED_35,
	INST_BANK_UNUSED_36,
	INST_BANK_UNUSED_37,
	INST_BANK_UNUSED_38,
	INST_BANK_UNUSED_39,
	INST_BANK_47,
	INST_BANK_49,
	INST_BANK_50,
	INST_BANK_48,
	INST_BANK_UNUSED_44,
	INST_BANK_51,
	INST_BANK_52,
	INST_BANK_53,
	INST_BANK_UNUSED_48,
	INST_BANK_UNUSED_49,
	INST_BANK_18,
	INST_BANK_19,
	INST_BANK_20,
	INST_BANK_21,
	INST_BANK_22,
	INST_BANK_23,
	INST_BANK_24,
	INST_BANK_25,
	INST_BANK_26,
	INST_BANK_27,
	INST_BANK_28,
	INST_BANK_29,
	INST_BANK_30,
	INST_BANK_31,
	INST_BANK_32,
	INST_BANK_33,
	INST_BANK_34,
	INST_BANK_35,
	INST_BANK_36,
	INST_BANK_37,
	INST_BANK_38,
	INST_BANK_39,
	INST_BANK_40,
	INST_BANK_41,
	INST_BANK_42,
	INST_BANK_43,
	INST_BANK_44,
	INST_BANK_45,
	INST_BANK_46,
	INST_BANK_UNUSED_79,
	INST_BANK_UNUSED_80,
	INST_BANK_UNUSED_81,
	INST_BANK_UNUSED_82,
	INST_BANK_UNUSED_83,
	INST_BANK_UNUSED_84,
	INST_BANK_UNUSED_85,
	INST_BANK_UNUSED_86,
	INST_BANK_UNUSED_87,
	INST_BANK_UNUSED_88,
	INST_BANK_UNUSED_89,
	INST_BANK_UNUSED_90,
	INST_BANK_UNUSED_91,
	INST_BANK_UNUSED_92,
	INST_BANK_UNUSED_93,
	INST_BANK_UNUSED_94,
	INST_BANK_UNUSED_95,
	INST_BANK_UNUSED_96,
	INST_BANK_UNUSED_97,
	INST_BANK_UNUSED_98,
	INST_BANK_UNUSED_99,
	INST_BANK_56,
	INST_BANK_57,
	INST_BANK_58,
	INST_BANK_59,
	INST_BANK_60,
	INST_BANK_61,
	INST_BANK_UNUSED_106,
	INST_BANK_UNUSED_107,
	INST_BANK_UNUSED_108,
	INST_BANK_UNUSED_109,
	INST_BANK_62,
	INST_BANK_63
};

#define AUDIO_SAMPLE_RATE 13379
#define DIRECTSOUND_CHANNEL_COUNT 12
#define SOUND_PLAYER_COUNT 13
#define DMA_SAMPLE_BUFFER_SIZE 1568
#define SAMPLE_SCRATCHPAD_SIZE 0x80



struct SampleData {
	u32 length;
	u32 sampleRate;
	u32 baseKey;
	u32 loopStart;
	u32 loopEnd;
	const u32 *waveform;
};

union Instrument {
    const u8 *type;
    const struct InstrumentPCM *pcm;
    const struct InstrumentPSG *psg;
    const struct InstrumentSubRhythm *rhy;
    const struct InstrumentSubSplit *spl;
};

typedef union Instrument InstrumentBank[];

struct InstrumentPCM {
	u8 type;
	u8 key:7;
    u8 distort:1;
	s16 panning;
	const struct SampleData *sample;
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
	const u32 *wavetable;
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

struct InstrumentSubRhythm {
	u32 type:8;
	u32 total:24;
	const InstrumentBank *subBank;
};

struct InstrumentSubSplit {
    u32 type:8;
	u32 total:24;
	const u8 *keySplitTable;
	const InstrumentBank *subBank;
};

typedef const u8 MidiSeq;
typedef MidiSeq *MidiStream;

typedef struct SongInfo {
    MidiSeq *midiSequence;
    u32 soundPlayer:5;
    u32 soundBank:10;
    u32 volume:7;
    u32 priority:10;
    u32 unk8;
    const char *title;
    u32 songNum;
} SongInfo;

 // // // RAM Structures // // //

typedef struct MidiChannel {
    u32 unk0_b0:1;      // ??? [default = 0]
    u32 unk0_b1:1;      // ??? [default = 0]
    u32 instPatch:7;    // Instrument Patch Number [mEvnt_C; default = 0]
    u32 bankSelect:14;  // Bank Select? [mCtrl_00; mCtrl_20; default = 0]
    u32 volume:7;       // Channel Volume [mCtrl_07; default = 0x64]
    u32 filterEQ:1;     // Compression? Dampen? [mCtrl_48; default = 0]
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
} MidiChannel;

typedef struct MidiBus {
    u8  busVolume;
    u8  trackVolume;
    u16 trackSelect;
    s8  key;
    s8  panning;
    s16 pitch;
    u16 unk8;
    const u16 *tuningTable;
    const union Instrument *soundBank;
    u32 totalChannels:5;
    u32 priority:27;
    MidiChannel *midiChannel;
    s8  unk1C[12];
} MidiBus;

typedef struct MidiTrackStream {
    u32 active_curr:1;  // Active State (Current)
    u32 active_loop:1;  // Active State (At Loop Start)
    u32 command_curr:8; // Command (Current)
    u32 command_loop:8; // Command (At Loop Start)
    u32 inLoop:1;       // Reader is within MIDI loop region (note: label may not be accurate). [default = 0]
    MidiSeq *stream_start;   // Stream Position: Track Start
    MidiSeq *stream_curr;    // Stream Position: Current
    u32 unkC;           // ?? ( = initial deltaTime << 8)
    MidiSeq *stream_loop;    // Stream Position: Loop Start
    u32 unk14;          // ?? (may be unused?)
    u32 runningTime;    // Time until next instruction? (already parsed from variable-length quantity)
} MidiTrackStream;

typedef struct SoundPlayer {
    u32 nTracksMax:5;   // Maximum number of MIDI Tracks this Audio Channel is able to process.
    u32 nTracksUsed:5;  // Total number of MIDI Tracks used by the given Sound Sequence.
    u32 inLoop:1;       // Channel is currently within MIDI loop region. [default = 0]
    u32 isPaused:1;     // Paused State { 0 = Unpaused; 1 = Paused }
    u32 midiTempo:9;    // Current MIDI Tempo, in Beats Per Minute (BPM).
    u32 playerType:1;   // ??? (set on startup. can prevent loading tracks if set to 1) { 0 = Music/Ambience Channel; 1 = Sound Effect Channel }
    u32 unk0_b22:5;     // (indeterminate split; may be unused entirely)
    u32 volumeFadeType:3;   // Type of currently-active Volume Fade { 0 = None; 1 = Fade-In; 2 = Fade-Out & Close; 3 = Fade-Out & Pause }
    MidiBus *midiBus;      // MIDI: Bus with effects for all MIDI Channels.
    MidiTrackStream *midiReader;    // MIDI: Multiple structures which each keep track of a MIDI Track being processed.
    const SongInfo *songInfo;    // SequenceData: Currently-loaded Sound Sequence.
    u32 deltaTime;      // MIDI: Ticks Per Frame, using internal assumption of 60fps [default = 1]
    const char *loopStartSym;     // MIDI: Label char denoting "Loop Start". [always D_08A865D4, '[']
    const char *loopEndSym;       // MIDI: Label char denoting "Loop End". [always D_08A865D8, ']']
    u8  loopStartSymSize;   // MIDI: Value of func_0804b348(D_08a865a4). [1]
    u8  loopEndSymSize;     // MIDI: Value of func_0804b348(D_08a865a8). [1]
    u16 midiQuarterNote;    // MIDI: Value denoting 1 beat. Read upon initialisation, and for any change in tempo. [always 0x18]
    u16 channelGain;    // BeatScript: Channel Gain (Volume) Envelope. [default = 0x100]
    u16 trackGain;      // BeatScript: Gain Envelope for a selection of MIDI Tracks. [default = 0x100]
    u16 trackSelect;    // BeatScript: Selection of MIDI Tracks to apply Gain Envelope.
    u16 speedMulti;     // BeatScript: Speed Multiplier Envelope. [default = 0x100]
    u16 volumeFadeEnv;  // BeatScript: Volume Multiplier Envelope used for fade-out and mute effects. [default = 0x8000]
    u16 volumeFadeSpd;  // BeatScript: Higher values for faster fade-out. Is set to 1 when track is muted instantly. [default = 0]
    u8  channelVolume;  // SequenceData: Volume
    s8  midiController4E;   // ??: [default = 64]
    s8  midiController4F;   // ??: [default = 64]
    s8  midiController50;   // ??: [default = 64]
    s8  midiController51;   // ??: [default = 64]
    u32 unk34;      // ??: (is set to midiReader->deltaTime upon hitting a loop start marker) [default = 0]
} SoundPlayer;

typedef struct SoundChannel {
    u32 active:1;
    u32 key:7; // MIDI Key
    u32 velocity:7; // MIDI Velocity
    u32 frequency:17;
    union {
        const struct InstrumentPCM *pcm;
        const struct InstrumentPSG *psg;
    } instrument;
    MidiBus *midiBus;
    MidiChannel *midiChannel;
    u16 unk10;
    u16 unk12;
    s16 unk14;
    u16 priority:15;
    u16 unk17_b7:1;
    s16 panning;
    struct BufferADSR {
        u32 stage:8;
        u32 envelope:24;
    } adsr;
} SoundChannel;

typedef struct SampleStream {
    u8 active:1;
    u8 unk0_b1:1;
    u8 unk0_b2:1;  // ?? ( = instPCM->unk1_b7)
    u8 useEQ:1;    // Use Filter EQ
    u8 volume;  // Volume: Main
    s8 volumeL; // Volume: Left
    s8 volumeR; // Volume: Right
    const u32 *sample;  // Sample - Stream
    u32 length;         // Sample - Length << 14
    u32 position;       // Sample - Stream Position << 14
    u32 loopStart;      // Sample - Loop Start << 14
    u32 loopEnd;        // Sample - Loop End << 14
    u32 frequency;  // Frequency Envelope
    u32 unk1C;  // ?? (samplerate-related)
} SampleStream;

// Low-Frequency Oscillator (used for an Auto-Wah)
struct LFO {
    u8  preDelay;   // Pre-Delay Time
    u8  attack;     // Attack Time
    u16 rate;       // Rate
    u8  offset;     // Offset
    u8  duration;   // Range
    u8  stage;      // Current Envelope Stage { 0..3 }
    s8  output;     // Output
    u32 ticks;      // Running Time
};

typedef struct MidiNote {
    u32 channel:4;
    u32 key:7;
    u32 velocity:7;
} MidiNote;

 // // // Misc. ROM Structures // // //

// SongTable
struct SongTableEntry {
    const SongInfo *songInfo; // Song
    u16 playerNum; // Sound Player to play the given Sound Sequence in { 0..12 }
};

// SoundPlayerTable
struct SoundPlayerTableEntry {
    u16 id:5;
    u16 trackCount:5;
    u16 playerType:6; // ??? (0 for music channels, 1 for sfx channels)
    MidiChannel *midiChannels;
    MidiBus *midiBus;
    MidiTrackStream *trackStreams;
    SoundPlayer *soundPlayer;
};

// SoundPlayerList
struct SoundPlayerListEntry {
    SoundPlayer *soundPlayer;
    u32 null4; // Empty
    u16 trackCount;
    u16 playerType;
};

extern SoundPlayer MusicPlayer0;  // [D_030015ac] MUSIC PLAYER 0
extern SoundPlayer MusicPlayer1;  // [D_030015e4] MUSIC PLAYER 1
extern SoundPlayer MusicPlayer2;  // [D_0300161c] MUSIC PLAYER 2
extern SoundPlayer SfxPlayer0;  // [D_03001654] SFX PLAYER 0
extern SoundPlayer SfxPlayer1;  // [D_0300168c] SFX PLAYER 1
extern SoundPlayer SfxPlayer2;  // [D_030016c4] SFX PLAYER 2
extern SoundPlayer SfxPlayer3;  // [D_030016fc] SFX PLAYER 3
extern SoundPlayer SfxPlayer4;  // [D_03001734] SFX PLAYER 4
extern SoundPlayer SfxPlayer5;  // [D_0300176c] SFX PLAYER 5
extern SoundPlayer SfxPlayer6;  // [D_030017a4] SFX PLAYER 6
extern SoundPlayer SfxPlayer7;  // [D_030017dc] SFX PLAYER 7
extern SoundPlayer SfxPlayer8;  // [D_03001814] SFX PLAYER 8
extern SoundPlayer SfxPlayer9;  // [D_0300184c] SFX PLAYER 9

struct {
    struct MidiChannel channels[15];
    struct MidiBus bus;
    struct MidiTrackStream streams[15];
} MusicReader0;

struct {
    struct MidiChannel channels[12];
    struct MidiBus bus;
    struct MidiTrackStream streams[12];
} MusicReader1;

struct {
    struct MidiChannel channels[12];
    struct MidiBus bus;
    struct MidiTrackStream streams[12];
} MusicReader2;

struct {
    struct MidiChannel channels[5];
    struct MidiBus bus;
    struct MidiTrackStream streams[5];
} SfxReader0;

struct {
    struct MidiChannel channels[5];
    struct MidiBus bus;
    struct MidiTrackStream streams[5];
} SfxReader1;

struct {
    struct MidiChannel channels[5];
    struct MidiBus bus;
    struct MidiTrackStream streams[5];
} SfxReader2;

struct {
    struct MidiChannel channels[5];
    struct MidiBus bus;
    struct MidiTrackStream streams[5];
} SfxReader3;

struct {
    struct MidiChannel channels[5];
    struct MidiBus bus;
    struct MidiTrackStream streams[5];
} SfxReader4;

struct {
    struct MidiChannel channels[5];
    struct MidiBus bus;
    struct MidiTrackStream streams[5];
} SfxReader5;

struct {
    struct MidiChannel channels[5];
    struct MidiBus bus;
    struct MidiTrackStream streams[5];
} SfxReader6;

struct {
    struct MidiChannel channels[5];
    struct MidiBus bus;
    struct MidiTrackStream streams[5];
} SfxReader7;

struct {
    struct MidiChannel channels[5];
    struct MidiBus bus;
    struct MidiTrackStream streams[5];
} SfxReader8;

struct {
    struct MidiChannel channels[5];
    struct MidiBus bus;
    struct MidiTrackStream streams[5];
} SfxReader9;

/*
extern MidiChannel D_03002bc8[15];      // [D_03002bc8] MUSIC PLAYER 0 - MIDI Channels
extern MidiBus D_03002da8;              // [D_03002da8] MUSIC PLAYER 0 - MIDI Bus
extern MidiTrackStream D_03002dd0[15];  // [D_03002dd0] MUSIC PLAYER 0 - MIDI Track Streams
extern MidiChannel D_03002f78[12];      // [D_03002f78] MUSIC PLAYER 1 - MIDI Channels
extern MidiBus D_030030f8;              // [D_030030f8] MUSIC PLAYER 1 - MIDI Bus
extern MidiTrackStream D_03003120[12];  // [D_03003120] MUSIC PLAYER 1 - MIDI Track Streams
extern MidiChannel D_03003270[12];      // [D_03003270] MUSIC PLAYER 2 - MIDI Channels
extern MidiBus D_030033f0;              // [D_030033f0] MUSIC PLAYER 2 - MIDI Bus
extern MidiTrackStream D_03003418[12];  // [D_03003418] MUSIC PLAYER 2 - MIDI Track Streams
extern MidiChannel D_03003568[5];       // [D_03003568] SFX PLAYER 0 - MIDI Channels
extern MidiBus D_03003608;              // [D_03003608] SFX PLAYER 0 - MIDI Bus
extern MidiTrackStream D_03003630[5];   // [D_03003630] SFX PLAYER 0 - MIDI Track Streams
extern MidiChannel D_030036c0[5];       // [D_030036c0] SFX PLAYER 1 - MIDI Channels
extern MidiBus D_03003760;              // [D_03003760] SFX PLAYER 1 - MIDI Bus
extern MidiTrackStream D_03003788[5];   // [D_03003788] SFX PLAYER 1 - MIDI Track Streams
extern MidiChannel D_03003818[5];       // [D_03003818] SFX PLAYER 2 - MIDI Channels
extern MidiBus D_030038b8;              // [D_030038b8] SFX PLAYER 2 - MIDI Bus
extern MidiTrackStream D_030038e0[5];   // [D_030038e0] SFX PLAYER 2 - MIDI Track Streams
extern MidiChannel D_03003970[5];       // [D_03003970] SFX PLAYER 3 - MIDI Channels
extern MidiBus D_03003a10;              // [D_03003a10] SFX PLAYER 3 - MIDI Bus
extern MidiTrackStream D_03003a38[5];   // [D_03003a38] SFX PLAYER 3 - MIDI Track Streams
extern MidiChannel D_03003ac8[5];       // [D_03003ac8] SFX PLAYER 4 - MIDI Channels
extern MidiBus D_03003b68;              // [D_03003b68] SFX PLAYER 4 - MIDI Bus
extern MidiTrackStream D_03003b90[5];   // [D_03003b90] SFX PLAYER 4 - MIDI Track Streams
extern MidiChannel D_03003c20[5];       // [D_03003c20] SFX PLAYER 5 - MIDI Channels
extern MidiBus D_03003cc0;              // [D_03003cc0] SFX PLAYER 5 - MIDI Bus
extern MidiTrackStream D_03003ce8[5];   // [D_03003ce8] SFX PLAYER 5 - MIDI Track Streams
extern MidiChannel D_03003d78[5];       // [D_03003d78] SFX PLAYER 6 - MIDI Channels
extern MidiBus D_03003e18;              // [D_03003e18] SFX PLAYER 6 - MIDI Bus
extern MidiTrackStream D_03003e40[5];   // [D_03003e40] SFX PLAYER 6 - MIDI Track Streams
extern MidiChannel D_03003ed0[5];       // [D_03003ed0] SFX PLAYER 7 - MIDI Channels
extern MidiBus D_03003f70;              // [D_03003f70] SFX PLAYER 7 - MIDI Bus
extern MidiTrackStream D_03003f98[5];   // [D_03003f98] SFX PLAYER 7 - MIDI Track Streams
extern MidiChannel D_03004028[5];       // [D_03004028] SFX PLAYER 8 - MIDI Channels
extern MidiBus D_030040c8;              // [D_030040c8] SFX PLAYER 8 - MIDI Bus
extern MidiTrackStream D_030040f0[5];   // [D_030040f0] SFX PLAYER 8 - MIDI Track Streams
extern MidiChannel D_03004180[5];       // [D_03004180] SFX PLAYER 9 - MIDI Channels
extern MidiBus D_03004220;              // [D_03004220] SFX PLAYER 9 - MIDI Bus
extern MidiTrackStream D_03004248[5];   // [D_03004248] SFX PLAYER 9 - MIDI Track Streams
*/

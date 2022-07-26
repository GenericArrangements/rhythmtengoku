// ...
// D_08aa4318
const u32 gMidiPlayerCount = SOUND_PLAYER_COUNT - 1;

// ...
// D_08aa431c
const u8 gDirectMidiPlayerHasData = TRUE;
const u8 gDirectMidiPlayerBank = INST_BANK_37;
const u8 gDirectMidiPlayerVolume = 127;
const u8 gDirectMidiPlayerPriority = 0;
const u8 gDirectMidiPlayerTempo = 150;

// ...
// D_08aa4324
struct SoundPlayer *const gSoundPlayers[] = {
    &MusicPlayer0,
    &MusicPlayer1,
    &MusicPlayer2,
    &SfxPlayer0,
    &SfxPlayer1,
    &SfxPlayer2,
    &SfxPlayer3,
    &SfxPlayer4,
    &SfxPlayer5,
    &SfxPlayer6,
    &SfxPlayer7,
    &SfxPlayer8,
    &SfxPlayer9
};

#define TRACK_COUNT_MUSIC_0 15
#define TRACK_COUNT_MUSIC_1 12
#define TRACK_COUNT_MUSIC_2 12
#define TRACK_COUNT_SFX     5

// ...
// D_08aa4358
const struct SoundPlayerTableEntry gSoundPlayerTable[] = {
    /* MUSIC PLAYER 0 */ {
        /* Player ID     */ MUSIC_PLAYER_0,
        /* Track Count   */ TRACK_COUNT_MUSIC_0,
        /* Player Type   */ SOUNDPLAYER_TYPE_MUSIC,
        /* MIDI Channels */ MusicReader0.channels,
        /* MIDI Bus      */ &MusicReader0.bus,
        /* MIDI Streams  */ MusicReader0.streams,
        /* Sound Player  */ &MusicPlayer0
    },
    /* MUSIC PLAYER 1 */ {
        /* Player ID     */ MUSIC_PLAYER_1,
        /* Track Count   */ TRACK_COUNT_MUSIC_1,
        /* Player Type   */ SOUNDPLAYER_TYPE_MUSIC,
        /* MIDI Channels */ MusicReader1.channels,
        /* MIDI Bus      */ &MusicReader1.bus,
        /* MIDI Streams  */ MusicReader1.streams,
        /* Sound Player  */ &MusicPlayer1
    },
    /* MUSIC PLAYER 2 */ {
        /* Player ID     */ MUSIC_PLAYER_2,
        /* Track Count   */ TRACK_COUNT_MUSIC_2,
        /* Player Type   */ SOUNDPLAYER_TYPE_MUSIC,
        /* MIDI Channels */ MusicReader2.channels,
        /* MIDI Bus      */ &MusicReader2.bus,
        /* MIDI Streams  */ MusicReader2.streams,
        /* Sound Player  */ &MusicPlayer2
    },
    /* SFX PLAYER 0 */ {
        /* Player ID     */ SFX_PLAYER_0,
        /* Track Count   */ TRACK_COUNT_SFX,
        /* Player Type   */ SOUNDPLAYER_TYPE_SFX,
        /* MIDI Channels */ SfxReader0.channels,
        /* MIDI Bus      */ &SfxReader0.bus,
        /* MIDI Streams  */ SfxReader0.streams,
        /* Sound Player  */ &SfxPlayer0
    },
    /* SFX PLAYER 1 */ {
        /* Player ID     */ SFX_PLAYER_1,
        /* Track Count   */ TRACK_COUNT_SFX,
        /* Player Type   */ SOUNDPLAYER_TYPE_SFX,
        /* MIDI Channels */ SfxReader1.channels,
        /* MIDI Bus      */ &SfxReader1.bus,
        /* MIDI Streams  */ SfxReader1.streams,
        /* Sound Player  */ &SfxPlayer1
    },
    /* SFX PLAYER 2 */ {
        /* Player ID     */ SFX_PLAYER_2,
        /* Track Count   */ TRACK_COUNT_SFX,
        /* Player Type   */ SOUNDPLAYER_TYPE_SFX,
        /* MIDI Channels */ SfxReader2.channels,
        /* MIDI Bus      */ &SfxReader2.bus,
        /* MIDI Streams  */ SfxReader2.streams,
        /* Sound Player  */ &SfxPlayer2
    },
    /* SFX PLAYER 3 */ {
        /* Player ID     */ SFX_PLAYER_3,
        /* Track Count   */ TRACK_COUNT_SFX,
        /* Player Type   */ SOUNDPLAYER_TYPE_SFX,
        /* MIDI Channels */ SfxReader3.channels,
        /* MIDI Bus      */ &SfxReader3.bus,
        /* MIDI Streams  */ SfxReader3.streams,
        /* Sound Player  */ &SfxPlayer3
    },
    /* SFX PLAYER 4 */ {
        /* Player ID     */ SFX_PLAYER_4,
        /* Track Count   */ TRACK_COUNT_SFX,
        /* Player Type   */ SOUNDPLAYER_TYPE_SFX,
        /* MIDI Channels */ SfxReader4.channels,
        /* MIDI Bus      */ &SfxReader4.bus,
        /* MIDI Streams  */ SfxReader4.streams,
        /* Sound Player  */ &SfxPlayer4
    },
    /* SFX PLAYER 5 */ {
        /* Player ID     */ SFX_PLAYER_5,
        /* Track Count   */ TRACK_COUNT_SFX,
        /* Player Type   */ SOUNDPLAYER_TYPE_SFX,
        /* MIDI Channels */ SfxReader5.channels,
        /* MIDI Bus      */ &SfxReader5.bus,
        /* MIDI Streams  */ SfxReader5.streams,
        /* Sound Player  */ &SfxPlayer5
    },
    /* SFX PLAYER 6 */ {
        /* Player ID     */ SFX_PLAYER_6,
        /* Track Count   */ TRACK_COUNT_SFX,
        /* Player Type   */ SOUNDPLAYER_TYPE_SFX,
        /* MIDI Channels */ SfxReader6.channels,
        /* MIDI Bus      */ &SfxReader6.bus,
        /* MIDI Streams  */ SfxReader6.streams,
        /* Sound Player  */ &SfxPlayer6
    },
    /* SFX PLAYER 7 */ {
        /* Player ID     */ SFX_PLAYER_7,
        /* Track Count   */ TRACK_COUNT_SFX,
        /* Player Type   */ SOUNDPLAYER_TYPE_SFX,
        /* MIDI Channels */ SfxReader7.channels,
        /* MIDI Bus      */ &SfxReader7.bus,
        /* MIDI Streams  */ SfxReader7.streams,
        /* Sound Player  */ &SfxPlayer7
    },
    /* SFX PLAYER 8 */ {
        /* Player ID     */ SFX_PLAYER_8,
        /* Track Count   */ TRACK_COUNT_SFX,
        /* Player Type   */ SOUNDPLAYER_TYPE_SFX,
        /* MIDI Channels */ SfxReader8.channels,
        /* MIDI Bus      */ &SfxReader8.bus,
        /* MIDI Streams  */ SfxReader8.streams,
        /* Sound Player  */ &SfxPlayer8
    },
    /* SFX PLAYER 9 */ {
        /* Player ID     */ SFX_PLAYER_9,
        /* Track Count   */ TRACK_COUNT_SFX,
        /* Player Type   */ SOUNDPLAYER_TYPE_SFX,
        /* MIDI Channels */ SfxReader9.channels,
        /* MIDI Bus      */ &SfxReader9.bus,
        /* MIDI Streams  */ SfxReader9.streams,
        /* Sound Player  */ &SfxPlayer9
    }
};

// ...
// D_08aa445c
const u8 gSoundPlayerCount = SOUND_PLAYER_COUNT;

// ...
// D_08aa4460
const struct SoundPlayerListEntry gSoundPlayerList[] = {
    /* MUSIC PLAYER 0 */ {
        /* Sound Player */ &MusicPlayer0,
        /* NULL         */ 0,
        /* Track Count  */ TRACK_COUNT_MUSIC_0,
        /* Player Type  */ SOUNDPLAYER_TYPE_MUSIC
    },
    /* MUSIC PLAYER 1 */ {
        /* Sound Player */ &MusicPlayer1,
        /* NULL         */ 0,
        /* Track Count  */ TRACK_COUNT_MUSIC_1,
        /* Player Type  */ SOUNDPLAYER_TYPE_MUSIC
    },
    /* MUSIC PLAYER 2 */ {
        /* Sound Player */ &MusicPlayer2,
        /* NULL         */ 0,
        /* Track Count  */ TRACK_COUNT_MUSIC_2,
        /* Player Type  */ SOUNDPLAYER_TYPE_MUSIC
    },
    /* SFX PLAYER 0 */ {
        /* Sound Player */ &SfxPlayer0,
        /* NULL         */ 0,
        /* Track Count  */ TRACK_COUNT_SFX,
        /* Player Type  */ SOUNDPLAYER_TYPE_SFX
    },
    /* SFX PLAYER 1 */ {
        /* Sound Player */ &SfxPlayer1,
        /* NULL         */ 0,
        /* Track Count  */ TRACK_COUNT_SFX,
        /* Player Type  */ SOUNDPLAYER_TYPE_SFX
    },
    /* SFX PLAYER 2 */ {
        /* Sound Player */ &SfxPlayer2,
        /* NULL         */ 0,
        /* Track Count  */ TRACK_COUNT_SFX,
        /* Player Type  */ SOUNDPLAYER_TYPE_SFX
    },
    /* SFX PLAYER 3 */ {
        /* Sound Player */ &SfxPlayer3,
        /* NULL         */ 0,
        /* Track Count  */ TRACK_COUNT_SFX,
        /* Player Type  */ SOUNDPLAYER_TYPE_SFX
    },
    /* SFX PLAYER 4 */ {
        /* Sound Player */ &SfxPlayer4,
        /* NULL         */ 0,
        /* Track Count  */ TRACK_COUNT_SFX,
        /* Player Type  */ SOUNDPLAYER_TYPE_SFX
    },
    /* SFX PLAYER 5 */ {
        /* Sound Player */ &SfxPlayer5,
        /* NULL         */ 0,
        /* Track Count  */ TRACK_COUNT_SFX,
        /* Player Type  */ SOUNDPLAYER_TYPE_SFX
    },
    /* SFX PLAYER 6 */ {
        /* Sound Player */ &SfxPlayer6,
        /* NULL         */ 0,
        /* Track Count  */ TRACK_COUNT_SFX,
        /* Player Type  */ SOUNDPLAYER_TYPE_SFX
    },
    /* SFX PLAYER 7 */ {
        /* Sound Player */ &SfxPlayer7,
        /* NULL         */ 0,
        /* Track Count  */ TRACK_COUNT_SFX,
        /* Player Type  */ SOUNDPLAYER_TYPE_SFX
    },
    /* SFX PLAYER 8 */ {
        /* Sound Player */ &SfxPlayer8,
        /* NULL         */ 0,
        /* Track Count  */ TRACK_COUNT_SFX,
        /* Player Type  */ SOUNDPLAYER_TYPE_SFX
    },
    /* SFX PLAYER 9 */ {
        /* Sound Player */ &SfxPlayer9,
        /* NULL         */ 0,
        /* Track Count  */ TRACK_COUNT_SFX,
        /* Player Type  */ SOUNDPLAYER_TYPE_SFX
    }
};
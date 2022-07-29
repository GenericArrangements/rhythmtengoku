#include "global.h"
#include "sound.h"
#include "midi4a.h"

asm(".include \"include/gba.inc\"");//Temporary

#include "midi4a/direct_sound.inc.c"

#include "midi4a/midi_channel.inc.c"

#include "midi4a/oscillator.inc.c"

#include "midi4a/psg_channel.inc.c"

#include "midi4a/song_player.inc.c"

#include "midi4a/update.inc.c"

// [func_0804c35c] Initialise Sound Players
void func_0804c35c(SoundPlayer *channel, MidiBus *mChnlBus, u32 nTracksMax, MidiTrackStream *midiReader, u32 type) {
    channel->songInfo = NULL;
    channel->midiBus = mChnlBus;
    channel->nTracksMax = nTracksMax;
    channel->midiReader = midiReader;
    channel->playerType = type;
    channel->channelVolume = 100;
}

// [func_0804c398] MIDI - Parse Variable-Length Quantity
u32 func_0804c398(MidiStream *midiStream) {
    MidiStream mStream = *midiStream;
    u8 current;
    u32 time = 0;

    do {
        current = *mStream;
        mStream++;
        time <<= 7;
        time |= (current & 0x7f);
    } while (current & 0x80);

    *midiStream = mStream;
    return time;
}

// [func_0804c3c0] TEST PLAYER - Initialise
void directmidi_init(SoundPlayer *mPlayer, MidiTrackStream *mStreams, u32 numTracks,
                        MidiBus *mBus, MidiChannel *mChannels, u8 *seq) {

    if (!gDirectMidiPlayerHasData) return;

    func_08049fa0(mBus, numTracks, mChannels);
    func_0804a014(mBus, gInstrumentBanks[gDirectMidiPlayerBank]);
    func_0804adb4(mBus, gDirectMidiPlayerVolume);
    func_08049e8c(mBus, gDirectMidiPlayerPriority);
    func_0804c35c(mPlayer, mBus, numTracks, mStreams, gDirectMidiPlayerPriority);

    mPlayer->speedMulti = Q24(1.0);
    mPlayer->trackGain = Q24(1.0);
    mPlayer->volumeFadeType = 0;
    mPlayer->volumeFadeEnv = 0x8000;
    mPlayer->volumeFadeSpd = 0;
    mPlayer->midiTempo = gDirectMidiPlayerTempo;
    mPlayer->deltaTime = func_0804b6f0(gDirectMidiPlayerTempo, Q24(1.0), 0x18);
    mPlayer->midiController4E = 64;
    mPlayer->midiController4F = 64;
    mPlayer->midiController50 = 64;
    mPlayer->midiController51 = 64;

    D_03001598 = mPlayer;
    D_0300159c = mBus;
    D_030015a0 = seq;
    D_030015a4 = 0;
    D_030015a6 = 0;
}

// [func_0804c4bc] TEST PLAYER - Append MIDI Sequence Instructions
void directmidi_append_to_seq(s8 *seq, u32 len) {
    while ((len != 0) && (D_030015a4 < 0x200)) {
        D_030015a0[D_030015a4++] = *seq;
        seq++;
        len--;
    }
}

// [func_0804c508] TEST PLAYER - Parse MIDI Sequence Instructions
#include "asm/midi4a/asm_0804c508.s"

// [func_0804c6c8] TEST PLAYER - Update
void directmidi_update(void) {
    MidiChannel *mChnl;
    MidiNote *note;
    u32 anyNotePlayed;
    u32 i;

    func_08049d08(D_0300159c);
    anyNotePlayed = FALSE;
    D_03005b78 = 0;
    directmidi_read_seq();

    note = &D_03005650[0];
    for (i = 0; i < D_03005b78; i++, note++) {
        if (note->velocity != 0) { // Note has non-zero velocity.
            func_0804a6b0(D_0300159c, note->channel, note->key, note->velocity);
            mChnl = &D_0300159c->midiChannel[note->channel];
            if (mChnl->filterEQ && (D_03005b3c == LFO_MODE_KEYPRESS)) {
                anyNotePlayed = TRUE;
            }
        } else { // Note is muted.
            func_0804a5b4(D_0300159c, note->channel, note->key);
        }
    }
    if (anyNotePlayed) {
        equalizer_reset();
        lfo_start(&D_03005b30);
    }
}

// [func_0804c778] MAIN INITIALISE
void func_0804c778(void) {
    u32 i;

    directsound_init(DIRECTSOUND_MODE_STEREO, AUDIO_SAMPLE_RATE,
                    DMA_SAMPLE_BUFFER_SIZE, D_03001888,
                    SAMPLE_SCRATCHPAD_SIZE, D_030024c8,
                    DIRECTSOUND_CHANNEL_COUNT, D_030028c8);
    func_0804af30();
    func_0804a360(DIRECTSOUND_CHANNEL_COUNT, D_03002a48);

    for (i = 0; i < SOUND_PLAYER_COUNT; i++) {
        func_08049fa0(gSoundPlayerTable[i].midiBus, gSoundPlayerTable[i].trackCount, gSoundPlayerTable[i].midiChannels);
        func_0804c35c(gSoundPlayerTable[i].soundPlayer, gSoundPlayerTable[i].midiBus, gSoundPlayerTable[i].trackCount, gSoundPlayerTable[i].trackStreams, gSoundPlayerTable[i].playerType);
    }

    D_03005b7c = D_030015a7;
    D_03005b20 = 4;

    for (i = 0; i < 4; i++) {
        D_03005b7c[i] = 0;
    }

    D_03005b3c = LFO_MODE_DISABLED;
    D_03005644 = NULL;
    D_03005b90[0] = 0;
    D_03005b90[1] = 0;
    D_03005b90[2] = 0;
    D_03005b90[3] = 0;
    D_03001598 = NULL;
}

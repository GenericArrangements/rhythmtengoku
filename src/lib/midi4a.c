#include "global.h"
#include "sound.h"
#include "midi4a.h"

asm(".include \"include/gba.inc\"");//Temporary

#include "midi4a/direct_sound.inc.c"

#include "midi4a/midi_channel.inc.c"

#include "midi4a/sys_exc_message.inc.c"

#include "midi4a/psg_channel.inc.c"

#include "midi4a/song_player.inc.c"

#include "midi4a/update.inc.c"

// [func_0804c35c] Initialise Sound Players
void func_0804c35c(SoundPlayer *channel, MidiBus *mChnlBus, u32 nTracksMax, MidiReader *midiReader, u32 type) {
    channel->songInfo = NULL;
    channel->midiBus = mChnlBus;
    channel->nTracksMax = nTracksMax;
    channel->midiReader = midiReader;
    channel->unk0_b21 = type;
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

// [func_0804c3c0] Initialise... a sound player that don't exist.
void func_0804c3c0(SoundPlayer *channel, MidiReader *mTrkReader, u32 nTracksMax,
                        MidiBus *mChnlBus, MidiChannel *mChnl, u8 *arg5) {

    if (D_08aa431c == 0) return;

    func_08049fa0(mChnlBus, nTracksMax, mChnl);
    func_0804a014(mChnlBus, instrumentBanks[D_08aa431d]);
    func_0804adb4(mChnlBus, D_08aa431e);
    func_08049e8c(mChnlBus, D_08aa431f);
    func_0804c35c(channel, mChnlBus, nTracksMax, mTrkReader, D_08aa431f);

    channel->speedMulti = 0x100;
    channel->trackGain = 0x100;
    channel->volumeFadeType = 0;
    channel->volumeFadeEnv = 0x8000;
    channel->volumeFadeSpd = 0;
    channel->midiTempo = D_08aa4320;
    channel->channelSpeed = func_0804b6f0(D_08aa4320, 0x100, 0x18);
    channel->midiController4E = 0x40;
    channel->midiController4F = 0x40;
    channel->midiController50 = 0x40;
    channel->midiController51 = 0x40;

    D_03001598 = channel;
    D_0300159c = mChnlBus;
    D_030015a0 = arg5;
    D_030015a4 = 0;
    D_030015a6 = 0;
}

#include "asm/midi4a/asm_0804c4bc.s"

#include "asm/midi4a/asm_0804c508.s"

// [func_0804c6c8] ?? (something about midi channels and notes and a midi channel bus that doesn't exist after startup?)
void func_0804c6c8(void) {
    MidiChannel *mChnl;
    MidiNote *note;
    u32 anyNotePlayed;
    u32 i;

    func_08049d08(D_0300159c);
    anyNotePlayed = FALSE;
    D_03005b78 = 0;
    func_0804c508();

    note = &D_03005650[0];
    for (i = 0; i < D_03005b78; i++, note++) {
        if (note->velocity != 0) { // Note has non-zero velocity.
            func_0804a6b0(D_0300159c, note->channel, note->key, note->velocity);
            mChnl = &D_0300159c->midiChannel[note->channel];
            if (mChnl->unk0_b30 && (D_03005b3c == 1)) {
                anyNotePlayed = TRUE;
            }
        } else { // Note is muted.
            func_0804a5b4(D_0300159c, note->channel, note->key);
        }
    }
    if (anyNotePlayed) {
        func_08049be4();
        func_0804ae54(&D_03005b30);
    }
}

// [func_0804c778] MAIN INITIALISE
void func_0804c778(void) {
    u32 i;

    func_08049490(0, 13379, 0x620, &D_03001888, 0x80, &D_030024c8, 12, &D_030028c8);
    func_0804af30();
    func_0804a360(12, &D_03002a48);

    for (i = 0; i < 13; i++) {
        func_08049fa0(D_08aa4358[i].midiBus, D_08aa4358[i].nTracksMax, D_08aa4358[i].midiChannels);
        func_0804c35c(D_08aa4358[i].audioChannel, D_08aa4358[i].midiBus, D_08aa4358[i].nTracksMax, D_08aa4358[i].midiReaders, D_08aa4358[i].unk0_b10);
    }

    D_03005b7c = &D_030015a7;
    D_03005b20 = 4;

    for (i = 0; i < 4; i++) {
        D_03005b7c[i] = 0;
    }

    D_03005b3c = 0;
    D_03005644 = NULL;
    D_03005b90[0] = 0;
    D_03005b90[1] = 0;
    D_03005b90[2] = 0;
    D_03005b90[3] = 0;
    D_03001598 = NULL;
}

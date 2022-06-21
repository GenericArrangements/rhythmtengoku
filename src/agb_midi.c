#include "global.h"
#include "sound.h"
#include "agb_midi.h"

asm(".include \"include/gba.inc\"");//Temporary

#include "src/agb_midi/direct_sound.inc.c"

#include "src/agb_midi/midi_channel.inc.c"

#include "src/agb_midi/sys_exc_message.inc.c"

  //  //  //  //   PSG SOUND BUFFER OPERATIONS   //  //  //  //


// [func_0804af30] PSG BUFFER - Stop All PSG Buffer Channels
void func_0804af30(void) {
    u32 i;

    for (i = 0; i < 4; i++) {
        D_030056a0[i].active = FALSE;
    }

    for (i = 0; i < 4; i++) {
        D_03001578[i] = 0;
    }
    *D_03001590 = 0;
}

// [func_0804af74] PSG BUFFER - Initialise
void func_0804af74(u32 id) {
    D_03001578[id] = 1;
    D_03001580[id] = -1;
    D_03001588[id] = -1;
}

// [func_0804afa4] PSG BUFFER - Convert Pitch Envelope to PSG Frequency Register Variable
u32 func_0804afa4(u32 pitchEnv) {
    s32 var;

    if (pitchEnv == 0) return 0;
    var = 0x800 - ((0x400000 / pitchEnv) >> 5);
    if (var < 0) var = 0;
    if (var > 0x7ff) var = 0x7ff;
    return var;
}

// [func_0804afd8] PSG BUFFER - Convert Volume Envelope to PSG Volume Register Variable
u32 func_0804afd8(u32 volumeEnv) {
    u32 var = volumeEnv;

    var = (volumeEnv >> 3);
    volumeEnv = var >> 1;
    var += var >> 1;
    if (var > 0xf) var = 0xf;
    return var;
}

// [func_0804aff0] Update PSG Buffer Channel
#include "asm/agb_midi/asm_0804aff0.s"

// [func_0804b2c4] PSG BUFFER - Update All
void func_0804b2c4(void) {
    SoundChannel *psgBuf = &D_030056a0[0];
    u16 controller = 0;
    u32 i;

    for (i = 0; i < 4; i++) {
        // Update PSG Buffer Channel
        func_0804aff0(i);

        // Set Panning
        controller >>= 1;
        if (psgBuf->active) {
            // Set Enable Flag LEFT
            if (psgBuf->midiChannel->panning <= 0x40) {
                controller |= 0x8000;
            }
            // Set Enable Flag RIGHT
            if (psgBuf->midiChannel->panning >= 0x40) {
                controller |= 0x800;
            }
        }
        psgBuf++;
    }

    // Set Master Volume to 7 (LEFT & RIGHT)
    controller |= 0x77;
    // Store to IO Register
    REG_SOUNDCNT_L = controller;
}


  //  //  //  //   AUDIO CHANNEL OPERATIONS   //  //  //  //


// [func_0804b324] AUDIO CHANNEL - Parse 16-bit Big Endian value in Byte Stream.
u16 func_0804b324(MidiStream stream) {
    return (stream[0] << 8) | stream[1];
}

// [func_0804b330] AUDIO CHANNEL - Parse 32-bit Big Endian value in Byte Stream.
u32 func_0804b330(MidiStream stream) {
    return (stream[0]) << 0x18 | (stream[1]) << 0x10 | (stream[2]) << 8 | stream[3];
}

// [func_0804b348] AUDIO CHANNEL - Loop Marker Symbol Length
u32 func_0804b348(char *label) {
    u8 i;

    for (i = 0; label[i] != '\0'; i++);
    return i;
}

// [func_0804b368] AUDIO CHANNEL - Store Sound Sequence
void func_0804b368(SoundPlayer *channel, const SongInfo *seqData) {
    MidiBus *mChnlBus;
    MidiReader *mTrkReader;
    MidiStream mTrkStream;
    MidiStream mTrkStart;
    u32 chunkLength;
    u32 trackTotal;
    u32 deltaTime;
    u32 i;

    // Reading Sequence Data:
    if (func_0804b5a0(channel)) {
        if (channel->unk0_b21 && !channel->isPaused) {
            if (channel->songInfo->priority > seqData->priority) return;
        }
    }

    mChnlBus = channel->midiBus;
    func_08049e64(mChnlBus);
    func_08049fa0(mChnlBus, mChnlBus->totalChannels, mChnlBus->midiChannel);
    func_0804a014(mChnlBus, instrumentBanks[seqData->soundBank]);
    func_0804adb4(mChnlBus, seqData->volume);
    func_08049e8c(mChnlBus, seqData->priority);
    channel->songInfo = seqData;
    channel->channelVolume = seqData->volume;

    // Reading MIDI Data:
    mTrkStream = seqData->midiSequence;

    // Header:
    mTrkStream += 4; // Skip (Header: "MThd")
    chunkLength = func_0804b330(mTrkStream);
    mTrkStream += 4; // Skip (Header: Length)
    trackTotal = func_0804b324(mTrkStream + 2); // Header: Number of MIDI Tracks
    channel->nTracksUsed = trackTotal;

    if (channel->nTracksUsed > channel->nTracksMax) {
        channel->nTracksUsed = channel->nTracksMax;
    }
    channel->midiQuarterNote = func_0804b324(mTrkStream + 4); // Header: Division
    mTrkStream += chunkLength; // Skip (Header: Data)

    // Track:
    mTrkReader = channel->midiReader;
    for (i = 0; i < channel->nTracksUsed; i++) {
        mTrkStream += 4; // Skip (Track: Header)
        chunkLength = func_0804b330(mTrkStream);
        mTrkStream += 4; // Skip (Track: Length)
        mTrkStart = mTrkStream;
        mTrkStream += chunkLength;
        mTrkReader->active_curr = TRUE;
        mTrkReader->stream_start = mTrkStart;
        deltaTime = func_0804c398(&mTrkStart);
        mTrkReader->unkC = deltaTime << 8;
        mTrkReader->stream_curr = mTrkStart;
        mTrkReader->deltaTime = deltaTime;
        mTrkReader->active_loop = FALSE;
        mTrkReader->inLoop = FALSE;
        mTrkReader++;
    }

    // Other Data:
    channel->inLoop = FALSE;
    channel->isPaused = FALSE;
    channel->channelSpeed = 1;
    channel->channelGain = 0x100;
    channel->speedMulti = 0x100;
    channel->trackGain = 0x100;
    channel->volumeFadeType = 0;
    channel->volumeFadeEnv = 0x8000;
    channel->volumeFadeSpd = 0;
    channel->loopStartSym = &D_08a865a4[0];
    channel->loopStartSymSize = func_0804b348(D_08a865a4);
    channel->loopEndSym = &D_08a865a8[0];
    channel->loopEndSymSize = func_0804b348(D_08a865a8);
    channel->midiController4E = 0x40;
    channel->midiController4F = 0x40;
    channel->midiController50 = 0x40;
    channel->midiController51 = 0x40;
    channel->unk34 = 0;
}

// [func_0804b534] AUDIO CHANNEL - Load & Store Sound Sequence from Index
void func_0804b534(u16 index) {
    SoundPlayer *channel;
    const SongInfo *seqData;

    channel = D_08aa4460[D_08aa06f8[index].channelID].audioChannel;
    seqData = D_08aa06f8[index].songInfo;
    func_0804b368(channel, seqData);
}

// [func_0804b560] AUDIO CHANNEL - Remove Sound Sequence
void func_0804b560(SoundPlayer *channel) {
    func_08049e3c(channel->midiBus);
    channel->songInfo = NULL;
}

// [func_0804b574] AUDIO CHANNEL - Pause/Unpause Sound Sequence { 0 = Unpause; 1 = Pause }
void func_0804b574(SoundPlayer *channel, u8 pause) {
    channel->isPaused = pause;
    if (pause) func_08049e64(channel->midiBus);
}

// [func_0804b5a0] AUDIO CHANNEL - Check for Active MIDI Readers
u32 func_0804b5a0(SoundPlayer *channel) {
    u32 i;

    if (channel->songInfo == NULL) return FALSE;
    for (i = 0; i < channel->nTracksUsed; i++) {
        if (channel->midiReader[i].active_curr) return TRUE;
    }
    return FALSE;
}

// [func_0804b5d8] AUDIO CHANNEL - Pause Channel
void func_0804b5d8(SoundPlayer *channel) {
    func_0804b574(channel, TRUE);
}

// [func_0804b5e4] AUDIO CHANNEL - Unpause Channel
void func_0804b5e4(SoundPlayer *channel) {
    func_0804b574(channel, FALSE);
}

// [func_0804b5f0] AUDIO CHANNEL - Pause All Channels
void func_0804b5f0(void) {
    u32 i;

    for (i = 0; i <= D_08aa4318; i++) {
        func_0804b574(D_08aa4324[i], TRUE);
    }
}

// [func_0804b620] AUDIO CHANNEL - Unpause All Channels
void func_0804b620(void) {
    u32 i;

    for (i = 0; i <= D_08aa4318; i++) {
        func_0804b574(D_08aa4324[i], FALSE);
    }
}

// [func_0804b650] AUDIO CHANNEL - Set Gain (Volume)
void func_0804b650(SoundPlayer *channel, u16 gain) {
    channel->channelGain = gain;
}

// [func_0804b654] AUDIO CHANNEL - Set Gain (Volume) for Selected Tracks
void func_0804b654(SoundPlayer *channel, u16 tracks, u16 gain) {
    channel->trackGain = gain;
    channel->trackSelect = tracks;
}

// [func_0804b65c] AUDIO CHANNEL - Set Pitch
void func_0804b65c(SoundPlayer *channel, u16 unused, s16 pitch) {
    func_0804ade4(channel->midiBus, pitch);
}

// [func_0804b66c] AUDIO CHANNEL - Set Panning
void func_0804b66c(SoundPlayer *channel, u16 unused, s8 panning) {
    func_0804adb8(channel->midiBus, panning);
}

// [func_0804b67c] AUDIO CHANNEL - Pause Sound Sequence from Index
void func_0804b67c(u16 offset) {
    SongInfo *seqData = D_08aa06f8[offset].songInfo;
    u32 i;

    for (i = 0; i <= D_08aa4318; i++) {
        if ((D_08aa4324[i] != NULL) && (D_08aa4324[i]->songInfo == seqData)) {
            func_0804b5d8(D_08aa4324[i]);
        }
    }
}

// [func_0804b6c4] UTIL - String.equals()
u32 func_0804b6c4(MidiStream byteStream0, MidiStream byteStream1, u32 length) {
    u32 i;

    for (i = 0; i < length; i++) {
        if (byteStream0[i] != byteStream1[i]) return FALSE;
    }
    return TRUE;
}

// [func_0804b6f0] UTIL - Playback Speed Formula
u32 func_0804b6f0(u16 tempo, u16 speedEnv, u16 quarterNote) {
    return (u32) (tempo * speedEnv * quarterNote) / 0xe10;
}

// [func_0804b710] AUDIO CHANNEL - Align Channel Speed with BeatScript
void func_0804b710(SoundPlayer *channel, u16 speedEnv) {
    u32 speed;

    channel->speedMulti = speedEnv;
    speed = func_0804b6f0(channel->midiTempo, speedEnv, channel->midiQuarterNote);
    if (speed == 0) speed = 1;
    channel->channelSpeed = speed;
}

// [func_0804b734] AUDIO CHANNEL - Apply Volume Fade { type = 0..3 }
void func_0804b734(SoundPlayer *channel, u16 type, u16 time) {
    switch (type) {
        case 0: // Reset Fade
            channel->volumeFadeEnv = 0x8000;
            channel->volumeFadeSpd = 0;
            break;

        case 1: // Fade In
            if (time == 0) time = 1;
            if (channel->volumeFadeType == 0) channel->volumeFadeEnv = 0;
            channel->volumeFadeSpd = 0x8000 / time;
            channel->isPaused = 0;
            break;

        case 2: // Fade Out & Clear
        case 3: // Fade Out & Pause
            if (channel->volumeFadeType == 0) channel->volumeFadeEnv = 0x8000;
            if (time != 0) {
                channel->volumeFadeSpd = 0x8000 / time;
            } else {
                channel->volumeFadeEnv = 0;
                channel->volumeFadeSpd = 1;
                if (type == 2) {
                    type = 0;
                    func_0804b560(channel);
                } else {
                    func_0804b574(channel, 1);
                }
            }
            break;
    }
    channel->volumeFadeType = type;
}

// [func_0804b7dc] AUDIO CHANNEL - Volume Fade-Out & Clear
void func_0804b7dc(SoundPlayer *channel, u16 time) {
    func_0804b734(channel, 2, time);
}

// [func_0804b7ec] AUDIO CHANNEL - Volume Fade-Out & Pause
void func_0804b7ec(SoundPlayer *channel, u16 time) {
    func_0804b734(channel, 3, time);
}

// [func_0804b7fc] AUDIO CHANNEL - Volume Fade-In
void func_0804b7fc(SoundPlayer *channel, u16 time) {
    func_0804b734(channel, 1, time);
}


  //  //  //  //   MIDI SEQUENCE OPERATIONS   //  //  //  //


// [func_0804b80c] MIDI - System-Exclusive Message [Evnt_F0]
void func_0804b80c(SoundPlayer *channel, MidiStream stream) {
    MidiBus *mChnlBus = channel->midiBus;
    u8 type = *stream;
    u32 i;

    stream++;
    switch (type) {
        case 0:
            func_08049be4();
            D_03005b3c = 0;
            D_03005640 = stream[0] * 2;
            func_0804ae1c(&D_03005b30, stream[1] * 2, stream[2] * 2, stream[3] * 2, stream[4] * 2, stream[5] * 2);
            func_08049b8c(stream[6]);
            D_03005644 = channel;
            break;

        case 1:
            for (i = 0; i < 12; i++) {
                mChnlBus->unk1C[i] = stream[i] - 0x40;
            }
            break;
    }
}

// [func_0804b898] MIDI - Meta Event (Loop Start, Loop End, Track End, Set Tempo)
u32 func_0804b898(SoundPlayer *channel, MidiStream *upstream) {
    MidiStream stream = *upstream;
    u8 event = *stream;
    u32 length;
    u32 tempo;

    stream++;
    length = func_0804c398(&stream);
    *upstream = stream + length;

    switch (event) {
        // Text Marker
        case 0x06:
            if (length == channel->loopStartSymSize) {
                if (func_0804b6c4(channel->loopStartSym, stream, length))
                    return 2;
            }
            if (length == channel->loopEndSymSize) {
                if (func_0804b6c4(channel->loopEndSym, stream, length))
                    return 3;
            }
            return 0;

        // End of Track
        case 0x2F:
            return 1;

        // Set Tempo
        case 0x51:
            tempo = (u32) 60000000 / ((stream[0] << 0x10) | (stream[1] << 0x8) | stream[2]);
            channel->midiTempo = tempo;
            D_0300562c = func_0804b6f0(tempo, channel->speedMulti, channel->midiQuarterNote);
            return 0;

        // Else, do nothing.
        default:
            return 0;
    }
}

// [func_0804b95c] MIDI - Controller Change [Evnt_B]
void func_0804b95c(SoundPlayer *channel, u32 id, u8 ctrl, u8 var) {
    MidiBus *mChnlBus = channel->midiBus;

    switch (ctrl) {
        case 0x00: func_0804abc8(mChnlBus, id, var | 0x8000); break;
        case 0x01: func_0804ac40(mChnlBus, id, var); break;
        case 0x07: func_0804aa5c(mChnlBus, id, var); break;
        case 0x0A: func_0804aa7c(mChnlBus, id, var); break;
        case 0x0B: func_0804aba8(mChnlBus, id, var); break;
        case 0x14: func_0804ace4(mChnlBus, id, var); break;
        case 0x15: func_0804accc(mChnlBus, id, var); break;
        case 0x16: func_0804aca0(mChnlBus, id, var); break;
        case 0x1A: func_0804acd8(mChnlBus, id, var); break;
        case 0x20: func_0804abc8(mChnlBus, id, var); break;
        case 0x21: func_0804ad18(mChnlBus, id, var); break;
        case 0x0E: D_03005648 = var; break;
        case 0x10: if (D_03005648 < D_03005b20) D_03005b7c[D_03005648] = var; break;
        case 0x48: func_0804ac80(mChnlBus, id, var); break;
        case 0x49: D_03005b3c = var;
            switch (var) {
                case 0:
                case 1: func_0804ae60(&D_03005b30); break;
                case 2: func_08049be4(); func_0804ae54(&D_03005b30); break;
            } break;
        case 0x4A: D_03005b3c = 0;
            func_0804ae60(&D_03005b30);
            func_08049be4();
            func_08049b70((var * 2) - 0x80);
            break;
        case 0x4C: D_03005640 = var * 2; break;
        case 0x4D: func_08049b8c(var); break;
        case 0x4B: func_0804acf0(mChnlBus, id, var); break;
        case 0x4E: channel->midiController4E = var; break;
        case 0x4F: channel->midiController4F = var; break;
        case 0x50: channel->midiController50 = var; break;
        case 0x51: channel->midiController51 = var; break;
        case 0x52: func_0804ad38(mChnlBus, id, var); break;
        case 0x53: func_0804ad90(mChnlBus, id, var); break;
        case 0x54: func_0804ad9c(mChnlBus, id, var); break;
    }
}

// [func_0804bc5c] MIDI - Note Off/On [Evnt_8; Evnt_9]
void func_0804bc5c(u32 id, u32 key, u32 vel) {
    MidiNote *midiNote;

    if (D_03005b78 < 20) {
        midiNote = &D_03005650[D_03005b78++];
        midiNote->channel = id;
        midiNote->key = key;
        midiNote->velocity = vel;
    }
}

// [func_0804bcc0] MIDI - Messages/Events
u32 func_0804bcc0(SoundPlayer *channel, u32 id) {
    u32 trackEndType = 0;
    MidiReader *reader = &channel->midiReader[id];
    MidiReader *tempReader;
    MidiStream byteStream = reader->stream_curr;
    u8 command;
    u16 mod;
    u32 i;

    // ??
    command = byteStream[0];
    if ((command & 0x80) != 0) {
        reader->command_curr = command;
        byteStream++;
    }
    command = reader->command_curr;

    // MIDI Meta Events & System Messages
    if (command > 0xEF) {
        switch (command & 0x0F) {
            // MIDI System Exclusive Message (F0)
            case 0x00:
                i = func_0804c398(&byteStream);
                func_0804b80c(channel, byteStream);
                byteStream += i;
                break;

            // MIDI Meta Events (FF)
            case 0x0F:
                switch (func_0804b898(channel, &byteStream)) {
                    // End of Track
                    case 1:
                        func_0804accc(channel->midiBus, id, 0);
                        return 1;

                    // Marker: Loop Start
                    case 2:
                        if (channel->inLoop) break;
                        reader->active_loop = reader->active_curr;
                        reader->command_loop = reader->command_curr;
                        reader->stream_loop = byteStream;
                        reader->inLoop = 1;
                        channel->unk34 = reader->deltaTime;
                        channel->inLoop = 1;
                        break;

                    // Marker: Loop End
                    case 3:
                        if (!channel->inLoop) break;
                        for (i = 0; i < channel->nTracksUsed; i++) {
                            tempReader = &channel->midiReader[i];
                            tempReader->active_curr = tempReader->active_loop;
                            tempReader->command_curr = tempReader->command_loop;
                            if (reader == tempReader) {
                                byteStream = reader->stream_loop;
                            } else {
                                tempReader->stream_curr = tempReader->stream_loop;
                                tempReader->unkC = reader->unkC;
                            }
                            func_08049d30(channel->midiBus, i);
                        }
                        trackEndType = 2;
                        break;
                }
                break;

            // Else, do nothing.
            default:
                i = func_0804c398(&byteStream);
                byteStream += i;
                break;
        }
    }

    // MIDI Messages { 80, 90, A0, B0, C0, D0, E0 }
    else {
        switch (command & 0xF0) {
            // Note Off
            case 0x80:
                func_0804bc5c(id, byteStream[0], 0);
                byteStream += 2;
                break;

            // Note On
            case 0x90:
                func_0804bc5c(id, byteStream[0], byteStream[1]);
                byteStream += 2;
                break;

            // Polyphonic Key Pressure (Aftertouch) [Not Supported]
            case 0xA0:
                byteStream += 2;
                break;

            // MIDI Controller Change
            case 0xB0:
                func_0804b95c(channel, id, byteStream[0], byteStream[1]);
                byteStream += 2;
                break;

            // Program Change
            case 0xC0:
                func_0804ab88(channel->midiBus, id, byteStream[0]);
                byteStream += 1;
                break;

            // Channel Pressure (Aftertouch) [Not Supported]
            case 0xD0:
                byteStream += 1;
                break;

            // Pitch Wheel Change
            case 0xE0:
                mod = (byteStream[0] & 0x7f) | ((byteStream[1] & 0x7f) << 7);
                func_0804aa40(channel->midiBus, id, mod);
                byteStream += 2;
                break;
        }
    }

    // Close.
    reader->stream_curr = byteStream;
    return trackEndType;
}

// [func_0804bed0] ?? (something about speed and midi trackers and notes)
void func_0804bed0(SoundPlayer *channel, u32 id) {
    MidiReader *mTrkReader;
    MidiChannel *mChnl;
    MidiNote *note;
    u32 anyNotePlayed;
    u32 deltaTime;
    u32 i;

    mTrkReader = &channel->midiReader[id];
    if (!mTrkReader->active_curr) return;

    anyNotePlayed = FALSE;
    D_03005b78 = 0; // Reset "Current Note To Modify" counter.

    while (mTrkReader->unkC < channel->channelSpeed) {
        if (channel->inLoop && !mTrkReader->inLoop && (mTrkReader->deltaTime >= channel->unk34)) {
            mTrkReader->active_loop = mTrkReader->active_curr;
            mTrkReader->command_loop = mTrkReader->command_curr;
            mTrkReader->stream_loop = mTrkReader->stream_curr;
            mTrkReader->inLoop = TRUE;
        }

        if (func_0804bcc0(channel, id) == 1) {
            mTrkReader->active_curr = FALSE;
            func_08049d30(channel->midiBus, id);
            return;
        }

        deltaTime = func_0804c398(&mTrkReader->stream_curr);
        if (deltaTime != 0) {
            note = &D_03005650[0];
            i = 0;
            while (i < D_03005b78) {
                if (note->velocity != 0) { // Note has non-zero velocity.
                    func_0804a6b0(channel->midiBus, note->channel, note->key, note->velocity);
                    anyNotePlayed = TRUE;
                } else { // Note is muted.
                    func_0804a5b4(channel->midiBus, note->channel, note->key);
                }
                i++;
                note++;
            }
            D_03005b78 = 0; // Reset "Current Note To Modify" counter.
        }

        mTrkReader->unkC += (deltaTime << 8);
        mTrkReader->deltaTime += deltaTime;
    }

    mTrkReader->unkC -= channel->channelSpeed;

    // If any note had a non-zero velocity, and the given MIDI Channel's unk0_b30 is set:
    if (anyNotePlayed) {
        mChnl = &channel->midiBus->midiChannel[id];
        if (mChnl->unk0_b30 && (D_03005b3c == 1)) {
            func_08049be4();
            func_0804ae54(&D_03005b30);
        }
    }
}

// [func_0804c040] Apply Volume (Real-Time)
void func_0804c040(SoundPlayer *channel) {
    u32 volume;
    u32 volumeAsByte;

    switch (channel->volumeFadeType) {
        case 0: // Reset Fade / None
            break;
        case 1: // Fade In
            channel->volumeFadeEnv += channel->volumeFadeSpd;
            if ((s16) channel->volumeFadeEnv < 0) {
                channel->volumeFadeType = 0;
                channel->volumeFadeEnv = 0x8000;
                channel->volumeFadeSpd = 0;
            }
            break;
        case 2: // Fade Out & Clear
            if (channel->volumeFadeEnv < channel->volumeFadeSpd) {
                channel->volumeFadeType = 0;
                channel->volumeFadeEnv = 0;
                func_0804b560(channel); // Stop Channel
            } else {
                channel->volumeFadeEnv -= channel->volumeFadeSpd;
            }
            break;
        case 3: // Fade Out & Pause
            if (channel->volumeFadeEnv < channel->volumeFadeSpd) {
                channel->volumeFadeEnv = 0;
                func_0804b574(channel, TRUE); // Pause Channel
            } else {
                channel->volumeFadeEnv -= channel->volumeFadeSpd;
            }
            break;
    }

    volume = (channel->channelVolume * channel->channelGain * channel->volumeFadeEnv) >> 8;
    volumeAsByte = volume >> 15;
    if (volumeAsByte > 0xff) volumeAsByte = 0xff;
    func_0804adb4(channel->midiBus, volumeAsByte);

    volumeAsByte = ((volume >> 8) * channel->trackGain) >> 15;
    if (volumeAsByte > 0xff) volumeAsByte = 0xff;
    func_08049ec4(channel->midiBus, volumeAsByte, channel->trackSelect);
}

// [func_0804c0f8] ?? (relates to speed)
void func_0804c0f8(SoundPlayer *channel) {
    MidiReader *mTrkReader;
    u32 noActiveReader;
    u32 i;

    // If the Audio Channel is stopped or paused, do not proceed.
    if ((channel->songInfo == NULL) || channel->isPaused) return;

    D_0300562c = 0;

    // ???
    for (i = 0; i < channel->nTracksUsed; i++) {
        func_0804bed0(channel, i);
    }

    // If the above loop modifies the value of D_0300562c, apply to channel as speed envelope.
    if (D_0300562c != 0) channel->channelSpeed = D_0300562c;

    // Check if any MIDI Track Readers are currently operating.
    mTrkReader = channel->midiReader;
    noActiveReader = TRUE;
    for (i = 0; (i < channel->nTracksUsed) && noActiveReader; i++, mTrkReader++) {
        if (mTrkReader->active_curr) noActiveReader = FALSE;
    }

    // If none are active, remove the Sound Sequence from the Audio Channel.
    if (noActiveReader) channel->songInfo = NULL;
}

// [func_0804c170] MAIN UPDATE
void func_0804c170(void) {
    SoundPlayer *channel;
    u32 speed;
    u32 i;
    s32 rvb0 = D_03005b90[0];
    s32 rvb1 = D_03005b90[1];
    s32 rvb2 = D_03005b90[2];
    s32 rvb3 = D_03005b90[3];

    D_030055f0 = REG_VCOUNT;

    for (i = 0; i <= D_08aa4318; i++) {
        channel = D_08aa4324[i];
        if (channel != NULL) {
            func_0804c040(channel);
            func_0804c0f8(channel);
            func_08049d08(channel->midiBus);
            if (channel->songInfo != NULL) {
                rvb0 -= 0x80 - (channel->midiController4E * 2);
                rvb1 -= 0x40 - (channel->midiController4F);
                rvb2 -= 0x40 - (channel->midiController50);
                rvb3 -= 0x40 - (channel->midiController51);
            }
        }
    }

    channel = D_03001598;
    if ((D_08aa431c != 0) && (channel != NULL)) {
        func_0804c6c8();
        rvb0 -= 0x80 - (channel->midiController4E * 2);
        rvb1 -= 0x40 - (channel->midiController4F);
        rvb2 -= 0x40 - (channel->midiController50);
        rvb3 -= 0x40 - (channel->midiController51);
    }

    if ((D_03005644 != NULL) && (D_03005b3c != 0)) {
        speed = func_0804b6f0(D_03005644->midiTempo, D_03005644->speedMulti, 0x18);
        func_0804ae6c(&D_03005b30, speed);
        func_08049b70((D_03005b30.unk7 * D_03005640) >> 8);
    }

    func_0804a334();
    D_03005b80 = REG_VCOUNT;

    if (rvb0 < 0) rvb0 = 0;
    if (rvb0 > 0x7f) rvb0 = 0x7f;
    if (rvb1 < 0) rvb1 = 0;
    if (rvb1 > 0x7f) rvb1 = 0x7f;
    if (rvb2 < 0) rvb2 = 0;
    if (rvb2 > 0x7f) rvb2 = 0x7f;
    if (rvb3 < 0) rvb3 = 0;
    if (rvb3 > 0x7f) rvb3 = 0x7f;

    func_08049b34(rvb0, rvb1, rvb2, rvb3);
    func_080497f8();
}

// [func_0804c340] Set Reverb
void func_0804c340(u32 arg0, u32 arg1, u32 arg2, u32 arg3) {
    D_03005b90[0] = arg0;
    D_03005b90[1] = arg1;
    D_03005b90[2] = arg2;
    D_03005b90[3] = arg3;
}

// [func_0804c358] STUB
void func_0804c358(void) {
}

// [func_0804c35c] INITIALISE - Audio Channels
void func_0804c35c(SoundPlayer *channel, MidiBus *mChnlBus, u32 nTracksMax, MidiReader *mTrkReader, u32 type) {
    channel->songInfo = NULL;
    channel->midiBus = mChnlBus;
    channel->nTracksMax = nTracksMax;
    channel->midiReader = mTrkReader;
    channel->unk0_b21 = type;
    channel->channelVolume = 0x64;
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

// [func_0804c3c0] Initialise... an audio channel that don't exist.
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

#include "asm/agb_midi/asm_0804c4bc.s"

#include "asm/agb_midi/asm_0804c508.s"

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
    i = 0;
    while (i < D_03005b78) {
        if (note->velocity != 0) { // Note has non-zero velocity.
            func_0804a6b0(D_0300159c, note->channel, note->key, note->velocity);
            mChnl = &D_0300159c->midiChannel[note->channel];
            if (mChnl->unk0_b30 && (D_03005b3c == 1)) {
                anyNotePlayed = TRUE;
            }
        } else { // Note is muted.
            func_0804a5b4(D_0300159c, note->channel, note->key);
        }
        i++;
        note++;
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

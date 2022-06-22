  //  //  //  //   MIDI SEQUENCE OPERATIONS   //  //  //  //


// [func_0804b80c] MIDI STREAM - System-Exclusive Message [Evnt_F0]
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

// [func_0804b898] MIDI STREAM - Meta Event (Loop Start, Loop End, Track End, Set Tempo)
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

// [func_0804b95c] MIDI STREAM - Controller Change [Evnt_B]
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

// [func_0804bc5c] MIDI STREAM - Note Off/On [Evnt_8; Evnt_9]
void func_0804bc5c(u32 id, u32 key, u32 vel) {
    MidiNote *midiNote;

    if (D_03005b78 < 20) {
        midiNote = &D_03005650[D_03005b78++];
        midiNote->channel = id;
        midiNote->key = key;
        midiNote->velocity = vel;
    }
}

// [func_0804bcc0] MIDI STREAM - Messages/Events
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

// [func_0804bed0] MIDI STREAM - Update
void func_0804bed0(SoundPlayer *player, u32 id) {
    MidiReader *reader;
    MidiChannel *channel;
    MidiNote *note;
    u32 anyNotePlayed;
    u32 deltaTime;
    u32 i;

    reader = &player->midiReader[id];
    if (!reader->active_curr) return;

    anyNotePlayed = FALSE;
    D_03005b78 = 0; // Reset "Current Note To Modify" counter.

    while (reader->unkC < player->channelSpeed) {
        if (player->inLoop && !reader->inLoop && (reader->deltaTime >= player->unk34)) {
            reader->active_loop = reader->active_curr;
            reader->command_loop = reader->command_curr;
            reader->stream_loop = reader->stream_curr;
            reader->inLoop = TRUE;
        }

        if (func_0804bcc0(player, id) == 1) {
            reader->active_curr = FALSE;
            func_08049d30(player->midiBus, id);
            return;
        }

        deltaTime = func_0804c398(&reader->stream_curr);
        if (deltaTime != 0) {
            note = &D_03005650[0];

            for (i = 0; i < D_03005b78; i++, note++) {
                if (note->velocity != 0) { // Note has non-zero velocity.
                    func_0804a6b0(player->midiBus, note->channel, note->key, note->velocity);
                    anyNotePlayed = TRUE;
                } else { // Note is muted.
                    func_0804a5b4(player->midiBus, note->channel, note->key);
                }
            }
            D_03005b78 = 0; // Reset "Current Note To Modify" counter.
        }

        reader->unkC += (deltaTime << 8);
        reader->deltaTime += deltaTime;
    }

    reader->unkC -= player->channelSpeed;

    // If any note had a non-zero velocity, and the given MIDI Channel's unk0_b30 is set:
    if (anyNotePlayed) {
        channel = &player->midiBus->midiChannel[id];
        if (channel->unk0_b30 && (D_03005b3c == 1)) {
            func_08049be4();
            func_0804ae54(&D_03005b30);
        }
    }
}

// [func_0804c040] SOUND PLAYER - Update Volume
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

// [func_0804c0f8] SOUND PLAYER - Update MIDI Stream
void func_0804c0f8(SoundPlayer *channel) {
    MidiReader *mTrkReader;
    u32 noActiveReader;
    u32 i;

    // If the SoundPlayer is stopped or paused, do not proceed.
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

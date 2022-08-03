  //  //  //  //   MIDI SEQUENCE OPERATIONS   //  //  //  //


// [func_0804b80c] MIDI STREAM - System-Exclusive Message [Evnt_F0]
void func_0804b80c(SoundPlayer *soundPlayer, MidiStream stream) {
    MidiBus *midiBus = soundPlayer->midiBus;
    u8 type = *stream;
    u32 i;

    stream++;
    switch (type) {
        case SYS_EXC_EVENT_LFO: // EQ Filter Modulator
            equalizer_reset();
            gLowFreqOscMode = LFO_MODE_DISABLED;
            D_03005640 = stream[0] * 2;
            lfo_init(&gLowFreqOsc, stream[1] * 2, stream[2] * 2, stream[3] * 2, stream[4] * 2, stream[5] * 2);
            equalizer_set_high_gain(stream[6]);
            D_03005644 = soundPlayer;
            break;

        case SYS_EXC_EVENT_R_SCALE:
            for (i = 0; i < 12; i++) {
                midiBus->unk1C[i] = stream[i] - 64;
            }
            break;
    }
}

// [func_0804b898] MIDI STREAM - Meta Event (Loop Start, Loop End, Track End, Set Tempo)
u32 func_0804b898(SoundPlayer *soundPlayer, MidiStream *upstream) {
    MidiStream stream = *upstream;
    u8 event = *stream;
    u32 length;
    u32 tempo;

    stream++;
    length = midi_parse_variable_length(&stream);
    *upstream = stream + length;

    switch (event) {
        // Text Marker
        case META_TEXT_MARKER:
            if (length == soundPlayer->loopStartSymSize) {
                if (func_0804b6c4(soundPlayer->loopStartSym, stream, length))
                    return META_EVENT_LOOP_START;
            }
            if (length == soundPlayer->loopEndSymSize) {
                if (func_0804b6c4(soundPlayer->loopEndSym, stream, length))
                    return META_EVENT_LOOP_END;
            }
            return META_EVENT_OTHER;

        // End of Track
        case META_END_OF_TRACK:
            return META_EVENT_TRACK_END;

        // Set Tempo
        case META_SET_TEMPO:
            tempo = (u32) 60000000 / ((stream[0] << 0x10) | (stream[1] << 0x8) | stream[2]);
            soundPlayer->midiTempo = tempo;
            D_0300562c = midi_get_delta_time(tempo, soundPlayer->speedMulti, soundPlayer->midiQuarterNote);
            return META_EVENT_OTHER;

        // Else, do nothing.
        default:
            return META_EVENT_OTHER;
    }
}

// [func_0804b95c] MIDI STREAM - Controller Change [Evnt_B]
void func_0804b95c(SoundPlayer *soundPlayer, u32 id, u8 controller, u8 var) {
    MidiBus *midiBus = soundPlayer->midiBus;

    switch (controller) {
        case M_CONTROLLER_BANK_SELECT_MSB:
            midi_ch_set_bankselect(midiBus, id, var | 0x8000);
            break;

        case M_CONTROLLER_MOD_DEPTH:
            midi_ch_set_mod_depth(midiBus, id, var);
            break;

        case M_CONTROLLER_VOLUME:
            midi_ch_set_volume(midiBus, id, var);
            break;

        case M_CONTROLLER_PANNING:
            midi_ch_set_panning(midiBus, id, var);
            break;

        case M_CONTROLLER_EXPRESSION:
            midi_ch_set_expression(midiBus, id, var);
            break;

        case M_CONTROLLER_MOD_RANGE:
            midi_ch_set_mod_range(midiBus, id, var);
            break;

        case M_CONTROLLER_MOD_SPEED:
            midi_ch_set_mod_speed(midiBus, id, var);
            break;

        case M_CONTROLLER_MOD_TYPE:
            midi_ch_set_mod_type(midiBus, id, var);
            break;

        case M_CONTROLLER_MOD_DELAY:
            midi_ch_set_mod_delay(midiBus, id, var);
            break;

        case M_CONTROLLER_BANK_SELECT_LSB:
            midi_ch_set_bankselect(midiBus, id, var);
            break;

        case M_CONTROLLER_PRIORITY:
            midi_ch_set_priority(midiBus, id, var);
            break;

        case M_CONTROLLER_UNK_0E:
            D_03005648 = var;
            break;

        case M_CONTROLLER_UNK_10:
            if (D_03005648 < D_03005b20) {
                D_03005b7c[D_03005648] = var;
            }
            break;

        case M_CONTROLLER_DAMPEN:
            midi_ch_set_eq(midiBus, id, var);
            break;

        case M_CONTROLLER_LFO: // Set LFO
            gLowFreqOscMode = var;
            switch (var) {
                case LFO_MODE_DISABLED:
                case LFO_MODE_KEYPRESS: // Stop
                    lfo_stop(&gLowFreqOsc);
                    break;
                case LFO_MODE_CONSTANT: // Start
                    equalizer_reset();
                    lfo_start(&gLowFreqOsc);
                    break;
            }
            break;

        case M_CONTROLLER_EQ: // Set Filter EQ
            gLowFreqOscMode = LFO_MODE_DISABLED;
            lfo_stop(&gLowFreqOsc);
            equalizer_reset();
            equalizer_set_level((var * 2) - 0x80);
            break;

        case M_CONTROLLER_LFO_GAIN: // Set LFO Multiplier
            D_03005640 = var * 2;
            break;

        case M_CONTROLLER_EQ_GAIN: // Set Filter EQ High Gain
            equalizer_set_high_gain(var);
            break;

        case M_CONTROLLER_STEREO:
            midi_ch_set_stereo(midiBus, id, var);
            break;

        case M_CONTROLLER_RVB1:
            soundPlayer->midiController4E = var;
            break;

        case M_CONTROLLER_RVB2:
            soundPlayer->midiController4F = var;
            break;

        case M_CONTROLLER_RVB3:
            soundPlayer->midiController50 = var;
            break;

        case M_CONTROLLER_RVB4:
            soundPlayer->midiController51 = var;
            break;

        case M_CONTROLLER_RANDOM_PITCH:
            midi_ch_set_random_key(midiBus, id, var);
            break;

        case M_CONTROLLER_RANDOM_53:
            midi_ch_set_random_53(midiBus, id, var);
            break;

        case M_CONTROLLER_RANDOM_54:
            midi_ch_set_random_54(midiBus, id, var);
            break;
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
u32 func_0804bcc0(SoundPlayer *soundPlayer, u32 id) {
    u32 trackEndType = M_TRACK_STREAM_CONTINUE;
    MidiTrackStream *reader = &soundPlayer->midiReader[id];
    MidiTrackStream *tempReader;
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
    if (command >= 0xF0) {
        switch (command & 0x0F) {
            // MIDI System Exclusive Message (F0)
            case 0x00:
                i = midi_parse_variable_length(&byteStream);
                func_0804b80c(soundPlayer, byteStream);
                byteStream += i;
                break;

            // MIDI Meta Events (FF)
            case 0x0F:
                switch (func_0804b898(soundPlayer, &byteStream)) {
                    // End of Track
                    case META_EVENT_TRACK_END:
                        midi_ch_set_mod_speed(soundPlayer->midiBus, id, 0);
                        return M_TRACK_STREAM_STOP;

                    // Marker: Loop Start
                    case META_EVENT_LOOP_START:
                        if (soundPlayer->inLoop) break;
                        reader->active_loop = reader->active_curr;
                        reader->command_loop = reader->command_curr;
                        reader->stream_loop = byteStream;
                        reader->inLoop = TRUE;
                        soundPlayer->unk34 = reader->runningTime;
                        soundPlayer->inLoop = TRUE;
                        break;

                    // Marker: Loop End
                    case META_EVENT_LOOP_END:
                        if (!soundPlayer->inLoop) break;
                        for (i = 0; i < soundPlayer->nTracksUsed; i++) {
                            tempReader = &soundPlayer->midiReader[i];
                            tempReader->active_curr = tempReader->active_loop;
                            tempReader->command_curr = tempReader->command_loop;
                            if (reader == tempReader) {
                                byteStream = reader->stream_loop;
                            } else {
                                tempReader->stream_curr = tempReader->stream_loop;
                                tempReader->unkC = reader->unkC;
                            }
                            midi_ch_stop_note(soundPlayer->midiBus, i);
                        }
                        trackEndType = M_TRACK_STREAM_LOOP;
                        break;
                }
                break;

            // Else, do nothing.
            default:
                i = midi_parse_variable_length(&byteStream);
                byteStream += i;
                break;
        }
    }

    // MIDI Messages { 80, 90, A0, B0, C0, D0, E0 }
    else {
        switch (command & 0xF0) {
            // Note Off
            case MSG_NOTE_OFF:
                func_0804bc5c(id, byteStream[0], 0);
                byteStream += 2;
                break;

            // Note On
            case MSG_NOTE_ON:
                func_0804bc5c(id, byteStream[0], byteStream[1]);
                byteStream += 2;
                break;

            // Polyphonic Key Pressure (Aftertouch) [Not Supported]
            case MSG_POLYPHONIC_KEY_PRESSURE:
                byteStream += 2;
                break;

            // MIDI Controller Change
            case MSG_CONTROLLER_CHANGE:
                func_0804b95c(soundPlayer, id, byteStream[0], byteStream[1]);
                byteStream += 2;
                break;

            // Program Change
            case MSG_PROGRAM_CHANGE:
                midi_ch_set_patch(soundPlayer->midiBus, id, byteStream[0]);
                byteStream += 1;
                break;

            // Channel Pressure (Aftertouch) [Not Supported]
            case MSG_CHANNEL_PRESSURE:
                byteStream += 1;
                break;

            // Pitch Wheel Change
            case MSG_PITCH_WHEEL_CHANGE:
                mod = (byteStream[0] & 0x7f) | ((byteStream[1] & 0x7f) << 7);
                midi_ch_set_pitch(soundPlayer->midiBus, id, mod);
                byteStream += 2;
                break;
        }
    }

    // Close.
    reader->stream_curr = byteStream;
    return trackEndType;
}

// [func_0804bed0] MIDI STREAM - Update
void func_0804bed0(SoundPlayer *soundPlayer, u32 id) {
    MidiTrackStream *reader;
    MidiChannel *channel;
    MidiNote *note;
    u32 anyNotePlayed;
    u32 delta;
    u32 i;

    reader = &soundPlayer->midiReader[id];
    if (!reader->active_curr) return;

    anyNotePlayed = FALSE;
    D_03005b78 = 0; // Reset "Current Note To Modify" counter.

    while (reader->unkC < soundPlayer->deltaTime) {
        if (soundPlayer->inLoop && !reader->inLoop && (reader->runningTime >= soundPlayer->unk34)) {
            reader->active_loop = reader->active_curr;
            reader->command_loop = reader->command_curr;
            reader->stream_loop = reader->stream_curr;
            reader->inLoop = TRUE;
        }

        if (func_0804bcc0(soundPlayer, id) == M_TRACK_STREAM_STOP) {
            reader->active_curr = FALSE;
            midi_ch_stop_note(soundPlayer->midiBus, id);
            return;
        }

        delta = midi_parse_variable_length(&reader->stream_curr);
        if (delta != 0) {
            note = &D_03005650[0];

            for (i = 0; i < D_03005b78; i++, note++) {
                if (note->velocity != 0) { // Note has non-zero velocity.
                    midi_note_on(soundPlayer->midiBus, note->channel, note->key, note->velocity);
                    anyNotePlayed = TRUE;
                } else { // Note is muted.
                    midi_note_off(soundPlayer->midiBus, note->channel, note->key);
                }
            }
            D_03005b78 = 0; // Reset "Current Note To Modify" counter.
        }

        reader->unkC += Q24(delta);
        reader->runningTime += delta;
    }

    reader->unkC -= soundPlayer->deltaTime;

    // Use Filter EQ with LFO
    if (anyNotePlayed) {
        channel = &soundPlayer->midiBus->midiChannel[id];
        if (channel->filterEQ && (gLowFreqOscMode == LFO_MODE_KEYPRESS)) {
            equalizer_reset();
            lfo_start(&gLowFreqOsc);
        }
    }
}

// [func_0804c040] SOUND PLAYER - Update Volume
void soundplayer_update_volume(SoundPlayer *soundPlayer) {
    u32 volume;
    u32 volumeAsByte;

    switch (soundPlayer->volumeFadeType) {
        case VOL_FADE_RESET: // Reset Fade / None
            break;
        case VOL_FADE_IN: // Fade In
            soundPlayer->volumeFadeEnv += soundPlayer->volumeFadeSpd;
            if ((s16) soundPlayer->volumeFadeEnv < 0) {
                soundPlayer->volumeFadeType = VOL_FADE_RESET;
                soundPlayer->volumeFadeEnv = 0x8000;
                soundPlayer->volumeFadeSpd = 0;
            }
            break;
        case VOL_FADE_OUT_CLEAR: // Fade Out & Clear
            if (soundPlayer->volumeFadeEnv < soundPlayer->volumeFadeSpd) {
                soundPlayer->volumeFadeType = VOL_FADE_RESET;
                soundPlayer->volumeFadeEnv = 0;
                soundplayer_stop(soundPlayer); // Stop Channel
            } else {
                soundPlayer->volumeFadeEnv -= soundPlayer->volumeFadeSpd;
            }
            break;
        case VOL_FADE_OUT_PAUSE: // Fade Out & Pause
            if (soundPlayer->volumeFadeEnv < soundPlayer->volumeFadeSpd) {
                soundPlayer->volumeFadeEnv = 0;
                soundplayer_set_pause(soundPlayer, TRUE); // Pause Channel
            } else {
                soundPlayer->volumeFadeEnv -= soundPlayer->volumeFadeSpd;
            }
            break;
    }

    volume = Q24_TO_INT(soundPlayer->channelVolume * soundPlayer->channelGain * soundPlayer->volumeFadeEnv);
    volumeAsByte = volume >> 15;
    Ceil(volumeAsByte, 0xff);
    midi_bus_set_vol(soundPlayer->midiBus, volumeAsByte);

    volumeAsByte = ((volume >> 8) * soundPlayer->trackGain) >> 15;
    Ceil(volumeAsByte, 0xff);
    midi_bus_set_track_gain(soundPlayer->midiBus, volumeAsByte, soundPlayer->trackSelect);
}

// [func_0804c0f8] SOUND PLAYER - Update MIDI Stream
void soundplayer_update_stream(SoundPlayer *soundPlayer) {
    MidiTrackStream *mTrkReader;
    u32 noActiveReader;
    u32 i;

    // If the SoundPlayer is stopped or paused, do not proceed.
    if ((soundPlayer->songInfo == NULL) || soundPlayer->isPaused) return;

    D_0300562c = 0;

    // ???
    for (i = 0; i < soundPlayer->nTracksUsed; i++) {
        func_0804bed0(soundPlayer, i);
    }

    // If the above loop modifies the value of D_0300562c, apply to channel as speed envelope.
    if (D_0300562c != 0) soundPlayer->deltaTime = D_0300562c;

    // Check if any MIDI Track Readers are currently operating.
    mTrkReader = soundPlayer->midiReader;
    noActiveReader = TRUE;
    for (i = 0; (i < soundPlayer->nTracksUsed) && noActiveReader; i++, mTrkReader++) {
        if (mTrkReader->active_curr) noActiveReader = FALSE;
    }

    // If none are active, remove the Sound Sequence from the Audio Channel.
    if (noActiveReader) soundPlayer->songInfo = NULL;
}

// [func_0804c170] MAIN UPDATE
void midi4a_main(void) {
    SoundPlayer *soundPlayer;
    u32 delta;
    u32 i;
    s32 rvb0 = D_03005b90[0];
    s32 rvb1 = D_03005b90[1];
    s32 rvb2 = D_03005b90[2];
    s32 rvb3 = D_03005b90[3];

    D_030055f0 = REG_VCOUNT;

    // Standard Sound Players
    for (i = 0; i <= gMidiPlayerCount; i++) {
        soundPlayer = gSoundPlayers[i];
        if (soundPlayer != NULL) {
            soundplayer_update_volume(soundPlayer);
            soundplayer_update_stream(soundPlayer);
            midi_ch_update_mod_all(soundPlayer->midiBus);
            if (soundPlayer->songInfo != NULL) {
                rvb0 -= (64 * 2) - (soundPlayer->midiController4E * 2);
                rvb1 -= 64 - soundPlayer->midiController4F;
                rvb2 -= 64 - soundPlayer->midiController50;
                rvb3 -= 64 - soundPlayer->midiController51;
            }
        }
    }

    // Special Sound Player
    soundPlayer = D_03001598;
    if ((gDirectMidiPlayerHasData != 0) && (soundPlayer != NULL)) {
        directmidi_update();
        rvb0 -= (64 * 2) - (soundPlayer->midiController4E * 2);
        rvb1 -= 64 - soundPlayer->midiController4F;
        rvb2 -= 64 - soundPlayer->midiController50;
        rvb3 -= 64 - soundPlayer->midiController51;
    }

    if ((D_03005644 != NULL) && (gLowFreqOscMode != LFO_MODE_DISABLED)) {
        delta = midi_get_delta_time(D_03005644->midiTempo, D_03005644->speedMulti, 0x18);
        lfo_update(&gLowFreqOsc, delta);
        equalizer_set_level(Q24_TO_INT(gLowFreqOsc.output * D_03005640));
    }

    midi_note_update_all();
    D_03005b80 = REG_VCOUNT;

    Clamp(rvb0, 0, 127);
    Clamp(rvb1, 0, 127);
    Clamp(rvb2, 0, 127);
    Clamp(rvb3, 0, 127);

    directsound_set_reverb(rvb0, rvb1, rvb2, rvb3);
    directsound_update();
}

// [func_0804c340] Set Reverb
void midi4a_set_reverb(u32 rvb0, u32 rvb1, u32 rvb2, u32 rvb3) {
    D_03005b90[0] = rvb0;
    D_03005b90[1] = rvb1;
    D_03005b90[2] = rvb2;
    D_03005b90[3] = rvb3;
}

// [func_0804c358] STUB
void midi4a_stub(void) {
}

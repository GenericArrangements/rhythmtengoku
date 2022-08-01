  //  //  //  //   SOUND PLAYER OPERATIONS   //  //  //  //


// [func_0804b324] SOUND PLAYER - Parse 16-bit Big Endian value in Byte Stream.
u16 soundplayer_parse_be16(MidiStream stream) {
    return (stream[0] << 8) | stream[1];
}

// [func_0804b330] SOUND PLAYER - Parse 32-bit Big Endian value in Byte Stream.
u32 soundplayer_parse_be32(MidiStream stream) {
    return (stream[0]) << 0x18 | (stream[1]) << 0x10 | (stream[2]) << 8 | stream[3];
}

// [func_0804b348] SOUND PLAYER - Loop Marker Symbol Length
u32 soundplayer_get_loop_sym_size(const char *label) {
    u8 i;

    for (i = 0; label[i] != '\0'; i++);
    return i;
}

// [func_0804b368] SOUND PLAYER - Store Sound Sequence
void soundplayer_play(SoundPlayer *soundPlayer, const SongInfo *song) {
    MidiBus *midiBus;
    MidiTrackStream *mTrkReader;
    MidiStream mTrkStream;
    MidiStream mTrkStart;
    u32 chunkLength;
    u32 trackTotal;
    u32 deltaTime;
    u32 i;

    // Reading Sequence Data:
    if (soundplayer_is_playing(soundPlayer)) {
        if (soundPlayer->playerType && !soundPlayer->isPaused) {
            if (soundPlayer->songInfo->priority > song->priority) return;
        }
    }

    midiBus = soundPlayer->midiBus;
    func_08049e64(midiBus);
    func_08049fa0(midiBus, midiBus->totalChannels, midiBus->midiChannel);
    func_0804a014(midiBus, gInstrumentBanks[song->soundBank]);
    func_0804adb4(midiBus, song->volume);
    func_08049e8c(midiBus, song->priority);
    soundPlayer->songInfo = song;
    soundPlayer->channelVolume = song->volume;

    // Reading MIDI Data:
    mTrkStream = song->midiSequence;

    // Header:
    mTrkStream += 4; // Skip (Header: "MThd")
    chunkLength = soundplayer_parse_be32(mTrkStream);
    mTrkStream += 4; // Skip (Header: Length)
    trackTotal = soundplayer_parse_be16(mTrkStream + 2); // Header: Number of MIDI Tracks
    soundPlayer->nTracksUsed = trackTotal;

    if (soundPlayer->nTracksUsed > soundPlayer->nTracksMax) {
        soundPlayer->nTracksUsed = soundPlayer->nTracksMax;
    }
    soundPlayer->midiQuarterNote = soundplayer_parse_be16(mTrkStream + 4); // Header: Division
    mTrkStream += chunkLength; // Skip (Header: Data)

    // Track:
    mTrkReader = soundPlayer->midiReader;
    for (i = 0; i < soundPlayer->nTracksUsed; i++) {
        mTrkStream += 4; // Skip (Track: Header)
        chunkLength = soundplayer_parse_be32(mTrkStream);
        mTrkStream += 4; // Skip (Track: Length)
        mTrkStart = mTrkStream;
        mTrkStream += chunkLength;
        mTrkReader->active_curr = TRUE;
        mTrkReader->stream_start = mTrkStart;
        deltaTime = midi_parse_variable_length(&mTrkStart);
        mTrkReader->unkC = Q24(deltaTime);
        mTrkReader->stream_curr = mTrkStart;
        mTrkReader->runningTime = deltaTime;
        mTrkReader->active_loop = FALSE;
        mTrkReader->inLoop = FALSE;
        mTrkReader++;
    }

    // Other Data:
    soundPlayer->inLoop = FALSE;
    soundPlayer->isPaused = FALSE;
    soundPlayer->deltaTime = 1;
    soundPlayer->channelGain = Q24(1.0);
    soundPlayer->speedMulti = Q24(1.0);
    soundPlayer->trackGain = Q24(1.0);
    soundPlayer->volumeFadeType = 0;
    soundPlayer->volumeFadeEnv = 0x8000;
    soundPlayer->volumeFadeSpd = 0;
    soundPlayer->loopStartSym = &gMidiLoopStartSym[0];
    soundPlayer->loopStartSymSize = soundplayer_get_loop_sym_size(gMidiLoopStartSym);
    soundPlayer->loopEndSym = &gMidiLoopEndSym[0];
    soundPlayer->loopEndSymSize = soundplayer_get_loop_sym_size(gMidiLoopEndSym);
    soundPlayer->midiController4E = 64;
    soundPlayer->midiController4F = 64;
    soundPlayer->midiController50 = 64;
    soundPlayer->midiController51 = 64;
    soundPlayer->unk34 = 0;
}

// [func_0804b534] SOUND PLAYER - Load & Store Sound Sequence from Index
void soundplayer_play_id(u16 index) {
    SoundPlayer *soundPlayer;
    const SongInfo *song;

    soundPlayer = gSoundPlayerList[gSongTable[index].playerNum].soundPlayer;
    song = gSongTable[index].songInfo;
    soundplayer_play(soundPlayer, song);
}

// [func_0804b560] SOUND PLAYER - Remove Sound Sequence
void soundplayer_stop(SoundPlayer *soundPlayer) {
    func_08049e3c(soundPlayer->midiBus);
    soundPlayer->songInfo = NULL;
}

// [func_0804b574] SOUND PLAYER - Pause/Unpause Sound Sequence { 0 = Unpause; 1 = Pause }
void soundplayer_set_pause(SoundPlayer *soundPlayer, u8 pause) {
    soundPlayer->isPaused = pause;
    if (pause) func_08049e64(soundPlayer->midiBus);
}

// [func_0804b5a0] SOUND PLAYER - Check for Active MIDI Readers
u32 soundplayer_is_playing(SoundPlayer *soundPlayer) {
    u32 i;

    if (soundPlayer->songInfo == NULL) return FALSE;
    for (i = 0; i < soundPlayer->nTracksUsed; i++) {
        if (soundPlayer->midiReader[i].active_curr) return TRUE;
    }
    return FALSE;
}

// [func_0804b5d8] SOUND PLAYER - Pause Channel
void soundplayer_pause(SoundPlayer *soundPlayer) {
    soundplayer_set_pause(soundPlayer, TRUE);
}

// [func_0804b5e4] SOUND PLAYER - Unpause Channel
void soundplayer_unpause(SoundPlayer *soundPlayer) {
    soundplayer_set_pause(soundPlayer, FALSE);
}

// [func_0804b5f0] SOUND PLAYER - Pause All Channels
void soundplayer_pause_all(void) {
    u32 i;

    for (i = 0; i <= gMidiPlayerCount; i++) {
        soundplayer_set_pause(gSoundPlayers[i], TRUE);
    }
}

// [func_0804b620] SOUND PLAYER - Unpause All Channels
void soundplayer_unpause_all(void) {
    u32 i;

    for (i = 0; i <= gMidiPlayerCount; i++) {
        soundplayer_set_pause(gSoundPlayers[i], FALSE);
    }
}

// [func_0804b650] SOUND PLAYER - Set Gain (Volume)
void soundplayer_set_gain(SoundPlayer *soundPlayer, u16 gain) {
    soundPlayer->channelGain = gain;
}

// [func_0804b654] SOUND PLAYER - Set Gain (Volume) for Selected Tracks
void soundplayer_set_track_gain(SoundPlayer *soundPlayer, u16 tracks, u16 gain) {
    soundPlayer->trackGain = gain;
    soundPlayer->trackSelect = tracks;
}

// [func_0804b65c] SOUND PLAYER - Set Pitch
void soundplayer_set_pitch(SoundPlayer *soundPlayer, u16 unused, s16 pitch) {
    func_0804ade4(soundPlayer->midiBus, pitch);
}

// [func_0804b66c] SOUND PLAYER - Set Panning
void soundplayer_set_panning(SoundPlayer *soundPlayer, u16 unused, s8 panning) {
    func_0804adb8(soundPlayer->midiBus, panning);
}

// [func_0804b67c] SOUND PLAYER - Pause Sound Sequence from Index
void soundplayer_pause_id(u16 offset) {
    const SongInfo *song = gSongTable[offset].songInfo;
    u32 i;

    for (i = 0; i <= gMidiPlayerCount; i++) {
        if ((gSoundPlayers[i] != NULL) && (gSoundPlayers[i]->songInfo == song)) {
            soundplayer_pause(gSoundPlayers[i]);
        }
    }
}

// [func_0804b6c4] MIDI STREAM - Stream.equals()
u32 func_0804b6c4(MidiStream stream0, MidiStream stream1, u32 length) {
    u32 i;

    for (i = 0; i < length; i++) {
        if (stream0[i] != stream1[i]) return FALSE;
    }
    return TRUE;
}

// [func_0804b6f0] SOUND PLAYER - Get MIDI Ticks Per Frame
u32 midi_get_delta_time(u16 tempo, u16 multiplier, u16 quarterNote) {
    return (u32) (tempo * multiplier * quarterNote) / (60 * 60);
}

// [func_0804b710] SOUND PLAYER - Align Channel Speed with BeatScript
void soundplayer_set_speed(SoundPlayer *soundPlayer, u16 multiplier) {
    u32 delta;

    soundPlayer->speedMulti = multiplier;
    delta = midi_get_delta_time(soundPlayer->midiTempo, multiplier, soundPlayer->midiQuarterNote);
    if (delta == 0) delta = 1;
    soundPlayer->deltaTime = delta;
}

// [func_0804b734] SOUND PLAYER - Apply Volume Fade { type = 0..3 }
void soundplayer_set_fade(SoundPlayer *soundPlayer, u16 type, u16 duration) {
    switch (type) {
        case VOL_FADE_RESET: // Reset Fade
            soundPlayer->volumeFadeEnv = 0x8000;
            soundPlayer->volumeFadeSpd = 0;
            break;

        case VOL_FADE_IN: // Fade In
            if (duration == 0) duration = 1;
            if (soundPlayer->volumeFadeType == 0) soundPlayer->volumeFadeEnv = 0;
            soundPlayer->volumeFadeSpd = 0x8000 / duration;
            soundPlayer->isPaused = FALSE;
            break;

        case VOL_FADE_OUT_CLEAR: // Fade Out & Clear
        case VOL_FADE_OUT_PAUSE: // Fade Out & Pause
            if (soundPlayer->volumeFadeType == VOL_FADE_RESET) soundPlayer->volumeFadeEnv = 0x8000;
            if (duration != 0) {
                soundPlayer->volumeFadeSpd = 0x8000 / duration;
            } else {
                soundPlayer->volumeFadeEnv = 0;
                soundPlayer->volumeFadeSpd = 1;
                if (type == VOL_FADE_OUT_CLEAR) {
                    type = VOL_FADE_RESET;
                    soundplayer_stop(soundPlayer);
                } else {
                    soundplayer_set_pause(soundPlayer, TRUE);
                }
            }
            break;
    }
    soundPlayer->volumeFadeType = type;
}

// [func_0804b7dc] SOUND PLAYER - Volume Fade-Out & Clear
void soundplayer_fadeout_stop(SoundPlayer *soundPlayer, u16 duration) {
    soundplayer_set_fade(soundPlayer, VOL_FADE_OUT_CLEAR, duration);
}

// [func_0804b7ec] SOUND PLAYER - Volume Fade-Out & Pause
void soundplayer_fadeout_pause(SoundPlayer *soundPlayer, u16 duration) {
    soundplayer_set_fade(soundPlayer, VOL_FADE_OUT_PAUSE, duration);
}

// [func_0804b7fc] SOUND PLAYER - Volume Fade-In
void soundplayer_fadein(SoundPlayer *soundPlayer, u16 duration) {
    soundplayer_set_fade(soundPlayer, VOL_FADE_IN, duration);
}

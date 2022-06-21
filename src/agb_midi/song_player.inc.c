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

  //  //  //  //   MIDI BUS UPDATE OPERATIONS   //  //  //  //


// [func_08049c34] MIDI CHANNEL - Update Modulation
#include "asm/midi4a/asm_08049c34.s"

// [func_08049d08] MIDI BUS - Update Modulation
void func_08049d08(MidiBus *midiBus) {
    u32 i;

    for (i = 0; i < midiBus->totalChannels; i++) {
        func_08049c34(midiBus, i);
    }
}

// [func_08049d30] MIDI CHANNEL - Update Sound Buffer for 'Note Cut' Event
void func_08049d30(MidiBus *midiBus, u32 id) {
    MidiChannel *mChnl = &midiBus->midiChannel[id];
    u32 i;

    if (mChnl->volumeWheel == 0) {
        func_08049db8(midiBus, id);
        return;
    }
    for (i = 0; i < D_03005b8c; i++) {
        if (D_030064bc[i].active && (D_030064bc[i].midiChannel == mChnl)) {
            D_030064bc[i].adsr.stage = ADSR_STAGE_FORCE_STOP;
        }
    }
    for (i = 0; i < 4; i++) {
        if (D_030056a0[i].active && (D_030056a0[i].midiChannel == mChnl)) {
            D_030056a0[i].adsr.stage = ADSR_STAGE_FORCE_STOP;
        }
    }
}

// [func_08049db8] MIDI CHANNEL - Close Sound Buffer
void func_08049db8(MidiBus *midiBus, u32 id) {
    MidiChannel *mChnl = &midiBus->midiChannel[id];
    u32 i;

    for (i = 0; i < D_03005b8c; i++) {
        if (D_030064bc[i].active && (D_030064bc[i].midiChannel == mChnl)) {
            D_030064bc[i].active = FALSE;
            func_080493b0(i);
        }
    }
    for (i = 0; i < 4; i++) {
        if (D_030056a0[i].active && (D_030056a0[i].midiChannel == mChnl)) {
            D_030056a0[i].adsr.stage = ADSR_STAGE_RELEASE;
            D_030056a0[i].adsr.envelope = 0;
        }
    }
}

// [func_08049e3c] MIDI BUS - Update All Sound Buffers for 'Note Cut' Event
void func_08049e3c(MidiBus *midiBus) {
    u32 i;

    for (i = 0; i < midiBus->totalChannels; i++) {
        func_08049d30(midiBus, i);
    }
}

// [func_08049e64] MIDI BUS - Close All Sound Buffers
void func_08049e64(MidiBus *midiBus) {
    u32 i;
    for (i = 0; i < midiBus->totalChannels; i++) {
        func_08049db8(midiBus, i);
    }
}


  //  //  //  //   MIDI BUS INITIALISATION OPERATIONS   //  //  //  //


// [func_08049e8c] MIDI BUS - Set Priority
void func_08049e8c(MidiBus *midiBus, u8 priority) {
    u32 i;

    midiBus->priority = priority;
    for (i = 0; i < midiBus->totalChannels; i++) {
        func_0804ad18(midiBus, i, 0);
    }
}

// [func_08049ec4] MIDI BUS - Set Selected Track Volume & Track Selection
void func_08049ec4(MidiBus *midiBus, u8 volume, u16 selection) {
    midiBus->trackVolume = volume;
    midiBus->trackSelect = selection;
}

// [func_08049ecc] MIDI CHANNEL - Initialise
void func_08049ecc(MidiChannel *mChnl) {
    mChnl->unk0_b0 = FALSE;
    mChnl->unk0_b1 = FALSE;
    mChnl->instPatch = 0;
    mChnl->unk0_b9 = 0;
    mChnl->volume = 100;
    mChnl->panning = 64;
    mChnl->expression = 127;
    mChnl->unk4_b21 = 0;
    mChnl->modDepth = 0;
    mChnl->modType = 0;
    mChnl->unkC = 1;
    mChnl->modSpeed = (60 << 8);
    mChnl->modCount = 0;
    mChnl->modDelay = 0;
    mChnl->modDelayCount = 0;
    mChnl->modResult = 0;
    mChnl->pitchWheel = 0x2000;
    mChnl->modRange = 2;
    mChnl->priority = 0;
    mChnl->unk0_b30 = FALSE;
    mChnl->stereo = FALSE;
    mChnl->rndmPitch = 0x100;
    mChnl->rndmPitchFloor = 0x100;
    mChnl->rndmPitchRange = 0;
    mChnl->unk1C = 0;
    mChnl->unk1D = 0;
    mChnl->unk1E = 0;
}

// [func_08049fa0] MIDI BUS - Initialise
void func_08049fa0(MidiBus *midiBus, u32 totalChannels, MidiChannel *mChnl) {
    u32 i;

    midiBus->busVolume = 100;
    midiBus->trackVolume = 100;
    midiBus->trackSelect = 0;
    midiBus->key = 0;
    midiBus->panning = 0;
    midiBus->pitch = 0;
    midiBus->unk8 = 0x1400;
    midiBus->tuningTable = gMidiTuningTable;

    midiBus->totalChannels = totalChannels;
    midiBus->midiChannel = mChnl;
    for (i = 0; i < totalChannels; i++) {
        func_08049ecc(&mChnl[i]);
    }

    midiBus->priority = 0;
    for (i = 0; i < 12; i++) {
        midiBus->unk1C[i] = 0;
    }
}

// [func_0804a014] MIDI BUS - Set Sound Bank
void func_0804a014(MidiBus *midiBus, const union Instrument *instBank) {
    midiBus->soundBank = instBank;
}


  //  //  //  //   SOUND CHANNEL OPERATIONS   //  //  //  //


// [func_0804a018] SOUND CHANNEL - Update & Calculate Pitch Envelope
u32 func_0804a018(SoundChannel *sndChnl) {
    MidiBus *midiBus;
    MidiChannel *mChnl;
    s32 freq;
    u32 modRange;
    u32 unk1C;
    s32 r5;
    u32 r8;
    u32 r0;
    u32 r3;
    s32 index;
    s32 what;

    // Do not calculate pitch envelope for unpitched instruments.
    if (sndChnl->instrument.pcm->type == INSTRUMENT_PCM_FIXED) return 0;

    midiBus = sndChnl->midiBus;
    mChnl = sndChnl->midiChannel;
    freq = sndChnl->frequency;

    // If... whatever this flag is, bypass all pitch envelopes, returning sndChnl->frequency.
    if (mChnl->unk0_b1) return freq;

    // Pitch Envelope: ???
    unk1C = mChnl->unk1C;
    if ((unk1C != 0) && (mChnl->unk1D != 0) && (mChnl->unk1E == 0)) {
        r5 = sndChnl->key + func_0804af0c((unk1C * 2) + 1) - unk1C + midiBus->key;

        what = r5;
        while (what < 0) r5 += 12; // ????????
        r5 += midiBus->unk1C[what % 12];

        while (r5 < 0) r5 += 12;
        while (r5 > 127) r5 -= 12;

        freq = func_0804a690(midiBus, r5);
        sndChnl->frequency = freq;
        modRange = mChnl->modRange;
        sndChnl->unk10 = sndChnl->frequency - func_0804a690(midiBus, r5 - modRange);
        sndChnl->unk12 = func_0804a690(midiBus, r5 + modRange) - sndChnl->frequency;
        sndChnl->unk14 = func_0804a690(midiBus, r5 + mChnl->unkC) - sndChnl->frequency;
    }

    // Pitch Envelope: MIDI Channel Pitch Wheel (14-bit Integer)
    r5 = mChnl->pitchWheel;
    if (r5 != 0x2000) {
        r8 = (r5 < 0x2000) ? sndChnl->unk10 : sndChnl->unk12;

        if (r5 < 0x2000) {
            freq -= r8;
        } else {
            r5 -= 0x2000;
        }

        index = (r5 / 682);
        r3 = r5 - (index * 682); // pitchWheel - ((pitchWheel / 682) * 682) = margin of error?
        r5 = gStepFreqTable[index];
        r0 = gStepFreqTable[index + 1] - r5;
        r0 = r5 + ((r0 * r3) / 682);
        freq += Q16_TO_INT(r0 * r8);
    }

    // Pitch Envelope: MIDI Channel Bus Fine-Pitch (Q24.8 Fixed Point Integer)
    if (midiBus->pitch != 0) {
        index = Q24_TO_INT(midiBus->pitch);
        r3 = midiBus->pitch & 0xff;
        while ((u32) index >= 12) {
            if (index < 0) {
                freq >>= 1;
                index += 12;
            } else {
                freq <<= 1;
                index -= 12;
            }
        }
        r5 = gStepFreqTable[index];
        r0 = gStepFreqTable[index + 1] - r5;
        r0 = r5 + Q24_TO_INT(r0 * r3);
        freq += Q16_TO_INT(r0 * freq);
    }

    // Pitch Envelope: Modulation
    if (mChnl->modType == MOD_TYPE_VIBRATO) {
        freq += (mChnl->modResult * sndChnl->unk14) >> 5;
    }

    // Pitch Envelope: Random Pitch
    if (mChnl->rndmPitch != Q24(1)) {
        freq = Q24_TO_INT(freq * mChnl->rndmPitch);
    }

    return freq;
}

// [func_0804a1f4] SOUND CHANNEL - Calculate Volume Envelope
u32 func_0804a1f4(SoundChannel *sndChnl) {
    u32 volumeEnv;
    if (sndChnl->midiChannel == NULL) {
        return (sndChnl->velocity * Q16_TO_INT(sndChnl->adsr.envelope)) >> 7;
    } else {
        volumeEnv = sndChnl->midiChannel->volumeWheel * sndChnl->velocity * Q16_TO_INT(sndChnl->adsr.envelope);
        return volumeEnv >> 14;
    }
}

// [func_0804a224] SOUND CHANNEL - Update ADSR Envelope
u32 func_0804a224(SoundChannel *sndChnl) {
    const struct InstrumentPCM *inst;
    struct BufferADSR *adsr;
    u32 finished;
    s32 env;
    u32 rel;

    finished = FALSE;
    inst = sndChnl->instrument.pcm;
    adsr = &sndChnl->adsr;
    env = adsr->envelope;

    switch (sndChnl->adsr.stage) {
        /* ATTACK:
            Trigger: Note On
            Increment: inst->attack
            Target: 0x7F0000
        */
        case ADSR_STAGE_ATTACK:
            env += inst->attack;
            if (env >= Q16(127)) {
                env = Q16(127);
                adsr->stage = ADSR_STAGE_DECAY;
            }
            break;

        /* DECAY:
            Trigger: Attack End
            Decrement: inst->decay
            Target: inst->sustain
        */
        case ADSR_STAGE_DECAY:
            env -= inst->decay;
            if (env <= inst->sustain) {
                env = inst->sustain;
                adsr->stage = ADSR_STAGE_SUSTAIN;
            }
            break;

        /* FADE:
            Trigger: Decay End
            Decrement: inst->fade
            Target: 0
        */
        case ADSR_STAGE_SUSTAIN:
            env -= inst->fade;
            if (env >= Q16(127)) {
                env = Q16(127);
            }
            else if (env <= 0) {
                env = 0;
                finished = TRUE;
            }
            break;

        /* RELEASE:
            Trigger: Note Off, Muted Note
            Decrement: inst->release
            Target: 0
        */
        case ADSR_STAGE_RELEASE:
            env -= inst->release;
            if (env <= 0) {
                env = 0;
                finished = TRUE;
            }
            break;

        /* RELEASE (Note Cut):
            Trigger: Note Override, End of Loop Region, End of Track
            Decrement: inst->unk1C (or default of 0x60000 if not set)
            Target: 0
        */
        case ADSR_STAGE_FORCE_STOP:
            rel = inst->release;
            if (inst->release == 0) rel = Q16(6);
            env -= rel;
            if (env <= 0) {
                env = 0;
                finished = TRUE;
            }
            break;
    }

    adsr->envelope = env;
    return finished;
}

// [func_0804a2c4] SOUND CHANNEL - Update PCM Buffer
void func_0804a2c4(u32 id) {
    SoundChannel *sndChnl = &D_030064bc[id];

    if (!sndChnl->active) return;

    if (func_08049b5c(id)) {
        sndChnl->unk17_b7 = FALSE;
        if (!sndChnl->midiChannel->unk0_b1) {
            func_080493f4(id, func_0804a018(sndChnl));
        }
        func_080493e4(id, func_0804a1f4(sndChnl));
        if (func_0804a224(sndChnl) == FALSE) return;
        func_080493b0(id);
    }
    sndChnl->active = FALSE;
}

// [func_0804a334] SOUND CHANNEL - Update Sound Buffers
void func_0804a334(void) {
    u32 i;

    for (i = 0; i < D_03005b8c; i++) func_0804a2c4(i);
    func_0804b2c4();
}

// [func_0804a360] SOUND CHANNEL - Stop PCM Buffer Channels
void func_0804a360(u32 total, SoundChannel *sndChnl) {
    u32 i;

    D_03005b8c = total;
    D_030064bc = sndChnl;

    for (i = 0; i < D_03005b8c; i++) {
        D_030064bc[i].active = FALSE;
    }
}

// [func_0804a3a0] SOUND CHANNEL - Return ID of first active PCM Buffer which is not at ADSR_STAGE_RELEASE.
s32 func_0804a3a0(MidiChannel *mChnl, u8 key) {
    SoundChannel *sndChnl = D_030064bc;
    SoundChannel *tempBuf;
    s32 i;

    for (i = 0; i < D_03005b8c; i++, sndChnl++) {
        if (sndChnl->active && (sndChnl->midiChannel == mChnl) && (sndChnl->key == key)) {
            tempBuf = &D_030064bc[i];
            if (tempBuf->adsr.stage != ADSR_STAGE_RELEASE) return i;
        }
    }
    return -1;
}

// [func_0804a3fc] SOUND CHANNEL - Return First Inactive PCM Buffer
s32 func_0804a3fc(void) {
    s32 i;

    for (i = 0; i < D_03005b8c; i++) {
        if (!D_030064bc[i].active) return i;
    }
    return -1;
}

// [func_0804a434] SOUND CHANNEL - Return PCM Buffer with Lowest Volume
s32 func_0804a434(void) {
    SoundChannel *sndBuf;
    s32 id = -1;
    u32 currentVol = 0x10000;
    u32 bufferVol;
    s32 i = 0;

    sndBuf = D_030064bc;
    while (i < D_03005b8c) {
        if (sndBuf->active && (sndBuf->adsr.stage == ADSR_STAGE_RELEASE)) {
            bufferVol = sndBuf->midiChannel->volumeWheel * sndBuf->velocity;
            if (bufferVol < currentVol) {
                currentVol = bufferVol;
                id = i;
            }
        }

        i++;
        sndBuf++;
    }

    return id;
}

// [func_0804a48c] SOUND CHANNEL - Return PCM Buffer with Lowest Volume (exclude ADSR)
s32 func_0804a48c(void) {
    SoundChannel *sndBuf;
    s32 id = -1;
    u32 currentVol = 0x10000;
    u32 bufferVol;
    s32 i;

    for (i = 0; i < D_03005b8c; i++) {
        if (D_030064bc[i].active) {
            bufferVol = D_030064bc[i].midiChannel->volumeWheel * D_030064bc[i].velocity;
            if (bufferVol < currentVol) {
                currentVol = bufferVol;
                id = i;
            }
        }
    }
    return id;
}

#include "asm/midi4a/asm_0804a4e0.s"

// [func_0804a5b4] SOUND CHANNEL - 'Note Off' Event
void func_0804a5b4(MidiBus *midiBus, u32 id, u8 key) {
    SoundChannel *psgChnl;
    SoundChannel *sndChnl;
    s32 adsrRelease;
    s32 i;

    // Set ADSR Stage to 3 for all relevant PCM Buffers.
    do {
        i = func_0804a3a0(&midiBus->midiChannel[id], key);
        if (i < 0) break;
        sndChnl = &D_030064bc[i];
        sndChnl->adsr.stage = ADSR_STAGE_RELEASE;
    } while (1);

    // Set ADSR Stage to 3 for all relevant PSG Buffers.
    psgChnl = &D_030056a0[0];
    adsrRelease = ADSR_STAGE_RELEASE;
    for (i = 3; i >= 0; i--, psgChnl++) {
        if (psgChnl->active && (psgChnl->midiChannel == &midiBus->midiChannel[id]) && (psgChnl->key == key)) {
            psgChnl->adsr.stage = adsrRelease;
        }
    }
}

// [func_0804a628] SOUND CHANNEL - Return First Most Replaceable PCM Buffer
s32 func_0804a628(MidiBus *midiBus, u32 id, u8 key, u8 vel) {
    s32 buffer;

    // Return the first inactive buffer.
    buffer = func_0804a3fc();
    if (buffer >= 0) return buffer;

    // Return the quietest buffer (below threshold; see function).
    buffer = func_0804a434();
    if (buffer >= 0) return buffer;

    // Return a buffer of a lower priority.
    buffer = func_0804a4e0(midiBus, id, vel);
    if (buffer >= 0) return buffer;
    return -1;
}

// [func_0804a65c] ?? (something about left panning)
u8 func_0804a65c(u8 pan) {
    if (pan >= 64) return 127;
    else return pan * 2;
}

// [func_0804a674] ?? (something about right panning)
u8 func_0804a674(u8 pan) {
    if (pan < 64) return 127;
    else return (127 - pan) * 2;
}

// [func_0804a690] MIDI BUS - Convert Midi Key to Frequency
u32 func_0804a690(MidiBus *midiBus, u32 key) {
    u8 u = key;
    s8 s = key;

    if (s < 0) {
        s = 0;
        if (u < 191) s = 127;
        u = s;
    }
    return midiBus->tuningTable[u];
}

// [func_0804a6b0] SOUND CHANNEL - 'Note On' Event
  /*
    mChnlBus    MIDI Channel Bus for Relevant Audio Channel        // r9
    channelID   MIDI Channel ID (from buffered MIDI Note)          // stack + 0
    key         Note Pitch, Key-wise (from buffered MIDI Note)     // r5
    vel         Note Velocity (from buffered MIDI Note)            // stack + 4
  */
void func_0804a6b0(MidiBus *mChnlBus, u32 channelID, u8 key, u8 vel) {
    union Instrument inst; // r2
    struct MidiChannel *mChnl; // r8
    SoundChannel *sndBuf; // r7
    s32 panning; // stack + 8
    u32 isPSG; // stack + 0xC
    const struct InstrumentPCM *instPCM; // stack + 0x10
    const struct InstrumentPSG *instPSG; // stack + 0x14
    u32 isSubRhythm; // r4
    u32 chnlUnk1C; // r4
    u32 modRange;
    s32 temp; // r6
    s32 temp2; // r0
    u32 priority; // r1
    s32 bufferID; // r10
    u32 adsrEnv;
    struct BufferADSR *bufferADSR;

    if (vel == 0) {
        func_0804a5b4(mChnlBus, channelID, key);
        return;
    }

    mChnl = &mChnlBus->midiChannel[channelID]; // r8
    if (mChnl->unk0_b0) return;

    inst = (union Instrument) mChnlBus->soundBank[mChnl->instPatch]; // r2
    if (inst.type == NULL) return;

    isSubRhythm = FALSE; // r4

    switch (*inst.type) {
        case INSTRUMENT_SUB_RHYTHM:
            isSubRhythm = TRUE;
            inst = ((const union Instrument *)(inst.rhy->subBank))[key - inst.rhy->total];
            if (inst.type == NULL) return;
            if ((u8) (*inst.type - 0x52) < 2) return; // If it's another sub-bank, just give up.
            break;
        case INSTRUMENT_SUB_SPLIT:
            inst = ((const union Instrument *)(inst.spl->subBank))[inst.spl->keySplitTable[key - inst.spl->total]];
            if (inst.type == NULL) return;
            if ((u8) (*inst.type - 0x52) < 2) return; // If it's another sub-bank, just give up.
            break;
    }

    // Instantiate PSG Instrument
    if ((u8) (*inst.type - 0x50) < 2) {
        instPSG = inst.psg; // stack + 0x14
        isPSG = TRUE; // stack + 0xC
        sndBuf = &D_030056a0[inst.psg->channel]; // r7
    }
    // Instantiate PCM Instrument
    else {
        instPCM = inst.pcm; // stack + 0x10
        isPSG = FALSE; // stack + 0xC
        bufferID = func_0804a628(mChnlBus, channelID, key, vel);
        if (bufferID < 0) return;
        sndBuf = &D_030064bc[bufferID]; // r7
    }

    if (!isSubRhythm) {
        temp = key + mChnlBus->key; // r6
        panning = 0; // stack + 8
    }
    // Use the built-in Key/Panning parameters.
    else {
        if (isPSG) temp = instPSG->key; // r6
            else temp = instPCM->key; // r6
        if (isPSG) panning = instPSG->panning; // stack + 8
            else panning = instPCM->panning; // stack + 8
        if (panning == 127) panning = 0;
    }

    if ((u32) temp > 127) return;

    // For "Unpitched" Instruments, use the Key from the Sample Data.
    if (!isPSG && instPCM->type == INSTRUMENT_PCM_FIXED) {
        temp = instPCM->sample->baseKey; // r6
    }

    sndBuf->active = FALSE;
    chnlUnk1C = mChnl->unk1C; // r4

    // Highly similar to func_0804a018().
    if (chnlUnk1C != 0) {
        temp += (func_0804af0c((chnlUnk1C << 1) + 1) - chnlUnk1C);
        temp2 = temp;
        while (temp2 < 0) {
            temp2 += 12;
        }
        temp += mChnlBus->unk1C[temp2 % 12];
        while (temp < 0) temp += 12;
        while (temp > 127) temp -= 12;
    }

    sndBuf->frequency = func_0804a690(mChnlBus, (u8) temp);

    if (isPSG && (instPSG->channel == PSG_NOISE_CHANNEL)) {
        sndBuf->frequency = temp;
    }

    // Pretty much directly copied from func_0804a018().
    modRange = mChnl->modRange;
    sndBuf->unk10 = sndBuf->frequency - func_0804a690(mChnlBus, (u8) (temp - modRange));
    sndBuf->unk12 = func_0804a690(mChnlBus, (u8) (modRange + temp)) - sndBuf->frequency;
    sndBuf->unk14 = func_0804a690(mChnlBus, (u8) (temp + mChnl->unkC)) - sndBuf->frequency;

    sndBuf->key = key;
    sndBuf->velocity = vel;
    sndBuf->midiChannel = mChnl;
    sndBuf->panning = panning;
    priority = (mChnl->priority << 4) + 15;
    sndBuf->priority = priority - channelID;
    sndBuf->unk17_b7 = TRUE;
    sndBuf->midiBus = mChnlBus;

    // ADSR
    bufferADSR = &sndBuf->adsr;
    sndBuf->adsr.stage = ADSR_STAGE_ATTACK;
    if (isPSG) adsrEnv = instPSG->initial;
    else adsrEnv = instPCM->initial;
    bufferADSR->envelope = adsrEnv;

    if (!isPSG) sndBuf->instrument.pcm = instPCM;
    else sndBuf->instrument.psg = instPSG;

    if (mChnl->rndmPitchRange != 0) {
        mChnl->rndmPitch = mChnl->rndmPitchFloor + func_0804af0c(mChnl->rndmPitchRange);
    }

    if (isPSG) {
        func_0804af74(instPSG->channel);
    }
    else {
        func_080493b0(bufferID);
        func_0804930c(bufferID, instPCM->sample);
        func_080493e4(bufferID, func_0804a1f4(sndBuf));
        temp = (mChnl->stereo) ? -1 : 1;
        panning += func_0804aaa4(mChnlBus, channelID);
        if (panning < 0) panning = 0;
        if (panning > 127) panning = 127;
        func_080493c8(bufferID, func_0804a674(panning), func_0804a65c(panning) * temp);
        func_080493f4(bufferID, func_0804a018(sndBuf));
        func_08049450(bufferID, instPCM->distort);
        func_08049470(bufferID, mChnl->unk0_b30);
        func_08049394(bufferID);
    }

    mChnl->modDelayCount = mChnl->modDelay;
    sndBuf->active = TRUE;
}


  //  //  //  //   MIDI CHANNEL OPERATIONS   //  //  //  //


// [func_0804aa40] MIDI CHANNEL - Set Pitch Wheel [Evnt_E]
void func_0804aa40(MidiBus *midiBus, u32 id, u16 pitch) {
    midiBus->midiChannel[id].pitchWheel = pitch;
}

// [func_0804aa5c] MIDI CHANNEL - Set Volume [Ctrl_07]
void func_0804aa5c(MidiBus *midiBus, u32 id, u8 vol) {
    midiBus->midiChannel[id].volume = vol;
}

// [func_0804aa7c] MIDI CHANNEL - Set Panning [Ctrl_0A]
void func_0804aa7c(MidiBus *midiBus, u32 id, u8 pan) {
    midiBus->midiChannel[id].panning = pan;
    func_0804aae0(midiBus, id);
}

// [func_0804aaa4] MIDI CHANNEL - Calculate Panning Envelope
u8 func_0804aaa4(MidiBus *midiBus, u32 id) {
    MidiChannel *mChnl = &midiBus->midiChannel[id];
    s32 pan = mChnl->panning + (midiBus->panning >> 1);

    // Include panning modulation.
    if (mChnl->modType == 2) pan += (mChnl->modResult >> 1);

    // Clamp to 7 bits and return.
    Clamp(pan, 0, 127);
    return pan;
}

// [func_0804aae0] MIDI CHANNEL - Update Effect Chain Panning
void func_0804aae0(MidiBus *midiBus, u32 id) {
    s32 pan = func_0804aaa4(midiBus, id);
    MidiChannel *mChnl = &midiBus->midiChannel[id];
    u32 isStereo = (mChnl->stereo) ? -1 : 1;
    s32 i = 0;
    SoundChannel *sndBuf = D_030064bc;

    while (i < D_03005b8c) {
        if (sndBuf->active && (sndBuf->midiChannel == mChnl)) {
            pan += sndBuf->panning;
            // Clamp to 7 bits.
            Clamp(pan, 0, 127);
            func_080493c8(i, func_0804a674(pan), func_0804a65c(pan) * isStereo);
        }
        i++;
        sndBuf++;
    }
}

// [func_0804ab88] MIDI Channel - Set Instrument/Patch [Evnt_C]
void func_0804ab88(MidiBus *midiBus, u32 id, u8 inst) {
    midiBus->midiChannel[id].instPatch = inst;
}

// [func_0804aba8] MIDI CHANNEL - Set Expression [Ctrl_0B]
void func_0804aba8(MidiBus *midiBus, u32 id, u8 exp) {
    midiBus->midiChannel[id].expression = exp;
}

// [func_0804abc8] MIDI CHANNEL - Set unk0_b9 [Ctrl_00; Ctrl_20]
void func_0804abc8(MidiBus *midiBus, u32 id, u16 var) {
    u16 unk0_b9 = midiBus->midiChannel[id].unk0_b9;

    // MIDI Controller 00 - ??
    if (var & 0x8000) {
        unk0_b9 &= 0x3f80;     // Bits 0-6  = 0
        unk0_b9 |= (var << 7); // Bits 7-13 = var
    }
    // MIDI Controller 20 - ??
    else {
        unk0_b9 &= 0x7f; // Bits 7-13 = 0
        unk0_b9 |= var;  // Bits 0-6  = var
    }
    midiBus->midiChannel[id].unk0_b9 = unk0_b9;
}

// [func_0804ac24] MIDI CHANNEL - Set unk0_b0
void func_0804ac24(MidiBus *midiBus, u32 id, u8 var) {
    midiBus->midiChannel[id].unk0_b0 = var;
}

// [func_0804ac40] MIDI CHANNEL - Set Modulation Depth [Ctrl_01]
void func_0804ac40(MidiBus *midiBus, u32 id, u8 depth) {
    midiBus->midiChannel[id].modDepth = depth;
}

// [func_0804ac60] MIDI CHANNEL - Set unk4_b21
void func_0804ac60(MidiBus *midiBus, u32 id, u8 var) {
    midiBus->midiChannel[id].unk4_b21 = var;
}

// [func_0804ac80] MIDI CHANNEL - Set Compression/Dampening? [Ctrl_48]
void func_0804ac80(MidiBus *midiBus, u32 id, u8 comp) {
    midiBus->midiChannel[id].unk0_b30 = comp;
}

// [func_0804aca0] MIDI CHANNEL - Set Modulation Type [Ctrl_16]
void func_0804aca0(MidiBus *midiBus, u32 id, u8 type) {
    midiBus->midiChannel[id].modType = type;
}

// [func_0804acc0] MIDI CHANNEL - Set unkC
void func_0804acc0(MidiBus *midiBus, u32 id, u8 var) {
    midiBus->midiChannel[id].unkC = var;
}

// [func_0804accc] MIDI CHANNEL - Set Modulation Speed [Ctrl_15]
void func_0804accc(MidiBus *midiBus, u32 id, u16 speed) {
    midiBus->midiChannel[id].modSpeed = Q24(speed);
}

// [func_0804acd8] MIDI CHANNEL - Set Modulation Delay [Ctrl_1A]
void func_0804acd8(MidiBus *midiBus, u32 id, u8 delay) {
    midiBus->midiChannel[id].modDelay = delay;
}

// [func_0804ace4] MIDI CHANNEL - Set Modulation Range [Ctrl_14]
void func_0804ace4(MidiBus *midiBus, u32 id, u8 range) {
    midiBus->midiChannel[id].modRange = range;
}

// [func_0804acf0] MIDI CHANNEL - Set Offset/Split Stereo Effect [Ctrl_4B]
void func_0804acf0(MidiBus *midiBus, u32 id, u32 isStereo) {
    midiBus->midiChannel[id].stereo = isStereo;
    func_0804aa7c(midiBus, id, midiBus->midiChannel[id].panning);
}

// [func_0804ad18] MIDI CHANNEL - Set Priority [Ctrl_21]
void func_0804ad18(MidiBus *midiBus, u32 i, u8 priority) {
    midiBus->midiChannel[i].priority = priority + midiBus->priority;
}

// [func_0804ad38] MIDI CHANNEL - Set Random Pitch Variation [Ctrl_52]
void func_0804ad38(MidiBus *midiBus, u32 id, u8 range) {
    u32 min = 0x8000u / (0x80 + range);
    u32 max = 0x10000u / (0x100 - range);

    midiBus->midiChannel[id].rndmPitchFloor = min;
    midiBus->midiChannel[id].rndmPitchRange = max - min;
    midiBus->midiChannel[id].rndmPitch = 0x100;
}

// [func_0804ad90] MIDI CHANNEL - Set unk1C [Ctrl_53]
void func_0804ad90(MidiBus *midiBus, u32 id, u8 var) {
    midiBus->midiChannel[id].unk1C = var;
}

// [func_0804ad9c] MIDI CHANNEL - Set unk1D & unk1E [Ctrl_54]
void func_0804ad9c(MidiBus *midiBus, u32 id, u8 var) {
    midiBus->midiChannel[id].unk1D = var;
    midiBus->midiChannel[id].unk1E = var;
}


  //  //  //  //   MIDI BUS OPERATIONS   //  //  //  //


// [func_0804adb0] MIDI BUS - Set Key
void func_0804adb0(MidiBus *midiBus, s8 key) {
    midiBus->key = key;
}

// [func_0804adb4] MIDI BUS - Set Volume
void func_0804adb4(MidiBus *midiBus, u8 vol) {
    midiBus->busVolume = vol;
}

// [func_0804adb8] MIDI BUS - Set Panning
void func_0804adb8(MidiBus *midiBus, s8 pan) {
    u32 i;

    midiBus->panning = pan;
    for (i = 0; i < midiBus->totalChannels; i++) {
        func_0804aae0(midiBus, i);
    }
}

// [func_0804ade4] MIDI BUS - Set Pitch
void func_0804ade4(MidiBus *midiBus, s16 pitch) {
    midiBus->pitch = pitch;
}

// [func_0804ade8] MIDI BUS - Set Modulation Range
void func_0804ade8(MidiBus *midiBus, u8 range) {
    u32 i;

    for (i = 0; i < midiBus->totalChannels; i++) {
        midiBus->midiChannel[i].modRange = range;
    }
}

// [func_0804ae14] MIDI BUS - Set unk8
void func_0804ae14(MidiBus *midiBus, u16 var) {
    midiBus->unk8 = var;
}

// [func_0804ae18] MIDI BUS - Set Tuning
void func_0804ae18(MidiBus *midiBus, u16 *table) {
    midiBus->tuningTable = table;
}

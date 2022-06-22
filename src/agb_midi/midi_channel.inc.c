  //  //  //  //   MIDI BUS UPDATE OPERATIONS   //  //  //  //


// [func_08049c34] MIDI CHANNEL - Update Modulation
#include "asm/agb_midi/asm_08049c34.s"

// [func_08049d08] MIDI BUS - Update Modulation
void func_08049d08(MidiBus *mChnlBus) {
    u32 i;

    for (i = 0; i < mChnlBus->totalChannels; i++) {
        func_08049c34(mChnlBus, i);
    }
}

// [func_08049d30] MIDI CHANNEL - Update Sound Buffer for 'Note Cut' Event
void func_08049d30(MidiBus *mChnlBus, u32 id) {
    MidiChannel *mChnl = &mChnlBus->midiChannel[id];
    u32 i;

    if (mChnl->volumeWheel == 0) {
        func_08049db8(mChnlBus, id);
        return;
    }
    for (i = 0; i < D_03005b8c; i++) {
        if (D_030064bc[i].active && (D_030064bc[i].midiChannel == mChnl)) {
            D_030064bc[i].adsr.stage = 4;
        }
    }
    for (i = 0; i < 4; i++) {
        if (D_030056a0[i].active && (D_030056a0[i].midiChannel == mChnl)) {
            D_030056a0[i].adsr.stage = 4;
        }
    }
}

// [func_08049db8] MIDI CHANNEL - Close Sound Buffer
void func_08049db8(MidiBus *mChnlBus, u32 id) {
    MidiChannel *mChnl = &mChnlBus->midiChannel[id];
    u32 i;

    for (i = 0; i < D_03005b8c; i++) {
        if (D_030064bc[i].active && (D_030064bc[i].midiChannel == mChnl)) {
            D_030064bc[i].active = FALSE;
            func_080493b0(i);
        }
    }
    for (i = 0; i < 4; i++) {
        if (D_030056a0[i].active && (D_030056a0[i].midiChannel == mChnl)) {
            D_030056a0[i].adsr.stage = 3;
            D_030056a0[i].adsr.envelope = 0;
        }
    }
}

// [func_08049e3c] MIDI BUS - Update All Sound Buffers for 'Note Cut' Event
void func_08049e3c(MidiBus *mChnlBus) {
    u32 i;

    for (i = 0; i < mChnlBus->totalChannels; i++) {
        func_08049d30(mChnlBus, i);
    }
}

// [func_08049e64] MIDI BUS - Close All Sound Buffers
void func_08049e64(MidiBus *mChnlBus) {
    u32 i;
    for (i = 0; i < mChnlBus->totalChannels; i++) {
        func_08049db8(mChnlBus, i);
    }
}


  //  //  //  //   MIDI BUS INITIALISATION OPERATIONS   //  //  //  //


// [func_08049e8c] MIDI BUS - Set Priority
void func_08049e8c(MidiBus *mChnlBus, u8 priority) {
    u32 i;

    mChnlBus->priority = priority;
    for (i = 0; i < mChnlBus->totalChannels; i++) {
        func_0804ad18(mChnlBus, i, 0);
    }
}

// [func_08049ec4] MIDI BUS - Set Selected Track Volume & Track Selection
void func_08049ec4(MidiBus *mChnlBus, u8 volume, u16 selection) {
    mChnlBus->trackVolume = volume;
    mChnlBus->trackSelect = selection;
}

// [func_08049ecc] MIDI CHANNEL - Initialise
void func_08049ecc(MidiChannel *mChnl) {
    mChnl->unk0_b0 = FALSE;
    mChnl->unk0_b1 = FALSE;
    mChnl->instPatch = 0;
    mChnl->unk0_b9 = 0;
    mChnl->volume = 0x64;
    mChnl->panning = 0x40;
    mChnl->expression = 0x7F;
    mChnl->unk4_b21 = 0;
    mChnl->modDepth = 0;
    mChnl->modType = 0;
    mChnl->unkC = 1;
    mChnl->modSpeed = 0x3C00;
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
void func_08049fa0(MidiBus *mChnlBus, u32 totalChannels, MidiChannel *mChnl) {
    u32 i;

    mChnlBus->busVolume = 0x64;
    mChnlBus->trackVolume = 0x64;
    mChnlBus->trackSelect = 0;
    mChnlBus->unk4 = 0;
    mChnlBus->panning = 0;
    mChnlBus->pitch = 0;
    mChnlBus->unk8 = 0x1400;
    mChnlBus->unkC = &D_08a86008[0];

    mChnlBus->totalChannels = totalChannels;
    mChnlBus->midiChannel = mChnl;
    for (i = 0; i < totalChannels; i++) {
        func_08049ecc(&mChnl[i]);
    }

    mChnlBus->priority = 0;
    for (i = 0; i < 12; i++) {
        mChnlBus->unk1C[i] = 0;
    }
}

// [func_0804a014] MIDI BUS - Set Sound Bank
void func_0804a014(MidiBus *mChnlBus, const InstrumentBank *instBank) {
    mChnlBus->soundBank = instBank;
}


  //  //  //  //   SOUND CHANNEL OPERATIONS   //  //  //  //


// [func_0804a018] SOUND CHANNEL - Update & Calculate Pitch Envelope
u32 func_0804a018(SoundChannel *pcmBuf) {
    MidiBus *mChnlBus;
    MidiChannel *mChnl;
    s32 result;
    u32 modRange;
    u32 unk1C;
    s32 r5;
    u32 r8;
    u32 r0;
    u32 r2;
    u32 r3;
    s32 index;
    s32 what;

    // Do not calculate pitch envelope for unpitched instruments.
    if (pcmBuf->instrument.pcm->header.type == INSTRUMENT_PCM_FIXED) return 0;

    mChnlBus = pcmBuf->midiBus;
    mChnl = pcmBuf->midiChannel;
    result = pcmBuf->unk0_b15;

    // If... whatever this flag is, bypass all pitch envelopes, returning pcmBuf->unk0_b15.
    if (mChnl->unk0_b1) return result;

    // Pitch Envelope: ???
    unk1C = mChnl->unk1C;
    if ((unk1C != 0) && (mChnl->unk1D != 0) && (mChnl->unk1E == 0)) {
        r5 = pcmBuf->key + func_0804af0c((unk1C * 2) + 1) - unk1C + mChnlBus->unk4; // r5

        what = r5;
        while (what < 0) r5 += 12; // ????????
        r5 += mChnlBus->unk1C[what % 12];

        while (r5 < 0) r5 += 12;
        while (r5 > 127) r5 -= 12;

        result = func_0804a690(mChnlBus, r5);
        pcmBuf->unk0_b15 = result;
        modRange = mChnl->modRange;
        pcmBuf->unk10 = pcmBuf->unk0_b15 - func_0804a690(mChnlBus, r5 - modRange);
        pcmBuf->unk12 = func_0804a690(mChnlBus, r5 + modRange) - pcmBuf->unk0_b15;
        pcmBuf->unk14 = func_0804a690(mChnlBus, r5 + mChnl->unkC) - pcmBuf->unk0_b15;
    }

    // Pitch Envelope: MIDI Channel Pitch Wheel
    r5 = mChnl->pitchWheel;
    if (r5 != 0x2000) {
        r8 = (r5 <= 0x1fff) ? pcmBuf->unk10 : pcmBuf->unk12;

        if (r5 <= 0x1fff) {
            result -= r8;
        } else {
            r5 -= 0x2000;
        }

        r2 = (r5 / 682);
        index = r2;
        r3 = r5 - (r2 * 682);
        r5 = D_08a86108[index];
        r0 = D_08a86108[index + 1] - r5;
        r0 = r5 + ((r0 * r3) / 682);
        result += (r0 * r8) >> 0x10;
    }

    // Pitch Envelope: MIDI Channel Bus
    if (mChnlBus->pitch != 0) {
        index = mChnlBus->pitch >> 8;
        r3 = mChnlBus->pitch & 0xff;
        while ((u32) index > 11) {
            if (index < 0) {
                result >>= 1;
                index += 12;
            } else {
                result <<= 1;
                index -= 12;
            }
        }
        r5 = D_08a86108[index];
        r0 = D_08a86108[index + 1] - r5;
        r0 = r5 + ((r0 * r3) >> 8);
        r0 *= result;
        result += r0 >> 0x10;
    }

    // Pitch Envelope: Modulation (Type 0)
    if (mChnl->modType == 0) {
        result += (mChnl->modResult * pcmBuf->unk14) >> 5;
    }

    // Pitch Envelope: Random Pitch
    if (mChnl->rndmPitch != 0x100) {
        result = (result * mChnl->rndmPitch) >> 8;
    }

    return result;
}

// [func_0804a1f4] SOUND CHANNEL - Calculate Volume Envelope
u32 func_0804a1f4(SoundChannel *pcmBuf) {
    u32 volumeEnv;
    if (pcmBuf->midiChannel == NULL) {
        return (pcmBuf->velocity * (pcmBuf->adsr.envelope >> 0x10)) >> 7;
    } else {
        volumeEnv = pcmBuf->midiChannel->volumeWheel * pcmBuf->velocity * (pcmBuf->adsr.envelope >> 0x10);
        return volumeEnv >> 14;
    }
}

// [func_0804a224] SOUND CHANNEL - Update ADSR Envelope
u32 func_0804a224(SoundChannel *pcmBuf) {
    struct InstrumentPCM *inst;
    struct BufferADSR *adsr;
    u32 finished;
    s32 env;
    u32 rel;

    finished = FALSE;
    inst = pcmBuf->instrument.pcm;
    adsr = &pcmBuf->adsr;
    env = adsr->envelope;

    switch (pcmBuf->adsr.stage) {
        /* ATTACK:
            Trigger: Note On
            Increment: inst->attack
            Target: 0x7F0000
        */
        case 0:
            env += inst->attack;
            if (env >= 0x7f0000) {
                env = 0x7f0000;
                adsr->stage = 1;
            }
            break;

        /* DECAY:
            Trigger: Attack End
            Decrement: inst->decay
            Target: inst->sustain
        */
        case 1:
            env -= inst->decay;
            if (env <= inst->sustain) {
                env = inst->sustain;
                adsr->stage = 2;
            }
            break;

        /* FADE:
            Trigger: Decay End
            Decrement: inst->fade
            Target: 0
        */
        case 2:
            env -= inst->fade;
            if (env >= 0x7f0000) {
                env = 0x7f0000;
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
        case 3:
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
        case 4:
            rel = inst->release;
            if (inst->release == 0) rel = 0x60000;
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

// [func_0804a2c4] PCM BUFFER - Update PCM Buffer
void func_0804a2c4(u32 id) {
    SoundChannel *pcmBuf = &D_030064bc[id];

    if (!pcmBuf->active) return;

    if (func_08049b5c(id)) {
        pcmBuf->unk17_b7 = 0;
        if (!pcmBuf->midiChannel->unk0_b1) {
            func_080493f4(id, func_0804a018(pcmBuf));
        }
        func_080493e4(id, func_0804a1f4(pcmBuf));
        if (func_0804a224(pcmBuf) == FALSE) return;
        func_080493b0(id);
    }
    pcmBuf->active = FALSE;
}

// [func_0804a334] SOUND CHANNEL - Update Sound Buffers
void func_0804a334(void) {
    u32 i;

    for (i = 0; i < D_03005b8c; i++) func_0804a2c4(i);
    func_0804b2c4();
}

// [func_0804a360] PCM BUFFER - Stop PCM Buffer Channels
void func_0804a360(u32 total, SoundChannel *pcmBuf) {
    u32 i;

    D_03005b8c = total;
    D_030064bc = pcmBuf;

    for (i = 0; i < D_03005b8c; i++) {
        D_030064bc[i].active = FALSE;
    }
}

// [func_0804a3a0] PCM BUFFER - Return ID of first active PCM Buffer which is not at ADSR Stage 3.
s32 func_0804a3a0(MidiChannel *mChnl, u8 key) {
    SoundChannel *pcmBuf = D_030064bc;
    SoundChannel *tempBuf;
    s32 i;

    for (i = 0; i < D_03005b8c;) {
        if (pcmBuf->active && (pcmBuf->midiChannel == mChnl) && (pcmBuf->key == key)) {
            tempBuf = &D_030064bc[i];
            if (tempBuf->adsr.stage != 3) return i;
        }
        i++;
        pcmBuf++;
    }
    return -1;
}

// [func_0804a3fc] PCM BUFFER - Return First Inactive PCM Buffer
s32 func_0804a3fc(void) {
    s32 i;

    for (i = 0; i < D_03005b8c; i++) {
        if (!D_030064bc[i].active) return i;
    }
    return -1;
}

// [func_0804a434] PCM BUFFER - Return PCM Buffer with Lowest Volume
s32 func_0804a434(void) {
    SoundChannel *sndBuf;
    s32 id = -1;
    u32 currentVol = 0x10000;
    u32 bufferVol;
    s32 i = 0;

    sndBuf = D_030064bc;
    while (i < D_03005b8c) {
        if (sndBuf->active && (sndBuf->adsr.stage == 3)) {
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

// [func_0804a48c] PCM BUFFER - Return PCM Buffer with Lowest Volume (exclude ADSR)
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

#include "asm/agb_midi/asm_0804a4e0.s"

// [func_0804a5b4] SOUND CHANNEL - 'Note Off' Event
void func_0804a5b4(MidiBus *mChnlBus, u32 id, u8 key) {
    SoundChannel *psgBuf;
    SoundChannel *pcmBuf;
    s32 three;
    s32 i;

    // Set ADSR Stage to 3 for all relevant PCM Buffers.
    do {
        i = func_0804a3a0(&mChnlBus->midiChannel[id], key);
        if (i < 0) break;
        pcmBuf = &D_030064bc[i];
        pcmBuf->adsr.stage = 3;
    } while (1);

    // Set ADSR Stage to 3 for all relevant PSG Buffers.
    psgBuf = &D_030056a0[0];
    three = 3;
    for (i = 3; i >= 0;) {
        if (psgBuf->active && (psgBuf->midiChannel == &mChnlBus->midiChannel[id]) && (psgBuf->key == key)) {
            psgBuf->adsr.stage = three;
        }
        i--;
        psgBuf++;
    }
}

// [func_0804a628] PCM BUFFER - Return First Most Replaceable PCM Buffer
s32 func_0804a628(MidiBus *mChnlBus, u32 id, u8 key, u8 vel) {
    s32 buffer;

    // Return the first inactive buffer.
    buffer = func_0804a3fc();
    if (buffer >= 0) return buffer;

    // Return the quietest buffer (below threshold; see function).
    buffer = func_0804a434();
    if (buffer >= 0) return buffer;

    // Return a buffer of a lower priority.
    buffer = func_0804a4e0(mChnlBus, id, vel);
    if (buffer >= 0) return buffer;
    return -1;
}

// [func_0804a65c] ?? (something about left panning)
u8 func_0804a65c(u8 panning) {
    if (panning >= 0x40) return 0x7f;
    else return panning * 2;
}

// [func_0804a674] ?? (something about right panning)
u8 func_0804a674(u8 panning) {
    if (panning < 0x40) return 0x7f;
    else return (0x7f - panning) * 2;
}

// [func_0804a690] MIDI BUS - Get unkC Value At Index
u32 func_0804a690(MidiBus *mChnlBus, u32 index) {
    u8 u = index;
    s8 s = index;

    if (s < 0) {
        s = 0;
        if (u < 191) s = 0x7f;
        u = s;
    }
    return mChnlBus->unkC[u];
}

// [func_0804a6b0] SOUND CHANNEL - 'Note On' Event
#include "asm/agb_midi/asm_0804a6b0.s"


  //  //  //  //   MIDI CHANNEL OPERATIONS   //  //  //  //


// [func_0804aa40] MIDI CHANNEL - Set Pitch Wheel [Evnt_E]
void func_0804aa40(MidiBus *mChnlBus, u32 id, u16 pitch) {
    mChnlBus->midiChannel[id].pitchWheel = pitch;
}

// [func_0804aa5c] MIDI CHANNEL - Set Volume [Ctrl_07]
void func_0804aa5c(MidiBus *mChnlBus, u32 id, u8 volume) {
    mChnlBus->midiChannel[id].volume = volume;
}

// [func_0804aa7c] MIDI CHANNEL - Set Panning [Ctrl_0A]
void func_0804aa7c(MidiBus *mChnlBus, u32 id, u8 panning) {
    mChnlBus->midiChannel[id].panning = panning;
    func_0804aae0(mChnlBus, id);
}

// [func_0804aaa4] MIDI CHANNEL - Calculate Panning Envelope
u8 func_0804aaa4(MidiBus *mChnlBus, u32 id) {
    MidiChannel *mChnl = &mChnlBus->midiChannel[id];
    s32 panning = mChnl->panning + (mChnlBus->panning >> 1);

    // Include panning modulation.
    if (mChnl->modType == 2) panning += (mChnl->modResult >> 1);

    // Clamp to 7 bits and return.
    if (panning < 0) panning = 0;
    if (panning > 0x7f) panning = 0x7f;
    return panning;
}

// [func_0804aae0] MIDI CHANNEL - Update Effect Chain Panning
void func_0804aae0(MidiBus *mChnlBus, u32 id) {
    s32 panning = func_0804aaa4(mChnlBus, id);
    MidiChannel *mChnl = &mChnlBus->midiChannel[id];
    u32 isStereo = (mChnl->stereo) ? -1 : 1;
    s32 i = 0;
    SoundChannel *sndBuf = D_030064bc;

    while (i < D_03005b8c) {
        if (sndBuf->active && (sndBuf->midiChannel == mChnl)) {
            panning += sndBuf->unk18;
            // Clamp to 7 bits.
            if (panning < 0) panning = 0;
            if (panning > 0x7f) panning = 0x7f;
            func_080493c8(i, func_0804a674(panning), func_0804a65c(panning) * isStereo);
        }
        i++;
        sndBuf++;
    }
}

// [func_0804ab88] MIDI Channel - Set Instrument/Patch [Evnt_C]
void func_0804ab88(MidiBus *mChnlBus, u32 id, u8 inst) {
    mChnlBus->midiChannel[id].instPatch = inst;
}

// [func_0804aba8] MIDI CHANNEL - Set Expression [Ctrl_0B]
void func_0804aba8(MidiBus *mChnlBus, u32 id, u8 expression) {
    mChnlBus->midiChannel[id].expression = expression;
}

// [func_0804abc8] MIDI CHANNEL - Set unk0_b9 [Ctrl_00; Ctrl_20]
void func_0804abc8(MidiBus *mChnlBus, u32 id, u16 var) {
    u16 unk0_b9 = mChnlBus->midiChannel[id].unk0_b9;

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
    mChnlBus->midiChannel[id].unk0_b9 = unk0_b9;
}

// [func_0804ac24] MIDI CHANNEL - Set unk0_b0
void func_0804ac24(MidiBus *mChnlBus, u32 id, u8 var) {
    mChnlBus->midiChannel[id].unk0_b0 = var;
}

// [func_0804ac40] MIDI CHANNEL - Set Modulation Depth [Ctrl_01]
void func_0804ac40(MidiBus *mChnlBus, u32 id, u8 depth) {
    mChnlBus->midiChannel[id].modDepth = depth;
}

// [func_0804ac60] MIDI CHANNEL - Set unk4_b21
void func_0804ac60(MidiBus *mChnlBus, u32 id, u8 var) {
    mChnlBus->midiChannel[id].unk4_b21 = var;
}

// [func_0804ac80] MIDI CHANNEL - Set Compression/Dampening? [Ctrl_48]
void func_0804ac80(MidiBus *mChnlBus, u32 id, u8 comp) {
    mChnlBus->midiChannel[id].unk0_b30 = comp;
}

// [func_0804aca0] MIDI CHANNEL - Set Modulation Type [Ctrl_16]
void func_0804aca0(MidiBus *mChnlBus, u32 id, u8 type) {
    mChnlBus->midiChannel[id].modType = type;
}

// [func_0804acc0] MIDI CHANNEL - Set unkC
void func_0804acc0(MidiBus *mChnlBus, u32 id, u8 var) {
    mChnlBus->midiChannel[id].unkC = var;
}

// [func_0804accc] MIDI CHANNEL - Set Modulation Speed [Ctrl_15]
void func_0804accc(MidiBus *mChnlBus, u32 id, u16 speed) {
    mChnlBus->midiChannel[id].modSpeed = speed << 8;
}

// [func_0804acd8] MIDI CHANNEL - Set Modulation Delay [Ctrl_1A]
void func_0804acd8(MidiBus *mChnlBus, u32 id, u8 delay) {
    mChnlBus->midiChannel[id].modDelay = delay;
}

// [func_0804ace4] MIDI CHANNEL - Set Modulation Range [Ctrl_14]
void func_0804ace4(MidiBus *mChnlBus, u32 id, u8 range) {
    mChnlBus->midiChannel[id].modRange = range;
}

// [func_0804acf0] MIDI CHANNEL - Set Offset/Split Stereo Effect [Ctrl_4B]
void func_0804acf0(MidiBus *mChnlBus, u32 id, u32 var) {
    mChnlBus->midiChannel[id].stereo = var;
    func_0804aa7c(mChnlBus, id, mChnlBus->midiChannel[id].panning);
}

// [func_0804ad18] MIDI CHANNEL - Set Priority [Ctrl_21]
void func_0804ad18(MidiBus *mChnlBus, u32 i, u8 priority) {
    mChnlBus->midiChannel[i].priority = priority + mChnlBus->priority;
}

// [func_0804ad38] MIDI CHANNEL - Set Random Pitch Variation [Ctrl_52]
void func_0804ad38(MidiBus *mChnlBus, u32 id, u8 range) {
    u32 lowMax = 0x8000 / (u32) (range + 0x80);
    u32 highMax = 0x10000 / (u32) (0x100 - range);

    mChnlBus->midiChannel[id].rndmPitchFloor = lowMax;
    mChnlBus->midiChannel[id].rndmPitchRange = highMax - lowMax;
    mChnlBus->midiChannel[id].rndmPitch = 0x100;
}

// [func_0804ad90] MIDI CHANNEL - Set unk1C [Ctrl_53]
void func_0804ad90(MidiBus *mChnlBus, u32 id, u8 var) {
    mChnlBus->midiChannel[id].unk1C = var;
}

// [func_0804ad9c] MIDI CHANNEL - Set unk1D & unk1E [Ctrl_54]
void func_0804ad9c(MidiBus *mChnlBus, u32 id, u8 var) {
    mChnlBus->midiChannel[id].unk1D = var;
    mChnlBus->midiChannel[id].unk1E = var;
}


  //  //  //  //   MIDI BUS OPERATIONS   //  //  //  //


// [func_0804adb0] MIDI BUS - Set unk4
void func_0804adb0(MidiBus *mChnlBus, s8 var) {
    mChnlBus->unk4 = var;
}

// [func_0804adb4] MIDI BUS - Set Volume
void func_0804adb4(MidiBus *mChnlBus, u8 volume) {
    mChnlBus->busVolume = volume;
}

// [func_0804adb8] MIDI BUS - Set Panning
void func_0804adb8(MidiBus *mChnlBus, s8 panning) {
    u32 i;
    mChnlBus->panning = panning;

    for (i = 0; i < mChnlBus->totalChannels; i++) {
        func_0804aae0(mChnlBus, i);
    }
}

// [func_0804ade4] MIDI BUS - Set Pitch
void func_0804ade4(MidiBus *mChnlBus, s16 pitch) {
    mChnlBus->pitch = pitch;
}

// [func_0804ade8] MIDI BUS - Set Modulation Range
void func_0804ade8(MidiBus *mChnlBus, u8 range) {
    u32 i;

    for (i = 0; i < mChnlBus->totalChannels; i++) {
        mChnlBus->midiChannel[i].modRange = range;
    }
}

// [func_0804ae14] MIDI BUS - Set unk8
void func_0804ae14(MidiBus *mChnlBus, u16 var) {
    mChnlBus->unk8 = var;
}

// [func_0804ae18] MIDI BUS - Set unkC
void func_0804ae18(MidiBus *mChnlBus, u16 *var) {
    mChnlBus->unkC = var;
}

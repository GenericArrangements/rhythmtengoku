#include "global.h"
#include "sound.h"
#include "lib_08049144.h"

asm(".include \"include/gba.inc\"");//Temporary


  // // // // // // // // // // // // // // // // // // // //

#define REG_SOUNDCNT_L  *(volatile u16 *)(IORAMBase + 0x80)


extern u16 D_03001570; // Pseudo-RNG Variable

extern u8  D_03001578[4]; // PSG BUFFER - ?? (checked by TONE 1 and WAVE)

extern u16 D_03001580[4]; // PSG BUFFER - Initial Volume of Envelope
extern u16 D_03001588[4]; // PSG BUFFER - Frequency
extern u8 *D_03001590; // PSG BUFFER - Wave Pattern
extern SoundPlayer *D_03001598;
extern MidiBus *D_0300159c;
extern u8 *D_030015a0;
extern volatile u16 D_030015a4;
extern u8  D_030015a6;
extern u8  D_030015a7; // Initial value at D_03005b7c

extern u32 D_03001888; // ?? (this is like, sample data or something)
extern u32 D_030024c8; // ?? (sample envelope or something)
extern DmaSampleReader D_030028c8; // Sample Reader Location (12 Channels)
extern SoundChannel D_03002a48; // PCM Buffer Location (12 Channels)

extern u16 D_030055f0;
extern u32 D_030055f4; // ?? (init. = 0) { 0..2 }

extern u32 D_03005600[4];
extern u16 D_03005610; // Total DmaSampleReader at D_03005b88 ( = 12)
extern u32 D_03005620[3];
extern u32 D_0300562c; // Current Speed (NOT Tempo)
extern u32 D_03005630; // ?? (init. = 0)
extern u32 D_03005634; // ?? (init. = 4)
extern u32 D_03005638;
extern volatile u32 *D_0300563c; // &D_03001888
extern u8  D_03005640; // ?? (Byte 0 of MIDI Event F0) [mCtrl4C]
extern SoundPlayer *D_03005644; // Channel which most recently called MIDI Event F0
extern u16 D_03005648; // Current byte in D_03005b7c to set [mCtrl0E]

extern MidiNote D_03005650[20]; // MIDI Note Buffer
extern SoundChannel D_030056a0[4]; // PSG Buffer Channels { 0 = Tone+Sweep; 1 = Tone; 2 = Wave; 3 = Noise }
extern u8  D_03005720[0x400]; // ???? (it's a line or curve or something idk)
extern u16 D_03005b20; // Total Bytes in array at D_03005b7c
extern volatile u32 D_03005b24; // Offset of *D_030064b8 from D_03001888 ( = 0x620)
extern u8  D_03005b28; // ?? (Set by MIDI Controller 4D; Only set if D_03005b44 == 0)

extern struct SysExcMsgHandler D_03005b30;
extern u8  D_03005b3c; // ?? (Set by MIDI Controller 49; Cleared by MIDI Controller 4A and MIDI Event F0)
extern u32 D_03005b40;
extern u8  D_03005b44; // ?? (Must be clear for certain operations to work; Affects MIDI Controllers 49, 4A and 4D)
extern u32 D_03005b48; // ?? (init. = 2)

extern u16 D_03005b78; // Current Available MIDI Note Slot
extern u8 *D_03005b7c; // ?? (Byte at offset D_03005648 set by MIDI Controller 10)
extern u16 D_03005b80; // REG_VCOUNT

extern DmaSampleReader *D_03005b88; // DmaSampleReader (12 Channels, at D_030028c8)
extern u16 D_03005b8c; // Total PCM Buffer Channels at D_030064bc ( = 12)
extern s8  D_03005b90[]; // Reverb controller..?
extern u32 D_03005b94; // Global Sample Rate ( = 13379Hz)

extern volatile u32 D_030064a0; // Offset from *D_0300563c and *D_030064b8 to operate on.
extern u32 D_030064a4; // ?? (init. = 0)
extern u32 D_030064a8; // 13379Hz / 60

extern u32 *D_030064b0; // ?? (D_030024c8)
extern u32 D_030064b4; // 16776921 / 13379Hz
extern volatile u32 *D_030064b8; // &D_03001888[D_03005b24] (D_03001ea8)
extern SoundChannel *D_030064bc; // PCM Buffer (12 Channels, at D_03002a48)
extern u8  D_030064c0; // ?? (Set to 0 alongside all elements in D_03005620)
extern u16 D_030064c4; // ?? (init. = 1)

  // // // // // // // // // // // // // // // // // // // //

extern u16 D_08a86008[]; // Note Frequency Table
extern u32 D_08a86108[]; // ?? (honestly idk how to even describe this one)
extern s16 D_08a86140[]; // ?? (another curve table)
extern InstrumentBank *instrumentBanks[]; // Instrument Bank Index
extern char D_08a865a4[]; // MIDI "Loop Start" Marker: '['
extern char D_08a865a8[]; // MIDI "Loop End" Marker: ']'

extern u32 __udivmoddi4(u64, u64);

  // // // // // // // // // // // // // // // // // // // //





  //  //  //  //   INTERRUPT_DMA2   //  //  //  //


// [func_08049144] INTERRUPT_DMA2
void func_08049144(void) {
    volatile u32 dummy;
    u32 temp;
    u32 flag;

    if (!D_030064c4) return;

    flag = FALSE;
    D_030064a0 += 4;

    if (D_030064a0 >= D_03005b24) {
        D_030064a0 -= D_03005b24;
    }

    if (D_030064a0 == D_03005b40) {
        D_030064a0 = (D_030064a0 != 0) ? D_030064a0 - 4 : D_03005b24 - 4;

        temp = D_0300563c[D_030064a0 + 3] >> 0x18;
        temp |= (temp << 0x8);
        temp |= (temp << 0x10);
        D_0300563c[D_030064a0 + 0] = D_0300563c[D_030064a0 + 1] = D_0300563c[D_030064a0 + 2] = D_0300563c[D_030064a0 + 3] = temp;

        temp = D_030064b8[D_030064a0 + 3] >> 0x18;
        temp |= (temp << 0x8);
        temp |= (temp << 0x10);
        D_030064b8[D_030064a0 + 0] = D_030064b8[D_030064a0 + 1] = D_030064b8[D_030064a0 + 2] = D_030064b8[D_030064a0 + 3] = temp;
        flag = TRUE;
    }

    if (D_030064a0 == 0) flag = TRUE;

    if (!flag) return;

    switch (D_030055f4) {
        case 0:
            REG_DMA1CNT_H = 0;
            REG_DMA2CNT_H = 0;
            REG_DMA1SAD = (u32) &D_0300563c[D_030064a0];
            REG_DMA2SAD = (u32) &D_030064b8[D_030064a0];
            REG_DMA1CNT_H = 0xB600;
            dummy = 0;
            dummy = 0;
            REG_DMA2CNT_H = 0xF600;
            dummy = 0;
            dummy = 0;
            break;
        case 1:
            REG_DMA2CNT_H = 0;
            REG_DMA2SAD = (u32) &D_0300563c[D_030064a0];
            REG_DMA2CNT_H = 0xF600;
            dummy = 0;
            dummy = 0;
            break;
        case 2:
            REG_DMA1CNT_H = 0;
            REG_DMA2CNT_H = 0;
            REG_DMA1SAD = (u32) &D_0300563c[D_030064a0];
            REG_DMA2SAD = (u32) &D_0300563c[D_030064a0];
            REG_DMA1CNT_H = 0xB600;
            dummy = 0;
            dummy = 0;
            REG_DMA2CNT_H = 0xF600;
            dummy = 0;
            dummy = 0;
            break;
    }
}


  //  //  //  //   SAMPLE READER OPERATIONS   //  //  //  //


// [func_0804930c] SAMPLE READER - Initialise Channel
void func_0804930c(u32 id, struct SampleInfo *sample) {
    DmaSampleReader *comms = &D_03005b88[id]; // r6
    u32 keySampleRate;
    u32 keyFreq;
    u64 sampleRate;

    comms->active = FALSE;
    comms->sample = sample->waveform;
    comms->length = sample->length >> 2;

    if ((sample->loopStart | sample->loopEnd) != 0) {
        comms->loopStart = sample->loopStart << 14;
        comms->loopEnd = sample->loopEnd << 14;
    } else {
        comms->loopStart = sample->length << 14;
        comms->loopEnd = sample->length << 14;
    }

    keyFreq = D_08a86008[sample->baseKey];
    keySampleRate = D_03005b94 * keyFreq; // r2
    sampleRate = (u64) sample->sampleRate << 28;
    comms->unk1C = __udivmoddi4((sampleRate + keySampleRate) - 1, keySampleRate);
}

// [func_08049394] SAMPLE READER - Reset Channel
void func_08049394(u32 id) {
    D_03005b88[id].unkC = 0;
    D_03005b88[id].active = TRUE;
}

// [func_080493b0] SAMPLE READER - Close Channel
void func_080493b0(u32 id) {
    D_03005b88[id].active = FALSE;
}

// [func_080493c8] SAMPLE READER - Set Panning
void func_080493c8(u32 id, u32 pan1, u32 pan2) {
    D_03005b88[id].unk2 = pan1;
    D_03005b88[id].unk3 = pan2;
}

// [func_080493e4] SAMPLE READER - Set Volume Envelope
void func_080493e4(u32 id, u32 volumeEnv) {
    D_03005b88[id].volume = volumeEnv;
}

// [func_080493f4] SAMPLE READER - Set Pitch Envelope
void func_080493f4(u32 id, u32 pitchEnv) {
    DmaSampleReader *comms = &D_03005b88[id];
    if (pitchEnv == 0) {
        comms->pitch = 0x80 << 7;
        comms->unk0_b1 = 0;
    } else {
        comms->pitch = ((u64) comms->unk1C * pitchEnv) >> 14;
        comms->unk0_b1 = (-(0x4000 ^ comms->pitch) | (0x4000 ^ comms->pitch)) >> 0x1f;
    }
}

// [func_08049450] SAMPLE READER - Set unk0_b2
void func_08049450(u32 id, u32 arg1) {
    D_03005b88[id].unk0_b2 = arg1;
}

// [func_08049470] SAMPLE READER - Set unk0_b3
void func_08049470(u32 id, u32 arg1) {
    D_03005b88[id].unk0_b3 = arg1;
}


  //  //  //  //   ??? OPERATIONS   //  //  //  //


#include "asm/lib_08049144/asm_08049490.s"

#include "asm/lib_08049144/asm_080497f8.s"

// [func_08049ad8] Initialise(?) REG_DMA1CNT & REG_DMA2CNT
void func_08049ad8(void) {
    volatile u32 dummy;

    D_030064c4 = 0;
    if (D_030055f4 != 1) {
        REG_DMA1CNT = ((DMACNT_ENABLE | DMACNT_SIZE | DMACNT_DEST_INC_TYPE_UNCHANGED) << 0x10) + 4;
        dummy = 0;
        dummy = 1;
        REG_DMA1CNT_H = DMACNT_SIZE;
    }
    REG_DMA2CNT = ((DMACNT_ENABLE | DMACNT_SIZE | DMACNT_DEST_INC_TYPE_UNCHANGED) << 0x10) + 4;
    dummy = 0;
    dummy = 1;
    REG_DMA2CNT_H = DMACNT_SIZE;
}

// [func_08049b34] ??
void func_08049b34(u32 arg0, u32 arg1, u32 arg2, u32 arg3) {
    D_030064a4 = arg0;
    D_03005630 = arg1;
    D_03005b48 = arg2;
    D_03005634 = arg3;
}

// [func_08049b5c] SAMPLE READER - Check If Active
u32 func_08049b5c(u32 id) {
    return D_03005b88[id].active;
}

// [func_08049b70] (SUB) MIDI Controller 4A - ??
void func_08049b70(u32 arg0) {
    if (D_03005b44 == 0) D_03005620[0] = arg0;
}

// [func_08049b8c] MIDI Controller 4D - ??
void func_08049b8c(u8 arg0) {
    if (D_03005b44 == 0) D_03005b28 = arg0;
}

// [func_08049bac] ??
void func_08049bac(void) {
    D_03005620[2] = 0;
    D_03005620[1] = 0;
    D_03005620[0] = 0;
    D_030064c0 = 0;
    D_030064b0[D_03005638 - 2] = D_030064b0[D_03005638 - 1] = 0;
}

// [func_08049be4] MIDI Controller 49 - ??; MIDI Controller 4A - ??
void func_08049be4(void) {
    if (D_03005b44 == 0) func_08049bac();
}

// [func_08049bfc] ??
void func_08049bfc(u32 arg0, u32 arg1, u32 arg2) {
    if (arg0 != 0) arg0 = 1;
    if (D_03005b44 != arg0) {
        func_08049bac();
        D_03005b44 = arg0;
        D_03005620[0] = arg1;
        D_03005b28 = arg2;
    }
}

  //  //  //  //   MIDI CHANNEL BUS UPDATE OPERATIONS   //  //  //  //


// [func_08049c34] MIDI CHANNEL - Update Modulation
#include "asm/lib_08049144/asm_08049c34.s"

// [func_08049d08] MIDI CHANNEL BUS - Update Modulation
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

// [func_08049e3c] MIDI CHANNEL BUS - Update All Sound Buffers for 'Note Cut' Event
void func_08049e3c(MidiBus *mChnlBus) {
    u32 i;

    for (i = 0; i < mChnlBus->totalChannels; i++) {
        func_08049d30(mChnlBus, i);
    }
}

// [func_08049e64] MIDI CHANNEL BUS - Close All Sound Buffers
void func_08049e64(MidiBus *mChnlBus) {
    u32 i;
    for (i = 0; i < mChnlBus->totalChannels; i++) {
        func_08049db8(mChnlBus, i);
    }
}


  //  //  //  //   MIDI CHANNEL BUS INITIALISATION OPERATIONS   //  //  //  //


// [func_08049e8c] MIDI CHANNEL BUS - Set Priority
void func_08049e8c(MidiBus *mChnlBus, u8 priority) {
    u32 i;

    mChnlBus->priority = priority;
    for (i = 0; i < mChnlBus->totalChannels; i++) {
        func_0804ad18(mChnlBus, i, 0);
    }
}

// [func_08049ec4] MIDI CHANNEL BUS - Set Selected Track Volume & Track Selection
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

// [func_08049fa0] MIDI CHANNEL BUS - Initialise
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

// [func_0804a014] MIDI CHANNEL BUS - Set Sound Bank
void func_0804a014(MidiBus *mChnlBus, const InstrumentBank *instBank) {
    mChnlBus->soundBank = instBank;
}


  //  //  //  //   SOUND BUFFER OPERATIONS   //  //  //  //


// [func_0804a018] SOUND BUFFER - Update & Calculate Pitch Envelope
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

// [func_0804a1f4] SOUND BUFFER - Calculate Volume Envelope
u32 func_0804a1f4(SoundChannel *pcmBuf) {
    u32 volumeEnv;
    if (pcmBuf->midiChannel == NULL) {
        return (pcmBuf->velocity * (pcmBuf->adsr.envelope >> 0x10)) >> 7;
    } else {
        volumeEnv = pcmBuf->midiChannel->volumeWheel * pcmBuf->velocity * (pcmBuf->adsr.envelope >> 0x10);
        return volumeEnv >> 14;
    }
}

// [func_0804a224] SOUND BUFFER - Update ADSR Envelope
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

// [func_0804a334] SOUND BUFFER - Update Sound Buffers
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

#include "asm/lib_08049144/asm_0804a4e0.s"

// [func_0804a5b4] SOUND BUFFER - 'Note Off' Event
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

// [func_0804a690] MIDI CHANNEL BUS - Get unkC Value At Index
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

// [func_0804a6b0] SOUND BUFFER - 'Note On' Event
#include "asm/lib_08049144/asm_0804a6b0.s"


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


  //  //  //  //   MIDI CHANNEL BUS OPERATIONS   //  //  //  //


// [func_0804adb0] MIDI CHANNEL BUS - Set unk4
void func_0804adb0(MidiBus *mChnlBus, s8 var) {
    mChnlBus->unk4 = var;
}

// [func_0804adb4] MIDI CHANNEL BUS - Set Volume
void func_0804adb4(MidiBus *mChnlBus, u8 volume) {
    mChnlBus->busVolume = volume;
}

// [func_0804adb8] MIDI CHANNEL BUS - Set Panning
void func_0804adb8(MidiBus *mChnlBus, s8 panning) {
    u32 i;
    mChnlBus->panning = panning;

    for (i = 0; i < mChnlBus->totalChannels; i++) {
        func_0804aae0(mChnlBus, i);
    }
}

// [func_0804ade4] MIDI CHANNEL BUS - Set Pitch
void func_0804ade4(MidiBus *mChnlBus, s16 pitch) {
    mChnlBus->pitch = pitch;
}

// [func_0804ade8] MIDI CHANNEL BUS - Set Modulation Range
void func_0804ade8(MidiBus *mChnlBus, u8 range) {
    u32 i;

    for (i = 0; i < mChnlBus->totalChannels; i++) {
        mChnlBus->midiChannel[i].modRange = range;
    }
}

// [func_0804ae14] MIDI CHANNEL BUS - Set unk8
void func_0804ae14(MidiBus *mChnlBus, u16 var) {
    mChnlBus->unk8 = var;
}

// [func_0804ae18] MIDI CHANNEL BUS - Set unkC
void func_0804ae18(MidiBus *mChnlBus, u16 *var) {
    mChnlBus->unkC = var;
}


  //  //  //  //   SYSTEM-EXCLUSIVE MESSAGE OPERATIONS   //  //  //  //


// [func_0804ae1c] ??
void func_0804ae1c(struct SysExcMsgHandler* SysExcMsgHandler, u8 arg1, u8 arg2, u8 arg3, u8 arg4, u8 arg5) {
    SysExcMsgHandler->unk6 = 0;
    SysExcMsgHandler->unk7 = 0;
    SysExcMsgHandler->unk8 = 0;
    SysExcMsgHandler->unk0 = arg1;
    SysExcMsgHandler->unk1 = arg2;
    SysExcMsgHandler->unk2 = 0x10000 / arg3;
    SysExcMsgHandler->unk4 = arg4;
    SysExcMsgHandler->unk5 = arg5;
}

// [func_0804ae54] Set ?? [Ctrl_49]
void func_0804ae54(struct SysExcMsgHandler *arg0) {
    arg0->unk6 = 1;
    arg0->unk8 = 0;
    arg0->unk7 = 0;
}

// [func_0804ae60] Set ?? [Ctrl_49; Ctrl_4A]
void func_0804ae60(struct SysExcMsgHandler *arg0) {
    arg0->unk6 = 0;
    arg0->unk8 = 0;
    arg0->unk7 = 0;
}

// [func_0804ae6c] ?? (relates to speed)
void func_0804ae6c(struct SysExcMsgHandler *SysExcMsgHandler, u32 speed) {
    s32 temp;
    s32 temp2;

    switch (SysExcMsgHandler->unk6) {
        case 0:
            SysExcMsgHandler->unk7 = 0;
            break;
        case 1:
            SysExcMsgHandler->unk8 += speed;
            SysExcMsgHandler->unk7 = 0;
            if ((SysExcMsgHandler->unk8 >> 8) >= SysExcMsgHandler->unk0) {
                SysExcMsgHandler->unk8 = 0;
                SysExcMsgHandler->unk6 = 2;
            }
            break;
        case 2:
        case 3:
            SysExcMsgHandler->unk8 += speed;
            temp2 = SysExcMsgHandler->unk8 >> 8;
            temp = (temp2 * SysExcMsgHandler->unk2) >> 8;
            if ((SysExcMsgHandler->unk5 != 0) && ((u32) temp > SysExcMsgHandler->unk5)) {
                temp = SysExcMsgHandler->unk5;
            }
            temp += SysExcMsgHandler->unk4;
            temp = D_08a86140[temp & 0xff] >> 1;
            if (temp > 0x7f) temp = 0x7f;
            if (temp < -0x80) temp = -0x80;
            if (SysExcMsgHandler->unk6 == 2) {
                if (temp2 < SysExcMsgHandler->unk1) {
                    temp = (temp * temp2) / SysExcMsgHandler->unk1;
                } else {
                    SysExcMsgHandler->unk6 = 3;
                }
            }
            SysExcMsgHandler->unk7 = temp;
            break;
    }
}

// [func_0804af0c] UTIL - Pseudo-Random Number Generator
u32 func_0804af0c(u16 var) {
    D_03001570 = (D_03001570 * 109) + 1021;
    return (u32) (var * D_03001570) >> 0x10;
}


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
#include "asm/lib_08049144/asm_0804aff0.s"

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

#include "asm/lib_08049144/asm_0804c4bc.s"

#include "asm/lib_08049144/asm_0804c508.s"

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

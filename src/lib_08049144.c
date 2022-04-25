#include "global.h"
#include "sound.h"
#include "lib_08049144.h"

asm(".include \"include/gba.inc\"");//Temporary


extern u32 D_03005620[];
extern u32 D_03005638;
extern u8  D_03005640;
extern u16 D_03005648;
extern struct Bingus D_030056a0[];
extern u16 D_03005b20;
extern u8  D_03005b28;
extern struct Jason D_03005b30;
extern u8  D_03005b3c;
extern u8  D_03005b44;
extern u8 *D_03005b7c;
extern struct Bingus *D_03005b88;
extern u16 D_03005b8c;
extern u8  D_03005b90[];
extern u32 *D_030064b0;
extern struct Bingus *D_030064bc;
extern u8  D_030064c0;

extern s16  D_08a86008[];
extern const InstrumentBank *const instrumentBanks[];
extern char D_08a865a4[]; // '['
extern char D_08a865a8[]; // ']'



#include "asm/lib_08049144/asm_08049144.s"

#include "asm/lib_08049144/asm_0804930c.s"

#include "asm/lib_08049144/asm_08049394.s"

// [func_080493b0] ?
void func_080493b0(u32 id) {
    D_03005b88[id].unk0_b0 = 0;
}

// [func_080493c8] Store panning-related values to D_03005b88[i].
void func_080493c8(u32 i, u32 pan1, u32 pan2) {
    D_03005b88[i].unk2 = pan1;
    D_03005b88[i].unk3 = pan2;
}

#include "asm/lib_08049144/asm_080493e4.s"

#include "asm/lib_08049144/asm_080493f4.s"

#include "asm/lib_08049144/asm_08049450.s"

#include "asm/lib_08049144/asm_08049470.s"

#include "asm/lib_08049144/asm_08049490.s"

#include "asm/lib_08049144/asm_080497f8.s"

#include "asm/lib_08049144/asm_08049ad8.s"

#include "asm/lib_08049144/asm_08049b34.s"

#include "asm/lib_08049144/asm_08049b5c.s"

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

#include "asm/lib_08049144/asm_08049bfc.s"

#include "asm/lib_08049144/asm_08049c34.s"

#include "asm/lib_08049144/asm_08049d08.s"

// [func_08049d30] ?? (Unload)
void func_08049d30(struct MidiChannelBus *mChnlBus, u32 id) {
    struct MidiChannel *mChnl = &mChnlBus->midiChannel[id];
    u32 i;

    if (mChnl->volumeWheel == 0) {
        func_08049db8(mChnlBus, id);
        return;
    }
    for (i = 0; i < D_03005b8c; i++) {
        if (D_030064bc[i].unk0_b0 && (D_030064bc[i].midiChannel == mChnl)) {
            D_030064bc[i].unk1C = 4;
        }
    }
    for (i = 0; i < 4; i++) {
        if (D_030056a0[i].unk0_b0 && (D_030056a0[i].midiChannel == mChnl)) {
            D_030056a0[i].unk1C = 4;
        }
    }
}

// [func_08049db8] ??
void func_08049db8(struct MidiChannelBus *mChnlBus, u32 id) {
    struct MidiChannel *mChnl = &mChnlBus->midiChannel[id];
    u32 i;

    for (i = 0; i < D_03005b8c; i++) {
        if (D_030064bc[i].unk0_b0 && (D_030064bc[i].midiChannel == mChnl)) {
            D_030064bc[i].unk0_b0 = 0;
            func_080493b0(i);
        }
    }
    for (i = 0; i < 4; i++) {
        if (D_030056a0[i].unk0_b0 && (D_030056a0[i].midiChannel == mChnl)) {
            D_030056a0[i].unk1C = 3;
            D_030056a0[i].unk1D = 0;
        }
    }
}

// [func_08049e3c] ?? (Unload)
void func_08049e3c(struct MidiChannelBus *mChnlBus) {
    u32 i;

    for (i = 0; i < mChnlBus->unk14_b0; i++) {
        func_08049d30(mChnlBus, i);
    }
}

// [func_08049e64] ??
void func_08049e64(struct MidiChannelBus *midi_channelBus) {
    u32 i;
    for (i = 0; i < midi_channelBus->unk14_b0; i++) {
        func_08049db8(midi_channelBus, i);
    }
}

// [func_08049e8c] ??
void func_08049e8c(struct MidiChannelBus *mChnlBus, u8 unk4f4) {
    u32 i;

    mChnlBus->unk14_b5 = unk4f4;
    for (i = 0; i < mChnlBus->unk14_b0; i++) {
        func_0804ad18(mChnlBus, i, 0);
    }
}

#include "asm/lib_08049144/asm_08049ec4.s"

// [func_08049ecc] Initialise MIDI Channel.
void func_08049ecc(struct MidiChannel *mChnl) {
    mChnl->unk0_b0 = 0;
    mChnl->unk0_b1 = 0;
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
    mChnl->modWheelRange = 2;
    mChnl->unk8_b22 = 0;
    mChnl->unk0_b30 = 0;
    mChnl->unk0_b31 = 0;
    mChnl->rndmPitch = 0x100;
    mChnl->rndmPitchFloor = 0x100;
    mChnl->rndmPitchRange = 0;
    mChnl->unk1C = 0;
    mChnl->unk1D = 0;
    mChnl->unk1E = 0;
}

// [func_08049fa0] Initialise Midi Channel Bus.
void func_08049fa0(struct MidiChannelBus *mChnlBus, u32 unk14_b0, struct MidiChannel *mChnl) {
    u32 i;

    mChnlBus->volume = 0x64;
    mChnlBus->unk1 = 0x64;
    mChnlBus->unk2 = 0;
    mChnlBus->unk4 = 0;
    mChnlBus->unk5 = 0;
    mChnlBus->pitch = 0;
    mChnlBus->unk8 = 0x1400;
    mChnlBus->unkC = &D_08a86008[0];

    mChnlBus->unk14_b0 = unk14_b0;
    mChnlBus->midiChannel = mChnl;
    for (i = 0; i < unk14_b0; i++) {
        func_08049ecc(&mChnl[i]);
    }

    mChnlBus->unk14_b5 = 0;
    for (i = 0; i < 12; i++) {
        mChnlBus->unk1C[i] = 0;
    }
}

// [func_0804a014] Store Sound Bank to MIDI Channel Bus
void func_0804a014(struct MidiChannelBus *mChnlBus, const InstrumentBank *instBank) {
    mChnlBus->soundBank = instBank;
}

#include "asm/lib_08049144/asm_0804a018.s"

#include "asm/lib_08049144/asm_0804a1f4.s"

#include "asm/lib_08049144/asm_0804a224.s"

#include "asm/lib_08049144/asm_0804a2c4.s"

#include "asm/lib_08049144/asm_0804a334.s"

#include "asm/lib_08049144/asm_0804a360.s"

#include "asm/lib_08049144/asm_0804a3a0.s"

#include "asm/lib_08049144/asm_0804a3fc.s"

#include "asm/lib_08049144/asm_0804a434.s"

#include "asm/lib_08049144/asm_0804a48c.s"

#include "asm/lib_08049144/asm_0804a4e0.s"

#include "asm/lib_08049144/asm_0804a5b4.s"

#include "asm/lib_08049144/asm_0804a628.s"

// [func_0804a65c] ?? (something about left panning)
u8 func_0804a65c(u8 panning) {
    if (panning > 0x3f) return 0x7f;
    else return panning << 1;
}

// [func_0804a674] ?? (something about right panning)
u8 func_0804a674(u8 panning) {
    if (panning <= 0x3f) return 0x7f;
    else return (0x7f - panning) << 1;
}

#include "asm/lib_08049144/asm_0804a690.s"

#include "asm/lib_08049144/asm_0804a6b0.s"

#include "asm/lib_08049144/asm_0804aa40.s"

// [func_0804aa5c] MIDI Controller 07 - Channel Volume
void func_0804aa5c(struct MidiChannelBus *mChnlBus, u32 id, u8 volume) {
    mChnlBus->midiChannel[id].volume = volume;
}

// [func_0804aa7c] MIDI Controller 0A - Channel Panning
void func_0804aa7c(struct MidiChannelBus *mChnlBus, u32 id, u8 panning) {
    mChnlBus->midiChannel[id].panning = panning;
    func_0804aae0(mChnlBus, id);
}

// [func_0804aaa4] Return a net Panning value, factoring all relevant Panning controllers.
u8 func_0804aaa4(struct MidiChannelBus *mChnlBus, u32 id) {
    struct MidiChannel *mChnl = &mChnlBus->midiChannel[id];
    s32 panning = mChnl->panning + (mChnlBus->unk5 >> 1);

    // Include modulation if modType is set to "panning".
    if (mChnl->modType == 2) panning += (mChnl->modResult >> 1);

    // Clamp to 7 bits and return.
    if (panning < 0) panning = 0;
    if (panning > 0x7f) panning = 0x7f;
    return panning;
}

// [func_0804aae0] ??? (called after setting channel panning)
void func_0804aae0(struct MidiChannelBus *mChnlBus, u32 id) {
    s32 panning = func_0804aaa4(mChnlBus, id);
    struct MidiChannel *mChnl = &mChnlBus->midiChannel[id];
    u32 chorused = (mChnl->unk0_b31) ? -1 : 1;
    s32 i = 0;
    struct Bingus *bingus = D_030064bc;

    for (i; i < D_03005b8c;) {
        if (bingus->unk0_b0 && (bingus->midiChannel == mChnl)) {
            panning += bingus->unk18;
            // Clamp to 7 bits.
            if (panning < 0) panning = 0;
            if (panning > 0x7f) panning = 0x7f;
            func_080493c8(i, func_0804a674(panning), func_0804a65c(panning) * chorused);
        }
        i++;
        bingus++;
    }
}

#include "asm/lib_08049144/asm_0804ab88.s"

// [func_0804aba8] MIDI Controller 0B - Expression
void func_0804aba8(struct MidiChannelBus *mChnlBus, u32 id, u8 expression) {
    mChnlBus->midiChannel[id].expression = expression;
}

// [func_0804abc8] MIDI Controller 00 - ??; MIDI Controller 20 - ??
void func_0804abc8(struct MidiChannelBus *mChnlBus, u32 id, u16 var) {
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
    mChnlBus->midiChannel[id].unk0_b9 = unk0_b9 & 0x3fff;
}

#include "asm/lib_08049144/asm_0804ac24.s"

// [func_0804ac40] MIDI Controller 01 - Modulation Depth
void func_0804ac40(struct MidiChannelBus *mChnlBus, u32 id, u8 depth) {
    mChnlBus->midiChannel[id].modDepth = depth;
}

#include "asm/lib_08049144/asm_0804ac60.s"

// [func_0804ac80] MIDI Controller 48 - Compress/Dampen?
void func_0804ac80(struct MidiChannelBus *mChnlBus, u32 id, u8 comp) {
    mChnlBus->midiChannel[id].unk0_b30 = comp;
}

// [func_0804aca0] MIDI Controller 16 - Modulation Type
void func_0804aca0(struct MidiChannelBus *mChnlBus, u32 id, u8 type) {
    mChnlBus->midiChannel[id].modType = type;
}

#include "asm/lib_08049144/asm_0804acc0.s"

// [func_0804accc] MIDI Controller 15 - Modulation Speed
void func_0804accc(struct MidiChannelBus *mChnlBus, u32 id, u16 speed) {
    mChnlBus->midiChannel[id].modSpeed = speed << 8;
}

// [func_0804acd8] MIDI Controller 1A - Modulation Delay
void func_0804acd8(struct MidiChannelBus *mChnlBus, u32 id, u8 delay) {
    mChnlBus->midiChannel[id].modDelay = delay;
}

// [func_0804ace4] MIDI Controller 14 - Modulation Wheel Range
void func_0804ace4(struct MidiChannelBus *mChnlBus, u32 id, u8 range) {
    mChnlBus->midiChannel[id].modWheelRange = range;
}

// [func_0804acf0] MIDI Controller 4B - Chorus?
void func_0804acf0(struct MidiChannelBus *mChnlBus, u32 id, u32 vol) {
    mChnlBus->midiChannel[id].unk0_b31 = vol;
    func_0804aa7c(mChnlBus, id, mChnlBus->midiChannel[id].panning);
}

// [func_0804ad18] MIDI Controller 21 - ??
void func_0804ad18(struct MidiChannelBus *mChnlBus, u32 i, u8 arg2) {
    mChnlBus->midiChannel[i].unk8_b22 = arg2 + mChnlBus->unk14_b5;
}

// [func_0804ad38] MIDI Controller 52 - Random Pitch Variation
void func_0804ad38(struct MidiChannelBus *mChnlBus, u32 id, u8 range) {
    u32 lowMax = 0x8000 / (u32) (range + 0x80);
    u32 highMax = 0x10000 / (u32) (0x100 - range);

    mChnlBus->midiChannel[id].rndmPitchFloor = lowMax;
    mChnlBus->midiChannel[id].rndmPitchRange = highMax - lowMax;
    mChnlBus->midiChannel[id].rndmPitch = 0x100;
}

// [func_0804ad90] MIDI Controller 53 - ??
void func_0804ad90(struct MidiChannelBus *mChnlBus, u32 id, u8 arg2) {
    mChnlBus->midiChannel[id].unk1C = arg2;
}

// [func_0804ad9c] MIDI Controller 54 - ??
void func_0804ad9c(struct MidiChannelBus *mChnlBus, u32 id, u8 arg2) {
    mChnlBus->midiChannel[id].unk1D = arg2;
    mChnlBus->midiChannel[id].unk1E = arg2;
}

#include "asm/lib_08049144/asm_0804adb0.s"

// [func_0804adb4] Store Sequence Data volume to MIDI Channel Bus volume.
void func_0804adb4(struct MidiChannelBus *mChnlBus, u8 volume) {
    mChnlBus->volume = volume;
}

#include "asm/lib_08049144/asm_0804adb8.s"

// [func_0804ade4] Set MIDI Channel Bus Pitch
void func_0804ade4(struct MidiChannelBus *mChnlBus, s16 pitch) {
    mChnlBus->pitch = pitch;
}

#include "asm/lib_08049144/asm_0804ade8.s"

#include "asm/lib_08049144/asm_0804ae14.s"

#include "asm/lib_08049144/asm_0804ae18.s"

#include "asm/lib_08049144/asm_0804ae1c.s"

// [func_0804ae54] MIDI Controller 49 - ??
void func_0804ae54(struct Jason *arg0) {
    arg0->unk6 = 1;
    arg0->unk8 = 0;
    arg0->unk7 = 0;
}

// [func_0804ae60] MIDI Controller 49 - ??; MIDI Controller 4A - ??
void func_0804ae60(struct Jason *arg0) {
    arg0->unk6 = 0;
    arg0->unk8 = 0;
    arg0->unk7 = 0;
}

#include "asm/lib_08049144/asm_0804ae6c.s"

#include "asm/lib_08049144/asm_0804af0c.s"

#include "asm/lib_08049144/asm_0804af30.s"

#include "asm/lib_08049144/asm_0804af74.s"

#include "asm/lib_08049144/asm_0804afa4.s"

#include "asm/lib_08049144/asm_0804afd8.s"

#include "asm/lib_08049144/asm_0804aff0.s"

#include "asm/lib_08049144/asm_0804b2c4.s"


// [func_0804b324] Parse 16-bit Big Endian value in MIDI Stream.
u16 func_0804b324(u8 *stream) {
    return (stream[0] << 8) | stream[1];
}


// [func_0804b330] Parse 32-bit Big Endian value in MIDI Stream.
u32 func_0804b330(u8 *stream) {
    return (stream[0]) << 0x18 | (stream[1]) << 0x10 | (stream[2]) << 8 | stream[3];
}


// [func_0804b348] Determine length of Loop Marker symbols.
u32 func_0804b348(char label[]) {
    u8 i;

    for (i = 0; label[i] != 0; i++);
    return i;
}


// [func_0804b368] Store Sequence Data to a given Audio Channel.
void func_0804b368(struct AudioChannel *channel, const struct SequenceData *seqData) {
    struct MidiChannelBus *mChnlBus;
    struct MidiTrackReader *mTrkReader;
    u8 *mTrkStream;
    u8 *mTrkStart;
    u32 chnkLength;
    u32 trackTotal;
    u32 deltaTime;
    u32 i;
    u32 n;

    // Reading Sequence Data:
    if (func_0804b5a0(channel)) {
        if ((*(u32 *)channel & 0x200800) == 0x200000) {
            if (channel->sequenceData->unk4f4 > seqData->unk4f4) return;
        }
    }
    mChnlBus = channel->midi_channelBus;
    func_08049e64(mChnlBus);
    func_08049fa0(mChnlBus, mChnlBus->unk14_b0, mChnlBus->midiChannel);
    func_0804a014(mChnlBus, instrumentBanks[seqData->soundBank]);
    func_0804adb4(mChnlBus, seqData->volume);
    func_08049e8c(mChnlBus, seqData->unk4f4);
    channel->sequenceData = seqData;
    channel->seqData_channelVol = seqData->volume;

    // Reading MIDI Data:
    mTrkStream = (u8 *)seqData->romAddress;

    // Header:
    mTrkStream += 4; // Skip (Header: "MThd")
    chnkLength = func_0804b330(mTrkStream);
    mTrkStream += 4; // Skip (Header: Length)
    trackTotal = func_0804b324(mTrkStream + 2); // Header: Number of MIDI Tracks
    channel->nTracksUsed = trackTotal;

    if (channel->nTracksUsed > channel->nTracksMax) {
        channel->nTracksUsed = channel->nTracksMax;
    }
    channel->midi_quarterNote = func_0804b324(mTrkStream + 4); // Header: Division
    mTrkStream += chnkLength; // Skip (Header: Data)

    // Track:
    mTrkReader = channel->midi_trackReader;
    for (i = 0; i < channel->nTracksUsed; i++) {
        mTrkStream += 4; // Skip (Track: Length)
        chnkLength = func_0804b330(mTrkStream);
        mTrkStream += 4; // Skip (Track: Length)
        mTrkStart = mTrkStream;
        mTrkStream += chnkLength;
        mTrkReader->unk0_0 = 1;
        mTrkReader->start = mTrkStart;
        deltaTime = func_0804c398(&mTrkStart);
        mTrkReader->unkC = deltaTime << 8;
        mTrkReader->current = mTrkStart;
        mTrkReader->deltaTime = deltaTime;
        mTrkReader->unk0_1 = 0;
        mTrkReader->unk0_18 = 0;
        mTrkReader++;
    }

    // Other Data:
    channel->unk0_b10 = 0;
    channel->isPaused = 0;
    channel->speed1 = 1;
    channel->beatscript_channelVol = 0x100;
    channel->speed2 = 0x100;
    channel->beatscript_trackVol = 0x100;
    channel->volumeFadeType = 0;
    channel->volumeFadeEnv = 0x8000;
    channel->volumeFadeSpeed = 0;
    channel->midi_loopStartSym = &D_08a865a4[0];
    channel->midi_loopStartSymSize = func_0804b348(D_08a865a4);
    channel->midi_loopEndSym = &D_08a865a8[0];
    channel->midi_loopEndSymSize = func_0804b348(D_08a865a8);
    channel->unk2D = 0x40;
    channel->unk2E = 0x40;
    channel->unk2F = 0x40;
    channel->unk30 = 0x40;
    channel->unk34 = 0;
}

// [func_0804b534] Load a Sound Sequence using the D_08aa06f8 table.
void func_0804b534(u16 index) {
    struct AudioChannel *channel;
    const struct SequenceData *seqData;

    channel = D_08aa4460[D_08aa06f8[index].channelID].audioChannel;
    seqData = D_08aa06f8[index].sequenceData;
    func_0804b368(channel, seqData);
}

// [func_0804b560] Remove Sound Sequence from Audio Channel
void func_0804b560(struct AudioChannel *channel) {
    func_08049e3c(channel->midi_channelBus);
    channel->sequenceData = 0;
}

// [func_0804b574] Pause/Unpause Sound Sequence in Audio Channel { 0 = Unpause; 1 = Pause }
void func_0804b574(struct AudioChannel *channel, u8 pause) {
    channel->isPaused = pause;
    if (pause) func_08049e64(channel->midi_channelBus);
}

#include "asm/lib_08049144/asm_0804b5a0.s"

#include "asm/lib_08049144/asm_0804b5d8.s"

#include "asm/lib_08049144/asm_0804b5e4.s"

#include "asm/lib_08049144/asm_0804b5f0.s"

#include "asm/lib_08049144/asm_0804b620.s"

// [func_0804b650] Set Volume
void func_0804b650(struct AudioChannel *channel, u16 volume) {
    channel->beatscript_channelVol = volume;
}

#include "asm/lib_08049144/asm_0804b654.s"

// [func_0804b65c] Set Pitch
void func_0804b65c(struct AudioChannel *channel, u16 unused, s16 pitch) {
    func_0804ade4(channel->midi_channelBus, pitch);
}

#include "asm/lib_08049144/asm_0804b66c.s"

#include "asm/lib_08049144/asm_0804b67c.s"

#include "asm/lib_08049144/asm_0804b6c4.s"

#include "asm/lib_08049144/asm_0804b6f0.s"

#include "asm/lib_08049144/asm_0804b710.s"

// [func_0804b734] Volume Fade { type = 0..3 }
void func_0804b734(struct AudioChannel *channel, u16 type, u16 time) {
    switch (type) {
        case 0: // Reset Fade
            channel->volumeFadeEnv = 0x8000;
            channel->volumeFadeSpeed = 0;
            break;

        case 1: // Fade In
            if (time == 0) time = 1;
            if (channel->volumeFadeType == 0) channel->volumeFadeEnv = 0;
            channel->volumeFadeSpeed = 0x8000 / time;
            channel->isPaused = 0;
            break;

        case 2: // Fade Out & Clear
        case 3: // Fade Out & Pause
            if (channel->volumeFadeType == 0) channel->volumeFadeEnv = 0x8000;
            if (time != 0) {
                channel->volumeFadeSpeed = 0x8000 / time;
            } else {
                channel->volumeFadeEnv = 0;
                channel->volumeFadeSpeed = 1;
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

// [func_0804b7dc] Apply Volume Fade - Fade-Out & Clear
void func_0804b7dc(struct AudioChannel *channel, u16 time) {
    func_0804b734(channel, 2, time);
}

// [func_0804b7ec] Apply Volume Fade - Fade-Out & Pause
void func_0804b7ec(struct AudioChannel *channel, u16 time) {
    func_0804b734(channel, 3, time);
}

// [func_0804b7fc] Apply Volume Fade - Fade-In
void func_0804b7fc(struct AudioChannel *channel, u16 time) {
    func_0804b734(channel, 1, time);
}

#include "asm/lib_08049144/asm_0804b80c.s"

#include "asm/lib_08049144/asm_0804b898.s"


// [func_0804b95c] Interpret MIDI Controller Change Instruction
void func_0804b95c(struct AudioChannel *audioChnl, u32 id, u8 ctrl, u8 var) {
    struct MidiChannelBus *mChnlBus = audioChnl->midi_channelBus;

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
        case 0x4E: audioChnl->unk2D = var; break;
        case 0x4F: audioChnl->unk2E = var; break;
        case 0x50: audioChnl->unk2F = var; break;
        case 0x51: audioChnl->unk30 = var; break;
        case 0x52: func_0804ad38(mChnlBus, id, var); break;
        case 0x53: func_0804ad90(mChnlBus, id, var); break;
        case 0x54: func_0804ad9c(mChnlBus, id, var); break;
    }
}


#include "asm/lib_08049144/asm_0804bc5c.s"

#include "asm/lib_08049144/asm_0804bcc0.s"

#include "asm/lib_08049144/asm_0804bed0.s"

#include "asm/lib_08049144/asm_0804c040.s"

#include "asm/lib_08049144/asm_0804c0f8.s"

#include "asm/lib_08049144/asm_0804c170.s"

// [func_0804c340] Set Reverb
void func_0804c340(u32 arg0, u32 arg1, u32 arg2, u32 arg3) {
    D_03005b90[0] = arg0;
    D_03005b90[1] = arg1;
    D_03005b90[2] = arg2;
    D_03005b90[3] = arg3;
}

#include "asm/lib_08049144/asm_0804c358.s"

#include "asm/lib_08049144/asm_0804c35c.s"


// [func_0804c398] Parse MIDI Variable-Length Time
u32 func_0804c398(u8 **midiStream) {
    u8 *mStream = *midiStream;
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


#include "asm/lib_08049144/asm_0804c3c0.s"

#include "asm/lib_08049144/asm_0804c4bc.s"

#include "asm/lib_08049144/asm_0804c508.s"

#include "asm/lib_08049144/asm_0804c6c8.s"

#include "asm/lib_08049144/asm_0804c778.s"

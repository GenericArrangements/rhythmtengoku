#include "global.h"
#include "sound.h"
#include "lib_08049144.h"

asm(".include \"include/gba.inc\"");//Temporary

struct Bingus {
    u32 unk0_b0:1;
    u32 unk4;
    u32 unk8;
    struct MidiChannel *midiChannel;
    u32 unk10;
    u32 unk14;
    u32 unk18;
    u32 unk1C:8;
    u32 unk1D:24;
};

extern u8  D_03005640;
extern u16 D_03005648;
extern struct Bingus D_030056a0[];
extern u16 D_03005b20;
extern u32 D_03005b30;
extern u8  D_03005b3c;
extern u8 *D_03005b7c;
extern struct Bingus *D_03005b88;
extern u16 D_03005b8c;
extern struct Bingus *D_030064bc;

extern s16 D_08a86008[];
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


#include "asm/lib_08049144/asm_080493c8.s"

#include "asm/lib_08049144/asm_080493e4.s"

#include "asm/lib_08049144/asm_080493f4.s"

#include "asm/lib_08049144/asm_08049450.s"

#include "asm/lib_08049144/asm_08049470.s"

#include "asm/lib_08049144/asm_08049490.s"

#include "asm/lib_08049144/asm_080497f8.s"

#include "asm/lib_08049144/asm_08049ad8.s"

#include "asm/lib_08049144/asm_08049b34.s"

#include "asm/lib_08049144/asm_08049b5c.s"

#include "asm/lib_08049144/asm_08049b70.s"

#include "asm/lib_08049144/asm_08049b8c.s"

#include "asm/lib_08049144/asm_08049bac.s"

#include "asm/lib_08049144/asm_08049be4.s"

#include "asm/lib_08049144/asm_08049bfc.s"

#include "asm/lib_08049144/asm_08049c34.s"

#include "asm/lib_08049144/asm_08049d08.s"

#include "asm/lib_08049144/asm_08049d30.s"


// [func_08049db8] ?
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


#include "asm/lib_08049144/asm_08049e3c.s"


// [func_08049e64] ?
void func_08049e64(struct MidiChannelBus *midi_channelBus) {
    u32 i;
    for (i = 0; i < midi_channelBus->unk14_b0; i++) {
        func_08049db8(midi_channelBus, i);
    }
}


// [func_08049e8c] ?
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
    mChnlBus->unk6 = 0;
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

#include "asm/lib_08049144/asm_0804a65c.s"

#include "asm/lib_08049144/asm_0804a674.s"

#include "asm/lib_08049144/asm_0804a690.s"

#include "asm/lib_08049144/asm_0804a6b0.s"

#include "asm/lib_08049144/asm_0804aa40.s"

#include "asm/lib_08049144/asm_0804aa5c.s"

#include "asm/lib_08049144/asm_0804aa7c.s"

#include "asm/lib_08049144/asm_0804aaa4.s"

#include "asm/lib_08049144/asm_0804aae0.s"

#include "asm/lib_08049144/asm_0804ab88.s"

#include "asm/lib_08049144/asm_0804aba8.s"

#include "asm/lib_08049144/asm_0804abc8.s"

#include "asm/lib_08049144/asm_0804ac24.s"

#include "asm/lib_08049144/asm_0804ac40.s"

#include "asm/lib_08049144/asm_0804ac60.s"

#include "asm/lib_08049144/asm_0804ac80.s"

#include "asm/lib_08049144/asm_0804aca0.s"

#include "asm/lib_08049144/asm_0804acc0.s"

#include "asm/lib_08049144/asm_0804accc.s"

#include "asm/lib_08049144/asm_0804acd8.s"

#include "asm/lib_08049144/asm_0804ace4.s"

#include "asm/lib_08049144/asm_0804acf0.s"


// [func_0804ad18] ?
void func_0804ad18(struct MidiChannelBus *mChnlBus, u32 i, u8 arg2) {
    mChnlBus->midiChannel[i].unk8_b22 = arg2 + mChnlBus->unk14_b5;
}


#include "asm/lib_08049144/asm_0804ad38.s"

#include "asm/lib_08049144/asm_0804ad90.s"

#include "asm/lib_08049144/asm_0804ad9c.s"

#include "asm/lib_08049144/asm_0804adb0.s"


// [func_0804adb4] Store Sequence Data volume to MIDI Channel Bus volume.
void func_0804adb4(struct MidiChannelBus *mChnlBus, u8 volume) {
    mChnlBus->volume = volume;
}


#include "asm/lib_08049144/asm_0804adb8.s"

#include "asm/lib_08049144/asm_0804ade4.s"

#include "asm/lib_08049144/asm_0804ade8.s"

#include "asm/lib_08049144/asm_0804ae14.s"

#include "asm/lib_08049144/asm_0804ae18.s"

#include "asm/lib_08049144/asm_0804ae1c.s"

#include "asm/lib_08049144/asm_0804ae54.s"

#include "asm/lib_08049144/asm_0804ae60.s"

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
    channel->unk0_trkTotal = trackTotal;

    if (channel->unk0_trkTotal > channel->unk0_trkMax) {
        channel->unk0_trkTotal = channel->unk0_trkMax;
    }
    channel->midi_quarterNote = func_0804b324(mTrkStream + 4); // Header: Division
    mTrkStream += chnkLength; // Skip (Header: Data)

    // Track:
    mTrkReader = channel->midi_trackReader;
    for (i = 0; i < channel->unk0_trkTotal; i++) {
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
    channel->unk0_10 = 0;
    channel->unk0_pause = 0;
    channel->speed1 = 1;
    channel->beatscript_channelVol = 0x100;
    channel->speed2 = 0x100;
    channel->beatscript_trackVol = 0x100;
    channel->unk0_27 = 0;
    channel->beatscript_volFadeMul = 0x8000;
    channel->beatscript_volFadeDcr = 0;
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


#include "asm/lib_08049144/asm_0804b560.s"

#include "asm/lib_08049144/asm_0804b574.s"

#include "asm/lib_08049144/asm_0804b5a0.s"

#include "asm/lib_08049144/asm_0804b5d8.s"

#include "asm/lib_08049144/asm_0804b5e4.s"

#include "asm/lib_08049144/asm_0804b5f0.s"

#include "asm/lib_08049144/asm_0804b620.s"

#include "asm/lib_08049144/asm_0804b650.s"

#include "asm/lib_08049144/asm_0804b654.s"

#include "asm/lib_08049144/asm_0804b65c.s"

#include "asm/lib_08049144/asm_0804b66c.s"

#include "asm/lib_08049144/asm_0804b67c.s"

#include "asm/lib_08049144/asm_0804b6c4.s"

#include "asm/lib_08049144/asm_0804b6f0.s"

#include "asm/lib_08049144/asm_0804b710.s"

#include "asm/lib_08049144/asm_0804b734.s"

#include "asm/lib_08049144/asm_0804b7dc.s"

#include "asm/lib_08049144/asm_0804b7ec.s"

#include "asm/lib_08049144/asm_0804b7fc.s"

#include "asm/lib_08049144/asm_0804b80c.s"

#include "asm/lib_08049144/asm_0804b898.s"


// [func_0804b95c] Interpret MIDI Controller Change Instruction
void func_0804b95c(struct AudioChannel *audioChnl, u32 arg1, u8 ctrl, u8 arg3) {
    struct MidiChannelBus *channelBus = audioChnl->midi_channelBus;

    switch (ctrl) {
        case 0x00: func_0804abc8(channelBus, arg1, arg3 | 0x8000); break;
        case 0x01: func_0804ac40(channelBus, arg1, arg3); break;
        case 0x07: func_0804aa5c(channelBus, arg1, arg3); break;
        case 0x0A: func_0804aa7c(channelBus, arg1, arg3); break;
        case 0x0B: func_0804aba8(channelBus, arg1, arg3); break;
        case 0x14: func_0804ace4(channelBus, arg1, arg3); break;
        case 0x15: func_0804accc(channelBus, arg1, arg3); break;
        case 0x16: func_0804aca0(channelBus, arg1, arg3); break;
        case 0x1A: func_0804acd8(channelBus, arg1, arg3); break;
        case 0x20: func_0804abc8(channelBus, arg1, arg3); break;
        case 0x21: func_0804ad18(channelBus, arg1, arg3); break;
        case 0x0E: D_03005648 = arg3; break;
        case 0x10: if (D_03005648 < D_03005b20) D_03005b7c[D_03005648] = arg3; break;
        case 0x48: func_0804ac80(channelBus, arg1, arg3); break;
        case 0x49: D_03005b3c = arg3;
            switch (arg3) {
                case 0:
                case 1: func_0804ae60(&D_03005b30); break;
                case 2: func_08049be4(); func_0804ae54(&D_03005b30); break;
            } break;
        case 0x4A: D_03005b3c = 0;
            func_0804ae60(&D_03005b30);
            func_08049be4();
            func_08049b70((arg3 * 2) - 0x80);
            break;
        case 0x4C: D_03005640 = arg3 * 2; break;
        case 0x4D: func_08049b8c(arg3); break;
        case 0x4B: func_0804acf0(channelBus, arg1, arg3); break;
        case 0x4E: audioChnl->unk2D = arg3; break;
        case 0x4F: audioChnl->unk2E = arg3; break;
        case 0x50: audioChnl->unk2F = arg3; break;
        case 0x51: audioChnl->unk30 = arg3; break;
        case 0x52: func_0804ad38(channelBus, arg1, arg3); break;
        case 0x53: func_0804ad90(channelBus, arg1, arg3); break;
        case 0x54: func_0804ad9c(channelBus, arg1, arg3); break;
    }
}


#include "asm/lib_08049144/asm_0804bc5c.s"

#include "asm/lib_08049144/asm_0804bcc0.s"

#include "asm/lib_08049144/asm_0804bed0.s"

#include "asm/lib_08049144/asm_0804c040.s"

#include "asm/lib_08049144/asm_0804c0f8.s"

#include "asm/lib_08049144/asm_0804c170.s"

#include "asm/lib_08049144/asm_0804c340.s"

#include "asm/lib_08049144/asm_0804c358.s"

#include "asm/lib_08049144/asm_0804c35c.s"


// [func_0804c398] Parse MIDI Variable-Length Time
u32 func_0804c398(u8 **midiStream) {
    u8 *mStream = *midiStream;
    u8 temp;
    u32 time = 0;

    do {
        temp = *mStream;
        mStream++;
        time <<= 7;
        time |= (temp & 0x7f);
    } while (temp & 0x80);

    *midiStream = mStream;
    return time;
}


#include "asm/lib_08049144/asm_0804c3c0.s"

#include "asm/lib_08049144/asm_0804c4bc.s"

#include "asm/lib_08049144/asm_0804c508.s"

#include "asm/lib_08049144/asm_0804c6c8.s"

#include "asm/lib_08049144/asm_0804c778.s"

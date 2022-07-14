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
        case DIRECTSOUND_MODE_STEREO:
            REG_DMA1CNT_H = 0;
            REG_DMA2CNT_H = 0;
            REG_DMA1SAD = (u32) &D_0300563c[D_030064a0];
            REG_DMA2SAD = (u32) &D_030064b8[D_030064a0];
            REG_DMA1CNT_H = (
                DMACNT_DEST_INC_TYPE_INCREMENT
                | DMACNT_SRC_INC_TYPE_INCREMENT
                | DMACNT_REPEAT
                | DMACNT_SIZE
                | DMACNT_START_MODE_VBLANK
                | DMACNT_START_MODE_FIFO_EMPTY
                | DMACNT_ENABLE
            ); // ( = 0xB600)
            dummy = 0;
            dummy = 0;
            REG_DMA2CNT_H = (
                DMACNT_DEST_INC_TYPE_INCREMENT
                | DMACNT_SRC_INC_TYPE_INCREMENT
                | DMACNT_REPEAT
                | DMACNT_SIZE
                | DMACNT_START_MODE_VBLANK
                | DMACNT_START_MODE_FIFO_EMPTY
                | DMACNT_IRQ
                | DMACNT_ENABLE
            ); // ( = 0xF600)
            dummy = 0;
            dummy = 0;
            break;
        case DIRECTSOUND_MODE_MONO1:
            REG_DMA2CNT_H = 0;
            REG_DMA2SAD = (u32) &D_0300563c[D_030064a0];
            REG_DMA2CNT_H = (
                DMACNT_DEST_INC_TYPE_INCREMENT
                | DMACNT_SRC_INC_TYPE_INCREMENT
                | DMACNT_REPEAT
                | DMACNT_SIZE
                | DMACNT_START_MODE_VBLANK
                | DMACNT_START_MODE_FIFO_EMPTY
                | DMACNT_IRQ
                | DMACNT_ENABLE
            ); // ( = 0xF600)
            dummy = 0;
            dummy = 0;
            break;
        case DIRECTSOUND_MODE_MONO2:
            REG_DMA1CNT_H = 0;
            REG_DMA2CNT_H = 0;
            REG_DMA1SAD = (u32) &D_0300563c[D_030064a0];
            REG_DMA2SAD = (u32) &D_0300563c[D_030064a0];
            REG_DMA1CNT_H = (
                DMACNT_DEST_INC_TYPE_INCREMENT
                | DMACNT_SRC_INC_TYPE_INCREMENT
                | DMACNT_REPEAT
                | DMACNT_SIZE
                | DMACNT_START_MODE_VBLANK
                | DMACNT_START_MODE_FIFO_EMPTY
                | DMACNT_ENABLE
            ); // ( = 0xB600)
            dummy = 0;
            dummy = 0;
            REG_DMA2CNT_H = (
                DMACNT_DEST_INC_TYPE_INCREMENT
                | DMACNT_SRC_INC_TYPE_INCREMENT
                | DMACNT_REPEAT
                | DMACNT_SIZE
                | DMACNT_START_MODE_VBLANK
                | DMACNT_START_MODE_FIFO_EMPTY
                | DMACNT_IRQ
                | DMACNT_ENABLE
            ); // ( = 0xF600)
            dummy = 0;
            dummy = 0;
            break;
    }
}


  //  //  //  //   SAMPLE READER OPERATIONS   //  //  //  //


// [func_0804930c] SAMPLE READER - Initialise Channel
void func_0804930c(u32 id, struct WaveData *sample) {
    DmaSampleReader *reader = &D_03005b88[id];
    u32 keySampleRate;
    u32 keyFreq;
    u64 sampleRate;

    reader->active = FALSE;
    reader->sample = sample->waveform;
    reader->length = sample->length >> 2;

    if ((sample->loopStart | sample->loopEnd) != 0) {
        reader->loopStart = sample->loopStart << 14;
        reader->loopEnd = sample->loopEnd << 14;
    } else {
        reader->loopStart = sample->length << 14;
        reader->loopEnd = sample->length << 14;
    }

    keyFreq = gMidiTuningTable[sample->baseKey];
    keySampleRate = D_03005b94 * keyFreq;
    sampleRate = (u64) sample->sampleRate << 28;
    reader->unk1C = __udivmoddi4((sampleRate + keySampleRate) - 1, keySampleRate);
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
    DmaSampleReader *reader = &D_03005b88[id];
    if (pitchEnv == 0) {
        reader->pitch = 0x80 << 7;
        reader->unk0_b1 = FALSE;
    } else {
        reader->pitch = ((u64) reader->unk1C * pitchEnv) >> 14;
        reader->unk0_b1 = (-(0x4000 ^ reader->pitch) | (0x4000 ^ reader->pitch)) >> 0x1f;
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


#include "asm/agb_midi/asm_08049490.s"

#include "asm/agb_midi/asm_080497f8.s"

// [func_08049ad8] Initialise(?) REG_DMA1CNT & REG_DMA2CNT
void func_08049ad8(void) {
    volatile u32 dummy;

    D_030064c4 = 0;
    if (D_030055f4 != DIRECTSOUND_MODE_MONO1) {
        REG_DMA1CNT = ((DMACNT_ENABLE | DMACNT_SIZE | DMACNT_DEST_INC_TYPE_UNCHANGED) << 16) + (16 / 4);
        dummy = 0;
        dummy = 1;
        REG_DMA1CNT_H = DMACNT_SIZE;
    }
    REG_DMA2CNT = ((DMACNT_ENABLE | DMACNT_SIZE | DMACNT_DEST_INC_TYPE_UNCHANGED) << 16) + (16 / 4);
    dummy = 0;
    dummy = 1;
    REG_DMA2CNT_H = DMACNT_SIZE;
}

// [func_08049b34] Set Reverb Controllers
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
    if (!D_03005b44) D_03005620[0] = arg0;
}

// [func_08049b8c] MIDI Controller 4D - ??
void func_08049b8c(u8 arg0) {
    if (!D_03005b44) D_03005b28 = arg0;
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
    if (!D_03005b44) func_08049bac();
}

// [func_08049bfc] ??
void func_08049bfc(u32 enableFilter, u32 eq, u32 gain) {
    if (enableFilter != FALSE) enableFilter = TRUE;
    if (D_03005b44 != enableFilter) {
        func_08049bac();
        D_03005b44 = enableFilter;
        D_03005620[0] = eq;
        D_03005b28 = gain;
    }
}

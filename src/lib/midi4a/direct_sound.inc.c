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


  //  //  //  //   DIRECTSOUND STREAM OPERATIONS   //  //  //  //


// [func_0804930c] SAMPLE READER - Initialise Stream
void func_0804930c(u32 id, const struct SampleData *sample) {
    SampleStream *reader = &D_03005b88[id];
    u32 keySampleRate;
    u32 keyFreq;
    u64 sampleRate;

    reader->active = FALSE;
    reader->sample = sample->waveform;
    reader->length = sample->length / 4;

    if ((sample->loopStart | sample->loopEnd) != 0) {
        reader->loopStart = sample->loopStart << (7 * 2);
        reader->loopEnd = sample->loopEnd << (7 * 2);
    } else {
        reader->loopStart = sample->length << (7 * 2);
        reader->loopEnd = sample->length << (7 * 2);
    }

    keyFreq = gMidiTuningTable[sample->baseKey];
    keySampleRate = D_03005b94 * keyFreq;
    sampleRate = (u64) sample->sampleRate << (7 * 4);
    reader->unk1C = __udivmoddi4((sampleRate + keySampleRate) - 1, keySampleRate);
}

// [func_08049394] SAMPLE READER - Reset Stream
void func_08049394(u32 id) {
    D_03005b88[id].position = 0;
    D_03005b88[id].active = TRUE;
}

// [func_080493b0] SAMPLE READER - Close Stream
void func_080493b0(u32 id) {
    D_03005b88[id].active = FALSE;
}

// [func_080493c8] SAMPLE READER - Set Panning
void func_080493c8(u32 id, u32 left, u32 right) {
    D_03005b88[id].volumeL = left;
    D_03005b88[id].volumeR = right;
}

// [func_080493e4] SAMPLE READER - Set Volume Envelope
void func_080493e4(u32 id, u32 volume) {
    D_03005b88[id].volume = volume;
}

// [func_080493f4] SAMPLE READER - Set Pitch Envelope
void func_080493f4(u32 id, u32 freq) {
    SampleStream *reader = &D_03005b88[id];
    if (freq == 0) {
        reader->frequency = 0x4000;
        reader->unk0_b1 = FALSE;
    } else {
        reader->frequency = ((u64) reader->unk1C * freq) >> (7 * 2);
        reader->unk0_b1 = (-(0x4000 ^ reader->frequency) | (0x4000 ^ reader->frequency)) >> 0x1f;
    }
}

// [func_08049450] SAMPLE READER - Set Flag: "unk0_b2"
void func_08049450(u32 id, u32 arg1) {
    D_03005b88[id].unk0_b2 = arg1;
}

// [func_08049470] SAMPLE READER - Set Flag: "Use EQ"
void func_08049470(u32 id, u32 useEQ) {
    D_03005b88[id].useEQ = useEQ;
}


  //  //  //  //   DIRECTSOUND OPERATIONS   //  //  //  //


#include "asm/midi4a/asm_08049490.s"

// [func_080497f8] Update DirectSound
void func_080497f8(void) {
    HandWritten func8b9c, func83b8, func8d58, func8fc0; // sp0, sp4, sp8, spC
    u32 noSamplesProcessed; // sp10
    SampleStream *sampleReader; // sp14
    u32 usedEQFilter; // sp18
    s32 check; // sp1C

    u32 i;
    s32 a, b, c;
    u32 nPhrases;
    s32 eqPos;
    u16 eqGain;
    u32 eqSmoothing;
    u32 sampleBufferPos;

    if (!D_030064c4) return;

    func8b9c = AS_THUMB(func_08048b9c);
    func83b8 = AS_THUMB(func_080483b8);
    func8d58 = AS_THUMB(func_08048d58);
    func8fc0 = AS_THUMB(func_08048fc0);
    sampleReader = D_03005b88;

    a = (D_030064a8 + 259) / 4; // = ~120.5
    if (a > D_03005b24) a = D_03005b24;

    b = D_03005b40 - D_030064a0;
    if (b < 0) b += D_03005b24;

    c = (a > b) ? (a - b) : 0;

    eqPos = (u8) D_03005620[0];
    if (D_030064c0 >= 0) {
        // High-Pass
        if ((s8) eqPos < 0) {
            D_03005620[1] = 0;
            D_03005620[2] = 0;
        }
    }
    else if (D_030064c0 < 0) {
        // Low-Pass
        if ((s8) eqPos >= 0) {
            D_03005620[1] = D_030064b0[D_03005638 - 2];
            D_03005620[2] = D_030064b0[D_03005638 - 1];
        }
    }
    D_030064c0 = eqPos;

    while (c != 0) {
        nPhrases = D_03005638 / 4;
        if (nPhrases > c) nPhrases = c;
        (AS_THUMB(func_08048758))(nPhrases);

        noSamplesProcessed = TRUE;
        usedEQFilter = FALSE;
        eqPos = (u8) D_03005620[0];
        eqGain = 0;
        i = 0;
        check = c - nPhrases;

        for (i = 0; i < D_03005610; i++) {
            eqSmoothing = 0x100 - eqPos;

            if (sampleReader[i].active) {
                if (sampleReader[i].useEQ || D_03005b44) {
                    noSamplesProcessed = FALSE;
                    usedEQFilter = TRUE;
                    if ((s8) eqPos < 0) {
                        eqGain = (sampleReader[i].volume * eqSmoothing * D_03005b28) >> 7;
                    }
                    D_030064ac = eqGain;
                    if (!sampleReader[i].unk0_b1) {
                        func8b9c(nPhrases, &sampleReader[i]);
                    }
                    else if (sampleReader[i].unk0_b2) {
                        func8d58(nPhrases, &sampleReader[i]);
                    }
                    else {
                        func83b8(nPhrases, &sampleReader[i]);
                    }
                }
            }
        }

        if (usedEQFilter) {
            func8fc0(nPhrases, D_03005620);
        }

        D_030064ac = 0;
        for (i = 0; i < D_03005610; i++) {
            if (sampleReader[i].active) {
                if (!sampleReader[i].useEQ && !D_03005b44) {
                    noSamplesProcessed = FALSE;
                    if (!sampleReader[i].unk0_b1) {
                        func8b9c(nPhrases, &sampleReader[i]);
                    }
                    else if (sampleReader[i].unk0_b2) {
                        func8d58(nPhrases, &sampleReader[i]);
                    }
                    else {
                        func83b8(nPhrases, &sampleReader[i]);
                    }
                }
            }
        }

        D_03005720[0x3ff] = (noSamplesProcessed) ? 0 : -1;
        (AS_THUMB(func_08048a00))(nPhrases);

        sampleBufferPos = D_03005b40 + nPhrases;
        while (sampleBufferPos >= D_03005b24) {
            sampleBufferPos -= D_03005b24;
        }
        D_03005b40 = sampleBufferPos;
        c = check;
        D_03005b84 = REG_VCOUNT;
    }
}

// [func_08049ad8] DIRECTSOUND - Initialise(?) REG_DMA1CNT & REG_DMA2CNT (unused)
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

// [func_08049b34] DIRECTSOUND - Set Reverb Controllers
void func_08049b34(u32 arg0, u32 arg1, u32 arg2, u32 arg3) {
    D_030064a4 = arg0;
    D_03005630 = arg1;
    D_03005b48 = arg2;
    D_03005634 = arg3;
}

// [func_08049b5c] DIRECTSOUND STREAM - Check If Active
u32 func_08049b5c(u32 id) {
    return D_03005b88[id].active;
}

// [func_08049b70] DIRECTSOUND - Set Band-Pass Filter Position
void func_08049b70(u32 eq) {
    if (!D_03005b44) D_03005620[0] = eq;
}

// [func_08049b8c] DIRECTSOUND - Set Band-Pass Filter High(?) Gain
void func_08049b8c(u8 gain) {
    if (!D_03005b44) D_03005b28 = gain;
}

// [func_08049bac] DIRECTSOUND - Initialise Band-Pass Filter
void func_08049bac(void) {
    D_03005620[2] = 0;
    D_03005620[1] = 0;
    D_03005620[0] = 0;
    D_030064c0 = 0;
    D_030064b0[D_03005638 - 2] = D_030064b0[D_03005638 - 1] = 0;
}

// [func_08049be4] DIRECTSOUND - Reset Band-Pass Filter
void func_08049be4(void) {
    if (!D_03005b44) func_08049bac();
}

// [func_08049bfc] DIRECTSOUND - Set Band-Pass Filter
void func_08049bfc(u32 enableFilter, u32 eq, u32 gain) {
    if (enableFilter != FALSE) enableFilter = TRUE;
    if (D_03005b44 != enableFilter) {
        func_08049bac();
        D_03005b44 = enableFilter;
        D_03005620[0] = eq;
        D_03005b28 = gain;
    }
}

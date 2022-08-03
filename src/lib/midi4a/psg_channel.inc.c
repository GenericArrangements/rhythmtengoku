  //  //  //  //   PSG CHANNEL OPERATIONS   //  //  //  //


// [func_0804af30] PSG CHANNEL - Stop All PSG Channels
void midi_note_psg_stop(void) {
    u32 i;

    for (i = 0; i < 4; i++) {
        D_030056a0[i].active = FALSE;
    }

    for (i = 0; i < 4; i++) {
        D_03001578[i] = 0;
    }
    *D_03001590 = 0;
}

// [func_0804af74] PSG CHANNEL - Initialise
void midi_note_psg_init(u32 id) {
    D_03001578[id] = 1;
    D_03001580[id] = -1;
    D_03001588[id] = -1;
}

// [func_0804afa4] PSG CHANNEL - Convert Pitch Envelope to PSG Frequency Register Variable
u32 midi_note_psg_get_freq(u32 freq) {
    s32 psgFreq;

    if (freq == 0) return 0;
    psgFreq = 0x800 - ((0x400000 / freq) >> 5);
    Clamp(psgFreq, 0, 0x7ff);
    return psgFreq;
}

// [func_0804afd8] PSG CHANNEL - Convert Volume Envelope to PSG Volume Register Variable
u32 midi_note_psg_get_vol(u32 vol) {
    u32 psgEnv = vol;

    psgEnv = (vol >> 3);
    vol = psgEnv >> 1;
    psgEnv += psgEnv >> 1;
    Ceil(psgEnv, 0xf);
    return psgEnv;
}

// [func_0804aff0] Update PSG Channel
#include "asm/midi4a/asm_0804aff0.s"

// [func_0804b2c4] PSG CHANNEL - Update All
void midi_note_psg_update_all(void) {
    SoundChannel *psgChnl = D_030056a0;
    u16 regControls = 0;
    u32 i;

    for (i = 0; i < 4; i++) {
        // Update PSG Channel
        midi_note_psg_update(i);

        // Set Panning
        regControls >>= 1;
        if (psgChnl->active) {
            // Set Enable Flag LEFT
            if (psgChnl->midiChannel->panning <= 64) {
                regControls |= 0x8000;
            }
            // Set Enable Flag RIGHT
            if (psgChnl->midiChannel->panning >= 64) {
                regControls |= 0x800;
            }
        }
        psgChnl++;
    }

    // Set Master Volume to 7 (LEFT & RIGHT)
    regControls |= (SOUNDCNT_DMG_LEFT_VOLUME_MASK | SOUNDCNT_DMG_RIGHT_VOLUME_MASK);
    // Store to IO Register
    REG_SOUNDCNT_L = regControls;
}

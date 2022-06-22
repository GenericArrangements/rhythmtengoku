  //  //  //  //   PSG CHANNEL OPERATIONS   //  //  //  //


// [func_0804af30] PSG CHANNEL - Stop All PSG Buffer Channels
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

// [func_0804af74] PSG CHANNEL - Initialise
void func_0804af74(u32 id) {
    D_03001578[id] = 1;
    D_03001580[id] = -1;
    D_03001588[id] = -1;
}

// [func_0804afa4] PSG CHANNEL - Convert Pitch Envelope to PSG Frequency Register Variable
u32 func_0804afa4(u32 pitchEnv) {
    s32 var;

    if (pitchEnv == 0) return 0;
    var = 0x800 - ((0x400000 / pitchEnv) >> 5);
    if (var < 0) var = 0;
    if (var > 0x7ff) var = 0x7ff;
    return var;
}

// [func_0804afd8] PSG CHANNEL - Convert Volume Envelope to PSG Volume Register Variable
u32 func_0804afd8(u32 volumeEnv) {
    u32 var = volumeEnv;

    var = (volumeEnv >> 3);
    volumeEnv = var >> 1;
    var += var >> 1;
    if (var > 0xf) var = 0xf;
    return var;
}

// [func_0804aff0] Update PSG Buffer Channel
#include "asm/agb_midi/asm_0804aff0.s"

// [func_0804b2c4] PSG CHANNEL - Update All
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

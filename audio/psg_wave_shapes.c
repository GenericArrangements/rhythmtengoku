#include "global.h"
#include "sound.h"
#include "src/lib/midi4a_internal.h"

#define CREATE_PSG_WAVE(a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p)    \
{                                                           \
    (a) | (b << 8) | (c << 16) | (d << 24),                 \
    (e) | (f << 8) | (g << 16) | (h << 24),                 \
    (i) | (j << 8) | (k << 16) | (l << 24),                 \
    (m) | (n << 8) | (o << 16) | (p << 24)                  \
}

// PSG Wave Shape: Sine
// D_08a86870
const u32 sine_psg[] = CREATE_PSG_WAVE(
    0x00, 0x11, 0x23, 0x56, 0x89, 0xAC, 0xDE, 0xEF,
    0xFF, 0xEE, 0xDC, 0xA9, 0x86, 0x53, 0x21, 0x10
);

// PSG Wave Shape: Triangle
// D_08a86880
const u32 triangle_psg[] = CREATE_PSG_WAVE(
    0x01, 0x23, 0x45, 0x67, 0x89, 0xAB, 0xCD, 0xEF,
    0xFE, 0xDC, 0xBA, 0x98, 0x76, 0x54, 0x32, 0x10
);

// PSG Wave Shape: Sawtooth
// D_08a86890
const u32 sawtooth_psg[] = CREATE_PSG_WAVE(
    0xFF, 0xEE, 0xDD, 0xCC, 0xBB, 0xAA, 0x99, 0x88,
    0x77, 0x66, 0x55, 0x44, 0x33, 0x22, 0x11, 0x00
);

// PSG Wave Shape: Cotangent
// D_08a868a0
const u32 cotangent_psg[] = CREATE_PSG_WAVE(
    0xFE, 0xDC, 0xBA, 0x99, 0x88, 0x88, 0x88, 0x88,
    0x77, 0x77, 0x77, 0x77, 0x66, 0x54, 0x32, 0x10
);

// PSG Wave Shape: Pulse, 12.5% Duty
// D_08a868b0
const u32 pulse_12_5_psg[] = CREATE_PSG_WAVE(
    0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
);

// PSG Wave Shape: Pulse, 25% Duty
// D_08a868c0
const u32 pulse_25_psg[] = CREATE_PSG_WAVE(
    0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
);

// PSG Wave Shape: Pulse, 50% Duty
// D_08a868d0
const u32 pulse_50_psg[] = CREATE_PSG_WAVE(
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
);

#include "global.h"
#include "sound.h"
#include "midi4a_internal.h"

// Convert MIDI Note values to standard frequency values.
// D_08a86008
const u16 gMidiTuningTable[] = {
    8,     8,     9,     10,    10,    11,    12,    12,    13,    14,    15,    15,        // C-1 .. B-1
    16,    17,    18,    19,    21,    22,    23,    25,    26,    28,    29,    31,        //  C0 .. B0
    33,    35,    37,    39,    41,    44,    46,    49,    52,    55,    58,    62,        //  C1 .. B1
    65,    69,    73,    78,    82,    87,    92,    98,    104,   110,   117,   123,       //  C2 .. B2
    131,   139,   147,   156,   165,   175,   185,   196,   208,   220,   233,   247,       //  C3 .. B3
    262,   277,   294,   311,   330,   349,   370,   392,   415,   440,   466,   494,       //  C4 .. B4
    523,   554,   587,   622,   659,   698,   740,   784,   831,   880,   932,   988,       //  C5 .. B5
    1047,  1109,  1175,  1245,  1319,  1397,  1480,  1568,  1661,  1760,  1865,  1976,      //  C6 .. B6
    2093,  2218,  2349,  2489,  2637,  2794,  2960,  3136,  3322,  3520,  3729,  3951,      //  C7 .. B7
    4186,  4435,  4699,  4978,  5274,  5588,  5920,  6272,  6645,  7040,  7459,  7902,      //  C8 .. B8
    8372,  8870,  9397,  9956,  10548, 11175, 11840, 12544                                  //  C9 .. G9
};

// Convert step increments (in semitones) to frequency increments.
//      f = (2^(steps/12) - 1) << 0x10
// D_08a86108
const u32 gStepFreqTable[] = {
    UQ16(0.0000000000), // 0
    UQ16(0.0597076417), // 3913
    UQ16(0.1222991944), // 8015
    UQ16(0.1891937256), // 12399
    UQ16(0.2599029542), // 17033
    UQ16(0.3349151612), // 21949
    UQ16(0.4142303467), // 27147
    UQ16(0.4983215333), // 32658
    UQ16(0.5871887208), // 38482
    UQ16(0.6817932129), // 44682
    UQ16(0.7816467286), // 51226
    UQ16(0.8877105713), // 58177
    UQ16(1.0000000000), // 65536
    UQ16(1.1184844971)  // 73301
};

// Used for modulation updates and the System-Exclusive Message.
// D_08a86140
const s16 gMidiSineTable[] = {
    0,    6,    12,   18,   25,   31,   37,   43,   50,   56,   62,   68,   74,   80,   86,   92,
    98,   103,  109,  115,  120,  126,  131,  137,  142,  147,  152,  157,  162,  167,  172,  176,
    181,  185,  190,  194,  198,  202,  206,  209,  213,  216,  220,  223,  226,  229,  231,  234,
    236,  239,  241,  243,  245,  247,  248,  250,  251,  252,  253,  254,  255,  255,  256,  256,
    256,  256,  256,  255,  255,  254,  253,  252,  251,  250,  248,  247,  245,  243,  241,  239,
    236,  234,  231,  229,  226,  223,  220,  216,  213,  209,  206,  202,  198,  194,  190,  185,
    181,  176,  172,  167,  162,  157,  152,  147,  142,  137,  131,  126,  120,  115,  109,  103,
    98,   92,   86,   80,   74,   68,   62,   56,   50,   43,   37,   31,   25,   18,   12,   6,
    0,    -6,   -12,  -18,  -25,  -31,  -37,  -43,  -50,  -56,  -62,  -68,  -74,  -80,  -86,  -92,
    -98,  -103, -109, -115, -120, -126, -131, -137, -142, -147, -152, -157, -162, -167, -172, -176,
    -181, -185, -190, -194, -198, -202, -206, -209, -213, -216, -220, -223, -226, -229, -231, -234,
    -236, -239, -241, -243, -245, -247, -248, -250, -251, -252, -253, -254, -255, -255, -256, -256,
    -256, -256, -256, -255, -255, -254, -253, -252, -251, -250, -248, -247, -245, -243, -241, -239,
    -236, -234, -231, -229, -226, -223, -220, -216, -213, -209, -206, -202, -198, -194, -190, -185,
    -181, -176, -172, -167, -162, -157, -152, -147, -142, -137, -131, -126, -120, -115, -109, -103,
    -98,  -92,  -86,  -80,  -74,  -68,  -62,  -56,  -50,  -43,  -37,  -31,  -25,  -18,  -12,  -6
};

// Never used.
// D_08a86340
const s16 gMidiCosineTable[] = {
    256,  256,  256,  255,  255,  254,  253,  252,  251,  250,  248,  247,  245,  243,  241,  239,
    236,  234,  231,  229,  226,  223,  220,  216,  213,  209,  206,  202,  198,  194,  190,  185,
    181,  176,  172,  167,  162,  157,  152,  147,  142,  137,  131,  126,  120,  115,  109,  103,
    98,   92,   86,   80,   74,   68,   62,   56,   50,   43,   37,   31,   25,   18,   12,   6,
    0,    -6,   -12,  -18,  -25,  -31,  -37,  -43,  -50,  -56,  -62,  -68,  -74,  -80,  -86,  -92,
    -98,  -103, -109, -115, -120, -126, -131, -137, -142, -147, -152, -157, -162, -167, -172, -176,
    -181, -185, -190, -194, -198, -202, -206, -209, -213, -216, -220, -223, -226, -229, -231, -234,
    -236, -239, -241, -243, -245, -247, -248, -250, -251, -252, -253, -254, -255, -255, -256, -256,
    -256, -256, -256, -255, -255, -254, -253, -252, -251, -250, -248, -247, -245, -243, -241, -239,
    -236, -234, -231, -229, -226, -223, -220, -216, -213, -209, -206, -202, -198, -194, -190, -185,
    -181, -176, -172, -167, -162, -157, -152, -147, -142, -137, -131, -126, -120, -115, -109, -103,
    -98,  -92,  -86,  -80,  -74,  -68,  -62,  -56,  -50,  -43,  -37,  -31,  -25,  -18,  -12,  -6,
    0,    6,    12,   18,   25,   31,   37,   43,   50,   56,   62,   68,   74,   80,   86,   92,
    98,   103,  109,  115,  120,  126,  131,  137,  142,  147,  152,  157,  162,  167,  172,  176,
    181,  185,  190,  194,  198,  202,  206,  209,  213,  216,  220,  223,  226,  229,  231,  234,
    236,  239,  241,  243,  245,  247,  248,  250,  251,  252,  253,  254,  255,  255,  256,  256
};

// Convert standard volume for PSG Channel 3 (Wave).
// D_08a86540
const u16 gPsgWaveVolTable[] = {
    0x60 << 8,
    0x40 << 8,
    0x80 << 8,
    0x20 << 8
};

// PSG hardware registers (length & envelope).
// D_08a86548
const IOReg gPsgEnvRegTable[] = {
    &REG_SOUND1CNT_H,
    &REG_SOUND2CNT_L,
    &REG_SOUND3CNT_H,
    &REG_SOUND4CNT_L
};

// PSG hardware registers (frequency).
// D_08a86558
const IOReg gPsgFreqRegTable[] = {
    &REG_SOUND1CNT_X,
    &REG_SOUND2CNT_H,
    &REG_SOUND3CNT_X,
    &REG_SOUND4CNT_H
};

// Convert standard frequency for PSG Channel 4 (Noise).
// D_08a86568
const u8 gPsgNoiseFreqTable[] = {
    0xD7, 0xD6, 0xD5, 0xD4,
    0xC7, 0xC6, 0xC5, 0xC4,
    0xB7, 0xB6, 0xB5, 0xB4,
    0xA7, 0xA6, 0xA5, 0xA4,
    0x97, 0x96, 0x95, 0x94,
    0x87, 0x86, 0x85, 0x84,
    0x77, 0x76, 0x75, 0x74,
    0x67, 0x66, 0x65, 0x64,
    0x57, 0x56, 0x55, 0x54,
    0x47, 0x46, 0x45, 0x44,
    0x37, 0x36, 0x35, 0x34,
    0x27, 0x26, 0x25, 0x24,
    0x17, 0x16, 0x15, 0x14,
    0x07, 0x06, 0x05, 0x04,
    0x03, 0x02, 0x01, 0x00
};

// Loop start/end markers used in MIDI sequences.
// D_08a865a4
const char gMidiLoopStartSym[] = "[";
// D_08a865a8
const char gMidiLoopEndSym[] = "]";

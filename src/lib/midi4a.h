#pragma once

#include "global.h"
#include "sound.h"
#include "midi4a_internal.h"

  // // // // // // // // // // // // // // // // // // // //



  // // // // // // // // // // // // // // // // // // // //

extern u16 D_03001570;          // [D_03001570] MIDI4AGB - Pseudo-RNG Variable

extern u8  D_03001578[4];       // [D_03001578] PSG CHANNEL - ?? (checked by TONE 1 and WAVE)
extern u16 D_03001580[4];       // [D_03001580] PSG CHANNEL - Initial Volume of Envelope
extern u16 D_03001588[4];       // [D_03001588] PSG CHANNEL - Frequency
extern u8 *D_03001590;          // [D_03001590] PSG CHANNEL - Wave Pattern

extern SoundPlayer *D_03001598; // [D_03001598] TEST PLAYER - Sound Player
extern MidiBus *D_0300159c;     // [D_0300159c] TEST PLAYER - MIDI Bus
extern u8 *D_030015a0;          // [D_030015a0] TEST PLAYER - Sequence Array (max. size = 0x200)
extern u16 D_030015a4;          // [D_030015a4] TEST PLAYER - Sequence Length
extern u8  D_030015a6;          // [D_030015a6] TEST PLAYER - Sequence Current Command
extern u8  D_030015a7[4];       // [D_030015a7] UNDEFINED - Initial value at D_03005b7c

extern SoundPlayer D_030015ac;  // [D_030015ac] MUSIC PLAYER 0
extern SoundPlayer D_030015e4;  // [D_030015e4] MUSIC PLAYER 1
extern SoundPlayer D_0300161c;  // [D_0300161c] MUSIC PLAYER 2
extern SoundPlayer D_03001654;  // [D_03001654] SFX PLAYER 0
extern SoundPlayer D_0300168c;  // [D_0300168c] SFX PLAYER 1
extern SoundPlayer D_030016c4;  // [D_030016c4] SFX PLAYER 2
extern SoundPlayer D_030016fc;  // [D_030016fc] SFX PLAYER 3
extern SoundPlayer D_03001734;  // [D_03001734] SFX PLAYER 4
extern SoundPlayer D_0300176c;  // [D_0300176c] SFX PLAYER 5
extern SoundPlayer D_030017a4;  // [D_030017a4] SFX PLAYER 6
extern SoundPlayer D_030017dc;  // [D_030017dc] SFX PLAYER 7
extern SoundPlayer D_03001814;  // [D_03001814] SFX PLAYER 8
extern SoundPlayer D_0300184c;  // [D_0300184c] SFX PLAYER 9

extern volatile s32 D_03001888[1568*2]; // [D_03001888] DIRECTSOUND - DMA Source Addresses { &D_03001888[0] = Right; &D_03001888[D_03005b24] = Left }
extern volatile s32 D_030024c8[0x400];  // [D_030024c8] DIRECTSOUND - Sample Processing ScratchPad
extern DmaSampleReader D_030028c8[12];  // [D_030028c8] DIRECTSOUND - DMA Sample Readers (12 Channels)
extern SoundChannel D_03002a48[12];     // [D_03002a48] DIRECTSOUND - DirectSound Channels (12 Channels)

extern MidiChannel D_03002bc8[15];      // [D_03002bc8] MUSIC PLAYER 0 - MIDI Channels
extern MidiBus D_03002da8;              // [D_03002da8] MUSIC PLAYER 0 - MIDI Bus
extern MidiTrackStream D_03002dd0[15];  // [D_03002dd0] MUSIC PLAYER 0 - MIDI Track Streams
extern MidiChannel D_03002f78[12];      // [D_03002f78] MUSIC PLAYER 1 - MIDI Channels
extern MidiBus D_030030f8;              // [D_030030f8] MUSIC PLAYER 1 - MIDI Bus
extern MidiTrackStream D_03003120[12];  // [D_03003120] MUSIC PLAYER 1 - MIDI Track Streams
extern MidiChannel D_03003270[12];      // [D_03003270] MUSIC PLAYER 2 - MIDI Channels
extern MidiBus D_030033f0;              // [D_030033f0] MUSIC PLAYER 2 - MIDI Bus
extern MidiTrackStream D_03003418[12];  // [D_03003418] MUSIC PLAYER 2 - MIDI Track Streams
extern MidiChannel D_03003568[5];       // [D_03003568] SFX PLAYER 0 - MIDI Channels
extern MidiBus D_03003608;              // [D_03003608] SFX PLAYER 0 - MIDI Bus
extern MidiTrackStream D_03003630[5];   // [D_03003630] SFX PLAYER 0 - MIDI Track Streams
extern MidiChannel D_030036c0[5];       // [D_030036c0] SFX PLAYER 1 - MIDI Channels
extern MidiBus D_03003760;              // [D_03003760] SFX PLAYER 1 - MIDI Bus
extern MidiTrackStream D_03003788[5];   // [D_03003788] SFX PLAYER 1 - MIDI Track Streams
extern MidiChannel D_03003818[5];       // [D_03003818] SFX PLAYER 2 - MIDI Channels
extern MidiBus D_030038b8;              // [D_030038b8] SFX PLAYER 2 - MIDI Bus
extern MidiTrackStream D_030038e0[5];   // [D_030038e0] SFX PLAYER 2 - MIDI Track Streams
extern MidiChannel D_03003970[5];       // [D_03003970] SFX PLAYER 3 - MIDI Channels
extern MidiBus D_03003a10;              // [D_03003a10] SFX PLAYER 3 - MIDI Bus
extern MidiTrackStream D_03003a38[5];   // [D_03003a38] SFX PLAYER 3 - MIDI Track Streams
extern MidiChannel D_03003ac8[5];       // [D_03003ac8] SFX PLAYER 4 - MIDI Channels
extern MidiBus D_03003b68;              // [D_03003b68] SFX PLAYER 4 - MIDI Bus
extern MidiTrackStream D_03003b90[5];   // [D_03003b90] SFX PLAYER 4 - MIDI Track Streams
extern MidiChannel D_03003c20[5];       // [D_03003c20] SFX PLAYER 5 - MIDI Channels
extern MidiBus D_03003cc0;              // [D_03003cc0] SFX PLAYER 5 - MIDI Bus
extern MidiTrackStream D_03003ce8[5];   // [D_03003ce8] SFX PLAYER 5 - MIDI Track Streams
extern MidiChannel D_03003d78[5];       // [D_03003d78] SFX PLAYER 6 - MIDI Channels
extern MidiBus D_03003e18;              // [D_03003e18] SFX PLAYER 6 - MIDI Bus
extern MidiTrackStream D_03003e40[5];   // [D_03003e40] SFX PLAYER 6 - MIDI Track Streams
extern MidiChannel D_03003ed0[5];       // [D_03003ed0] SFX PLAYER 7 - MIDI Channels
extern MidiBus D_03003f70;              // [D_03003f70] SFX PLAYER 7 - MIDI Bus
extern MidiTrackStream D_03003f98[5];   // [D_03003f98] SFX PLAYER 7 - MIDI Track Streams
extern MidiChannel D_03004028[5];       // [D_03004028] SFX PLAYER 8 - MIDI Channels
extern MidiBus D_030040c8;              // [D_030040c8] SFX PLAYER 8 - MIDI Bus
extern MidiTrackStream D_030040f0[5];   // [D_030040f0] SFX PLAYER 8 - MIDI Track Streams
extern MidiChannel D_03004180[5];       // [D_03004180] SFX PLAYER 9 - MIDI Channels
extern MidiBus D_03004220;              // [D_03004220] SFX PLAYER 9 - MIDI Bus
extern MidiTrackStream D_03004248[5];   // [D_03004248] SFX PLAYER 9 - MIDI Track Streams



extern u16 D_030055f0;              // [D_030055f0] MIDI4AGB - Set to REG_VCOUNT near the start of each update.
extern u32 D_030055f4;              // [D_030055f4] DIRECTSOUND - Initial Sound Mode { 0 = Stereo; 1 = Mono (One Channel); 2 = Mono (Two Channels) }
extern s32 D_03005600[4];           // [D_03005600] REVERB - Previous Processed Samples (R+L, x2)
extern u16 D_03005610;              // [D_03005610] DIRECTSOUND - Number of DMA Sample Readers ( = 12)
extern s32 D_03005620[3];           // [D_03005620] FILTER EQ - [0] = Filter Setting; [1], [2] = Previous Samples (R+L)
extern u32 D_0300562c;              // [D_0300562c] ??? - Current Speed (NOT Tempo)
extern u32 D_03005630;              // [D_03005630] REVERB - Controller #2 (init. = 0)
extern u32 D_03005634;              // [D_03005634] REVERB - Controller #4 (init. = 4)
extern u32 D_03005638;              // [D_03005638] DIRECTSOUND - Sample Processing ScratchPad Size, in L+R pairs ( = 0x80)
extern volatile u32 *D_0300563c;    // [D_0300563c] DIRECTSOUND - REG_DMA1SAD (Right Audio Source) ( = &D_03001888)
extern u8  D_03005640;              // [D_03005640] LFO - Multiplier [mCtrl4C]
extern SoundPlayer *D_03005644;     // [D_03005644] LFO - Controller Sound Player (for Tempo)
extern u16 D_03005648;              // [D_03005648] UNDEFINED - Current byte in D_03005b7c to set [mCtrl0E]

extern MidiNote D_03005650[20];     // [D_03005650] MIDI - Note Buffer
extern SoundChannel D_030056a0[4];  // [D_030056a0] PSG CHANNEL - PSG Channels { 0 = Tone+Sweep; 1 = Tone; 2 = Wave; 3 = Noise }
extern s8  D_03005720[0x400];       // [D_03005720] DIRECTSOUND - DMA Buffer Sample = D_03005720[(ScratchPad Sample >> 7) & 0x3ff]
extern u16 D_03005b20;              // [D_03005b20] UNDEFINED - Total Bytes in array at D_03005b7c
extern volatile u32 D_03005b24;     // [D_03005b24] DIRECTSOUND - Number of 32-bit samples per DMA Source Address ( = 0x620 / 4 ( = 392))
extern u8  D_03005b28;              // [D_03005b28] FILTER EQ - High Gain [mCtrl4C]

extern struct LFO D_03005b30;       // [D_03005b30] LFO - Low-Frequency Oscillator
extern u8  D_03005b3c;              // [D_03005b3c] LFO - Mode { 0 = Disabled; 1 = Note Triggered; 2 = Constant }
extern volatile u32 D_03005b40;     // [D_03005b40] DIRECTSOUND - ??
extern u8  D_03005b44;              // [D_03005b44] FILTER EQ - Enable Global Filter
extern u32 D_03005b48;              // [D_03005b48] REVERB - gRVBCNT3 (init. = 2)

extern u16 D_03005b78;              // [D_03005b78] MIDI - Next Available MIDI Note
extern u8 *D_03005b7c;              // [D_03005b7c] UNDEFINED - (Byte at offset D_03005648 set by MIDI Controller 10)
extern u16 D_03005b80;              // [D_03005b80] MIDI4AGB - Set to REG_VCOUNT near the end of each update.
extern u16 D_03005b84;              // [D_03005b84] DIRECTSOUND - ??
extern DmaSampleReader *D_03005b88; // [D_03005b88] DIRECTSOUND - DmaSampleReader (12 Channels, at D_030028c8)
extern u16 D_03005b8c;              // [D_03005b8c] DIRECTSOUND - Number of DirectSound Channels ( = 12)
extern s8  D_03005b90[4];           // [D_03005b90] REVERB - Reverb Controller Update Scratch
extern u32 D_03005b94;              // [D_03005b94] MIDI4AGB - Global Sample Rate ( = 13379Hz)

extern volatile u32 D_030064a0;     // [D_030064a0] DIRECTSOUND - Offset from *D_0300563c and *D_030064b8 to operate on.
extern u32 D_030064a4;              // [D_030064a4] REVERB - gRVBCNT1 (init. = 0)
extern u32 D_030064a8;              // [D_030064a8] MIDI4AGB - 13379Hz / 60 (samples per frame, at 60fps)
extern u16 D_030064ac;              // [D_030064ac] DIRECTSOUND - ??
extern s32 *D_030064b0;             // [D_030064b0] DIRECTSOUND - Sample Processing ScratchPad ( = &D_030024c8)
extern u32 D_030064b4;              // [D_030064b4] MIDI4AGB - 16776921 / 13379Hz
extern volatile u32 *D_030064b8;    // [D_030064b8] DIRECTSOUND - REG_DMA2SAD (Left Audio Source) ( = &D_03001888[D_03005b24] ( = &D_03001ea8))
extern SoundChannel *D_030064bc;    // [D_030064bc] DIRECTSOUND - DirectSound Channels (12 Channels, at D_03002a48)
extern s8  D_030064c0;              // [D_030064c0] FILTER EQ - Duplicate of D_03005620[0] used for just one (1) singular calculation.
extern u16 D_030064c4;              // [D_030064c4] DIRECTSOUND - Enable DirectSound

  // // // // // // // // // // // // // // // // // // // //

extern const u16 gMidiTuningTable[128];     // [D_08a86008] MIDI Note to Frequency Table (A4 = 440Hz)
extern const u32 gStepFreqTable[14];        // [D_08a86108] Semitones to Frequency Table ((2^(p/12) - 1) << 10)
extern const s16 gMidiSineTable[0x100];     // [D_08a86140] Sine Table (init = 0; size = 0x100; max = 0x100; min = -0x100)
extern const s16 gMidiCosineTable[0x100];   // [D_08a86340] Cosine Table (init = 0; size = 0x100; max = 0x100; min = -0x100)

extern const u16 gPsgWaveVolTable[4];   // [D_08a86540] Convert standard volume for PSG Channel 3 (Wave)
extern const IOReg gPsgEnvRegTable[4];  // [D_08a86548] PSG hardware registers (length & envelope)
extern const IOReg gPsgFreqRegTable[4]; // [D_08a86558] PSG hardware registers (frequency)
extern const u8 gPsgNoiseFreqTable[60]; // [D_08a86568] Convert standard frequency for PSG Channel 4 (Noise)

extern const char gMidiLoopStartSym[];  // [D_08a865a4] MIDI "Loop Start" Marker: '['
extern const char gMidiLoopEndSym[];    // [D_08a865a8] MIDI "Loop End" Marker: ']'
extern const union Instrument *instrumentBanks[]; // Instrument Bank Index

extern u32 __udivmoddi4(u64, u64);

  // // // // // // // // // // // // // // // // // // // //



  // // //  HAND-WRITTEN FUNCTIONS  // // //

extern HandWritten func_08048b9c;
extern HandWritten func_080483b8;
extern HandWritten func_08048d58;
extern HandWritten func_08048fc0;
extern HandWritten func_08048758;
extern HandWritten func_08048a00;

  // // //  INTERRUPT_DMA2  // // //

extern void func_08049144(void); // [func_08049144] INTERRUPT_DMA2

  // // //  DIRECTSOUND STREAM OPERATIONS  // // //

extern void func_0804930c(u32, const struct WaveData *); // [func_0804930c] DIRECTSOUND STREAM - Initialise Stream
extern void func_08049394(u32);             // [func_08049394] DIRECTSOUND STREAM - Reset Stream
extern void func_080493b0(u32);             // [func_080493b0] DIRECTSOUND STREAM - Close Stream
extern void func_080493c8(u32, u32, u32);   // [func_080493c8] DIRECTSOUND STREAM - Set Panning
extern void func_080493e4(u32, u32);        // [func_080493e4] DIRECTSOUND STREAM - Set Volume Envelope
extern void func_080493f4(u32, u32);        // [func_080493f4] DIRECTSOUND STREAM - Set Pitch Envelope
extern void func_08049450(u32, u32);        // [func_08049450] DIRECTSOUND STREAM - Set unk0_b2
extern void func_08049470(u32, u32);        // [func_08049470] DIRECTSOUND STREAM - Set unk0_b3

  // // //  DIRECTSOUND OPERATIONS  // // //

extern void func_08049490(u32, u32, u32, volatile s32 *, u32, volatile s32 *, u16, DmaSampleReader *); // [func_08049490] DIRECTSOUND - Initialise DirectSound
extern void func_080497f8(void);                // [func_080497f8] DIRECTSOUND - Update DirectSound
extern void func_08049ad8(void);                // [func_08049ad8] DIRECTSOUND - Initialise(?) REG_DMA1CNT & REG_DMA2CNT (unused)
extern void func_08049b34(u32, u32, u32, u32);  // [func_08049b34] DIRECTSOUND - Set Reverb Controllers
extern u32  func_08049b5c(u32);                 // [func_08049b5c] DIRECTSOUND STREAM - Check If Active
extern void func_08049b70(u32);                 // [func_08049b70] DIRECTSOUND - Set Filter EQ Position
extern void func_08049b8c(u8);                  // [func_08049b8c] DIRECTSOUND - Set Filter EQ High Gain
extern void func_08049bac(void);                // [func_08049bac] DIRECTSOUND - Initialise Filter EQ
extern void func_08049be4(void);                // [func_08049be4] DIRECTSOUND - Reset Filter EQ
extern void func_08049bfc(u32, u32, u32);       // [func_08049bfc] DIRECTSOUND - Set Filter EQ

  // // //  MIDI BUS UPDATE OPERATIONS  // // //

// extern ? func_08049c34(?);               // [func_08049c34] MIDI CHANNEL - Update Modulation
extern void func_08049d08(MidiBus *);       // [func_08049d08] MIDI CHANNEL - Update Modulation (All)
extern void func_08049d30(MidiBus *, u32);  // [func_08049d30] MIDI CHANNEL - Note Cut
extern void func_08049db8(MidiBus *, u32);  // [func_08049db8] MIDI CHANNEL - Note Off
extern void func_08049e3c(MidiBus *);       // [func_08049e3c] MIDI CHANNEL - Note Cut (All)
extern void func_08049e64(MidiBus *);       // [func_08049e64] MIDI CHANNEL - Note Off (All)

  // // //  MIDI BUS INITIALISATION OPERATIONS  // // //

extern void func_08049e8c(MidiBus *, u8);                       // [func_08049e8c] MIDI BUS - Set Priority
extern void func_08049ec4(MidiBus *, u8, u16);                  // [func_08049ec4] MIDI BUS - Set Selected Track Volume & Track Selection
extern void func_08049ecc(MidiChannel *);                       // [func_08049ecc] MIDI CHANNEL - Initialise
extern void func_08049fa0(MidiBus *, u32, MidiChannel *);       // [func_08049fa0] MIDI BUS - Initialise
extern void func_0804a014(MidiBus *, const union Instrument *); // [func_0804a014] MIDI BUS - Set Sound Bank

  // // //  SOUND CHANNEL OPERATIONS  // // //

extern u32  func_0804a018(SoundChannel *);          // [func_0804a018] SOUND CHANNEL - Update Pitch
extern u32  func_0804a1f4(SoundChannel *);          // [func_0804a1f4] SOUND CHANNEL - Update Volume
extern u32  func_0804a224(SoundChannel *);          // [func_0804a224] SOUND CHANNEL - Update ADSR
extern void func_0804a2c4(u32);                     // [func_0804a2c4] DIRECTSOUND CHANNEL - Update DirectSound Channel
extern void func_0804a334(void);                    // [func_0804a334] SOUND CHANNEL - Update DirectSound Channel (All)
extern void func_0804a360(u32, SoundChannel *);     // [func_0804a360] DIRECTSOUND CHANNEL - Stop DirectSound Channels
extern s32  func_0804a3a0(MidiChannel *, u8);       // [func_0804a3a0] DIRECTSOUND CHANNEL - Get First Active DirectSound Channel not at ADSR Stage 3.
extern s32  func_0804a3fc(void);                    // [func_0804a3fc] DIRECTSOUND CHANNEL - Get First Inactive PCM Buffer
extern s32  func_0804a434(void);                    // [func_0804a434] DIRECTSOUND CHANNEL - Get DirectSound Channel with Lowest Volume
extern s32  func_0804a48c(void);                    // [func_0804a48c] DIRECTSOUND CHANNEL - Get DirectSound Channel with Lowest Volume (exclude ADSR)
// extern ? func_0804a4e0(?);                       // [func_0804a4e0] DIRECTSOUND CHANNEL - Get DirectSound Channel with Lowest Priority
extern void func_0804a5b4(MidiBus *, u32, u8);      // [func_0804a5b4] SOUND CHANNEL - MIDI 'Note Off' Event
extern s32  func_0804a628(MidiBus *, u32, u8, u8);  // [func_0804a628] DIRECTSOUND CHANNEL - Return First Most Replaceable PCM Buffer
extern u8   func_0804a65c(u8);                      // [func_0804a65c] DIRECTSOUND STREAM - Convert Panning to Right Volume
extern u8   func_0804a674(u8);                      // [func_0804a674] DIRECTSOUND STREAM - Convert Panning to Left Volume
extern u32  func_0804a690(MidiBus *, u32);          // [func_0804a690] MIDI BUS - Convert Midi Key to Frequency
extern void func_0804a6b0(MidiBus *, u32, u8, u8);  // [func_0804a6b0] SOUND CHANNEL - MIDI 'Note On' Event

  // // //  MIDI CHANNEL OPERATIONS  // // //

extern void func_0804aa40(MidiBus *, u32, u16); // [func_0804aa40] MIDI CHANNEL - Set Pitch Wheel [Evnt_E]
extern void func_0804aa5c(MidiBus *, u32, u8);  // [func_0804aa5c] MIDI CHANNEL - Set Volume [Ctrl_07]
extern void func_0804aa7c(MidiBus *, u32, u8);  // [func_0804aa7c] MIDI CHANNEL - Set Panning [Ctrl_0A]
extern u8   func_0804aaa4(MidiBus *, u32);      // [func_0804aaa4] MIDI CHANNEL - Calculate Panning Envelope
extern void func_0804aae0(MidiBus *, u32);      // [func_0804aae0] MIDI CHANNEL - Update Sample Buffer Panning
extern void func_0804ab88(MidiBus *, u32, u8);  // [func_0804ab88] MIDI Channel - Set Instrument/Patch [Evnt_C]
extern void func_0804aba8(MidiBus *, u32, u8);  // [func_0804aba8] MIDI CHANNEL - Set Expression [Ctrl_0B]
extern void func_0804abc8(MidiBus *, u32, u16); // [func_0804abc8] MIDI CHANNEL - Set Bank Select? [Ctrl_00; Ctrl_20]
extern void func_0804ac24(MidiBus *, u32, u8);  // [func_0804ac24] MIDI CHANNEL - Set unk0_b0
extern void func_0804ac40(MidiBus *, u32, u8);  // [func_0804ac40] MIDI CHANNEL - Set Modulation Depth [Ctrl_01]
extern void func_0804ac60(MidiBus *, u32, u8);  // [func_0804ac60] MIDI CHANNEL - Set unk4_b21
extern void func_0804ac80(MidiBus *, u32, u8);  // [func_0804ac80] MIDI CHANNEL - Set Filter EQ [Ctrl_48]
extern void func_0804aca0(MidiBus *, u32, u8);  // [func_0804aca0] MIDI CHANNEL - Set Modulation Type [Ctrl_16]
extern void func_0804acc0(MidiBus *, u32, u8);  // [func_0804acc0] MIDI CHANNEL - Set unkC
extern void func_0804accc(MidiBus *, u32, u16); // [func_0804accc] MIDI CHANNEL - Set Modulation Speed [Ctrl_15]
extern void func_0804acd8(MidiBus *, u32, u8);  // [func_0804acd8] MIDI CHANNEL - Set Modulation Delay [Ctrl_1A]
extern void func_0804ace4(MidiBus *, u32, u8);  // [func_0804ace4] MIDI CHANNEL - Set Modulation Range [Ctrl_14]
extern void func_0804acf0(MidiBus *, u32, u32); // [func_0804acf0] MIDI CHANNEL - Set Offset/Split Stereo Effect [Ctrl_4B]
extern void func_0804ad18(MidiBus *, u32, u8);  // [func_0804ad18] MIDI CHANNEL - Set Priority [Ctrl_21]
extern void func_0804ad38(MidiBus *, u32, u8);  // [func_0804ad38] MIDI CHANNEL - Set Random Pitch Variation [Ctrl_52]
extern void func_0804ad90(MidiBus *, u32, u8);  // [func_0804ad90] MIDI CHANNEL - Set unk1C [Ctrl_53]
extern void func_0804ad9c(MidiBus *, u32, u8);  // [func_0804ad9c] MIDI CHANNEL - Set unk1D & unk1E [Ctrl_54]

  // // //  MIDI BUS OPERATIONS  // // //

extern void func_0804adb0(MidiBus *, s8);     // [func_0804adb0] MIDI BUS - Set Key
extern void func_0804adb4(MidiBus *, u8);     // [func_0804adb4] MIDI BUS - Set Volume
extern void func_0804adb8(MidiBus *, s8);     // [func_0804adb8] MIDI BUS - Set Panning
extern void func_0804ade4(MidiBus *, s16);    // [func_0804ade4] MIDI BUS - Set Pitch
extern void func_0804ade8(MidiBus *, u8);     // [func_0804ade8] MIDI BUS - Set Modulation Range
extern void func_0804ae14(MidiBus *, u16);    // [func_0804ae14] MIDI BUS - Set unk8
extern void func_0804ae18(MidiBus *, u16 *);  // [func_0804ae18] MIDI BUS - Set Tuning

  // // //  LOW-FREQUENCY OSCILLATOR OPERATIONS  // // //

extern void func_0804ae1c(struct LFO *, u8, u8, u8, u8, u8);    // [func_0804ae1c] LOW-FREQUENCY OSCILLATOR - Initialise
extern void func_0804ae54(struct LFO *);                        // [func_0804ae54] LOW-FREQUENCY OSCILLATOR - Start [Ctrl_49]
extern void func_0804ae60(struct LFO *);                        // [func_0804ae60] LOW-FREQUENCY OSCILLATOR - Stop [Ctrl_49; Ctrl_4A]
extern void func_0804ae6c(struct LFO *, u32);                   // [func_0804ae6c] LOW-FREQUENCY OSCILLATOR - Update
extern u32  func_0804af0c(u16); // [func_0804af0c] UTIL - Pseudo-Random Number Generator

  // // //  PSG CHANNEL OPERATIONS  // // //

extern void func_0804af30(void);    // [func_0804af30] PSG CHANNEL - Stop All PSG Channels
extern void func_0804af74(u32);     // [func_0804af74] PSG CHANNEL - Initialise
extern u32  func_0804afa4(u32);     // [func_0804afa4] PSG CHANNEL - Convert Pitch Envelope to PSG Frequency Register Variable
extern u32  func_0804afd8(u32);     // [func_0804afd8] PSG CHANNEL - Convert Volume Envelope to PSG Volume Register Variable
// extern ? func_0804aff0(?);       // [func_0804aff0] PSG CHANNEL - Update PSG Channel
extern void func_0804b2c4(void);    // [func_0804b2c4] PSG CHANNEL - Update All

  // // //  SOUND PLAYER OPERATIONS  // // //

extern u16  func_0804b324(MidiStream);              // [func_0804b324] MIDI STREAM - Evaluate Big Endian Short
extern u32  func_0804b330(MidiStream);              // [func_0804b330] MIDI STREAM - Evaluate Big Endian Integer
extern u32  func_0804b348(const char *);            // [func_0804b348] MIDI STREAM - Get Loop Marker Symbol Length
extern void func_0804b368(SoundPlayer *, const SongInfo *); // [func_0804b368] SOUND PLAYER - Play
extern void func_0804b534(u16);                     // [func_0804b534] SOUND PLAYER - Play from Index
extern void func_0804b560(SoundPlayer *);           // [func_0804b560] SOUND PLAYER - Stop
extern void func_0804b574(SoundPlayer *, u8);       // [func_0804b574] SOUND PLAYER - Pause/Unpause { 0 = Unpause; 1 = Pause }
extern u32  func_0804b5a0(SoundPlayer *channel);    // [func_0804b5a0] SOUND PLAYER - Check for Active MIDI Readers
extern void func_0804b5d8(SoundPlayer *);           // [func_0804b5d8] SOUND PLAYER - Pause
extern void func_0804b5e4(SoundPlayer *);           // [func_0804b5e4] SOUND PLAYER - Unpause
extern void func_0804b5f0(void);                    // [func_0804b5f0] SOUND PLAYER - Pause All
extern void func_0804b620(void);                    // [func_0804b620] SOUND PLAYER - Unpause All
extern void func_0804b650(SoundPlayer *, u16);      // [func_0804b650] SOUND PLAYER - Set Gain (Volume)
extern void func_0804b654(SoundPlayer *, u16, u16); // [func_0804b654] SOUND PLAYER - Set Gain for Selected Tracks
extern void func_0804b65c(SoundPlayer *, u16, s16); // [func_0804b65c] SOUND PLAYER - Set Pitch
extern void func_0804b66c(SoundPlayer *, u16, s8);  // [func_0804b66c] SOUND PLAYER - Set Panning
extern void func_0804b67c(u16);                     // [func_0804b67c] SOUND PLAYER - Pause from Index
extern u32  func_0804b6c4(MidiStream, MidiStream, u32); // [func_0804b6c4] MIDI STREAM - Stream.equals()
extern u32  func_0804b6f0(u16, u16, u16);           // [func_0804b6f0] SOUND PLAYER - Get MIDI Ticks Per Frame
extern void func_0804b710(SoundPlayer *, u16);      // [func_0804b710] SOUND PLAYER - Align Channel Speed with BeatScript
extern void func_0804b734(SoundPlayer *, u16, u16); // [func_0804b734] SOUND PLAYER - Set Volume Fade { type = 0..3 }
extern void func_0804b7dc(SoundPlayer *, u16);      // [func_0804b7dc] SOUND PLAYER - Volume Fade-Out & Clear
extern void func_0804b7ec(SoundPlayer *, u16);      // [func_0804b7ec] SOUND PLAYER - Volume Fade-Out & Pause
extern void func_0804b7fc(SoundPlayer *, u16);      // [func_0804b7fc] SOUND PLAYER - Volume Fade-In

  // // //  MIDI SEQUENCE OPERATIONS  // // //

extern void func_0804b80c(SoundPlayer *, MidiStream);   // [func_0804b80c] MIDI STREAM - System-Exclusive Message [Evnt_F0]
extern u32  func_0804b898(SoundPlayer *, MidiStream *); // [func_0804b898] MIDI STREAM - Meta Event (Loop Start, Loop End, Track End, Set Tempo)
extern void func_0804b95c(SoundPlayer *, u32, u8, u8);  // [func_0804b95c] MIDI STREAM - Controller Change [Evnt_B]
extern void func_0804bc5c(u32, u32, u32);               // [func_0804bc5c] MIDI STREAM - Note Off/On [Evnt_8; Evnt_9]
extern u32  func_0804bcc0(SoundPlayer *, u32);          // [func_0804bcc0] MIDI STREAM - Messages/Events
extern void func_0804bed0(SoundPlayer *, u32);          // [func_0804bed0] MIDI STREAM - Update

extern void func_0804c040(SoundPlayer *);       // [func_0804c040] SOUND PLAYER - Update Volume
extern void func_0804c0f8(SoundPlayer *);       // [func_0804c0f8] SOUND PLAYER - Update MIDI Stream
extern void func_0804c170(void);                // [func_0804c170] MIDI4AGB - Update
extern void func_0804c340(u32, u32, u32, u32);  // [func_0804c340] MIDI4AGB - Set Reverb Controller Scratch/Queue
extern void func_0804c358(void);                // [func_0804c358] MIDI4AGB - STUB

extern void func_0804c35c(SoundPlayer *, MidiBus *, u32, MidiTrackStream *, u32); // [func_0804c35c] SOUND PLAYER - Initialise
extern u32  func_0804c398(MidiStream *); // [func_0804c398] MIDI STREAM - Parse Variable-Length Quantity
extern void func_0804c3c0(SoundPlayer *, MidiTrackStream *, u32, MidiBus *, MidiChannel *, u8 *); // [func_0804c3c0] TEST PLAYER - Initialise
extern void func_0804c4bc(s8 *, u32);   // [func_0804c4bc] TEST PLAYER - Append MIDI Sequence Instructions
// extern void func_0804c508(void);     // [func_0804c508] TEST PLAYER - Parse MIDI Sequence Instructions
extern void func_0804c6c8(void);        // [func_0804c6c8] TEST PLAYER - Update
extern void func_0804c778(void);        // [func_0804c778] MIDI4AGB - Initialise

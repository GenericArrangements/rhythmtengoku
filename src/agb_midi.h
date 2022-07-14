#pragma once

#include "global.h"
#include "sound.h"
#include "src/agb_midi_internal.h"

  // // // // // // // // // // // // // // // // // // // //



  // // // // // // // // // // // // // // // // // // // //

extern u16 D_03001570; // Pseudo-RNG Variable

extern u8  D_03001578[4]; // PSG CHANNEL - ?? (checked by TONE 1 and WAVE)

extern u16 D_03001580[4]; // PSG CHANNEL - Initial Volume of Envelope
extern u16 D_03001588[4]; // PSG CHANNEL - Frequency
extern u8 *D_03001590;    // PSG CHANNEL - Wave Pattern
extern SoundPlayer *D_03001598;
extern MidiBus *D_0300159c;
extern u8 *D_030015a0;
extern volatile u16 D_030015a4;
extern u8  D_030015a6;
extern u8  D_030015a7; // Initial value at D_03005b7c

extern u32 D_03001888; // DMA Source Addresses { &this[0] = Right; &this[D_03005b24] = Left }
extern u32 D_030024c8; // ?? (sample envelope or something)
extern DmaSampleReader D_030028c8; // DMA Sample Readers (12 Channels)
extern SoundChannel D_03002a48;    // DirectSound Channels (12 Channels)

extern u16 D_030055f0;
extern u32 D_030055f4; // Sound Mode { 0 = Stereo; 1 = Mono (One Channel); 2 = Mono (Two Channels) }

extern u32 D_03005600[4];
extern u16 D_03005610; // Total DMA Sample Readers at D_03005b88 ( = 12)
extern u32 D_03005620[3];
extern u32 D_0300562c; // Current Speed (NOT Tempo)
extern u32 D_03005630; // gRVBCNT2 (init. = 0)
extern u32 D_03005634; // gRVBCNT4 (init. = 4)
extern u32 D_03005638;
extern volatile u32 *D_0300563c; // REG_DMA1SAD; Right Audio Source ( = &D_03001888)
extern u8  D_03005640; // ?? (Byte 0 of MIDI Event F0) [mCtrl4C]
extern SoundPlayer *D_03005644; // Channel which most recently called MIDI Event F0 (System-Exclusive Message)
extern u16 D_03005648; // Current byte in D_03005b7c to set [mCtrl0E]

extern MidiNote D_03005650[20]; // MIDI Note Buffer
extern SoundChannel D_030056a0[4]; // PSG Channels { 0 = Tone+Sweep; 1 = Tone; 2 = Wave; 3 = Noise }
extern u8  D_03005720[0x400]; // ???? (it's a line or curve or something idk)
extern u16 D_03005b20; // Total Bytes in array at D_03005b7c
extern volatile u32 D_03005b24; // Number of 32-bit samples per DMA Source Address ( = 0x620 / 4 ( = 392))
extern u8  D_03005b28; // ?? (Set by MIDI Controller 4D; Only set if D_03005b44 == 0)

extern struct SysExcMsgHandler D_03005b30;
extern u8  D_03005b3c; // ?? (Set by MIDI Controller 49; Cleared by MIDI Controller 4A and MIDI Event F0)
extern volatile u32 D_03005b40;
extern u8  D_03005b44; // ?? (Must be false for certain operations to work; Affects MIDI Controllers 49, 4A and 4D)
extern u32 D_03005b48; // gRVBCNT3 (init. = 2)

extern u16 D_03005b78; // Current Available MIDI Note Slot
extern u8 *D_03005b7c; // ?? (Byte at offset D_03005648 set by MIDI Controller 10)
extern u16 D_03005b80; // REG_VCOUNT

extern DmaSampleReader *D_03005b88; // DmaSampleReader (12 Channels, at D_030028c8)
extern u16 D_03005b8c; // Total DirectSound Channels at D_030064bc ( = 12)
extern s8  D_03005b90[]; // Reverb controller..?
extern u32 D_03005b94; // Global Sample Rate ( = 13379Hz)

extern volatile u32 D_030064a0; // Offset from *D_0300563c and *D_030064b8 to operate on.
extern u32 D_030064a4; // gRVBCNT1 (init. = 0)
extern u32 D_030064a8; // 13379Hz / 60

extern u32 *D_030064b0; // &D_030024c8
extern u32 D_030064b4; // 16776921 / 13379Hz
extern volatile u32 *D_030064b8; // REG_DMA2SAD; Left Audio Source ( = &D_03001888[D_03005b24] ( = &D_03001ea8))
extern SoundChannel *D_030064bc; // DirectSound Channels (12 Channels, at D_03002a48)
extern u8  D_030064c0; // ?? (Set to 0 alongside all elements in D_03005620)
extern u16 D_030064c4; // ?? (init. = 1)

  // // // // // // // // // // // // // // // // // // // //

extern u16 gMidiTuningTable[]; // MIDI Note to Frequency Table (A4 = 440Hz)
extern u32 gStepFreqTable[]; // Semitones to Frequency Table ((2^(p/12) - 1) << 10)
extern s16 gMidiSineTable[]; // Sine Table (init = 0; size = 0x100; max = 0x100; min = -0x100)
extern char gMidiLoopStartSym[]; // MIDI "Loop Start" Marker: '['
extern char gMidiLoopEndSym[]; // MIDI "Loop End" Marker: ']'
extern const InstrumentBank *instrumentBanks[]; // Instrument Bank Index

extern u32 __udivmoddi4(u64, u64);

  // // // // // // // // // // // // // // // // // // // //



  // // //  INTERRUPT_DMA2  // // //

extern void func_08049144(void); // [func_08049144] INTERRUPT_DMA2

  // // //  SAMPLE READER OPERATIONS  // // //

extern void func_0804930c(u32, struct WaveData *); // [func_0804930c] SAMPLE READER - Initialise Channel
extern void func_08049394(u32); // [func_08049394] SAMPLE READER - Reset Channel
extern void func_080493b0(u32); // [func_080493b0] SAMPLE READER - Close Channel
extern void func_080493c8(u32, u32, u32); // [func_080493c8] SAMPLE READER - Set Panning
extern void func_080493e4(u32, u32); // [func_080493e4] SAMPLE READER - Set Volume Envelope
extern void func_080493f4(u32, u32); // [func_080493f4] SAMPLE READER - Set Pitch Envelope
extern void func_08049450(u32, u32); // [func_08049450] SAMPLE READER - Set unk0_b2
extern void func_08049470(u32, u32); // [func_08049470] SAMPLE READER - Set unk0_b3
extern void func_08049490(u32, u32, u32, u32 *, u32, u32 *, u16, DmaSampleReader *); // [func_08049490] SAMPLE READER - Main Init.
// extern ? func_080497f8(?); // [func_080497f8] SAMPLE READER - Main Update
extern void func_08049ad8(void); // [func_08049ad8] Initialise(?) REG_DMA1CNT & REG_DMA2CNT

  // // //  ??? OPERATIONS  // // //

extern void func_08049b34(u32, u32, u32, u32); // [func_08049b34] Set Reverb Controllers
extern u32  func_08049b5c(u32); // [func_08049b5c] SAMPLE READER - Check If Active
extern void func_08049b70(u32); // [func_08049b70] (SUB) MIDI Controller 4A - ??
extern void func_08049b8c(u8); // [func_08049b8c] MIDI Controller 4D - ??
extern void func_08049bac(void); // [func_08049bac] ??
extern void func_08049be4(void); // [func_08049be4] MIDI Controller 49 - ??; MIDI Controller 4A - ??
extern void func_08049bfc(u32, u32, u32); // [func_08049bfc] ??

  // // //  MIDI BUS UPDATE OPERATIONS  // // //

// extern ? func_08049c34(?); // [func_08049c34] MIDI CHANNEL - Update Modulation
extern void func_08049d08(MidiBus *); // [func_08049d08] MIDI BUS - Update Modulation
extern void func_08049d30(MidiBus *, u32); // [func_08049d30] MIDI CHANNEL - Update Sound Buffer for Note Cut Event
extern void func_08049db8(MidiBus *, u32); // [func_08049db8] MIDI CHANNEL - Close Sound Buffer
extern void func_08049e3c(MidiBus *); // [func_08049e3c] MIDI BUS - Update All Sound Buffers for 'Note Cut' Event
extern void func_08049e64(MidiBus *); // [func_08049e64] MIDI BUS - Close All Sound Buffers

  // // //  MIDI BUS INITIALISATION OPERATIONS  // // //

extern void func_08049e8c(MidiBus *, u8); // [func_08049e8c] MIDI BUS - Set Priority
extern void func_08049ec4(MidiBus *, u8, u16); // [func_08049ec4] MIDI BUS - Set Selected Track Volume & Track Selection
extern void func_08049ecc(MidiChannel *); // [func_08049ecc] MIDI CHANNEL - Initialise
extern void func_08049fa0(MidiBus *, u32, MidiChannel *); // [func_08049fa0] MIDI BUS - Initialise
extern void func_0804a014(MidiBus *, const InstrumentBank *); // [func_0804a014] MIDI BUS - Set Sound Bank

  // // //  SOUND CHANNEL OPERATIONS  // // //

extern u32  func_0804a018(SoundChannel *); // [func_0804a018] SOUND CHANNEL - Update & Calculate Pitch Envelope
extern u32  func_0804a1f4(SoundChannel *); // [func_0804a1f4] SOUND CHANNEL - Calculate Volume Envelope
extern u32  func_0804a224(SoundChannel *); // [func_0804a224] SOUND CHANNEL - Update ADSR Envelope
extern void func_0804a2c4(u32); // [func_0804a2c4] DIRECTSOUND CHANNEL - Update PCM Buffer
extern void func_0804a334(void); // [func_0804a334] SOUND CHANNEL - Update Sound Buffers
extern void func_0804a360(u32, SoundChannel *); // [func_0804a360] DIRECTSOUND CHANNEL - Stop PCM Buffer Channels
extern s32  func_0804a3a0(MidiChannel *, u8); // [func_0804a3a0] DIRECTSOUND CHANNEL - Return ID of first active PCM Buffer which is not at ADSR Stage 3.
extern s32  func_0804a3fc(void); // [func_0804a3fc] DIRECTSOUND CHANNEL - Return First Inactive PCM Buffer
extern s32  func_0804a434(void); // [func_0804a434] DIRECTSOUND CHANNEL - Return PCM Buffer with Lowest Volume
extern s32  func_0804a48c(void); // [func_0804a48c] DIRECTSOUND CHANNEL - Return PCM Buffer with Lowest Volume (exclude ADSR)
// extern ? func_0804a4e0(?); // [func_0804a4e0] DIRECTSOUND CHANNEL - Return PCM Buffer with Lowest Priority
extern void func_0804a5b4(MidiBus *, u32, u8); // [func_0804a5b4] SOUND CHANNEL - 'Note Off' Event
extern s32  func_0804a628(MidiBus *, u32, u8, u8); // [func_0804a628] DIRECTSOUND CHANNEL - Return First Most Replaceable PCM Buffer
extern u8   func_0804a65c(u8); // [func_0804a65c] ?? (something about left panning)
extern u8   func_0804a674(u8); // [func_0804a674] ?? (something about right panning)
extern u32  func_0804a690(MidiBus *, u32); // [func_0804a690] MIDI BUS - Convert Midi Key to Frequency
extern void func_0804a6b0(MidiBus *, u32, u8, u8); // [func_0804a6b0] SOUND CHANNEL - 'Note On' Event

  // // //  MIDI CHANNEL OPERATIONS  // // //

extern void func_0804aa40(MidiBus *, u32, u16); // [func_0804aa40] MIDI CHANNEL - Set Pitch Wheel [Evnt_E]
extern void func_0804aa5c(MidiBus *, u32, u8);  // [func_0804aa5c] MIDI CHANNEL - Set Volume [Ctrl_07]
extern void func_0804aa7c(MidiBus *, u32, u8);  // [func_0804aa7c] MIDI CHANNEL - Set Panning [Ctrl_0A]
extern u8   func_0804aaa4(MidiBus *, u32);      // [func_0804aaa4] MIDI CHANNEL - Calculate Panning Envelope
extern void func_0804aae0(MidiBus *, u32);      // [func_0804aae0] MIDI CHANNEL - Update Sample Buffer Panning
extern void func_0804ab88(MidiBus *, u32, u8);  // [func_0804ab88] MIDI Channel - Set Instrument/Patch [Evnt_C]
extern void func_0804aba8(MidiBus *, u32, u8);  // [func_0804aba8] MIDI CHANNEL - Set Expression [Ctrl_0B]
extern void func_0804abc8(MidiBus *, u32, u16); // [func_0804abc8] MIDI CHANNEL - Set unk0_b9 [Ctrl_00; Ctrl_20]
extern void func_0804ac24(MidiBus *, u32, u8);  // [func_0804ac24] MIDI CHANNEL - Set unk0_b0
extern void func_0804ac40(MidiBus *, u32, u8);  // [func_0804ac40] MIDI CHANNEL - Set Modulation Depth [Ctrl_01]
extern void func_0804ac60(MidiBus *, u32, u8);  // [func_0804ac60] MIDI CHANNEL - Set unk4_b21
extern void func_0804ac80(MidiBus *, u32, u8);  // [func_0804ac80] MIDI CHANNEL - Set Compression/Dampening? [Ctrl_48]
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

  // // //  SYSTEM-EXCLUSIVE MESSAGE OPERATIONS  // // //

extern void func_0804ae1c(struct SysExcMsgHandler*, u8, u8, u8, u8, u8); // [func_0804ae1c] SYSTEM MESSAGE HANDLER - Initialise
extern void func_0804ae54(struct SysExcMsgHandler *); // [func_0804ae54] SYSTEM MESSAGE HANDLER - Set ?? [Ctrl_49]
extern void func_0804ae60(struct SysExcMsgHandler *); // [func_0804ae60] SYSTEM MESSAGE HANDLER - Set ?? [Ctrl_49; Ctrl_4A]
extern void func_0804ae6c(struct SysExcMsgHandler *, u32); // [func_0804ae6c] SYSTEM MESSAGE HANDLER - Update
extern u32  func_0804af0c(u16); // [func_0804af0c] UTIL - Pseudo-Random Number Generator

  // // //  PSG CHANNEL OPERATIONS  // // //

extern void func_0804af30(void); // [func_0804af30] PSG CHANNEL - Stop All PSG Buffer Channels
extern void func_0804af74(u32); // [func_0804af74] PSG CHANNEL - Initialise
extern u32  func_0804afa4(u32); // [func_0804afa4] PSG CHANNEL - Convert Pitch Envelope to PSG Frequency Register Variable
extern u32  func_0804afd8(u32); // [func_0804afd8] PSG CHANNEL - Convert Volume Envelope to PSG Volume Register Variable
// extern ? func_0804aff0(?); // [func_0804aff0] PSG CHANNEL - Update PSG Buffer Channel
extern void func_0804b2c4(void); // [func_0804b2c4] PSG CHANNEL - Update All

  // // //  SOUND PLAYER OPERATIONS  // // //

extern u16  func_0804b324(MidiStream); // [func_0804b324] SOUND PLAYER - Parse 16-bit Big Endian value in Byte Stream.
extern u32  func_0804b330(MidiStream); // [func_0804b330] SOUND PLAYER - Parse 32-bit Big Endian value in Byte Stream.
extern u32  func_0804b348(char *); // [func_0804b348] SOUND PLAYER - Loop Marker Symbol Length
extern void func_0804b368(SoundPlayer *, const SongInfo *); // [func_0804b368] SOUND PLAYER - Store Sound Sequence
extern void func_0804b534(u16); // [func_0804b534] SOUND PLAYER - Load & Store Sound Sequence from Index
extern void func_0804b560(SoundPlayer *); // [func_0804b560] SOUND PLAYER - Remove Sound Sequence
extern void func_0804b574(SoundPlayer *, u8); // [func_0804b574] SOUND PLAYER - Pause/Unpause Sound Sequence { 0 = Unpause; 1 = Pause }
extern u32  func_0804b5a0(SoundPlayer *channel); // [func_0804b5a0] SOUND PLAYER - Check for Active MIDI Readers
extern void func_0804b5d8(SoundPlayer *); // [func_0804b5d8] SOUND PLAYER - Pause Channel
extern void func_0804b5e4(SoundPlayer *); // [func_0804b5e4] SOUND PLAYER - Unpause Channel
extern void func_0804b5f0(void); // [func_0804b5f0] SOUND PLAYER - Pause All Channels
extern void func_0804b620(void); // [func_0804b620] SOUND PLAYER - Unpause All Channels
extern void func_0804b650(SoundPlayer *, u16); // [func_0804b650] SOUND PLAYER - Set Gain (Volume)
extern void func_0804b654(SoundPlayer *, u16, u16); // [func_0804b654] SOUND PLAYER - Set Volume for Selected Tracks
extern void func_0804b65c(SoundPlayer *, u16, s16); // [func_0804b65c] SOUND PLAYER - Set Pitch
extern void func_0804b66c(SoundPlayer *, u16, s8); // [func_0804b66c] SOUND PLAYER - Set Panning
extern void func_0804b67c(u16); // [func_0804b67c] SOUND PLAYER - Pause Sound Sequence from Index
extern u32  func_0804b6c4(MidiStream, MidiStream, u32); // [func_0804b6c4] UTIL - String.equals()
extern u32  func_0804b6f0(u16, u16, u16); // [func_0804b6f0] UTIL - Playback Speed Formula
extern void func_0804b710(SoundPlayer *, u16); // [func_0804b710] SOUND PLAYER - Align Channel Speed with BeatScript
extern void func_0804b734(SoundPlayer *, u16, u16); // [func_0804b734] SOUND PLAYER - Apply Volume Fade { type = 0..3 }
extern void func_0804b7dc(SoundPlayer *, u16); // [func_0804b7dc] SOUND PLAYER - Volume Fade-Out & Clear
extern void func_0804b7ec(SoundPlayer *, u16); // [func_0804b7ec] SOUND PLAYER - Volume Fade-Out & Pause
extern void func_0804b7fc(SoundPlayer *, u16); // [func_0804b7fc] SOUND PLAYER - Volume Fade-In

  // // //  MIDI SEQUENCE OPERATIONS  // // //

extern void func_0804b80c(SoundPlayer *, MidiStream); // [func_0804b80c] MIDI STREAM - System-Exclusive Message [Evnt_F0]
extern u32  func_0804b898(SoundPlayer *, MidiStream *); // [func_0804b898] MIDI STREAM - Meta Event (Loop Start, Loop End, Track End, Set Tempo)
extern void func_0804b95c(SoundPlayer *, u32, u8, u8); // [func_0804b95c] MIDI STREAM - Controller Change [Evnt_B]
extern void func_0804bc5c(u32, u32, u32); // [func_0804bc5c] MIDI STREAM - Note Off/On [Evnt_8; Evnt_9]
extern u32  func_0804bcc0(SoundPlayer *, u32); // [func_0804bcc0] MIDI STREAM - Messages/Events
extern void func_0804bed0(SoundPlayer *, u32); // [func_0804bed0] MIDI STREAM - Update

extern void func_0804c040(SoundPlayer *); // [func_0804c040] SOUND PLAYER - Update Volume
extern void func_0804c0f8(SoundPlayer *); // [func_0804c0f8] SOUND PLAYER - Update MIDI Stream
extern void func_0804c170(void); // [func_0804c170] MAIN UPDATE
extern void func_0804c340(u32, u32, u32, u32); // [func_0804c340] Set Reverb
extern void func_0804c358(void); // [func_0804c358] STUB

extern void func_0804c35c(SoundPlayer *, MidiBus *, u32, MidiReader *, u32); // [func_0804c35c] INITIALISE - Sound Players
extern u32  func_0804c398(MidiStream *); // [func_0804c398] MIDI STREAM - Parse Variable-Length Quantity
extern void func_0804c3c0(SoundPlayer *, MidiReader *, u32, MidiBus *, MidiChannel *, u8 *); // [func_0804c3c0] Initialise... an audio channel that don't exist.
// extern ? func_0804c4bc(?);
// extern ? func_0804c508(?);
extern void func_0804c6c8(void); // [func_0804c6c8] ?? (something about midi channels and notes and a midi channel bus that doesn't exist after startup?)
extern void func_0804c778(void); // [func_0804c778] MAIN INITIALISE

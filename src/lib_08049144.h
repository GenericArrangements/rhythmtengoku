#pragma once

  // // //  INTERRUPT_DMA2  // // //

extern void func_08049144(void); // [func_08049144] INTERRUPT_DMA2

  // // //  "COMMS" STRUCT OPERATIONS  // // //

extern void func_0804930c(u32, struct SampleInfo *); // [func_0804930c] SAMPLE READER - Initialise Channel
extern void func_08049394(u32); // [func_08049394] SAMPLE READER - Reset Channel
extern void func_080493b0(u32); // [func_080493b0] SAMPLE READER - Close Channel
extern void func_080493c8(u32, u32, u32); // [func_080493c8] SAMPLE READER - Set Panning
extern void func_080493e4(u32, u32); // [func_080493e4] SAMPLE READER - Set Volume Envelope
extern void func_080493f4(u32, u32); // [func_080493f4] SAMPLE READER - Set Pitch Envelope
extern void func_08049450(u32, u32); // [func_08049450] SAMPLE READER - Set unk0_b2
extern void func_08049470(u32, u32); // [func_08049470] SAMPLE READER - Set unk0_b3

  // // //  ??? OPERATIONS  // // //

extern void func_08049490(u32, u32, u32, u32 *, u32, u32 *, u16, struct Comms *); // [func_08049490] Initialise... a lot...
// extern ? func_080497f8(?);
extern void func_08049ad8(void); // [func_08049ad8] Initialise(?) REG_DMA1CNT & REG_DMA2CNT
extern void func_08049b34(u32, u32, u32, u32); // [func_08049b34] ??
extern u32  func_08049b5c(u32); // [func_08049b5c] SAMPLE READER - Check If Active
extern void func_08049b70(u32); // [func_08049b70] (SUB) MIDI Controller 4A - ??
extern void func_08049b8c(u8); // [func_08049b8c] MIDI Controller 4D - ??
extern void func_08049bac(void); // [func_08049bac] ??
extern void func_08049be4(void); // [func_08049be4] MIDI Controller 49 - ??; MIDI Controller 4A - ??
extern void func_08049bfc(u32, u32, u32); // [func_08049bfc] ??

  // // //  MIDI CHANNEL BUS UPDATE OPERATIONS  // // //

// extern ? func_08049c34(?); // [func_08049c34] MIDI CHANNEL - Update Modulation
extern void func_08049d08(struct MidiChannelBus *); // [func_08049d08] MIDI CHANNEL BUS - Update Modulation
extern void func_08049d30(struct MidiChannelBus *, u32); // [func_08049d30] MIDI CHANNEL - Update Sound Buffer for Note Cut Event
extern void func_08049db8(struct MidiChannelBus *, u32); // [func_08049db8] MIDI CHANNEL - Close Sound Buffer
extern void func_08049e3c(struct MidiChannelBus *); // [func_08049e3c] MIDI CHANNEL BUS - Update All Sound Buffers for 'Note Cut' Event
extern void func_08049e64(struct MidiChannelBus *); // [func_08049e64] MIDI CHANNEL BUS - Close All Sound Buffers

  // // //  MIDI CHANNEL BUS INITIALISATION OPERATIONS  // // //

extern void func_08049e8c(struct MidiChannelBus *, u8); // [func_08049e8c] MIDI CHANNEL BUS - Set Priority
extern void func_08049ec4(struct MidiChannelBus *, u8, u16); // [func_08049ec4] MIDI CHANNEL BUS - Set Selected Track Volume & Track Selection
extern void func_08049ecc(struct MidiChannel *); // [func_08049ecc] MIDI CHANNEL - Initialise
extern void func_08049fa0(struct MidiChannelBus *, u32, struct MidiChannel *); // [func_08049fa0] MIDI CHANNEL BUS - Initialise
extern void func_0804a014(struct MidiChannelBus *, const InstrumentBank *); // [func_0804a014] MIDI CHANNEL BUS - Set Sound Bank

  // // //  SOUND BUFFER OPERATIONS  // // //

extern u32  func_0804a018(struct SoundBuffer *); // [func_0804a018] SOUND BUFFER - Update & Calculate Pitch Envelope
extern u32  func_0804a1f4(struct SoundBuffer *); // [func_0804a1f4] SOUND BUFFER - Calculate Volume Envelope
extern u32  func_0804a224(struct SoundBuffer *); // [func_0804a224] SOUND BUFFER - Update ADSR Envelope
extern void func_0804a2c4(u32); // [func_0804a2c4] PCM BUFFER - Update PCM Buffer
extern void func_0804a334(void); // [func_0804a334] SOUND BUFFER - Update Sound Buffers
extern void func_0804a360(u32, struct SoundBuffer *); // [func_0804a360] PCM BUFFER - Stop PCM Buffer Channels
extern s32  func_0804a3a0(struct MidiChannel *, u8); // [func_0804a3a0] PCM BUFFER - Return ID of first active PCM Buffer which is not at ADSR Stage 3.
extern s32  func_0804a3fc(void); // [func_0804a3fc] PCM BUFFER - Return First Inactive PCM Buffer
extern s32  func_0804a434(void); // [func_0804a434] PCM BUFFER - Return PCM Buffer with Lowest Volume
extern s32  func_0804a48c(void); // [func_0804a48c] PCM BUFFER - Return PCM Buffer with Lowest Volume (exclude ADSR)
// extern ? func_0804a4e0(?); // [func_0804a4e0] PCM BUFFER - Return PCM Buffer with Lowest Priority
extern void func_0804a5b4(struct MidiChannelBus *, u32, u8); // [func_0804a5b4] SOUND BUFFER - 'Note Off' Event
extern s32  func_0804a628(struct MidiChannelBus *, u32, u8, u8); // [func_0804a628] PCM BUFFER - Return First Most Replaceable PCM Buffer
extern u8   func_0804a65c(u8); // [func_0804a65c] ?? (something about left panning)
extern u8   func_0804a674(u8); // [func_0804a674] ?? (something about right panning)
extern u32  func_0804a690(struct MidiChannelBus *, u32); // [func_0804a690] MIDI CHANNEL BUS - Get unkC Value At Index
extern void func_0804a6b0(struct MidiChannelBus *, u32, u8, u8); // [func_0804a6b0] SOUND BUFFER - 'Note On' Event

  // // //  MIDI CHANNEL OPERATIONS  // // //

extern void func_0804aa40(struct MidiChannelBus *, u32, u16); // [func_0804aa40] MIDI CHANNEL - Set Pitch Wheel [Evnt_E]
extern void func_0804aa5c(struct MidiChannelBus *, u32, u8);  // [func_0804aa5c] MIDI CHANNEL - Set Volume [Ctrl_07]
extern void func_0804aa7c(struct MidiChannelBus *, u32, u8);  // [func_0804aa7c] MIDI CHANNEL - Set Panning [Ctrl_0A]
extern u8   func_0804aaa4(struct MidiChannelBus *, u32);      // [func_0804aaa4] MIDI CHANNEL - Calculate Panning Envelope
extern void func_0804aae0(struct MidiChannelBus *, u32);      // [func_0804aae0] MIDI CHANNEL - Update Sample Buffer Panning
extern void func_0804ab88(struct MidiChannelBus *, u32, u8);  // [func_0804ab88] MIDI Channel - Set Instrument/Patch [Evnt_C]
extern void func_0804aba8(struct MidiChannelBus *, u32, u8);  // [func_0804aba8] MIDI CHANNEL - Set Expression [Ctrl_0B]
extern void func_0804abc8(struct MidiChannelBus *, u32, u16); // [func_0804abc8] MIDI CHANNEL - Set unk0_b9 [Ctrl_00; Ctrl_20]
extern void func_0804ac24(struct MidiChannelBus *, u32, u8);  // [func_0804ac24] MIDI CHANNEL - Set unk0_b0
extern void func_0804ac40(struct MidiChannelBus *, u32, u8);  // [func_0804ac40] MIDI CHANNEL - Set Modulation Depth [Ctrl_01]
extern void func_0804ac60(struct MidiChannelBus *, u32, u8);  // [func_0804ac60] MIDI CHANNEL - Set unk4_b21
extern void func_0804ac80(struct MidiChannelBus *, u32, u8);  // [func_0804ac80] MIDI CHANNEL - Set Compression/Dampening? [Ctrl_48]
extern void func_0804aca0(struct MidiChannelBus *, u32, u8);  // [func_0804aca0] MIDI CHANNEL - Set Modulation Type [Ctrl_16]
extern void func_0804acc0(struct MidiChannelBus *, u32, u8);  // [func_0804acc0] MIDI CHANNEL - Set unkC
extern void func_0804accc(struct MidiChannelBus *, u32, u16); // [func_0804accc] MIDI CHANNEL - Set Modulation Speed [Ctrl_15]
extern void func_0804acd8(struct MidiChannelBus *, u32, u8);  // [func_0804acd8] MIDI CHANNEL - Set Modulation Delay [Ctrl_1A]
extern void func_0804ace4(struct MidiChannelBus *, u32, u8);  // [func_0804ace4] MIDI CHANNEL - Set Modulation Range [Ctrl_14]
extern void func_0804acf0(struct MidiChannelBus *, u32, u32); // [func_0804acf0] MIDI CHANNEL - Set Offset/Split Stereo Effect [Ctrl_4B]
extern void func_0804ad18(struct MidiChannelBus *, u32, u8);  // [func_0804ad18] MIDI CHANNEL - Set Priority [Ctrl_21]
extern void func_0804ad38(struct MidiChannelBus *, u32, u8);  // [func_0804ad38] MIDI CHANNEL - Set Random Pitch Variation [Ctrl_52]
extern void func_0804ad90(struct MidiChannelBus *, u32, u8);  // [func_0804ad90] MIDI CHANNEL - Set unk1C [Ctrl_53]
extern void func_0804ad9c(struct MidiChannelBus *, u32, u8);  // [func_0804ad9c] MIDI CHANNEL - Set unk1D & unk1E [Ctrl_54]

  // // //  MIDI CHANNEL BUS OPERATIONS  // // //

extern void func_0804adb0(struct MidiChannelBus *, s8);     // [func_0804adb0] MIDI CHANNEL BUS - Set unk4
extern void func_0804adb4(struct MidiChannelBus *, u8);     // [func_0804adb4] MIDI CHANNEL BUS - Set Volume
extern void func_0804adb8(struct MidiChannelBus *, s8);     // [func_0804adb8] MIDI CHANNEL BUS - Set Panning
extern void func_0804ade4(struct MidiChannelBus *, s16);    // [func_0804ade4] MIDI CHANNEL BUS - Set Pitch
extern void func_0804ade8(struct MidiChannelBus *, u8);     // [func_0804ade8] MIDI CHANNEL BUS - Set Modulation Range
extern void func_0804ae14(struct MidiChannelBus *, u16);    // [func_0804ae14] MIDI CHANNEL BUS - Set unk8
extern void func_0804ae18(struct MidiChannelBus *, u16 *);  // [func_0804ae18] MIDI CHANNEL BUS - Set unkC

  // // //  "JASON" STRUCT OPERATIONS  // // //

extern void func_0804ae1c(struct Jason*, u8, u8, u8, u8, u8); // [func_0804ae1c] ??
extern void func_0804ae54(struct Jason *); // [func_0804ae54] Set ?? [Ctrl_49]
extern void func_0804ae60(struct Jason *); // [func_0804ae60] Set ?? [Ctrl_49; Ctrl_4A]
extern void func_0804ae6c(struct Jason *, u32); // [func_0804ae6c] ?? (relates to speed)
extern u32  func_0804af0c(u16); // [func_0804af0c] UTIL - Pseudo-Random Number Generator

  // // //  PSG SOUND BUFFER OPERATIONS  // // //

extern void func_0804af30(void); // [func_0804af30] PSG BUFFER - Stop All PSG Buffer Channels
extern void func_0804af74(u32); // [func_0804af74] PSG BUFFER - Initialise
extern u32  func_0804afa4(u32); // [func_0804afa4] PSG BUFFER - Convert Pitch Envelope to PSG Frequency Register Variable
extern u32  func_0804afd8(u32); // [func_0804afd8] PSG BUFFER - Convert Volume Envelope to PSG Volume Register Variable
// extern ? func_0804aff0(?); // [func_0804aff0] Update PSG Buffer Channel
extern void func_0804b2c4(void); // [func_0804b2c4] PSG BUFFER - Update All

  // // //  AUDIO CHANNEL OPERATIONS  // // //

extern u16  func_0804b324(u8 *); // [func_0804b324] AUDIO CHANNEL - Parse 16-bit Big Endian value in Byte Stream.
extern u32  func_0804b330(u8 *); // [func_0804b330] AUDIO CHANNEL - Parse 32-bit Big Endian value in Byte Stream.
extern u32  func_0804b348(char []); // [func_0804b348] AUDIO CHANNEL - Loop Marker Symbol Length
extern void func_0804b368(struct AudioChannel *, const struct SequenceData *); // [func_0804b368] AUDIO CHANNEL - Store Sound Sequence
extern void func_0804b534(u16); // [func_0804b534] AUDIO CHANNEL - Load & Store Sound Sequence from Index
extern void func_0804b560(struct AudioChannel *); // [func_0804b560] AUDIO CHANNEL - Remove Sound Sequence
extern void func_0804b574(struct AudioChannel *, u8); // [func_0804b574] AUDIO CHANNEL - Pause/Unpause Sound Sequence { 0 = Unpause; 1 = Pause }
extern u32  func_0804b5a0(struct AudioChannel *channel); // [func_0804b5a0] AUDIO CHANNEL - Check for Active MIDI Readers
extern void func_0804b5d8(struct AudioChannel *); // [func_0804b5d8] AUDIO CHANNEL - Pause Channel
extern void func_0804b5e4(struct AudioChannel *); // [func_0804b5e4] AUDIO CHANNEL - Unpause Channel
extern void func_0804b5f0(void); // [func_0804b5f0] AUDIO CHANNEL - Pause All Channels
extern void func_0804b620(void); // [func_0804b620] AUDIO CHANNEL - Unpause All Channels
extern void func_0804b650(struct AudioChannel *, u16); // [func_0804b650] AUDIO CHANNEL - Set Gain (Volume)
extern void func_0804b654(struct AudioChannel *, u16, u16); // [func_0804b654] AUDIO CHANNEL - Set Volume for Selected Tracks
extern void func_0804b65c(struct AudioChannel *, u16, s16); // [func_0804b65c] AUDIO CHANNEL - Set Pitch
extern void func_0804b66c(struct AudioChannel *, u16, s8); // [func_0804b66c] AUDIO CHANNEL - Set Panning
extern void func_0804b67c(u16); // [func_0804b67c] AUDIO CHANNEL - Pause Sound Sequence from Index
extern u32  func_0804b6c4(u8 *, u8 *, u32); // [func_0804b6c4] UTIL - String.equals()
extern u32  func_0804b6f0(u16, u16, u16); // [func_0804b6f0] UTIL - Playback Speed Formula
extern void func_0804b710(struct AudioChannel *, u16); // [func_0804b710] AUDIO CHANNEL - Align Channel Speed with BeatScript
extern void func_0804b734(struct AudioChannel *, u16, u16); // [func_0804b734] AUDIO CHANNEL - Apply Volume Fade { type = 0..3 }
extern void func_0804b7dc(struct AudioChannel *, u16); // [func_0804b7dc] AUDIO CHANNEL - Volume Fade-Out & Clear
extern void func_0804b7ec(struct AudioChannel *, u16); // [func_0804b7ec] AUDIO CHANNEL - Volume Fade-Out & Pause
extern void func_0804b7fc(struct AudioChannel *, u16); // [func_0804b7fc] AUDIO CHANNEL - Volume Fade-In

  // // //  MIDI SEQUENCE OPERATIONS  // // //

extern void func_0804b80c(struct AudioChannel *, u8 *); // [func_0804b80c] MIDI - System-Exclusive Message [Evnt_F0]
extern u32  func_0804b898(struct AudioChannel *, u8 **); // [func_0804b898] MIDI - Meta Event (Loop Start, Loop End, Track End, Set Tempo)
extern void func_0804b95c(struct AudioChannel *, u32, u8, u8); // [func_0804b95c] MIDI - Controller Change [Evnt_B]
extern void func_0804bc5c(u32, u32, u32); // [func_0804bc5c] MIDI - Note Off/On [Evnt_8; Evnt_9]
extern u32  func_0804bcc0(struct AudioChannel *, u32); // [func_0804bcc0] MIDI - Messages/Events
extern void func_0804bed0(struct AudioChannel *, u32); // [func_0804bed0] ?? (something about speed and midi trackers and notes)
extern void func_0804c040(struct AudioChannel *); // [func_0804c040] Apply Volume (Real-Time)
extern void func_0804c0f8(struct AudioChannel *); // [func_0804c0f8] ?? (relates to speed)
extern void func_0804c170(void); // [func_0804c170] MAIN UPDATE
extern void func_0804c340(u32, u32, u32, u32); // [func_0804c340] Set Reverb
extern void func_0804c358(void); // [func_0804c358] STUB
extern void func_0804c35c(struct AudioChannel *, struct MidiChannelBus *, u32, struct MidiTrackReader *, u32); // [func_0804c35c] INITIALISE - Audio Channels
extern u32  func_0804c398(u8 **); // [func_0804c398] MIDI - Parse Variable-Length Quantity
extern void func_0804c3c0(struct AudioChannel *, struct MidiTrackReader *, u32, struct MidiChannelBus *, struct MidiChannel *, u8 *); // [func_0804c3c0] Initialise... an audio channel that don't exist.
// extern ? func_0804c4bc(?);
// extern ? func_0804c508(?);
extern void func_0804c6c8(void); // [func_0804c6c8] ?? (something about midi channels and notes and a midi channel bus that doesn't exist after startup?)
extern void func_0804c778(void); // [func_0804c778] MAIN INITIALISE

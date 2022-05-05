#pragma once

// extern ? func_08049144(?);
// extern ? func_0804930c(?);
// extern ? func_08049394(?);
extern void func_080493b0(u32);
extern void func_080493c8(u32, u32, u32); // [func_080493c8] Store panning-related values to D_03005b88[i].
// extern ? func_080493e4(?);
// extern ? func_080493f4(?);
// extern ? func_08049450(?);
// extern ? func_08049470(?);
extern void func_08049490(u32, u32, u32, u32 *, u32, u32 *, u16, struct Bingus *); // [func_08049490] Initialise... a lot...
// extern ? func_080497f8(?);
// extern ? func_08049ad8(?);
// extern ? func_08049b34(?);
// extern ? func_08049b5c(?);
extern void func_08049b70(u32); // [func_08049b70] (SUB) MIDI Controller 4A - ??
extern void func_08049b8c(u8); // [func_08049b8c] MIDI Controller 4D - ??
extern void func_08049bac(void); // [func_08049bac] ??
extern void func_08049be4(void); // [func_08049be4] MIDI Controller 49 - ??; MIDI Controller 4A - ??
// extern ? func_08049bfc(?);
// extern ? func_08049c34(?);
// extern ? func_08049d08(?);
extern void func_08049d30(struct MidiChannelBus *, u32); // [func_08049d30] ?? (Unload)
extern void func_08049db8(struct MidiChannelBus *, u32); // [func_08049db8] ??
extern void func_08049e3c(struct MidiChannelBus *); // [func_08049e3c] ?? (Unload)
extern void func_08049e64(struct MidiChannelBus *); // [func_08049e64] ??
extern void func_08049e8c(struct MidiChannelBus *, u8); // [func_08049e8c] ??
extern void func_08049ec4(struct MidiChannelBus *, u8, u16); // [func_08049ec4] MIDI CHANNEL BUS - Set Selected Track Volume & Track Selection
extern void func_08049ecc(struct MidiChannel *); // [func_08049ecc] INITIALISE - MIDI Channel
extern void func_08049fa0(struct MidiChannelBus *, u32, struct MidiChannel *); // [func_08049fa0] INITIALISE - MIDI Channel Bus
extern void func_0804a014(struct MidiChannelBus *, const InstrumentBank *); // [func_0804a014] INITIALISE - MIDI Channel Bus - Set Sound Bank
// extern ? func_0804a018(?);
// extern ? func_0804a1f4(?);
// extern ? func_0804a224(?);
// extern ? func_0804a2c4(?);
// extern ? func_0804a334(?);
extern void func_0804a360(u32, struct Bingus *); // [func_0804a360] Initialise D_030064bc (Bingus)
// extern ? func_0804a3a0(?);
// extern ? func_0804a3fc(?);
// extern ? func_0804a434(?);
// extern ? func_0804a48c(?);
// extern ? func_0804a4e0(?);
// extern ? func_0804a5b4(?);
// extern ? func_0804a628(?);
extern u8   func_0804a65c(u8); // [func_0804a65c] ?? (something about left panning)
extern u8   func_0804a674(u8); // [func_0804a674] ?? (something about right panning)
// extern ? func_0804a690(?);
// extern ? func_0804a6b0(?);

  // // //  MIDI CHANNEL OPERATIONS  // // //

extern void func_0804aa40(struct MidiChannelBus *, u32, u16); // [func_0804aa40] MIDI CHANNEL - Set Pitch Wheel [Evnt_E]
extern void func_0804aa5c(struct MidiChannelBus *, u32, u8);  // [func_0804aa5c] MIDI CHANNEL - Set Volume [Ctrl_07]
extern void func_0804aa7c(struct MidiChannelBus *, u32, u8);  // [func_0804aa7c] MIDI CHANNEL - Set Panning [Ctrl_0A]
extern u8   func_0804aaa4(struct MidiChannelBus *, u32);      // [func_0804aaa4] MIDI CHANNEL - Return a net Panning value, factoring all relevant Panning controllers.
extern void func_0804aae0(struct MidiChannelBus *, u32);      // [func_0804aae0] MIDI CHANNEL - ??? (called after setting channel panning)
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

extern void func_0804adb0(struct MidiChannelBus *, u8);     // [func_0804adb0] MIDI CHANNEL BUS - Set unk4
extern void func_0804adb4(struct MidiChannelBus *, u8);     // [func_0804adb4] MIDI CHANNEL BUS - Set Volume
extern void func_0804adb8(struct MidiChannelBus *, s8);     // [func_0804adb8] MIDI CHANNEL BUS - Set Panning
extern void func_0804ade4(struct MidiChannelBus *, s16);    // [func_0804ade4] MIDI CHANNEL BUS - Set Pitch
extern void func_0804ade8(struct MidiChannelBus *, u8);     // [func_0804ade8] MIDI CHANNEL BUS - Set Modulation Range
extern void func_0804ae14(struct MidiChannelBus *, u16);    // [func_0804ae14] MIDI CHANNEL BUS - Set unk8
extern void func_0804ae18(struct MidiChannelBus *, s16 *);  // [func_0804ae18] MIDI CHANNEL BUS - Set unkC

  // // //  "JASON" STRUCT OPERATIONS  // // //

extern void func_0804ae1c(struct Jason*, u8, u8, u8, u8, u8); // [func_0804ae1c] ??
extern void func_0804ae54(struct Jason *); // [func_0804ae54] Set ?? [Ctrl_49]
extern void func_0804ae60(struct Jason *); // [func_0804ae60] Set ?? [Ctrl_49; Ctrl_4A]
// extern ? func_0804ae6c(?);
// extern ? func_0804af0c(?);

  // // //  "BINGUS" STRUCT OPERATIONS  // // //

extern void func_0804af30(void); // [func_0804af30] Initialise D_030056a0 (Bingus) and D_03001578.
// extern ? func_0804af74(?);
// extern ? func_0804afa4(?);
// extern ? func_0804afd8(?);
// extern ? func_0804aff0(?);
// extern ? func_0804b2c4(?);

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
extern void func_0804b650(struct AudioChannel *, u16); // [func_0804b650] AUDIO CHANNEL - Set Volume
extern void func_0804b654(struct AudioChannel *, u16, u16); // [func_0804b654] AUDIO CHANNEL - Set Volume for Selected Tracks
extern void func_0804b65c(struct AudioChannel *, u16, s16); // [func_0804b65c] AUDIO CHANNEL - Set Pitch
extern void func_0804b66c(struct AudioChannel *, u16, s8); // [func_0804b66c] AUDIO CHANNEL - Set Panning
extern void func_0804b67c(u16); // [func_0804b67c] AUDIO CHANNEL - Pause Sound Sequence from Index
extern u32  func_0804b6c4(u8 *, u8 *, u32); // [func_0804b6c4] UTIL - String.equals()
extern u32  func_0804b6f0(u16, u16, u16); // [func_0804b6f0] UTIL - Playback Speed Formula
extern void func_0804b710(struct AudioChannel *, u16); // [func_0804b710] AUDIO CHANNEL - Align Speed with BeatScript
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
// extern ? func_0804bed0(?);
extern void func_0804c040(struct AudioChannel *); // [func_0804c040] Apply Volume (Real-Time)
// extern ? func_0804c0f8(?);
extern void func_0804c170(void); // [func_0804c170] ??
extern void func_0804c340(u32, u32, u32, u32); // [func_0804c340] Set Reverb
extern void func_0804c358(void); // [func_0804c358] STUB
extern void func_0804c35c(struct AudioChannel *, struct MidiChannelBus *, u32, struct MidiTrackReader *, u32); // [func_0804c35c] INITIALISE - Audio Channels
extern u32  func_0804c398(u8 **); // [func_0804c398] MIDI - Parse Variable-Length Quantity
// extern ? func_0804c3c0(?);
// extern ? func_0804c4bc(?);
// extern ? func_0804c508(?);
// extern ? func_0804c6c8(?);
extern void func_0804c778(void); // [func_0804c778] INITIALISE - All?

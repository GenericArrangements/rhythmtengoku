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
// extern ? func_08049490(?);
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
// extern ? func_08049ec4(?);
extern void func_08049ecc(struct MidiChannel *); // [func_08049ecc] Initialise MIDI Channel.
extern void func_08049fa0(struct MidiChannelBus *, u32, struct MidiChannel *); // [func_08049fa0] Initialise Midi Channel Bus
extern void func_0804a014(struct MidiChannelBus *, const InstrumentBank *); // [func_0804a014] Store Sound Bank to MIDI Channel Bus
// extern ? func_0804a018(?);
// extern ? func_0804a1f4(?);
// extern ? func_0804a224(?);
// extern ? func_0804a2c4(?);
// extern ? func_0804a334(?);
// extern ? func_0804a360(?);
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
// extern ? func_0804aa40(?);
extern void func_0804aa5c(struct MidiChannelBus *, u32, u8); // [func_0804aa5c] MIDI Controller 07 - Channel Volume
extern void func_0804aa7c(struct MidiChannelBus *, u32, u8); // [func_0804aa7c] MIDI Controller 0A - Channel Panning
extern u8   func_0804aaa4(struct MidiChannelBus *, u32); // [func_0804aaa4] Return a net Panning value, factoring all relevant Panning controllers.
extern void func_0804aae0(struct MidiChannelBus *, u32); // [func_0804aae0] ??? (called after setting channel panning)
// extern ? func_0804ab88(?);
extern void func_0804aba8(struct MidiChannelBus *, u32, u8); // [func_0804aba8] MIDI Controller 0B - Expression
extern void func_0804abc8(struct MidiChannelBus *, u32, u16); // [func_0804abc8] MIDI Controller 00 - ??; MIDI Controller 20 - ??
extern void func_0804ac24(struct MidiChannelBus *, u32, u8); // [func_0804ac24] MIDI Channel - Set ?? (unk0_b0)
extern void func_0804ac40(struct MidiChannelBus *, u32, u8); // [func_0804ac40] MIDI Controller 01 - Modulation Depth
// extern ? func_0804ac60(?);
extern void func_0804ac80(struct MidiChannelBus *, u32, u8); // [func_0804ac80] MIDI Controller 48 - Compress/Dampen?
extern void func_0804aca0(struct MidiChannelBus *, u32, u8); // [func_0804aca0] MIDI Controller 16 - Modulation Type
// extern ? func_0804acc0(?);
extern void func_0804accc(struct MidiChannelBus *, u32, u16); // [func_0804accc] MIDI Controller 15 - Modulation Speed
extern void func_0804acd8(struct MidiChannelBus *, u32, u8); // [func_0804acd8] MIDI Controller 1A - Modulation Delay
extern void func_0804ace4(struct MidiChannelBus *, u32, u8); // [func_0804ace4] MIDI Controller 14 - Modulation Wheel Range
extern void func_0804acf0(struct MidiChannelBus *, u32, u32); // [func_0804acf0] MIDI Controller 4B - Chorus?
extern void func_0804ad18(struct MidiChannelBus *, u32, u8); // [func_0804ad18] MIDI Controller 21 - ??
extern void func_0804ad38(struct MidiChannelBus *, u32, u8); // [func_0804ad38] MIDI Controller 52 - Random Pitch Variation
extern void func_0804ad90(struct MidiChannelBus *, u32, u8); // [func_0804ad90] MIDI Controller 53 - ??
extern void func_0804ad9c(struct MidiChannelBus *, u32, u8); // [func_0804ad9c] MIDI Controller 54 - ??
// extern ? func_0804adb0(?);
extern void func_0804adb4(struct MidiChannelBus *, u8); // [func_0804adb4] MIDI Channel Bus - Set Volume
extern void func_0804adb8(struct MidiChannelBus *, s8); // [func_0804adb8] MIDI Channel Bus - Set Panning
extern void func_0804ade4(struct MidiChannelBus *, s16); // [func_0804ade4] MIDI Channel Bus - Set Pitch
// extern ? func_0804ade8(?);
// extern ? func_0804ae14(?);
// extern ? func_0804ae18(?);
// extern ? func_0804ae1c(?);
extern void func_0804ae54(struct Jason *); // [func_0804ae54] MIDI Controller 49 - ??
extern void func_0804ae60(struct Jason *); // [func_0804ae60] MIDI Controller 49 - ??; MIDI Controller 4A - ??
// extern ? func_0804ae6c(?);
// extern ? func_0804af0c(?);
// extern ? func_0804af30(?);
// extern ? func_0804af74(?);
// extern ? func_0804afa4(?);
// extern ? func_0804afd8(?);
// extern ? func_0804aff0(?);
// extern ? func_0804b2c4(?);
extern u16  func_0804b324(u8 *); // [func_0804b324] Parse 16-bit Big Endian value in MIDI Stream.
extern u32  func_0804b330(u8 *); // [func_0804b330] Parse 32-bit Big Endian value in MIDI Stream.
extern u32  func_0804b348(char []); // Determine length of Loop Marker symbols.
extern void func_0804b368(struct AudioChannel *, const struct SequenceData *);  // [func_0804b368] Store Music to Memory
extern void func_0804b534(u16); // [func_0804b534] Load a Sound Sequence using the D_08aa06f8 table.
extern void func_0804b560(struct AudioChannel *); // [func_0804b560] Remove Sound Sequence from Audio Channel
extern void func_0804b574(struct AudioChannel *, u8); // [func_0804b574] Pause/Unpause Sound Sequence in Audio Channel { 0 = Unpause; 1 = Pause }
extern u32  func_0804b5a0(struct AudioChannel *channel); // [func_0804b5a0] Check for Active MIDI Readers
extern void func_0804b5d8(struct AudioChannel *); // [func_0804b5d8] Pause Audio Channel
extern void func_0804b5e4(struct AudioChannel *); // [func_0804b5e4] Unpause Audio Channel
extern void func_0804b5f0(void); // [func_0804b5f0] Pause All Audio Channels
extern void func_0804b620(void); // [func_0804b620] Unpause All Audio Channels
extern void func_0804b650(struct AudioChannel *, u16); // [func_0804b650] Set Volume
extern void func_0804b654(struct AudioChannel *, u16, u16); // [func_0804b654] Set Volume for Selected Tracks
extern void func_0804b65c(struct AudioChannel *, u16, s16); // [func_0804b65c] Set Pitch
extern void func_0804b66c(struct AudioChannel *, u16, s8); // [func_0804b66c] Set Panning
// extern ? func_0804b67c(?);
// extern ? func_0804b6c4(?);
extern u32  func_0804b6f0(u16, u16, u16); // [func_0804b6f0] Playback Speed Formula
extern void func_0804b710(struct AudioChannel *, u16); // [func_0804b710] Align Speed with BeatScript
extern void func_0804b734(struct AudioChannel *, u16, u16); // [func_0804b734] Volume Fade { type = 0..3 }
extern void func_0804b7dc(struct AudioChannel *, u16); // [func_0804b7dc] Apply Volume Fade - Fade-Out & Clear
extern void func_0804b7ec(struct AudioChannel *, u16); // [func_0804b7ec] Apply Volume Fade - Fade-Out & Pause
extern void func_0804b7fc(struct AudioChannel *, u16); // [func_0804b7fc] Apply Volume Fade - Fade-In
// extern ? func_0804b80c(?);
// extern ? func_0804b898(?);
extern void func_0804b95c(struct AudioChannel *, u32, u8, u8); // [func_0804b95c] Interpret MIDI Controller Change Instruction
// extern ? func_0804bc5c(?);
// extern ? func_0804bcc0(?);
// extern ? func_0804bed0(?);
// extern ? func_0804c040(?);
// extern ? func_0804c0f8(?);
// extern ? func_0804c170(?);
extern void func_0804c340(u32, u32, u32, u32); // [func_0804c340] Set Reverb
// extern ? func_0804c358(?);
// extern ? func_0804c35c(?);
extern u32  func_0804c398(u8 **); // [func_0804c398] Parse MIDI Variable-Length Time
// extern ? func_0804c3c0(?);
// extern ? func_0804c4bc(?);
// extern ? func_0804c508(?);
// extern ? func_0804c6c8(?);
// extern ? func_0804c778(?);

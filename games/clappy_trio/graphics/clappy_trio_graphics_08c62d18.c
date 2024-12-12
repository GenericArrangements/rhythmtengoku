#include "global.h"
#include "graphics.h"

// // //  D_08C62D18  // // //

// [D_08C6215C] D_08C62D18 Huffman Data
u16 D_08c62d18_huffmandata[] = {
	0x0010, 0x70e0, 0xff10, 0x0004, 0xaa55, 0x5500, 0x00aa, 0xaa55, 0x5500, 0xffff, 0x0060, 0x3080, 0x00b0, 0x8f80, 0xfb09, 0x0002, 0x00a5, 0x0025, 0x0029, 0x0000, 0x009b, 0xff00, 0xf9b0, 0x0001, 0x0005, 0x0006, 0x009b, 0xfe00, 0xf9b0, 0x0001, 0x1555, 0x5aaa, 0x00b0, 0xf010, 0xf9b0, 0x000a, 0x00a9, 0x00a9, 0x54a9, 0x00a9, 0x5405, 0xa406, 0xa506, 0xa946, 0xaa56, 0x0500, 0x0600, 0x0000, 0x00b9, 0x80fe, 0xfb09, 0x0006, 0x5500, 0x55a9, 0x950a, 0x9602, 0x9600, 0x5580, 0x556a, 0x01b9, 0xc0fe, 0x7140, 0xffb0, 0x0000, 0x0155, 0x009b, 0x3f0e, 0xf0b9, 0x4006, 0xa5aa, 0xa4aa, 0xa4aa, 0xa55a, 0xaa1a, 0x5595, 0x0190, 0x0010, 0x8080, 0xf910, 0x0002, 0x4050, 0x90a5, 0xa4aa, 0x0019, 0x1010, 0x3019, 0x000b, 0xaaa5, 0xaa90, 0xaa40, 0xa900, 0xa900, 0x6400, 0x1c00, 0x0f00, 0xa9aa, 0xa4aa, 0xa4aa, 0x6aaa, 0xa0b1, 0x5408, 0x554a, 0x014a, 0x0052, 0x0052, 0x0052, 0x014a, 0x152a, 0x02a8, 0xfc21, 0xa11b, 0x011a, 0x1010, 0x0404, 0xb01a, 0x1003, 0x0000, 0x6a95, 0xd940, 0xd400, 0x011a, 0x8080, 0x0501, 0x01ba, 0x0007, 0x9500, 0x55fe, 0x6af9, 0xaaf9, 0xaae5, 0xaae5, 0x6ae5, 0x56f9, 0x6f01, 0x5400, 0x55aa, 0xf760, 0x900b, 0x9000, 0x9150, 0x91a4, 0x91a4, 0x91a4, 0x95a4, 0xaaa4, 0x001a, 0x001a, 0x141a, 0x691a, 0x691a, 0x0677, 0x0076, 0xf636, 0x6777, 0x00b0, 0x8080, 0xf9b0, 0x0002, 0x0050, 0x0090, 0xa494, 0x01b9, 0x1434, 0x0616, 0xf09b, 0x4001, 0x4855, 0x4815, 0x00b9, 0xf078, 0x000b, 0xfef0, 0xf0b9, 0xa401, 0xa4aa, 0xa5aa, 0x0000, 0x009b, 0xfefe, 0xf90b, 0x0016, 0x5500, 0x00aa, 0x55a8, 0x55a0, 0x5581, 0x5585, 0x5585, 0x5081, 0x4255, 0x4a55, 0x0a55, 0x2a55, 0x2a55, 0x2a55, 0x2a55, 0xa155, 0xa1aa, 0xa1aa, 0x01aa, 0x55a8, 0x55a8, 0x55a8, 0x55a8, 0x009b, 0x737e, 0x0fb9, 0x6409, 0x6540, 0xa954, 0xaa94, 0xa974, 0x67f4, 0x6554, 0x0055, 0x007f, 0x007f, 0x0075, 0xbbff, 0x00b9, 0x90f0, 0x0fb9, 0x0000, 0x0040, 0x000b, 0x1e86, 0xf90b, 0x5403, 0x54a1, 0x14a1, 0x1400, 0x14aa, 0x9999, 0x000b, 0x0106, 0x009b, 0x0fe0, 0x0f9b, 0x5401, 0x8055, 0x3000, 0x019b, 0xf010, 0xcf01, 0xf0b9, 0x500f, 0x1aaa, 0x1aa9, 0x1aa9, 0x1aa9, 0x1a95, 0x1a90, 0x1a90, 0x1a95, 0x0190, 0x0190, 0x5590, 0xaa90, 0xaa90, 0xaa90, 0xaa90, 0x5590, 0x0110, 0x8080, 0x0080, 0x3910, 0x0004, 0x0050, 0x00a4, 0x00a4, 0xaa50, 0xfaaf, 0x3331, 0x0093, 0xfe30, 0x1119, 0x0039, 0x1f18, 0x0193, 0x4002, 0x5595, 0x55e5, 0x95f9, 0x0001, 0xff8e, 0xa190, 0x0006, 0x0009, 0x0002, 0x00ea, 0x00e0, 0x00e0, 0x00e0, 0x00e0, 0xa100, 0x0010, 0x8080, 0x00ba, 0x3c1c, 0x31ba, 0x5402, 0x9415, 0x9456, 0x55f6, 0xf31b, 0x3a1b, 0x4000, 0x90f9, 0x00ba, 0xc380, 0x31ab, 0x5005, 0x4001, 0x4280, 0x428f, 0x402f, 0x429f, 0x0955, 0xf01a, 0x5404, 0xa4aa, 0xa4aa, 0xa4aa, 0xa4aa, 0xa4aa, 0x0010, 0x1010, 0x76f0, 0x0007, 0xf855, 0xe0ff, 0xa0ff, 0x00ea, 0x00e0, 0x00e0, 0x00e0, 0x00e0, 0x7600, 0x0067, 0xc080, 0xb067, 0x5005, 0x90a5, 0x90aa, 0x90aa, 0x90aa, 0x90aa, 0xaaaa, 0xf9b0, 0xa406, 0xa400, 0xa400, 0x5400, 0xaa00, 0x9555, 0x9000, 0x9000, 0x01b0, 0x00c0, 0x0301, 0x00b9, 0xf0fe, 0x000b, 0xfcf0, 0xf0b9, 0xa401, 0xa4aa, 0xa4aa, 0x00b0, 0xf030, 0xf9b0, 0x0001, 0x00a9, 0x00a9, 0x999b, 0x00b0, 0x00f0, 0xf9b0, 0x0000, 0x50a5, 0x009b, 0x7f8e, 0x9999, 0xbbb9, 0x000b, 0xffc0, 0xf0b9, 0x4001, 0x50aa, 0x94aa, 0x00b0, 0x1030, 0xf9b0, 0x0004, 0xa954, 0xaaa4, 0xaaa4, 0x6aa4, 0x1554, 0x0000, 0x00b9, 0x0848, 0xbbb9, 0xb999, 0x010b, 0x7f06, 0x7f7f, 0x0000, 0x0000, 0x00b9, 0x0e08, 0xb00b, 0x00b9, 0x80f0, 0x000b, 0xff00, 0xf90b, 0x5400, 0x54a8, 0x999b, 0x010b, 0xfe0e, 0xfefe, 0xffb9, 0x9000, 0xa501, 0x9bbf, 0x00bf, 0xe380, 0x9fb0, 0x9000, 0x90d1, 0x9b0b, 0x00b0, 0x00c8, 0x00b9, 0x3c30, 0xf0b9, 0x9001, 0x9000, 0x9000, 0x000b, 0xff80, 0xf0b9, 0xa404, 0xa41a, 0xa51a, 0xaa1a, 0xaa1a, 0xaa1a, 0x9b00, 0x00b0, 0x00c0, 0xf0b9, 0x9005, 0x9001, 0x9001, 0x9001, 0x9001, 0x9005, 0x9516, 0xbb00, 0x0010, 0x01f0, 0xab10, 0x4005, 0x5a00, 0xa9ff, 0xa455, 0x50aa, 0x00aa, 0x0055, 0xaaaa, 0x00b1, 0xf70c, 0x01bb, 0xbbbb, 0x0001, 0xef0c, 0x61f0, 0x0005, 0xaa55, 0x5500, 0x00aa, 0xaa55, 0x5500, 0x00aa, 0xb760, 0x9005, 0x9000, 0x5000, 0x1a00, 0x1a00, 0x1500, 0xf000, 0xf9b0, 0x0002, 0x0094, 0x00a5, 0x00a9, 0x009b, 0x7e00, 0xf0b9, 0x0004, 0x0140, 0xa5aa, 0x94aa, 0x50aa, 0x40aa, 0x0010, 0xffe0, 0x00f1, 0xcf80, 0xb01f, 0x0001, 0x0005, 0xffaa, 0xfb90, 0x0002, 0x0095, 0x0095, 0x0095, 0xb999, 0x0010, 0x1010, 0xfa10, 0x0004, 0x0001, 0x0006, 0x0006, 0x0006, 0x001a, 0x1aa1, 0x0010, 0x6080, 0xfa10, 0x0000, 0x0069, 0x1aaa, 0x0010, 0x8080, 0xf910, 0x0004, 0x0090, 0x0090, 0x0090, 0x00a4, 0xf9a4, 0xf111, 0x0019, 0x7070, 0xf019, 0x0013, 0x4019, 0x906a, 0x90aa, 0xa4aa, 0x93aa, 0x40aa, 0x40aa, 0x00aa, 0x00a9, 0x01a9, 0x01a9, 0x06a4, 0xaaa4, 0xaa5a, 0xaa1a, 0xaa06, 0xaa06, 0xaa01, 0xaa01, 0x0101, 0x9101, 0x0019, 0x3030, 0xf019, 0x400b, 0x901a, 0xa46a, 0xa4aa, 0xa9aa, 0x90aa, 0x40aa, 0x40aa, 0x00aa, 0x00a9, 0x01a9, 0x01a4, 0x06a4, 0x0019, 0x0cf0, 0x8080, 0xc080, 0xc7f1, 0x8081, 0x0808, 0xfe7c, 0x3010, 0xf070, 0xf9f0, 0x010f, 0xe381, 0x038f, 0x7171, 0xf910, 0x000b, 0x9000, 0x9000, 0x9000, 0xa400, 0xa400, 0xa400, 0xa900, 0xa900, 0x901a, 0x901a, 0x4006, 0x4006, 0x0019, 0x0010, 0x1018, 0xf910, 0x0007, 0x0001, 0x001a, 0x001a, 0x001a, 0x006a, 0x006a, 0x0069, 0x01a9, 0x9991, 0x0001, 0xf1fe, 0x0af1, 0xa402, 0xa53f, 0xa93f, 0xa93f, 0x9100, 0xaa1f, 0x9910, 0xa1ff, 0xf910, 0x0a1f, 0x9004, 0xff55, 0xfd2a, 0xf42a, 0xf4aa, 0xf4aa, 0x1aaa, 0x019f, 0x9f1a, 0x9000, 0x907e, 0x019f, 0x9001, 0xfaaf, 0xe00b, 0x01f1, 0x7e7e, 0x7e7e, 0x9f10, 0xa402, 0xf47a, 0x00ff, 0x0001, 0x00ba, 0x3c1c, 0x31ba, 0x5402, 0xa815, 0x545a, 0x54fa, 0xf31b, 0x31ba, 0x5400, 0x95f2, 0x00ba, 0xc380, 0x31ab, 0x5005, 0x4001, 0x6aa0, 0x680f, 0x402f, 0x409f, 0x0255, 0x0110, 0x7030, 0xf0f0, 0x9b01, 0x5401, 0xfe55, 0xfe55, 0x00b0, 0xf0f0, 0xf0b9, 0x500e, 0x9005, 0x9506, 0x5606, 0x0605, 0x0600, 0x5600, 0x9505, 0x4006, 0x40aa, 0x50aa, 0x94aa, 0xa5aa, 0x94aa, 0x50aa, 0x40aa, 0x0000, 0x03f1, 0xfcfc, 0xfcfc, 0xfcfc, 0xfcfc, 0x10b9, 0x4006, 0x40aa, 0x40aa, 0x40aa, 0x40aa, 0x40aa, 0x40aa, 0x40aa, 0xa10b, 0x5005, 0x5af9, 0xafe5, 0xfe95, 0xe955, 0x9555, 0xe555, 0x1000, 0x00a1, 0xf78c, 0x9a01, 0x400c, 0x5500, 0x554a, 0x5552, 0x5554, 0x55f1, 0x55fc, 0x15fc, 0x15ff, 0x15ff, 0xc53f, 0xc53f, 0x533f, 0x5355, 0x0010, 0x1010, 0xf910, 0x0010, 0x0001, 0x06a4, 0x1aa4, 0x1a90, 0x1a90, 0x1a90, 0x1a90, 0x6a90, 0x6a90, 0x4000, 0x40aa, 0x40aa, 0x906a, 0x906a, 0x906a, 0x902a, 0x902a, 0x0999, 0x0001, 0xfefe, 0xf910, 0xa406, 0xa41a, 0x901a, 0x901a, 0x906a, 0x406a, 0x406a, 0x406a, 0x1199, 0x0af0, 0x0880, 0x0c08, 0xe60c, 0x83c7, 0x31f3, 0xf010, 0x70c0, 0x7030, 0xe7e0, 0xc3c3, 0x0181, 0xf091, 0x140f, 0x152a, 0x152a, 0x152a, 0x152a, 0x152a, 0x14aa, 0x14aa, 0x52aa, 0x52a8, 0x52a1, 0x52a1, 0x52a1, 0x52a1, 0x52a0, 0x52a8, 0xaaa8, 0x9910, 0x33f9, 0x3910, 0xa401, 0x90fa, 0x90fa, 0x10f9, 0x4003, 0xc03a, 0xc00e, 0xfc0e, 0xfffa, 0xf332, 0xf319, 0x4000, 0x402a, 0x933f, 0xf019, 0x9001, 0x900f, 0x9005, 0x0091, 0x707c, 0xb901, 0x000c, 0x8540, 0x15aa, 0x55a8, 0x55a1, 0x5505, 0x5552, 0x554a, 0x542a, 0x42aa, 0x6aa8, 0x5a81, 0x5a15, 0x5555, 0x0a1b, 0x4007, 0x01aa, 0x07a8, 0x5f40, 0xff00, 0xff55, 0x01aa, 0x402a, 0xd001, 0xbbbb, 0x0201, 0x0f0c, 0x381c, 0x1838, 0xda01, 0x5002, 0x0201, 0x2a80, 0x3ffc, 0xf9b0, 0x0006, 0x00a9, 0x00a9, 0x00a9, 0x00a5, 0x0094, 0x0050, 0xa41a, 0x01b9, 0x183c, 0xf810, 0xf90b, 0x0006, 0x5555, 0x552a, 0x552a, 0x552a, 0x550a, 0x5542, 0x5550, 0x03f1, 0xfcfc, 0xfcfc, 0xfcfc, 0xfcfc, 0x10b9, 0x0006, 0x00a4, 0x00a4, 0x40a4, 0x40a5, 0x40aa, 0x55aa, 0xfaaa, 0xff01, 0x5000, 0x4aa1, 0x01f1, 0x7e7e, 0x7e7e, 0x00ba, 0x3c1c, 0xd1ba, 0xa401, 0x5816, 0x545b, 0x33bb, 0xbbba, 0xf31b, 0x31ba, 0x5400, 0xa5f2, 0x00ba, 0xc380, 0xd1ab, 0x5001, 0x4a81, 0x60e0, 0x1ab3, 0x5002, 0x7095, 0xe095, 0xaa95, 0xbb11, 0x00ba, 0x3c1c, 0x31ba, 0x9401, 0x9416, 0x54f6, 0xf31b, 0x31ba, 0x5401, 0x94f2, 0x9500, 0x1aaa, 0x00ba, 0x3c38, 0x31ba, 0x9404, 0x9f16, 0x6f16, 0x8f15, 0x0015, 0x0216, 0xbbb1, 0x0010, 0x0c00, 0xff10, 0xa404, 0xa415, 0xa46a, 0xa46a, 0xa46a, 0xa46a, 0xffff, 0x0010, 0x3010, 0xff10, 0x4011, 0x901a, 0x905a, 0x90aa, 0x00aa, 0x0001, 0x0006, 0x4005, 0x401a, 0x905a, 0x90aa, 0xa4aa, 0xa4aa, 0x00aa, 0x0001, 0x0006, 0x0006, 0x0006, 0x0006, 0x00ba, 0x3c1c, 0x31ba, 0xa402, 0x9415, 0x945a, 0x54f6, 0xf31b, 0x31ba, 0xa400, 0x25f0, 0x00ba, 0xc380, 0x31ab, 0x5005, 0x4a01, 0x42a0, 0x428f, 0x402f, 0x429f, 0x0955, 0x0b10, 0x7030, 0xf0f0, 0x0001, 0x0c08, 0x0e0e, 0x0e0e, 0x0c0f, 0x0e0e, 0x100f, 0x7030, 0x7070, 0xf070, 0x03f0, 0x1000, 0x9010, 0x20a0, 0x4141, 0x000f, 0x0110, 0x7030, 0xf070, 0x04f0, 0x8080, 0x4244, 0xa122, 0x5090, 0x4040, 0x0000, 0xf000, 0x0110, 0x8080, 0x8080, 0x0000, 0x1000, 0x0291, 0xcece, 0xcfce, 0xcfcf, 0xf019, 0x4000, 0x4006, 0x9910, 0x0101, 0xfefe, 0xfefe, 0xf901, 0x5402, 0x5255, 0x5255, 0x5255, 0x0110, 0x1010, 0x1010, 0xff10, 0x0000, 0x0001, 0x01f1, 0xfcfc, 0x00f8, 0x0010, 0x80fe, 0xf910, 0x0001, 0x0094, 0x40a9, 0x0009, 0xf070, 0x9f01, 0x0004, 0x4aa1, 0x4fc5, 0x4ff0, 0x53ff, 0x54ff, 0x1199, 0x0010, 0x0030, 0x0000, 0x001b, 0xf9fc, 0xfb10, 0xa400, 0x5056, 0xbbbb, 0x0010, 0xf0f0, 0x00b1, 0x860c, 0xa01b, 0x9008, 0xa500, 0xaa55, 0x4f40, 0x4001, 0x4006, 0x405a, 0xc1aa, 0x55aa, 0xf1aa, 0x00b1, 0xe7ee, 0xa01b, 0x9002, 0xa501, 0xaa43, 0xaa55, 0xff10, 0x021f, 0x1010, 0x1010, 0x9110, 0x09f1, 0x5409, 0x5328, 0xfffc, 0xfff1, 0xfff1, 0xfff1, 0xfff1, 0xfff1, 0xfff1, 0xfffc, 0x5553, 0xff10, 0x011f, 0x1010, 0x1210, 0xf01f, 0x040b, 0x1901, 0x1901, 0xaaa4, 0xaaa4, 0xaa90, 0xaa90, 0xaa40, 0xaa40, 0xaa40, 0xaa40, 0x0006, 0x0006, 0xff10, 0x011f, 0x1010, 0x1612, 0x9f01, 0x8408, 0x84ac, 0x5552, 0x554a, 0x554a, 0x554a, 0x554a, 0x554a, 0x554a, 0x554f, 0x0a1b, 0x4007, 0x41aa, 0x0755, 0x5f00, 0xff00, 0xff55, 0x02aa, 0x4055, 0xd000, 0xbbbb, 0x0201, 0x0f0c, 0x1c1e, 0x1c1c, 0x0011, 0x00a1, 0x7800, 0xddd1, 0x1ddd, 0x0110, 0xf0f0, 0xf8f8, 0xda10, 0x5401, 0xa455, 0xf45a, 0x1ddd, 0x0210, 0xf000, 0xf8f8, 0x7c7c, 0x00a1, 0x1e00, 0xddd1, 0x1ddd, 0x0101, 0xf0f0, 0xe0e0, 0xda01, 0x0001, 0xa040, 0xfc4a, 0x01dd, 0x03f0, 0x2400, 0x2828, 0x1008, 0x1010, 0x0000, 0x000f, 0x0201, 0xe0f0, 0xc1e0, 0x01c1, 0xfda1, 0x4000, 0xa815, 0x1ddd, 0x03f0, 0x0204, 0x0102, 0x0101, 0x0801, 0xf910, 0x900f, 0x901a, 0x901a, 0x401a, 0x406a, 0x00aa, 0x00a9, 0x00a9, 0x00a4, 0x6a40, 0x6a40, 0x6a40, 0x1a90, 0x1aa0, 0x06a0, 0x06a0, 0x01a0, 0x03f0, 0x1830, 0x1e1c, 0x181c, 0x0010, 0xf910, 0x4005, 0x401a, 0x401a, 0x401a, 0x402a, 0x002a, 0x0029, 0x0991, 0x0010, 0x8060, 0xf019, 0x9006, 0x906a, 0x906a, 0x906a, 0x906a, 0xa06a, 0xa06a, 0xa86a, 0x07a0, 0xf040, 0xc043, 0x5663, 0x6495, 0xf042, 0x2422, 0xc111, 0xc321, 0x05f0, 0x4080, 0x1020, 0x8010, 0x0381, 0x0f07, 0x0307, 0x000f, 0x03a0, 0xf040, 0x2041, 0x1027, 0x1090, 0x0aaa, 0x0000, 0x0000
};

// [D_08C62B94] D_08C62D18 Huffman Window 1
u32 D_08c62d18_window1[] = {
	0xfdffdfbb, 0xafef7bfa, 0xceffbf77, 0xdbedba4b, 0xdb6dbff2, 0xefefc836, 0xffbd66de, 0x7dedade3, 0xbed7fd93, 0xd966caed, 0x0000017b
};

// [D_08C62BC0] D_08C62D18 Huffman Window 2
u32 D_08c62d18_window2[] = {
	0x4eb55552, 0x6ca54aa9, 0xa5414a8d, 0xd55565ca, 0x6faad56b, 0x0b55b66b, 0x46aa4a54, 0x00000aa4
};

// [D_08C62BE0] D_08C62D18 Huffman
struct Huffman D_08c62d18_huffman[] = {
	/* Data */			D_08c62d18_huffmandata,
	/* Size */			0x94e,
	/* Count */			0x14b,
	/* Window 1 */		D_08c62d18_window1,
	/* Window 2 */		D_08c62d18_window2,
};

// [D_08C62BF0] D_08C62D18 RLE Data
u8 D_08c62d18_rledata[] = {
	0x1, 0x0, 0x4f, 0x2, 0x2d, 0x2, 0x6, 0x1, 0x3, 0x1, 0x5, 0x1, 0x5, 0x1, 0x3, 0x1, 0x5, 0x1, 0x5, 0x1, 0x3, 0x1, 0x5, 0x1, 0x5, 0x1, 0x3, 0x1, 0x5, 0x1, 0xe, 0x2, 0xd, 0x2, 0x16, 0xb, 0xb, 0x5, 0xb, 0x4, 0x2c, 0x5, 0xb, 0x5, 0xd, 0x2, 0x17, 0xa, 0x5, 0xb, 0x5, 0xb, 0x6, 0xa, 0x5, 0xb, 0x5, 0x5, 0x3, 0x3, 0x7, 0x9, 0xb, 0x5, 0xc, 0xf, 0x4, 0x11, 0x9, 0x47, 0x3f, 0x21, 0x6, 0x1a, 0x3, 0x3, 0x7, 0x8, 0x2a, 0x7, 0x9, 0x1, 0x3, 0x1c, 0x10, 0x45, 0x3, 0x3, 0x3, 0x7, 0x3, 0x3, 0x3, 0x33, 0x3, 0x7, 0x4, 0x15, 0xd, 0x40, 0x3f, 0x29, 0x7, 0x1, 0x5, 0x11, 0x5, 0x3, 0x5, 0xa, 0x27, 0x11, 0x3, 0x11, 0x16, 0xb, 0x5, 0x18, 0x3, 0x11, 0x4, 0x11, 0x3, 0x2b, 0x11, 0x3, 0x2e, 0x2, 0xd, 0xb, 0x5, 0xa, 0x6, 0x2, 0xe, 0x1, 0x5, 0x1, 0x3, 0x1, 0x5, 0x1, 0x5, 0x1, 0x3, 0x1, 0x5, 0x1, 0x5, 0x1, 0x3, 0x1, 0x5, 0x1, 0x5, 0x1, 0x3, 0x1, 0x6, 0x6, 0x9, 0x6, 0x33, 0x8, 0x5, 0x5, 0x3, 0x3, 0x7, 0x8, 0x6, 0xb, 0x5, 0x1a, 0xf, 0x2, 0x9, 0x6, 0x13, 0x2e, 0x12, 0x2e, 0xf, 0x11, 0x6, 0x6, 0x3, 0x1, 0x3, 0x4d, 0x10, 0x30, 0xd, 0x23, 0x7, 0xf, 0x8, 0x4c, 0x6, 0x9, 0x6, 0x6, 0x1b, 0x19, 0x6, 0x11, 0xf, 0x14, 0xc, 0x11, 0xf, 0x16, 0xb, 0x4, 0xb, 0x21, 0xf, 0x11, 0xf, 0x29, 0x7, 0x1b, 0x5, 0xa, 0x6, 0x1d, 0x3, 0x7, 0x3, 0x12, 0x4, 0x1e, 0x16, 0x5d, 0xd, 0x2, 0x7, 0xa, 0xb, 0x4, 0x3, 0xe, 0x5, 0x2b, 0x7, 0x19, 0x8, 0x28, 0x7, 0x18, 0xb, 0x6, 0x6, 0x29, 0x16, 0xa, 0x30, 0xb, 0x1a, 0x26, 0x5, 0xa, 0x6, 0xd, 0x3, 0xc, 0x4, 0x6b, 0x5, 0xa, 0x6, 0x6e, 0x3, 0x2, 0xd, 0x11, 0xf, 0x11, 0x10, 0x20, 0xf, 0x11, 0xf, 0x20, 0x9, 0x8, 0x5, 0x2, 0x8, 0xf, 0x11, 0x11, 0x0, 0x50, 0x0, 0x0
};

// [D_08C62D18] D_08C62D18 Graphics
struct CompressedGraphics D_08c62d18 = {
	/* Huffman Data */		D_08c62d18_huffman,
	/* RLE Data */			D_08c62d18_rledata,
	/* RLE Size */			0x124,
	/* RLE Offset */		0x1200,
	/* Double Compressed */	TRUE,
};

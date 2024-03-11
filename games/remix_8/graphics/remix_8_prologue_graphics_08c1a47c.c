#include "global.h"
#include "graphics.h"

// // //  D_08C1A47C  // // //

// [D_08C19D64] D_08C1A47C Huffman Data
u16 D_08c1a47c_huffmandata[] = {
	0x9ae0, 0x0006, 0x0090, 0x00d4, 0x4095, 0x50d5, 0x5495, 0x55d5, 0x5595, 0xca0e, 0x4000, 0x000e, 0xcaeb, 0x5004, 0x7e55, 0x5055, 0x7e55, 0x5055, 0x7e55, 0xf90e, 0x0000, 0x9555, 0x020e, 0xfcfe, 0xf0f8, 0xc0e0, 0x9a0e, 0x0000, 0xee50, 0x009a, 0x2ee0, 0x8080, 0xc0c0, 0xe0e0, 0xf0f0, 0x1f03, 0x070f, 0x0f3f, 0x0f01, 0x807f, 0xe0c0, 0xf0e0, 0xf8f8, 0x3010, 0xf070, 0xf1f0, 0xf0f0, 0xf0f0, 0xf0f0, 0x00f0, 0xefef, 0xefef, 0xefef, 0x00ef, 0x1f1f, 0x1f1f, 0x1f1f, 0x001f, 0xefef, 0xefef, 0xefef, 0xefef, 0x101f, 0x1010, 0x1010, 0x1010, 0x0c00, 0x0c0c, 0x0c0c, 0x0c0c, 0xf3fc, 0xf3f3, 0xf3f3, 0xf3f3, 0xf803, 0xf8f8, 0xf8f8, 0xf0f8, 0xbce0, 0x0000, 0xfa95, 0xabce, 0x1003, 0x40e9, 0x10a5, 0x40e9, 0x10a5, 0xabbc, 0xae90, 0x0004, 0x0009, 0x002b, 0x00a9, 0x02ab, 0x0aa9, 0xeeea, 0x030e, 0x0808, 0x0808, 0x0808, 0x0808, 0xbc0e, 0x4000, 0x8055, 0x9bbc, 0xabce, 0x1000, 0x40fa, 0x9bbc, 0xabce, 0x1000, 0x40fa, 0x9bbc, 0xabce, 0x1000, 0x40fa, 0x9bbc, 0x07e0, 0x0100, 0x0703, 0x1f0f, 0x7f3f, 0x7f7f, 0x7f7f, 0xcfef, 0x0f8f, 0x00b0, 0x0808, 0x00e0, 0x1c08, 0xeec0, 0x00ee, 0xecba, 0xe401, 0x93ff, 0x4fff, 0xc0ba, 0x4400, 0x77a4, 0xe0bc, 0xa400, 0xaccc, 0x010e, 0xc0c0, 0xf0e0, 0xb0ec, 0x9403, 0x56aa, 0x46aa, 0x12aa, 0x32aa, 0x9ba0, 0x0000, 0x0064, 0xa9a0, 0x000e, 0xff00, 0xbc0e, 0x4002, 0x6255, 0x4855, 0x7b55, 0x9ab0, 0x0000, 0x0019, 0x09a9, 0x06e0, 0x8ff0, 0x8f8f, 0x8f8f, 0x8f8f, 0x1f9f, 0x1010, 0x1010, 0xb9e0, 0x0001, 0x0001, 0x55f9, 0xcaae, 0xeeec, 0x0de0, 0xf070, 0x0f00, 0x0808, 0xfcf8, 0x10e0, 0xf0f0, 0xc0f8, 0x7f00, 0x3f7f, 0x1f3f, 0x0f1f, 0x080e, 0x0c08, 0xefce, 0xa90e, 0x0002, 0x0001, 0x0080, 0x80e0, 0xeeca, 0xa9ee, 0xaceb, 0x9400, 0x5535, 0xcb9e, 0xceee, 0xeba9, 0xcbae, 0x0002, 0xc039, 0x000e, 0xc003, 0xbccc, 0x0e9b, 0xabce, 0xa400, 0x950f, 0xee9b, 0xabce, 0xa400, 0x950f, 0xee9b, 0xabce, 0xa400, 0x950f, 0xee9b, 0xbbce, 0xeeaa, 0x1de0, 0xf0f0, 0xf0f0, 0xf0f0, 0xf0f0, 0xefef, 0xefef, 0xefef, 0xefef, 0x1f1f, 0x1f1f, 0x1f1f, 0x1f1f, 0xefef, 0xefef, 0xefef, 0xefef, 0x101f, 0x1010, 0x1010, 0x1010, 0x0c00, 0x0c0c, 0x0c0c, 0x0c0c, 0xf3fc, 0xf3f3, 0xf3f3, 0xf3f3, 0x8f83, 0x0f8f, 0xbc0e, 0x0001, 0x8055, 0x20fa, 0xeabc, 0x9400, 0x503f, 0xae90, 0x0001, 0xaaa9, 0xaaab, 0xeee9, 0x0b0e, 0x1010, 0x1010, 0x0010, 0x0808, 0x0808, 0x0808, 0xf808, 0x8080, 0x8080, 0x8080, 0x8080, 0x1f0f, 0xcea0, 0x0000, 0x00a4, 0xeabc, 0xe000, 0xabce, 0xbce0, 0x5000, 0x54e5, 0x00ce, 0x0008, 0x00ae, 0x0108, 0x00ab, 0xb0ce, 0x0001, 0x02a9, 0xaaa7, 0x000a, 0x02e0, 0x3010, 0xf070, 0xf1f0, 0xa90e, 0x5001, 0x5500, 0x55b9, 0xcab0, 0x6400, 0x7400, 0x09ae, 0x0000, 0xffd9, 0xc0ba, 0x8400, 0xb7aa, 0x03e0, 0x9f90, 0x9f9f, 0x8f9f, 0x8f8f, 0xab9e, 0x0000, 0x00a4, 0xcaae, 0xb9ec, 0x5400, 0x55f9, 0xcaae, 0xeeec, 0x030e, 0xfefe, 0xfefe, 0xc0e0, 0x0080, 0xba90, 0x9000, 0xb099, 0xc0ab, 0x4400, 0xccca, 0xce00, 0xcece, 0x0ce0, 0xc0c0, 0xe0e0, 0xf0f0, 0x80f0, 0x0f7f, 0xf030, 0x70f1, 0x7070, 0x0030, 0x8f0f, 0xcfcf, 0xffef, 0xffef, 0xbaee, 0x030e, 0xf0e0, 0xf8f0, 0xfcfc, 0x00fe, 0x0000, 0xbccc, 0xee9b, 0x2be0, 0xc0c0, 0xc0c0, 0xc0c0, 0xf0e0, 0xf0f0, 0xf0f0, 0xf0f0, 0xeff0, 0xefef, 0xefef, 0xefef, 0x1fef, 0x1f1f, 0x1f1f, 0x1f1f, 0xef1f, 0xefef, 0xefef, 0xefef, 0x1fef, 0x1010, 0x1010, 0x1010, 0x0010, 0x0c0c, 0x0c0c, 0x0c0c, 0xfc0c, 0xf3f3, 0xf3f3, 0xf3f3, 0x03f3, 0xfefe, 0xfefe, 0xf7f7, 0xf7f7, 0xf7f7, 0x07f7, 0x7f7f, 0x7f7f, 0x7f7f, 0x7f7f, 0x7fff, 0x7f7f, 0x9a0e, 0x0002, 0x0040, 0x0180, 0x05c0, 0xaeee, 0x00e0, 0x80c0, 0x00b0, 0x8080, 0x0000, 0x9000, 0xbeca, 0x9402, 0xafaa, 0x94aa, 0xaaaa, 0xbc0e, 0x5001, 0x5222, 0x5eee, 0x90ba, 0x4400, 0xcca4, 0x009a, 0x000e, 0xc0c0, 0xfc0e, 0x0001, 0x5554, 0x5521, 0xcec0, 0x02e0, 0xe0e0, 0xe0e0, 0xe0e0, 0xf0ec, 0x8400, 0x91aa, 0x0ae0, 0x7070, 0x7070, 0x7070, 0x8f80, 0x8f8f, 0x8f8f, 0x8f8f, 0x101f, 0x1010, 0x1010, 0x1010, 0xfec0, 0x0000, 0x9990, 0x15e0, 0xfcfc, 0xfcfc, 0xfcfc, 0x80fc, 0xcf81, 0xcfcf, 0x0e0f, 0x3f07, 0x0f8f, 0x030c, 0x0101, 0xf8fc, 0x2070, 0xe0e0, 0xf0e0, 0xf0f0, 0xf8f8, 0xf0f0, 0xeff0, 0xf0ef, 0xf1ff, 0xff01, 0x00ec, 0x55aa, 0x00bc, 0x5500, 0x00ab, 0x5500, 0x9a9a, 0x9a9a, 0x150e, 0x0100, 0x0101, 0x0101, 0xef01, 0xefef, 0xefef, 0x3fef, 0x3f3f, 0x3f3f, 0x3f3f, 0xc03f, 0xc0c0, 0xc0c0, 0xc0c0, 0x7fc0, 0x7f7f, 0x3f3f, 0x0f1f, 0x8007, 0x8080, 0xc080, 0xc0c0, 0xa09e, 0x0008, 0x00a4, 0x0080, 0x0240, 0x0ac0, 0x2a40, 0xaac0, 0xaa40, 0xaac2, 0xaa4a, 0xecb0, 0x0000, 0xffa5, 0xceba, 0x9404, 0xf5ab, 0x94aa, 0xf5ab, 0x94aa, 0xf5ab, 0x090e, 0x80f0, 0x8080, 0x8080, 0x8080, 0x8080, 0x8080, 0x8080, 0x8080, 0x1f80, 0x00f0, 0xbec0, 0x0004, 0x0090, 0x0060, 0x0050, 0x0070, 0x00f0, 0x9ba0, 0x9000, 0xd000, 0xb0ce, 0x0004, 0x1100, 0x44a1, 0x55a4, 0x77a5, 0xffa7, 0x9a0b, 0x5001, 0x5222, 0x5eee, 0x0a0e, 0x01c0, 0x0701, 0xff3f, 0xe010, 0x0f0f, 0xcf08, 0x0e0f, 0x003f, 0x1f7f, 0x0303, 0x0801, 0x0bae, 0xcb9e, 0x0000, 0x0039, 0xecba, 0x9eee, 0xeecb, 0xa9ee, 0xeeec, 0xba9e, 0xeeec, 0xcba0, 0xeeee, 0xec00, 0x060e, 0xf3f0, 0x7f00, 0x0f3f, 0x0003, 0x0103, 0x80f8, 0x8080, 0xb0ce, 0x4402, 0x1184, 0xdd91, 0xff9d, 0xfa0b, 0x4000, 0x4888, 0x02e0, 0xe0c0, 0xf8f0, 0xfefc, 0x0a9e, 0x0000, 0x9900, 0x09a9, 0x2f0e, 0x0ff0, 0xf0ff, 0xfcfe, 0xf0f8, 0xc0e0, 0xf8f8, 0xfcfc, 0xfefe, 0x8080, 0x8080, 0x8080, 0x8080, 0xcfef, 0x0f8f, 0x0e0f, 0xeffc, 0xefef, 0xefef, 0xefef, 0x101f, 0x1010, 0x1010, 0x1010, 0xc080, 0xf0e0, 0xfcf8, 0xf0fe, 0x30f7, 0xf1f0, 0x8080, 0xc0c0, 0xe7e0, 0x080f, 0xff8c, 0x0c0f, 0xcf0e, 0xf07f, 0xf1f0, 0xf7f3, 0xf3f3, 0xf3f3, 0xf3f3, 0x03f3, 0xce08, 0x0c0f, 0x8f0e, 0x0fef, 0xf0ff, 0xa9e0, 0x0000, 0xee55, 0x09a9, 0x020e, 0xc080, 0xf0e0, 0xfcf8, 0xab0e, 0x5401, 0xee55, 0xaa6e, 0xec0b, 0x4002, 0x6222, 0x6eee, 0x7bbb, 0x180e, 0x8080, 0x0f80, 0x0808, 0x1e0c, 0x0fbf, 0x0808, 0x0808, 0x0808, 0x0808, 0x0c0c, 0x0c0c, 0x0c0c, 0xec0c, 0xefef, 0xff0f, 0x0ff0, 0xf0ff, 0xf0ff, 0xf0f0, 0xf0f0, 0xf0f0, 0xc080, 0xf0e0, 0xfcf8, 0xfffe, 0xb90e, 0x4000, 0x8055, 0xaceb, 0x9000, 0x6bd5, 0x9eee, 0xaceb, 0x9000, 0x6bd5, 0x9ee0, 0xcebb, 0xae00, 0xecca, 0x0be0, 0xf800, 0xf9f9, 0xf9f9, 0xf9f9, 0x0100, 0x0101, 0x0101, 0x0101, 0xfc00, 0xfcfc, 0xfcfc, 0xfcfc, 0xa9e0, 0x0004, 0x4000, 0x0095, 0x00d5, 0x0094, 0x00d0, 0xcaeb, 0x5002, 0x7e55, 0x5055, 0x5e55, 0x0b0e, 0xf0f0, 0xfcf8, 0xf1fe, 0xf3f1, 0x80f7, 0x8080, 0x8080, 0x8080, 0xc080, 0xe0e0, 0xe0e0, 0xf0f0, 0xeeee, 0x0000, 0x0000
};

// [D_08C1A370] D_08C1A47C Huffman Window 1
u32 D_08c1a47c_window1[] = {
	0xf9d56bbf, 0xe2a44cdd, 0xa72feb8d, 0xf9fedcd8, 0xfdbe005f, 0x000003c2
};

// [D_08C1A388] D_08C1A47C Huffman Window 2
u32 D_08c1a47c_window2[] = {
	0xd6dc7baf, 0x91b7a6ef, 0xab5ee0ab, 0x000000dd
};

// [D_08C1A398] D_08C1A47C Huffman
struct Huffman D_08c1a47c_huffman[] = {
	/* Data */			D_08c1a47c_huffmandata,
	/* Size */			0x7d1,
	/* Count */			0xac,
	/* Window 1 */		D_08c1a47c_window1,
	/* Window 2 */		D_08c1a47c_window2,
};

// [D_08C1A3A8] D_08C1A47C RLE Data
u8 D_08c1a47c_rledata[] = {
	0x31, 0x50, 0x14, 0xb, 0x1, 0x5, 0x5, 0x5, 0x1, 0x9, 0x7, 0x12, 0xe, 0x3, 0xc, 0x13, 0x30, 0xd, 0x41, 0x3, 0xd, 0x3, 0x1, 0xb, 0x1, 0x3, 0xd, 0x3, 0x1d, 0xf, 0x27, 0x3, 0x26, 0x3, 0x3e, 0xb, 0x9, 0x8, 0x4, 0x3, 0x5, 0x3, 0x5, 0x9, 0x16, 0x9, 0xd, 0x7, 0x54, 0xf, 0x47, 0x9, 0x1, 0x5, 0x1, 0x9, 0x7, 0x9, 0x21, 0x1f, 0x23, 0x7, 0x17, 0x9, 0x7, 0x9, 0x49, 0xd, 0x7, 0x9, 0x1, 0x7, 0x2b, 0xd, 0x41, 0xf, 0x41, 0x2f, 0x8, 0x9, 0x10, 0x1f, 0x91, 0x7, 0xd, 0x7, 0x5, 0x5, 0x5, 0x5, 0x6, 0xa, 0x9, 0x28, 0x14, 0xa, 0x6, 0x9, 0x7, 0x9, 0x1f, 0x3, 0xc, 0x5, 0x20, 0x20, 0x40, 0xf, 0x21, 0x2d, 0x3, 0xd, 0x26, 0x6, 0x7, 0xd, 0x9, 0x9, 0x1, 0x5, 0x5, 0x5, 0x1, 0xc, 0x4, 0x6, 0x5, 0x4, 0x4, 0xb, 0x12, 0xe, 0x2, 0xd, 0x3, 0x6, 0xd, 0xb, 0x2, 0x2f, 0x21, 0xd, 0x3, 0xd, 0x3, 0xd, 0x1, 0x5, 0x18, 0x34, 0x11, 0x3, 0x2c, 0x1d, 0xd, 0x17, 0x4, 0xb, 0x1, 0x3, 0x5, 0x7, 0xd, 0x3, 0x1, 0xe, 0x2, 0xa, 0xd, 0x8, 0xb, 0x6, 0x10, 0x1a, 0xf, 0x8, 0x1, 0xd, 0x3, 0xd, 0x3, 0xd, 0x21, 0x2f, 0x3, 0x4, 0x9, 0x40, 0x26, 0xa, 0x1, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x12, 0x21, 0x58, 0x7, 0x9, 0x7, 0x8, 0x9, 0x8, 0xd7, 0x20, 0x0, 0xe1, 0x0
};

// [D_08C1A47C] D_08C1A47C Graphics
struct CompressedGraphics D_08c1a47c = {
	/* Huffman Data */		D_08c1a47c_huffman,
	/* RLE Data */			D_08c1a47c_rledata,
	/* RLE Size */			0xd2,
	/* RLE Offset */		0x1000,
	/* Double Compressed */	TRUE,
};


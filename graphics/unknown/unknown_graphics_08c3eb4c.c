#include "global.h"
#include "graphics.h"

// // //  D_08C3EB4C  // // //

// [D_08C3E518] D_08C3EB4C Huffman Data
u16 D_08c3eb4c_huffmandata[] = {
	0x01e0, 0xf0f0, 0xf0f0, 0x0000, 0x2222, 0x01e0, 0xf0f0, 0xf0f0, 0x01e4, 0xfcfe, 0xfefc, 0x012e, 0xc080, 0x1f30, 0xfcfe, 0x0001, 0x0094, 0x0040, 0xefcc, 0x00fe, 0x03bc, 0xc2fe, 0x4004, 0xaa00, 0xaaa9, 0xaaa7, 0xaaa7, 0xaaa7, 0x22fc, 0x00f2, 0x0030, 0x00e2, 0x0808, 0x4222, 0x00e2, 0x2040, 0xee22, 0x422e, 0xfebf, 0x5001, 0x5255, 0x5255, 0xbbbb, 0x01ef, 0xfe00, 0x9efe, 0xb2fe, 0x0002, 0x1f69, 0x1fa4, 0x5f55, 0x0efc, 0x0004, 0x0015, 0x001a, 0x001a, 0x001a, 0x006a, 0xfe20, 0x0000, 0x00a5, 0x22ee, 0x06e0, 0xf0f0, 0xf0f0, 0xf0f0, 0x0f0f, 0x0f0f, 0x0f0f, 0x0f0f, 0xfe24, 0x6401, 0x5400, 0x00f0, 0xecf4, 0xa404, 0xa5ff, 0x5a7f, 0xaa7f, 0xa9ff, 0xa9ff, 0x4444, 0x2f44, 0x00f4, 0x0380, 0x24fc, 0x9001, 0x40aa, 0x41e9, 0xfcfe, 0x5400, 0x006a, 0xfccc, 0x004e, 0x0800, 0x44ee, 0x032e, 0xf7f0, 0xf7f7, 0xf7f7, 0xf7f7, 0xe222, 0x00fe, 0xf108, 0x2ef4, 0x5401, 0xefaa, 0x5755, 0x2efb, 0x0003, 0x0069, 0x001a, 0x0016, 0xf7a9, 0xfeee, 0x002f, 0xff8e, 0xbef2, 0x0003, 0x0005, 0x0019, 0x0067, 0x01a7, 0x05e0, 0xf0f0, 0xf0f0, 0xf0f0, 0xf0f0, 0x0f0f, 0x0f0f, 0x012e, 0x8080, 0x8080, 0x00e0, 0xf0f0, 0x002e, 0x2010, 0x402e, 0x0001, 0x0010, 0xf0aa, 0x0ef4, 0x5001, 0x002a, 0xffaa, 0xf02e, 0x0000, 0x0040, 0x0000, 0x00f4, 0x00e0, 0xeeee, 0x0000, 0x00e4, 0xfef8, 0x0000, 0x4fff, 0x00e4, 0xf700, 0x0000, 0x004f, 0xffc0, 0xeeee, 0x0000, 0x052e, 0x1060, 0x0408, 0x0408, 0x0204, 0x0102, 0x0101, 0x01fe, 0x8080, 0x8080, 0x4bfe, 0x0000, 0xc094, 0xbbf4, 0x032e, 0x2010, 0xef40, 0x1010, 0x00e0, 0x1fe2, 0x5004, 0x4555, 0x502e, 0x05ba, 0x42eb, 0x4bae, 0xe1f4, 0x6402, 0x90d9, 0x4065, 0x00d7, 0x42ef, 0x100a, 0xfea5, 0xffea, 0x7fe6, 0x5fe6, 0x57e6, 0x55e6, 0x55e8, 0x55fc, 0x2455, 0x2454, 0x2454, 0x00fe, 0x2060, 0x2bef, 0x5403, 0x4245, 0x2a45, 0x1530, 0x1500, 0xe1f2, 0x9001, 0x4f7f, 0xff7f, 0xb4fe, 0x0002, 0x40a9, 0xd4a9, 0xfd97, 0x4fbb, 0x01e0, 0xf0f0, 0xf0f0, 0x07d0, 0xf0f0, 0xf0f0, 0xf0f0, 0xf0f0, 0x0f00, 0x0f0f, 0x0f0f, 0x0f0f, 0x172d, 0xf3f0, 0xf7f7, 0xf7f7, 0xf3f3, 0xcfc1, 0x0f8f, 0x0f0f, 0x0e0e, 0xcf8c, 0xcfcf, 0x8fcf, 0x0f8f, 0x703f, 0xf0f0, 0xf3f1, 0xf0f7, 0x30f0, 0xf0f0, 0x03f1, 0xfc38, 0x80fc, 0xf0e0, 0xe0f8, 0x10fe, 0x030d, 0xf0f0, 0xf0f0, 0xf0f0, 0xf0f0, 0x2e0d, 0x0008, 0x0055, 0x3baa, 0x3baa, 0x0eea, 0x0eea, 0x0eea, 0x03ba, 0x00ee, 0x03ee, 0x020d, 0xf0f0, 0xf0f0, 0xf0f0, 0xf20d, 0x0000, 0xa855, 0x0000, 0x04e2, 0x5010, 0x0f50, 0x0c0c, 0x0f0e, 0xcf8f, 0x00de, 0xf000, 0x00d2, 0xc0f0, 0x2222, 0xd2ee, 0x01e2, 0xf070, 0xf0f0, 0x2222, 0x00d0, 0xf0f0, 0xed20, 0x0001, 0x00a5, 0x009f, 0x2eee, 0x00e0, 0xf0f0, 0x0000, 0x00de, 0xfff0, 0xfe2d, 0x5400, 0xa940, 0xe22d, 0x012e, 0x4030, 0x8080, 0xc2fe, 0x0005, 0x8a21, 0x8a27, 0x2a1f, 0x2a1f, 0x2a1f, 0xaa27, 0xe2ef, 0x03e2, 0x30b0, 0xe070, 0xe3e0, 0xafd7, 0xcf2e, 0x0008, 0x0011, 0xaa95, 0xffe5, 0xfff9, 0xfff9, 0xfff9, 0xffe5, 0x0095, 0x8215, 0xfd2e, 0x4006, 0x40a4, 0x00a4, 0x0091, 0x0091, 0x0091, 0x0091, 0x0091, 0xd2e2, 0x052e, 0x7030, 0xf1f0, 0xc02f, 0x0100, 0x0202, 0x0404, 0xee2e, 0x032d, 0xe0c0, 0xe0e0, 0xf0f0, 0xf0f0, 0x0ae2, 0x8582, 0x4b45, 0x4b4b, 0x4b4b, 0xc2c2, 0x0181, 0x0101, 0x5040, 0x5050, 0x4848, 0x4848, 0xeeee, 0xeee4, 0x012e, 0x8080, 0xa0c0, 0xf42e, 0x5007, 0x0551, 0x5094, 0x5595, 0xa915, 0xa50a, 0x94aa, 0x91aa, 0x952a, 0x00e4, 0x8e08, 0x002e, 0xb060, 0xf24e, 0x4000, 0x54a2, 0x4222, 0x01e4, 0x0300, 0x7f3f, 0x00e2, 0x0070, 0xf42e, 0x0007, 0x6a11, 0x6a14, 0x1aa4, 0x1aa5, 0x46a9, 0x00a9, 0x0080, 0x5070, 0x32fe, 0x9013, 0x900c, 0x9800, 0x9c00, 0x9014, 0x9014, 0x5400, 0x006a, 0x006a, 0x006a, 0x006a, 0x006a, 0xa06a, 0x0a96, 0xa001, 0x06a9, 0x06a9, 0x06a9, 0x26a9, 0x36a9, 0x06a9, 0xe2f4, 0x9400, 0x40f6, 0xefff, 0x002e, 0x0200, 0xe3ee, 0x00fe, 0x6060, 0xd23e, 0x0001, 0x0400, 0xb822, 0x012e, 0x4142, 0x8080, 0xeeee, 0xeee2, 0x01e0, 0xf0f0, 0xf0f0, 0xfe20, 0x0002, 0x00a9, 0x00a9, 0x00aa, 0x062e, 0x0a0a, 0x111f, 0x3cff, 0xc0e0, 0xc000, 0xdc20, 0x1c23, 0xee22, 0x004e, 0x0070, 0x03e2, 0xd0e0, 0xf1f0, 0xf3f1, 0x03f3, 0xff2e, 0x4000, 0x4055, 0x00e0, 0xf0f0, 0xf2e0, 0x0002, 0x0095, 0x0065, 0x0065, 0xee2e, 0x00e0, 0xf0f0, 0x002e, 0x837c, 0xcf2e, 0x0004, 0x5510, 0x551a, 0x51af, 0x92ff, 0x8b00, 0x00fe, 0xc0a0, 0xeeee, 0x2fee, 0x00e2, 0xc8f4, 0x3fe2, 0x0004, 0x2a45, 0x6010, 0x6005, 0x6055, 0x6f55, 0xeeee, 0x00f2, 0x29e0, 0xec2f, 0x8401, 0xc451, 0xf051, 0xe3f2, 0xa401, 0xc0f4, 0x5041, 0x00fc, 0x0030, 0x00ec, 0xf0f0, 0xd2ce, 0x1414, 0xf800, 0xf8ff, 0xf8ff, 0xf8ff, 0xf8ff, 0xf8ff, 0xf8ff, 0xf8ff, 0xafff, 0x2bff, 0x8aff, 0xa2ff, 0xfaff, 0x0aff, 0x08e2, 0x0ae2, 0xaee2, 0xbffa, 0xbff8, 0xbff8, 0xbff8, 0xdd2e, 0x072d, 0x8080, 0x8080, 0x8080, 0x8080, 0x80c0, 0xf3f0, 0xc7e7, 0x0307, 0xfe2d, 0x1003, 0x0055, 0x0006, 0x0006, 0x0006, 0xdd2e, 0x012d, 0x30f0, 0x8080, 0xfe2d, 0x0001, 0x0094, 0x5065, 0x22ee, 0x042d, 0xe07e, 0xf080, 0xe0fe, 0x8080, 0x8080, 0x2222, 0x222e, 0x05d2, 0xf060, 0xe1f0, 0x8fcf, 0x0f8f, 0x0e0f, 0xfc0e, 0xfe2d, 0x0006, 0x0001, 0x0006, 0x0019, 0x0066, 0x0066, 0x019a, 0x066a, 0x03e2, 0xfcfc, 0x9fe3, 0x237f, 0x3fdf, 0xff2e, 0x0000, 0x0001, 0x002d, 0xc080, 0xfe2d, 0x4003, 0x4006, 0x4006, 0x4006, 0x5406, 0x05e2, 0x0ff0, 0x0001, 0x4082, 0xc8b1, 0x1af4, 0xe5ea, 0xfde2, 0x1401, 0x0a54, 0x4a00, 0xeeee, 0x002d, 0xf0fc, 0x012e, 0xbf00, 0xbfbf, 0xfd2e, 0xa402, 0xa4aa, 0xa4aa, 0xa4aa, 0x002d, 0xf7f0, 0x00e2, 0x3fc0, 0x00d2, 0xfcf0, 0xfd2e, 0x5008, 0x05a9, 0x6aa4, 0x6aa4, 0x6aa4, 0x6aa4, 0x6aa4, 0x6aa4, 0x6aa4, 0x6aa4, 0xdd2e, 0x032d, 0xf1f0, 0x8080, 0x8080, 0xfef0, 0xe222, 0x002d, 0xfcf0, 0x0e2d, 0x5005, 0x0055, 0x0064, 0x0054, 0x0064, 0x5564, 0x5565, 0x0000, 0x0000
};

// [D_08C3EA68] D_08C3EB4C Huffman Window 1
u32 D_08c3eb4c_window1[] = {
	0xe77a5b79, 0xca4bfeea, 0xad3bfbfd, 0xebef9aed, 0xb7ecf7dc, 0x035fdfe5
};

// [D_08C3EA80] D_08C3EB4C Huffman Window 2
u32 D_08c3eb4c_window2[] = {
	0x0b1b7450, 0x4143ba07, 0xa24e486a, 0x8954a9a4, 0x00000004
};

// [D_08C3EA94] D_08C3EB4C Huffman
struct Huffman D_08c3eb4c_huffman[] = {
	/* Data */			D_08c3eb4c_huffmandata,
	/* Size */			0x583,
	/* Count */			0xbb,
	/* Window 1 */		D_08c3eb4c_window1,
	/* Window 2 */		D_08c3eb4c_window2,
};

// [D_08C3EAA4] D_08C3EB4C RLE Data
u8 D_08c3eb4c_rledata[] = {
	0x1, 0xf, 0x11, 0x5, 0xb, 0xa, 0xa, 0xb, 0x5, 0xa, 0x2, 0xf, 0x1, 0x3, 0x13, 0x4, 0x6a, 0xb, 0x1, 0x10, 0x47, 0x8, 0x9, 0x7, 0x1, 0x7, 0x1, 0x7, 0x9, 0x7, 0x5, 0x3, 0x1, 0x7, 0x3, 0x5, 0x1, 0x7, 0x5, 0x3, 0x1, 0x7, 0x4, 0x4, 0x1, 0x7, 0x5, 0x3, 0x1, 0x7, 0x5, 0x3, 0x1, 0x7, 0x8, 0x8, 0x13, 0x4, 0xa, 0x3, 0xa, 0xa, 0x51, 0x7, 0x1, 0x10, 0x5c, 0x3, 0x1, 0x3, 0x3, 0x9, 0x1, 0x7, 0x9, 0x9, 0x7, 0x8, 0x8, 0x4, 0x3, 0x8, 0x1, 0xd, 0x3, 0x7, 0x1, 0x7, 0x1, 0x7, 0x8, 0x9, 0x28, 0x9, 0x87, 0x7, 0x40, 0x4, 0x15, 0x3, 0x2, 0xb, 0x1d, 0x3, 0x20, 0x8, 0x2, 0x6, 0x35, 0x4, 0x11, 0x5, 0x41, 0xc, 0x18, 0xb, 0x21, 0x5, 0x17, 0x3, 0x10, 0x3, 0xa, 0x3, 0x25, 0xb, 0xb, 0x4, 0x2, 0x6, 0xd, 0xd, 0x2, 0x4, 0xe, 0xb, 0x1, 0x3, 0xd, 0x7, 0x2a, 0x6, 0xf, 0x7, 0x3, 0xc, 0xd, 0x9, 0x3, 0x4, 0x1e, 0xc, 0x3, 0x4, 0x16, 0x9, 0x17, 0x7, 0x3, 0x5, 0xc, 0x3, 0x2, 0xa, 0x10, 0x5, 0x1, 0x2f
};

// [D_08C3EB4C] D_08C3EB4C Graphics
struct CompressedGraphics D_08c3eb4c = {
	/* Huffman Data */		D_08c3eb4c_huffman,
	/* RLE Data */			D_08c3eb4c_rledata,
	/* RLE Size */			0xa8,
	/* RLE Offset */		0x800,
	/* Double Compressed */	TRUE,
};


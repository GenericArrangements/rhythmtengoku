#include "global.h"
#include "graphics.h"

// // //  D_08C24F60  // // //

// [D_08C24814] D_08C24F60 Huffman Data
u16 D_08c24f60_huffmandata[] = {
	0x0070, 0x01c0, 0x01f0, 0x0c0c, 0x0f0f, 0xffff, 0x0470, 0xc0c0, 0xfef0, 0x80ff, 0xf080, 0xfffc, 0x00f0, 0x3030, 0x0770, 0xf0e0, 0xf0f0, 0x10f0, 0x1010, 0xc010, 0xc0c0, 0xf0c0, 0xf3ff, 0xff70, 0x0000, 0x0001, 0xff07, 0x050f, 0x3030, 0x3030, 0xfc30, 0xf8f8, 0xf8f8, 0x01fe, 0x17f0, 0xa401, 0xe4aa, 0xa4ff, 0x7777, 0x01f0, 0x00fe, 0xc080, 0x170f, 0x0006, 0xaa40, 0xff4a, 0xea4b, 0xe04b, 0xe04b, 0xf84b, 0xbe52, 0x000f, 0x005f, 0xcfc0, 0x07f5, 0x0007, 0xaa05, 0xaa05, 0xaa05, 0xaa05, 0x0055, 0xffaa, 0xff5f, 0xffa7, 0x17f0, 0xe40c, 0xf900, 0xf900, 0xfe40, 0xbe40, 0x6f90, 0x1555, 0x6a9a, 0x6f9b, 0x659f, 0x6f9f, 0x6a9f, 0x157e, 0x06f9, 0x0070, 0xf8c0, 0xff70, 0x4001, 0x4095, 0x40a5, 0xfff7, 0x0070, 0xf080, 0x7770, 0x02f7, 0x0800, 0x3c1c, 0x0078, 0xff07, 0x5406, 0x5400, 0x540a, 0x542a, 0x54aa, 0x54aa, 0x542a, 0x540a, 0x03f0, 0xc0c0, 0xc0c0, 0xc0c0, 0xc0c0, 0x0675, 0xcfc0, 0xcfcf, 0xcfcf, 0x0f0f, 0x3f3f, 0x3f3f, 0x3f3f, 0x0370, 0xc080, 0xc0c0, 0xfef8, 0xfef8, 0x02f7, 0x7c38, 0xfefe, 0x7cfe, 0x0070, 0xf080, 0xff70, 0x5002, 0x5055, 0x5095, 0x50a5, 0xfff7, 0x0070, 0xfce0, 0x047f, 0xfcfe, 0xfff8, 0xc3e7, 0x8181, 0xe7c3, 0x0207, 0x7f00, 0x7f7f, 0x073f, 0x7770, 0x00f7, 0x6c08, 0xfff7, 0x5000, 0x4055, 0x030f, 0xfcfc, 0xfcfc, 0xfcfc, 0xfcfc, 0x0907, 0xf0f0, 0xf0f0, 0xf0f0, 0xf0f0, 0xfefe, 0xfefe, 0xfefe, 0xfefe, 0xf9ff, 0xf8f8, 0x107f, 0x9412, 0x90aa, 0x90aa, 0x94aa, 0x42aa, 0xd0aa, 0xf42a, 0x7d02, 0x1f52, 0x87d2, 0xa152, 0xa802, 0xaa1f, 0xaa07, 0xa81f, 0x807d, 0x85f4, 0x87d0, 0x8542, 0x800a, 0x075f, 0x5007, 0x50aa, 0x50aa, 0x50aa, 0x50aa, 0x50aa, 0x50aa, 0x50aa, 0x8faa, 0x0f71, 0x900f, 0xe41a, 0xe406, 0xf906, 0xf956, 0xfeaa, 0x06ff, 0x1bf9, 0x1be4, 0x6fa4, 0x6f90, 0xbf90, 0xbf91, 0xff95, 0x7faa, 0x7fa9, 0x7fa5, 0xf777, 0x0170, 0xf8f8, 0xf8f8, 0x7000, 0x03f7, 0x3070, 0x6818, 0xefef, 0x8f8f, 0xf07f, 0x0002, 0xa955, 0xa954, 0xa954, 0x777f, 0x0007, 0x8e0e, 0x03f0, 0xc0c0, 0xc0c0, 0xc0c0, 0xc0c0, 0x0675, 0xfcfc, 0xfcfc, 0xfcfc, 0xfcfc, 0xf3f3, 0xf3f3, 0xf3f3, 0xff57, 0x5000, 0x5000, 0x0370, 0xc0c0, 0xc0c0, 0xc0c0, 0xc0c0, 0x06f7, 0xf870, 0xfcfc, 0xf8fc, 0x1070, 0x1010, 0x0380, 0x0c0c, 0xf0f7, 0x5003, 0xaa00, 0x540a, 0x500a, 0x400a, 0x0170, 0xfcfc, 0xfcfc, 0x7700, 0x04f7, 0x3070, 0x6010, 0xefec, 0x060f, 0x0606, 0xf07f, 0x4001, 0x5055, 0x5095, 0x0207, 0xf7fe, 0xf7f7, 0xf7f7, 0x7000, 0x0000, 0x017f, 0x1170, 0x8f87, 0xf0f7, 0x0000, 0xa095, 0x040f, 0xf9f8, 0xcfcf, 0xcfcf, 0xcfcf, 0xcfcf, 0x0870, 0xf0f0, 0xf0f0, 0xf0f0, 0xf0f0, 0x1010, 0x1010, 0x1010, 0x7070, 0x1070, 0x17f0, 0x0003, 0x5554, 0xaaa4, 0xffe4, 0xaaa4, 0x01f0, 0x00fe, 0xc080, 0x170f, 0x0006, 0xaa40, 0xff4a, 0xea4b, 0xe04b, 0xe04b, 0xf84b, 0xbe52, 0x000f, 0x00fe, 0x017f, 0x5405, 0x6454, 0x03ff, 0x5300, 0xff55, 0xc000, 0xc555, 0x00f0, 0xfe00, 0x75f0, 0x5409, 0x9455, 0x94aa, 0x94aa, 0x94fe, 0x94fe, 0x00fe, 0x5500, 0xffaa, 0x5554, 0xfff4, 0x17f0, 0xe400, 0xa4bf, 0x7777, 0x00f0, 0xd0fe, 0x170f, 0x4006, 0x4a84, 0x4b84, 0x4b84, 0x4b84, 0x4b85, 0x4b85, 0x4b85, 0x0070, 0x38f8, 0x0000, 0xf077, 0x030f, 0xfc70, 0xf3f3, 0xf3f3, 0xf3f3, 0xfff0, 0x5000, 0x5000, 0x0675, 0xfcfc, 0xfcfc, 0xfcfc, 0xf0f0, 0xf3f3, 0xf3f3, 0x03f3, 0x0370, 0xc0c0, 0xc0c0, 0xc0c0, 0xc0c0, 0x03f7, 0x3c30, 0xcfcf, 0xf0ef, 0x7070, 0x0777, 0x7fff, 0x00f0, 0x7070, 0x0000, 0x0fff, 0x0270, 0xcfc0, 0xcfcf, 0xc7cf, 0x0000, 0x00f7, 0xf8fe, 0xf0f7, 0x4000, 0x6855, 0x060f, 0x7070, 0xfcfe, 0xfcfc, 0xfcfc, 0xfcfc, 0xfcfc, 0xfcfc, 0x00ff, 0x0070, 0xf0f0, 0x1f70, 0x000e, 0x0001, 0x0068, 0x80da, 0xa8f6, 0x587d, 0xd89f, 0x5827, 0xa809, 0x9f02, 0xa700, 0x9f00, 0x7d02, 0xf62a, 0xda25, 0x6827, 0x0f77, 0x00f0, 0xfe7c, 0x17f0, 0xa406, 0xe4aa, 0xe4ff, 0xe4aa, 0xe456, 0xe406, 0xe456, 0xb9aa, 0x717f, 0x007f, 0x00ee, 0x0f17, 0x000a, 0x2ae1, 0x2fe1, 0x2ae1, 0x00e1, 0x4be1, 0x0b55, 0xab00, 0xffaa, 0xe155, 0xe000, 0xeaaa, 0x75f0, 0x000a, 0xfe94, 0xfe94, 0xfe94, 0xfe94, 0xfe94, 0xfe94, 0xfe94, 0xfe94, 0x00ff, 0x5554, 0xfff4, 0x17f0, 0xe408, 0xa4ff, 0x54aa, 0x9055, 0x901b, 0x901b, 0x951b, 0xaa1b, 0xff1b, 0xaa1b, 0x0f77, 0x010f, 0x3f80, 0x3030, 0x7f05, 0x0004, 0x00a5, 0xf0a5, 0xf0a5, 0xaa55, 0xff00, 0x0040, 0x0080, 0x0005, 0x0070, 0xc020, 0x5470, 0x0001, 0x0050, 0x0080, 0x0500, 0x0270, 0x1020, 0x0010, 0x0808, 0x7000, 0x0400, 0x0070, 0x0888, 0x5704, 0x9406, 0x8d55, 0xa155, 0x5455, 0x5595, 0x5545, 0x555c, 0x5552, 0x0004, 0x0150, 0x4020, 0x8980, 0x7045, 0x1001, 0xfcaa, 0xfdaa, 0x0040, 0x4000, 0x0050, 0x1020, 0x7450, 0x5003, 0x5600, 0x1f00, 0x2f00, 0x8000, 0x0050, 0x8080, 0x4750, 0x0005, 0x0040, 0x0080, 0x5c90, 0x00a9, 0x0001, 0x0d5a, 0x005f, 0xf3f0, 0xf7f5, 0x5003, 0x50aa, 0x50aa, 0x50aa, 0x50aa, 0x02f0, 0x1010, 0x1010, 0xf000, 0x750f, 0x4005, 0x4000, 0x42aa, 0x42aa, 0x42bf, 0x42bf, 0x42bf, 0x00f0, 0xf3f0, 0x750f, 0x5002, 0x50aa, 0x50aa, 0x50af, 0x5577, 0x020f, 0xf3fc, 0xf0f3, 0xf0f0, 0xf75f, 0x5002, 0x50aa, 0x50aa, 0x50aa, 0x7777, 0x005f, 0xfcfc, 0x057f, 0x0004, 0xaa55, 0x0f00, 0x0f5a, 0x0f5a, 0x0faa, 0x5555, 0x00f0, 0xfcfc, 0xf570, 0x0001, 0xaa55, 0x00ff, 0x17f0, 0xe40c, 0xe4ff, 0xe4aa, 0xa456, 0x5406, 0x0005, 0x1bff, 0x1baa, 0x1b95, 0x1b90, 0x1b90, 0x1b90, 0x1a90, 0x1550, 0x75f0, 0x9403, 0x94fe, 0x94fe, 0x94fe, 0x94aa, 0x5555, 0x00f0, 0xfefe, 0xf570, 0x0005, 0x5500, 0xffaa, 0x0000, 0xfa55, 0xfa55, 0xfa55, 0x7777, 0x00f5, 0x0c0c, 0xff55, 0xffff, 0x0050, 0x8080, 0x0170, 0x8080, 0x8080, 0x5f70, 0x0007, 0xa040, 0xa05f, 0xa05f, 0xa05f, 0xa05f, 0xa05f, 0xa05f, 0xa05f, 0x7755, 0x0007, 0xf3f0, 0x4570, 0x0404, 0x0200, 0x00c0, 0x0002, 0x0004, 0x0020, 0x4000, 0x0070, 0x0ff0, 0x5740, 0xa401, 0x9c00, 0x8100, 0x4000, 0x0170, 0x0808, 0xf808, 0x5047, 0x0000, 0xaaa4, 0x0054, 0x0040, 0x8040, 0x4750, 0x0003, 0xa940, 0xab00, 0xa900, 0x7540, 0x0050, 0x0498, 0x7450, 0x0404, 0x0200, 0x5f00, 0x2f00, 0x1f00, 0x5600, 0x0150, 0x00c0, 0x0201, 0x7540, 0x1001, 0xe000, 0xc000, 0x0050, 0x8080, 0x7450, 0x0002, 0x0040, 0x0080, 0x0001, 0xff57, 0x0006, 0x00a5, 0x00a5, 0x00a5, 0x00a5, 0x00a5, 0x00a5, 0x00a5, 0xff55, 0x000f, 0xfefe, 0x570f, 0x5410, 0xea55, 0xea43, 0xea43, 0xea43, 0xea43, 0xea43, 0xea43, 0xea43, 0xfa43, 0xfa50, 0xfa50, 0xfa50, 0xfa50, 0xfa50, 0xfa50, 0xfa50, 0x5550, 0x0754, 0x9402, 0xffaa, 0xc5aa, 0x5aff, 0x570f, 0x5001, 0x50fa, 0x50ff, 0x5555, 0x000f, 0x0c0c, 0x570f, 0x5004, 0xea55, 0xea43, 0xea43, 0xff43, 0xff43, 0x0ff5, 0x010f, 0x8080, 0xfcff, 0x00ff, 0x0000, 0x0000
};

// [D_08C24E28] D_08C24F60 Huffman Window 1
u32 D_08c24f60_window1[] = {
	0xbfd7db7b, 0xceff6bfb, 0x749f3bff, 0xff65bbdb, 0xdb96f6df, 0x005bdff6
};

// [D_08C24E40] D_08C24F60 Huffman Window 2
u32 D_08c24f60_window2[] = {
	0x90825aa0, 0x2d524913, 0xa525d481, 0xaaa8baaa, 0x00000176
};

// [D_08C24E54] D_08C24F60 Huffman
struct Huffman D_08c24f60_huffman[] = {
	/* Data */			D_08c24f60_huffmandata,
	/* Size */			0x639,
	/* Count */			0xb9,
	/* Window 1 */		D_08c24f60_window1,
	/* Window 2 */		D_08c24f60_window2,
};

// [D_08C24E64] D_08C24F60 RLE Data
u8 D_08c24f60_rledata[] = {
	0x1, 0x2d, 0x3, 0x1c, 0x4, 0xb, 0x1, 0x3, 0x1, 0xb, 0x1, 0x3, 0x1, 0xb, 0x1, 0x3, 0x1, 0x2e, 0x2, 0x8, 0x8, 0x2e, 0x2, 0x8, 0x8, 0x2b, 0x4, 0x6, 0xa, 0x8, 0x8, 0x11, 0x8, 0x7, 0x8, 0x8, 0xd, 0x3, 0xa, 0x6, 0x21, 0x3, 0xd, 0x3, 0x1, 0x3, 0x1, 0x7, 0x21, 0x6, 0x2a, 0x10, 0x10, 0x3, 0xd, 0x3, 0x1, 0xb, 0x1, 0x3, 0xd, 0xa, 0x6, 0x4, 0x5, 0x6, 0x4, 0x10, 0xd, 0x14, 0xf, 0x6, 0x17, 0xa, 0x6, 0x4, 0x4b, 0x41, 0x2f, 0x10, 0xd, 0x3, 0x3c, 0x15, 0x1f, 0x11, 0x2e, 0x5, 0x6, 0x6, 0x3, 0x7, 0x7, 0xf, 0x16, 0x4, 0x7, 0x3, 0x19, 0x3, 0x3c, 0x4, 0x8, 0x8, 0x21, 0x17, 0x5, 0x3, 0x1, 0xb, 0x5, 0xb, 0x17, 0x3, 0x1, 0x3, 0x1, 0x5, 0xb, 0x5, 0x15, 0xb, 0x5, 0x2c, 0x1c, 0x3, 0x1, 0xb, 0x1, 0x3, 0xd, 0x3, 0x11, 0x11, 0x4, 0x6, 0x14, 0x10, 0xc, 0x4, 0xd, 0x3, 0x8, 0x28, 0x16, 0x2b, 0x46, 0x9, 0x7, 0x9, 0x11, 0xf, 0x1, 0x5, 0x1b, 0x3, 0xd, 0x3, 0x1, 0x3, 0x1, 0x3, 0x1, 0x3, 0x1, 0x5, 0xb, 0x5, 0x1b, 0x6, 0x9, 0x22, 0x1e, 0x3, 0xe, 0xb, 0x5, 0x3, 0xd, 0x7, 0x19, 0x3, 0xd, 0x10, 0x4, 0xb, 0x1, 0x3, 0x1, 0xb, 0x1, 0x3, 0x1, 0xb, 0x1, 0x3, 0x1, 0xb, 0xd, 0x3, 0x1, 0x7, 0x1, 0x3, 0x1, 0x3, 0xd, 0x3, 0x1, 0x3, 0x1, 0x3, 0x1, 0x3, 0x1, 0x3, 0xb, 0x5, 0x21, 0x5, 0x1, 0x3, 0x1, 0x3, 0xf, 0x3, 0x1, 0x12, 0x1e, 0xf, 0x8, 0x8, 0x8, 0x8, 0x1a, 0x26, 0x2d, 0x3, 0x2, 0xe, 0x16, 0xa, 0x21, 0xf, 0x3, 0xd, 0x3, 0xd, 0xd, 0x3, 0x14, 0xac
};

// [D_08C24F60] D_08C24F60 Graphics
struct CompressedGraphics D_08c24f60 = {
	/* Huffman Data */		D_08c24f60_huffman,
	/* RLE Data */			D_08c24f60_rledata,
	/* RLE Size */			0xfc,
	/* RLE Offset */		0xc00,
	/* Double Compressed */	TRUE,
};

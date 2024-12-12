#include "global.h"
#include "graphics.h"

// // //  D_08C4FEC8  // // //

// [D_08C4FC54] D_08C4FEC8 Huffman Data
u16 D_08c4fec8_huffmandata[] = {
	0xf410, 0x400e, 0x4055, 0x40a9, 0x4055, 0x40a9, 0x4055, 0x40a9, 0x4055, 0x55a9, 0x6a01, 0x5501, 0x6a01, 0x5501, 0x6a01, 0x5501, 0x6a01, 0x0701, 0x707e, 0x7070, 0x7070, 0x7070, 0x0e00, 0x0e0e, 0x0e0e, 0x0e0e, 0x0001, 0x0071, 0xfe00, 0xf871, 0x5403, 0x9655, 0x9694, 0x9694, 0x9694, 0x0071, 0x7f00, 0x7777, 0x1777, 0x0078, 0x0606, 0xf178, 0x1401, 0x1494, 0x1494, 0x8888, 0x0071, 0xfe00, 0x7771, 0x0087, 0x9190, 0xf178, 0x5402, 0x5416, 0x5416, 0x5416, 0x0071, 0x7f00, 0x7777, 0x1777, 0x0187, 0xc0c0, 0xc0c0, 0x7777, 0x8877, 0x0071, 0xfe00, 0xf871, 0x5404, 0x5455, 0x545a, 0x545a, 0x545a, 0x545a, 0x7788, 0x0071, 0x7f00, 0x7777, 0x1777, 0x0087, 0xf8f8, 0xf187, 0x4001, 0x4081, 0x4081, 0x8888, 0x0071, 0xfe00, 0xf871, 0x5404, 0xa455, 0xa4a5, 0xa4a5, 0xa4a5, 0xa4a5, 0x8877, 0x0071, 0x7f00, 0xf817, 0x0004, 0x2a40, 0xaa40, 0xa040, 0xa040, 0xaa40, 0x1777, 0x0b41, 0x0800, 0x681c, 0x1404, 0x1064, 0x1a19, 0x206a, 0x4040, 0x4642, 0x0733, 0x0408, 0x0402, 0x0008, 0x0410, 0xf8f8, 0xf8f8, 0xf1f0, 0xf1f1, 0xf801, 0xf410, 0x400d, 0x40a9, 0x4055, 0x40a9, 0x4055, 0x40a9, 0x4055, 0x55a9, 0x6a01, 0x5501, 0x6a01, 0x5501, 0x6a01, 0x5501, 0x6a01, 0x0701, 0x707e, 0x7070, 0x7070, 0x7070, 0x0e00, 0x0e0e, 0x0e0e, 0x0e0e, 0x8701, 0x5401, 0xebe8, 0xffa8, 0x7771, 0x0078, 0xe9e0, 0x7887, 0x0071, 0xfefe, 0xf781, 0x0002, 0x6900, 0x6a55, 0x6a29, 0x1778, 0x0087, 0xf8f8, 0x0017, 0x8080, 0xf871, 0x0002, 0x9400, 0x9456, 0x9456, 0x0078, 0x606e, 0x8888, 0x0071, 0xfefe, 0x1111, 0x1111, 0x0187, 0xc0c0, 0x81c0, 0x7778, 0x8777, 0x0017, 0x8080, 0xf871, 0x0004, 0x5400, 0x545a, 0x545a, 0x545a, 0x54aa, 0x8888, 0x0071, 0xfefe, 0xf871, 0x0002, 0x9500, 0x95aa, 0x9516, 0x1778, 0x0078, 0x0404, 0x0017, 0x8080, 0xf871, 0x0002, 0xa400, 0xa4a5, 0xa4a5, 0x0087, 0x7c7c, 0x8877, 0x0071, 0xfefe, 0xf781, 0x0000, 0x9500, 0x0217, 0x0808, 0x0808, 0x0808, 0x1777, 0x0001, 0x7f00, 0xf401, 0x000d, 0xa815, 0x0015, 0xa815, 0x0015, 0xa815, 0x0015, 0xa815, 0x5400, 0x542a, 0x5400, 0x542a, 0x5400, 0x542a, 0x5400, 0x1444, 0x0801, 0x707e, 0x7070, 0x7070, 0x7070, 0x0e00, 0x0e0e, 0x0e0e, 0x0e0e, 0x07fe, 0xf410, 0x400d, 0x40a9, 0x4055, 0x40a9, 0x4055, 0x40a9, 0x4055, 0x55a9, 0x6a01, 0x5501, 0x6a01, 0x5501, 0x6a01, 0x5501, 0x6a01, 0x0701, 0x707e, 0x7070, 0x7070, 0x7070, 0x0e00, 0x0e0e, 0x0e0e, 0x0e0e, 0x0001, 0x0000, 0x0000
};

#if REV < 1
// [D_08C4FE8C] D_08C4FEC8 Huffman Window 1
u32 D_08c4fec8_window1[] = {
	0xd964eb3b, 0x6c97b5f6, 0x000076ef
};
#else
// [D_08C4FE8C] D_08C4FEC8 Huffman Window 1
u32 D_08c4fec8_window1[] = {
	0xd964eb3b, 0x6c97b5f6, 0x00d076ef
};
#endif

// [D_08C4FE98] D_08C4FEC8 Huffman Window 2
u32 D_08c4fec8_window2[] = {
	0x92952249, 0x00429250
};

// [D_08C4FEA0] D_08C4FEC8 Huffman
struct Huffman D_08c4fec8_huffman[] = {
	/* Data */			D_08c4fec8_huffmandata,
	/* Size */			0x242,
	/* Count */			0x51,
	/* Window 1 */		D_08c4fec8_window1,
	/* Window 2 */		D_08c4fec8_window2,
};

// [D_08C4FEB0] D_08C4FEC8 RLE Data
u8 D_08c4fec8_rledata[] = {
	0x47, 0x3, 0x85, 0x5, 0xa, 0x6, 0xb, 0x5, 0x15, 0x7, 0x9, 0xe7, 0xc1, 0x0, 0x40, 0x41, 0x0, 0xc0, 0x41, 0x0, 0xc0, 0x0, 0x0, 0x0
};

// [D_08C4FEC8] D_08C4FEC8 Graphics
struct CompressedGraphics D_08c4fec8 = {
	/* Huffman Data */		D_08c4fec8_huffman,
	/* RLE Data */			D_08c4fec8_rledata,
	/* RLE Size */			0x12,
	/* RLE Offset */		0x800,
	/* Double Compressed */	TRUE,
};

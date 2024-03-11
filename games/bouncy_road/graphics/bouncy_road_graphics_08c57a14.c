#include "global.h"
#include "graphics.h"

// // //  D_08C57A14  // // //

// [D_08C577E8] D_08C57A14 Huffman Data
u16 D_08c57a14_huffmandata[] = {
	0x0000, 0x0089, 0xff00, 0x9870, 0x0006, 0x0090, 0x0fff, 0x3aaa, 0x3800, 0xf000, 0xacff, 0x2caa, 0x0000, 0x0089, 0xff00, 0x9078, 0xa400, 0x2aaa, 0x80a9, 0xa406, 0xa4ea, 0xa4ea, 0xa4ea, 0xa4ea, 0xa4ea, 0xa4ea, 0xa4ea, 0x00b0, 0xfcf0, 0x8b70, 0x5002, 0x50aa, 0x50fd, 0x50fd, 0x8887, 0x00b0, 0xf1f0, 0x9a0b, 0x4003, 0x7800, 0x7abf, 0x7abf, 0x7abf, 0xfed0, 0x0009, 0x0090, 0x00f9, 0x40fe, 0x80ff, 0x00ff, 0x001b, 0x01bf, 0x02ff, 0x07ff, 0x0bff, 0x00b0, 0xf000, 0x87b0, 0x5003, 0xa055, 0xa055, 0xa0fe, 0x00fe, 0x8887, 0x00b0, 0xf1f0, 0x9a0b, 0x4003, 0x7800, 0x7abf, 0x7abf, 0x56bf, 0xf870, 0x0001, 0x0090, 0x0090, 0x8700, 0x00b0, 0xe000, 0xb7a0, 0x0002, 0x40a5, 0x40fb, 0x00db, 0xb980, 0x2403, 0x2400, 0x2400, 0x2400, 0x2403, 0x00ba, 0x0980, 0x0ba7, 0x0980, 0x0ba7, 0xb980, 0x2406, 0x0018, 0x0018, 0x0018, 0x0018, 0x0018, 0x0018, 0x0018, 0x0890, 0xabb0, 0xf078, 0xa401, 0xa4aa, 0xa4aa, 0x00b0, 0x3000, 0x8ba0, 0x0002, 0x0009, 0x0009, 0x02a5, 0xa980, 0x4006, 0x400e, 0x400e, 0x400e, 0x400e, 0x400e, 0x400e, 0x400e, 0x00a9, 0x9870, 0x5004, 0x50a9, 0x50a9, 0x50a9, 0x00a9, 0x00a9, 0xf0a9, 0x4005, 0x4085, 0x4085, 0x4085, 0x4085, 0xaaa9, 0xffea, 0xdfe0, 0x4003, 0xc0aa, 0x00aa, 0x00a9, 0x00a7, 0xed00, 0x00f0, 0xf3f0, 0xd0ef, 0xa403, 0xac00, 0xa900, 0xab40, 0xaab4, 0x7ba0, 0x4001, 0x40fe, 0x00ae, 0xaaba, 0x00a0, 0x00e0, 0xa870, 0x0001, 0x0090, 0x0090, 0x8700, 0x0ba7, 0x0980, 0x0ba7, 0x0980, 0x00ab, 0xa980, 0x240b, 0x2403, 0x2400, 0x2400, 0x2400, 0x2400, 0xfc18, 0x0018, 0x0018, 0x0018, 0x0018, 0x0018, 0x0018, 0x0890, 0x00a0, 0x31f0, 0x8ba0, 0x0002, 0x0009, 0x0009, 0x0000, 0x9078, 0xa402, 0xa4aa, 0xa4aa, 0x2aaa, 0x80a9, 0xa406, 0xa4ea, 0xa4ea, 0xa4ea, 0xa4ea, 0xa4ea, 0xa4ea, 0xa4ea, 0x0000, 0x8700, 0x0089, 0xff00, 0x7980, 0x0006, 0xaa24, 0x552a, 0x0005, 0x0018, 0xaaa8, 0x5550, 0x0d00, 0x0000, 0x0089, 0xff00, 0xa980, 0x0007, 0x0e40, 0x0e40, 0x0e40, 0x0e40, 0x0e40, 0x0e40, 0x0e40, 0x0e40, 0x0000, 0x0000
};

// [D_08C579C4] D_08C57A14 Huffman Window 1
u32 D_08c57a14_window1[] = {
	0x90777df6, 0xb3d03777, 0x00000001
};

// [D_08C579D0] D_08C57A14 Huffman Window 2
u32 D_08c57a14_window2[] = {
	0xdbef6b5a, 0x004751ae
};

// [D_08C579D8] D_08C57A14 Huffman
struct Huffman D_08c57a14_huffman[] = {
	/* Data */			D_08c57a14_huffmandata,
	/* Size */			0x16f,
	/* Count */			0x42,
	/* Window 1 */		D_08c57a14_window1,
	/* Window 2 */		D_08c57a14_window2,
};

// [D_08C579E8] D_08C57A14 RLE Data
u8 D_08c57a14_rledata[] = {
	0x1, 0x9, 0x7, 0x9, 0x7, 0x9, 0x6, 0xa, 0x17, 0x4, 0xc, 0x3, 0xd, 0x6, 0xa, 0x5, 0x19, 0x3, 0xd, 0x0, 0x53, 0x5a, 0x5, 0xb, 0x5, 0xd, 0x3, 0xc, 0x0, 0x75, 0x51, 0x0, 0xb1, 0x6, 0xa, 0x6, 0x9, 0x7, 0x9, 0x7, 0x9, 0x11, 0x0, 0xb0
};

// [D_08C57A14] D_08C57A14 Graphics
struct CompressedGraphics D_08c57a14 = {
	/* Huffman Data */		D_08c57a14_huffman,
	/* RLE Data */			D_08c57a14_rledata,
	/* RLE Size */			0x28,
	/* RLE Offset */		0x800,
	/* Double Compressed */	TRUE,
};


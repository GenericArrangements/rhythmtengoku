#include "global.h"
#include "graphics.h"

// // //  D_08D058C4  // // //

// [D_08D052E0] D_08D058C4 Huffman Data
u16 D_08d058c4_huffmandata[] = {
	0x0001, 0x00f0, 0x2451, 0x0008, 0x0090, 0x40e9, 0xe4ce, 0x0eb0, 0xb09b, 0x5ba9, 0x00aa, 0x0040, 0x40e4, 0x1124, 0x01f1, 0x1010, 0x1010, 0x1111, 0x6777, 0x2124, 0x5677, 0x2212, 0x2567, 0xa221, 0x1457, 0xaa22, 0x2145, 0x43a2, 0x5402, 0x552a, 0x554a, 0x5550, 0x7542, 0xe400, 0xf9ff, 0x0057, 0x8010, 0x6457, 0x0000, 0x0090, 0x2467, 0x4215, 0x0003, 0x0040, 0x0090, 0x80e4, 0x6039, 0x7542, 0x2125, 0x7754, 0x4212, 0x7775, 0x6421, 0x7777, 0xaaaa, 0x0054, 0x4080, 0x2154, 0x0005, 0x4084, 0x50ec, 0x007b, 0x03b1, 0x00eb, 0x000e, 0x4442, 0x0054, 0xf010, 0x005f, 0xfefe, 0x245f, 0x5401, 0x5455, 0x55e5, 0x1254, 0x4004, 0x10b8, 0xc42e, 0xb857, 0x6e55, 0x5b55, 0x5555, 0x7642, 0xe400, 0xf9ff, 0x0067, 0x8010, 0x3567, 0x0001, 0x0090, 0x00e0, 0x7246, 0xa400, 0xa93f, 0x5677, 0xa223, 0x3567, 0xaa22, 0x2356, 0x45a3, 0x5400, 0x550e, 0xfa23, 0x8401, 0xa0aa, 0xa9aa, 0xaaaa, 0x555f, 0x1245, 0x555f, 0x2124, 0x125f, 0x5400, 0x944e, 0x65f1, 0x115f, 0x765f, 0xff1f, 0x7765, 0xf7fd, 0x4400, 0x90aa, 0x7777, 0x01f5, 0x8040, 0x0100, 0x1df5, 0x1402, 0x6400, 0x9000, 0xfffd, 0x241f, 0x5402, 0xa8a5, 0x544f, 0xaca1, 0xd54f, 0xa402, 0x5508, 0x5533, 0x554f, 0x1245, 0x9401, 0xf56f, 0x5706, 0x0045, 0xcfbe, 0x2f14, 0x0003, 0x6555, 0xbf15, 0x55ff, 0x00fe, 0xd5f4, 0x9401, 0x7400, 0xd000, 0x0154, 0x4080, 0x8000, 0x1524, 0x0009, 0x0040, 0x20d2, 0x487d, 0xf4a7, 0x9da9, 0x50aa, 0xf4ab, 0x9faa, 0xa9aa, 0xa8aa, 0xf765, 0x0002, 0xaaa5, 0xaaea, 0xaa16, 0x5412, 0x5400, 0xa1e0, 0x4765, 0x9001, 0xaa43, 0xaaa9, 0x7765, 0x02f7, 0x4000, 0x0080, 0x0601, 0xfdf7, 0x6400, 0x9000, 0x027f, 0xfefe, 0xdebe, 0xf2ee, 0x57fd, 0x4401, 0x90aa, 0xffea, 0x1425, 0x4001, 0xff56, 0xa55f, 0x2654, 0x4000, 0x55a5, 0x5412, 0x5001, 0x0150, 0xfa80, 0x6554, 0x7776, 0x0057, 0xff00, 0x4125, 0x0001, 0xa5a5, 0x5ad6, 0x7654, 0x9001, 0xfe50, 0xfffe, 0xda3f, 0x9001, 0xa9aa, 0x3faa, 0xffff, 0x6fdd, 0x2355, 0xfdfd, 0xa235, 0xff5f, 0x2fa3, 0x5000, 0x5632, 0xaa3f, 0x00fa, 0x1412, 0x7dfa, 0x0002, 0xa555, 0x9fff, 0x67ff, 0x56f7, 0x0001, 0x0094, 0x40f9, 0x2345, 0x3f56, 0xa423, 0x1400, 0xfc42, 0x5777, 0xaa23, 0x3577, 0x25a3, 0x5402, 0x5532, 0x555c, 0x5554, 0x3567, 0x0001, 0x0004, 0x90f8, 0x3233, 0x3556, 0x4a32, 0xa400, 0xa95f, 0x017f, 0xfefe, 0xfefe, 0x567f, 0x1400, 0x84e5, 0x4455, 0x44fd, 0x2222, 0x1fdd, 0xa321, 0x4567, 0x0000, 0x90a4, 0x3245, 0x9400, 0xea94, 0x7a32, 0x0001, 0xa4a9, 0xaaaa, 0xaaaa, 0x6777, 0x3455, 0x5576, 0xa423, 0x1000, 0xf142, 0xa312, 0xaaaa, 0x00f7, 0xa010, 0x6df7, 0x0000, 0x5c90, 0xddff, 0xa333, 0x01fa, 0x1010, 0x1010, 0x42fa, 0x0001, 0x0001, 0xaaaa, 0x1254, 0x0001, 0x0055, 0xffaa, 0x2111, 0x0045, 0xf010, 0x5241, 0x4001, 0xfa00, 0xfff5, 0x154f, 0x5403, 0x5469, 0xfc55, 0x54ff, 0xa8aa, 0x0045, 0x7bf0, 0x1245, 0xa408, 0xbd51, 0x0bd5, 0x007f, 0xe455, 0xbe45, 0x0be4, 0x00be, 0x000b, 0x001a, 0xf2df, 0x0001, 0xaa50, 0xaa4a, 0xfdf2, 0x01f2, 0x1060, 0x0408, 0x4fd2, 0x0002, 0x9500, 0xe5aa, 0x99ff, 0x02f4, 0x10d0, 0x1211, 0x3014, 0x2154, 0x0003, 0x8040, 0xd555, 0xad55, 0x3b55, 0x1255, 0x6421, 0x2112, 0x7654, 0x5421, 0x7776, 0x5555, 0x1255, 0x777f, 0x1256, 0x677f, 0x3125, 0x567f, 0xa312, 0x256f, 0xaa31, 0x124f, 0xaaa3, 0xa124, 0x002a, 0x1030, 0x567a, 0x0000, 0x9555, 0x2457, 0x0000, 0x0090, 0x2457, 0x1255, 0x6542, 0x2125, 0x7754, 0x5421, 0x7776, 0x7542, 0xf657, 0x0000, 0x0009, 0x25df, 0x0000, 0xea50, 0xdf11, 0x1245, 0xfdf2, 0x2125, 0x7ff4, 0x4212, 0x777f, 0xf542, 0xf547, 0x0000, 0x0039, 0xf576, 0x5401, 0xaa55, 0xaaea, 0x1245, 0xe401, 0xb800, 0x6f80, 0x7fa3, 0x5400, 0xfa55, 0x2456, 0x7777, 0x3245, 0x5677, 0xa334, 0x4577, 0xaa32, 0x2457, 0xaaa3, 0x3145, 0xd12a, 0x0001, 0x0019, 0x0006, 0xf7fd, 0x4001, 0x9055, 0x44aa, 0x00f7, 0x10d0, 0x567f, 0x5401, 0x9154, 0xc554, 0x777f, 0x4567, 0x6777, 0x2245, 0x5677, 0xa324, 0x2567, 0xaa32, 0xa245, 0xa400, 0xe9ff, 0xaaaa, 0xaa23, 0x003a, 0x0010, 0x125a, 0x0001, 0xa555, 0xbe95, 0x2357, 0x0003, 0x0040, 0x0090, 0x00a0, 0x55b8, 0x4125, 0x9001, 0x6940, 0x35a4, 0x4211, 0x7654, 0xe400, 0xfe90, 0x4125, 0x0001, 0x5065, 0x69d6, 0x6544, 0x4421, 0x7765, 0x755f, 0x00f7, 0x1010, 0x54f7, 0x0000, 0x0001, 0x7654, 0xe401, 0xfdff, 0x00ff, 0x2df3, 0xa400, 0x90ff, 0x01fa, 0x90a0, 0x8080, 0xb9fa, 0x0006, 0x0040, 0x00a0, 0x80fa, 0xe0ff, 0xe0fe, 0xf8fe, 0xf8bf, 0x9bbb, 0x009a, 0x0300, 0xfa9b, 0x5014, 0x00aa, 0x40a9, 0x40a4, 0x01a4, 0x0090, 0xa490, 0xa4aa, 0x90aa, 0x90aa, 0x40aa, 0x40aa, 0x40aa, 0x40aa, 0xaaaa, 0xaa1a, 0xaa1a, 0xaa06, 0xaa06, 0xaa01, 0xaa01, 0xaa01, 0x00b9, 0xe0ce, 0x7ab9, 0x5404, 0x0054, 0x0052, 0xf14a, 0x054a, 0x552a, 0xaaaa, 0x01b9, 0x730c, 0x0707, 0x7a9b, 0x9003, 0xa41f, 0xa405, 0xa900, 0xaa50, 0xfafd, 0x5000, 0xa4a5, 0x00fa, 0x8050, 0x345a, 0x000e, 0x9555, 0xe555, 0xf955, 0xfe55, 0xff95, 0xffe5, 0xfff9, 0xfffe, 0x5556, 0x555b, 0x556f, 0x55bf, 0x56ff, 0x5bff, 0x6fff, 0x0043, 0x0180, 0xd345, 0xa40d, 0x90aa, 0x40aa, 0x00aa, 0x00a9, 0x00a4, 0x0090, 0xaa40, 0xaa6a, 0xaa1a, 0xaa06, 0x6a01, 0x1a00, 0x0600, 0x0100, 0xecd5, 0x001f, 0x7e79, 0x7e79, 0x7e79, 0x7e79, 0x7e79, 0x7e79, 0x7e79, 0x7e79, 0xfe79, 0xfe79, 0xfe79, 0xfe79, 0xee79, 0xee79, 0xee79, 0xde79, 0xfe7f, 0xfe7f, 0xfe7f, 0xfe7f, 0xfe7f, 0xfe7b, 0xfa7b, 0xf677, 0x9fe6, 0x9fe6, 0x9fe6, 0x9fe6, 0x9fe6, 0x9ee6, 0x9ee6, 0x9de6, 0x6345, 0x0016, 0x0040, 0x0090, 0x00a4, 0x40a9, 0x90aa, 0xecaa, 0xbbee, 0x01bb, 0x0600, 0x1a00, 0x6a00, 0xaa00, 0xaa01, 0xee06, 0xbbde, 0x01bb, 0x0600, 0x1a00, 0x6a00, 0xaa00, 0xaa01, 0xee06, 0xbbde, 0x4636, 0x0000, 0x0000
};

// [D_08D05814] D_08D058C4 Huffman Window 1
u32 D_08d058c4_window1[] = {
	0xb00bc00b, 0xf41060f7, 0xa079fdff, 0xc8707313, 0x0001efdc, 0x1e018070, 0x1bc80780, 0x003fef7e
};

// [D_08D05834] D_08D058C4 Huffman Window 2
u32 D_08d058c4_window2[] = {
	0xb7bf72da, 0xafbf7bd7, 0x7dbff56d, 0x0003ad57
};

// [D_08D05844] D_08D058C4 Huffman
struct Huffman D_08d058c4_huffman[] = {
	/* Data */			D_08d058c4_huffmandata,
	/* Size */			0x3cf,
	/* Count */			0xf8,
	/* Window 1 */		D_08d058c4_window1,
	/* Window 2 */		D_08d058c4_window2,
};

// [D_08D05854] D_08D058C4 RLE Data
u8 D_08d058c4_rledata[] = {
	0x1, 0xf, 0x1, 0xf, 0x11, 0xa, 0x6, 0x7, 0x1e, 0x5, 0x16, 0xf, 0x1, 0x6, 0xa, 0xf, 0xa, 0x6, 0x1, 0x7, 0x9, 0xf, 0xc, 0x4, 0x6, 0x5, 0x17, 0xe, 0x11, 0x3, 0x24, 0x8, 0x2, 0xe, 0x1, 0x3, 0xd, 0xc, 0x1d, 0x6, 0x2, 0xf, 0x2, 0xc, 0x2, 0xf, 0x8, 0x8, 0x21, 0x8, 0x8, 0x6, 0x15, 0x4, 0x4, 0xc, 0x2a, 0x6, 0x1, 0x6, 0x1a, 0x4, 0x13, 0x8, 0x1, 0x8, 0x9, 0xe, 0xa, 0x6, 0x9, 0x7, 0x2, 0xe, 0x6, 0xa, 0xa, 0x6, 0x1, 0x6, 0x13, 0x6, 0x2, 0xe, 0x22, 0xc, 0x3, 0x4, 0xc, 0xe, 0x12, 0xa, 0xf, 0x6, 0x13, 0x8, 0x7, 0xe, 0x31, 0xc, 0x4, 0x8, 0x8, 0x6, 0x1d, 0xc, 0xf, 0x4, 0x65, 0x8, 0xb1, 0x3f
};

// [D_08D058C4] D_08D058C4 Graphics
struct CompressedGraphics D_08d058c4 = {
	/* Huffman Data */		D_08d058c4_huffman,
	/* RLE Data */			D_08d058c4_rledata,
	/* RLE Size */			0x70,
	/* RLE Offset */		0x600,
	/* Double Compressed */	TRUE,
};

u8 D_08d058d4[156] = {
	0x78, 0x00, 0x73, 0x00, 0x78, 0x00, 0x73, 0x00, 0x78, 0x00, 0x73, 0x00,
	0x78, 0x00, 0x73, 0x00, 0x78, 0x00, 0x73, 0x00, 0x78, 0x00, 0x73, 0x00,
	0x78, 0x00, 0x73, 0x00, 0xF0, 0x00, 0xA0, 0x00, 0x40, 0x00, 0x40, 0x00,
	0x40, 0x00, 0x40, 0x00, 0x40, 0x00, 0x40, 0x00, 0x40, 0x00, 0x40, 0x00,
	0x40, 0x00, 0x40, 0x00, 0x40, 0x00, 0x40, 0x00, 0x40, 0x00, 0x40, 0x00,
	0x40, 0x00, 0x40, 0x00, 0x40, 0x00, 0x40, 0x00, 0x40, 0x00, 0x40, 0x00,
	0x40, 0x00, 0x40, 0x00, 0x40, 0x00, 0x40, 0x00, 0x40, 0x00, 0x40, 0x00,
	0x40, 0x00, 0x40, 0x00, 0x40, 0x00, 0x40, 0x00, 0x40, 0x00, 0x40, 0x00,
	0x40, 0x00, 0x40, 0x00, 0x40, 0x00, 0x40, 0x00, 0x40, 0x00, 0x40, 0x00,
	0x40, 0x00, 0x40, 0x00, 0x40, 0x00, 0x40, 0x00, 0x40, 0x00, 0x40, 0x00,
	0x40, 0x00, 0x40, 0x00, 0x40, 0x00, 0x40, 0x00, 0x40, 0x00, 0x40, 0x00,
	0x40, 0x00, 0x40, 0x00, 0x40, 0x00, 0x40, 0x00, 0x40, 0x00, 0x40, 0x00,
	0x40, 0x00, 0x40, 0x00, 0x40, 0x00, 0x40, 0x00, 0x40, 0x00, 0x40, 0x00
};



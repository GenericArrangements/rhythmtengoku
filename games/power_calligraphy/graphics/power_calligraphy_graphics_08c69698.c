#include "global.h"
#include "graphics.h"

// // //  D_08C69698  // // //

// [D_08C68D74] D_08C69698 Huffman Data
u16 D_08c69698_huffmandata[] = {
	0x63d0, 0x0008, 0x4015, 0x406a, 0x406a, 0x006a, 0x0055, 0x00fd, 0x00fd, 0x00f4, 0x0555, 0x0ed6, 0x9000, 0x40d6, 0xd66d, 0x00d0, 0xc000, 0xf3d0, 0x0004, 0x0040, 0x0090, 0x00a4, 0x00a4, 0x0099, 0x3d3d, 0x00d0, 0x0100, 0xf30d, 0x4004, 0x0a55, 0x4a54, 0x2a55, 0x2255, 0x2255, 0x00d0, 0x8e80, 0xe03d, 0x540c, 0x550a, 0x5542, 0xa8aa, 0x01aa, 0x55aa, 0x55a8, 0xaaa1, 0xa00a, 0x0ff2, 0xa80a, 0xa152, 0xa152, 0xa152, 0x01d0, 0x1c3c, 0x1c1c, 0xf3d0, 0x5402, 0xa900, 0xa901, 0xa901, 0x030d, 0x0f1e, 0xcf8f, 0x3f7f, 0xff1f, 0x6ed0, 0x0009, 0x5055, 0x54aa, 0x156a, 0x0559, 0x0555, 0x0194, 0x0095, 0xf000, 0xf050, 0x0057, 0x666d, 0x00d0, 0xf8f0, 0x63d0, 0x4008, 0x50a9, 0x00aa, 0x1500, 0xf50f, 0x5f0f, 0x7500, 0x5501, 0x5a05, 0x6a05, 0x000d, 0xf7f8, 0xf3d0, 0x9001, 0x9400, 0x9500, 0x01d0, 0x70f0, 0xe0f0, 0xf30d, 0x5002, 0x4a55, 0x4a55, 0x4a55, 0x00d0, 0x0070, 0x6ed0, 0x0004, 0x0550, 0x1aa5, 0x4000, 0xd000, 0xf400, 0x00d0, 0xf000, 0x6ed0, 0x4001, 0xd4fa, 0x7d7a, 0x6d6e, 0x00d6, 0x2838, 0x30d6, 0x100d, 0xaa01, 0xaa6a, 0xaada, 0x6ad5, 0x1ad0, 0x1a40, 0x1a00, 0x6a00, 0xa540, 0x9faa, 0x9faa, 0x9faa, 0x95aa, 0x54aa, 0xe60d, 0x4002, 0x23c8, 0x282a, 0x0155, 0xf3d0, 0x0001, 0x01a9, 0x15a9, 0x333d, 0x010d, 0xf110, 0xf7f3, 0x36d0, 0x400e, 0x0000, 0x5028, 0x56a8, 0xa500, 0x5900, 0x5540, 0xf550, 0xfd50, 0x0000, 0x2805, 0x2a95, 0x005a, 0x0065, 0x0155, 0x055f, 0xd333, 0x000d, 0xc3fc, 0x06ed, 0x4001, 0xff21, 0xff03, 0x603d, 0x5404, 0x54a8, 0x54a0, 0x028c, 0xaa3f, 0x8002, 0x0e6d, 0x8400, 0x0f12, 0x630d, 0x540d, 0x52a1, 0x52a1, 0x52a1, 0x5005, 0x53c5, 0x53c5, 0x14c5, 0x5501, 0x54a8, 0x54a8, 0x54a8, 0x5531, 0x553c, 0x553c, 0x0d6d, 0x00d0, 0x8700, 0xf0d3, 0x4001, 0x406a, 0x406a, 0x01d0, 0x78f8, 0xf0f0, 0xfed0, 0x0001, 0x0550, 0x1aa4, 0x00d0, 0x00c0, 0xf3d0, 0x0002, 0x0054, 0x00a9, 0x00a9, 0x333d, 0x00d0, 0x80e0, 0x00d6, 0xa7ca, 0xddd0, 0x006d, 0xe7e6, 0xf0d6, 0x9000, 0x9501, 0x006d, 0x7b70, 0xf3d0, 0x0012, 0x00a9, 0x00a4, 0x0054, 0x00a9, 0x00a9, 0x0055, 0x006a, 0x0019, 0x0019, 0x001a, 0x0006, 0x0001, 0xaa94, 0xaa44, 0xa500, 0x5000, 0xaa00, 0xaa06, 0x9606, 0x00d3, 0x000d, 0x1fc6, 0xf3d0, 0x4000, 0x51a9, 0x003d, 0x0e0e, 0xddd0, 0x01ed, 0xefe0, 0x09c9, 0x013d, 0x7070, 0x0070, 0x000d, 0x7730, 0xfe0d, 0x0005, 0x2815, 0x2815, 0x2855, 0xa055, 0xa155, 0xa155, 0x020d, 0xfcfc, 0xfefe, 0xfcfc, 0xf0de, 0xa400, 0xa4aa, 0x00d0, 0x0e00, 0xf30d, 0x0002, 0x2a15, 0x2a15, 0x2a15, 0x00d0, 0x80f0, 0x3ed0, 0x0002, 0x4100, 0x50a5, 0xf455, 0x00d3, 0x3e3e, 0xb0d3, 0x5406, 0x6a55, 0x045a, 0x045a, 0x0f5a, 0x076a, 0x546a, 0x05aa, 0x00d0, 0x00c0, 0xb03d, 0x1404, 0x1480, 0x3d80, 0x7c80, 0x54a8, 0x01a8, 0x00d0, 0xf010, 0xf3d0, 0x4003, 0x406a, 0x406a, 0x006a, 0x0015, 0x00ed, 0x081c, 0x000d, 0xc080, 0xed00, 0x00de, 0x00d0, 0x7e3c, 0x360d, 0x0005, 0x5540, 0x55a1, 0x55a8, 0x5508, 0x55f0, 0x55f1, 0x33d0, 0x00d0, 0x00c0, 0xb0d6, 0x6401, 0x1440, 0x55d0, 0xf3d6, 0x5001, 0x05a9, 0x01a9, 0x333d, 0x006d, 0x0f0e, 0x000d, 0x70f0, 0x60d3, 0x4002, 0x406a, 0x406a, 0xd5aa, 0x00d0, 0x0080, 0x0000, 0xd000, 0x00d6, 0x878a, 0xb0d6, 0x0001, 0x0050, 0x5095, 0x0dbb, 0x006d, 0x7a48, 0x6d66, 0xd666, 0x00d0, 0x8080, 0x3ed0, 0x0001, 0x5490, 0xfd90, 0xdd0d, 0x003d, 0x0e0e, 0x00d0, 0xc17e, 0x00dd, 0xdd00, 0x01de, 0xe0fe, 0xffe1, 0x000d, 0xff3e, 0xb3d0, 0x5404, 0x5499, 0x549a, 0x40af, 0x409f, 0x005a, 0x33dd, 0x00d0, 0x00c0, 0xb0d3, 0x4404, 0x0495, 0xf095, 0xf495, 0x05a9, 0x50a9, 0x00d0, 0x8030, 0x36d0, 0x5005, 0xf491, 0xf4a7, 0xf4a7, 0x50a7, 0x0069, 0x0055, 0x6d00, 0x01d6, 0x4818, 0xfec6, 0x36bd, 0x5002, 0x5085, 0x0a01, 0x8afc, 0x603d, 0x5403, 0xffca, 0xfc2a, 0xc2aa, 0x2aaa, 0x0000, 0x01d6, 0x0a18, 0x3f26, 0x063d, 0x5405, 0x54a8, 0x5428, 0x0080, 0x8faa, 0x8f3c, 0x3f82, 0xd0e6, 0x1403, 0x04ea, 0x00ea, 0x03aa, 0xffaa, 0x6bd0, 0x0007, 0x1fa9, 0x1f00, 0x0700, 0x0700, 0x5700, 0xa700, 0xa501, 0xa601, 0x010d, 0xf1fe, 0xf1f3, 0xf03d, 0x5401, 0x54aa, 0x54aa, 0x00d0, 0x00e0, 0x00ed, 0x183c, 0x000d, 0xc080, 0xdddd, 0x00de, 0x010d, 0x80c2, 0x1f80, 0x63d0, 0x0006, 0x01a9, 0x15a9, 0x7da9, 0xf454, 0xd000, 0x0100, 0x0740, 0x01d0, 0x0008, 0x8e08, 0xf03d, 0x5003, 0x52aa, 0x54aa, 0x44aa, 0x44aa, 0x00d0, 0x0300, 0xe30d, 0x5408, 0x5255, 0x4a55, 0x4a55, 0x2255, 0x2255, 0x0555, 0xf150, 0x554f, 0x1005, 0x66d0, 0xdd66, 0x00d0, 0xc000, 0xfd60, 0x1404, 0x14a8, 0x90aa, 0x90aa, 0x68aa, 0x68aa, 0x010d, 0x8ff0, 0x8f8f, 0xf3d0, 0x0007, 0x0155, 0x0695, 0x0695, 0x1a95, 0x5400, 0xa900, 0xa901, 0xa901, 0x000d, 0xf81c, 0x6ed0, 0x5009, 0xa405, 0x001a, 0x4005, 0x001a, 0x5469, 0xfd6a, 0xff1b, 0xff17, 0x0003, 0x0015, 0xf0db, 0x4000, 0x40aa, 0x00d0, 0x1010, 0xbd60, 0x0002, 0x0009, 0x00a9, 0x02fa, 0xbbdd, 0x010d, 0xfefe, 0xfcfe, 0x30de, 0xa406, 0xa4aa, 0xa4aa, 0xa5aa, 0x9f6a, 0x7daa, 0x7f5a, 0x9d55, 0x000d, 0xfc80, 0x360d, 0x5405, 0x5255, 0x4a55, 0x2a55, 0x0855, 0xf054, 0x0153, 0xe60d, 0x4000, 0x23c8, 0x00d6, 0x4a18, 0xb06d, 0x4002, 0x0205, 0xf200, 0xf08f, 0x0dbb, 0x02d0, 0x0100, 0x0703, 0x1e0e, 0xf3d0, 0x5000, 0x9105, 0x0d33, 0x00ed, 0x3c00, 0xf0ed, 0x5002, 0x4a05, 0x4aa1, 0x4aa1, 0x00de, 0x00d0, 0xff7e, 0x6bd0, 0x0002, 0x00a9, 0x5055, 0xf4ff, 0x00d6, 0x1010, 0xb0d6, 0x0004, 0x0001, 0x5556, 0xa9f7, 0xa9fd, 0xaa55, 0x60ed, 0x5002, 0x4fa8, 0x4fa8, 0x50a8, 0x000d, 0x7f2e, 0xf3d0, 0x0003, 0x0040, 0x0090, 0x0090, 0x0090, 0x33d0, 0x00d0, 0x9fc0, 0xe30d, 0x4005, 0x5005, 0x5485, 0x5215, 0x5255, 0x5455, 0xf155, 0x01d0, 0xfcf0, 0x8efe, 0x00de, 0x00d0, 0xf010, 0xf3d0, 0x0002, 0x01a5, 0x0195, 0x0195, 0x33dd, 0x010d, 0xff2e, 0xf7f7, 0x3ed0, 0x9000, 0x9054, 0x063d, 0x5404, 0x5480, 0x54a8, 0x0328, 0xcac0, 0x0a3f, 0xb6ed, 0x0004, 0x8f29, 0x8f2a, 0xa32a, 0xa00a, 0x0ff0, 0xf3d0, 0x540a, 0x0005, 0x00a9, 0x0099, 0x0059, 0x00a4, 0x00a4, 0x0050, 0x006a, 0x0066, 0x0065, 0x001a, 0x0d33, 0x00d0, 0xc030, 0xf30d, 0x1003, 0x02a1, 0x02a1, 0x42a1, 0x5405, 0x0000, 0x00ed, 0x183c, 0x30ed, 0x4004, 0x4801, 0x2a01, 0x2a81, 0x0a01, 0x02fc, 0x333d, 0x00d0, 0x8000, 0x36d0, 0x0004, 0x5490, 0xfda4, 0xfd69, 0xfd69, 0x5469, 0x36ed, 0x0007, 0x8254, 0x2856, 0x281a, 0x2a80, 0x2a3f, 0x2a3f, 0x8a3f, 0x0000, 0xf6d0, 0x9401, 0x9455, 0x9055, 0x010d, 0xf070, 0xf7f1, 0xf03d, 0x4002, 0x4085, 0x4085, 0x40a1, 0x00d3, 0x010d, 0xf8e0, 0x0f03, 0xffd0, 0x0000, 0x0050, 0x00ed, 0x183c, 0x3ed0, 0x9001, 0x5456, 0xfd55, 0x0ddd, 0x003d, 0x0e0e, 0x00d0, 0x01fe, 0xe0d6, 0xa40b, 0x90aa, 0x90aa, 0x40aa, 0x40aa, 0x41aa, 0x91aa, 0x00aa, 0x50a5, 0x0090, 0x007c, 0x407c, 0x547f, 0x0dee, 0x010d, 0xffce, 0xfefe, 0xf0d6, 0xa401, 0xa4aa, 0xa4aa, 0x00d0, 0x1010, 0x6bd0, 0x0003, 0x0001, 0x0065, 0x005f, 0x15ff, 0x0ed6, 0x0003, 0x0069, 0x0064, 0x0464, 0x5d69, 0x6bd0, 0x1402, 0x01a6, 0x01a9, 0x0055, 0x0ed6, 0xa402, 0x90fd, 0x90fd, 0xa4fd, 0x000d, 0xcf2e, 0xfde0, 0x0001, 0x00a5, 0x2aa5, 0xddde, 0x003d, 0x0406, 0xe03d, 0x1001, 0x1400, 0x8208, 0x00de, 0x00d0, 0xf010, 0xf3d0, 0x0002, 0x01a5, 0x0195, 0x0195, 0x33dd, 0x030d, 0xef2e, 0xefef, 0xcfef, 0xcfcf, 0xf3d0, 0x0400, 0x1901, 0xdd0d, 0x003d, 0x0606, 0xf0d3, 0x4000, 0x9065, 0x000d, 0xffce, 0xf03d, 0x5000, 0x52a1, 0x00d3, 0x010d, 0xfee2, 0xfefe, 0xf0de, 0xa400, 0xa9aa, 0x0000, 0x016d, 0x7a42, 0xf7fb, 0xd666, 0x6666, 0x00ed, 0xe766, 0xf30d, 0x4001, 0x8001, 0x804a, 0x0d33, 0x000d, 0xf8c0, 0xf30d, 0x5001, 0x4a55, 0x2a55, 0x02d0, 0xf070, 0x0c3f, 0x1008, 0xf3d0, 0x4001, 0x5005, 0x9006, 0x010d, 0x7f7e, 0x7f7f, 0xe6d0, 0x0003, 0x0040, 0x0090, 0x00f4, 0x00fd, 0xddd0, 0x00d6, 0x8c84, 0xf0de, 0x1400, 0x0550, 0x0dde, 0x01d0, 0x801c, 0xc080, 0xf3d0, 0x0002, 0x0064, 0x00a4, 0x00a4, 0x333d, 0x00d0, 0x77e0, 0xf30d, 0x5001, 0x5001, 0x1428, 0xd333, 0x020d, 0xfe86, 0xf7fe, 0xf3f7, 0xf3d0, 0x5002, 0x9000, 0xa400, 0xa900, 0x01d0, 0x77e0, 0x3b3b, 0xff0d, 0x5400, 0x1040, 0x003d, 0xc792, 0x0dd3, 0x01d0, 0x801c, 0xc0c0, 0xf3d0, 0x0004, 0x0050, 0x0090, 0x00a4, 0x00a9, 0x5554, 0x333d, 0x010d, 0x7e0c, 0x3c7c, 0x00d3, 0x3d00, 0x000d, 0x3f7e, 0xb3d0, 0x000a, 0x40a4, 0x5069, 0x5499, 0x54a9, 0x00a5, 0x0005, 0x005a, 0x01aa, 0x06fd, 0x06fe, 0x1afe, 0xe6d0, 0x0007, 0x0090, 0x0090, 0x0090, 0x0090, 0x0090, 0x00f4, 0x00fd, 0x9a54, 0x333d, 0x00d6, 0x08e8, 0xe0d6, 0x5001, 0xa401, 0xa715, 0xed00, 0x000d, 0x3f7e, 0x63d0, 0x000b, 0x44a5, 0x949a, 0x0066, 0x0541, 0x0696, 0x06aa, 0x06aa, 0x4000, 0xd000, 0xd000, 0xf400, 0xf400, 0x6ed0, 0x0003, 0x00a4, 0x00a9, 0x7f54, 0x5f6b, 0xdeee, 0x020d, 0xfe8c, 0xf7fe, 0xf7f7, 0xe6d0, 0x9003, 0xd000, 0xd000, 0xf400, 0x5000, 0x01d6, 0x0804, 0xf808, 0x0d6e, 0xe400, 0xf8ff, 0x00d0, 0x8010, 0xf30d, 0x5002, 0x4a85, 0x4a85, 0x4a85, 0x02d0, 0x0038, 0x0301, 0x0303, 0xf0d3, 0xa401, 0x90aa, 0x41aa, 0x01d0, 0x3060, 0x1010, 0xe6d0, 0x0002, 0x0001, 0x0006, 0x001f, 0xdeed, 0x00d0, 0x1060, 0xed60, 0x0001, 0x0009, 0x002f, 0xdeed, 0x00d0, 0x3060, 0xfd30, 0x0003, 0x0009, 0x0025, 0x0096, 0x0028, 0x0000
};

// [D_08C695D0] D_08C69698 Huffman Window 1
u32 D_08c69698_window1[] = {
	0xbdffbfdb, 0xfbbdbf7d, 0xb3dd9fff, 0x7fddee6c, 0xdbfbfe7e, 0xf6df6efe, 0xb6dff77b, 0xedb7ecb7, 0xbff76e5b, 0x0000030d
};

// [D_08C695F8] D_08C69698 Huffman Window 2
u32 D_08c69698_window2[] = {
	0xebaaaaab, 0xaaa85455, 0xed509268, 0x55ab5542, 0x2aeaf4ad, 0x552aaaf5, 0x555ac955, 0x00000385
};

// [D_08C69618] D_08C69698 Huffman
struct Huffman D_08c69698_huffman[] = {
	/* Data */			D_08c69698_huffmandata,
	/* Size */			0x71c,
	/* Count */			0x124,
	/* Window 1 */		D_08c69698_window1,
	/* Window 2 */		D_08c69698_window2,
};

// [D_08C69628] D_08C69698 RLE Data
u8 D_08c69698_rledata[] = {
	0x11, 0x9, 0x26, 0x8, 0x9, 0x7, 0x9, 0x1b, 0x24, 0xb, 0x56, 0xa, 0x36, 0x3, 0xd, 0xc, 0x24, 0x1b, 0x5, 0x5, 0xb, 0xb, 0x35, 0xb, 0x31, 0x3, 0xc, 0x4, 0x9, 0x7, 0x9, 0xd, 0x55, 0x4, 0x1f, 0x3, 0xa, 0x5, 0x8e, 0x3, 0x28, 0x7, 0x51, 0x3, 0xd, 0xb, 0x24, 0x1c, 0x5, 0x1b, 0x25, 0x5, 0xb, 0xb, 0x5, 0x12, 0xe, 0x19, 0x6, 0x4, 0xd, 0x13, 0xc, 0x23, 0xd, 0x4, 0x5c, 0x3, 0x1b, 0x3, 0x7, 0x6, 0x3f, 0x3, 0xc, 0x6, 0xb, 0x3, 0x3d, 0x3, 0xc, 0x4, 0x7, 0x9, 0x80, 0xa, 0x6, 0xa, 0x68, 0x6, 0x26, 0x3, 0x3e, 0x6, 0xc, 0x3, 0x2b, 0xa, 0x8, 0x7, 0x19, 0x4, 0x9, 0x3, 0x1d, 0x6, 0x36, 0x6, 0xa, 0xf6, 0x0, 0x0
};

// [D_08C69698] D_08C69698 Graphics
struct CompressedGraphics D_08c69698 = {
	/* Huffman Data */		D_08c69698_huffman,
	/* RLE Data */			D_08c69698_rledata,
	/* RLE Size */			0x6e,
	/* RLE Offset */		0xa00,
	/* Double Compressed */	TRUE,
};

u8 D_08c696a8[160] = {
	0x78, 0x00, 0x54, 0x00, 0x78, 0x00, 0x54, 0x00, 0x78, 0x00, 0x54, 0x00,
	0x78, 0x00, 0x54, 0x00, 0x78, 0x00, 0x54, 0x00, 0x40, 0x00, 0x40, 0x00,
	0x40, 0x00, 0x40, 0x00, 0x40, 0x00, 0x40, 0x00, 0x40, 0x00, 0x40, 0x00,
	0x40, 0x00, 0x40, 0x00, 0x40, 0x00, 0x40, 0x00, 0x40, 0x00, 0x40, 0x00,
	0x40, 0x00, 0x40, 0x00, 0x40, 0x00, 0x40, 0x00, 0x40, 0x00, 0x40, 0x00,
	0x78, 0x00, 0x78, 0x00, 0x40, 0x00, 0x40, 0x00, 0x78, 0x00, 0x54, 0x00,
	0x40, 0x00, 0x40, 0x00, 0x78, 0x00, 0x54, 0x00, 0x40, 0x00, 0x40, 0x00,
	0x78, 0x00, 0x54, 0x00, 0x40, 0x00, 0x40, 0x00, 0x78, 0x00, 0x54, 0x00,
	0xF0, 0x00, 0xA0, 0x00, 0x40, 0x00, 0x40, 0x00, 0x40, 0x00, 0x40, 0x00,
	0x40, 0x00, 0x40, 0x00, 0x40, 0x00, 0x40, 0x00, 0x40, 0x00, 0x40, 0x00,
	0x40, 0x00, 0x40, 0x00, 0x40, 0x00, 0x40, 0x00, 0x40, 0x00, 0x40, 0x00,
	0x40, 0x00, 0x40, 0x00, 0x40, 0x00, 0x40, 0x00, 0x40, 0x00, 0x40, 0x00,
	0x40, 0x00, 0x40, 0x00, 0x40, 0x00, 0x40, 0x00, 0x40, 0x00, 0x40, 0x00,
	0x40, 0x00, 0x40, 0x00
};

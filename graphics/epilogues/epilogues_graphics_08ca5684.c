#include "global.h"
#include "graphics.h"

// // //  D_08CA5684  // // //

// [D_08CA4C94] D_08CA5684 Huffman Data
u16 D_08ca5684_huffmandata[] = {
	0x00b1, 0xf1f0, 0xab21, 0x5410, 0x552a, 0x02aa, 0x54aa, 0x552a, 0x554a, 0x554a, 0x554a, 0x554a, 0xa8aa, 0xa1aa, 0x85aa, 0x02aa, 0x54a8, 0x5521, 0x05ff, 0x5580, 0x55a1, 0xb122, 0x0112, 0x8080, 0x120c, 0x4b12, 0x000d, 0x6a04, 0xaa00, 0xaa01, 0xaa56, 0xaa1a, 0xaa1a, 0x6a15, 0x1a10, 0x9010, 0x90aa, 0x90aa, 0xa4aa, 0xa9aa, 0xabaa, 0xf48b, 0x0003, 0x0009, 0x0025, 0x002a, 0x0095, 0x8888, 0x00b4, 0xf3fe, 0x884b, 0x0184, 0xdfe0, 0xef27, 0x184b, 0x0003, 0x0050, 0x03a4, 0x03a4, 0x03a4, 0x84bb, 0x004b, 0xe000, 0xe84b, 0x0008, 0x40a9, 0x40aa, 0x40aa, 0x00aa, 0x00a9, 0x00a4, 0x0550, 0x1aa4, 0x6aa9, 0x1b1e, 0x0112, 0x80f0, 0x8880, 0x2e1b, 0x4006, 0x40fe, 0x40ba, 0x006a, 0x00da, 0x00f6, 0x00f4, 0x00f4, 0x421b, 0x6400, 0x00f0, 0xf84b, 0xa408, 0xa901, 0xa606, 0xa606, 0x5a01, 0xaa05, 0xaa1a, 0x0069, 0x0550, 0x1aa4, 0x011b, 0x1010, 0x1010, 0xff1b, 0x0000, 0x1541, 0x0212, 0x0486, 0x0808, 0x8808, 0xc598, 0x900c, 0x45f6, 0x44fd, 0x40f4, 0x15f4, 0x00fd, 0x40fd, 0x11ff, 0x01fd, 0x5705, 0xff5f, 0xff07, 0x7f41, 0x7f00, 0x0098, 0x08f4, 0xfc98, 0x0003, 0xaaa4, 0xaaa4, 0xaaa9, 0xaaa4, 0xc988, 0x009c, 0x8030, 0xe89c, 0xa400, 0x50aa, 0xe888, 0x009c, 0xc0f0, 0xf89c, 0x0002, 0x0064, 0x00a4, 0x0090, 0x989c, 0x0098, 0x9288, 0xec89, 0x4403, 0x5580, 0x55a8, 0x57a8, 0x00a1, 0x5c98, 0xa404, 0xa9f4, 0x01aa, 0x01aa, 0x01aa, 0x01aa, 0xe89c, 0x0003, 0x00e4, 0x0054, 0x40a9, 0x009a, 0x8889, 0x9559, 0x0189, 0xee96, 0xb85f, 0x009c, 0x10b8, 0xf89c, 0x0000, 0x0054, 0x8889, 0x009c, 0xc0e0, 0x58c9, 0x0403, 0x4a55, 0x4855, 0x5355, 0x5355, 0x009c, 0x0010, 0xe89c, 0x0003, 0x0001, 0x0006, 0xad50, 0x56a4, 0xf589, 0x1400, 0x5585, 0x5999, 0x0198, 0x8884, 0x2350, 0x009c, 0x8080, 0x289c, 0x0004, 0x4055, 0x00aa, 0x9055, 0xa4da, 0x546a, 0x0098, 0x0b14, 0xfc98, 0x4005, 0x0100, 0xaa90, 0xaa41, 0xa900, 0xa400, 0x6400, 0x9888, 0x00c9, 0xe786, 0xe89c, 0x4006, 0x6aa9, 0x9a94, 0xaa90, 0xaa90, 0xba40, 0xf940, 0x5690, 0x889c, 0xce59, 0x1400, 0xff02, 0xfc89, 0x5402, 0x45a8, 0x50a1, 0x1585, 0xc988, 0x0098, 0x02c4, 0x5c89, 0x5407, 0x2100, 0x2155, 0xa101, 0xa13c, 0xa83c, 0xaa42, 0xaa4a, 0xaa12, 0x0089, 0xffde, 0x00e8, 0x0010, 0xfc89, 0x5402, 0x5415, 0x0280, 0xaa15, 0x8898, 0x00c9, 0xfcfe, 0xdc98, 0x9001, 0xa5aa, 0xffaa, 0x829d, 0x0002, 0xaa95, 0xaa7f, 0xa9ff, 0xf198, 0x0000, 0x00a9, 0x1999, 0x0098, 0x8488, 0x892d, 0x0002, 0x5500, 0x5595, 0x55e5, 0x1892, 0xa402, 0xa7ff, 0xa7ff, 0x9fff, 0xcccc, 0x889c, 0x89d2, 0x4003, 0xaa5a, 0xff2f, 0xfe2f, 0xff2f, 0xe198, 0xa400, 0xa940, 0x598e, 0x1195, 0x59e8, 0x8c95, 0xa402, 0xff69, 0xfda9, 0xf569, 0xe59c, 0x4000, 0x40fa, 0xc895, 0x9001, 0x65ff, 0x667f, 0x9ccc, 0x0198, 0x4042, 0x0030, 0xdc98, 0x4003, 0x9000, 0xa501, 0xa900, 0xa900, 0xdddd, 0x892d, 0x0092, 0xc080, 0x1892, 0x0002, 0xffa4, 0x7f69, 0x9f9a, 0x59c8, 0x0008, 0x0009, 0xaa02, 0x55a9, 0x5502, 0x55a9, 0x56fa, 0x55a0, 0x5560, 0x5588, 0x8889, 0x00c9, 0xcf1e, 0xf89c, 0x0000, 0x6a90, 0x89cc, 0x0098, 0x0472, 0xfc98, 0x4002, 0x0155, 0x56aa, 0x04aa, 0xcc98, 0x00c9, 0x7fe2, 0xcccc, 0x89cc, 0x009c, 0xf080, 0xfc89, 0x5002, 0x0aaa, 0x54aa, 0x45a1, 0xcc98, 0x0098, 0x01e2, 0xfc98, 0x4005, 0x9555, 0x51aa, 0x01aa, 0x06aa, 0x11aa, 0x406a, 0x009c, 0x0370, 0xec98, 0x9002, 0x43aa, 0x53aa, 0x05aa, 0x85c9, 0x5402, 0x53ca, 0x4fca, 0x4f30, 0x0098, 0x02c4, 0x009c, 0x0e0e, 0xf89c, 0x0002, 0x0001, 0x0006, 0x0001, 0x0021, 0xfe1e, 0x5d21, 0x5402, 0x5491, 0x55e5, 0x01f9, 0xc15d, 0x5400, 0x553e, 0x65dc, 0x9000, 0x00ea, 0x421c, 0x5002, 0xa554, 0x6aa9, 0x1554, 0x1c84, 0x0404, 0x5185, 0x45a1, 0x1584, 0x8015, 0xaa80, 0xdc21, 0x5403, 0x55a1, 0x55a1, 0x55a1, 0x57a1, 0xd512, 0x5001, 0x003e, 0x17ea, 0x5555, 0x1cd5, 0x21cd, 0xd512, 0x4402, 0x103e, 0x13ea, 0x3eaa, 0x2d65, 0x1402, 0x1480, 0x0b00, 0x0280, 0x0165, 0x8380, 0x0703, 0x4c56, 0x0000, 0xaa54, 0xe84c, 0xa404, 0xa541, 0xaa91, 0x5540, 0xb900, 0xd56a, 0x0048, 0x2780, 0x9854, 0x1400, 0x140a, 0xc489, 0x5401, 0x51e9, 0x61f9, 0xc484, 0x00ca, 0x8000, 0x84ca, 0x0001, 0x0090, 0x00e4, 0xc8a9, 0x0001, 0xaa15, 0xaa85, 0x89ca, 0x0048, 0x1810, 0x4888, 0x884b, 0x0148, 0x0214, 0x8904, 0xff48, 0x4400, 0x4000, 0x014a, 0x8080, 0x8080, 0xbbb4, 0x211b, 0xbb48, 0x221b, 0xb488, 0x221b, 0xb488, 0xb421, 0x5401, 0x54fa, 0x03ff, 0xe48b, 0x0003, 0x5995, 0xd655, 0xda55, 0xa557, 0xb584, 0x0001, 0xf0a1, 0xc4a1, 0x004b, 0x83c0, 0xfb48, 0x9004, 0x906a, 0x90aa, 0x90aa, 0xa56a, 0xaa1a, 0x884b, 0x004a, 0x1010, 0xff4a, 0x0000, 0x0001, 0x0084, 0x7e7e, 0xfb84, 0x5400, 0x5115, 0xb488, 0x0148, 0x0284, 0x1509, 0x1b48, 0x0006, 0x00a9, 0x00a9, 0x4059, 0x9506, 0xaa06, 0xaa06, 0xa906, 0x214b, 0x500b, 0xebe0, 0xefe0, 0xfb80, 0xfe00, 0xff80, 0xbf80, 0xefe0, 0xfbe0, 0x2200, 0xbb00, 0xbb00, 0xbb00, 0xd21b, 0x0000, 0x3ff9, 0x0221, 0x7f6a, 0xe77f, 0x8c79, 0x821b, 0xa401, 0xa9aa, 0xffaa, 0x5e48, 0x0002, 0x0081, 0x402b, 0x5007, 0xfb84, 0x0400, 0x44a0, 0xb488, 0x0084, 0xf16e, 0x4b12, 0xa401, 0xa4ea, 0xa4fa, 0x54bb, 0xb122, 0x54bb, 0x4b12, 0x9000, 0xa5ea, 0xf84b, 0x9001, 0x9000, 0x4000, 0x0112, 0x0100, 0x1806, 0xcb12, 0x0405, 0x0115, 0x0069, 0x14a4, 0xffa4, 0xffd5, 0xff40, 0x2299, 0xccc1, 0xc298, 0x9000, 0x40d5, 0x9888, 0x1cd6, 0x0001, 0x00a4, 0x00a4, 0x1dd6, 0x2d65, 0x5402, 0x54f9, 0x54f9, 0x55f9, 0x92d6, 0x6666, 0x89d6, 0x0056, 0xc0c0, 0x9c56, 0x0000, 0x0050, 0xf89c, 0x5409, 0xa4a9, 0xa4a6, 0xa49a, 0xa4a6, 0x5069, 0x0099, 0x01a9, 0x00a9, 0x0540, 0x1a90, 0x0089, 0x1b7c, 0xfc89, 0x1004, 0xaa54, 0xa82a, 0x014a, 0x554a, 0x554a, 0x019c, 0x1010, 0x1000, 0xf98c, 0x0001, 0x0009, 0x2a28, 0x0289, 0xff76, 0xf6fe, 0x1ff1, 0xc948, 0x4006, 0xd602, 0xfe00, 0xbe02, 0x2e08, 0x2fa8, 0x2ff8, 0xbff8, 0x0065, 0xe0e0, 0xdc65, 0x4001, 0x7a55, 0x7a15, 0xd156, 0x4000, 0x003e, 0x56d2, 0x9003, 0x90aa, 0x90aa, 0x90aa, 0x90be, 0x21c6, 0x0003, 0xa955, 0xfe55, 0xff95, 0xffe5, 0x91cc, 0x2299, 0x03ca, 0x0100, 0x0703, 0x1f0f, 0x7f3f, 0xc498, 0x4005, 0x90e0, 0x40fa, 0x00ff, 0x00fd, 0x01fd, 0x00fd, 0xccc9, 0x98e8, 0x004c, 0xf010, 0xcccc, 0x8888, 0x00c4, 0xf706, 0x0148, 0x1120, 0xc40a, 0x01c4, 0x7fc4, 0x7fff, 0x184c, 0x0001, 0x0090, 0xff40, 0x42c1, 0x5001, 0x4aaa, 0x5000, 0xaaa4, 0x00ca, 0x3010, 0x9c4a, 0x0001, 0x0029, 0x00af, 0xac98, 0x9001, 0x40fe, 0x40fa, 0x8ac4, 0x9000, 0xfffc, 0x5e84, 0x5402, 0x5519, 0x0102, 0x3c54, 0x5498, 0x5000, 0x06be, 0x984c, 0x9408, 0x90ab, 0xb0ab, 0xc0aa, 0xb0aa, 0xacea, 0xacaa, 0xacba, 0xacee, 0xb0aa, 0x888e, 0x03ca, 0x8000, 0xe0c0, 0xf8f0, 0xfefc, 0xfc12, 0x0001, 0xaa55, 0x015a, 0x001c, 0xe0f8, 0xcccc, 0x1222, 0x00c1, 0x8e0c, 0xcccc, 0x0121, 0xde6e, 0x7fbe, 0xfc12, 0x1401, 0x6940, 0xaa40, 0x2221, 0x001c, 0xc0e0, 0xf21c, 0x5400, 0xa9a5, 0x1222, 0x001c, 0x007e, 0x3c12, 0x9005, 0x45aa, 0x44aa, 0x5daa, 0x44aa, 0x01a9, 0x54a4, 0x01c1, 0x3fee, 0xefef, 0xf12c, 0x000f, 0x0009, 0x0009, 0x0995, 0x0955, 0x0955, 0x09a5, 0x0955, 0x0255, 0x0255, 0x0095, 0xa580, 0x5580, 0x5580, 0xa580, 0x5660, 0x5658, 0x221c, 0x0012, 0xc512, 0xf12c, 0x0001, 0x0a55, 0x2565, 0x0421, 0x8f7c, 0xafff, 0x6d4e, 0xb77b, 0xad9e, 0xfc12, 0x5000, 0x4016, 0x011c, 0x8080, 0x7080, 0xf12c, 0x0004, 0x0295, 0x0955, 0x2556, 0x2556, 0x2955, 0x001c, 0xff00, 0x0012, 0x0ff0, 0x00c1, 0x1f00, 0xf21c, 0x4009, 0x90a9, 0xa4aa, 0xa46a, 0x946a, 0x06aa, 0x0600, 0x0600, 0x5a00, 0xa900, 0x9455, 0x2222, 0x001c, 0x00f8, 0x0112, 0x0408, 0x0404, 0xfc21, 0x4408, 0x4115, 0x5485, 0x02a1, 0x52a8, 0x5245, 0x0a51, 0xaa48, 0xaa0a, 0xaa42, 0x2221, 0x001c, 0x30e0, 0xcccc, 0xc122, 0x001c, 0x0030, 0x21bc, 0x0003, 0xa555, 0xe56f, 0xe5bf, 0xe5bf, 0x0112, 0x0478, 0x0102, 0xfb21, 0x5405, 0xaa55, 0xaa52, 0xaa54, 0xaa54, 0xaa54, 0xaa54, 0x221b, 0x001b, 0x60c0, 0xbbbb, 0x122b, 0x001b, 0x0060, 0xf21b, 0x500c, 0xa000, 0xaa01, 0xaa06, 0xaa1a, 0xaa1a, 0xaa1a, 0xaa06, 0x5a01, 0x1a00, 0x4000, 0x9005, 0xa41a, 0xa46a, 0x0012, 0x8878, 0xeb12, 0x400b, 0x9100, 0xa411, 0xa55a, 0x9006, 0x4001, 0xc0c1, 0xf3c1, 0xffc1, 0xf3c6, 0xc0da, 0x55aa, 0x00aa, 0x02b1, 0x7cfe, 0xbf7f, 0x7ebd, 0xf2b1, 0x5001, 0x4a85, 0x2aa1, 0x221b, 0x0012, 0x8878, 0xfb12, 0x4008, 0x9100, 0xa400, 0x55aa, 0x00aa, 0x00a9, 0x00a4, 0x0090, 0xaa90, 0xa55a, 0x221b, 0x0112, 0x141c, 0x1212, 0x5e21, 0x1403, 0x5514, 0x950a, 0x0540, 0xc04f, 0x2155, 0x011c, 0x0010, 0x8080, 0xf21c, 0x0001, 0x0040, 0x0090, 0x21cc, 0x041c, 0x4080, 0xa090, 0x1020, 0x2020, 0x1410, 0xf21c, 0x4004, 0x4006, 0x0006, 0x005a, 0x05aa, 0x1aaa, 0x0121, 0xff7e, 0xfbf7, 0xec21, 0x500f, 0x5555, 0x15a1, 0x05a1, 0x05a1, 0x55a1, 0x55a1, 0x5fa1, 0x7f85, 0x2a85, 0x2a55, 0x2a15, 0x2a05, 0x4a05, 0x5254, 0x5251, 0x54c5, 0xe121, 0x011c, 0x2240, 0x0121, 0xb12c, 0x000f, 0xe555, 0xe555, 0xf955, 0xfe55, 0xffa9, 0xffe5, 0xffe5, 0xffe5, 0x5956, 0x595b, 0x6aaf, 0x55bf, 0x556f, 0x555b, 0x555b, 0x6956, 0x0165, 0xc33c, 0xbfe7, 0x00d6, 0xff00, 0x0065, 0x3f00, 0xcd56, 0x0003, 0x0050, 0xaaaa, 0x6fff, 0x2fff, 0x6d1c, 0x0000, 0x40e4, 0x6d21, 0x21cc, 0x6d22, 0x221c, 0x6d22, 0x221c, 0x6d22, 0xd21c, 0x9401, 0x00ea, 0x00c0, 0x65dc, 0x9402, 0xa940, 0xba94, 0xaaa9, 0x25c1, 0x0006, 0x2a50, 0x2a53, 0x4054, 0x3355, 0xfc54, 0x0353, 0x5454, 0xdccc, 0x0121, 0x6e6e, 0xbf1e, 0xfc12, 0x1401, 0x6940, 0xaa40, 0x2221, 0x001c, 0xf8e0, 0xf21c, 0x0004, 0x00a4, 0x0090, 0x0050, 0x0094, 0x00a9, 0x111c, 0x00cd, 0xf1fe, 0x6c5d, 0x5405, 0x7da8, 0x7da1, 0x5585, 0xd515, 0xa157, 0xa3aa, 0x1d6c, 0x0000, 0x0039, 0x12d6, 0xccc1, 0x22d6, 0xcc12, 0x22d6, 0xc122, 0x22d6, 0xdc12, 0x9000, 0x9403, 0x0000
};

// [D_08CA557C] D_08CA5684 Huffman Window 1
u32 D_08ca5684_window1[] = {
	0x6dffb6bb, 0xf6df7dcf, 0x6e6e33bd, 0xf1fffecb, 0xf7c072ef, 0xe2a78dfe, 0xfdf267ff, 0xbff7b69d, 0xdb6fcbcb, 0x3b6e03fb, 0x00000020
};

// [D_08CA55A8] D_08CA5684 Huffman Window 2
u32 D_08ca5684_window2[] = {
	0x4eaaba9a, 0xbfba5d4d, 0x6ffa6a56, 0xbbbaae9b, 0xfd85eab7, 0x2922aaa2, 0xd5f15555, 0x00000001
};

// [D_08CA55C8] D_08CA5684 Huffman
struct Huffman D_08ca5684_huffman[] = {
	/* Data */			D_08ca5684_huffmandata,
	/* Size */			0x759,
	/* Count */			0x147,
	/* Window 1 */		D_08ca5684_window1,
	/* Window 2 */		D_08ca5684_window2,
};

// [D_08CA55D8] D_08CA5684 RLE Data
u8 D_08ca5684_rledata[] = {
	0x1, 0xf, 0x1, 0xa, 0x6, 0x12, 0xe, 0x9, 0x6, 0xb, 0x6, 0xf, 0x2a, 0xa, 0xd, 0x4, 0xc, 0x6, 0x1a, 0x9, 0xa, 0x7, 0x26, 0xb, 0x5, 0x5, 0x8, 0x4, 0x3a, 0x3, 0x32, 0xf, 0xd, 0x3, 0x2, 0x3, 0x6, 0x5, 0x3, 0xd, 0x21, 0x6, 0x14, 0x4, 0x52, 0x9, 0x6a, 0xd, 0x4, 0xb, 0xc, 0x4, 0x2, 0xe, 0xd, 0x3, 0xb, 0x5, 0x5, 0xb, 0xc, 0x5, 0x21, 0xf, 0x9, 0x6, 0x11, 0x8, 0x12, 0x5, 0x1c, 0x4, 0x9, 0x3, 0xd, 0x7, 0x31, 0x8, 0x14, 0x3, 0x3, 0x3, 0x1b, 0x9, 0x37, 0x5, 0x4b, 0x5, 0x1b, 0x6, 0x6, 0x3, 0x11, 0x5, 0xb, 0x7, 0x9, 0x5, 0xa, 0x3, 0x23, 0xa, 0x11, 0x6, 0x32, 0x7, 0xb, 0x6, 0x50, 0x3, 0x1, 0x3, 0x1, 0x7, 0x7, 0x9, 0x6, 0xa, 0x11, 0x6, 0x1b, 0x6, 0x31, 0x3, 0x15, 0x6, 0x6, 0x7, 0x11, 0x3, 0x3, 0x3, 0x3, 0x4, 0x3a, 0x9, 0x9, 0xe, 0x20, 0x6, 0x3c, 0xb, 0x5, 0xd, 0x3, 0x9, 0x17, 0x5, 0xb, 0x5, 0xe, 0x5, 0x18, 0x3, 0x8, 0xa, 0x6, 0xc, 0x39, 0x7, 0x2f, 0x4, 0x8, 0x3, 0x4, 0x4, 0x13, 0x6, 0x39, 0x4, 0x1d, 0x4f
};

// [D_08CA5684] D_08CA5684 Graphics
struct CompressedGraphics D_08ca5684 = {
	/* Huffman Data */		D_08ca5684_huffman,
	/* RLE Data */			D_08ca5684_rledata,
	/* RLE Size */			0xac,
	/* RLE Offset */		0xa00,
	/* Double Compressed */	TRUE,
};


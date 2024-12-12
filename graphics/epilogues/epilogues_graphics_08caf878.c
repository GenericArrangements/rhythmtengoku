#include "global.h"
#include "graphics.h"

// // //  D_08CAF878  // // //

// [D_08CAE000] D_08CAF878 Huffman Data
u16 D_08caf878_huffmandata[] = {
	0xb701, 0x0000, 0xea55, 0x37b8, 0x0003, 0x01a9, 0x06a9, 0x06a7, 0x1aa7, 0x87bf, 0x9001, 0x90da, 0x406a, 0xf3b7, 0x4000, 0x6aaa, 0x00f3, 0x3030, 0xf63f, 0x1400, 0x0040, 0xf666, 0x003f, 0xe9f0, 0x3ff3, 0x33ff, 0x004f, 0x71f0, 0x666f, 0x03be, 0x0404, 0x8018, 0xfcfc, 0xf8f8, 0x8edb, 0x5407, 0x54a8, 0x54a8, 0x54a8, 0x53a8, 0x53a8, 0x53a8, 0x4fa1, 0xffa1, 0x3b88, 0x00b8, 0x8080, 0x8888, 0x004f, 0xe1e0, 0xff34, 0x0000, 0x0009, 0x00f3, 0xfff8, 0x333f, 0xf333, 0x00a3, 0x7e3c, 0xaaf3, 0x3faa, 0x00f3, 0x083c, 0x004f, 0xf7f0, 0xf3f4, 0x4000, 0x9000, 0x01f3, 0xe0c0, 0xf0e0, 0x7b3f, 0x5400, 0x5000, 0x87b3, 0x9006, 0x40fd, 0x40f6, 0x00da, 0x0069, 0x00a4, 0x0090, 0x0090, 0xb333, 0x0132, 0xf0f8, 0xf7f8, 0x01f3, 0xc1c0, 0xf3e1, 0xb23f, 0x5001, 0x4000, 0xfaaa, 0xb222, 0x008b, 0xff8c, 0x8888, 0x0032, 0x3030, 0xdb32, 0x0006, 0x0555, 0xa556, 0x56ff, 0x56ff, 0x56ff, 0x5aff, 0x6eff, 0x00db, 0x6e6e, 0xf3db, 0x5401, 0xaa54, 0x020a, 0x008b, 0xffec, 0xf3b8, 0x5000, 0xa500, 0xbb88, 0x00b3, 0x0030, 0x0023, 0xf0f0, 0xfb32, 0x5400, 0xa800, 0xbbb2, 0x008b, 0x3fee, 0xdb32, 0x5402, 0x55e9, 0x95fe, 0xe5bf, 0x3ebd, 0x9003, 0xa407, 0xa407, 0xa401, 0xa901, 0x382b, 0x5406, 0x5255, 0x4a55, 0x2af5, 0xaaff, 0xaafc, 0xaaf2, 0xaaf2, 0x3b88, 0x00b8, 0x1010, 0xfb78, 0x0001, 0x0009, 0x0025, 0x00db, 0x88c4, 0xfedb, 0x0004, 0x0201, 0x0204, 0x0210, 0x0210, 0x0210, 0xdbbb, 0x02be, 0x90cc, 0xe0e0, 0x00e0, 0xeeee, 0xbebd, 0x06eb, 0xffec, 0x3e3f, 0xfe3e, 0x8c3f, 0x8f8f, 0xf7cf, 0x71f3, 0xfffb, 0x0000, 0x5400, 0x01be, 0xf0f0, 0xc1e0, 0xcdeb, 0x5002, 0x4a55, 0x0a55, 0xf250, 0xbbbc, 0xedb8, 0x9002, 0x40f6, 0x40da, 0x006a, 0x8cdb, 0x8403, 0xa3fc, 0x23ff, 0x43ff, 0x54ff, 0x00b8, 0x8000, 0xd3b8, 0x0004, 0x0090, 0x40a5, 0x90aa, 0xa4aa, 0xa9aa, 0x3333, 0x87bd, 0x6402, 0xd9ff, 0xf6ff, 0xfdff, 0xdbe8, 0x0000, 0xfa55, 0xbbbe, 0x00db, 0x030e, 0x87bd, 0xa401, 0x6915, 0xda55, 0x87bf, 0xa400, 0xa9da, 0x88b7, 0xf3f4, 0x9001, 0x4056, 0x94aa, 0x01f3, 0x0010, 0xc030, 0xf43f, 0x5404, 0x5555, 0xaaa1, 0xaa85, 0xaa15, 0x2855, 0x003f, 0x7d9e, 0xff32, 0x6400, 0xa455, 0x00f3, 0x4080, 0xbf32, 0x0001, 0x0094, 0x0040, 0xf78b, 0x5401, 0x5255, 0x5255, 0x8888, 0x007b, 0xff00, 0xf8b7, 0x0002, 0x0050, 0x50a5, 0x7fa4, 0x7777, 0x22f6, 0x777b, 0x2f66, 0x777b, 0xb2f6, 0x4000, 0xfffe, 0x6f7b, 0x5000, 0xea55, 0xbf36, 0x0004, 0x0295, 0x0955, 0x2555, 0x9555, 0xfd55, 0xf7b3, 0x4000, 0x94a9, 0x7777, 0x0232, 0x7070, 0xf0f0, 0xf7f1, 0x3333, 0x333b, 0x0123, 0x0c0c, 0x3f08, 0x2222, 0x01db, 0xfefe, 0x7376, 0xe8bd, 0x9403, 0xa510, 0xa950, 0x1557, 0x1557, 0x00be, 0xc2e6, 0xfdbe, 0x0402, 0x0090, 0x0090, 0x0090, 0xddbe, 0x02be, 0xf0c0, 0xf0f0, 0xf0f0, 0x3b8e, 0x0000, 0xfa55, 0xbb88, 0x00b3, 0x0030, 0x0023, 0x0e08, 0x3b82, 0x0005, 0x9555, 0xe955, 0xfe55, 0x3f95, 0x0fe9, 0x5afe, 0xbb3b, 0x00b8, 0x1030, 0x3f48, 0x0002, 0xe555, 0xf955, 0xfe55, 0x0024, 0xfef8, 0x01b3, 0x1800, 0x1e0c, 0xfdb3, 0x5400, 0x5545, 0xdbbb, 0x00be, 0xe0f0, 0x2eb3, 0x0003, 0x5050, 0x95a5, 0x00aa, 0x4003, 0x0123, 0xe0c0, 0xf8e0, 0xdb23, 0x5405, 0x0055, 0x0002, 0x000b, 0x002f, 0x00bf, 0x00bf, 0xdddd, 0x003b, 0x7ffe, 0x3bbb, 0xdbb3, 0x00bd, 0xd018, 0x83db, 0x5405, 0xffc2, 0xff2a, 0xfcaa, 0xf2aa, 0xcaaa, 0x2aaa, 0x0423, 0xf070, 0xf7f0, 0x0f9f, 0x1f07, 0x7f3f, 0x8b32, 0x0007, 0x5500, 0x555a, 0x55af, 0x56ff, 0x1bff, 0x2fff, 0xbfff, 0x56af, 0x00b8, 0x10e0, 0x73b8, 0x0001, 0x0015, 0x0076, 0x0523, 0xf010, 0xf3f1, 0xf3f3, 0x0f01, 0x8f08, 0x0f0f, 0x4f23, 0x5001, 0x0000, 0xffa8, 0x03f3, 0xe0f0, 0x81e1, 0x8181, 0x9391, 0xf63f, 0x4007, 0x0015, 0x54aa, 0x54aa, 0x54aa, 0x54aa, 0x052a, 0x012a, 0x012a, 0x3f66, 0x03f3, 0xfc06, 0xff03, 0x4010, 0x0780, 0xf333, 0x0863, 0xf8f0, 0x7f87, 0xf7fe, 0xfdfb, 0xfefd, 0xfbf7, 0x3efd, 0xf7cf, 0x07fb, 0x6333, 0x003f, 0x7870, 0xf63f, 0x4002, 0x4585, 0x55a1, 0x05a8, 0x00f6, 0x0030, 0x6666, 0x023f, 0x0444, 0x1108, 0x07f9, 0x346f, 0x4000, 0x002a, 0x3f44, 0x00f3, 0x063e, 0xf63f, 0x5001, 0x0a55, 0xaa50, 0xff66, 0x00f3, 0x8080, 0xf4f3, 0x0001, 0x0090, 0x00a4, 0x4f33, 0x00f3, 0x8080, 0xf6f3, 0x5007, 0xaa00, 0xaa1a, 0xaa06, 0xaa06, 0xaa01, 0xaa01, 0xaa01, 0xaa01, 0x333f, 0x0336, 0x2000, 0x0810, 0x0404, 0x0202, 0x0142, 0xf030, 0x00f0, 0x3f24, 0x5006, 0x0055, 0x0002, 0x000b, 0x002f, 0x002a, 0x02af, 0x0afe, 0x23fa, 0x9402, 0x4056, 0x009a, 0xff59, 0x72f4, 0x5402, 0x50aa, 0x402a, 0x000a, 0x7fb7, 0x0000, 0x5555, 0x00f3, 0x07e0, 0xf333, 0xf7b4, 0x5401, 0x00aa, 0xf095, 0xf4b3, 0x4004, 0x000e, 0x003a, 0x00ea, 0x003a, 0x000e, 0x00f4, 0x0030, 0xf3f4, 0x0002, 0x0001, 0x056a, 0x1aaa, 0x00f3, 0x07fc, 0xba3f, 0x5403, 0x0500, 0xa1aa, 0xa8aa, 0x57aa, 0x01f3, 0x78c0, 0x4007, 0xf3b7, 0x0001, 0x5454, 0xa9a9, 0x04f3, 0x3fc0, 0x8000, 0x6080, 0x0c10, 0x0803, 0xf43f, 0x5405, 0x4255, 0x2a55, 0xaa55, 0x0a54, 0xaa55, 0xaa50, 0xff44, 0x05f3, 0x0804, 0xc030, 0x1010, 0x1010, 0x1010, 0x1000, 0xff63, 0x0000, 0x2825, 0x33f6, 0x02f3, 0x0e16, 0x8f0e, 0x8f8f, 0xf63f, 0x0403, 0x2aaa, 0x4aaa, 0x52aa, 0x542a, 0x3fff, 0x0463, 0x3cf0, 0xfbcf, 0x9e7d, 0xffef, 0x000f, 0xf4f3, 0x4005, 0x9400, 0xa900, 0xa400, 0xa940, 0xaa90, 0xaaa4, 0x073f, 0x98be, 0xe0c0, 0xf6f0, 0xfffe, 0x0307, 0x1303, 0x7c32, 0xf078, 0xaf34, 0x000c, 0x0095, 0x0095, 0x0255, 0x0956, 0x0955, 0x0255, 0x2955, 0xa555, 0x96ff, 0x9bff, 0x9bff, 0x9bff, 0x96ff, 0xffaa, 0x00f3, 0x0030, 0x3333, 0x00af, 0xfefe, 0xf3af, 0x5402, 0x5255, 0x4a55, 0x2a55, 0xaaaf, 0x02f3, 0x02e0, 0x1020, 0x0608, 0xf43f, 0x5409, 0xaa55, 0xaa2a, 0xa84a, 0xa850, 0xa855, 0xaa85, 0xaa15, 0xa055, 0x8555, 0x8554, 0x003f, 0xfe7e, 0x33f3, 0x0263, 0x00f0, 0xf03f, 0x1fe7, 0xebd6, 0x0001, 0xe555, 0xfa56, 0xfeb7, 0x5403, 0x00a4, 0x00a5, 0x00a4, 0x00a4, 0xeb77, 0x01b7, 0xc080, 0x0180, 0xf7b3, 0x9401, 0x40aa, 0xc0a9, 0x77b6, 0x6f33, 0x7b66, 0x6f33, 0x7bf6, 0x9000, 0xafff, 0x873b, 0x0008, 0x5550, 0xcaaa, 0xcaaa, 0xf2aa, 0xf2aa, 0xfcaa, 0xfcaa, 0xfcaa, 0xfcaa, 0xe7bd, 0x540e, 0x0141, 0x0090, 0x00a4, 0x40a9, 0x40aa, 0x40aa, 0x00aa, 0xffa9, 0xff01, 0xff07, 0xff47, 0xff47, 0xff17, 0xff17, 0x5519, 0xdb77, 0x2222, 0x00b7, 0x6080, 0x32b7, 0x4004, 0xd419, 0xfd07, 0x7f51, 0x1ff4, 0x5ffd, 0x3333, 0xf422, 0xb333, 0x4422, 0x7b3f, 0x7b42, 0x5002, 0x50f9, 0x94fe, 0xa5bf, 0xfbbb, 0x00f4, 0xb080, 0x0042, 0x2810, 0x7f42, 0x5000, 0x5550, 0x01f3, 0x2010, 0x80c0, 0x0023, 0x0100, 0xff32, 0x5000, 0x6055, 0x0223, 0xbff0, 0xf77f, 0xf7f0, 0x00b7, 0xc000, 0xf6b7, 0x0004, 0x00a4, 0x00a4, 0x0064, 0x0064, 0x0064, 0xb6b7, 0x017b, 0xf3fe, 0xfdf3, 0xf37b, 0x5407, 0xaa55, 0xaa2a, 0xaa4a, 0xaf52, 0x2a54, 0x4a51, 0x5255, 0x5455, 0x7777, 0x05f3, 0x3e0c, 0x7f7f, 0x80ff, 0xf0c0, 0xfffe, 0xf070, 0xd23f, 0x0001, 0xaa55, 0x0055, 0x33ff, 0xbcbd, 0x02db, 0xef9e, 0xefdf, 0xfbf7, 0x7db8, 0x4003, 0x90aa, 0x91aa, 0xa7aa, 0xa76a, 0x00bd, 0x0214, 0x87db, 0x5401, 0x5500, 0xcaa0, 0x00b7, 0x0180, 0xfd7b, 0x4000, 0x2a55, 0x7777, 0x00bd, 0x08f8, 0x38bd, 0x4005, 0xaa40, 0xaa6a, 0xaada, 0xaaf6, 0xaafd, 0x6afd, 0xb83f, 0x4001, 0x00ea, 0x003a, 0xd8b7, 0x0004, 0x40a9, 0x40aa, 0x90aa, 0xa4aa, 0xa9aa, 0x8888, 0xfcbd, 0xa400, 0x9075, 0xd7bc, 0x9005, 0xa41f, 0xa91f, 0xaa5f, 0xaa9f, 0x6aa7, 0x6aa9, 0x8888, 0x007b, 0x1f00, 0x83b7, 0x5402, 0x00a9, 0x00f4, 0x0050, 0xf7bd, 0x0006, 0x01a4, 0x0690, 0x0690, 0x0690, 0x0690, 0x0690, 0x5a90, 0x77bb, 0x0024, 0xc0e0, 0xffb4, 0x0000, 0x0100, 0x0124, 0x0e0c, 0x0c0e, 0xb824, 0x4002, 0x003a, 0x00ea, 0x3fff, 0xf4b7, 0x0002, 0x0040, 0x5495, 0xadaa, 0x4444, 0x4f33, 0x0034, 0xfff0, 0xfff3, 0xff33, 0x006f, 0x7fce, 0x46f3, 0x0008, 0x0040, 0x5095, 0xa4aa, 0xa9aa, 0x7faa, 0x7f10, 0xff00, 0x7f01, 0x1d00, 0x00f3, 0x3030, 0x4ff3, 0x0000, 0x0044, 0x00b7, 0x1080, 0xf3b7, 0x0005, 0x0001, 0x0006, 0x001a, 0x006a, 0x01aa, 0x07ea, 0x4f33, 0xf7b4, 0x9000, 0x400f, 0xf36f, 0x5004, 0x5585, 0x55a1, 0x55a1, 0x15a8, 0x85aa, 0x00f3, 0x0030, 0x3333, 0x0042, 0x8060, 0xff42, 0x0000, 0xa100, 0x004f, 0xf010, 0x22ff, 0x0124, 0xf0e0, 0xf0f0, 0x4fb8, 0x9007, 0xd0aa, 0xd0af, 0xf4ff, 0xf4ff, 0xf4ff, 0xf4ff, 0xd0ff, 0x00ff, 0x02f2, 0xf0c0, 0x03f7, 0x0402, 0x0042, 0xfefc, 0xfff4, 0x4fff, 0x003f, 0x4040, 0x002f, 0xfef0, 0x014f, 0x01f0, 0x0f03, 0x4444, 0xfff4, 0x00b3, 0x0080, 0x5f3b, 0x9003, 0x0555, 0xe555, 0x9555, 0x5554, 0x01b5, 0xc0e0, 0x80c0, 0xf3b5, 0x0006, 0x0040, 0x006a, 0x01aa, 0x01aa, 0x01ea, 0x007f, 0x0015, 0x003b, 0x7ef8, 0xfb53, 0x0002, 0x9555, 0xea55, 0x00a5, 0x33b5, 0x00b3, 0x1010, 0xf5b3, 0x0009, 0x0001, 0x0006, 0x5aaa, 0xf6aa, 0x0daa, 0x036a, 0x006a, 0x036a, 0x0daa, 0xd6aa, 0x005b, 0xfefe, 0xf35b, 0x5405, 0x4a55, 0x4a55, 0x4a15, 0x4a85, 0x4aad, 0xcaab, 0x00b3, 0x0040, 0xfb53, 0x000c, 0x2025, 0x2025, 0x0025, 0x0025, 0x0039, 0x0009, 0x000e, 0x0002, 0x556a, 0x5580, 0x5600, 0x5c00, 0x7000, 0x00f3, 0x8080, 0x7b53, 0x0007, 0xa500, 0xf955, 0xfe56, 0xff56, 0xff56, 0xff56, 0xff56, 0xff56, 0x015b, 0xefee, 0xefef, 0xf7b5, 0x4007, 0x9001, 0xa401, 0xa901, 0xaa41, 0xa400, 0xa900, 0xaa40, 0xaa90, 0x77b5, 0x00b7, 0x0010, 0xffb7, 0x0000, 0x0005, 0x02b5, 0x1010, 0x1010, 0x1010, 0xf7b5, 0x0007, 0x0050, 0x00a4, 0x40a9, 0x90aa, 0xa4aa, 0xa9aa, 0x00aa, 0x00a9, 0x7bb5, 0x02b5, 0x1080, 0x1010, 0x3000, 0xbf35, 0x0005, 0x0039, 0x0ffc, 0xf557, 0xe555, 0xbe95, 0x5555, 0xf7b5, 0xa404, 0xa91a, 0xaa1a, 0xa91a, 0xa61a, 0x5a1a, 0x5b77, 0x00b7, 0x80f0, 0xf5b7, 0x1000, 0x1090, 0x5b77, 0x02b7, 0x0386, 0x0f03, 0x3103, 0xffb7, 0x0000, 0x4015, 0x01b5, 0xf8fc, 0xe0f0, 0xf75b, 0x5404, 0x5415, 0x5485, 0x54a1, 0x14a8, 0x84aa, 0x06b7, 0xc030, 0x00e1, 0x030f, 0x0001, 0x0f1f, 0x7fc7, 0x1f3f, 0x00b5, 0xfcfe, 0x01b7, 0x8070, 0x0807, 0xf5b7, 0x0001, 0x6900, 0x1900, 0x00b7, 0x3f30, 0xf5b7, 0x0000, 0x0050, 0x7b5b, 0x01b7, 0xe030, 0x0807, 0x83bf, 0x0016, 0x0001, 0x4006, 0xd006, 0xf41a, 0xf56a, 0x01aa, 0x006a, 0x001a, 0x401a, 0x941a, 0xa969, 0x00aa, 0x00a9, 0x00a9, 0x00a9, 0x40a9, 0x40aa, 0x40aa, 0x906a, 0x406a, 0x00aa, 0x00a9, 0x00a4, 0x3bff, 0x01bf, 0x8080, 0x0209, 0xf3bf, 0x0403, 0x1900, 0x6900, 0xaa00, 0xaa01, 0x00fb, 0xfefe, 0x3fb8, 0xa400, 0x546a, 0x3bbb, 0x01bf, 0x2020, 0x2020, 0xf8bf, 0x4001, 0x9001, 0xa501, 0x00fb, 0xdcfe, 0x8fb3, 0x5003, 0x40a9, 0x40aa, 0x40aa, 0xd0aa, 0xfffb, 0x00b3, 0x1018, 0xfbf3, 0x0000, 0x2895, 0x3bff, 0x00b3, 0xe030, 0xf2b3, 0x4001, 0x00a9, 0x00f4, 0xfb33, 0x00b3, 0x0180, 0x23bd, 0x9402, 0x40aa, 0x55aa, 0x00a9, 0x33bd, 0xf3f2, 0xa404, 0xa5aa, 0x90aa, 0x90aa, 0xa5aa, 0xa4aa, 0x00f3, 0x0010, 0xbf23, 0x000a, 0x9555, 0x60a5, 0x6055, 0x6055, 0x8055, 0x6055, 0x6095, 0x8065, 0x005a, 0x3a60, 0x0ecc, 0x00b3, 0x0412, 0x4fb3, 0x4005, 0x0a00, 0x2b00, 0xaa00, 0xaa91, 0x6a91, 0x5640, 0x00b3, 0x7070, 0x4fb3, 0x0001, 0xa015, 0xe805, 0xffb8, 0x0002, 0x00a9, 0x00a9, 0x00a4, 0xfb88, 0x01b8, 0x8080, 0xc080, 0x33b8, 0x00b3, 0xf030, 0x33bb, 0x01bd, 0x18c4, 0x4321, 0x83db, 0x4003, 0xaa15, 0x2af2, 0x0a00, 0x0255, 0xddbb, 0x00b3, 0xfefe, 0xfeb3, 0xa400, 0x5956, 0xbeeb, 0x01b3, 0x0100, 0x0100, 0x0af3, 0x0106, 0x3f79, 0x7ffe, 0x0307, 0x0701, 0xf8c0, 0x2040, 0xc080, 0x80c0, 0x71f0, 0xc010, 0xf23f, 0x5401, 0x52a1, 0x4aa8, 0x002f, 0xbf3e, 0xf3f2, 0x0002, 0xaa04, 0x6a95, 0x1a40, 0xf222, 0x02b3, 0x0080, 0x8501, 0x0204, 0x00f3, 0x0f7c, 0xb23f, 0x5401, 0x5255, 0x5255, 0xf8b3, 0x0007, 0x5691, 0xaa91, 0xaaa7, 0xaaa7, 0xaa9f, 0xaa9f, 0xaa7f, 0xaa7f, 0xfcb5, 0xa406, 0xa4aa, 0xa4aa, 0xa4aa, 0x90aa, 0x40aa, 0x00aa, 0x00a9, 0xccb5, 0x00b5, 0x1010, 0x43b5, 0x000a, 0x0001, 0x0006, 0x0006, 0x0001, 0x0009, 0x0024, 0x0024, 0x00a6, 0x00a6, 0xffa6, 0x3ffd, 0x54b7, 0x9400, 0x40fa, 0x55bb, 0x00b7, 0xf0c0, 0xf74b, 0x5400, 0x42aa, 0x007b, 0xef7c, 0xcb27, 0x0005, 0x0009, 0xbffb, 0x2fef, 0x0bbf, 0x0bff, 0x2ffa, 0x00bc, 0xb08c, 0x58bc, 0x0003, 0x5a40, 0x56d5, 0x56f5, 0x56f5, 0x015b, 0x0e0c, 0x0e0e, 0x5555, 0xbbb8, 0x004b, 0x0800, 0x4444, 0x444b, 0x0154, 0x9710, 0xbfbf, 0x5555, 0x028b, 0x08ec, 0x3119, 0x0361, 0xc5b8, 0x5000, 0x5095, 0xdc5b, 0x4003, 0xfff2, 0xffca, 0xff28, 0x00a0, 0x5cb4, 0x9002, 0x705a, 0xfca9, 0xfc97, 0xd4b5, 0x5003, 0x7ff6, 0x7fda, 0xfd6a, 0x56aa, 0x0154, 0x7830, 0xfdfd, 0x44bb, 0x0354, 0xf870, 0xfdfd, 0xe8c0, 0xfbf9, 0xff45, 0x1000, 0x0000, 0x4fff, 0x0054, 0xc180, 0x3f45, 0x5003, 0x55a5, 0xc050, 0xd500, 0x413f, 0x5534, 0x0045, 0x2030, 0xcb45, 0x0006, 0x5655, 0x5b55, 0x6f55, 0x6f55, 0xf955, 0xe556, 0xaa5b, 0x4bcc, 0x01bc, 0x2090, 0x3e41, 0x4bdc, 0x0003, 0x0900, 0x09fe, 0x0afe, 0x0ba8, 0x01bc, 0x2834, 0x3020, 0xcccc, 0xf444, 0x02b4, 0x2040, 0x1010, 0x800c, 0x57b4, 0x0008, 0x0014, 0xfdaa, 0xfdaa, 0xf6aa, 0xf6aa, 0xf6aa, 0xf6aa, 0xf6aa, 0xf6aa, 0x00b7, 0x3c00, 0x52b7, 0x0008, 0x0005, 0x0016, 0x0166, 0x0665, 0x1650, 0x6501, 0x5007, 0x001f, 0x007f, 0x00b5, 0x30c0, 0x37b5, 0x4007, 0x901a, 0x001a, 0x00f7, 0x40df, 0x40df, 0x40df, 0x40df, 0x40df, 0xf5b3, 0x1000, 0x10da, 0x00bc, 0xc780, 0xbb55, 0x7bbb, 0x00b5, 0xc080, 0xfb35, 0x0006, 0x0009, 0x0009, 0x0025, 0x0025, 0x0025, 0x0025, 0x0025, 0x5b33, 0x0645, 0x3870, 0x2020, 0xf9f0, 0x4060, 0xf040, 0xe3ff, 0x80c1, 0x74b5, 0x0001, 0x0081, 0x0017, 0xb777, 0x0145, 0x1810, 0x1018, 0x03b5, 0xf0f0, 0x7070, 0x3070, 0x3030, 0x5555, 0x01be, 0x0700, 0x1008, 0xd2be, 0x0008, 0x0004, 0xfd64, 0xfd01, 0xfd41, 0xfd11, 0xfd01, 0xfd01, 0xfd07, 0xfd07, 0x4ebd, 0x9401, 0xa7ff, 0x5ff5, 0x4bdd, 0xd8bf, 0xa404, 0xa97f, 0xaa7f, 0xaa7f, 0x6a7f, 0x567f, 0x013b, 0xfe7e, 0xfefe, 0x02db, 0xae76, 0xeccc, 0x586c, 0xf3db, 0x4000, 0x4011, 0x3bbd, 0x00be, 0xc1e0, 0xfe2b, 0x8400, 0x840a, 0x01be, 0x0828, 0x0c08, 0xd4be, 0x5401, 0xaa95, 0xaa7f, 0xd4fb, 0x0002, 0xff29, 0x00c4, 0x3cc8, 0x48db, 0x4002, 0x4a80, 0x4aaa, 0xc02a, 0x00b8, 0xf8f8, 0xf4b8, 0x5002, 0x5065, 0x50a5, 0x55a5, 0xb44b, 0x05b8, 0x807e, 0x0810, 0xc0c0, 0xe0e0, 0xf0e0, 0xf0f0, 0x38bf, 0x4005, 0x40aa, 0x40aa, 0x90aa, 0xa5aa, 0xffaa, 0xff7f, 0xfeb3, 0x9003, 0x9c00, 0xa401, 0xa4c6, 0xa95a, 0x4dbe, 0xa400, 0xa901, 0xeeeb, 0xb3f4, 0x4003, 0x00a9, 0x00a5, 0x0094, 0x00f0, 0x3eb4, 0xa402, 0xa900, 0xa900, 0xa900, 0x4f3b, 0x5007, 0x90fa, 0xa4fe, 0xf8ff, 0xfcff, 0x55ff, 0x5559, 0x556e, 0x5559, 0x43f2, 0x1006, 0x05a4, 0x1aa4, 0x1aa4, 0x1aa4, 0x1aa4, 0x16a4, 0x7d94, 0xf4f2, 0xf3db, 0x5400, 0x5485, 0x3bdd, 0x02bd, 0x9aa2, 0x0404, 0x8808, 0xfedb, 0x0004, 0x0255, 0x0854, 0x2a50, 0x2850, 0xaa40, 0xdbbb, 0x04be, 0xe0f0, 0x4400, 0x0784, 0x27e0, 0x8241, 0x00f3, 0x8080, 0xf43f, 0x5402, 0x5285, 0x5285, 0x5415, 0x003b, 0xfefe, 0xf3b2, 0xa401, 0xa4aa, 0x1aaa, 0x2222, 0x00b3, 0x10c0, 0xf2b3, 0x1402, 0x6a01, 0xa001, 0x9001, 0x00b3, 0x0102, 0x4f3b, 0x5406, 0x6855, 0xbf55, 0xff54, 0x3fa4, 0x3ffb, 0x9afe, 0xef5a, 0x3f44, 0x00f4, 0x0082, 0x01b4, 0x8080, 0x2040, 0x4fdb, 0x4003, 0x40a1, 0x40e1, 0x40f1, 0x40f1, 0x444b, 0xb2bb, 0x00b4, 0x0070, 0xf3f4, 0x0004, 0xaa90, 0xaa91, 0xaa45, 0xa915, 0xa454, 0x04f4, 0x7cfe, 0x0618, 0x0706, 0x0f0f, 0x6f0f, 0xf3f4, 0x5403, 0xaa41, 0x6a01, 0x1a00, 0x0600, 0x01f4, 0x1810, 0x422c, 0x444f, 0x8cbd, 0x0008, 0x0095, 0x0064, 0x0064, 0x0064, 0x0064, 0x0190, 0x0190, 0xff90, 0xff1f, 0xdb88, 0x01b8, 0x8080, 0xfce0, 0x004b, 0xe080, 0x008b, 0xf7f0, 0x01eb, 0xf0f0, 0xdff7, 0xc4be, 0x0003, 0x4019, 0x5567, 0xaa9f, 0xaa7d, 0xc2be, 0x0004, 0x0164, 0x0710, 0x1f00, 0x7f00, 0x7d55, 0x4cbd, 0x4004, 0x5069, 0xf5a4, 0x6401, 0x9000, 0x9000, 0x01bd, 0x8080, 0x0101, 0xddbc, 0xdddd, 0x0053, 0xe0c0, 0x3355, 0x5555, 0x03f3, 0x2030, 0x2010, 0xf870, 0xfefc, 0xf43f, 0x4001, 0x5002, 0x542a, 0x034f, 0xd7c6, 0xf7f7, 0xfbff, 0xf9fb, 0x01f3, 0x8000, 0x8080, 0xf4f3, 0x0002, 0x0090, 0x0090, 0x00a4, 0x44f3, 0x003b, 0xfdfe, 0x33b3, 0x04f3, 0x1030, 0x3070, 0xc010, 0xf0e0, 0x70f0, 0xf43f, 0x1400, 0x8455, 0x003f, 0xef6e, 0xf4f3, 0x0003, 0x0001, 0x0006, 0x0006, 0x0006, 0x03b8, 0x24c4, 0x0202, 0x0b03, 0x0b0b, 0x064f, 0xf810, 0x0f9f, 0xf207, 0xf1f0, 0xf3f7, 0x40e1, 0x3e7f, 0xdb4f, 0x5000, 0x4001, 0xddb4, 0x00bd, 0x9f1e, 0xebbb, 0xbbdb, 0x01eb, 0x0e04, 0x8586, 0xeebe, 0x00f4, 0x18e0, 0xb4fa, 0x4000, 0x005a, 0xbff4, 0xbfa2, 0x5000, 0x55ea, 0x00fb, 0xfff0, 0x2a4f, 0x5002, 0x5540, 0x50a5, 0x40a9, 0xb2af, 0x9400, 0x57c0, 0x00b4, 0x1010, 0xb74f, 0x5001, 0x401e, 0x003a, 0x07b7, 0x8080, 0x8080, 0x7070, 0x7070, 0x7070, 0x7070, 0x8080, 0x8080, 0xf3b7, 0x0000, 0x5640, 0x027b, 0x0e0e, 0x0f0f, 0x8f0f, 0xffb7, 0x0000, 0x0015, 0x00f3, 0xc180, 0xf3f4, 0xa401, 0x9056, 0x4055, 0x003f, 0x3ff0, 0xf43f, 0x5001, 0x4aa1, 0x2aa8, 0x4444, 0x003b, 0xfefe, 0x4f3b, 0x5401, 0xa555, 0xfa55, 0xff33, 0x00f4, 0x1030, 0xf3f4, 0x0000, 0x0001, 0x44f3, 0x02f4, 0x1010, 0x0808, 0x0404, 0xfff4, 0x0400, 0x0000, 0x01f3, 0xfcf8, 0xfffe, 0x01f4, 0x307e, 0x0718, 0xb43f, 0x5405, 0x5255, 0x4a55, 0x2a55, 0xaa54, 0xaa42, 0xaf2a, 0x3b74, 0x0002, 0x00a5, 0x00a8, 0xff56, 0x64f3, 0x5002, 0xa500, 0xaa50, 0xaaa5, 0xf3b6, 0xa401, 0xa4aa, 0xa9aa, 0x00f3, 0x0030, 0xf36b, 0x4400, 0x22aa, 0x023f, 0xf8fc, 0xe0f0, 0x0080, 0xf3f4, 0x4001, 0x00aa, 0x00a9, 0x33f4, 0x02f4, 0x01c0, 0x4242, 0x8181, 0x00b4, 0x1010, 0xff34, 0x0001, 0x0955, 0x0255, 0xff33, 0x01f4, 0x0030, 0x0008, 0xfeb4, 0x4002, 0x5550, 0xf5aa, 0xff65, 0xf6be, 0x9000, 0xa5f5, 0xdfb6, 0x9003, 0x4417, 0x1d1d, 0x1d7f, 0x1ff7, 0xedb6, 0x6400, 0x657d, 0xdbce, 0x0005, 0x02b9, 0xa9b9, 0xfdfa, 0xbde5, 0xede5, 0xf995, 0x6aaa, 0x01b6, 0x7810, 0x0818, 0xfcb6, 0x5002, 0x9000, 0xa400, 0xa400, 0x4b2f, 0x0001, 0x0025, 0x00f9, 0x444b, 0x00f4, 0x080c, 0xbf48, 0x5400, 0x5454, 0xf4f8, 0x42bf, 0x9404, 0x909a, 0x406a, 0x006a, 0x00d5, 0x05fc, 0xb64f, 0x5402, 0x54fa, 0x1faa, 0x0300, 0xffff, 0x00b7, 0x80fe, 0x6b7f, 0x0002, 0x0a55, 0xa555, 0xea55, 0xbfa6, 0x5001, 0xaa00, 0xfffa, 0x66bb, 0x00f6, 0x4140, 0x7b6f, 0x5407, 0x0055, 0xaaa0, 0x54fa, 0x54ff, 0x54ff, 0x54ff, 0x53ff, 0xf800, 0x7b4f, 0x4005, 0x50e5, 0x54e5, 0x54e5, 0x54e5, 0x50e1, 0x00e4, 0x7b4f, 0x024f, 0x0700, 0x1f0f, 0x3f3f, 0xff84, 0xa400, 0x01aa, 0x03f4, 0xfff0, 0x3071, 0x1010, 0x1010, 0xb74f, 0x5408, 0x57aa, 0x5eaf, 0x7ab5, 0xead5, 0xab55, 0xab54, 0xad50, 0xac40, 0x5755, 0xfb24, 0x0001, 0x03c9, 0x0fe5, 0xfb22, 0x004f, 0x00f8, 0x00b4, 0x8700, 0xe4b2, 0x4005, 0x001a, 0x401a, 0x0016, 0x0001, 0xaaa5, 0xaa9f, 0xbeeb, 0xfbbf, 0x00be, 0x9090, 0x4deb, 0x0400, 0x14c8, 0xefdb, 0x8400, 0x84cf, 0x4444, 0xbbb4, 0x04f4, 0x7830, 0x0efc, 0x8f06, 0xc0df, 0xf1e0, 0xf4ff, 0x037b, 0xf8f8, 0xf8f8, 0xf0f0, 0xf0f0, 0xf73b, 0x0000, 0xaa55, 0x3bbb, 0x02b7, 0x8080, 0x0b00, 0xf080, 0xf37b, 0x4000, 0x2aaa, 0x007b, 0x7fe0, 0xb777, 0x2bbb, 0x02f3, 0xf8f8, 0xc0f0, 0x80c0, 0x02b3, 0x0010, 0x1060, 0x4040, 0xf73b, 0x5404, 0x5251, 0x4a15, 0x2a45, 0x2855, 0x0a55, 0x0023, 0xf070, 0x372b, 0x0006, 0xaa01, 0xaaa8, 0x1555, 0x8155, 0xa815, 0xaa05, 0xaa83, 0x0723, 0xfcf8, 0xfcfc, 0xf0f8, 0xf0c0, 0xfefc, 0xc0fc, 0xf8f0, 0xc0f0, 0x00b3, 0x07f0, 0xbbb3, 0x0123, 0x7030, 0x3070, 0x3333, 0x3332, 0x04f3, 0xf0f0, 0xb070, 0xf3f1, 0xf7f7, 0xfef3, 0xf2f3, 0x5002, 0x0245, 0x0a50, 0xaa54, 0xfff3, 0x0323, 0xfef0, 0xfefe, 0xf8fc, 0xf8f0, 0x2333, 0x2222, 0x03f3, 0xe1c0, 0xc3e3, 0x0c01, 0x080c, 0x0432, 0xf8fc, 0xfffc, 0xc080, 0xf7f0, 0xf7f3, 0xff23, 0x5000, 0x5540, 0x063f, 0xfcfc, 0xf1fe, 0xe0e0, 0xf0e0, 0x7010, 0x70f0, 0x7830, 0x483f, 0x5002, 0x0085, 0x20a1, 0xc80c, 0x004f, 0xdbca, 0xb3f4, 0x1003, 0xaa04, 0xaa6a, 0xaa1a, 0xaaab, 0xf3b6, 0xa400, 0xa4aa, 0x00b3, 0x0010, 0xf4f3, 0x9006, 0xa400, 0xa400, 0xa900, 0xa900, 0xaa40, 0xaa90, 0xaaa4, 0x01f3, 0x7020, 0x1010, 0xbf43, 0x0002, 0x0009, 0x0009, 0x0025, 0x2bbb, 0x0032, 0xf0e0, 0x3322, 0x0073, 0xfff0, 0x32b7, 0x5005, 0xa400, 0xa900, 0xaa40, 0xaa90, 0xfff4, 0xfff4, 0x007b, 0xfefc, 0x637b, 0x040e, 0x54aa, 0x55a8, 0x45a1, 0x5500, 0x55f1, 0x00c0, 0x8f2a, 0x4aaa, 0x4a15, 0x4a15, 0x2a55, 0xaa45, 0xaa40, 0xaa0a, 0xaa32, 0x666b, 0x0032, 0xfefe, 0xf3f4, 0x0004, 0x00a9, 0x01a9, 0x01a4, 0x01a4, 0x0090, 0x3f44, 0x04f4, 0x8080, 0x8484, 0x0204, 0x0202, 0x0102, 0x0323, 0xf3f8, 0xef01, 0xfc0f, 0xf8fc, 0x04f3, 0xf070, 0xf1f0, 0xd3f3, 0xe2e1, 0xc007, 0x82f3, 0x0001, 0x8051, 0xa007, 0x234f, 0x8402, 0x85fa, 0x15ea, 0x15aa, 0x00f3, 0xf5f0, 0x483f, 0x0002, 0x0005, 0x8021, 0xa0a8, 0xf8f4, 0x00f4, 0x484c, 0xf444, 0x00f2, 0x80c0, 0xf3f2, 0x4001, 0x50a0, 0x40a9, 0x00f3, 0x0800, 0xf4f3, 0x4000, 0x9000, 0x00b3, 0x8000, 0xf7b3, 0x0004, 0x0050, 0x0094, 0x4095, 0x50a5, 0x54a5, 0x037b, 0x0fce, 0xcdce, 0xcfcf, 0xce0d, 0x7777, 0x008f, 0x3e3e, 0xfb8f, 0x5404, 0x5485, 0x5485, 0x5485, 0x5485, 0x5485, 0xbf88, 0x05b7, 0xf0f0, 0x100f, 0x7030, 0xf1f0, 0xfcf8, 0xfefe, 0xbbb7, 0x01fb, 0x2020, 0x0060, 0x88bb, 0xffbb, 0x008f, 0x0e0e, 0x004f, 0xbf1e, 0xffb4, 0x0001, 0x9555, 0x0255, 0xffbb, 0x00b4, 0xf070, 0xffb4, 0x0000, 0x0155, 0x03b7, 0x8000, 0xe0c0, 0xf8f0, 0xfefc, 0x008f, 0xf0f0, 0xf48f, 0x0000, 0x0055, 0x4448, 0x00f4, 0x040e, 0x00f8, 0xf8f8, 0xf4f8, 0x4002, 0x4055, 0x42a9, 0x8aaa, 0x4444, 0x05b7, 0x7010, 0x1010, 0x60c0, 0xf830, 0x0f1e, 0xc01f, 0x6fb7, 0x5004, 0xf855, 0xe0ff, 0x80ff, 0x00ff, 0x00fa, 0xff77, 0x0067, 0xfff0, 0x00f6, 0x0a0a, 0xf7f6, 0x0002, 0x0001, 0x0006, 0x005a, 0x7777, 0x006f, 0x1ff0, 0xf76f, 0x5404, 0x52a8, 0x0aaa, 0x55aa, 0x1505, 0x80a0, 0x02b7, 0x1010, 0x7030, 0xf0f0, 0x77bb, 0x00b4, 0xfcfe, 0x8fb4, 0x5004, 0x7255, 0x7e55, 0xc055, 0x0055, 0x0057, 0xbb84, 0x027b, 0xe0e0, 0xc0e0, 0xc0c0, 0x47bf, 0x5401, 0x5795, 0xaa95, 0x46f7, 0x9001, 0x4000, 0xfd00, 0xf84f, 0x9406, 0x6810, 0x6800, 0x5815, 0x5855, 0x5855, 0x5851, 0xa851, 0x024f, 0xf8e0, 0xfdfd, 0xc8dd, 0xbf48, 0x1000, 0x03a8, 0xfff8, 0x48b6, 0xb6f4, 0x4004, 0x003a, 0x00ea, 0x03aa, 0x0eaa, 0x3a66, 0x7bf4, 0x5407, 0x50e0, 0x50e0, 0x40f8, 0x41f8, 0x41f8, 0x55fe, 0x95fe, 0x00ff, 0xaf48, 0x5401, 0x5456, 0x9056, 0xf4ff, 0xcb6a, 0x5000, 0x40f9, 0xbb66, 0x6aa2, 0x00a6, 0x3070, 0xfbf6, 0x4000, 0x4000, 0x66bb, 0x00a6, 0xf0e0, 0x6666, 0x22aa, 0x00a6, 0xe0f0, 0x00b6, 0x8080, 0x7fb6, 0x0001, 0x0040, 0x0002, 0x66f7, 0x01f6, 0x1010, 0x1010, 0xffb6, 0x0001, 0x9000, 0x4000, 0x00a6, 0xf3e0, 0xb26a, 0x4001, 0x42a0, 0x4000, 0xf6db, 0x0401, 0x8580, 0xa1aa, 0x00b6, 0x0010, 0x00f6, 0x4140, 0xbc6f, 0x5400, 0x5555, 0x6dbc, 0x0000, 0x55a9, 0xdbb6, 0x00b6, 0x0080, 0x00f6, 0x0202, 0x01b7, 0xc040, 0xefe3, 0xff7b, 0x0001, 0x0000, 0xaa95, 0x04b7, 0x0fc0, 0x0804, 0x1008, 0x7030, 0x1f1f, 0xf7bf, 0x5403, 0x50aa, 0x50aa, 0x94aa, 0x94aa, 0x00b7, 0x8070, 0xf78b, 0x5002, 0x540a, 0x5500, 0x55c0, 0xffbb, 0x00f8, 0xf0f0, 0xfff8, 0x0000, 0x0055, 0x00b7, 0xfee0, 0x78fb, 0x5401, 0x5560, 0x00ff, 0x7bff, 0x00b7, 0x8030, 0x68b7, 0x0000, 0x0050, 0x8bb7, 0x7bf6, 0x4403, 0x0080, 0x0550, 0x5ff4, 0xfffd, 0xaaa6, 0x66aa, 0x00b6, 0x3808, 0xb666, 0x00f6, 0xc070, 0x66ff, 0x007f, 0xff3c, 0x00f8, 0xf8f8, 0x4bf8, 0x4000, 0xaba9, 0x4f7b, 0x5400, 0x5554, 0x008f, 0xf8e8, 0x6b4f, 0x0002, 0x4254, 0xab55, 0xffaa, 0x77f6, 0xf666, 0x007f, 0x0f8e, 0x6b4f, 0x4003, 0x000a, 0x02af, 0xabff, 0xc0ff, 0x4f76, 0x0000, 0xaa95, 0xbf84, 0x0003, 0x00e4, 0x00a4, 0x10a4, 0x54a5, 0x00f8, 0x1c1c, 0xf0f8, 0x5000, 0x5001, 0x0000
};

// [D_08CAF590] D_08CAF878 Huffman Window 1
u32 D_08caf878_window1[] = {
	0x7e4eb4bf, 0xcbdeefd7, 0x837fbb7b, 0x7beede97, 0xb6dd5ff9, 0x7b6ffdfd, 0x83386eed, 0xdefcdbfe, 0xdddf93ee, 0x7bff7e73, 0xbdedffb7, 0xfb6aff6d, 0x7e93fbbe, 0xdb3fcedb, 0xaf7bfdee, 0xfd7cef7d, 0xb4bfaf93, 0xfff6dfff, 0xdddb77ee, 0x7f3b4e77, 0x6f5ffe59, 0xdcadfd7f, 0xcfdbbb77, 0xfeffb965, 0x7e7ea5bd
};

// [D_08CAF5F4] D_08CAF878 Huffman Window 2
u32 D_08caf878_window2[] = {
	0x549a122f, 0xd5ddd2ba, 0x52a52a3e, 0x56f2a915, 0x4deca555, 0x9adf5552, 0x5554093a, 0xaaaa2ad5, 0x6e528d5a, 0x352a9e15, 0x5feba9c5, 0x48e154aa, 0x55556c4a, 0x6ddbe95e, 0xa214534d, 0x4a962a56, 0xfba52928, 0x355466a2, 0x00000bac
};

// [D_08CAF640] D_08CAF878 Huffman
struct Huffman D_08caf878_huffman[] = {
	/* Data */			D_08caf878_huffmandata,
	/* Size */			0x13af,
	/* Count */			0x320,
	/* Window 1 */		D_08caf878_window1,
	/* Window 2 */		D_08caf878_window2,
};

// [D_08CAF650] D_08CAF878 RLE Data
u8 D_08caf878_rledata[] = {
	0x1, 0xf, 0x1, 0xf, 0x19, 0x5, 0x8, 0x6, 0x2b, 0x9, 0x1, 0x9, 0x17, 0x9, 0x7, 0xe, 0x2, 0x7, 0x1e, 0xd, 0xe, 0x8, 0x8, 0x7, 0x32, 0x5, 0x22, 0x7, 0x1d, 0x3, 0x60, 0x8, 0x33, 0x3, 0x5, 0x5, 0x1b, 0x5, 0x11, 0xd, 0x2, 0x6, 0x11, 0xf, 0x3, 0x7, 0x1, 0x3, 0x1d, 0x3, 0x18, 0x4, 0x1, 0x6, 0x11, 0x8, 0xa, 0x6, 0x11, 0xa, 0x6, 0xd, 0x3, 0x6, 0xa, 0x3, 0x14, 0x6, 0xf, 0x17, 0xd, 0x7, 0x9, 0x3, 0x11, 0x5, 0x7, 0x3, 0xd, 0x3, 0x1, 0xb, 0x1, 0x4, 0x10, 0xb, 0x21, 0x8, 0x4, 0xd, 0x3, 0x3, 0x2, 0x4, 0x7, 0x3, 0x1, 0x9, 0x12, 0x7, 0xe, 0xc, 0x1d, 0x3, 0xa, 0x3, 0x37, 0x3, 0x5, 0x7, 0x5, 0x5, 0x6, 0x4, 0x14, 0x8, 0x1, 0x3, 0x3, 0x5, 0x15, 0x9, 0x18, 0x7, 0xd, 0x7, 0x11, 0xf, 0x2, 0x3, 0x17, 0x9, 0x10, 0xe, 0x11, 0x6, 0x4a, 0xf, 0x3a, 0x6, 0x1, 0x7, 0x19, 0x5, 0x3, 0x3, 0x3, 0x3, 0x5, 0x9, 0x21, 0x3, 0x4, 0x8, 0x31, 0xf, 0x21, 0x9, 0x21, 0x5, 0x16, 0x6, 0x1b, 0x6, 0x4, 0x6, 0xa, 0xb, 0x7, 0xb, 0x8, 0x3, 0x43, 0x4, 0x11, 0x3, 0x3, 0x6, 0x8, 0xb, 0x38, 0x7, 0x2, 0x6, 0x1c, 0xb, 0x23, 0x9, 0x7, 0x3, 0x1d, 0xf, 0x3, 0xd, 0x9, 0x7, 0x4, 0x5, 0x8, 0x3, 0xd, 0x5, 0xc, 0xe, 0xb, 0x15, 0xc, 0x4, 0x2, 0xb, 0x29, 0xa, 0x61, 0x3, 0xc, 0x3, 0x14, 0xd, 0x11, 0x6, 0x26, 0x5, 0x1f, 0x15, 0x17, 0x7, 0x13, 0x5, 0x9, 0x7, 0x1, 0x5, 0x17, 0x3, 0x1c, 0x3, 0x2, 0x3, 0xd, 0x9, 0x7, 0xc, 0x4, 0x6, 0xa, 0x3, 0xf, 0xb, 0x8, 0x7, 0x24, 0xd, 0x1b, 0x3, 0x4c, 0xa, 0x4, 0xa, 0x21, 0x9, 0x6, 0x4, 0xd, 0xa, 0x6, 0x5, 0xb, 0xc, 0x4, 0x9, 0x27, 0x5, 0xa, 0x3, 0xe, 0x3, 0x9, 0x3, 0x7, 0x5, 0x66, 0x7, 0x8, 0x5, 0xc, 0xa, 0x6, 0xd, 0x3, 0xe, 0x9, 0x7, 0x1, 0x7, 0x2a, 0xe, 0x6, 0xb, 0x8, 0x7, 0x15, 0x5, 0x2, 0x4, 0x11, 0xe, 0x2, 0xa, 0x1e, 0x8, 0x2, 0xd, 0x18, 0x8, 0xa, 0x6, 0x18, 0x8, 0x19, 0x4, 0x2b, 0x8, 0x41, 0xa, 0x1f, 0x6, 0x2a, 0x6, 0x1, 0x3, 0x6, 0x6, 0x43, 0x5, 0xa, 0x8, 0xb, 0x3, 0x8a, 0xb, 0x34, 0xa, 0x6, 0x5, 0x8, 0x3, 0x7, 0x3, 0x27, 0xa, 0x4, 0x4, 0xa, 0x9, 0x2a, 0x5, 0x11, 0x3, 0x7, 0x9, 0x17, 0x4, 0x11, 0x3, 0x8, 0x7, 0x11, 0x7, 0x10, 0x7, 0x1a, 0x6, 0x12, 0x7, 0x6, 0x3, 0xb, 0xc, 0x30, 0xd, 0x4, 0x8, 0xd, 0x8, 0x1c, 0x6, 0x9, 0x3, 0x45, 0xf, 0x9, 0x3, 0x15, 0x3, 0x5, 0x7, 0x7, 0x19, 0x3, 0xd, 0x5, 0x3, 0x5, 0x3, 0x1, 0x3, 0x4d, 0x7, 0x2b, 0x7, 0x7, 0x9, 0x7, 0x9, 0x1d, 0x4, 0x8, 0x9, 0x7, 0xa, 0x10, 0x7, 0x8, 0x5, 0x17, 0x8, 0x1, 0x6, 0x18, 0x6, 0x7, 0x4, 0x1, 0xc, 0xa, 0x7, 0x3, 0xe, 0x2, 0x5, 0x1b, 0x5, 0xb, 0x9, 0x1, 0x5, 0x11, 0x7, 0xf, 0x11, 0xe, 0x3, 0x6, 0xe, 0x14, 0x7, 0x19, 0xc, 0x4, 0x7, 0x19, 0xc, 0x4, 0x5, 0xc, 0x5, 0x5, 0x4, 0x14, 0xc, 0x24, 0xc, 0x22, 0x7, 0x4, 0x3, 0x1, 0x7, 0x3, 0x5, 0x7, 0x9, 0x71, 0xb, 0xf, 0x5, 0x1c, 0x4, 0x1, 0x4, 0x27, 0x4, 0xc, 0x4, 0x1, 0xd, 0x6, 0x6, 0x2, 0x7, 0xe, 0xc, 0xe, 0x5, 0x19, 0x7, 0x1, 0x4, 0x5, 0xa, 0x31, 0xb, 0x11, 0x4, 0x2c, 0x9, 0x14, 0x3, 0x10, 0x3, 0x11, 0x3, 0x24, 0x4, 0x1, 0x5, 0xd, 0xb, 0x3, 0x3, 0x2d, 0x6, 0x3, 0x3, 0x4, 0x9, 0x1, 0x5, 0x4, 0x7, 0x8, 0x7, 0xe, 0x6, 0x2, 0xa, 0x10, 0x6, 0x19, 0x3, 0x15, 0x6f
};

// [D_08CAF878] D_08CAF878 Graphics
struct CompressedGraphics D_08caf878 = {
	/* Huffman Data */		D_08caf878_huffman,
	/* RLE Data */			D_08caf878_rledata,
	/* RLE Size */			0x228,
	/* RLE Offset */		0x1c00,
	/* Double Compressed */	TRUE,
};

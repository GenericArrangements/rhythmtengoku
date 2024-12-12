#include "global.h"
#include "graphics.h"

// // //  D_08BFBE68  // // //

// [D_08BFA214] D_08BFBE68 Huffman Data
u16 D_08bfbe68_huffmandata[] = {
	0x3333, 0x1333, 0x0023, 0xf0f8, 0x3323, 0x3333, 0x4677, 0x2333, 0x2467, 0x9000, 0x90ff, 0x1222, 0x1467, 0x9003, 0x90ff, 0x90ff, 0x90ff, 0x90ff, 0x1111, 0xcde4, 0x5401, 0x58e9, 0x60a5, 0xddee, 0xd464, 0xccdd, 0x8674, 0x2402, 0x9c00, 0x7caa, 0xfc55, 0x7778, 0x8413, 0x0000, 0xa4a9, 0x7184, 0x5400, 0x57f2, 0xee74, 0x8437, 0x0002, 0x00e5, 0xffe5, 0xffe5, 0xf841, 0x9400, 0xa9aa, 0x8888, 0x0132, 0xfef8, 0xaf57, 0x0112, 0xf800, 0x77ff, 0x2221, 0x0032, 0xe800, 0x3323, 0x3333, 0x0012, 0x0116, 0x0132, 0xfed0, 0x002b, 0x0012, 0xf220, 0x9841, 0x5400, 0xf4aa, 0x8844, 0xaa41, 0x4499, 0xbb41, 0x99aa, 0xbb41, 0xaabb, 0xbc41, 0xe400, 0xa4ff, 0xbbbb, 0xcd41, 0xbbcc, 0x214c, 0x9000, 0x90ab, 0x4ac1, 0x0002, 0x0039, 0x003e, 0x003f, 0x6145, 0x9001, 0x93aa, 0x93aa, 0x7481, 0x000a, 0xfff9, 0xfff9, 0xfff9, 0xfff9, 0xfff9, 0xfff9, 0xfff9, 0xfff9, 0x00bf, 0x00bf, 0x00bf, 0x2147, 0x4002, 0x40ba, 0x40fe, 0x40ff, 0x4732, 0x5400, 0x557e, 0x0148, 0x0c0c, 0x0f0c, 0xa849, 0x5000, 0x4faa, 0x8844, 0x24ab, 0x9000, 0x80ab, 0x7482, 0x0001, 0x5a55, 0xf555, 0x1456, 0x6777, 0x1145, 0x4566, 0x0014, 0xff8e, 0x2122, 0x2211, 0x0032, 0xcd08, 0xf213, 0x0000, 0xa555, 0x2121, 0x0032, 0xef88, 0x3333, 0x8842, 0xeee7, 0x8842, 0x7778, 0x8642, 0x8888, 0x6412, 0x7886, 0x6412, 0x9000, 0x40fe, 0x2341, 0x5401, 0x03fe, 0xffea, 0x0087, 0x7ffe, 0x5678, 0x0001, 0x5595, 0xeaea, 0x0014, 0xff00, 0x4c12, 0x0400, 0x0000, 0xd34c, 0x4002, 0x40aa, 0x40aa, 0x43aa, 0x3333, 0x4acd, 0x4ad3, 0x0000, 0x00f9, 0xe364, 0x1000, 0x15aa, 0x3333, 0xcde4, 0x9406, 0x54fe, 0x54fe, 0x54fe, 0x54fe, 0x54fe, 0x54fa, 0x54fa, 0xcdde, 0x1211, 0x0032, 0xee80, 0x3333, 0xe433, 0xcdee, 0xde43, 0x9003, 0x90fa, 0x90ea, 0xd0ea, 0x50aa, 0x643d, 0x0000, 0xaae5, 0x7433, 0x6666, 0x0023, 0x80f8, 0x3333, 0x0021, 0xf080, 0xf312, 0x0403, 0x15a0, 0x55a1, 0x5580, 0x1580, 0x0132, 0x8c08, 0xffde, 0x4213, 0x0000, 0x6555, 0x9c43, 0x4c4a, 0x9c43, 0x4c4a, 0x9c43, 0x4c4a, 0x9c43, 0x4c4a, 0xa941, 0x4a94, 0x0041, 0x80fc, 0x34b1, 0x0001, 0xe500, 0xe5ff, 0x4bc3, 0x0002, 0x0039, 0x0039, 0x0039, 0x34bc, 0x2333, 0x34bc, 0x2223, 0x14bc, 0x1222, 0x0023, 0xf220, 0x2223, 0x0021, 0x1152, 0xf471, 0x0007, 0x0095, 0x0095, 0x0095, 0x0095, 0x0095, 0x0095, 0x0095, 0x0095, 0x0348, 0x0c0c, 0x0c0c, 0x0c0c, 0x0c0c, 0xf87e, 0x9400, 0x40aa, 0x0087, 0xff8e, 0x4678, 0x5401, 0xa555, 0xfaaa, 0x0014, 0xffc0, 0x5678, 0x0002, 0x4055, 0x5595, 0xa9e9, 0x1456, 0xa400, 0xfa94, 0x1444, 0x0021, 0xffc0, 0x0023, 0x80c0, 0x3333, 0x4122, 0xee78, 0x4122, 0xe788, 0x4122, 0x7888, 0x4222, 0x8866, 0x1223, 0x8654, 0x2223, 0x6441, 0x2233, 0x4512, 0x4123, 0x4001, 0x56a5, 0x1511, 0x3333, 0xee42, 0x43de, 0x4006, 0x400e, 0x400e, 0x400e, 0x400e, 0x400e, 0x400e, 0x400e, 0x1456, 0xe401, 0xe4ff, 0xf9ff, 0x0041, 0x0010, 0x0012, 0x0052, 0x3332, 0x3222, 0x0013, 0xfff0, 0x0021, 0xce04, 0xbc32, 0x5000, 0x5550, 0x24bc, 0x5400, 0x50f9, 0x124b, 0x14bc, 0x5005, 0x50f9, 0x50f9, 0x50f9, 0x50f9, 0x50f9, 0x80f9, 0x14c2, 0x0006, 0x0095, 0x0095, 0x0095, 0xfc95, 0xff95, 0xff95, 0xff95, 0xee42, 0xcdde, 0xee42, 0xcdee, 0xee42, 0xcdee, 0xee41, 0xcdee, 0xee41, 0xcdee, 0xee41, 0xcdee, 0xee41, 0xcdee, 0xee41, 0xcdee, 0x0043, 0x8080, 0x3333, 0x4333, 0x0123, 0xc0c0, 0xc0c0, 0x3333, 0x2333, 0x1467, 0x9002, 0x90ff, 0xe5ff, 0xaaaf, 0x8654, 0x9000, 0xffa0, 0x6487, 0x5403, 0x5655, 0x5601, 0x5601, 0x5701, 0x0178, 0x0e0e, 0x0e0e, 0xe678, 0x5402, 0x7fd6, 0x1552, 0x0006, 0x1764, 0xa400, 0x53aa, 0x4126, 0x0000, 0xfff9, 0x0012, 0xa8fe, 0x0078, 0x8000, 0x4678, 0x5401, 0xa995, 0xfeea, 0x8614, 0x0000, 0x8154, 0x7841, 0x0000, 0x40f9, 0xee78, 0x0112, 0xa000, 0xfafa, 0x0123, 0x8000, 0xfffd, 0x0012, 0xd528, 0x1111, 0x0023, 0xfe50, 0x0212, 0xa440, 0xf8fd, 0xb2f7, 0x2222, 0xdd41, 0xbccc, 0xdd41, 0xcccd, 0xde41, 0xccdd, 0xee41, 0xcddd, 0xee42, 0xcdde, 0xde42, 0xa401, 0xa4fa, 0xa4fa, 0xddee, 0x1456, 0xe406, 0xe4ff, 0xe4ff, 0xe4ff, 0xe4ff, 0xe4ff, 0xe4ff, 0xe4ff, 0x7481, 0x0000, 0xbff9, 0x3748, 0xa400, 0x64d6, 0xa934, 0x5001, 0x5280, 0x53ea, 0x24ba, 0x4000, 0x55f9, 0xc24b, 0xa400, 0xa403, 0xf234, 0x5400, 0x6555, 0x0012, 0x4820, 0x4b12, 0x4401, 0xea55, 0xea00, 0x4bc2, 0x0005, 0x00e9, 0x00e9, 0x00e5, 0x00e5, 0x00e5, 0x00e5, 0x9842, 0x5400, 0xf4aa, 0x8844, 0xaa42, 0x4499, 0xbb42, 0x99aa, 0xcc42, 0xaabb, 0xdd42, 0xbbcc, 0xdd42, 0xcccd, 0xee42, 0x4ecd, 0x5002, 0x42aa, 0x502a, 0xf500, 0x4444, 0x5544, 0x00cb, 0xff00, 0x004d, 0xff00, 0x54cc, 0xbba4, 0x7644, 0xba45, 0x7766, 0x5a47, 0x9400, 0x57ff, 0xaabb, 0xc349, 0xa400, 0xa5ff, 0x4ddd, 0x7349, 0xa400, 0x9fd5, 0x0043, 0x80f0, 0x34ed, 0x5403, 0x4255, 0x2b55, 0xbf00, 0xffaa, 0xb443, 0xc643, 0x0000, 0x54d9, 0x7546, 0x4000, 0xf065, 0xdca4, 0x5404, 0xa005, 0xa055, 0xf05a, 0xf4aa, 0xfaaf, 0x00ed, 0xf0f0, 0xeeee, 0xa944, 0x4acb, 0x4000, 0x0bfa, 0xc49a, 0x9001, 0xa72a, 0xa79a, 0xaa44, 0x449d, 0xadc4, 0x5000, 0x5c3a, 0xddee, 0xcddd, 0x49ab, 0xe401, 0x40ff, 0x0055, 0x4acb, 0x4001, 0x4002, 0x002f, 0xb943, 0x5001, 0x0055, 0x9fa9, 0xcbba, 0x44ce, 0xdccc, 0x44be, 0xb49c, 0x0000, 0xbfa4, 0xe3a4, 0x4003, 0xca80, 0xcaaa, 0xcaaa, 0xa00a, 0xee43, 0xa24e, 0x9001, 0x4df5, 0x03f1, 0xcde4, 0x5403, 0x5c95, 0xaca5, 0xacaa, 0xaaea, 0x884a, 0xdeee, 0x84ac, 0xeeee, 0x84cd, 0xeeee, 0x84cd, 0x74cd, 0x0000, 0x00e4, 0x74ac, 0xe401, 0xf900, 0xaaaa, 0xf478, 0x4002, 0x0095, 0x0095, 0x4095, 0x0047, 0x0808, 0x6347, 0x9001, 0xa400, 0xa555, 0xa864, 0x1400, 0x002a, 0xa444, 0xdca4, 0x00de, 0x1000, 0xeeee, 0x00cd, 0x0100, 0x4cda, 0x9400, 0xff2a, 0xca44, 0xfedc, 0xa400, 0x55aa, 0x004c, 0xff00, 0x94ab, 0x0007, 0x0090, 0x0090, 0x1090, 0x44b4, 0x11b4, 0x44b5, 0x51b5, 0x90b5, 0x4ab3, 0x0002, 0x00e5, 0x00e5, 0x00e5, 0x4abb, 0x3335, 0x4abb, 0x3354, 0x4abb, 0x3349, 0x4abb, 0x354a, 0x9ab4, 0x5401, 0x5655, 0x3555, 0xa4b3, 0x0002, 0x0095, 0x02d5, 0x0255, 0x349b, 0x0001, 0x00f9, 0x00f9, 0xb34a, 0xa400, 0xa4ff, 0xbded, 0x4abb, 0xdecb, 0xdcab, 0x4000, 0x42e0, 0xcba9, 0xbbcd, 0xb944, 0xbcdd, 0x94aa, 0x4acb, 0x1401, 0x12e5, 0x0395, 0x4ab9, 0x5406, 0x971e, 0xdbe7, 0xcec6, 0xcd35, 0x3939, 0x39b1, 0x39b1, 0xa49b, 0x01ab, 0x2080, 0x2080, 0xaf43, 0x0007, 0x40a9, 0x40aa, 0x90aa, 0x90aa, 0xa4aa, 0xa4aa, 0xa4aa, 0xaaaa, 0xfba4, 0xa406, 0xa93f, 0xaa4f, 0xaa4f, 0xaa93, 0xaa93, 0xaaa4, 0xaaa4, 0xeadc, 0x4003, 0x7f80, 0xff01, 0xff05, 0xd117, 0x4cde, 0x9402, 0x502e, 0x500e, 0x5003, 0xab94, 0xa400, 0xa3ca, 0xa4bb, 0xb4ac, 0x94bb, 0xb4ac, 0x6401, 0x90af, 0x909f, 0x9bbb, 0x4acc, 0xbbb9, 0xb4ac, 0x9000, 0xaafe, 0xeed4, 0x9333, 0x3ed4, 0xa400, 0x643f, 0xf433, 0x9ed4, 0xf433, 0x4ed4, 0xf433, 0xce4f, 0xf433, 0xed4f, 0x4333, 0xd4ff, 0x00de, 0x1080, 0xdc4e, 0x0002, 0xc039, 0xb096, 0x556c, 0xa4f9, 0x0001, 0x5589, 0x5529, 0xba4f, 0xffff, 0xbba9, 0xab4f, 0x4003, 0xd0aa, 0xd0aa, 0x55aa, 0xd5f5, 0xa49b, 0x0002, 0xda95, 0xa700, 0xc000, 0xedcb, 0x5402, 0x9501, 0x401b, 0x00fe, 0xedcb, 0x9a4b, 0x2407, 0x2400, 0x2400, 0x9800, 0xd200, 0x7100, 0x6500, 0xd603, 0x00b5, 0xbf4a, 0x9403, 0xa93f, 0xaa7f, 0xaa7f, 0xaa7f, 0xf49b, 0x4000, 0x00fe, 0xf944, 0xaabb, 0x7c49, 0x5001, 0x12aa, 0xf155, 0x0078, 0xc0f0, 0x5648, 0x0002, 0x0040, 0xff90, 0x5517, 0x6354, 0x0001, 0x00a9, 0xaaac, 0x3647, 0xe401, 0x99ff, 0x42ff, 0x3336, 0x3478, 0x5403, 0xaafe, 0x56fa, 0xffe5, 0xffaf, 0x6354, 0x1000, 0x332a, 0x8643, 0x9004, 0xa47d, 0x64bd, 0x69fe, 0x69ff, 0x59ff, 0xcccd, 0x8476, 0x4004, 0xd0aa, 0xf4ff, 0xfeff, 0xa8fa, 0xffe0, 0x5468, 0xe400, 0xa000, 0x3333, 0x2333, 0x0043, 0x8080, 0xb934, 0x5000, 0x0a15, 0x4333, 0x99ab, 0x4344, 0x49ab, 0x4000, 0x00fa, 0x49ab, 0x24b4, 0x4ab3, 0x000b, 0x00e5, 0x00e5, 0x00e5, 0x00e5, 0x00e5, 0x00e5, 0x00e5, 0xb9ea, 0xb9ea, 0xb9ea, 0xb9ea, 0xb9ea, 0xba49, 0x5401, 0x9555, 0xf4bf, 0x349b, 0x0000, 0xfff9, 0x349a, 0xe400, 0xe4ff, 0x4ab3, 0x0000, 0x0039, 0x49ab, 0x4b93, 0x0002, 0x00d9, 0x00ff, 0x00f6, 0x9a4b, 0x0003, 0x0009, 0x0097, 0x0378, 0x0d80, 0xbbbc, 0xb949, 0xbbde, 0x94aa, 0x02ab, 0xa8b0, 0xe050, 0x4080, 0x94ab, 0x0000, 0x0090, 0x94ab, 0x0043, 0xfe00, 0xa9f4, 0x5400, 0x5585, 0xba94, 0xa94f, 0xaf9b, 0x0000, 0x0001, 0x0043, 0x0700, 0xb349, 0x4000, 0xff95, 0xb49a, 0x9400, 0x3fff, 0xf43b, 0x0003, 0x9555, 0xe555, 0xf955, 0xa955, 0x4433, 0x00f4, 0xffce, 0xba4f, 0x4001, 0x9000, 0xe400, 0xeeee, 0xdddd, 0x00ac, 0xff00, 0x4444, 0x4444, 0xacde, 0x8884, 0xacde, 0x8884, 0xacdd, 0x8884, 0xaccd, 0xac74, 0x5401, 0x553a, 0x553e, 0x649a, 0xa400, 0xbaaa, 0x7777, 0x434e, 0x4446, 0x44ea, 0xeed4, 0x00de, 0x0c00, 0xacde, 0x9402, 0xa555, 0xe555, 0xe5a5, 0xaaaa, 0xdd44, 0x00de, 0xff80, 0x00cd, 0xff80, 0xe4ac, 0x5001, 0xa555, 0xfffa, 0xc455, 0xeeed, 0x4533, 0xcca4, 0x6453, 0x0003, 0x00a9, 0x0080, 0x00e0, 0xa8f8, 0x6644, 0x00de, 0xc000, 0xdddc, 0xcddd, 0x00b4, 0xff00, 0xe6c4, 0x5400, 0xf255, 0xccee, 0x4467, 0xeeee, 0x3478, 0x4007, 0x50e5, 0x54e5, 0x55e5, 0x55e5, 0x95f9, 0xaafe, 0x95ff, 0xffff, 0x8453, 0xa401, 0x5000, 0xff00, 0xe748, 0x9007, 0x9000, 0x9000, 0x9000, 0x9000, 0x9000, 0x9000, 0x9000, 0xfdaa, 0xea47, 0x4002, 0x40a9, 0x40ab, 0x40ff, 0xeeed, 0xdc47, 0x4001, 0x40fe, 0x40fe, 0x84dc, 0x5407, 0xffe2, 0xffe2, 0xffe2, 0xffe2, 0xffe2, 0xffe2, 0xffe2, 0xffe2, 0xba34, 0x540e, 0x5255, 0x5255, 0x4b55, 0x4b55, 0x2f55, 0x2f55, 0x2f55, 0xe355, 0x38f8, 0x38fe, 0x8efe, 0x8eff, 0xe3ff, 0xe3ff, 0xe3ff, 0x00ab, 0x0800, 0xab94, 0x0401, 0xae50, 0xaaaa, 0xdccc, 0x00cb, 0x00f0, 0xba34, 0x0000, 0x5500, 0xdcba, 0x444d, 0xeedc, 0xa4cd, 0xdedd, 0xa4bc, 0xe400, 0xaa50, 0x444b, 0x0043, 0x0c1c, 0xca43, 0x9000, 0xd000, 0xaccd, 0xac79, 0x5401, 0x550e, 0x5553, 0xcb54, 0x5401, 0xaa55, 0xffaa, 0xeeee, 0x444c, 0xbb94, 0x9abb, 0xba45, 0x547b, 0x0000, 0x0029, 0x4345, 0x39b4, 0x5400, 0x03f2, 0x734c, 0xa401, 0xa5aa, 0x9faa, 0x3333, 0xbced, 0x1401, 0x52fe, 0x2ff8, 0xbcde, 0xbbba, 0xcded, 0xba44, 0xcedb, 0x9449, 0xddcb, 0x4aa9, 0xdcb9, 0xacca, 0xdb94, 0x9b4a, 0x8403, 0x12aa, 0x4aaa, 0x2a08, 0x2a41, 0x4a94, 0xbbbc, 0xa44a, 0xbbcd, 0xbc4a, 0x1400, 0x14fa, 0xba94, 0x0001, 0x6af9, 0xa000, 0xfc4a, 0x0000, 0x2a95, 0x00c4, 0xf8f8, 0xcda4, 0x9000, 0xb5ea, 0x4cbd, 0x0000, 0x9555, 0xba94, 0xe401, 0x01ff, 0xaae4, 0xdc49, 0x1402, 0x552a, 0x552a, 0x552a, 0xaddd, 0x0084, 0xfcf0, 0xf846, 0x9000, 0x4aaa, 0x0048, 0xfd00, 0x7ed4, 0x5001, 0xaaa5, 0x0fff, 0xd478, 0x5003, 0x0059, 0x8052, 0xa040, 0x6aaa, 0x7777, 0x4acd, 0x8888, 0x4cde, 0x6438, 0x0003, 0xe555, 0xb955, 0xb955, 0xbe55, 0x5643, 0x0003, 0x00d9, 0x4099, 0x419a, 0x699a, 0x8776, 0x4685, 0x4687, 0x5003, 0x55d6, 0xd795, 0xbe55, 0xf555, 0xcde4, 0x0005, 0x5955, 0x6255, 0xb255, 0xcd55, 0x265a, 0x94ac, 0x444d, 0x01de, 0xc0f0, 0x1080, 0xc4de, 0x4002, 0xf406, 0xad06, 0x5a01, 0xeeee, 0x0043, 0x0100, 0x8347, 0xa405, 0x90aa, 0x55aa, 0x00aa, 0x0fa9, 0x3fa4, 0xaa90, 0xe453, 0xe400, 0xe900, 0xef43, 0x0004, 0x00d9, 0x00d9, 0x00d9, 0x0069, 0x0069, 0xff45, 0xdd94, 0xaccd, 0xac43, 0xa401, 0x505e, 0x0005, 0x8745, 0x5007, 0x5f90, 0x5f9f, 0x5d9f, 0x559f, 0xd79f, 0xff9f, 0xff9f, 0xaa9f, 0xf347, 0xa405, 0xa400, 0xa400, 0xa400, 0xa400, 0xa400, 0xa400, 0x0047, 0xffe0, 0x64a4, 0x8c46, 0x0005, 0xffd9, 0xffd9, 0xffd9, 0xffd9, 0xffd9, 0xffd9, 0x5666, 0x5544, 0x0148, 0x7030, 0x80e0, 0x8888, 0x49ba, 0x4007, 0x11e0, 0x04e0, 0x10e0, 0x04e0, 0x51e0, 0x45e8, 0xf5fe, 0xe13f, 0x349b, 0x49ab, 0x34ab, 0x49ab, 0x54ab, 0x49ab, 0xe409, 0xe4e0, 0xe9e0, 0xffd0, 0x00df, 0x00f4, 0x0001, 0x0007, 0x002b, 0x56fe, 0xfe00, 0x9bbb, 0xabf4, 0x5004, 0x553a, 0x554a, 0x554a, 0x554a, 0x550e, 0xb949, 0xfff4, 0xaccd, 0xbb94, 0xccdd, 0xba4a, 0xcddd, 0xb49a, 0xdddd, 0x94ac, 0xddde, 0x4acc, 0xcdde, 0x49cc, 0xcdde, 0x49ac, 0xccde, 0x779a, 0x94ab, 0xe40b, 0xe46c, 0xb0e4, 0x90e0, 0xc0a1, 0x4192, 0x038e, 0x0679, 0x00a4, 0x001f, 0x01ea, 0x1e90, 0x6900, 0xbbbc, 0x4abb, 0xbcde, 0x01ab, 0x0408, 0x0408, 0xf4ba, 0x5400, 0x5255, 0x9f4b, 0x0000, 0xbff9, 0x004f, 0xc080, 0xa94f, 0x0000, 0x00e4, 0xba94, 0x4fff, 0xbba9, 0xba4f, 0x4001, 0x40fe, 0xf9fe, 0xa94b, 0x0001, 0xff95, 0x556e, 0x00ab, 0x0080, 0xedcb, 0x4001, 0x5005, 0x00e9, 0xddcc, 0xba4f, 0x0002, 0x50e5, 0xe4ff, 0xf9ff, 0x00ab, 0xc010, 0x34ab, 0x0002, 0x2440, 0x24f9, 0x24f8, 0x349b, 0x4444, 0x34ab, 0x9bba, 0xab34, 0x4001, 0x03aa, 0x0eaa, 0x3f4b, 0x0003, 0xff90, 0x7fa5, 0x9faa, 0xa7aa, 0x004f, 0x0810, 0xb94f, 0x9000, 0xd000, 0xffff, 0xba4f, 0xb34a, 0x940e, 0x43da, 0x3fd9, 0xffd4, 0xffd3, 0xffd3, 0x33d3, 0x0fd3, 0xa4d0, 0xa4aa, 0xa4aa, 0xa4aa, 0xa4aa, 0xa4aa, 0xa4aa, 0x94aa, 0x0043, 0x0800, 0xff43, 0x9001, 0x9000, 0x4000, 0x3333, 0x004b, 0x0300, 0xb49a, 0x2400, 0x8fff, 0xbbba, 0xabbc, 0xbb94, 0xbbde, 0xba4a, 0xbcdd, 0xa4ab, 0xcdcb, 0xa49b, 0x9007, 0xbfc0, 0xbf30, 0xbfc0, 0xab30, 0xaec0, 0x19b0, 0x3b60, 0x0e27, 0x004f, 0x8000, 0x3b4f, 0x0002, 0x0090, 0x05a4, 0x57a4, 0xa934, 0x0000, 0xff21, 0x9d43, 0x5400, 0x55a9, 0xab94, 0x4000, 0x3aaa, 0x00cb, 0x7800, 0xbbbb, 0xeedc, 0xbba4, 0xecbb, 0x444a, 0xcbba, 0x9aad, 0x3a94, 0x9000, 0x03ff, 0x93f4, 0x0001, 0x0554, 0x00aa, 0xa934, 0x5000, 0x0ff8, 0x34ab, 0xe403, 0xe4ff, 0xe4ff, 0xe4ff, 0xa4ff, 0x3333, 0x94ab, 0xab34, 0x5400, 0x54ce, 0xb4ab, 0x3349, 0x0043, 0x80c0, 0xab43, 0x0006, 0x0090, 0x0190, 0x0090, 0x0001, 0x0007, 0x0007, 0x0007, 0x004b, 0x8080, 0x34ab, 0x0006, 0x0490, 0x4091, 0x1094, 0x4495, 0x1095, 0xff95, 0xffbf, 0xff43, 0x9003, 0xa400, 0xa900, 0xa900, 0xaa40, 0x4433, 0x004f, 0x0030, 0xab4f, 0xa406, 0xa900, 0xaa40, 0xaa90, 0xaa90, 0xaaa4, 0xaaa4, 0xaaad, 0xedcb, 0xe400, 0x800b, 0xbdee, 0xbba4, 0xcddc, 0xa444, 0xdcbb, 0x4444, 0xcba4, 0xba94, 0x4000, 0x80d2, 0xb4ac, 0xa402, 0x9019, 0xff59, 0xffa7, 0x4abb, 0xabb9, 0xabbc, 0x4ba4, 0xbbcd, 0x4a4a, 0xbcdc, 0x49bb, 0xcdcb, 0x94bb, 0xccb9, 0xfa4b, 0x9001, 0xfd40, 0x5500, 0xaba9, 0x4494, 0x00b4, 0x0f00, 0xedcc, 0xa494, 0xac4b, 0x0000, 0xffb9, 0xeed4, 0x9ba4, 0xa401, 0x00aa, 0x55a4, 0xac49, 0x5400, 0x3fea, 0xa9dc, 0x1401, 0x5480, 0x5495, 0xcead, 0x4000, 0xc02a, 0xff43, 0x4003, 0x90aa, 0x90aa, 0xa4aa, 0xa4aa, 0x004f, 0x1818, 0xb94f, 0x9001, 0xd001, 0xff90, 0xba4f, 0xe402, 0xf9ff, 0xfdff, 0xfeff, 0x94ab, 0x0007, 0x19e4, 0x0279, 0x019e, 0x0097, 0x006d, 0x006c, 0x0018, 0x0018, 0x34ab, 0x9004, 0x40fa, 0x00fa, 0x00f8, 0x00e4, 0x00e0, 0xa49b, 0x9001, 0x8000, 0xbc00, 0x0043, 0x8080, 0x3333, 0xcdde, 0xb4ac, 0xcdde, 0xa49c, 0xccde, 0x454a, 0xaccd, 0xac74, 0x1400, 0x550e, 0x7644, 0x7777, 0x00b4, 0x7f00, 0xa49b, 0xe405, 0x9009, 0x701b, 0x00a6, 0x0297, 0x0e00, 0xda00, 0xbbbb, 0x4436, 0xaaa9, 0xd4ff, 0xedc4, 0xde4f, 0x9000, 0x41d7, 0xd34e, 0x4004, 0x0156, 0xd6aa, 0x6aaa, 0xc0aa, 0x7f0d, 0xeeed, 0x00e4, 0xfff8, 0x4ced, 0x5000, 0xaf80, 0x43ac, 0x4000, 0xfffa, 0xd443, 0xbbcc, 0xb423, 0x0000, 0x0019, 0x34ab, 0x9004, 0x94e4, 0x95e4, 0x95e4, 0x95e4, 0x95a4, 0x94ab, 0xe401, 0xe495, 0x6495, 0x0043, 0x1010, 0xf493, 0x0000, 0x0009, 0x02ab, 0x8420, 0xa4d0, 0xe850, 0x9a4b, 0x0002, 0x0095, 0x0d7a, 0xd600, 0xbbbc, 0x4abb, 0xcddd, 0x01ab, 0x0008, 0x0804, 0xa4b9, 0x5401, 0x5e55, 0x5555, 0xaf4b, 0x900c, 0x9400, 0x6940, 0xaa90, 0xaaa4, 0xaaa4, 0xaaa4, 0xaa90, 0x06aa, 0x06aa, 0x0655, 0x55aa, 0xc36a, 0x00da, 0xba4f, 0xa4cb, 0x4000, 0x400e, 0xff43, 0x0003, 0x0050, 0x00a4, 0x00a9, 0x5054, 0x00f4, 0xf7ce, 0xa94f, 0xb94f, 0x0000, 0x40f9, 0x4ab9, 0x5407, 0x7a9a, 0x7aa6, 0x7aa9, 0x7a66, 0x7a5a, 0x7aa6, 0x7a59, 0xffe5, 0xb34a, 0x4405, 0x44aa, 0x34aa, 0x34a9, 0xf4a9, 0xf4a9, 0xf4a4, 0x334a, 0x9444, 0x334b, 0x0043, 0x8080, 0xdcb4, 0x4bbc, 0xca49, 0xbbcd, 0xb4ac, 0x6400, 0x90f0, 0xbbcb, 0x9ccd, 0xbbb4, 0xcccd, 0xbba4, 0xccdd, 0xbb49, 0xccdd, 0xba4c, 0xe400, 0xfdb6, 0x9ba4, 0xe405, 0xe4a8, 0xe4a8, 0xe4a8, 0xe4a8, 0xe1a8, 0x91a8, 0xbba4, 0xad43, 0x5400, 0x74a9, 0xddda, 0xcd43, 0xdddc, 0xed43, 0xe401, 0xe4ff, 0xe5ff, 0xeeee, 0xcd4f, 0xeeee, 0x4d4f, 0xeeec, 0x94ad, 0x9000, 0x90aa, 0xa944, 0x4acd, 0x9000, 0x406f, 0xdcaa, 0x01de, 0xc0f0, 0x1080, 0xab43, 0x0004, 0x4005, 0x401e, 0x401e, 0x401e, 0x411e, 0x34ab, 0x4349, 0x34ab, 0xe401, 0xe4a0, 0xaaff, 0x9af4, 0x0000, 0xaa81, 0xab94, 0xa400, 0xabaa, 0x943b, 0x0001, 0x5655, 0xab55, 0x49a3, 0x0000, 0x3f95, 0xbbbb, 0x49aa, 0x00ab, 0x0080, 0xd24c, 0xa400, 0xa4f6, 0xde42, 0x224c, 0xde42, 0xe24c, 0xa400, 0xa4f6, 0xae42, 0xa401, 0xa407, 0xa405, 0x2245, 0xee42, 0xbccd, 0x34bb, 0xcccd, 0x34bb, 0xccdd, 0x34bb, 0xccdd, 0x34bc, 0xccdd, 0x34bc, 0xcdde, 0x34bc, 0xcdde, 0x24bc, 0xcdde, 0x24bc, 0x0021, 0xfaa8, 0x0032, 0xee88, 0x3333, 0xee41, 0xcdee, 0xee42, 0xcdee, 0xde42, 0xa401, 0xa4fa, 0xb4ea, 0xdeee, 0xdc43, 0xceee, 0xc443, 0xaccc, 0x4743, 0x0384, 0x9fd0, 0x9f9f, 0x9f9f, 0x9f9f, 0x8888, 0x0023, 0xfee0, 0x0012, 0x2080, 0xc433, 0x4ca9, 0xc433, 0x4ca9, 0xc433, 0x4ca9, 0xc422, 0x4ca9, 0x9c42, 0x9001, 0xc06d, 0x0055, 0x3142, 0x4001, 0x0220, 0xa03f, 0x0023, 0xc0e0, 0x6783, 0x0002, 0xe555, 0xe555, 0xe555, 0x7568, 0x0000, 0xc090, 0x4567, 0x5677, 0xf214, 0x4001, 0x9500, 0xa955, 0x0014, 0xfefe, 0x3214, 0x5405, 0x9499, 0x94a9, 0xa5aa, 0xa9ea, 0xfaff, 0x00ff, 0x5444, 0x1222, 0x8641, 0x1222, 0x7841, 0x2223, 0x8841, 0x2333, 0x8641, 0x2333, 0x6412, 0x4123, 0x4000, 0x00e5, 0x1223, 0x0078, 0x0300, 0xf87e, 0x5000, 0x01aa, 0x0087, 0xff1e, 0x5678, 0x4000, 0xe95a, 0x1374, 0x0008, 0x1500, 0x15aa, 0x15aa, 0x15aa, 0x15aa, 0x15aa, 0x15aa, 0x15aa, 0x3aaa, 0xddca, 0x1222, 0xcca4, 0xc412, 0x0001, 0x00a9, 0x0054, 0x94ac, 0x5000, 0xa5aa, 0x49a4, 0x2c14, 0x5004, 0xf528, 0xff28, 0xff28, 0xff28, 0xff28, 0x4cc4, 0x0347, 0x8080, 0x8080, 0x8080, 0x8080, 0x6565, 0x5445, 0x0148, 0x6060, 0x7f63, 0x7548, 0x5008, 0x0005, 0xfea6, 0xfff4, 0xfff4, 0xfff4, 0xfff4, 0xfff4, 0xfff4, 0xfff4, 0x8564, 0x0003, 0x0240, 0xffca, 0xffc0, 0x4155, 0x0148, 0x6060, 0xc0e0, 0xb498, 0x0000, 0x00a9, 0x814b, 0xa401, 0xa4f5, 0xa456, 0x9a41, 0xc14b, 0xa401, 0xa436, 0xa4f6, 0xcd42, 0x214c, 0xdd42, 0xa748, 0x4002, 0x40aa, 0x40aa, 0x45aa, 0x4477, 0x449a, 0x3444, 0xaabb, 0x3499, 0xbbbc, 0x34ab, 0xbbcc, 0x34bb, 0xbc41, 0xabbb, 0xcd41, 0xbbbc, 0xde41, 0xbbcc, 0xee41, 0xbccd, 0xee41, 0xccdd, 0xee41, 0xccde, 0xee41, 0xcdde, 0xee41, 0xcdee, 0x2147, 0x4001, 0x50ee, 0xf5fe, 0x0032, 0xb500, 0xc423, 0x0006, 0xbe55, 0xbe55, 0xbe45, 0xbe40, 0xbe00, 0xbf80, 0xbfe0, 0xc433, 0x4c9c, 0x0043, 0x8000, 0x6543, 0x0000, 0x0094, 0xe664, 0x7643, 0x0000, 0x00f9, 0x8864, 0x6423, 0x4000, 0x40f9, 0x4412, 0x7ac4, 0x5000, 0x0c25, 0x5444, 0x7784, 0x5677, 0x6784, 0x5401, 0x54e5, 0x54e5, 0x5678, 0x9001, 0x9003, 0x9000, 0x0314, 0xfefe, 0xfefe, 0xfefe, 0xfefe, 0x8543, 0x5000, 0xa5e5, 0xe786, 0x5001, 0x5554, 0x555a, 0x87ee, 0x0078, 0x0030, 0x4678, 0x4000, 0xeaaa, 0x7888, 0x2246, 0x7888, 0x2246, 0x7888, 0x1246, 0x7888, 0x8146, 0xa400, 0xa43f, 0x5678, 0x8645, 0x5401, 0x155a, 0xfa15, 0x3478, 0x5004, 0x5495, 0x55e5, 0x55e5, 0x55f9, 0xaafe, 0x7453, 0x0001, 0x0095, 0x00bf, 0x9e43, 0x9000, 0x90f5, 0x43ae, 0x5400, 0x003a, 0xec43, 0x9000, 0x90ff, 0xc43d, 0x0001, 0x00e5, 0x00e5, 0xa433, 0xeadc, 0x5403, 0xfffe, 0xfffc, 0xfd7f, 0xfc17, 0x00cd, 0x1c18, 0xfacd, 0x5000, 0x9456, 0xaaaa, 0x00de, 0xc080, 0xddde, 0x00cd, 0xec08, 0x54ac, 0x0002, 0x5554, 0xaaa9, 0xebfe, 0x64ac, 0x8888, 0x64ac, 0x8888, 0x64ac, 0x7788, 0x64ac, 0x64a7, 0x0001, 0x0039, 0xa00e, 0x0054, 0xfdc0, 0x00de, 0xffc0, 0x4acd, 0x0001, 0x5550, 0xaaa5, 0x44aa, 0x8145, 0xa402, 0xa4f6, 0x64f6, 0x15f5, 0x7685, 0x5400, 0x5556, 0x7788, 0x1456, 0x7788, 0x1456, 0x7788, 0x1456, 0x7788, 0x1456, 0x7788, 0x1456, 0x7788, 0x1456, 0x7788, 0x1456, 0x7788, 0x1456, 0x8e76, 0x6401, 0x9ff6, 0x7dfd, 0x1748, 0x0002, 0x0029, 0xaa97, 0x557f, 0x0012, 0x00fc, 0x5678, 0x0002, 0x0090, 0x0090, 0x94e4, 0x7456, 0xa400, 0x1a83, 0x5444, 0x8886, 0x8641, 0x8877, 0x7842, 0x77ee, 0xe411, 0xccdd, 0xe411, 0xccde, 0xe411, 0xccde, 0xe411, 0xccde, 0xe411, 0xcdde, 0xe411, 0xcdee, 0xe411, 0xcdee, 0xe422, 0xcdee, 0xc14b, 0x4003, 0x43aa, 0x43aa, 0x4faa, 0x4faa, 0x3211, 0x34bc, 0x9002, 0x90ff, 0x80ff, 0xffff, 0x1423, 0x9003, 0x9400, 0xb400, 0xf400, 0xd400, 0x0123, 0x80c0, 0xfc00, 0x1222, 0x1111, 0x0032, 0x80f0, 0x0021, 0xc0fc, 0x3471, 0x0000, 0xff95, 0x2347, 0x4001, 0x40ea, 0x40fa, 0x4721, 0x5403, 0x04ea, 0x00ea, 0x00ea, 0x00ea, 0x0023, 0xf6a0, 0x0012, 0xaa50, 0x1111, 0x0023, 0x7010, 0x4123, 0x0004, 0x0055, 0x015a, 0x015a, 0x156a, 0x0001, 0x93c4, 0x1405, 0x14aa, 0x14aa, 0x172a, 0x154a, 0x154a, 0x1752, 0x9c43, 0x4c9a, 0x44a4, 0x7488, 0xcab4, 0xa400, 0x5c00, 0x99aa, 0xdbc4, 0x9401, 0x5caa, 0x7caa, 0xbbbc, 0xdde4, 0xbbcc, 0xdee4, 0xbccc, 0xa247, 0x9400, 0x9daa, 0x4ba3, 0x0005, 0x0039, 0x003a, 0x003a, 0x003a, 0x003a, 0x003a, 0xe245, 0xa402, 0xa4f6, 0xa4f6, 0xa4f6, 0xed42, 0xd245, 0xa400, 0xa4d6, 0x4741, 0x1145, 0x7841, 0x1145, 0x8841, 0xddee, 0x24bc, 0xddee, 0x24cc, 0xdeee, 0x14cc, 0xdeee, 0x14ac, 0xcddd, 0x514a, 0x9400, 0x9d55, 0x7777, 0x1456, 0x7788, 0x1456, 0x5423, 0x0001, 0x0040, 0x8080, 0x5444, 0x6443, 0x7648, 0x0000, 0x03f9, 0x7843, 0x6677, 0x8843, 0x6788, 0x8843, 0x6788, 0x8842, 0x4678, 0x9000, 0x900f, 0x6785, 0x5401, 0x55e5, 0x55e5, 0x6788, 0xa841, 0x5001, 0x50aa, 0xd0a5, 0x4499, 0xb411, 0x9abb, 0xd411, 0xabbc, 0xd411, 0xbbcc, 0xd411, 0xbbcc, 0xd411, 0xbccd, 0x0148, 0x0606, 0x0706, 0xb84a, 0x5401, 0x43aa, 0x4fa5, 0x4411, 0x4bbb, 0x0121, 0xb370, 0x8010, 0x1111, 0x2212, 0x0032, 0x1f0c, 0xff23, 0x0000, 0x0040, 0x0021, 0xff00, 0x0123, 0x4074, 0x0102, 0xc432, 0x0007, 0x0051, 0x00be, 0x00be, 0x00be, 0x00be, 0x00be, 0x04be, 0x55be, 0x78c4, 0x1407, 0xcaaa, 0xcaaa, 0xcaaa, 0xcaaa, 0xcaaa, 0xcaaa, 0xcaaa, 0xcaa0, 0x0247, 0x8080, 0x8080, 0x8080, 0x8247, 0x0008, 0x4094, 0x7fa9, 0x7f00, 0x7f00, 0x7f00, 0x7f00, 0x7f00, 0x7f00, 0x7f00, 0x7777, 0x8c43, 0x4008, 0x40f6, 0x40f6, 0x40f6, 0x40f6, 0x40f6, 0x40f6, 0x40f6, 0xfdf6, 0x5557, 0xdca4, 0x4ced, 0x5401, 0x0055, 0xaaaa, 0xa444, 0xaedc, 0x9001, 0x55aa, 0xff00, 0xe347, 0x4001, 0x405a, 0x40f6, 0x99a4, 0x9e47, 0x4001, 0x40fe, 0x40aa, 0xeeec, 0xdc47, 0x4000, 0x40fe, 0xdddc, 0x3344, 0x5643, 0x934e, 0x9000, 0x4356, 0xca44, 0x00ed, 0xe7fe, 0xddee, 0xdeed, 0x00cd, 0x9010, 0x3748, 0x0012, 0x0090, 0x0090, 0x0090, 0x0090, 0x0090, 0x0190, 0x1590, 0xaa90, 0xaaf6, 0xaaf6, 0xaaf6, 0xaaf6, 0xaaf6, 0xaaf6, 0x5af5, 0x5fff, 0xff01, 0xff17, 0xff5f, 0xca43, 0x9000, 0xd000, 0xed43, 0x0001, 0x0090, 0x00d0, 0xe433, 0x0048, 0x0c0c, 0xba84, 0x0401, 0x0255, 0x2b55, 0x8884, 0xabcc, 0x844a, 0xbcdd, 0x435b, 0xcdee, 0xa34b, 0xa401, 0xa9c7, 0xa701, 0xdeba, 0x334b, 0xcdeb, 0x334b, 0xbcee, 0x334a, 0xabdd, 0xab34, 0x5402, 0x553a, 0x5543, 0xab3c, 0xb94a, 0x2408, 0x53f1, 0x0f06, 0xff55, 0xff00, 0xfff2, 0xff3f, 0x0043, 0x5514, 0x00f1, 0xceba, 0xa401, 0xfad5, 0x5fff, 0xf347, 0xa407, 0x90aa, 0x90aa, 0x90aa, 0x90aa, 0xa4aa, 0xa9aa, 0x7daa, 0xfdaa, 0xf453, 0x0002, 0x00f9, 0x00a4, 0x0050, 0xeeee, 0x849d, 0xeeee, 0x54cd, 0xeeee, 0x4acd, 0xdeee, 0x4acd, 0xddee, 0xd4ac, 0x9000, 0x943f, 0xacdd, 0xf74a, 0x9000, 0x9540, 0x0178, 0x80c0, 0xc080, 0xe478, 0x0001, 0x5554, 0xffa5, 0xacde, 0x9401, 0xa400, 0xe400, 0xeeee, 0x4acd, 0xdddd, 0x74ac, 0x4acd, 0x9684, 0x5000, 0x5580, 0x5994, 0x9555, 0xa4ac, 0x94ab, 0x4000, 0x00e9, 0x7b54, 0x1000, 0x3caa, 0xbbb9, 0x5777, 0xbba4, 0x7777, 0xba94, 0x7778, 0xa945, 0x9999, 0x4434, 0xacea, 0xdc44, 0xaec4, 0xa400, 0x9c0d, 0xddee, 0xca44, 0xeeee, 0xa455, 0xeedc, 0x4333, 0xda44, 0x0043, 0x00c0, 0xe4cd, 0x4000, 0xaaca, 0x00ed, 0x0f0c, 0x3a4d, 0x0001, 0xaaa9, 0x5557, 0x6544, 0x4666, 0x0184, 0x787c, 0x0761, 0x7648, 0x0008, 0x0054, 0xff69, 0xff41, 0xff41, 0xff41, 0xff41, 0xff40, 0xff40, 0xff40, 0x4acd, 0xe400, 0xfeff, 0x554a, 0x8c34, 0x1405, 0x15f2, 0x15f2, 0x15f2, 0x15f2, 0x15f2, 0x00f2, 0x6854, 0x5000, 0xaa00, 0x7564, 0x8400, 0x49d1, 0x8746, 0xe400, 0xe4c4, 0x8645, 0xe404, 0xf1d3, 0xf9db, 0xf96f, 0xf9ff, 0xbfff, 0x0084, 0xe7f0, 0x6548, 0x9402, 0x3906, 0x0018, 0x4060, 0x0034, 0xfff0, 0xa643, 0x4007, 0x9000, 0x9000, 0x9000, 0xa400, 0xa400, 0xa400, 0x4000, 0xd000, 0xca43, 0x0000, 0x00e4, 0x9c43, 0xe403, 0xe400, 0xe400, 0x9000, 0x4000, 0xd947, 0x4000, 0x00fe, 0x37c4, 0x5405, 0x02aa, 0xf2aa, 0xf2aa, 0xf2aa, 0xf2aa, 0xf2aa, 0x98c4, 0x8404, 0x85aa, 0x85aa, 0x87aa, 0x87aa, 0x8faa, 0x4ac8, 0x0001, 0x0039, 0x003f, 0xf548, 0x9000, 0x9000, 0x0048, 0xc0c0, 0xab48, 0x0000, 0x0050, 0x34ab, 0x9005, 0x90ff, 0x90ff, 0x90ff, 0x90ff, 0x64ff, 0xe4ff, 0x94a3, 0x0000, 0x00b9, 0xfa4b, 0x2406, 0x2400, 0x2400, 0x2400, 0x2400, 0x9800, 0x9200, 0x6100, 0xbbba, 0x0043, 0x0010, 0x5d43, 0x9003, 0x9000, 0x9000, 0x9c00, 0x9700, 0xcf43, 0x0000, 0x00d9, 0x3af4, 0x8400, 0x14ff, 0x4444, 0x7774, 0x0078, 0x00c0, 0x0148, 0x4080, 0xfe20, 0xdca4, 0x8849, 0x8347, 0x9005, 0x44aa, 0x01aa, 0x03a9, 0x0fa4, 0x5590, 0x0095, 0x8457, 0x9000, 0x03ff, 0xcccc, 0xb94a, 0xcccc, 0x94ac, 0x4acd, 0x0000, 0x00e4, 0x4cdd, 0xacde, 0x5002, 0x40e5, 0x0095, 0x0095, 0xcddd, 0x4abc, 0x5401, 0x55b9, 0x55b9, 0x94ab, 0x6403, 0x6403, 0x9406, 0x940b, 0x9419, 0xb4ac, 0xaabb, 0x00ed, 0x7f00, 0xc4de, 0x0002, 0x0004, 0x0078, 0x01ec, 0x4acc, 0xedcc, 0x4acd, 0x4000, 0x00be, 0xcccc, 0x00de, 0x40f0, 0xc4de, 0x0000, 0x40e4, 0xd4cc, 0x2843, 0x5002, 0x00a5, 0x00a4, 0xff97, 0x4222, 0x0012, 0xfd08, 0x0148, 0xc0c0, 0xc1c0, 0x9842, 0x9400, 0x745a, 0x4484, 0xab41, 0x4449, 0xbb41, 0x49ab, 0x2347, 0x4002, 0x40aa, 0x40bb, 0x40ff, 0x4721, 0x5403, 0x54ea, 0x10ea, 0x10ea, 0x00ea, 0xc432, 0x1404, 0x04be, 0x00be, 0x00be, 0x00be, 0x00be, 0x12c4, 0x1401, 0x14ba, 0x14af, 0xcde4, 0x5406, 0x54f9, 0x54f9, 0x54e9, 0x54e5, 0x54e5, 0x58e5, 0x58e5, 0xacde, 0x0034, 0xfefe, 0x1234, 0x5402, 0x9499, 0xa4aa, 0xe8ae, 0x2221, 0x0014, 0xfefe, 0xad43, 0x0002, 0x0090, 0x00d0, 0x0050, 0x8743, 0x9003, 0xd000, 0xd000, 0xd000, 0xd000, 0xdeee, 0x334c, 0xceee, 0xc34a, 0xa400, 0xa53f, 0x4444, 0x3345, 0x6777, 0x3345, 0x7888, 0x3346, 0x7888, 0x3346, 0x7888, 0x2346, 0x8347, 0x9008, 0x55aa, 0x00aa, 0x0fa9, 0xffa4, 0xff90, 0xff90, 0xff40, 0xaa40, 0xaa56, 0x93e4, 0x5400, 0xfc2a, 0xe643, 0x0005, 0x0090, 0x0090, 0x0090, 0x00a4, 0x05a4, 0x5fa4, 0x6643, 0xeeec, 0x0084, 0xfff0, 0xa648, 0x4001, 0x5501, 0x5556, 0xca44, 0x9ded, 0x00de, 0x8080, 0xeeee, 0xdeee, 0x6748, 0x8403, 0x01aa, 0x5555, 0x03a0, 0x0d00, 0x6498, 0x0000, 0x0039, 0x864c, 0x8888, 0x649c, 0x5468, 0x0003, 0x9019, 0xc009, 0x4009, 0x0006, 0x8864, 0x0048, 0xfc10, 0xca44, 0xdca4, 0xeeee, 0x6548, 0x4001, 0x951e, 0xea73, 0x0068, 0x0008, 0x4444, 0x4444, 0xedca, 0x00ed, 0xfffe, 0x4433, 0x884c, 0xca43, 0xa84c, 0xa400, 0xa40d, 0x89c4, 0xa402, 0xa4f1, 0xa4f1, 0xa4f1, 0x8849, 0xcc43, 0x584a, 0xa403, 0xdaaa, 0xdaaa, 0xdaaa, 0x5aaa, 0xcccc, 0x004a, 0xff00, 0xa846, 0x0401, 0xa550, 0xffaa, 0x0064, 0x7e00, 0x0184, 0x7e7e, 0xf07e, 0xc784, 0x0000, 0x1555, 0xdc47, 0x4000, 0x40fe, 0xddca, 0xca47, 0x4000, 0x40f9, 0x7a43, 0xa403, 0x507f, 0x007f, 0x007f, 0x007f, 0x4acd, 0x4002, 0x5055, 0xa5aa, 0xfaff, 0xc3a4, 0x1403, 0x3ca0, 0x3caa, 0x3caa, 0x3caa, 0x4aa4, 0x7484, 0xcab4, 0x9400, 0x7c02, 0xaabb, 0xccd4, 0xbbbc, 0xcde4, 0xbbcc, 0xdee4, 0xbbcd, 0xeee4, 0xbccd, 0xeee4, 0xbcdd, 0x0334, 0xfefc, 0xfefe, 0xfefe, 0xfefe, 0xde43, 0x0006, 0x0090, 0x0090, 0x0090, 0x0090, 0x0090, 0x0090, 0x0090, 0xe433, 0xcdee, 0x334b, 0xcdee, 0x334b, 0xcdee, 0x334b, 0xcdee, 0x334b, 0xcdee, 0x334c, 0xcdee, 0x334c, 0xddee, 0x334c, 0xdeee, 0x934c, 0xa400, 0xaaa9, 0xa944, 0xbbbb, 0x0043, 0x10fc, 0xb473, 0x0000, 0x0009, 0xbbbb, 0x44ab, 0x0034, 0x7fc0, 0x5643, 0x0002, 0x0040, 0x5590, 0x5adf, 0x5466, 0x5748, 0x5006, 0x5090, 0x5090, 0x5090, 0x5590, 0x1590, 0x5590, 0xff75, 0x4655, 0x0247, 0x8080, 0x8080, 0x8080, 0x00cb, 0xff00, 0x74cd, 0x0001, 0x0040, 0xaaa0, 0xb874, 0x5000, 0xffaa, 0x7c34, 0x5404, 0x542a, 0x53c2, 0x53fc, 0x43ff, 0x3cff, 0xf478, 0x9400, 0x6055, 0x0037, 0xfff0, 0x5643, 0x4001, 0x9540, 0x9f54, 0x7654, 0x1400, 0x89ca, 0x5468, 0x2401, 0x2465, 0xb019, 0xc6b4, 0x5000, 0x5255, 0xcbbb, 0xc476, 0xcccc, 0x4887, 0xddd4, 0x0048, 0x00e0, 0x0548, 0x0001, 0x0004, 0xff19, 0x0000
};

// [D_08BFBC4C] D_08BFBE68 Huffman Window 1
u32 D_08bfbe68_window1[] = {
	0xe5b68a84, 0xc86ff101, 0xc4b3f802, 0xe81c00f4, 0x790001bf, 0xc90000de, 0xd001bbff, 0x832001ff, 0xd87267ba, 0x00f69f80, 0x223f608f, 0x7cee3801, 0xb0df2337, 0xc18026f9, 0xdf78ca1c, 0x005a0da0, 0x661f7f84, 0x1414bc7b, 0x78f88000, 0xf806e787, 0x077c9e03, 0xffa4800c, 0xe760c807, 0x0423bb8f, 0x9f350458, 0x83000031, 0x0e7c0340, 0x7e563e80, 0xc0000011, 0xa037c559, 0x1bc06bbf, 0x0003e000, 0x43bf9d00, 0x420005c1, 0x93001602, 0xbca2b57f, 0xa00f8081, 0x02003107, 0xfffffb9e, 0xa66a199e, 0x08edf075, 0x628c99c0, 0x027bf4c4, 0xcc800060, 0x00183ffa
};

// [D_08BFBD00] D_08BFBE68 Huffman Window 2
u32 D_08bfbe68_window2[] = {
	0xa77f81fe, 0x354d4df5, 0xc1cee787, 0xffdee7bf, 0xdfeffb37, 0x6bfeff7f, 0xdaff32d7, 0xfd7ebdff, 0xdaddbb7a, 0xfbf7dafb, 0xfddeafba, 0xd6ec4efd, 0xfdbf5f67, 0x1c7df32f, 0xff64bfff, 0xfabf7fdc, 0xbf3bdfeb, 0x975fafcd, 0xf79adfcb, 0x00000002
};

// [D_08BFBD50] D_08BFBE68 Huffman
struct Huffman D_08bfbe68_huffman[] = {
	/* Data */			D_08bfbe68_huffmandata,
	/* Size */			0x122f,
	/* Count */			0x595,
	/* Window 1 */		D_08bfbe68_window1,
	/* Window 2 */		D_08bfbe68_window2,
};

// [D_08BFBD60] D_08BFBE68 RLE Data
u8 D_08bfbe68_rledata[] = {
	0x1, 0x1e, 0x4, 0xd, 0x3, 0xd, 0x21, 0x8, 0x11, 0x6, 0x4, 0xa, 0x3, 0xb, 0x10, 0x4, 0x8, 0x11, 0x8, 0xf, 0x51, 0xd, 0x13, 0x4, 0x7, 0x4, 0x46, 0xa, 0x15, 0xb, 0x1, 0xa, 0x16, 0xe, 0x22, 0x6, 0x29, 0x10, 0x1c, 0x3, 0x8, 0x9, 0x14, 0xc, 0x2a, 0x6, 0x4a, 0x4, 0x38, 0xa, 0x2, 0xe, 0xd, 0x3, 0xa, 0x7, 0x2, 0x18, 0x37, 0x4, 0x2, 0x3, 0x48, 0xc, 0x3e, 0x3, 0x54, 0x4, 0x1, 0x3, 0x28, 0xc, 0x31, 0x18, 0x5a, 0x5, 0xc9, 0x3, 0x28, 0x4, 0xb, 0x5, 0x1, 0xa, 0x6, 0x4, 0xc, 0x5, 0x1, 0x3, 0x28, 0x4, 0x3f, 0xb, 0x53, 0xd, 0xd, 0x3, 0x1b, 0x3, 0x53, 0x3, 0x37, 0x3, 0x3, 0x3, 0x43, 0x9, 0x3b, 0x5, 0x21, 0x7, 0x39, 0x3, 0x13, 0x5, 0x2e, 0x7, 0x2, 0xc, 0x4a, 0x7, 0x41, 0xb, 0x5, 0xb, 0x15, 0xe, 0x2, 0x8, 0x8, 0x7, 0x92, 0x6, 0x25, 0xb, 0x2d, 0x3, 0x11, 0xd, 0x13, 0x9, 0x7, 0x4, 0xc, 0x5, 0x11, 0x5, 0x25, 0xa, 0x6, 0x4, 0x2c, 0xc, 0x54, 0x3, 0x8, 0x4, 0x1, 0x3, 0x30, 0x3, 0x5, 0x4, 0x21, 0x8, 0x1e, 0x9, 0x59, 0x7, 0x2d, 0x3, 0x17, 0x9, 0xb, 0x5, 0x3a, 0x6, 0xb1, 0x6, 0x13, 0x6, 0x64, 0xc, 0x9, 0x7, 0x19, 0x7, 0x1, 0x3, 0xe, 0xf, 0x50, 0x6, 0x3f, 0xb, 0x2, 0xd, 0x4, 0xd, 0x4, 0xb, 0x7, 0x17, 0x3, 0xd, 0x3, 0xe, 0x57, 0x4, 0x1, 0x3, 0x5, 0x7, 0x1, 0x3, 0x7d, 0x3, 0x2, 0x3, 0x1b, 0x3, 0xa, 0x5, 0x1b, 0x4, 0x37, 0x4, 0x13, 0x3, 0x24, 0xc, 0x13, 0x3, 0x4a, 0x6, 0x2b, 0xd, 0x57, 0x3, 0xf, 0x4, 0x11, 0x4, 0x81, 0xa, 0x66, 0x8, 0x10, 0x7, 0x72, 0xe, 0x5, 0x7, 0x9, 0x16, 0x30, 0x5, 0x31, 0x0, 0xd0, 0x0, 0x0, 0x0
};

// [D_08BFBE68] D_08BFBE68 Graphics
struct CompressedGraphics D_08bfbe68 = {
	/* Huffman Data */		D_08bfbe68_huffman,
	/* RLE Data */			D_08bfbe68_rledata,
	/* RLE Size */			0x104,
	/* RLE Offset */		0x1800,
	/* Double Compressed */	TRUE,
};

u8 D_08bfbe78[4] = {
	0x70, 0x00, 0x8C, 0x00
};

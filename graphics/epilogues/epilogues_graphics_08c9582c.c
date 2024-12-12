#include "global.h"
#include "graphics.h"

// // //  D_08C9582C  // // //

// [D_08C94074] D_08C9582C Huffman Data
u16 D_08c9582c_huffmandata[] = {
	0x0000, 0x7fde, 0x5005, 0x80f9, 0x80aa, 0x80ff, 0x80ff, 0x80ff, 0x28aa, 0x37fe, 0xa407, 0x657d, 0x0100, 0x0600, 0x1a00, 0x1a00, 0x0400, 0x1900, 0x6a50, 0x77fe, 0x00f7, 0x1010, 0xffd7, 0x000b, 0x5a55, 0x6055, 0x8055, 0x0055, 0x8056, 0xaa55, 0x005a, 0x0058, 0x0058, 0xaa58, 0x809a, 0x8a25, 0x77fd, 0x00ed, 0xfffe, 0x00ef, 0xfefe, 0x7def, 0x5407, 0xa155, 0x0c15, 0xffc5, 0xffc5, 0xc0c5, 0x3f15, 0x3315, 0x3315, 0x06ed, 0x70fe, 0xf0f0, 0xcf03, 0x0fef, 0xf07c, 0xf3f0, 0x8e07, 0x7fde, 0x000f, 0x0005, 0x5556, 0x555b, 0x55af, 0x56ff, 0x5bff, 0x5bff, 0x56aa, 0x55bf, 0x5595, 0x55e9, 0x95fe, 0x95ff, 0x55ff, 0x55aa, 0x55f9, 0xd53f, 0xa400, 0xa53f, 0x1fdd, 0x5533, 0x1fdd, 0x5533, 0xfddd, 0x5331, 0x31fd, 0x4001, 0x00fe, 0x00e9, 0xd71f, 0x5407, 0xfcaa, 0xff00, 0xff2a, 0xff20, 0xff20, 0xfc00, 0xfcaa, 0xfcaa, 0x01ed, 0xf8e0, 0xfcfc, 0xeeed, 0xeeee, 0xdf35, 0x9005, 0x80ff, 0x40ff, 0x00fe, 0x00fe, 0x00f9, 0x00f9, 0x5ef3, 0xa400, 0xa4ff, 0x00e5, 0x60f0, 0xd135, 0x0001, 0x0055, 0x056a, 0xf7fd, 0xa401, 0x50aa, 0xa555, 0x7777, 0x00fd, 0x0100, 0xf7df, 0x5402, 0x1405, 0x84a0, 0xa1aa, 0x00f7, 0x1010, 0xffd7, 0x000a, 0x8095, 0xaaa5, 0x0025, 0x0025, 0xaaa5, 0x8095, 0x8095, 0x8095, 0x098a, 0xa98a, 0x2580, 0x017f, 0xbf80, 0xdf1f, 0x357f, 0x0001, 0xea50, 0xaa13, 0xe7f5, 0x6401, 0xa4f0, 0x5550, 0x7f5f, 0x00f7, 0x4060, 0x3df7, 0x0002, 0x5550, 0x5aa4, 0xf5a9, 0x53f7, 0x5401, 0x00f9, 0x0054, 0x00de, 0x31f0, 0x3fde, 0x0001, 0x5655, 0x5b55, 0x3f5d, 0x0006, 0x0009, 0x002d, 0x0025, 0x0a80, 0x2fe0, 0xb560, 0xd578, 0x553f, 0x0035, 0x0010, 0xfde5, 0x1401, 0x5500, 0xeaaa, 0x53fd, 0x0001, 0x0090, 0x00e4, 0x553f, 0x02ed, 0xef80, 0x080f, 0x0e7c, 0x7fed, 0x4007, 0x0002, 0x000b, 0x00af, 0x02ff, 0x02ff, 0x02ea, 0x00bf, 0x00ba, 0x0239, 0xa0a0, 0x0aa0, 0x0a0a, 0xe47f, 0x0401, 0x14c2, 0x14fc, 0x3f9e, 0x0004, 0x0029, 0x002d, 0x002d, 0x0025, 0x0025, 0x0439, 0x1fa0, 0x0a0a, 0xfea6, 0xfafc, 0x0a0a, 0x9ef3, 0xa406, 0xa7aa, 0x579a, 0x7355, 0x93aa, 0x67a5, 0x57a9, 0x7f5a, 0x99ff, 0x0293, 0x5f00, 0xf55f, 0xf5f5, 0x33fe, 0xfff3, 0x00fe, 0xe3fe, 0xf9fe, 0x0000, 0x00a4, 0x9fee, 0x00fe, 0xbf80, 0x31f9, 0x0009, 0xbe54, 0x5a01, 0x0500, 0x0f00, 0xaa00, 0xa55a, 0x9006, 0x9006, 0x9006, 0x9f06, 0x33f1, 0x0293, 0x5f5c, 0xf55f, 0xf5f5, 0x719f, 0x5406, 0x54a8, 0x54a8, 0x53a1, 0x5305, 0x4f55, 0x4f55, 0x4f55, 0x3999, 0xe4f7, 0x0006, 0x4419, 0x551a, 0x401a, 0x401a, 0x551a, 0x7f1a, 0x7f5a, 0x79f4, 0x5007, 0xff6a, 0xfdda, 0x55f6, 0x41f6, 0x41f6, 0x41fd, 0x41fd, 0x407d, 0x00ef, 0x1c7c, 0x3e9f, 0x8401, 0x8c2a, 0x0c2a, 0xf34f, 0x4000, 0x5548, 0x00f3, 0x00f8, 0x4ef9, 0x9002, 0x40aa, 0x4156, 0x57aa, 0xeeee, 0x00f4, 0x01f0, 0x00f3, 0x00fe, 0x0039, 0xa0a0, 0xff39, 0x0001, 0x4444, 0x4480, 0xf999, 0x0039, 0x808a, 0x9999, 0x3999, 0x00e9, 0x1818, 0xf2e9, 0x9400, 0x9416, 0x9ee2, 0x00e9, 0x1818, 0x43f9, 0x0007, 0x8540, 0x8800, 0x8810, 0x0075, 0x007f, 0x009f, 0x00a5, 0x00aa, 0x91f3, 0x9001, 0x5006, 0x0005, 0x37f9, 0x0002, 0xfc19, 0xff1a, 0xfc1a, 0x39af, 0x1001, 0x50ea, 0x4ca0, 0x9fea, 0xe401, 0xe42e, 0xe56e, 0xeeee, 0xf44f, 0x02fe, 0x80e0, 0x0681, 0x0202, 0xeefe, 0xeeee, 0x0293, 0x5058, 0xf458, 0xf5f5, 0x03f7, 0x0102, 0x0201, 0x84fc, 0x8484, 0xf7f1, 0x5000, 0x50aa, 0x00f7, 0x60f0, 0xf79f, 0x1401, 0x14aa, 0x0000, 0x7777, 0x00fd, 0xf800, 0xaffd, 0x00fa, 0x9010, 0x7dfa, 0x4002, 0xd5d6, 0xffda, 0xffda, 0x03df, 0xfefe, 0xfefe, 0xfefe, 0xfefe, 0x017f, 0xfd06, 0xfefd, 0xf97f, 0x1000, 0x154a, 0xf99f, 0x047f, 0x3f00, 0x3f3f, 0x80bf, 0xff24, 0x0f00, 0xf7f9, 0x9000, 0x916a, 0x05f7, 0x08f8, 0xff0f, 0x8080, 0xff80, 0x0909, 0x1019, 0xffd7, 0x0009, 0x0009, 0x0025, 0x0295, 0xa955, 0x2555, 0x2555, 0x8895, 0x8895, 0x8095, 0x8095, 0xfdfd, 0x01f7, 0x08d8, 0xf909, 0x57df, 0x5008, 0x52aa, 0x52aa, 0x52aa, 0x5000, 0x152a, 0x852a, 0x8520, 0xaa0a, 0x2a32, 0x13f7, 0x6407, 0x6940, 0x7a40, 0x7f40, 0x7f00, 0x5f00, 0x5000, 0x6555, 0x5900, 0x01f7, 0xf0f6, 0xb00f, 0xff7f, 0x00de, 0x7f00, 0x3fed, 0x0002, 0x0040, 0x0280, 0x2be8, 0xe53f, 0x9400, 0xff1a, 0xff7d, 0x0007, 0x0255, 0x02aa, 0x0095, 0x009a, 0x009a, 0x0095, 0x0095, 0x0095, 0x03f7, 0xe720, 0x4747, 0x4047, 0xcc70, 0xdf35, 0x0000, 0x50f9, 0x3df1, 0xa402, 0xa40f, 0xa900, 0xaa40, 0xf111, 0x00fd, 0x1070, 0x531d, 0x0003, 0xf955, 0xf955, 0xbe55, 0x6955, 0x4df1, 0x0007, 0x1501, 0x7f46, 0x01aa, 0x01aa, 0x01aa, 0x06aa, 0x06aa, 0x5aaa, 0xa7fd, 0x0001, 0x7fd9, 0x9f6a, 0x017f, 0xdcce, 0x5bdf, 0x497f, 0x4006, 0x5081, 0x0a0c, 0x4a14, 0x4a51, 0x0a14, 0x4a54, 0x0854, 0x7f77, 0x04f9, 0xfcfe, 0x0101, 0x0101, 0x0101, 0x0101, 0x9f35, 0x4004, 0x40fe, 0x40fe, 0x00f9, 0x00f9, 0x54f9, 0x19f3, 0xa401, 0xa43c, 0xa90f, 0xf135, 0x0004, 0x0140, 0x1590, 0x5690, 0x56a0, 0x6aa9, 0x319f, 0x8400, 0x84ff, 0x5331, 0x1f9f, 0x5531, 0x1f9f, 0x5531, 0x1f9f, 0x5533, 0x1f99, 0x5331, 0x31f9, 0x4000, 0x40fa, 0xef71, 0x0002, 0x5559, 0x595b, 0x595a, 0x27fd, 0xa401, 0x9da6, 0x9da6, 0xffe7, 0x0001, 0x0009, 0x0009, 0x77fe, 0x00f7, 0xa220, 0x2d7f, 0x0001, 0xaa01, 0x0031, 0xe2f7, 0xe400, 0xd0ff, 0x00fe, 0xf970, 0xfeef, 0x06f7, 0x0100, 0x0101, 0x0101, 0xfe84, 0x0202, 0xfe02, 0x8484, 0x5397, 0x0000, 0xfe55, 0x3555, 0x01e5, 0xf070, 0x00e0, 0x0035, 0x073e, 0xdf53, 0x5400, 0xfe55, 0x34fd, 0x4001, 0x4006, 0xd006, 0xddf4, 0x53fd, 0xe403, 0xf901, 0xf900, 0xaa40, 0xaa40, 0xa4fd, 0x9402, 0x55aa, 0xffa9, 0xf5a7, 0x74fa, 0x9003, 0x901f, 0x407f, 0x407f, 0x401f, 0x53df, 0x5406, 0x5255, 0x5255, 0x4b55, 0x4b55, 0x2f55, 0x2f55, 0xbf55, 0xdddf, 0x017f, 0x7760, 0x7575, 0x39f7, 0x4403, 0x0040, 0x0564, 0x0564, 0x0564, 0x13f7, 0x6403, 0x640d, 0x6400, 0x6400, 0x6400, 0x0293, 0x5f58, 0xf55f, 0xf5f5, 0x29e3, 0x4002, 0x6a01, 0xd6a9, 0xd697, 0x9ee2, 0x00e9, 0x1818, 0x5319, 0x0009, 0x4769, 0x676a, 0x6765, 0x5f5f, 0xd3fe, 0x76a5, 0x1d1f, 0x9f45, 0xa9d1, 0x5747, 0x1915, 0x0015, 0x1542, 0x9351, 0x840a, 0xc45a, 0x36aa, 0x4aab, 0x44ab, 0x44ff, 0x44aa, 0x3d2a, 0xff42, 0xaaac, 0xaaf1, 0xffc4, 0x51f2, 0x0001, 0x00e4, 0x5ad0, 0xa52f, 0x8401, 0x83f1, 0x8330, 0xaaf5, 0x35fa, 0x1f95, 0xa401, 0x5542, 0xcc55, 0x152f, 0x5404, 0xdcee, 0xbceb, 0xeceb, 0xe0ab, 0xeeab, 0x3951, 0x5403, 0x5184, 0x3184, 0x3131, 0x2941, 0x0115, 0x04f4, 0x36f1, 0x9351, 0x5421, 0x414a, 0x1284, 0x12c4, 0x92ff, 0xc0ff, 0x153f, 0x404f, 0x3c4c, 0xe87c, 0xc4f3, 0x84af, 0xbc0a, 0xc152, 0x1504, 0x10f1, 0x4fa1, 0x4aa8, 0xcf3a, 0xccea, 0xeeac, 0xabf1, 0xaac4, 0x3f13, 0x3f13, 0xff13, 0xaf13, 0x2b13, 0x4e13, 0x1313, 0x100f, 0x1153, 0x4414, 0x04c4, 0xfccf, 0x0039, 0x0014, 0x0019, 0x2408, 0x9199, 0x9919, 0x0039, 0x0024, 0x3519, 0x5016, 0xa501, 0x5a06, 0xf519, 0x0d0f, 0x16fc, 0x6654, 0x91a9, 0xa555, 0x90fd, 0x4f06, 0x7f5a, 0x009a, 0x5098, 0xa498, 0x5991, 0x0196, 0x0100, 0x46ff, 0x91c1, 0x4006, 0x3d1a, 0xf619, 0xda69, 0x1519, 0x0093, 0xe0f8, 0xf193, 0x4000, 0x5465, 0x9191, 0x0039, 0x0050, 0x3519, 0x0000, 0x5005, 0x9155, 0xf1f3, 0x9001, 0x5006, 0x0005, 0x0019, 0x0600, 0xf951, 0x1400, 0x818a, 0x1519, 0x0093, 0x031a, 0x5319, 0x5002, 0xf4a9, 0x7d87, 0x1f11, 0x13f9, 0x0000, 0xeaa9, 0x33fe, 0x3519, 0x9403, 0x0104, 0x110c, 0x1300, 0x3000, 0x0019, 0x1202, 0xf139, 0x0402, 0x0022, 0x0012, 0x2080, 0x3999, 0x0019, 0x1414, 0xf319, 0x1000, 0x2042, 0x1999, 0x0039, 0x0080, 0x9315, 0x9005, 0xa9d1, 0x7d91, 0x5ff4, 0x47d0, 0x11d0, 0x11f4, 0xf191, 0x5515, 0x22f1, 0x5139, 0x0006, 0xa050, 0xf880, 0xbee2, 0x2eb8, 0x2f2e, 0x8b2e, 0x8b4b, 0x1315, 0x0019, 0x1800, 0x3519, 0x9404, 0x4106, 0x031a, 0xfc59, 0xc159, 0x0659, 0x1151, 0x19ef, 0x0004, 0x5584, 0x0585, 0x50a1, 0x5585, 0x4585, 0x1fee, 0x00fe, 0x8282, 0x3e9f, 0x0403, 0x14a8, 0x3daa, 0xffaa, 0xfd00, 0xeeef, 0xf391, 0xeeee, 0xf915, 0xeeee, 0xf315, 0xeeee, 0x7f51, 0x937f, 0x5400, 0x502a, 0x3339, 0xff2f, 0xf991, 0x3f22, 0x2f19, 0x33f2, 0x22f1, 0x193f, 0x9400, 0xe800, 0x2222, 0x19f2, 0x9315, 0x402d, 0x05aa, 0x1afd, 0x7ffd, 0x7fa4, 0xff90, 0xff91, 0xff41, 0xffff, 0x956a, 0x47aa, 0x1abe, 0x6dfd, 0x7df4, 0xbed0, 0xffd1, 0x69d1, 0x3fd0, 0x5cfc, 0x05f5, 0x5090, 0xa545, 0xfa1a, 0xff6f, 0xadbf, 0xfd56, 0x6f01, 0x6a50, 0xfda4, 0xf4ff, 0xd05f, 0x4507, 0x415a, 0x906a, 0xf41a, 0x7d47, 0x1ad1, 0x07f4, 0x0164, 0x4019, 0x6a1a, 0x5fff, 0x475f, 0x4607, 0x9101, 0xd141, 0xd0ff, 0x0019, 0x2800, 0x5139, 0x0020, 0x02a5, 0x8bfa, 0x82af, 0xe54a, 0xf815, 0xb800, 0xb000, 0x500a, 0x002b, 0x80be, 0xe2e8, 0xbb95, 0x0d40, 0xa800, 0xfe80, 0xabe0, 0x02ba, 0x54bb, 0x002e, 0x002e, 0x0009, 0xbf80, 0xfa5a, 0xf56f, 0x800a, 0xea15, 0xbf82, 0x43e0, 0x0000, 0xaa42, 0xff92, 0xaa54, 0x55aa, 0x0015, 0x0ff0, 0x5913, 0x000c, 0x2a95, 0x5680, 0xfdda, 0x5fe9, 0xa7a7, 0x0761, 0xa1d0, 0x6a75, 0xaa1f, 0x7fa5, 0x55a7, 0x4a07, 0x2987, 0x9933, 0x0091, 0xf0fe, 0xf915, 0x0001, 0x55a9, 0x56a4, 0x1191, 0x0051, 0x619e, 0x9531, 0x5400, 0xfd81, 0x1333, 0x0019, 0x8000, 0x1593, 0x5409, 0xfa01, 0xaf55, 0xf057, 0x00d4, 0xffb5, 0xaa05, 0xff57, 0x005e, 0x773b, 0x7457, 0x0093, 0xffbe, 0x3519, 0x5003, 0xa401, 0x5901, 0x1903, 0x1955, 0x9ffe, 0x1551, 0xffee, 0x9115, 0xf4fe, 0x1391, 0xf4fe, 0x4f13, 0x5000, 0x15be, 0x1f44, 0x9315, 0x51ff, 0x5931, 0xa400, 0x54f1, 0x00fe, 0x0c04, 0xf9fe, 0x4001, 0x4001, 0x4006, 0x004f, 0x7e00, 0x91f3, 0x5400, 0x0015, 0x1931, 0xeeef, 0x5191, 0xeef5, 0x5191, 0x5ef1, 0xa401, 0xa7f3, 0x5d5f, 0x34f5, 0x9000, 0x7fa5, 0xf314, 0x0000, 0xff95, 0x0019, 0x1c00, 0x3519, 0xa402, 0x5916, 0x0669, 0xfd94, 0x1333, 0x0093, 0xfe0e, 0x3519, 0xa415, 0x5965, 0x1950, 0xda00, 0x7615, 0x966a, 0xf395, 0x057f, 0x01c0, 0x4064, 0x9d90, 0x6791, 0x64fc, 0xf004, 0x3c35, 0x01a4, 0x0190, 0x5190, 0xa590, 0x5990, 0xf567, 0x0f67, 0x0367, 0x1acb, 0xc080, 0xc0c0, 0x7cf0, 0x1f7f, 0x0400, 0x0706, 0x0703, 0xfe9e, 0x0302, 0x0101, 0x0fc3, 0x0c08, 0x0f8e, 0x6080, 0x3070, 0xf070, 0x07e0, 0x8701, 0xfeff, 0x8080, 0xe0c0, 0x0302, 0x0303, 0x0f07, 0x3c1e, 0x8080, 0xf8c0, 0xbbcc, 0x00bf, 0xfdfe, 0xfcfb, 0x5004, 0x00a0, 0x00a9, 0x00a4, 0x55a4, 0x40a1, 0x00cb, 0x3010, 0xfcfb, 0x4005, 0x142a, 0x01aa, 0x0068, 0x0060, 0x5580, 0x06a0, 0x10cb, 0x8180, 0x0181, 0x0301, 0x0303, 0x0c08, 0x0707, 0x001e, 0x1810, 0x7818, 0xfefc, 0x003f, 0x0101, 0x0101, 0x0101, 0x0107, 0x0f03, 0xfeff, 0x0b1b, 0xc020, 0x1020, 0x0911, 0x0a0a, 0x1010, 0x4020, 0x4c40, 0x5053, 0x211a, 0x4020, 0x0244, 0xc102, 0x7fb1, 0x5400, 0x51e5, 0x7fbb, 0xeb1b, 0x17fb, 0x9003, 0x9030, 0x5033, 0x9033, 0x440c, 0xfe1b, 0x2405, 0x00f0, 0x0304, 0x0720, 0x0710, 0x1310, 0x1304, 0x001b, 0x8a82, 0xff1b, 0x4400, 0x9021, 0x02fb, 0x02fe, 0x0202, 0x84fe, 0xbfbb, 0xf1b1, 0x031b, 0x8c54, 0x0a0a, 0x1109, 0x4222, 0x00bf, 0x7760, 0x91fb, 0x4408, 0x4440, 0x4442, 0x6048, 0x6248, 0x6260, 0x2060, 0x8574, 0x8574, 0x0574, 0xb3f1, 0x6403, 0x64f5, 0x673f, 0x673c, 0x6733, 0x03fb, 0x0ff0, 0x0808, 0x9ff8, 0x9090, 0xf9bf, 0x1000, 0x154a, 0xf99f, 0x02bf, 0x3f00, 0x3f3f, 0x80bf, 0x39fb, 0x1401, 0x0069, 0x556d, 0xffff, 0x011b, 0x0202, 0x2824, 0xbbbb, 0xbbb1, 0x00bf, 0xff24, 0xffff, 0xffff, 0x001b, 0x4040, 0x9f1b, 0x0401, 0x2faa, 0x2e80, 0x00fb, 0x08f8, 0xffff, 0x001b, 0x1404, 0x3f1b, 0x0402, 0x0404, 0x5556, 0x555b, 0x31f5, 0xa404, 0x9caa, 0x9caa, 0x70aa, 0x70aa, 0xc0aa, 0x111f, 0x0153, 0x7f1e, 0x8c10, 0x3f35, 0x0000, 0x1501, 0x00f1, 0x8080, 0x53f1, 0x0000, 0x0090, 0x53f1, 0x11e1, 0x153f, 0xa402, 0xa4ff, 0x553f, 0x553f, 0x1111, 0x00bf, 0xfd06, 0xf1fb, 0x0400, 0x0120, 0x011b, 0x0808, 0x0101, 0xff1b, 0x0402, 0x0008, 0x1402, 0x4002, 0x00fb, 0xfc02, 0xf1fb, 0x1004, 0x1840, 0x1848, 0x5a48, 0x5a08, 0x5508, 0x01b1, 0x7efe, 0xff7f, 0xf4b1, 0x5404, 0x5155, 0xf0fa, 0x33ea, 0x3faa, 0x3fab, 0x14fa, 0xa404, 0x50d5, 0x40d5, 0x40d5, 0xfff5, 0xffa7, 0x444f, 0x00af, 0xff00, 0xe7fa, 0x0003, 0x4005, 0x951a, 0xaa6a, 0x556b, 0xab1f, 0x5003, 0x52a9, 0x12a9, 0xc2aa, 0xfcaa, 0xbbe1, 0xfaaf, 0x7fb1, 0x5400, 0x54e9, 0x7ffb, 0x017f, 0xefc0, 0x807e, 0x347f, 0x0402, 0x2854, 0xa155, 0xa100, 0x513f, 0x0000, 0x1559, 0xf951, 0x8402, 0x84ea, 0x05a0, 0x44c5, 0x44ff, 0x7f15, 0x8401, 0xe1af, 0xe1fb, 0x137f, 0x5400, 0xeeea, 0x0039, 0x0028, 0xf519, 0x0007, 0x4155, 0x969a, 0x9945, 0x9906, 0x0019, 0x0057, 0x0057, 0x445c, 0xff99, 0x1939, 0x0039, 0x0080, 0xf319, 0x0000, 0x8011, 0x947f, 0x1406, 0x14f2, 0x15f2, 0x85ca, 0x85ca, 0xa0ca, 0xa8ca, 0xa8ca, 0x9ff4, 0x5931, 0x5407, 0xa955, 0xaa82, 0x2a3c, 0x2ac3, 0x2a23, 0x80a3, 0x3f63, 0x5153, 0x3133, 0x0039, 0x0042, 0x5319, 0x400c, 0x8004, 0x0004, 0x0108, 0x0700, 0x9950, 0x226a, 0x0080, 0x0540, 0x5fd0, 0xf5f4, 0x5074, 0xa9aa, 0x0200, 0x0091, 0x7efe, 0x5193, 0x5400, 0x55e5, 0x1999, 0x0139, 0xf03c, 0x00ff, 0xf319, 0x0002, 0x1110, 0x1120, 0x1200, 0x0039, 0x0040, 0xf139, 0x0000, 0x6655, 0x0039, 0x0050, 0xf591, 0x5401, 0x5255, 0x5455, 0x0039, 0x30f0, 0xf319, 0x0000, 0x0004, 0x9939, 0x0091, 0xbebe, 0x9991, 0x0039, 0x0014, 0x0019, 0x0202, 0xff19, 0x0400, 0x0440, 0x0039, 0x0028, 0x0019, 0x9292, 0xf319, 0x0403, 0x0842, 0x4080, 0x4369, 0x40f5, 0x99ff, 0x0039, 0x0008, 0x0019, 0x0404, 0xf139, 0x1001, 0x0001, 0x0008, 0x1f99, 0x5553, 0x1f99, 0x5331, 0x1f99, 0x5531, 0x1f99, 0x5533, 0x1f99, 0x5533, 0x1f99, 0x5331, 0xf999, 0x3311, 0xfe99, 0x9fa1, 0x0000, 0xff95, 0xfaaa, 0xe999, 0x97fa, 0x9003, 0xa5fd, 0xa6fd, 0xa6fd, 0x66fd, 0xf7e9, 0x1000, 0x037e, 0xafe7, 0x0000, 0x08e1, 0xaf77, 0x02f7, 0x0982, 0x0131, 0x7f84, 0xf319, 0x0000, 0xaa40, 0x359f, 0x5404, 0x54fe, 0x53ea, 0x53ab, 0x53aa, 0x53fe, 0x9f13, 0x1400, 0x05f8, 0x999f, 0x0135, 0x0ef8, 0xc70c, 0x5533, 0x0013, 0x7e1c, 0x1313, 0x0093, 0xff50, 0x0091, 0xfafe, 0x9393, 0x0019, 0x0400, 0x5319, 0x1000, 0xfa01, 0x3bf5, 0x6402, 0x6703, 0xa7f0, 0x5550, 0xbf5f, 0x00fb, 0x4060, 0x3cfb, 0x0007, 0x5550, 0x50a4, 0x5559, 0x7d54, 0x5400, 0x0600, 0x5a00, 0x0555, 0x001b, 0xfec0, 0x02fb, 0x0f10, 0x0b08, 0x1f0b, 0xc1fb, 0x0003, 0x00a9, 0x45a9, 0x4507, 0x4057, 0xbfcc, 0x01bf, 0xbf80, 0xdf1f, 0xffff, 0xbbff, 0x00fc, 0x0100, 0x1bcf, 0x5402, 0x1405, 0x8ca0, 0xa3aa, 0x00fb, 0x1010, 0x1fcb, 0x0010, 0x8095, 0xaaaf, 0x002f, 0x002f, 0xaaaf, 0x80bf, 0x80bf, 0x80bf, 0x5556, 0x5578, 0xffa0, 0xfe00, 0xfe00, 0xfe2a, 0xff80, 0xff8a, 0x0955, 0x00fb, 0x04d8, 0xfbfc, 0x9003, 0x90aa, 0x4295, 0x426a, 0x4066, 0xfbfb, 0x01cb, 0x80f8, 0x7830, 0xffcb, 0x0001, 0x1555, 0x0002, 0xccfb, 0x00fb, 0x4040, 0x00cb, 0xfff0, 0xffbc, 0x1000, 0x1800, 0x01fb, 0x8c50, 0x0102, 0xbbbf, 0x00cb, 0x0f80, 0xffcb, 0x5401, 0x5502, 0x5552, 0xcccf, 0x06bc, 0x0c0c, 0x0108, 0xf8ff, 0xfffe, 0x403c, 0xfc70, 0x0071, 0x53fc, 0x0002, 0x0055, 0x05aa, 0x56ff, 0xbf35, 0x4002, 0x40fe, 0x80fe, 0x90ff, 0xbbbc, 0xf355, 0x07bc, 0x7030, 0xf1f0, 0x0fef, 0xfcf8, 0x70fe, 0x8e0c, 0x8f8f, 0x1fef, 0xfcfb, 0x000d, 0xaaa5, 0xa810, 0x8040, 0x0100, 0x8040, 0xa555, 0xa400, 0xa400, 0x0400, 0x6555, 0x1a40, 0x0645, 0x04aa, 0x556a, 0xfbbc, 0x01fb, 0x8080, 0xef80, 0x5bf3, 0xa402, 0x6701, 0x5aaa, 0x056a, 0x53fc, 0x9001, 0xe4fa, 0xf9ff, 0x0035, 0xc010, 0x5f53, 0x4000, 0x5540, 0x01bc, 0x80f8, 0x0f01, 0x53fb, 0x0002, 0x0040, 0x0090, 0x00e4, 0x333f, 0x03cb, 0x00f8, 0x78e0, 0x073f, 0x0003, 0x03f1, 0x1008, 0x2010, 0xe020, 0xc0c0, 0x31fb, 0x0008, 0x55a9, 0x40a9, 0x45aa, 0x45aa, 0x40aa, 0x40aa, 0x40aa, 0x56aa, 0xfd6a, 0x53f1, 0x9403, 0xe9ff, 0xfabf, 0xaf06, 0x0a04, 0x02f1, 0x8102, 0x7080, 0x0010, 0x0031, 0xcf0e, 0xf153, 0x1400, 0x802a, 0x00f1, 0x3010, 0xf111, 0x01fb, 0x0ff0, 0x1db0, 0xf1fb, 0x000a, 0x0001, 0x0006, 0x001a, 0x016a, 0x56aa, 0x1aaa, 0x1aaa, 0x446a, 0x446a, 0x406a, 0x406a, 0xf1f1, 0x05fb, 0x08d8, 0x0909, 0x7e72, 0x7474, 0x0404, 0xccc7, 0x3f1b, 0x1009, 0x90b8, 0x84b8, 0x84be, 0x819f, 0x0195, 0x0495, 0x04a5, 0xa000, 0xbaaa, 0xae00, 0xbffb, 0x001f, 0xe0f0, 0x1f53, 0x5002, 0x05e8, 0xe0fe, 0xfaff, 0x1111, 0x01cb, 0x3f7c, 0x0f07, 0x00c1, 0xf8fc, 0x1111, 0xcf35, 0x9003, 0x90ff, 0x40ff, 0x05fe, 0x00fe, 0x51f3, 0xa402, 0xa4ff, 0xa4ff, 0xa400, 0x0153, 0xf3fe, 0x0811, 0xb315, 0x0000, 0x0a95, 0x13fb, 0x4000, 0xd0a9, 0x5533, 0x1fbb, 0xf153, 0x5004, 0x50ba, 0x42ba, 0x02ba, 0x2aea, 0xaaea, 0x00bc, 0x3ffc, 0xcbbb, 0x001c, 0xfcc0, 0x00bc, 0x00c0, 0x021c, 0x7c10, 0x010f, 0x0703, 0x00f1, 0x3f00, 0x61fb, 0x0006, 0x00a4, 0x00a4, 0x55a4, 0x40a5, 0x406a, 0x451a, 0x5f1a, 0x35f6, 0x0002, 0x4064, 0x4074, 0x407d, 0x6f13, 0x9005, 0x95bf, 0x95ff, 0xa5ff, 0xafff, 0x8aaa, 0xa2ff, 0x01f6, 0xf0f6, 0xb00f, 0xfd6f, 0x0407, 0xa855, 0xa800, 0xaa15, 0xaa10, 0xaa10, 0xaa15, 0xaa15, 0xaa15, 0x04f6, 0xe720, 0x4747, 0x4047, 0xcc70, 0x0101, 0xf6fd, 0xa409, 0x90aa, 0x40aa, 0x00a9, 0x0054, 0x0090, 0x4090, 0x4066, 0x4066, 0x406a, 0x446a, 0x01f6, 0x08d8, 0xf909, 0x36df, 0x5018, 0x52aa, 0x52aa, 0x52aa, 0x5000, 0x152a, 0x852a, 0x8520, 0x2a15, 0x0005, 0xaa85, 0xaa85, 0x0005, 0x2a15, 0x2a15, 0x2a15, 0x5554, 0x5552, 0x550a, 0x54aa, 0x54aa, 0x5480, 0x552a, 0x5520, 0x0552, 0xf054, 0x53f6, 0x5401, 0x00f9, 0x0054, 0xf6fd, 0xa401, 0x50aa, 0xa555, 0x6666, 0x00fd, 0x0100, 0xf6df, 0x5402, 0x1405, 0x84a0, 0xa1aa, 0x00f6, 0x1010, 0x6666, 0xdf35, 0x9006, 0x80ff, 0x40ff, 0x00fe, 0x00fe, 0x00f9, 0x00f9, 0x00f9, 0x6df3, 0xa40a, 0xa9ff, 0xaa55, 0xaa7f, 0xaa75, 0xaa75, 0xa955, 0xa9ff, 0xa9ff, 0xf675, 0x5675, 0xd97f, 0x016f, 0xbf80, 0xdf1f, 0x356f, 0x0004, 0xea50, 0xaa13, 0xaa12, 0x0a52, 0x4800, 0x00f6, 0x4060, 0x35f6, 0x0001, 0x5550, 0xffaa, 0xd315, 0x0000, 0x0a95, 0xdddd, 0x553f, 0x531d, 0x4001, 0x40fa, 0x40fa, 0x5533, 0xfddd, 0x5331, 0x31fd, 0x4002, 0x00fe, 0x00e9, 0x00a9, 0xffdd, 0x00af, 0xffc0, 0xd7fa, 0x4002, 0x9010, 0xa565, 0xaaa7, 0x03df, 0xfefe, 0xfefe, 0x7e7e, 0xfefe, 0x016f, 0xfd06, 0xfefd, 0x00fd, 0x8080, 0x53df, 0x5404, 0x5485, 0x54e1, 0x55f8, 0x15f8, 0x15aa, 0x3333, 0x44fd, 0x00f4, 0xf81c, 0x7fa4, 0x0002, 0x0255, 0x0956, 0x895b, 0xdaf7, 0x9000, 0x90da, 0xdfaa, 0x016f, 0xff24, 0x0f00, 0xf6f9, 0x9000, 0x916a, 0x08f6, 0x08f8, 0xff0f, 0x8080, 0xff80, 0x0909, 0x1029, 0x2010, 0x4fc0, 0x4848, 0xf1f6, 0x4000, 0x005a, 0xff11, 0x00f6, 0x60f0, 0x169f, 0x1402, 0x14aa, 0x0000, 0xffaa, 0xf531, 0xa403, 0xa400, 0x6900, 0x1400, 0x0300, 0x6fd1, 0x0000, 0x8aa1, 0xf96f, 0x1000, 0x154a, 0xf99f, 0x026f, 0x3f00, 0x3f3f, 0x80bf, 0x00fb, 0x8000, 0x6fbc, 0x5404, 0x00e9, 0x80fe, 0x81ff, 0x15ff, 0x05aa, 0x66fc, 0x06cb, 0x8000, 0x8181, 0x0301, 0x0303, 0x0400, 0x0706, 0x0703, 0xfbcd, 0x5400, 0x50a9, 0x02bc, 0xcfd0, 0xefef, 0x03cf, 0x00dc, 0xf800, 0x6bfd, 0x0001, 0xaaa9, 0xaaa7, 0xcbf6, 0x5003, 0x00fa, 0x00fd, 0x00f4, 0x55f4, 0xf6df, 0x5400, 0x552a, 0x02cb, 0x0702, 0x0707, 0x0f0f, 0xfbcd, 0x5400, 0x50a9, 0x01bc, 0xf7fc, 0x73f7, 0xcccc, 0xddcc, 0x01cb, 0x3010, 0xf0f0, 0x00dc, 0x8010, 0x53fd, 0x0002, 0x0040, 0x0090, 0x00e4, 0x553f, 0x6fcd, 0x4004, 0x0055, 0x000a, 0x002f, 0x00bf, 0x02ff, 0x02dc, 0xf040, 0x03fc, 0x1f07, 0x53df, 0x5409, 0x5255, 0x5355, 0x4b55, 0x4f55, 0x1555, 0x8550, 0xc54a, 0xe12f, 0xf8bf, 0xfeff, 0x00c5, 0xfff0, 0x6fdc, 0x1002, 0x1800, 0x6e55, 0xbfa5, 0x66fd, 0x00f6, 0x1010, 0x6666, 0x00cd, 0xe0f8, 0xdddf, 0xcddd, 0x00df, 0xfefe, 0x6dfc, 0x0015, 0x6aa4, 0xda5d, 0xdaff, 0xdaff, 0x6ad5, 0x6a7f, 0x6a77, 0x7f77, 0x55aa, 0xffa5, 0xffa7, 0xffa7, 0x55a7, 0x7f65, 0x75da, 0x00f6, 0x40f6, 0x6855, 0x6aff, 0x6aff, 0x6aff, 0x9655, 0x36fd, 0xa400, 0x657d, 0xfdbc, 0x4001, 0x0055, 0xab80, 0xff6d, 0x0001, 0x0009, 0x0025, 0xdf66, 0x03cd, 0x8fc0, 0x0e0f, 0x0307, 0xcf01, 0xcccc, 0xdddd, 0x01cb, 0xc080, 0x7070, 0xbbbb, 0xcccd, 0x02bc, 0x7ffe, 0x8f9f, 0x8fcf, 0xfdcb, 0x0000, 0x0055, 0xcccd, 0x01bc, 0xfef8, 0x0078, 0xffcd, 0x5400, 0x0055, 0x01cb, 0xc080, 0xc0c0, 0xffcb, 0x0000, 0x4055, 0x00dc, 0x0808, 0xdddc, 0x02cb, 0x1000, 0x1810, 0xf878, 0xfdcb, 0x5000, 0x5455, 0xddcc, 0x01cb, 0x8080, 0xe0c0, 0xcbbb, 0x007c, 0xfff0, 0x0267, 0xcf8e, 0x8fcf, 0x0e0f, 0x0137, 0x0200, 0x0202, 0x7337, 0x0a67, 0xf3f0, 0x07c7, 0x343e, 0x0ff0, 0x0ffe, 0x030e, 0xf3c7, 0xfcff, 0x403f, 0x1887, 0xff0f, 0x6677, 0x6666, 0x0037, 0x4040, 0x0267, 0x0300, 0x0707, 0x0707, 0x6677, 0x0136, 0x1020, 0x0814, 0xf376, 0x0000, 0x0805, 0x0437, 0x4060, 0x9040, 0xa0a0, 0xa0a0, 0x20a0, 0x7777, 0x7777, 0x0136, 0xe020, 0x6160, 0xf763, 0x5400, 0x5591, 0x0037, 0x0202, 0x7737, 0x7777, 0x0136, 0x4680, 0x3058, 0x7777, 0x7737, 0x0076, 0xe080, 0x6636, 0x6676, 0x0163, 0xfefc, 0xfefe, 0xf673, 0x5400, 0x2555, 0x0036, 0x0080, 0x0076, 0xfe0c, 0xf367, 0x5000, 0x6555, 0x0276, 0xfff0, 0x1077, 0x1810, 0xf376, 0x0001, 0x5815, 0xa655, 0x007f, 0xfffe, 0xf4f7, 0x1002, 0x6500, 0x6a00, 0x1a00, 0x00f7, 0x0030, 0x0167, 0x87f0, 0xf1c7, 0xf376, 0x5401, 0x5400, 0x540a, 0x7366, 0x0367, 0xf000, 0x0071, 0x4110, 0xff0f, 0x0036, 0x0808, 0x0076, 0xcf0e, 0x0037, 0x1000, 0x7777, 0x7773, 0x0067, 0xf0c0, 0x0036, 0x80c0, 0x6666, 0x3766, 0x0067, 0xf0f0, 0xff67, 0x5000, 0x0055, 0x00fe, 0x8302, 0x4e7f, 0x8402, 0x8402, 0x042a, 0xc4c0, 0x4444, 0x00f7, 0x00fc, 0x4ef7, 0x9002, 0x90aa, 0x41a5, 0x57aa, 0xeeee, 0x00f4, 0x01f8, 0x00f7, 0x00fe, 0x0073, 0xfafa, 0x00f7, 0x0808, 0x0176, 0xc0f0, 0x030c, 0x7766, 0x0137, 0x8080, 0x4040, 0x0467, 0xf7f0, 0xf0f7, 0x8000, 0xf8f0, 0x07f0, 0xfe67, 0x0000, 0x1555, 0xeee6, 0x007e, 0x0806, 0x77ee, 0xeee6, 0x0076, 0x0e0e, 0xf376, 0x5401, 0x5500, 0x5556, 0x0036, 0x080a, 0xf736, 0x4002, 0x0a00, 0x4000, 0x8000, 0x0036, 0x0a0a, 0x0b76, 0xf100, 0x7f3f, 0x071f, 0x0100, 0xfbf0, 0xf003, 0x10ff, 0x8408, 0xef8f, 0x700f, 0xf7f0, 0xf1f3, 0x6667, 0x016f, 0x7760, 0x7575, 0x39f6, 0x4403, 0x0040, 0x0564, 0x0564, 0x0564, 0xf3f6, 0x961f, 0xa403, 0xaa32, 0xaa32, 0xaa32, 0xaa32, 0x7f35, 0x4004, 0x40fe, 0x40fe, 0x00f9, 0x00f9, 0x54f9, 0x17f3, 0xa402, 0xa43c, 0xa90f, 0x00da, 0x1f77, 0x5331, 0x1f77, 0x5531, 0x1f77, 0x5531, 0x1f77, 0x5533, 0x1f77, 0x5331, 0x31f7, 0x4000, 0x40fa, 0x1111, 0x0476, 0x0030, 0xf070, 0x0001, 0xff0f, 0x0f7f, 0x05f6, 0x1010, 0x1010, 0x4010, 0x2fe8, 0x2020, 0x4fe0, 0xa7f6, 0x4003, 0x4010, 0x9ff6, 0x9ff6, 0x67da, 0x057f, 0x6f66, 0xad6f, 0xd50c, 0xfd15, 0x7531, 0xd9f5, 0xf76f, 0x0004, 0x5400, 0x54aa, 0x5495, 0x54a5, 0x94aa, 0x00f7, 0x1010, 0xfef7, 0x4008, 0x00a1, 0xa540, 0xaa40, 0xaa90, 0xaa90, 0xaa90, 0xaa90, 0xaa90, 0xaa90, 0x0273, 0xfefe, 0xfbe7, 0xfafb, 0xf736, 0x0001, 0xaa90, 0xa09a, 0x7377, 0x0176, 0xe0f0, 0xc0c1, 0x1f76, 0x0001, 0xe050, 0xa00b, 0x66ff, 0x0076, 0xf3f0, 0xff67, 0x5400, 0x5002, 0x017f, 0xfefe, 0xfefe, 0x777f, 0x7777, 0x02fe, 0x80be, 0x2070, 0x2020, 0xeeee, 0x0976, 0x0100, 0x877f, 0x3fff, 0xff7f, 0xf8fe, 0xfff0, 0xe0fc, 0xe0e3, 0x0100, 0x830f, 0x0036, 0x0c00, 0x0a67, 0x3ffe, 0xf0fc, 0x0380, 0xfce0, 0x0f00, 0x3081, 0x830f, 0x3f1f, 0x0f0f, 0xffef, 0xffef, 0x6636, 0x0867, 0x707c, 0x7870, 0x1f3c, 0x1f07, 0x0f03, 0x0187, 0x7f0f, 0x1fbc, 0xc783, 0x9376, 0x5004, 0x5505, 0x9506, 0x9515, 0x955a, 0x956f, 0x6666, 0x0037, 0x5050, 0x7777, 0x6663, 0x0176, 0x0008, 0xfe68, 0x671f, 0x5403, 0x54aa, 0x52aa, 0x0aaa, 0xeaaa, 0x077f, 0x7766, 0x7872, 0x1d38, 0x2e1e, 0x9b01, 0x05f3, 0xcd35, 0x1b7d, 0x0137, 0x8000, 0x0402, 0x0167, 0xc080, 0x8ffc, 0x7f31, 0x1401, 0xa0fe, 0xfaff, 0xf167, 0x0006, 0x0001, 0xfaaa, 0x0eaf, 0x0eb0, 0x0eb0, 0x0eb0, 0x5eb5, 0x0067, 0xc0e0, 0x0367, 0x0001, 0x0040, 0x4280, 0x0000, 0x0000
};

// [D_08C95618] D_08C9582C Huffman Window 1
u32 D_08c9582c_window1[] = {
	0xdf381fb6, 0xb2feefdf, 0x3f65efed, 0xfbdefaf9, 0xef007dfb, 0xcf6fbded, 0xb7776d9f, 0x20201ad1, 0xf880f6df, 0x9f3fbbe0, 0xa7bb92df, 0xb9ef4eff, 0x077ebfde, 0xed5ee400, 0x76f6fcbe, 0xdb6ff7f6, 0xbbfffb3e, 0xbdcfd13f, 0xbee7feef, 0xd6fb25f2, 0xff24e765, 0xefb799ef, 0xe801dbf2, 0xf96e9dbf, 0x0000000f
};

// [D_08C9567C] D_08C9582C Huffman Window 2
u32 D_08c9582c_window2[] = {
	0x6dab6f4b, 0xa45ba96b, 0x6e6a928f, 0x6fc9bfd7, 0x575a8bf5, 0x7aeaabdb, 0xc8ac5ca5, 0xbafbb55a, 0x0ef922aa, 0x6b495496, 0xc1d95265, 0xb45eb5d5, 0x8ac5ca7a, 0x42402547, 0x9015012a, 0x205553e2, 0x000000b1
};

// [D_08C956C0] D_08C9582C Huffman
struct Huffman D_08c9582c_huffman[] = {
	/* Data */			D_08c9582c_huffmandata,
	/* Size */			0x1402,
	/* Count */			0x305,
	/* Window 1 */		D_08c9582c_window1,
	/* Window 2 */		D_08c9582c_window2,
};

// [D_08C956D0] D_08C9582C RLE Data
u8 D_08c9582c_rledata[] = {
	0x1, 0xf, 0x11, 0x7, 0x8, 0x5, 0xc, 0x17, 0x22, 0x7, 0x11, 0xe, 0x1, 0x9, 0x7, 0xa, 0x6, 0xd, 0x3, 0x9, 0x7, 0xa, 0x15, 0x3, 0x37, 0x6, 0x15, 0x7, 0xa, 0xa, 0x49, 0x7, 0x1, 0xf, 0x1, 0x4, 0x3, 0x8, 0x1, 0x5, 0x1b, 0x8, 0x8, 0x5, 0x4, 0x6, 0x1, 0xa, 0x6, 0xe, 0x1d, 0x4, 0x13, 0x4, 0x5, 0x4, 0xc, 0x4, 0x1c, 0x4, 0x16, 0x8, 0x3, 0x4, 0x17, 0x4, 0x6d, 0x3, 0x15, 0x3, 0x1, 0x7, 0x2c, 0x4, 0x16, 0xa, 0x7, 0x9, 0x28, 0x8, 0x17, 0x9, 0xa, 0x7, 0x4f, 0x9, 0x8, 0x9, 0xb, 0xc, 0x2, 0x17, 0x7, 0x3, 0x1, 0xb, 0x39, 0x3, 0x11, 0x3, 0x41, 0x5, 0x1b, 0x7, 0x1, 0x7, 0x2c, 0x4, 0x11, 0xf, 0x1, 0xf, 0x4a, 0x6, 0x1c, 0x4, 0xd, 0x3, 0xf5, 0x3, 0x0, 0x16, 0x4, 0xd6, 0x3, 0x41, 0x4, 0x1, 0x9, 0x18, 0x3, 0x9, 0xc, 0x18, 0x4, 0x7, 0x3, 0x31, 0x6, 0x2a, 0x6, 0xd1, 0x5, 0x27, 0x5, 0x19, 0xf, 0xd5, 0x3, 0x68, 0xe, 0x33, 0xe, 0x15, 0x3, 0x32, 0x7, 0x6, 0x13, 0x3, 0x4, 0x63, 0x4, 0x2, 0x5, 0x5, 0x4, 0x28, 0x5, 0x12, 0x5, 0x1f, 0x5, 0x7, 0x3, 0x87, 0x9, 0x20, 0x3, 0x5, 0x9, 0x47, 0x8, 0x8, 0x5, 0x17, 0x3, 0x12, 0x5, 0x1f, 0x3, 0x3, 0x4, 0x1, 0x4, 0x8, 0x3, 0x1, 0x7, 0x28, 0x9, 0x8, 0x9, 0x7f, 0x7, 0x6, 0xa, 0x51, 0xb, 0x15, 0x3, 0x24, 0x8, 0x27, 0x9, 0xa, 0x7, 0x25, 0xa, 0x7, 0x9, 0x9, 0x3, 0x75, 0x4, 0x7, 0x3, 0x2, 0x5, 0xc, 0x7, 0xa, 0x15, 0xe, 0xa, 0x1c, 0x4, 0x1a, 0x6, 0x33, 0x4, 0x10, 0x9, 0x6, 0xa, 0x1, 0x3, 0x3, 0x9, 0x1, 0x5, 0x1b, 0x3, 0x9, 0x3, 0x21, 0x6, 0x1e, 0xc, 0x4, 0xb, 0x17, 0x3, 0x26, 0x4, 0x2, 0xa, 0x32, 0x5, 0x22, 0x3, 0x50, 0x3, 0xa, 0x7, 0x5, 0x3, 0x1, 0x7, 0x24, 0x3, 0x4, 0x3, 0x2, 0x6, 0x6, 0x3, 0x6, 0xb, 0x4, 0xc, 0x1, 0x6, 0x5, 0x4, 0x1, 0x7, 0x5, 0x3, 0x1, 0x3, 0x3, 0x3, 0x1e, 0x5, 0x19, 0x7, 0x18, 0x4, 0x11, 0x6, 0x11, 0xf, 0x21, 0x5, 0x7, 0x3, 0xb, 0x5, 0xc, 0x4, 0x54, 0x4, 0x1d, 0x3, 0x1, 0x8, 0x14, 0x3, 0x15, 0x4, 0x42, 0x3, 0x3b, 0x3, 0x15, 0x6, 0x37, 0x8, 0x3, 0x4, 0x12, 0x7, 0x3, 0x0, 0x80, 0x0, 0x0
};

// [D_08C9582C] D_08C9582C Graphics
struct CompressedGraphics D_08c9582c = {
	/* Huffman Data */		D_08c9582c_huffman,
	/* RLE Data */			D_08c9582c_rledata,
	/* RLE Size */			0x158,
	/* RLE Offset */		0x1a00,
	/* Double Compressed */	TRUE,
};

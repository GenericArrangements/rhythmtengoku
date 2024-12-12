#include "global.h"
#include "graphics.h"

// // //  D_08D11EF4  // // //

// [D_08D10B70] D_08D11EF4 Huffman Data
u16 D_08d11ef4_huffmandata[] = {
	0x2b78, 0x9ee0, 0x0a49, 0x4400, 0xfc02, 0x48aa, 0x4925, 0x8920, 0x2020, 0x0180, 0x8901, 0x8922, 0x4802, 0x0402, 0xfeff, 0x7dd7, 0x55aa, 0x55aa, 0xffdf, 0x6a9b, 0xfa95, 0xffde, 0x92a9, 0x9224, 0xfbff, 0x5aed, 0x54aa, 0x48a5, 0xa57d, 0x5295, 0x1289, 0x2a55, 0x124a, 0x12a4, 0x0044, 0x775f, 0xaaab, 0x2a55, 0xaaff, 0xadf7, 0xaa55, 0x2255, 0xaedf, 0xaf5b, 0x08ba, 0xf678, 0x0000, 0x9955, 0x0e87, 0x0010, 0x4010, 0x7bd0, 0xfff5, 0x12fb, 0x52ad, 0xaa5f, 0xe75f, 0x6aff, 0xedb5, 0xfa37, 0xe5df, 0xf5ff, 0xfaaf, 0xfdfe, 0x0776, 0x1200, 0xb549, 0x0fd7, 0x0880, 0xf2a4, 0x2dfe, 0x8f57, 0x5f50, 0x7777, 0x7776, 0x0187, 0x8020, 0x4094, 0x7777, 0x8776, 0x0387, 0x9130, 0x6248, 0xb250, 0x7bd5, 0x7878, 0x8778, 0x0376, 0xa800, 0xf52a, 0xa8fe, 0xf5aa, 0x1c87, 0xf7d2, 0xfdff, 0xdbfe, 0xdbb6, 0xff6d, 0x7fd5, 0xaaed, 0xb6ed, 0x7edb, 0xbfeb, 0xdffd, 0xdf7d, 0xff7b, 0xafdf, 0xbf75, 0xbef5, 0xdef7, 0xbbff, 0xbef7, 0xfdff, 0xfffd, 0xefed, 0x5baf, 0x5fed, 0xd7fd, 0xbdff, 0xf6a7, 0xfeab, 0xbbf7, 0x3458, 0x0007, 0xeaa9, 0xaa99, 0xeaaa, 0xaa99, 0xeaa9, 0xaa99, 0xeaa9, 0xaaa6, 0xf234, 0x5402, 0x54a5, 0x5599, 0x54a6, 0x0023, 0x0d0e, 0xf423, 0x5401, 0x5102, 0x5400, 0x0178, 0xf5fe, 0xfafe, 0x5867, 0x0003, 0x0810, 0x0240, 0x0210, 0x5540, 0x4555, 0x6667, 0x0065, 0x7070, 0xf645, 0x4003, 0x400a, 0x002a, 0x400a, 0x0022, 0x0721, 0x84d4, 0x5028, 0x52a5, 0x0201, 0x1f3f, 0x070f, 0x0307, 0x0307, 0x0378, 0x4094, 0xa490, 0x4890, 0x90a2, 0x0434, 0x4000, 0xa000, 0xa810, 0x2940, 0x15a8, 0x4444, 0x4443, 0x0054, 0x4080, 0x7424, 0x6666, 0x7524, 0x5746, 0x0001, 0x0005, 0xc009, 0x6667, 0x0056, 0xff0c, 0xf654, 0x9404, 0xa415, 0x2a5a, 0x2a56, 0x2a95, 0x2aa5, 0x6655, 0x0046, 0x0808, 0x4666, 0x3576, 0x1006, 0x02e0, 0x0850, 0x0200, 0x0850, 0x0000, 0x0810, 0x0240, 0x0076, 0xfc04, 0xf687, 0x1000, 0x4000, 0x7776, 0x0187, 0x000a, 0x080a, 0xff78, 0x4400, 0x4555, 0x0354, 0x0040, 0x48a0, 0xd1f4, 0xeafe, 0xf465, 0x0000, 0x0840, 0x0265, 0x0a00, 0x0a00, 0x0a84, 0x5655, 0x4312, 0x5006, 0x50e5, 0x44f9, 0x51fc, 0x15fe, 0x95fe, 0x85ff, 0xe5ff, 0x4444, 0x0521, 0xc0e8, 0x80a0, 0x4080, 0xfef0, 0x0502, 0x0001, 0x3332, 0x0034, 0x1010, 0x5234, 0x0005, 0x0005, 0x0064, 0x0690, 0x2400, 0x6000, 0xc000, 0x6754, 0x0000, 0xc0a5, 0x6677, 0x5234, 0x5577, 0x1234, 0x0000, 0x00e4, 0x2444, 0x0254, 0xf1f0, 0xb0f2, 0xe050, 0x2354, 0x0009, 0x8001, 0x0014, 0xeaa8, 0xba80, 0xeeaa, 0xbaa0, 0xfbaa, 0xbaa8, 0xfaa8, 0xeea8, 0x0178, 0x4880, 0x8f5f, 0x6578, 0x4406, 0x9000, 0xb041, 0xb400, 0xa440, 0xad40, 0xa9d5, 0xabf5, 0x0012, 0x5010, 0x0032, 0x0180, 0x0012, 0x0008, 0x1122, 0x2223, 0x0112, 0x9080, 0xff4a, 0x0078, 0x2080, 0x0076, 0xfefe, 0x0056, 0xff00, 0x4444, 0x7777, 0x0056, 0xff00, 0x0034, 0x4000, 0x6347, 0x0000, 0xc0e4, 0x7734, 0x5677, 0x7772, 0x5367, 0x9000, 0xb443, 0x4567, 0x5000, 0x50b9, 0x7355, 0x6667, 0x7434, 0x0067, 0xef0e, 0x0056, 0xb0a0, 0xf456, 0x4001, 0x4085, 0x5081, 0x4665, 0x0278, 0x2104, 0x1104, 0xffad, 0x0076, 0x00f0, 0x0278, 0x3080, 0xfbf5, 0xfbfe, 0xf576, 0x0000, 0xaa50, 0x6665, 0x0054, 0x00e0, 0x0187, 0xc9aa, 0x807a, 0x0067, 0x3f00, 0xf465, 0x0000, 0x0855, 0x5655, 0x0312, 0x8000, 0xe0c0, 0xf0e0, 0x78f0, 0x5321, 0x4000, 0x40e1, 0x7631, 0x1211, 0x3174, 0x5400, 0x55ea, 0x6311, 0x7777, 0x7521, 0x6667, 0xf542, 0xa400, 0x55aa, 0x4444, 0x0112, 0x0020, 0x00a0, 0x0032, 0x0406, 0x7632, 0x5000, 0x9500, 0x5237, 0x0000, 0x00e5, 0x4322, 0x5276, 0x5400, 0x57aa, 0x7512, 0x1000, 0x10fe, 0x6664, 0x5312, 0x5000, 0x21fe, 0x4432, 0x7777, 0x0056, 0xff00, 0x3654, 0x0000, 0xa500, 0x1113, 0x1247, 0x0000, 0x00e4, 0x4677, 0x7777, 0x0056, 0xff00, 0x4444, 0x4444, 0x0021, 0xf4fe, 0x5712, 0x5400, 0x4e01, 0x2211, 0x3677, 0x5612, 0x1000, 0x14ea, 0x1245, 0x4000, 0x55ea, 0x1223, 0x0045, 0xfcfc, 0xf645, 0x4000, 0x1255, 0x0154, 0xb030, 0xb850, 0xf354, 0x4002, 0x102a, 0x010a, 0x0412, 0x5543, 0x0145, 0x8d1a, 0x8f4e, 0x8674, 0x0007, 0x9955, 0xa557, 0x9955, 0x955d, 0x6555, 0x9557, 0x9557, 0x6577, 0x0356, 0xfafc, 0xf4fc, 0xe8fc, 0xf0fc, 0x3412, 0x5401, 0xfe00, 0xf0ff, 0x0543, 0x0282, 0x0a8e, 0x5f17, 0xaf2f, 0x7fbf, 0x7f3f, 0x4333, 0x2344, 0x0134, 0xdbfe, 0xfdf5, 0x3334, 0x3333, 0x0378, 0xa048, 0x50a4, 0xa04a, 0x82a8, 0x0634, 0x4920, 0xbaa4, 0x2f45, 0x1f97, 0xa020, 0x2010, 0x2000, 0x4444, 0x5323, 0x6666, 0x5312, 0x5236, 0x0000, 0x00d9, 0x4333, 0x0036, 0xf0f0, 0xf365, 0x5400, 0x54aa, 0x3333, 0x0065, 0xf67c, 0x3645, 0x4005, 0x40aa, 0x50aa, 0xf2aa, 0xf2aa, 0xf2aa, 0xf2aa, 0xf765, 0x5401, 0x51a5, 0x5495, 0x0076, 0x0404, 0x7766, 0x6665, 0x0076, 0x8e0a, 0x7676, 0x0387, 0x4050, 0x4090, 0x40a0, 0x48a0, 0x0354, 0x50d4, 0x50a0, 0x50aa, 0xa4ea, 0x0365, 0x4080, 0x80a0, 0x8060, 0x50a0, 0x0634, 0xfaf8, 0xa9fc, 0x7ffb, 0xfffe, 0xbf56, 0x5fff, 0xfaea, 0xf134, 0x4003, 0x44aa, 0x40aa, 0x50aa, 0x05aa, 0x0131, 0xf0f0, 0x80f0, 0x2134, 0x1005, 0x006a, 0x006a, 0x01ea, 0x57ea, 0x556a, 0x543a, 0x3211, 0x0143, 0xbff0, 0x1b4f, 0x1243, 0x0003, 0x4295, 0x9381, 0xae00, 0x0800, 0x0643, 0xe140, 0xdeaf, 0x000f, 0x0804, 0xdef7, 0x0001, 0x0a55, 0x2345, 0x4408, 0x44a5, 0x5055, 0x41a5, 0x4455, 0x51a5, 0x4455, 0x4195, 0xaa95, 0xe9ff, 0x0023, 0x0f0e, 0x8432, 0x4003, 0x9115, 0xa456, 0xa915, 0xaa56, 0x5678, 0x4407, 0x5555, 0x5495, 0x5195, 0x55a5, 0x54a9, 0x5595, 0x54a9, 0xfaa5, 0xf645, 0x4001, 0x000a, 0x4022, 0x0056, 0xfcfc, 0xf456, 0x4401, 0x5055, 0x4495, 0x5555, 0x0012, 0xf4fa, 0x4123, 0x5401, 0x0ca9, 0x33a4, 0x1343, 0x0034, 0xfaf4, 0x2134, 0x4003, 0xaa44, 0xaaab, 0xaab5, 0xaf41, 0x0378, 0x48a0, 0x51a4, 0xa044, 0xa092, 0x0534, 0x5704, 0x7fad, 0x055d, 0x1da3, 0x0400, 0x0502, 0x7643, 0x5400, 0x4555, 0x7776, 0x3124, 0x9001, 0x9cc3, 0x3fea, 0x6543, 0xa403, 0xffe0, 0xffe0, 0xffe5, 0xffd0, 0x5567, 0x6345, 0x5002, 0x56aa, 0xa3c6, 0x9fff, 0x0046, 0x8080, 0x7546, 0x0004, 0x8040, 0x0280, 0x00c0, 0x0230, 0x08c0, 0x0076, 0x0408, 0x7676, 0x6656, 0x0076, 0xf20c, 0xf687, 0x4400, 0x4000, 0x7776, 0x0187, 0x0004, 0x000a, 0xff87, 0x4400, 0x4000, 0x0345, 0xaf02, 0xbf2f, 0x2e57, 0x2f5b, 0x0365, 0x40a0, 0x00a0, 0x5040, 0x50a0, 0x0041, 0xfefc, 0xf241, 0x5400, 0x5655, 0x0334, 0x8010, 0x21c0, 0x0802, 0x1550, 0x3434, 0x3334, 0x0121, 0x4040, 0x0820, 0x4321, 0x9004, 0xe900, 0xbe40, 0x5bff, 0x6fff, 0x86ff, 0x4566, 0x3311, 0x4555, 0x4322, 0x0043, 0xb4ba, 0xf243, 0x4401, 0x4525, 0x00a5, 0x2344, 0x0243, 0xfbf0, 0xf5fe, 0x8f45, 0x0978, 0x5044, 0x504a, 0xa449, 0x44a8, 0xd575, 0xd5fd, 0xeafd, 0xf5fe, 0x4080, 0x0080, 0x1476, 0x0100, 0x7f01, 0xbf5f, 0x5faf, 0xafb7, 0x45ab, 0x1229, 0x1544, 0x2a00, 0x4a00, 0x54a0, 0x5481, 0x4080, 0xff90, 0xfbfe, 0xfdfe, 0xf6fa, 0x20ea, 0x0020, 0x00a0, 0x0004, 0x7666, 0x6666, 0x0a78, 0x0100, 0x0400, 0x0104, 0x5eab, 0x7fab, 0x7fd7, 0x7fdf, 0x2508, 0xa50a, 0x9512, 0x154a, 0x0b76, 0x4490, 0x4010, 0x14a1, 0x5401, 0x4401, 0x5229, 0xf5f5, 0x001f, 0x0441, 0x9021, 0xa05a, 0x020a, 0x2576, 0x1001, 0x9110, 0xc401, 0x0176, 0x0010, 0x9142, 0x4376, 0x0000, 0xc210, 0x6766, 0x3572, 0x7777, 0x4242, 0x0787, 0xfdf0, 0xfb7f, 0x7dd7, 0xfdf7, 0xd566, 0x557a, 0x5ab5, 0x5aa1, 0x7787, 0x0767, 0x0020, 0xa8a4, 0xea55, 0x6ab7, 0x55a8, 0x5eea, 0xbff5, 0xfffb, 0x0287, 0x220a, 0x0005, 0x0104, 0x0767, 0x1040, 0x4400, 0x8410, 0xaa69, 0x0500, 0x1500, 0x5502, 0x5f2a, 0x0287, 0x50a4, 0x4820, 0x8020, 0x0676, 0xfffe, 0xa902, 0x0200, 0xa8b5, 0xa8d2, 0x1040, 0x0040, 0x0787, 0xb5ea, 0xd56d, 0x54b5, 0xa9d2, 0xfffe, 0xfefb, 0xbdeb, 0x5af6, 0x1076, 0x5010, 0xa545, 0x940a, 0x8022, 0x545a, 0x2950, 0x4290, 0x4410, 0x9221, 0x1802, 0x8801, 0x5000, 0x4822, 0x2200, 0x2480, 0x4400, 0x4000, 0x6666, 0x7666, 0x0078, 0xa10a, 0x5678, 0x9001, 0xf940, 0xff91, 0x5568, 0x8745, 0x4000, 0x5002, 0x5678, 0x5400, 0x5095, 0x6745, 0x4000, 0x550e, 0xf345, 0x5000, 0x5495, 0x0034, 0x4e8a, 0xff43, 0x0000, 0x0015, 0x0378, 0x2080, 0x2084, 0x0090, 0x0052, 0x0176, 0x0800, 0xff57, 0x5444, 0x5555, 0x0023, 0x0300, 0x2222, 0x3322, 0x0076, 0xe000, 0x4576, 0x0000, 0x15e9, 0x3334, 0x3445, 0x0023, 0xc0c0, 0x5476, 0x4001, 0xaa55, 0xaa4e, 0x4333, 0x0123, 0xf8e0, 0xfefc, 0x2222, 0x2222, 0x0067, 0x60fa, 0x6555, 0x6777, 0x3222, 0x6654, 0x2f32, 0x0000, 0x0050, 0x0676, 0x9144, 0x9122, 0x0b67, 0xbef6, 0x54ea, 0x68d5, 0xfdd5, 0x6347, 0x5404, 0x9400, 0xac00, 0x9000, 0x7000, 0x0000, 0x4567, 0x0000, 0x0091, 0x5477, 0x7623, 0x0001, 0x40e5, 0x10f1, 0x7743, 0x5322, 0x7665, 0x7643, 0x6667, 0x7765, 0x0067, 0x0e1e, 0x6667, 0x0387, 0xedf6, 0xdd7b, 0xbefa, 0xfeeb, 0x7777, 0x7767, 0x0487, 0x8408, 0x4800, 0x852a, 0x254a, 0x4a9d, 0xff78, 0x4400, 0x0111, 0x0023, 0xfcf0, 0x2223, 0x0312, 0xe0e0, 0x78f0, 0x1c38, 0xcf1e, 0x4576, 0x0400, 0xf800, 0x0034, 0xfff0, 0x5632, 0x0000, 0x0005, 0x5666, 0x0034, 0xcf8e, 0x0123, 0xf800, 0xfcf8, 0x5723, 0x5002, 0x5155, 0xabaa, 0xa8aa, 0x3427, 0x0002, 0x0009, 0x000d, 0x0027, 0x2111, 0x2232, 0x0221, 0xd0f8, 0x83c1, 0x0003, 0x4231, 0x1400, 0x4200, 0x7642, 0x3211, 0x5423, 0xf321, 0x9000, 0x519a, 0x0023, 0xf8fc, 0xf132, 0x5401, 0x5000, 0x4002, 0x0b78, 0x405a, 0x54aa, 0x4852, 0x50aa, 0xf5ff, 0xfbfe, 0xebfd, 0xfbfe, 0x00a0, 0x2088, 0x2080, 0x2088, 0x1067, 0xa8d0, 0xd054, 0xd054, 0x44a8, 0xbfea, 0xeff5, 0xfebb, 0xaff5, 0xbfff, 0xbe6f, 0xf65d, 0xee5d, 0x2a02, 0x1205, 0x4a25, 0x4a15, 0xb5fe, 0x4576, 0x0400, 0x41e5, 0x3346, 0x5776, 0x3672, 0x0001, 0x00e5, 0xfa95, 0x5467, 0x1001, 0x05a0, 0xfd55, 0x5376, 0x4400, 0x1eaa, 0x7523, 0x5401, 0x55e1, 0x55c5, 0x4362, 0x4000, 0x4002, 0x3333, 0x7422, 0x0678, 0x0124, 0x4104, 0x0412, 0x8411, 0x7faf, 0xbfff, 0x7fff, 0x0067, 0x0100, 0x0287, 0xa9ea, 0xa86a, 0x51aa, 0x0076, 0xe080, 0x4576, 0x4000, 0x8581, 0x2534, 0x5001, 0x5542, 0x7555, 0x0076, 0x6020, 0x4576, 0x1400, 0xf8e8, 0x3344, 0x3334, 0x0023, 0x5a80, 0x6123, 0x5400, 0x9551, 0x6666, 0x7666, 0x3456, 0x0167, 0x00aa, 0x8010, 0x1367, 0x0000, 0xe405, 0x5566, 0x1235, 0x2134, 0x5002, 0x55a4, 0xd5fc, 0xfff5, 0x3125, 0x5001, 0x5faa, 0x5daa, 0x3762, 0x4000, 0x70aa, 0x4327, 0x0000, 0x00e5, 0x5322, 0x7775, 0x4222, 0x2765, 0xa400, 0xa8ff, 0x7642, 0x0000, 0x00f9, 0x7543, 0x0387, 0x0a12, 0x3695, 0x7e4b, 0x5eab, 0x0167, 0x00a0, 0x0080, 0x0378, 0xfbfe, 0xd5fe, 0x4004, 0x4010, 0xf458, 0x0000, 0x9555, 0x0165, 0x4010, 0x6290, 0xff65, 0x0000, 0x0441, 0x0245, 0x24d2, 0x4459, 0x40a8, 0xff65, 0x0000, 0x1555, 0x0276, 0x0102, 0x0503, 0x172f, 0x7777, 0x6677, 0x0756, 0xb4ee, 0xd0ed, 0xa054, 0x8000, 0x3f7f, 0x2aa5, 0x0104, 0x0104, 0x0276, 0x00c0, 0xe8d0, 0xfdf4, 0x0045, 0x1240, 0xf654, 0x5400, 0x9955, 0x5545, 0x0265, 0x0080, 0x8850, 0xf5fa, 0x0178, 0x0208, 0x0200, 0x0076, 0xfdf8, 0x7776, 0x0587, 0x0008, 0x0284, 0x2a84, 0x4685, 0x56ad, 0xd75d, 0xff78, 0x0400, 0x1041, 0x0043, 0x0200, 0x3444, 0x4343, 0x0054, 0x1540, 0x0143, 0x5000, 0x54a0, 0x3444, 0x4434, 0x0254, 0x2080, 0x5000, 0xaaa0, 0xff54, 0x0400, 0x4445, 0x0134, 0x50ea, 0x40a8, 0x4444, 0x4334, 0x0654, 0x02c0, 0x0204, 0x4ab4, 0xefaa, 0x1a4f, 0x5ea1, 0xefd5, 0x5555, 0x0143, 0xfdfc, 0xfef2, 0x0154, 0x2904, 0x5082, 0xff45, 0x4400, 0x0444, 0x0067, 0xa0a0, 0xf867, 0x0000, 0x0240, 0x6777, 0x0187, 0x0104, 0x0a02, 0x0056, 0x2040, 0x6667, 0x5666, 0x0167, 0xfcfe, 0xf8ea, 0x7777, 0x6677, 0x0478, 0x4050, 0xad40, 0x8d16, 0x845a, 0x041a, 0x8787, 0x0354, 0x0002, 0x1201, 0x4525, 0xbf57, 0x0134, 0xa4e8, 0xc0c4, 0x0145, 0xfffe, 0xeadb, 0x0365, 0x0a02, 0xaf10, 0x5f15, 0x7faf, 0x0145, 0x5054, 0x20c0, 0xf645, 0x0000, 0x0050, 0x5656, 0x0245, 0x4050, 0x2050, 0x2020, 0x5555, 0x5554, 0x0365, 0x0408, 0x450a, 0x9d0a, 0x9f4a, 0x3465, 0x5401, 0x5554, 0xafba, 0x0554, 0x5080, 0xaaa8, 0x0068, 0x0180, 0x1200, 0x5a40, 0x5455, 0x5554, 0x0378, 0xa50a, 0x0a12, 0x0552, 0x0512, 0x0376, 0x4080, 0xa050, 0xd0a8, 0xe8f4, 0x0387, 0x0040, 0x0050, 0x9040, 0xa048, 0x0432, 0x4710, 0xbfff, 0x0e80, 0xf9a8, 0xe5fa, 0x3333, 0x2333, 0x0243, 0x0102, 0x550b, 0x7f0f, 0x3124, 0x0002, 0xb900, 0x9f55, 0xef75, 0x0032, 0xfaf0, 0x3233, 0x0443, 0x0002, 0x2802, 0xbbdc, 0xfffe, 0xfffe, 0x5444, 0x0034, 0x8260, 0xf534, 0x0001, 0x0004, 0x8082, 0x0023, 0x0102, 0xf432, 0x5400, 0x5499, 0x0434, 0x71fa, 0x70b1, 0x7ff0, 0xabff, 0x2956, 0x0084, 0xfff0, 0x8788, 0x8888, 0x0067, 0x5050, 0x7777, 0x6777, 0x0087, 0x0040, 0xff87, 0x0000, 0x1011, 0x0276, 0xb210, 0xf170, 0xfbf5, 0x0f87, 0xb260, 0xd569, 0xf57b, 0xf5ff, 0x802f, 0xa010, 0x5250, 0x7955, 0x8005, 0xa204, 0xdd08, 0xdf24, 0xa555, 0xad5e, 0xdea7, 0xdf7f, 0x8888, 0x0176, 0x55a8, 0xfefd, 0xf876, 0x5401, 0x6555, 0x1065, 0x7767, 0x0287, 0x0450, 0x54a9, 0xfaef, 0x0156, 0x75fe, 0xa2aa, 0xf756, 0x1000, 0x0011, 0x6667, 0x0356, 0x7df0, 0xa9da, 0xd0aa, 0x4528, 0x0076, 0xa010, 0xff76, 0x1000, 0x4515, 0x0156, 0xa1de, 0x8054, 0xff76, 0x0000, 0x1004, 0x0156, 0x2b4a, 0x0500, 0x0276, 0x0504, 0x9d4a, 0x9f6a, 0x7777, 0x0465, 0x0800, 0x5224, 0xf5dd, 0xa100, 0xab54, 0xf765, 0x1400, 0x6555, 0x0578, 0x4004, 0x8010, 0x5fa0, 0xaea5, 0x4a0a, 0x0815, 0x8787, 0x0156, 0xa4a8, 0x4010, 0x0167, 0xfffe, 0xedfa, 0x0365, 0x0500, 0x560a, 0x57ad, 0xffbf, 0x7777, 0x6767, 0x0187, 0x4010, 0x5220, 0xff87, 0x0000, 0x0104, 0x0767, 0xf5fe, 0xa8fa, 0x40e8, 0x0040, 0xbf7f, 0x354a, 0x040a, 0x0001, 0x7676, 0x0287, 0x0008, 0x8208, 0x5a04, 0xff78, 0x4400, 0x1115, 0x0165, 0x6aaa, 0xeeb5, 0xf756, 0x0400, 0x2000, 0x6665, 0x0176, 0x50a0, 0x9044, 0x7667, 0x7776, 0x0487, 0xa852, 0x655e, 0xbadf, 0xbfdf, 0xdfee, 0x8888, 0x0454, 0x5554, 0x6ab4, 0x01fe, 0x5405, 0x55af, 0x5555, 0x4545, 0x0065, 0x0020, 0xff65, 0x4400, 0x1111, 0x0145, 0xd5fe, 0x40b4, 0x0665, 0x0150, 0x0208, 0x02a4, 0x0805, 0x05aa, 0x5d4a, 0xdfb5, 0x6666, 0x0354, 0x4820, 0xd451, 0x5f55, 0xdadb, 0x5555, 0x5454, 0x0365, 0x0180, 0x9080, 0x10a1, 0xa150, 0x5565, 0x0345, 0x80ca, 0xc05c, 0xa0a8, 0x0050, 0x0378, 0xf5fa, 0xf4da, 0xf2ed, 0xd2ed, 0xf576, 0x4406, 0x1580, 0x4520, 0x4580, 0x1580, 0x4580, 0x4580, 0x5580, 0x6667, 0x0223, 0x9080, 0x2880, 0xdf50, 0xff23, 0x5400, 0x5110, 0x0234, 0x4080, 0x8050, 0xa0d0, 0xf534, 0x0000, 0x0240, 0x0134, 0xffec, 0xeeef, 0x0023, 0x0200, 0x3332, 0x3333, 0x0378, 0x0420, 0x4090, 0x4000, 0x4000, 0x0343, 0x58d0, 0x54a6, 0xd0e8, 0xf0f0, 0x0354, 0x0080, 0x0080, 0x5064, 0x20e8, 0x2543, 0x0001, 0x0094, 0x1070, 0x1234, 0x0113, 0x8080, 0x8080, 0x6523, 0x0000, 0xaa40, 0x3336, 0x6654, 0x2347, 0xa400, 0xad5b, 0x0031, 0xc0c0, 0xf321, 0x0001, 0x0090, 0x0050, 0x3211, 0x0276, 0xf8f4, 0xf8f6, 0xfcfa, 0xf867, 0x1000, 0x0580, 0x0387, 0x0d40, 0x9d45, 0xad46, 0x8ea5, 0x7877, 0x0154, 0xeafa, 0xfdfa, 0x5555, 0x6555, 0x0045, 0x0104, 0x0265, 0xec00, 0xf5fa, 0xfaec, 0xf765, 0x1401, 0x5155, 0x4495, 0x6666, 0x0123, 0x3060, 0x02b0, 0x1234, 0x540f, 0xfe55, 0xfe55, 0xfe55, 0xfe55, 0xfe55, 0xfe66, 0xfe6a, 0xfe59, 0x555f, 0x565b, 0x669b, 0x5a6b, 0x555b, 0x555b, 0x5a5b, 0x56ab, 0x0243, 0x06c0, 0x4020, 0x8301, 0x1f43, 0x1400, 0x0400, 0x0545, 0x1834, 0x8014, 0xf500, 0xf9f4, 0xfdf4, 0xfaf4, 0x6745, 0x1000, 0xaa51, 0x6777, 0x0087, 0x0a02, 0x7787, 0x6777, 0x0187, 0x020a, 0x020a, 0xf756, 0x4006, 0x0254, 0x0255, 0x0a51, 0x0240, 0x0854, 0x0040, 0x0250, 0x5666, 0x0334, 0xa090, 0xc2c0, 0x80c0, 0x4008, 0xff43, 0x0000, 0x0001, 0x0378, 0x4028, 0x4024, 0x4010, 0x4008, 0x0643, 0x01d8, 0xe1d0, 0x2602, 0x00e4, 0xfdfe, 0xfcfe, 0xfae0, 0x6354, 0x0001, 0x0a10, 0xaa50, 0x6555, 0x0053, 0xf0f0, 0x6543, 0x1402, 0x01aa, 0x00ae, 0x00b9, 0x6642, 0x6543, 0x4007, 0xffe4, 0xfe0b, 0xfa07, 0xee03, 0x9952, 0x5502, 0xfe06, 0xff07, 0x3336, 0x0376, 0xd0e0, 0xd0e0, 0xd0d0, 0xd4f0, 0x0387, 0x50a0, 0xa450, 0xa850, 0xa8a4, 0x0354, 0xa8d0, 0xe8f2, 0xd8ed, 0xeafc, 0x0365, 0x7450, 0xa0d0, 0xa0f8, 0xd0e8, 0x0043, 0x4010, 0x6f34, 0x4000, 0x1555, 0x0231, 0xf0f0, 0xf0f0, 0xf0f0, 0x4231, 0x0008, 0x0055, 0x55e0, 0x55e0, 0x5560, 0x55e0, 0x5560, 0x5560, 0x55a0, 0x5660, 0x0443, 0x0804, 0x0406, 0x7841, 0x8028, 0x0201, 0x5643, 0x4400, 0xaa00, 0xf756, 0x1001, 0x400a, 0x1002, 0x0176, 0x0502, 0x070b, 0x7777, 0x6676, 0x0365, 0x0902, 0x2502, 0x270a, 0x6f9b, 0x0378, 0x40aa, 0x80aa, 0x0450, 0x0050, 0xf678, 0x5400, 0x4595, 0x6777, 0x0278, 0xeafe, 0xf5fd, 0xb5ea, 0x3334, 0x2333, 0x0134, 0xf4fa, 0x40f0, 0xff34, 0x0000, 0x0050, 0x0023, 0x4852, 0x3333, 0x2323, 0x0043, 0xa010, 0xff43, 0x0000, 0x0445, 0x0145, 0xa0d4, 0x0050, 0x3645, 0x0002, 0x0010, 0x0022, 0xd555, 0x0254, 0x0002, 0x4402, 0x2b15, 0xf345, 0x0004, 0x5611, 0x5a15, 0x5645, 0x5611, 0x5615, 0x0245, 0x7bf2, 0x17d5, 0x0020, 0x5555, 0x5554, 0x0165, 0x0408, 0x0508, 0x6655, 0xf123, 0xa400, 0xa5aa, 0x0032, 0xf010, 0x3232, 0x0134, 0xfdfe, 0xaac8, 0x0032, 0xf8e0, 0xf423, 0x0000, 0x5005, 0x3432, 0x0143, 0xe9a0, 0xf1f4, 0x0787, 0x50ea, 0xa8d5, 0xaad5, 0xaaf5, 0xf7fe, 0xfafe, 0xfaff, 0xfeff, 0x0156, 0x0422, 0x0509, 0x6656, 0x0076, 0x0800, 0x7666, 0x6665, 0x0276, 0x4f8a, 0xafae, 0xafdf, 0xf867, 0x0001, 0x2001, 0x0001, 0x0032, 0x2040, 0x3432, 0x0232, 0xbcfe, 0xe0fe, 0x8080, 0x0012, 0x8000, 0x2222, 0x1222, 0x0223, 0xfffe, 0xe8e8, 0x80d0, 0x0221, 0xc0c0, 0xcbc1, 0xd7e5, 0xf312, 0x1400, 0x5201, 0x2221, 0x0843, 0x8804, 0x3eec, 0x0d00, 0xc4e4, 0x060a, 0x5709, 0x0067, 0x63d6, 0x0608, 0x0023, 0x1010, 0xf243, 0x0002, 0x0040, 0x004a, 0x1042, 0x3333, 0x0356, 0xd2ea, 0xd26c, 0x4054, 0x2090, 0x0045, 0x00a0, 0x5555, 0x4555, 0x0156, 0xfdfe, 0xfefb, 0x6565, 0x5555, 0x0387, 0x17aa, 0x572a, 0x5f15, 0xbf4a, 0x6777, 0x5666, 0x0167, 0xe8f0, 0xd0f0, 0x7778, 0x0067, 0x0e0a, 0x2367, 0x1000, 0xafea, 0x0043, 0x0010, 0x3333, 0x3434, 0x0323, 0x0fe8, 0xec48, 0x0401, 0xc719, 0xf432, 0x1000, 0x6aaa, 0x0254, 0x010a, 0x0700, 0x052b, 0x4555, 0x4545, 0x0334, 0xedfe, 0xf054, 0x8040, 0x80a0, 0x0078, 0x4000, 0xff78, 0x0000, 0x0040, 0x0043, 0xfcfc, 0xf354, 0x0001, 0x0210, 0x0000, 0x5444, 0x0043, 0xfffc, 0x4443, 0x0354, 0x8ea4, 0xaf5a, 0xaf4e, 0xdfdf, 0x5555, 0x0223, 0xe080, 0xbca1, 0xb0da, 0x4123, 0x5408, 0x41a5, 0xaaaa, 0xaa16, 0xaa16, 0xaad6, 0xaac6, 0xaa36, 0xaac2, 0xaac6, 0x3321, 0xf687, 0x0000, 0x0240, 0x0687, 0x0802, 0x050a, 0x0a88, 0x5fa2, 0xafad, 0x6fda, 0xbfdd, 0x8887, 0x0365, 0xc080, 0x48a0, 0xc2f0, 0xeaa5, 0xf576, 0x0000, 0x0240, 0x0276, 0x0804, 0x0d04, 0x0d8e, 0x7776, 0x0023, 0x1a04, 0xf432, 0x5400, 0x0055, 0x3432, 0x0132, 0xd8e0, 0x0060, 0xf243, 0x0007, 0x0204, 0x0050, 0x2014, 0x0000, 0x0210, 0xa800, 0xaa04, 0x2a00, 0x0112, 0x0e0e, 0x0e0e, 0xf312, 0x5403, 0x5402, 0x5000, 0x5002, 0x2801, 0x0221, 0xfefe, 0xfcfe, 0xf8fc, 0x1111, 0x2221, 0x0143, 0x1200, 0x0c1c, 0x0023, 0x0008, 0x0043, 0x1002, 0x0123, 0x40f0, 0x8040, 0x0143, 0x56f4, 0x0828, 0x0023, 0x0064, 0x0243, 0x000a, 0x0003, 0x0802, 0x2333, 0x0000
};

#if REV < 1
// [D_08D11CD8] D_08D11EF4 Huffman Window 1
u32 D_08d11ef4_window1[] = {
	0x27cff24f, 0xd1d5f75a, 0xf718e79f, 0xb2de84de, 0x193ef664, 0xffdfd3da, 0x9fd9edf6, 0x7f43e761, 0x09664ff6, 0x3dee502f, 0xcff3e7e3, 0xf3fec798, 0x9be9ccee, 0xae79cbf4, 0xdfddbc9f, 0x2f297b9d, 0xbb9bcfdd, 0xd6fb2fdc, 0x7f3973ff, 0xee6e5dda, 0xaf9ce926, 0x0fe7dbb6
};

// [D_08D11D30] D_08D11EF4 Huffman Window 2
u32 D_08d11ef4_window2[] = {
	0x5550ab02, 0x113802b9, 0x0aae6f9d, 0x95755035, 0x05052297, 0x91d285f0, 0xd587e5b2, 0x0842151f, 0x14409005, 0x14822922, 0x42b41502, 0x46a0d295, 0x48208952, 0x2a4c5120, 0x00000fc0
};
#else
// [D_08D11CD8] D_08D11EF4 Huffman Window 1
u32 D_08d11ef4_window1[] = {
	0x27cff24f, 0xd1d5f75a, 0xf718e79f, 0xb2de84de, 0x193ef664, 0xffdfd3da, 0x9fd9edf6, 0x7f43e761, 0x09664ff6, 0x3dee502f, 0xcff3e7e3, 0xf3fec798, 0x9be9ccee, 0xae79cbf4, 0xdfddbc9f, 0x2f297b9d, 0xbb9bcfdd, 0xd6fb2fdc, 0x7f3973ff, 0xee6e5dda, 0xaf9ce926, 0x4fe7dbb6
};

// [D_08D11D30] D_08D11EF4 Huffman Window 2
u32 D_08d11ef4_window2[] = {
	0x5550ab02, 0x113802b9, 0x0aae6f9d, 0x95755035, 0x05052297, 0x91d285f0, 0xd587e5b2, 0x0842151f, 0x14409005, 0x14822922, 0x42b41502, 0x46a0d295, 0x48208952, 0x2a4c5120, 0x00000000
};
#endif

// [D_08D11D6C] D_08D11EF4 Huffman
struct Huffman D_08d11ef4_huffman[] = {
	/* Data */			D_08d11ef4_huffmandata,
	/* Size */			0x13cc,
	/* Count */			0x2be,
	/* Window 1 */		D_08d11ef4_window1,
	/* Window 2 */		D_08d11ef4_window2,
};

// [D_08D11D7C] D_08D11EF4 RLE Data
u8 D_08d11ef4_rledata[] = {
	0x1, 0xf, 0xd, 0x3, 0x16, 0x3, 0x2, 0x5, 0xc, 0x8, 0x2, 0xa, 0x11, 0x5, 0xb, 0x3, 0x20, 0x4, 0x19, 0x4, 0x1c, 0x3, 0xf, 0x5, 0x11, 0x7, 0x2a, 0x6, 0xb, 0x5, 0xb, 0x5, 0x5, 0xb, 0x3, 0x3, 0x3, 0x7, 0x2, 0x3, 0x25, 0x6, 0x6, 0x9, 0x8, 0x9, 0x2, 0xe, 0x2d, 0x3, 0x19, 0x3, 0x7, 0x3, 0x2, 0x8, 0x19, 0x4, 0x4a, 0x9, 0x9, 0x7, 0x10, 0x10, 0x25, 0x3, 0x2, 0x3, 0x73, 0x10, 0xd, 0x3, 0x1, 0x5, 0x1b, 0x8, 0xc, 0xb, 0x21, 0x9, 0x17, 0xb, 0x7, 0x8, 0x7, 0xd, 0x2, 0xa, 0x6, 0xc, 0x7, 0x4, 0x5, 0x3, 0x1, 0x7, 0x1c, 0x3, 0x1a, 0x7, 0xb, 0x5, 0x39, 0x9, 0xd, 0x9, 0x11, 0x9, 0xd, 0x3, 0x5a, 0xc, 0x9, 0x7, 0x1c, 0x4, 0x21, 0x3, 0x88, 0x4, 0x28, 0x8, 0x9, 0x5, 0xf, 0x3, 0xc, 0x4, 0x51, 0x9, 0x30, 0x6, 0x71, 0x7, 0x9, 0xd, 0x2, 0x6, 0xf, 0xb, 0x11, 0x9, 0x6, 0xc, 0x27, 0x4, 0x2, 0x4, 0x7, 0x6, 0x2, 0x14, 0x41, 0x3, 0x2, 0x4, 0xd, 0x9, 0x8, 0x4, 0x2b, 0x9, 0x7, 0xa, 0x20, 0x8, 0x66, 0x4, 0x35, 0x8, 0x31, 0x5, 0x2, 0x8, 0x27, 0x3, 0x1b, 0xa, 0x2, 0x3, 0x46, 0x3, 0x1e, 0x5, 0x1c, 0x5, 0x30, 0x3, 0x3, 0x4, 0x1b, 0xb, 0x19, 0x6, 0x11, 0x5, 0xa, 0x10, 0xd1, 0x4, 0xc, 0x4, 0x1c, 0xd, 0xb, 0x7, 0x49, 0x7, 0x3, 0x3, 0x17, 0x3, 0x2c, 0x4, 0x16, 0x9, 0x3, 0x3, 0x13, 0x8, 0x27, 0x6, 0xe, 0x7, 0x19, 0x5, 0x1c, 0x4, 0x8, 0x7, 0x2, 0x6, 0x2c, 0x4, 0x2, 0x7, 0x4b, 0x3, 0x25, 0x4, 0x4a, 0x8, 0x8, 0x4, 0x41, 0x8, 0x1e, 0x4, 0x5, 0xb, 0x7, 0x3, 0x7, 0x3, 0x56, 0x4, 0x5, 0x6, 0xb, 0xc, 0xb, 0x3, 0x3, 0x3, 0x9, 0x3, 0x6, 0x4, 0xf, 0x5, 0xa, 0x5, 0x2, 0x6, 0x17, 0x4, 0xa, 0x5, 0xa, 0x7, 0x33, 0x3, 0x44, 0x5, 0x3, 0x5, 0xd, 0x3, 0x11, 0x8, 0xa, 0x6, 0xb, 0x6, 0x2, 0x7, 0xf, 0x5, 0x3, 0x6, 0x24, 0x5, 0x8, 0x8, 0x41, 0x5, 0x2, 0x3, 0x6, 0x9, 0x23, 0x3, 0x91, 0x9, 0x7, 0xb, 0x2, 0x3, 0x20, 0x14, 0x6, 0xd, 0xf, 0x6, 0x44, 0xd, 0x93, 0x8, 0x2, 0x5, 0x3, 0xd, 0x22, 0x5, 0x2, 0x8, 0xb, 0xc, 0x3, 0x5, 0x2, 0x6, 0x2, 0x6, 0x4d, 0x3, 0x7, 0x3, 0x11, 0x3, 0x95, 0xd, 0x52, 0x5, 0x7, 0x5, 0x2, 0x3, 0x5, 0x3, 0x43, 0x7, 0x3b, 0x4, 0x2, 0x5, 0xd1, 0x8, 0x1d, 0x4, 0x2, 0x3, 0x2, 0x0, 0x80, 0x0
};

// [D_08D11EF4] D_08D11EF4 Graphics
struct CompressedGraphics D_08d11ef4 = {
	/* Huffman Data */		D_08d11ef4_huffman,
	/* RLE Data */			D_08d11ef4_rledata,
	/* RLE Size */			0x176,
	/* RLE Offset */		0x1a00,
	/* Double Compressed */	TRUE,
};

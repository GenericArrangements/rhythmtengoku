#include "global.h"
#include "graphics.h"

// // //  D_08CDBACC  // // //

// [D_08CDAE88] D_08CDBACC Huffman Data
u16 D_08cdbacc_huffmandata[] = {
	0x02a1, 0x0400, 0xf51f, 0x0c45, 0xfa01, 0x0005, 0x5500, 0x5502, 0x5502, 0x552a, 0x5502, 0x5502, 0x1aaa, 0x0010, 0xf0f0, 0x06a1, 0x2020, 0xa860, 0x2524, 0x0208, 0x4b32, 0x0a7a, 0x0073, 0x0000, 0x05a1, 0x8400, 0xa4be, 0x84a4, 0xf0b8, 0x9090, 0x8494, 0x11aa, 0x1aa1, 0x0031, 0x00f0, 0x00a1, 0x8f82, 0xa1a1, 0x0031, 0x0f00, 0xa13e, 0x5403, 0x54aa, 0x54aa, 0x54af, 0x54aa, 0x0031, 0x0f00, 0x01a1, 0x1010, 0x5c30, 0x11a1, 0x0031, 0x0f00, 0x01a1, 0x9010, 0xda59, 0xaf1a, 0x1000, 0x5555, 0x00e3, 0x0ff0, 0xf43e, 0x0001, 0xaa40, 0xaa4a, 0x3e44, 0x01e3, 0xff00, 0x0ff0, 0xff4e, 0x0000, 0x5500, 0x0031, 0x0f00, 0x01a1, 0xf420, 0x2525, 0x1a1a, 0x0031, 0x0f00, 0x01a1, 0x8780, 0xa484, 0xe3a1, 0x1000, 0x00fa, 0x003e, 0xf3f0, 0xf1e3, 0x5003, 0x50a4, 0x50a4, 0x50a4, 0x50a4, 0x11e3, 0x00e3, 0xff00, 0xf4e3, 0x0002, 0x5554, 0xaaa4, 0xaaa4, 0x331f, 0x44ee, 0x331f, 0x44ee, 0x331f, 0x44ee, 0x331f, 0x44ee, 0xe31f, 0xa401, 0xa4af, 0xa4af, 0x1f4e, 0x5000, 0x5ffe, 0xef13, 0x0004, 0xff90, 0x009f, 0x0090, 0x0090, 0x3f90, 0xf133, 0x3e44, 0xf133, 0x3e44, 0xf133, 0x1111, 0x023e, 0xf0fc, 0xfcfc, 0xfcfc, 0xff3e, 0x5000, 0x5055, 0x01a1, 0xf0f0, 0x9790, 0x111a, 0x1111, 0x00b4, 0x7800, 0xf9b4, 0x9002, 0xa46a, 0xa96a, 0xa91a, 0x44b9, 0x00b4, 0x001e, 0x431f, 0xe400, 0xf9ff, 0x0034, 0xc010, 0xf134, 0x0005, 0x0094, 0x00a4, 0x40a5, 0x40a9, 0x50aa, 0x94aa, 0x0141, 0x3f10, 0xfc7e, 0xf341, 0x4001, 0xc955, 0x2555, 0x0234, 0xf080, 0x010f, 0x0402, 0x1f43, 0x0000, 0x0e55, 0xe1f3, 0x0004, 0xfff9, 0x0009, 0x0009, 0x0009, 0xff09, 0x331f, 0x44ee, 0x331f, 0x1f4e, 0x5000, 0xabaa, 0x413f, 0x000b, 0x0009, 0x0027, 0x009f, 0x027f, 0x09ff, 0xfff5, 0xffd6, 0xffda, 0x555a, 0xfd6a, 0xfdaa, 0xf5aa, 0x1111, 0xf43e, 0x9400, 0xaaff, 0x1144, 0x1444, 0x00f1, 0xff8c, 0xf14f, 0x0004, 0x0025, 0x0025, 0x0009, 0x0002, 0x5655, 0x4444, 0x001f, 0x00fe, 0x4444, 0x00f1, 0xff00, 0x4444, 0x1444, 0x00f1, 0xff80, 0xf41f, 0x0005, 0x00a4, 0x00a4, 0x0090, 0x0040, 0xa5aa, 0x50aa, 0x4441, 0x001f, 0x00e0, 0xff14, 0x9004, 0x90aa, 0x90aa, 0x90aa, 0xa4aa, 0xa9aa, 0xffff, 0x001a, 0x1d50, 0x00e1, 0xff00, 0x0013, 0xff00, 0x3e1f, 0x0000, 0xfe55, 0x3e1a, 0x5000, 0x55fe, 0x003e, 0xfe0e, 0xff13, 0x0000, 0x5555, 0xffff, 0x001a, 0x3ed6, 0x00e1, 0xff00, 0x0013, 0xff00, 0xffff, 0x001a, 0xc67a, 0x00e1, 0xff00, 0x0013, 0xff00, 0x413f, 0x0001, 0xaa55, 0x00aa, 0x13e4, 0x0008, 0x0090, 0x0090, 0x0090, 0xa090, 0xaa9a, 0x0a9a, 0x0090, 0xaaf0, 0xffff, 0x0034, 0x00f0, 0x00a1, 0xdc42, 0x00e1, 0xff00, 0x0013, 0xff00, 0xffff, 0x00a1, 0x3142, 0x00e1, 0xff00, 0x0013, 0xff00, 0x1e3f, 0x0002, 0xf9a5, 0xf9a5, 0xf9a5, 0x00e3, 0x0cec, 0xf1e3, 0x5001, 0x90aa, 0xeaff, 0x4e3f, 0x0006, 0xfff9, 0xfff9, 0xfff9, 0xfff9, 0xf559, 0x5559, 0x5ff9, 0xef41, 0x5006, 0xaa55, 0xaa52, 0xaa52, 0xaa52, 0xaa52, 0xaa4a, 0xaa2a, 0x3e44, 0xf133, 0x3e44, 0xf133, 0x3e44, 0xf133, 0x3e44, 0xef13, 0x9001, 0x9030, 0x9030, 0x3e44, 0x4f13, 0x9000, 0x955f, 0x01e3, 0x3030, 0x3030, 0xf1e3, 0x0002, 0xaa05, 0xff05, 0xff06, 0x111f, 0x038f, 0xc060, 0x8080, 0x70c0, 0xf300, 0xfff8, 0x8888, 0x023f, 0x9290, 0x6a96, 0x0102, 0x48f3, 0x9401, 0x9455, 0x5456, 0xf148, 0x000f, 0xff95, 0xff95, 0xff95, 0xff95, 0xff95, 0xff95, 0xff95, 0xff95, 0x55bf, 0x55bf, 0x55bf, 0x55bf, 0x55bf, 0x55bf, 0x55bf, 0x55bf, 0x018f, 0xf080, 0xc040, 0xffff, 0x8fff, 0x031f, 0x4040, 0x4040, 0x4040, 0x4040, 0x013f, 0x8480, 0x0484, 0xff33, 0x028f, 0x6040, 0x1f3f, 0x3e00, 0xffff, 0xff8f, 0x013f, 0x1010, 0x1010, 0x341f, 0x0006, 0x00a9, 0x00a9, 0x00a9, 0x03a9, 0x03a9, 0x03a9, 0x03a9, 0x4441, 0x013f, 0x5070, 0x7050, 0x038f, 0x0602, 0x0c0c, 0x0208, 0x01f3, 0x031f, 0x0808, 0x0808, 0x0808, 0x040c, 0x05f3, 0xfafa, 0xfdfd, 0x6b5b, 0x4b73, 0x2d7f, 0x7559, 0xff3f, 0x038f, 0x3f60, 0x801f, 0x8080, 0x7fc1, 0xff14, 0x0002, 0x5555, 0xa4aa, 0xa9aa, 0xffff, 0x0014, 0x9018, 0x00f1, 0x7f00, 0xff1f, 0x0000, 0x0040, 0x0014, 0x0100, 0xf8f1, 0x0000, 0x5500, 0xff88, 0x004f, 0x0ff0, 0x18f4, 0x0011, 0x5500, 0x55a9, 0x0000, 0x55c0, 0x55c0, 0x55c0, 0x55c0, 0x5570, 0x5570, 0x5570, 0x557c, 0x0035, 0x0035, 0x0035, 0x0035, 0x0035, 0x0035, 0x0035, 0x1444, 0x00f4, 0xfff0, 0x01f3, 0xf0f0, 0xf0f0, 0x3333, 0x004f, 0xff00, 0x021f, 0x4040, 0x4040, 0x4040, 0xf41f, 0x0000, 0x0010, 0x41ff, 0x023f, 0x1900, 0xf979, 0x1979, 0x004f, 0xff00, 0xffff, 0xfff3, 0x064f, 0x2ff0, 0x1020, 0x090c, 0xb009, 0xa0a0, 0xa01e, 0x80a0, 0xf14f, 0x5407, 0x0015, 0x00a5, 0x0095, 0x0095, 0x0095, 0x0095, 0x0095, 0x0095, 0x1444, 0x014f, 0x4840, 0x0778, 0x341f, 0xa407, 0xa400, 0xa400, 0xa900, 0xa900, 0xa900, 0xa900, 0xa900, 0xf000, 0xffff, 0xf8ff, 0x031f, 0x0180, 0x0101, 0x0101, 0x0101, 0xfff1, 0x003f, 0x0a90, 0xf8ff, 0xfff3, 0x001f, 0x0ff0, 0x014f, 0x5020, 0x2232, 0xff4f, 0x001f, 0x0ff0, 0x00f4, 0xf642, 0x44f4, 0xff44, 0x001f, 0x0ff0, 0x004f, 0x003e, 0x444f, 0xff44, 0x001f, 0x0ff0, 0x444f, 0x001f, 0x3010, 0xf14f, 0x0001, 0x0009, 0x0025, 0xf144, 0x001f, 0x0ff0, 0x00f4, 0x7b48, 0xf4ff, 0x4fff, 0x001f, 0x83f0, 0xff14, 0x5003, 0x01aa, 0x06aa, 0x06aa, 0x06aa, 0x001f, 0x0ff0, 0x1111, 0x1111, 0x003f, 0xc080, 0x021f, 0x18e0, 0x0204, 0x0202, 0x1111, 0x1111, 0x013f, 0x82b0, 0x06ba, 0x43f1, 0x0009, 0x5500, 0x5556, 0x5515, 0x5585, 0x55e1, 0x15f8, 0x85fe, 0x01ff, 0xf800, 0xfeff, 0x0014, 0x0ff0, 0x0134, 0x0408, 0x8102, 0x3333, 0x0014, 0x0ff0, 0xf143, 0x0001, 0x5500, 0xaaaa, 0x0143, 0xfdfe, 0xf7fb, 0xf143, 0x0003, 0x5554, 0xeaaa, 0x8555, 0x1555, 0x4444, 0x00a1, 0x5070, 0x0181, 0xc040, 0x80c0, 0x02a1, 0x5050, 0x4a40, 0x2809, 0xaa1a, 0x1aa1, 0x0181, 0x6040, 0x3f7f, 0x4b91, 0x0003, 0x5500, 0x55e5, 0xaaf9, 0xfffe, 0x431f, 0x9b44, 0x4431, 0x99b4, 0x4443, 0x00b4, 0xff0e, 0x9999, 0x004b, 0x0f00, 0x31fb, 0x0001, 0x5655, 0x5b55, 0x134f, 0x0003, 0x0039, 0x00e5, 0x0394, 0x0e50, 0x0214, 0x1c0e, 0x7038, 0xc0e0, 0x13f4, 0x0005, 0x0054, 0x0058, 0x0078, 0x00e0, 0x0080, 0x0003, 0xffff, 0x00a1, 0x1010, 0x1111, 0x0343, 0xfdfe, 0xf7fb, 0xdfef, 0x7fbf, 0xf143, 0x5006, 0x4255, 0x4a55, 0x0a55, 0x2a55, 0xaa54, 0xaa54, 0xaa50, 0x4331, 0x01a1, 0x8000, 0x00c0, 0xffa1, 0x0000, 0x0050, 0x0034, 0x8080, 0xf134, 0x4003, 0x40a9, 0x50aa, 0x94aa, 0xa4aa, 0x0031, 0x1030, 0x02a1, 0x82b0, 0x96ba, 0x010a, 0x111a, 0x1111, 0x00b9, 0xff00, 0x4444, 0x009b, 0xff00, 0xffb9, 0x0000, 0x0040, 0x014b, 0xef0e, 0xffef, 0x31f4, 0x0004, 0x9555, 0xe555, 0x3955, 0x0e55, 0x0395, 0x31ff, 0xb444, 0x431f, 0x99b4, 0xb431, 0xa401, 0xa9fe, 0xfeaa, 0x009b, 0xffe0, 0x9999, 0xf143, 0x5002, 0x55e1, 0x5585, 0x5515, 0x4111, 0x0134, 0x0870, 0xc7ff, 0xf314, 0x0004, 0x8295, 0x0255, 0x0a55, 0x2955, 0x2555, 0x0031, 0x80c0, 0x1111, 0x1111, 0x0043, 0xef78, 0xff34, 0x0000, 0x5555, 0x0081, 0xc0c0, 0x1111, 0x8111, 0x02a1, 0xf0f0, 0x48f0, 0x4848, 0x1111, 0x11aa, 0x0081, 0x7f60, 0x8888, 0x1188, 0x01a1, 0x9190, 0x0f97, 0x111a, 0x0341, 0x3f10, 0xfc7e, 0xf1f8, 0xf7f3, 0xf134, 0x0002, 0xe400, 0x9000, 0x4000, 0x0114, 0x3010, 0xf070, 0x0181, 0xc080, 0x70f0, 0x02a1, 0x9290, 0x6a96, 0x0102, 0xf81a, 0x9401, 0x9455, 0x9456, 0x0018, 0xf0f0, 0xf431, 0x4003, 0x00a9, 0x00a9, 0x00a5, 0x0094, 0x4311, 0x0031, 0x80c0, 0x1111, 0x1111, 0x0034, 0x1010, 0xf1a4, 0x0000, 0xaa99, 0x1aaa, 0x0381, 0x0602, 0x0c0e, 0xf302, 0x01f3, 0x1811, 0x1134, 0x0031, 0x1030, 0x02a1, 0x2020, 0x48c0, 0xaa0b, 0xa111, 0x11a1, 0x0381, 0x8080, 0x4080, 0x8000, 0xffc1, 0x3f18, 0x0000, 0x5540, 0x431f, 0xb444, 0x4431, 0x39b4, 0x9005, 0xa403, 0xa900, 0xaa40, 0xaa90, 0xaaa4, 0x5554, 0x0034, 0x8080, 0xf134, 0x0002, 0x0050, 0x0094, 0x00a4, 0x1133, 0x00b9, 0x0ff0, 0x34b9, 0x4006, 0x9000, 0xa400, 0xa900, 0xaa40, 0xaa90, 0xaaa4, 0xaaa9, 0xf143, 0x4000, 0x40e1, 0x1344, 0x0043, 0xf878, 0x0114, 0x0100, 0x0703, 0x0343, 0x1d1e, 0x371b, 0xdfef, 0x7fbf, 0x3333, 0x0114, 0xc0e0, 0x0080, 0x0381, 0x6020, 0xc0e0, 0x3020, 0x1f3f, 0x00a1, 0x0100, 0x111a, 0x1111, 0x0034, 0x1010, 0xa134, 0x000e, 0x0005, 0x0016, 0x001a, 0x005a, 0x1aab, 0x5aab, 0x6aab, 0xaaab, 0x9000, 0xa900, 0xaa80, 0xaa90, 0xaaa0, 0x5556, 0x0001, 0x1784, 0x5401, 0xa955, 0xffaa, 0x0043, 0xff00, 0x8888, 0x8888, 0x0047, 0xfff0, 0x8413, 0x5404, 0x5554, 0x5552, 0x0501, 0xa0a8, 0xe0fe, 0x4378, 0x5401, 0x57fa, 0xffff, 0xf431, 0x4003, 0x00aa, 0x0040, 0xa4aa, 0x40aa, 0x0014, 0xf1f0, 0x8431, 0xa403, 0xa000, 0x5500, 0xaa15, 0xff6a, 0x1748, 0x4001, 0x2aaa, 0xffaa, 0x8431, 0x9002, 0x1500, 0x6a00, 0xbf05, 0x8734, 0x5001, 0x53ea, 0x502a, 0x0014, 0x81c0, 0xf341, 0x5002, 0xc955, 0x2555, 0x9555, 0x0014, 0xc0e0, 0x4441, 0x0043, 0xff00, 0x0194, 0xf0e0, 0xc780, 0x4499, 0x0043, 0xff00, 0x0149, 0x0f1e, 0x387f, 0x4499, 0x431f, 0xa400, 0xf9aa, 0x0034, 0xf010, 0x3333, 0x01a1, 0x0800, 0x5500, 0x0041, 0xff00, 0x0031, 0xff00, 0x01a1, 0x1100, 0x5500, 0x0041, 0xff00, 0x0031, 0xff00, 0x0094, 0x0100, 0xa143, 0x0003, 0x5500, 0x55a1, 0x15e8, 0x95aa, 0x1a11, 0x0014, 0x00f8, 0x0034, 0xff80, 0x00e4, 0xc700, 0xeeee, 0xe444, 0x0034, 0x0ff0, 0x00e4, 0x7e30, 0xee44, 0x00a4, 0xe8f0, 0x444a, 0x0013, 0xff00, 0x01a1, 0x0040, 0x0055, 0x0014, 0xff00, 0xe413, 0x0002, 0x8500, 0x15aa, 0x55ea, 0x4443, 0x111a, 0x0041, 0xfe0e, 0x0034, 0xf010, 0x4f13, 0x9000, 0x4fff, 0xf34e, 0x5400, 0x5095, 0x00a4, 0xf070, 0xb134, 0x0000, 0xaa55, 0x4bbb, 0x0034, 0x8080, 0xf134, 0x0002, 0x0090, 0x0094, 0x00a4, 0x1133, 0x0043, 0xff00, 0x3333, 0x1111, 0x0034, 0xf010, 0x0013, 0xf010, 0x0134, 0x0080, 0xff80, 0x4f13, 0x0000, 0x5540, 0x431f, 0xbb44, 0x4431, 0x0034, 0x0010, 0x4444, 0xbbb4, 0x009b, 0x0fe0, 0x004b, 0x00f0, 0xf4b9, 0x0002, 0x0040, 0x0090, 0xffa4, 0x431f, 0x4002, 0x9000, 0xe400, 0xf900, 0x1fff, 0xb443, 0x31ff, 0x9b44, 0x431f, 0x0003, 0x0001, 0x0006, 0x001b, 0x006e, 0x343a, 0xfff1, 0x43aa, 0xff13, 0x0034, 0xff80, 0xff13, 0x0000, 0x5540, 0x0143, 0xfffe, 0x00fe, 0x3331, 0x3333, 0x0141, 0xfc70, 0xf1f8, 0x1a43, 0x5002, 0x4a05, 0x2aa1, 0x5585, 0xf134, 0xe400, 0x9000, 0x0034, 0x3080, 0xfa34, 0x5401, 0xa91a, 0xa46a, 0x0034, 0x1010, 0xa314, 0x0003, 0x0009, 0xa029, 0xf825, 0xe0a5, 0x0014, 0x381c, 0xa314, 0x0008, 0x0015, 0xa00a, 0xf82f, 0xe0bf, 0x5550, 0x5560, 0x5580, 0x5a00, 0xa000, 0x79b4, 0x0004, 0x0555, 0x06aa, 0x01aa, 0x006a, 0xfffc, 0xf143, 0x5401, 0x0255, 0xaa00, 0x0047, 0xff00, 0x0013, 0xcf00, 0xf341, 0x0002, 0x0aa5, 0xa555, 0x56a0, 0x0031, 0xf0e0, 0x4f13, 0x4000, 0xffc6, 0x4431, 0x0034, 0x0010, 0x19b4, 0x0001, 0x5554, 0xaaa9, 0xf431, 0x0001, 0x5050, 0xa5a5, 0x0014, 0xf3f0, 0xf431, 0xa401, 0xa900, 0xaa50, 0x4433, 0x0074, 0x07f0, 0xf134, 0x4001, 0x9555, 0x40aa, 0x0013, 0x1f8c, 0xf143, 0x0003, 0xe155, 0x8555, 0x1555, 0x57ff, 0x0043, 0xc0c0, 0x3333, 0x4433, 0x0114, 0x701c, 0xc0e0, 0x4444, 0xffff, 0x0134, 0xf0f0, 0x00f0, 0x0014, 0x7038, 0xff41, 0x5400, 0xaa01, 0xff44, 0x0043, 0x2020, 0x0143, 0x0001, 0xa904, 0xff55
};

// [D_08CDB8A8] D_08CDBACC Huffman Window 1
u32 D_08cdbacc_window1[] = {
	0xf7bef65b, 0xece0700d, 0xed95963f, 0x07fbfeef, 0xbd967974, 0xa6cddb7d, 0x99cda66c, 0xafa0cef7, 0xceb0f4fd, 0x6597fa49, 0xe79dddc6, 0x77fb6dff, 0x1e5bf3d6, 0xffe70879, 0x0dc9f7df
};

// [D_08CDB8E4] D_08CDBACC Huffman Window 2
u32 D_08cdbacc_window2[] = {
	0xbd42a102, 0x2c517d54, 0x832fa030, 0x00a21520, 0x96428844, 0x5104ad0a, 0xf7301ac2, 0x64010082, 0x4eacb885, 0x000142ad
};

// [D_08CDB90C] D_08CDBACC Huffman
struct Huffman D_08cdbacc_huffman[] = {
	/* Data */			D_08cdbacc_huffmandata,
	/* Size */			0x920,
	/* Count */			0x1dc,
	/* Window 1 */		D_08cdbacc_window1,
	/* Window 2 */		D_08cdbacc_window2,
};

// [D_08CDB91C] D_08CDBACC RLE Data
u8 D_08cdbacc_rledata[] = {
	0x7, 0x3, 0x25, 0x3, 0xf, 0xf, 0xf, 0x4, 0xc, 0x3, 0x1, 0x3, 0x7, 0x3, 0x3, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0xf, 0x3, 0x5, 0xb, 0xd, 0x3, 0x5, 0x3, 0x3, 0x3, 0x3, 0xd, 0x3, 0x1f, 0x5, 0x3b, 0xb, 0x5, 0x1b, 0x16, 0x1b, 0x18, 0x8, 0x6, 0xf, 0x3, 0x7, 0x8, 0x8, 0x11, 0x3, 0x1d, 0xf, 0x1, 0x8, 0xf, 0x8, 0x1, 0x9, 0x7, 0xb, 0x5, 0xa, 0xe, 0x7, 0x1, 0x7, 0x14, 0x4, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0x1, 0x9, 0x3, 0x3, 0x11, 0xd, 0x3, 0x9, 0x1, 0x3, 0xf, 0x3, 0xd, 0x3, 0x2d, 0x3, 0x27, 0x3, 0xc, 0x12, 0x9, 0x7, 0x2b, 0xd, 0x2, 0x5, 0x6, 0x4, 0x10, 0x7, 0x9, 0x6, 0xc, 0x1c, 0x2, 0x3, 0x8, 0x5, 0x10, 0x3, 0x11, 0x6, 0x16, 0x4, 0x8, 0x7, 0x9, 0x7, 0x9, 0x4, 0x6, 0x4, 0x4, 0xc, 0x6, 0x3, 0x3, 0x9, 0x4, 0xc, 0x7, 0xa, 0x4, 0xb, 0x7, 0x9, 0x2, 0xc, 0x3, 0xd, 0x5, 0xb, 0x53, 0x5, 0x2, 0x6, 0x9, 0x9, 0x7, 0xa, 0x6, 0x9, 0x8, 0x8, 0x17, 0xa, 0x12, 0xc, 0x2, 0xe, 0x14, 0xc, 0x3, 0x12, 0xd, 0x3, 0x3, 0x3, 0x7, 0x3, 0x3, 0x3, 0x7, 0x3, 0x3, 0x6, 0x2, 0x7, 0xa, 0x4, 0x3, 0x3, 0x7, 0x3, 0xd, 0x3, 0x3, 0xd, 0x3, 0x4, 0x4, 0x6, 0xb, 0x4, 0x3, 0x3, 0x7, 0x3, 0x3, 0x3, 0x2, 0x9, 0x11, 0xa, 0xd, 0x3, 0x3, 0x7, 0x3, 0x3, 0xd, 0x3, 0x7, 0x9, 0x1, 0xb, 0x4, 0x7, 0x8, 0xe, 0x4, 0xb, 0x5, 0xb, 0x5, 0x6, 0x10, 0x9, 0x7, 0x7, 0x3, 0x3, 0x3, 0x7, 0x3, 0x3, 0x23, 0x3, 0x3, 0x3, 0x1, 0xb, 0x2f, 0x5, 0x1, 0xc, 0x11, 0x4, 0x9, 0x7, 0x2, 0x4, 0x2, 0x6, 0x5, 0x5, 0xa, 0x6, 0x7, 0x4, 0x11, 0x4, 0xd, 0x7, 0x5, 0xb, 0x5, 0xd, 0x13, 0x9, 0xb, 0x4, 0xe, 0x8, 0x6, 0x3, 0x7, 0xd, 0x19, 0x3, 0x10, 0x6, 0x9, 0x7, 0xb, 0x5, 0x11, 0xb, 0xf, 0x8, 0x8, 0x4, 0x7, 0xb, 0x4, 0xb, 0x5, 0xb, 0x5, 0xe, 0x6, 0x6, 0xc, 0x5, 0x11, 0x4, 0xc, 0xd, 0x33, 0x7, 0x9, 0x6, 0x8, 0x8, 0xd, 0xc, 0x1, 0x3, 0x14, 0x8, 0x1, 0x6, 0x9, 0x4, 0x8, 0x4, 0x1, 0x3, 0x7, 0x5, 0x6, 0xa, 0x2, 0x5, 0x10, 0x9, 0x1, 0x5, 0xb, 0x3, 0x9, 0x3, 0x3, 0x3, 0xb, 0xb, 0xb, 0x5, 0xd, 0x3, 0xd, 0x3, 0xa, 0xa, 0x26, 0xa, 0x19, 0x7, 0x9, 0x3, 0x2c, 0x4, 0x4, 0x4, 0x1, 0x3, 0x1, 0x7, 0x2, 0x13, 0x10, 0x3, 0x1, 0x7, 0x1, 0x3, 0x7, 0x5, 0xb, 0x5, 0xc, 0x4, 0x3, 0x5, 0x9, 0x4, 0xc, 0x3, 0xd, 0x4, 0x6, 0x5, 0xb, 0x5, 0x7, 0x3, 0xd, 0x3, 0x7, 0x3, 0x13, 0x3, 0x11, 0xd, 0xf, 0x9, 0x7, 0x13, 0xb, 0x9, 0xe, 0x4, 0x1, 0xa, 0xf, 0x6, 0x7, 0x9, 0x4, 0xa, 0x33, 0xff, 0x0, 0x0
};

// [D_08CDBACC] D_08CDBACC Graphics
struct CompressedGraphics D_08cdbacc = {
	/* Huffman Data */		D_08cdbacc_huffman,
	/* RLE Data */			D_08cdbacc_rledata,
	/* RLE Size */			0x1ae,
	/* RLE Offset */		0x1000,
	/* Double Compressed */	TRUE,
};

struct Vector2 D_08cdbadc = {200, 148};
struct Vector2 D_08cdbae0 = {120, 136};
struct Vector2 D_08cdbae4 = {120, 136};
struct Vector2 D_08cdbae8 = {120, 136};
struct Vector2 D_08cdbaec = {120, 136};
struct Vector2 D_08cdbaf0 = {120, 136};
struct Vector2 D_08cdbaf4 = {120, 136};
struct Vector2 D_08cdbaf8 = {110, 80};
struct Vector2 D_08cdbafc = {142, 80};
struct Vector2 D_08cdbb00 = {120, 136};

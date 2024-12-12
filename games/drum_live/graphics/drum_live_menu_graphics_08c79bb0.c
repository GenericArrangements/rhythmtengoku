#include "global.h"
#include "graphics.h"

// // //  D_08C79BB0  // // //

// [D_08C78A14] D_08C79BB0 Huffman Data
u16 D_08c79bb0_huffmandata[] = {
	0x003e, 0xfe00, 0xfb3e, 0xa405, 0xa46a, 0xa4a9, 0xa4a5, 0xa4a5, 0xa4a5, 0x00a9, 0xeeee, 0x00b3, 0xe860, 0xfe3b, 0x1001, 0x1041, 0xaaaa, 0x00b3, 0xdad0, 0xfeb3, 0x5401, 0x1451, 0xaaaa, 0x00b3, 0xf0d0, 0xff3b, 0x5400, 0x5410, 0x013e, 0x0f00, 0xfff0, 0x0034, 0xf0f0, 0x003e, 0xff00, 0xff34, 0x0000, 0x0055, 0x003e, 0xff00, 0x00c4, 0xc0c0, 0x0043, 0xfcfc, 0x00a4, 0x02fe, 0xf5a4, 0x0401, 0x0400, 0x04a0, 0x5544, 0x01a4, 0x0202, 0xff00, 0x0054, 0x6b60, 0x5455, 0x00a4, 0x0ff0, 0x0045, 0x2a2a, 0x00a4, 0x0ff0, 0x0054, 0xd6d2, 0x00a4, 0x0ff0, 0xaaaa, 0xaaaa, 0x0054, 0x66a0, 0x4554, 0x00a4, 0x0ff0, 0x0045, 0x4a6a, 0x00a4, 0x0ff0, 0x0045, 0x5652, 0x4444, 0x0495, 0xfe00, 0x0202, 0x0202, 0x8202, 0xff00, 0x5555, 0x555f, 0x0095, 0x0ff0, 0x01f5, 0x0200, 0x0207, 0x9999, 0x9999, 0x00f5, 0x0180, 0x0195, 0x0ff0, 0xf0ff, 0x9999, 0x01f5, 0x4080, 0x0081, 0x0095, 0x0ff0, 0x01f5, 0x0400, 0x8a05, 0xf95f, 0x5403, 0x1155, 0x5059, 0x4559, 0x1159, 0x0195, 0x0202, 0x0202, 0x5595, 0x02f5, 0x1060, 0x2020, 0x2050, 0x0295, 0xfc00, 0x78f8, 0x1030, 0x5555, 0x5559, 0x0257, 0xf1f0, 0xf7f3, 0x3010, 0x0097, 0x0800, 0x0257, 0x0e0c, 0x8f8f, 0xefcf, 0x0195, 0xeff0, 0x078f, 0xff95, 0x0400, 0x0100, 0x02f5, 0x0608, 0x0208, 0x0100, 0xfb3e, 0xa406, 0x546a, 0x9455, 0xa4aa, 0xa4a5, 0xa455, 0x54aa, 0xa4a5, 0x06b3, 0xe06c, 0xeb03, 0xfb6b, 0x3606, 0x6d7f, 0xb01b, 0xbdbd, 0xbb3b, 0x0043, 0xf0f0, 0x00b4, 0x80f0, 0xfc4b, 0x4000, 0x4100, 0xbcbb, 0x0043, 0xfcfc, 0xfc4b, 0x0400, 0xa482, 0x00bc, 0xd4d6, 0xccbc, 0x4444, 0x01bc, 0x30f0, 0xc0f0, 0xff4c, 0x0000, 0x0055, 0x02a4, 0x0202, 0x0202, 0x0202, 0xffa4, 0x0400, 0x0400, 0x0054, 0x0808, 0xe345, 0x0001, 0xa801, 0xfea0, 0xee35, 0x004e, 0xfff0, 0xf354, 0x5400, 0x6540, 0x5555, 0x00e3, 0xf704, 0xf53e, 0x4001, 0x9000, 0x4000, 0x0254, 0x1010, 0x1010, 0x1010, 0xf354, 0x0003, 0x4054, 0x00a5, 0x0055, 0x056a, 0x0895, 0x4242, 0xe2e2, 0xe2e2, 0x02c2, 0x7f0c, 0x001f, 0x3f0f, 0xff7f, 0xe0f1, 0x5555, 0x9955, 0x00f5, 0x2424, 0xf555, 0x555f, 0x0095, 0x1010, 0x00f5, 0xc080, 0x5555, 0xf555, 0x0095, 0x7070, 0x00f5, 0x1000, 0x555f, 0x0395, 0x8080, 0xe30c, 0xfbf3, 0xfdf9, 0x9955, 0x9559, 0x00f5, 0x4050, 0x0595, 0x0100, 0x0303, 0x0303, 0x0202, 0x0202, 0x0202, 0xf895, 0x0400, 0x0400, 0x8858, 0x00f5, 0x0800, 0xff58, 0x5402, 0x5545, 0x5556, 0x5451, 0x02f5, 0x0404, 0x040e, 0xc004, 0x0275, 0x8f80, 0x070f, 0x0207, 0x5575, 0x04f5, 0x4080, 0x8040, 0x8010, 0x0100, 0x0201, 0x555f, 0xb3e5, 0x0006, 0xbff9, 0xaaa9, 0xbff9, 0xfaf9, 0xfaf9, 0xbff9, 0xfaf9, 0xbb3e, 0x04b3, 0x0bec, 0xb03e, 0xb6be, 0x606d, 0xdef0, 0xf4b3, 0x1400, 0x5954, 0x3333, 0x00b4, 0x3030, 0xfcb4, 0x0004, 0xa005, 0xa005, 0xa005, 0xa005, 0x55a0, 0xcc44, 0x00ec, 0xc0c0, 0xfecb, 0x0400, 0xaa55, 0xbbbb, 0x004c, 0xc0c0, 0xa24c, 0x0001, 0x00a5, 0x5da5, 0x3a54, 0x4004, 0x5008, 0xd008, 0xd008, 0xd008, 0xd508, 0x54a4, 0xe335, 0x54a4, 0x00e3, 0xefee, 0x453e, 0x0007, 0x0040, 0xffea, 0xffa5, 0xff90, 0xffa4, 0xffe9, 0xffa9, 0xfe94, 0x3eee, 0x0145, 0xf7fe, 0xf3f7, 0xe354, 0x9003, 0x9000, 0x9400, 0xfa54, 0xffa5, 0xee35, 0x003e, 0x1010, 0x453e, 0x0002, 0xe940, 0xa400, 0x9000, 0x003e, 0x8080, 0xeeee, 0x0095, 0x0202, 0xff95, 0x0404, 0x0420, 0x0420, 0x8488, 0x0402, 0x0488, 0x5f55, 0x0195, 0x3818, 0x7030, 0xff95, 0x0000, 0x0a14, 0x0295, 0x0c0e, 0x080c, 0x0008, 0xf975, 0x5401, 0x5550, 0x9556, 0x0059, 0xe4fc, 0xf759, 0x1000, 0x2014, 0x9959, 0x0079, 0x8c04, 0x7799, 0x0195, 0x7070, 0x7673, 0xf597, 0x9402, 0xa055, 0x5a55, 0x5256, 0x0079, 0x3030, 0x9979, 0x9977, 0x0095, 0xce8e, 0xf795, 0x1400, 0x9550, 0x5997, 0x0179, 0x0c1c, 0x8e0e, 0x0059, 0x020e, 0x8795, 0x5406, 0x5055, 0x4025, 0x50aa, 0x56aa, 0x3304, 0x3304, 0xf304, 0x0095, 0x0202, 0x5595, 0x8888, 0x0095, 0x0202, 0x0d58, 0xeede, 0x00f6, 0x3f3f, 0xfedf, 0x8f00, 0xfff3, 0xf8f3, 0x00ff, 0x7f7f, 0x3fff, 0xf83f, 0xf6f6, 0x00f7, 0xf7f7, 0xf958, 0x0000, 0x1500, 0x9555, 0x0285, 0x8282, 0xff82, 0x8282, 0xe598, 0x0000, 0xa100, 0x8555, 0xfb3e, 0xa406, 0x546a, 0xa455, 0xa455, 0xa455, 0xa455, 0xa455, 0xa455, 0x04b3, 0x0be0, 0xbdb0, 0xbdbd, 0x3dbd, 0x0ed7, 0xc4b3, 0x0009, 0xa554, 0xa014, 0xa014, 0xa154, 0xa014, 0xa014, 0xffa5, 0xffaa, 0xffa5, 0xffa5, 0x4ecb, 0x5002, 0x50a5, 0x5fa5, 0x50a5, 0x04ec, 0xcfcc, 0x303f, 0xf0f0, 0xf0f0, 0xf0f0, 0xa24c, 0x0007, 0xa500, 0xa500, 0xa500, 0xa500, 0xa500, 0xa500, 0xa500, 0xa500, 0x54a4, 0xeee3, 0x54a4, 0xeee3, 0x54a4, 0xeee3, 0x44a4, 0xee35, 0x44a4, 0xe355, 0x35a4, 0x0401, 0x04e8, 0x04a0, 0x4444, 0x00fe, 0x3030, 0x003e, 0x0500, 0xfe35, 0x4400, 0x00aa, 0xee33, 0x00fe, 0xc0c0, 0x453e, 0x0010, 0x0044, 0x5099, 0x40aa, 0x40fe, 0x40fe, 0x90fe, 0xa4fe, 0xe9ff, 0xfaff, 0x1bff, 0x1bff, 0x1bff, 0x1bff, 0x6bff, 0x6fff, 0x6fff, 0xafff, 0x00fe, 0x3030, 0xeeee, 0x3ee3, 0x00fe, 0xc0c0, 0x953e, 0x0000, 0xae41, 0x5f55, 0x0095, 0x0202, 0x7f95, 0x0405, 0x0400, 0x0408, 0x042a, 0x0408, 0x0000, 0x0070, 0x9775, 0x0275, 0xe0e0, 0xf0f0, 0xf0f0, 0x0579, 0x3c7e, 0x183c, 0x8189, 0xe3c1, 0x9e8e, 0x9f9f, 0x00d7, 0xc0c0, 0x5777, 0x9995, 0x0157, 0x70f8, 0x2070, 0x7777, 0x7757, 0x00d7, 0x0706, 0x0497, 0xc0cc, 0x3030, 0x1838, 0x8080, 0xef80, 0xf759, 0x4000, 0x5a00, 0x7799, 0x0157, 0x080c, 0x0808, 0x8957, 0x4000, 0xff59, 0x0095, 0x0202, 0x5595, 0x8888, 0x0195, 0x0202, 0x00fe, 0x0058, 0x0f00, 0x8888, 0x0095, 0x0ff0, 0x0085, 0x0ff0, 0x8888, 0x8888, 0x0095, 0x0ff0, 0x0185, 0x0070, 0x700c, 0x8855, 0x0095, 0x0ff0, 0x0058, 0xfffe, 0x8888, 0x0095, 0x0ff0, 0x0185, 0x0800, 0x0008, 0x8855, 0x0095, 0x0ff0, 0xf985, 0x0000, 0x8041, 0x0158, 0xf7f6, 0xf700, 0x0095, 0xff00, 0xf895, 0x0000, 0x0900, 0x0185, 0x2828, 0x2ff8, 0x8555, 0x0095, 0xff00, 0xb3e5, 0x0000, 0xf900, 0x3bbb, 0x023e, 0xfefe, 0xfefe, 0xfefe, 0x333e, 0x00b3, 0x0230, 0xbbb3, 0x44bb, 0x0243, 0xf0c0, 0xf0f0, 0xf0f0, 0xcb43, 0x0000, 0xfa55, 0xfc4e, 0x0001, 0x00a5, 0x00a5, 0xcc44, 0x01ce, 0xc0c0, 0xcfc0, 0x004c, 0x0c00, 0xe24c, 0x5004, 0xa500, 0xa500, 0xaa5f, 0xaa5f, 0xa550, 0x44cc, 0x0024, 0xcfcc, 0x0032, 0xf0f0, 0x01a4, 0x0202, 0x0202, 0x35a4, 0x0403, 0x0480, 0x0480, 0x0480, 0x80a0, 0x4e35, 0x9002, 0x903f, 0xa503, 0xaa50, 0xee35, 0x003e, 0x1010, 0x453e, 0x0005, 0x0001, 0xfea4, 0xfea4, 0xea50, 0xa500, 0x9000, 0x003e, 0x8080, 0xeeee, 0x3eee, 0x0054, 0x8000, 0xe354, 0x0008, 0x0050, 0x0194, 0x01e5, 0x51f9, 0x95f9, 0x54fe, 0xa515, 0xfa5a, 0xffaf, 0x0054, 0x8180, 0xe345, 0x5009, 0x4255, 0x0b55, 0x2f15, 0x2f15, 0xbf10, 0x2e02, 0x08fa, 0x00e0, 0xa0fa, 0xf8ff, 0x013e, 0x1030, 0xc010, 0xfe35, 0x6403, 0x1006, 0x005a, 0x05aa, 0x1aaa, 0x003e, 0x8080, 0xeeee, 0x3eee, 0x0295, 0x0202, 0x0202, 0x0202, 0xff95, 0x0401, 0x0400, 0x0820, 0x0257, 0xf0f0, 0xf0f0, 0xf1f0, 0xff75, 0x5400, 0x5400, 0x0397, 0x800c, 0xe0c0, 0x3070, 0xf030, 0x7777, 0xd777, 0x0279, 0xe0f0, 0xcfc7, 0xe1c7, 0xfd79, 0x0001, 0x5a54, 0x5655, 0x0897, 0x3606, 0x3e36, 0x667e, 0x0306, 0x8303, 0x8183, 0x7c01, 0xc7fe, 0x1f83, 0x4597, 0x4006, 0x0080, 0x4081, 0x5481, 0x5581, 0x1580, 0x05a0, 0x00a0, 0x5577, 0x5ea4, 0x843c, 0x840b, 0x840b, 0x840b, 0x840b, 0x840b, 0x84ab, 0x84ff, 0x2eaa, 0x2eae, 0x2efe, 0x2efe, 0x2eae, 0x2f2e, 0x0b2e, 0x022e, 0x2e2a, 0x0bb8, 0x2fb8, 0x2eb8, 0x2eb8, 0xaeb8, 0xbef8, 0xaae0, 0xe080, 0xe0e2, 0xe0e2, 0xe0e2, 0xe0e2, 0xfae2, 0xbfe2, 0x2ae0, 0xbea0, 0xbe0b, 0xaa0b, 0x820b, 0x820b, 0x820b, 0x820b, 0x820b, 0xfe0a, 0xfe0b, 0xae0b, 0xae2e, 0xfe2e, 0xaa2f, 0x2e2a, 0x2eb8, 0x2eb8, 0x2eb8, 0x2eb8, 0xbeb8, 0xf8be, 0xa02f, 0xf80a, 0xf8be, 0xe0bf, 0x802f, 0x800b, 0x800b, 0x800b, 0x800b, 0x44ee, 0x033e, 0xfefe, 0xfefe, 0xfefe, 0xfefe, 0x0234, 0xf0f0, 0xf0f0, 0xf0f0, 0x4444, 0x3333, 0x04e4, 0xf3f0, 0xf0f3, 0x3f30, 0xcfcf, 0xcfcf, 0xf24e, 0x0000, 0xaa50, 0x44ee, 0x0242, 0x3030, 0x3030, 0x3030, 0x0032, 0xcfc0, 0x5a43, 0x0006, 0x3559, 0x3559, 0x3559, 0x3559, 0x3559, 0x3559, 0x3d59, 0x44a4, 0xe354, 0x003e, 0x0400, 0x453e, 0x6413, 0x6400, 0x6400, 0x6400, 0x6400, 0x6400, 0x0400, 0x1900, 0x1900, 0x1900, 0x1900, 0x1900, 0x1900, 0x0019, 0x0019, 0x0019, 0x0019, 0x0169, 0x06a9, 0x5af9, 0xabe9, 0x00fe, 0x3c30, 0xffee, 0x003e, 0x0c30, 0x453e, 0x6406, 0x6400, 0x6400, 0x6400, 0x6940, 0x6a90, 0x6ba5, 0x1bea, 0x003e, 0x0400, 0x953e, 0x640b, 0x6400, 0x6400, 0x6400, 0x6400, 0x6400, 0x0400, 0x1900, 0x1900, 0x1900, 0x1900, 0x1900, 0x1900, 0xff95, 0x0406, 0x0488, 0x0420, 0x0400, 0x0402, 0x8402, 0x040a, 0x0402, 0x555f, 0x0075, 0xc0e0, 0xf975, 0x0001, 0x8050, 0x0052, 0x7999, 0x0095, 0xc0e0, 0x5555, 0x5555, 0x0c97, 0x00e0, 0xf8f0, 0x1f3c, 0x070f, 0x181b, 0x1f19, 0x601f, 0x8066, 0xc380, 0xecc1, 0x086c, 0x703e, 0x7f61, 0x9999, 0x7799, 0x0357, 0xe0c0, 0xe0e0, 0xf0f0, 0xf8f8, 0x03a4, 0x0202, 0x0202, 0x0202, 0x0202, 0x0554, 0x5ccc, 0x50dc, 0xdcdc, 0x9a0d, 0x8c0a, 0xadad, 0x4444, 0x033e, 0xfefe, 0xfefe, 0xfefe, 0xfefe, 0x0234, 0xf0f0, 0xf0f0, 0xf0f0, 0x4444, 0x3333, 0x04e4, 0xfcf0, 0xf0fc, 0xf0f0, 0xfcf0, 0xfcfc, 0xee44, 0xeeee, 0x0124, 0xfcfc, 0xfcfc, 0xf24e, 0x5002, 0x50aa, 0x50aa, 0x50aa, 0x0132, 0xfcf0, 0xf0fc, 0xa432, 0x0000, 0xae55, 0xe354, 0x44a4, 0xe355, 0x44a4, 0xee35, 0x44a4, 0xee35, 0x44a4, 0xee35, 0x44a4, 0xee35, 0x44a4, 0xee35, 0x44a4, 0x4e35, 0xa41c, 0xaa41, 0xaa41, 0xaa41, 0xaa91, 0xaa91, 0xaa91, 0xaa91, 0xaa91, 0x91aa, 0x41aa, 0x41aa, 0x46aa, 0x46aa, 0x46aa, 0x46aa, 0x46aa, 0x3fc6, 0xffc6, 0xff06, 0xff1a, 0x3f1a, 0x3f1a, 0x0f1a, 0x4f1a, 0x0690, 0xc143, 0x0690, 0x1aa4, 0x1aa4, 0x00e3, 0x7e7e, 0x345e, 0x0017, 0xa900, 0xaa36, 0xaa39, 0xaa0d, 0xa90d, 0xa90d, 0xa50d, 0xa70d, 0xd70d, 0xd700, 0xd700, 0x3700, 0x3700, 0x3700, 0x3700, 0x3700, 0x0000, 0x0037, 0x00d7, 0x00d7, 0x00dc, 0x00dc, 0x00dc, 0x00dc, 0x353e, 0x0595, 0x0202, 0x0202, 0x8202, 0x42c2, 0xf7c0, 0xf0fc, 0x0175, 0xfefe, 0xf8fc, 0xf975, 0x4002, 0x0255, 0x0255, 0x0a54, 0x7775, 0x0a97, 0xf0f0, 0x6060, 0x6060, 0xe060, 0x7078, 0x7070, 0x7070, 0x6070, 0x70e0, 0x1c38, 0xcf80, 0xf579, 0x0003, 0xa501, 0xa541, 0x2aa5, 0x02a5, 0x9557, 0x0059, 0x0c08, 0xa459, 0x5407, 0x5500, 0xaaae, 0x96ae, 0x96ae, 0xaaae, 0x9aae, 0x96ae, 0xaaae, 0x44a4, 0x1354, 0xb006, 0x0da5, 0xa9a0, 0x600d, 0x600b, 0x0565, 0x6b60, 0x1003, 0xb00b, 0x0dbd, 0xd6d0, 0xc006, 0x600a, 0x0646, 0xb2b0, 0xa006, 0x900d, 0x05b5, 0x3db0, 0x160c, 0xaf54, 0x1400, 0x0001, 0x033e, 0xfefe, 0xfefe, 0xfefe, 0xfefe, 0x0043, 0xfcfc, 0x054e, 0xf0f0, 0x00f0, 0x0f0f, 0x0f0f, 0x0303, 0x0303, 0xfe24, 0x5000, 0x50aa, 0x004e, 0xc0c0, 0xeeee, 0x0042, 0x3030, 0x2222, 0x004e, 0xfcfc, 0xeeee, 0x44a4, 0xee35, 0x5ea4, 0x0405, 0x8400, 0x84aa, 0x84ff, 0x84ab, 0x840b, 0x840b, 0x44e5, 0xe353, 0x004e, 0xeff0, 0x345e, 0x0002, 0x54a1, 0x0485, 0x0084, 0x353e, 0x00e4, 0xe100, 0x34e5, 0xa404, 0x9046, 0x9146, 0x9146, 0x9146, 0x3546, 0x3544, 0x00e4, 0xdc00, 0xf5e4, 0x9003, 0x9091, 0x9091, 0x9091, 0x9091, 0x5e4e, 0x004e, 0xff00, 0x354e, 0x1405, 0x8250, 0xaa52, 0xaa52, 0x2852, 0x2852, 0x5b52, 0xee35, 0x00e4, 0x1f00, 0x345e, 0x5402, 0x04a1, 0x8485, 0x8404, 0xe353, 0x004e, 0x3ff0, 0x354e, 0x5005, 0x4aa1, 0x2828, 0x2148, 0x2148, 0x2148, 0xec00, 0x00e4, 0xee00, 0xe5e4, 0x0195, 0x0282, 0x0202, 0xff95, 0x8402, 0x0400, 0x0480, 0x0488, 0x5f55, 0x0095, 0xc0e0, 0x5555, 0x9555, 0x00f5, 0x1020, 0xf795, 0x0001, 0xa005, 0x8015, 0x0259, 0xf0f8, 0xe1f0, 0x2361, 0x0197, 0xc4c0, 0xe6c4, 0x7995, 0x0097, 0x707e, 0x7777, 0x5599, 0x0697, 0x0600, 0x1e06, 0x0e1e, 0x0e06, 0x8307, 0xc081, 0xe0c0, 0x7777, 0x9997, 0x0059, 0x80e0, 0xf579, 0x9001, 0x9400, 0xa40a, 0x0075, 0x0010, 0x0195, 0x10f0, 0x3010, 0xfa45, 0x0000, 0x4159, 0x02a4, 0x0202, 0x0202, 0xfe02, 0x0054, 0xb300, 0x00a4, 0x0ff0, 0x0054, 0x0b10, 0x004a, 0xff00, 0x5445, 0x5454, 0x00a4, 0x0ff0, 0x0054, 0x05a0, 0xaaaa, 0xaaaa, 0x0054, 0xc6c0, 0x4544, 0x00a4, 0x0ff0, 0x0045, 0x9296, 0x00a4, 0x0ff0, 0x0054, 0xb998, 0x4445, 0x00a4, 0x0ff0, 0x4444, 0x033e, 0xfefe, 0xfefe, 0xfefe, 0x00fe, 0xffe3, 0x0000, 0x5555, 0x0134, 0x3030, 0xf3f0, 0xfe43, 0x5001, 0x0000, 0x55aa, 0x00e3, 0xff00, 0x024e, 0x3c3c, 0x0303, 0x0303, 0x06e3, 0x0f00, 0x00f0, 0xf00f, 0xfbff, 0xfbfb, 0xfbfb, 0xf80b, 0x342e, 0x0007, 0x3aa5, 0x3aa5, 0x3555, 0x3555, 0x3555, 0x3555, 0x35ff, 0x35ff, 0x003e, 0x7f00, 0x4e3c, 0x0005, 0x0090, 0x0f90, 0x0f9a, 0xff9a, 0xff9f, 0xff9f, 0x5ea4, 0x1007, 0x12a8, 0x1bfe, 0x12ae, 0x1bfe, 0x1ba8, 0x1bfe, 0x12aa, 0x1003, 0x4445, 0x00a4, 0x0404, 0xf5a4, 0x1002, 0x1002, 0x1002, 0x1002, 0x4455, 0x01a4, 0xf004, 0x0407, 0xf5a4, 0x1000, 0x1028, 0x4554, 0x00a4, 0x0404, 0x95a4, 0x1000, 0xbaaa, 0x5555, 0x595f, 0x0195, 0x4040, 0x4040, 0xff95, 0x0000, 0x0810, 0x0195, 0xf004, 0x0407, 0xff95, 0x100b, 0x1002, 0x1000, 0x100a, 0x1000, 0x1008, 0x10a0, 0x1008, 0x1002, 0x1002, 0x1000, 0x1020, 0x1000, 0x10d0, 0xf0f0, 0xf0e6, 0x2087, 0xe060, 0xe0e0, 0x099f, 0xf07f, 0xf083, 0xf081, 0xf0e1, 0xf0f0, 0x881f, 0x7f01, 0x86f0, 0x3010, 0xf070, 0x01f0, 0x002e, 0xfefe, 0xfb2e, 0x5404, 0x5455, 0x54a6, 0x5466, 0x5466, 0x54a6, 0x03b2, 0x1410, 0x9112, 0xc120, 0x20c0, 0x222b, 0x03e2, 0x8080, 0x8080, 0x8080, 0x8080, 0x03e3, 0x8080, 0x8080, 0x8080, 0x8080, 0xce34, 0x0007, 0x0090, 0x0f90, 0x0f90, 0xff90, 0xff9f, 0xff9f, 0xff9f, 0x009f, 0xf5a4, 0x1001, 0x1020, 0x1022, 0x5545, 0x01a4, 0x0404, 0x0404, 0x53a4, 0x1006, 0x100e, 0x100e, 0x100e, 0x100e, 0x100e, 0x100e, 0x100e, 0x4553, 0x03a4, 0x0404, 0x0404, 0x0404, 0x0404, 0x4a44, 0xf95f, 0x4000, 0x5165, 0x0095, 0x0404, 0xff95, 0x1000, 0x1200, 0x0095, 0x4040, 0xff95, 0x0000, 0x0210, 0x0095, 0x0404, 0x5955, 0x5f55, 0x0595, 0x0404, 0x0404, 0x0404, 0x0404, 0x0404, 0x0404, 0x5955, 0x240d, 0x3030, 0x30f0, 0x3030, 0xb1b0, 0x8191, 0x8181, 0xfc0f, 0xcdcc, 0x3c60, 0x1818, 0x8018, 0x8989, 0x818f, 0x0181, 0xcdcd, 0x0c7c, 0x0606, 0x063e, 0x7e06, 0x3b30, 0x01e8, 0xeb33, 0x9901, 0x8f81, 0x9998, 0xc30f, 0x9819, 0xeff9, 0x1007, 0x1616, 0x1616, 0x0606, 0x078c, 0x080c, 0xcfef, 0x0f8f, 0xfe0f, 0x002e, 0xfefe, 0xff2e, 0x5400, 0x5455, 0xffff, 0x002e, 0xfefe, 0xff2e, 0x5400, 0x5455, 0x0e2f, 0x00f0, 0xf00f, 0x0f00, 0x38f0, 0x3fff, 0x38ff, 0xff0f, 0xff8f, 0xf00f, 0xf7f7, 0xf3ff, 0x6fe3, 0x7f6f, 0x700f, 0x0f7f, 0xfb2f, 0x0000, 0x9515, 0x02f2, 0x8282, 0xff82, 0x8282, 0xf2bf, 0x0000, 0xa100, 0xf222, 0x00e2, 0x8080, 0xffe2, 0x0000, 0xaa40, 0x00e2, 0x0808, 0xffe2, 0x4001, 0x40aa, 0x4000, 0x02e3, 0x8080, 0x8080, 0x8080, 0xce23, 0x0004, 0x0085, 0xff85, 0xff8f, 0xff8f, 0xff8f, 0x4e3c, 0x9001, 0x900f, 0x900f, 0x4422, 0xe3cc, 0x4422, 0xe3cc, 0x03a4, 0x4040, 0x4040, 0x4040, 0x4040, 0x453e, 0x4a44, 0x453e, 0x4a44, 0x553e, 0x4a44, 0x53ee, 0x4a44, 0x53ee, 0x4a44, 0x53ee, 0x4a44, 0x53ee, 0x4a44, 0x53ee, 0x00a4, 0x0404, 0x35a4, 0x1005, 0x1002, 0x1002, 0x100a, 0x100b, 0x100b, 0x102b, 0x5555, 0x59f5, 0x0095, 0x4040, 0xf9f5, 0x1402, 0x4120, 0x4120, 0x1420, 0x0595, 0x1404, 0x3434, 0x7474, 0x7474, 0x0434, 0x0404, 0x5955, 0x8888, 0x0095, 0x0404, 0xf895, 0x1001, 0x10aa, 0x1000, 0x04e0, 0xc080, 0xf0e0, 0x10f8, 0x7030, 0xf0f0, 0x000e, 0x0000, 0x002e, 0xfefe, 0xff2e, 0x5400, 0x5455, 0xffff, 0x012e, 0xfefe, 0x00fe, 0x00f2, 0x0ff0, 0xeeee, 0xeeee, 0x00f2, 0x0ff0, 0x002e, 0xff00, 0x00f2, 0x00c0, 0x2fff, 0xff22, 0x00e2, 0x0ff0, 0x00f2, 0x0010, 0x2222, 0xffff, 0x00e2, 0x0ff0, 0x01f2, 0x0808, 0x0c00, 0xb2fe, 0x0000, 0x6900, 0xb222, 0x012f, 0xf7f6, 0xf700, 0x2fbe, 0x0000, 0xf900, 0x01f2, 0x2828, 0x2ff8, 0xfef2, 0x4004, 0xaa00, 0x14aa, 0x1480, 0x0080, 0x5580, 0x01e2, 0x0808, 0xf808, 0x432e, 0x0005, 0x2555, 0x2555, 0x2555, 0x2555, 0x2fff, 0x2fff, 0x003e, 0x4040, 0x4422, 0xe3cc, 0x4422, 0xe3cc, 0x4422, 0xe3cc, 0x4422, 0xe3cc, 0x4422, 0xe3cc, 0x4422, 0xe3cc, 0x4422, 0xe3cc, 0x4422, 0xe3cc, 0xfa45, 0x5002, 0x4165, 0x4565, 0x5065, 0x01a4, 0x0404, 0x07f4, 0x4444, 0x53ee, 0x02a4, 0x0404, 0x0404, 0x0404, 0x3ea4, 0x1000, 0x1000, 0x453e, 0x4a44, 0x453e, 0x4a44, 0x453e, 0x4a44, 0x453e, 0x53a4, 0x1003, 0x103e, 0x100e, 0x100e, 0x100f, 0x0295, 0x4040, 0x4040, 0x4040, 0xf95f, 0x5400, 0x5465, 0x0095, 0x0414, 0x8f95, 0x1008, 0x1080, 0x1080, 0x12a0, 0x1080, 0x1080, 0x1000, 0x103c, 0x103c, 0x1000, 0x8888, 0x0195, 0x0404, 0x07f4, 0x5555, 0x03e0, 0xc0c0, 0xc0c0, 0x3030, 0x3030, 0x0000
};

// [D_08C79938] D_08C79BB0 Huffman Window 1
u32 D_08c79bb0_window1[] = {
	0xa7dbfffb, 0xff37d997, 0xc9f6fcee, 0xdb6af72c, 0x9d7eddb1, 0x801fb73d, 0x77276cee, 0x2b7edb36, 0xf3f9df77, 0x7dcecd79, 0x00f26e4b, 0x57f6ddc0, 0xcb76db64, 0x7a67fe4b, 0xff36dffd, 0x7ee9fade, 0x9800087f, 0xee673673, 0x0330000f, 0x000002be
};

// [D_08C79988] D_08C79BB0 Huffman Window 2
u32 D_08c79bb0_window2[] = {
	0x000108aa, 0x5528a020, 0xad545005, 0xb6892552, 0x000a0529, 0x952c4c49, 0x016948d2, 0x551154b4, 0x00090495, 0xb12aad14, 0x94d5542a, 0x15955004
};

// [D_08C799B8] D_08C79BB0 Huffman
struct Huffman D_08c79bb0_huffman[] = {
	/* Data */			D_08c79bb0_huffmandata,
	/* Size */			0xf86,
	/* Count */			0x26b,
	/* Window 1 */		D_08c79bb0_window1,
	/* Window 2 */		D_08c79bb0_window2,
};

// [D_08C799C8] D_08C79BB0 RLE Data
u8 D_08c79bb0_rledata[] = {
	0x13, 0x7, 0x9, 0x7, 0x9, 0x7, 0x9, 0xd, 0x9, 0x7, 0x5, 0x3, 0x1, 0x3, 0x1, 0x3, 0xc, 0x6, 0x13, 0x3, 0x5, 0x5, 0x3, 0x3, 0x5, 0x5, 0x3, 0x3, 0x5, 0x5, 0x3, 0xd, 0x3, 0x3, 0x5, 0x5, 0x3, 0x3, 0x5, 0x5, 0x3, 0x3, 0x5, 0x3, 0x15, 0x6, 0x2, 0x5, 0xb, 0x5, 0x3, 0x9, 0x7, 0xd, 0x3, 0xd, 0x3, 0x5, 0x2c, 0x3, 0x12, 0x5, 0x9, 0x7, 0x1, 0xb, 0x1d, 0x7, 0x7, 0x3, 0x18, 0x6, 0xb, 0x7, 0x9, 0x7, 0x7, 0x4, 0xf, 0x4, 0x9, 0x3, 0x1, 0x3, 0x9, 0x3, 0x1, 0xb, 0x11, 0x6, 0x1a, 0x3, 0xc, 0x2d, 0x4, 0xb, 0x14, 0x3, 0x3, 0x7, 0x1a, 0x5, 0x4, 0x3, 0x6, 0x4, 0x9, 0x3, 0x4, 0x3, 0x1, 0x3, 0x30, 0xa, 0x3, 0x4, 0x2, 0x7, 0xf, 0x3, 0xd, 0x6, 0xa, 0x4, 0x7, 0x8, 0x4, 0xc, 0x13, 0x5, 0xb, 0x7, 0x1a, 0x9, 0x5, 0xa, 0x1, 0x3, 0x2, 0x17, 0x1b, 0xd, 0x2, 0xd, 0x11, 0x14, 0x15, 0x6, 0xb, 0x5, 0x2a, 0x4, 0xf, 0x3, 0x6, 0x4, 0x7, 0x7, 0x1e, 0x3, 0x1d, 0x4, 0x3, 0x3, 0x7, 0x3, 0x3, 0xd, 0x7, 0x9, 0xf, 0x4, 0x67, 0x1c, 0x31, 0x4, 0xc, 0x3, 0x4, 0x3, 0x13, 0x13, 0x10, 0x6, 0x4, 0x3, 0x2, 0x6, 0x4, 0x5, 0x3a, 0x4, 0x18, 0x8, 0xc, 0x7, 0x23, 0x3, 0x3, 0x3, 0x7, 0x3, 0x3, 0x3, 0xd, 0x3, 0x3, 0x3, 0x6, 0x4, 0xd, 0x3, 0x37, 0xd, 0x18, 0x21, 0x4, 0x3, 0x18, 0x5, 0x4a, 0x9, 0x86, 0x4, 0x7, 0x5, 0x70, 0x4, 0x36, 0x11, 0x10, 0xc, 0xf, 0x4, 0x4, 0xc, 0x14, 0xc, 0x20, 0x3, 0x1e, 0x5, 0x5, 0x3, 0x22, 0x3, 0x48, 0x5, 0x4, 0x8, 0xd, 0x7, 0xb, 0x6, 0x1f, 0x32, 0x7, 0x9, 0x7, 0x9, 0x3, 0x3, 0x1, 0x9, 0x7, 0x7, 0x10, 0x11, 0x14, 0x4, 0x8, 0x7, 0x8, 0x10, 0x11, 0x7, 0x99, 0x5, 0x3, 0x3, 0x35, 0x8, 0x8, 0x7, 0x14, 0x4, 0x5d, 0xb, 0x5, 0x13, 0x10, 0x10, 0x4, 0x5, 0x10, 0x7, 0x8, 0x19, 0x8, 0x7, 0x1, 0x3, 0x9, 0x3, 0x1b, 0x5, 0x3b, 0x3, 0x19, 0x9, 0x17, 0x5, 0x31, 0x3, 0x20, 0x4, 0x4, 0x6, 0x15, 0x9, 0x7, 0x9, 0x7, 0x9, 0x7, 0x9, 0x3, 0x5, 0x5, 0x3, 0x3, 0x5, 0x5, 0x3, 0x3, 0x4, 0x6, 0x3, 0x15, 0xd, 0x3, 0x3, 0xb, 0x5, 0x1, 0x7, 0x13, 0xd, 0x3, 0xd, 0x3, 0xd, 0x95, 0x9, 0x1, 0x4, 0x1, 0xa, 0x1, 0x3, 0x3, 0x9, 0x1, 0x3, 0xd, 0x3, 0x3, 0x9, 0x1, 0x3, 0x2, 0xa, 0x1, 0x3, 0x3, 0x9, 0x1, 0x3, 0x3, 0x9, 0x1, 0x3, 0x3, 0x9, 0x1, 0x3, 0x3, 0x9, 0x7, 0x9, 0x1, 0x3, 0x2, 0xa, 0x1, 0x3, 0x3, 0x5, 0xb, 0x1f, 0x10, 0x6, 0x8, 0x8, 0x9, 0x52, 0x9c, 0x3, 0xd, 0x3, 0x1, 0x6, 0x6, 0x3, 0x1, 0x3, 0x9, 0x3, 0xd, 0x3, 0x7, 0x5, 0x1, 0x3, 0xd, 0x3, 0xd, 0x3, 0xc, 0x4, 0x3, 0x3, 0x17, 0x3, 0x1, 0x9, 0x3, 0x4, 0x4, 0xb, 0x1, 0x5, 0xb, 0xf, 0x11, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0xb, 0x5, 0x13, 0x4, 0xb4, 0x6, 0xa, 0x5, 0xb, 0xcf, 0x11, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0xb, 0x5, 0xa, 0x6, 0xb, 0x5, 0xc, 0x4, 0xd, 0x3, 0x9b, 0x7, 0x8, 0xd8, 0x0, 0x0
};

// [D_08C79BB0] D_08C79BB0 Graphics
struct CompressedGraphics D_08c79bb0 = {
	/* Huffman Data */		D_08c79bb0_huffman,
	/* RLE Data */			D_08c79bb0_rledata,
	/* RLE Size */			0x1e6,
	/* RLE Offset */		0x1800,
	/* Double Compressed */	TRUE,
};

u8 D_08c79bc0[16] = {
	0x2C, 0x00, 0x50, 0x00, 0x2C, 0x00, 0x50, 0x00, 0xF0, 0x00, 0xA0, 0x00,
	0x08, 0x00, 0x20, 0x00
};

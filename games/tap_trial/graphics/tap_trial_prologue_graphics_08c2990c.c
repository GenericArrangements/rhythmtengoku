#include "global.h"
#include "graphics.h"

// // //  D_08C2990C  // // //

// [D_08C28824] D_08C2990C Huffman Data
u16 D_08c2990c_huffmandata[] = {
	0xdddd, 0x006f, 0xfff0, 0x1456, 0x4005, 0x9000, 0xf900, 0xff90, 0xfff9, 0xfff9, 0xfffd, 0x006f, 0xfefc, 0x1456, 0x4001, 0xe500, 0xffe5, 0xff13, 0x0000, 0x0009, 0x33f1, 0x0213, 0x3030, 0x3030, 0x3030, 0x41f3, 0x0000, 0xaa55, 0x6541, 0x9001, 0xe400, 0xe400, 0x006f, 0xe080, 0x66ff, 0x6666, 0x001f, 0xf0c0, 0x1fff, 0x1111, 0x00f3, 0x0fc0, 0xf1f3, 0x5000, 0x0aaa, 0x02f3, 0x0f80, 0x8800, 0x080f, 0xf13f, 0x0002, 0x0000, 0xaa95, 0x1555, 0x006f, 0xf0f0, 0x15f6, 0x5400, 0x5e00, 0x6666, 0xff14, 0x5666, 0x46f1, 0x4000, 0x40ea, 0x4156, 0x9000, 0xb4aa, 0x1111, 0x026f, 0xc080, 0xf8e0, 0xfefe, 0x053f, 0x0fe0, 0x080f, 0x0f0e, 0x1f01, 0x3f3f, 0x031f, 0x00f1, 0xfffe, 0x033f, 0xf0f8, 0xf030, 0xc0f1, 0x070f, 0xf143, 0x0001, 0xa555, 0xeaaa, 0x0131, 0xe0c0, 0xfcf0, 0x3333, 0x3333, 0x011f, 0xfcfc, 0xfcfc, 0x133f, 0x0131, 0xf0f0, 0x0ff3, 0x053f, 0xf8fe, 0xf0e0, 0x3f03, 0x010f, 0x0f0f, 0xe0f8, 0xffff, 0x0131, 0x7030, 0xf0f0, 0x1456, 0x0000, 0x9494, 0x1114, 0x0131, 0xfce0, 0xc0ff, 0x01f3, 0xffc0, 0xfcf0, 0x0131, 0xfcfc, 0xfefe, 0x5431, 0x5402, 0x0055, 0x00e0, 0x0015, 0x1546, 0x0001, 0x2500, 0xff00, 0x3111, 0x011f, 0xfcfc, 0xfcfc, 0x31ef, 0x9001, 0xc0aa, 0xfcab, 0x1333, 0x023f, 0x01fc, 0xf01f, 0x11ff, 0xffff, 0xd33a, 0x013d, 0x3030, 0xa010, 0xdd3d, 0x026d, 0xfefe, 0xfefe, 0xfefe, 0xdc63, 0x5402, 0x5655, 0xff55, 0x0f3f, 0x63da, 0x0008, 0x00a5, 0x8029, 0x8029, 0xa02a, 0xa029, 0x602a, 0xa02a, 0x555f, 0x955f, 0x3dc6, 0x9001, 0x90fa, 0xd0ff, 0x96a3, 0x4004, 0x540a, 0xf54a, 0xff5a, 0xf500, 0xfd40, 0xaa33, 0x00a9, 0x1870, 0xf3a9, 0x5401, 0x9500, 0xa940, 0xaaa9, 0x02d3, 0xfef8, 0xe0f8, 0x0c3f, 0xd8a3, 0x0003, 0x0140, 0x5694, 0x00ff, 0x1555, 0xf54d, 0x5003, 0x8055, 0x0055, 0x0096, 0x0068, 0x45dd, 0x005d, 0x8080, 0x3a9d, 0x0003, 0xa500, 0xe90f, 0xfa0f, 0xfe03, 0x003d, 0x3070, 0x004d, 0xf7f0, 0xd444, 0x0154, 0xa040, 0x5150, 0x5445, 0x004d, 0x1010, 0xf45d, 0x0001, 0x0009, 0x0006, 0x0354, 0x0100, 0xa542, 0xf575, 0x910f, 0x4454, 0x4545, 0x01a3, 0xfcf8, 0x3ffe, 0xdc3a, 0x0002, 0x0054, 0x40a5, 0x50fd, 0xddd3, 0x00d6, 0xf010, 0x013d, 0x0800, 0x0e0c, 0xfda3, 0x4002, 0x50aa, 0x542a, 0x540a, 0x03d6, 0xfcfc, 0xfcfc, 0xfcfc, 0xfcfc, 0x013d, 0x0808, 0x0e0c, 0x9da3, 0x4001, 0x502a, 0xd40a, 0x034d, 0xe0f0, 0xc0e0, 0xf080, 0xfcfe, 0xd9a3, 0x5008, 0x50aa, 0x906a, 0x946a, 0xa55a, 0xa916, 0xaa05, 0x6a01, 0xc1c1, 0xc1ff, 0x003d, 0x3070, 0xdddd, 0xddd3, 0x034d, 0x7070, 0xf0f0, 0xf1f0, 0xf3f1, 0xdd44, 0x4444, 0x0369, 0xefe0, 0xefef, 0xefef, 0xefef, 0x01d6, 0x8080, 0xc080, 0x6666, 0xdd66, 0xd789, 0x9406, 0x945a, 0x946a, 0x946a, 0x9f6a, 0x9f5a, 0x951a, 0x9516, 0x9987, 0x778a, 0x0087, 0x0010, 0xa987, 0x0008, 0x0154, 0x05a5, 0x16a5, 0x5aa5, 0x6aa7, 0xaa50, 0xaa50, 0xaa50, 0xa950, 0xd987, 0x4002, 0x40e9, 0x00e5, 0x0095, 0x9a87, 0x5400, 0xaaaa, 0x9999, 0x06d5, 0xc0c0, 0x80c0, 0x8080, 0xf7f0, 0x10f7, 0x3010, 0x7030, 0x5555, 0x3333, 0x009a, 0xf7f0, 0x0063, 0xfefe, 0x6663, 0x00a6, 0x1010, 0x0096, 0x1010, 0x9f96, 0x0000, 0x0001, 0x003d, 0xd0e0, 0xd3dd, 0x00a3, 0x8800, 0x009a, 0x8000, 0x0039, 0xf000, 0x003a, 0x1ffe, 0x009a, 0xe000, 0x0069, 0x3030, 0x36a9, 0x5002, 0xd502, 0xf552, 0xffd6, 0xcd36, 0x5401, 0x7499, 0x9eaa, 0xf3ad, 0x0000, 0x0295, 0x333a, 0x003d, 0x1070, 0x83ad, 0x0002, 0x0aa5, 0xaa57, 0xa97f, 0x3a87, 0x5002, 0x41ea, 0x05a9, 0x15a5, 0xf987, 0x9400, 0x9016, 0x003d, 0xf000, 0x3dd3, 0x00a3, 0x9f00, 0x009a, 0x8000, 0xf8a9, 0x0001, 0x0000, 0x6aa9, 0x0078, 0xcf3c, 0xf8a7, 0x0003, 0x0009, 0x0009, 0x0009, 0x5aaa, 0x0078, 0x1f1e, 0xf987, 0x4001, 0x4055, 0x50a5, 0x9998, 0x003d, 0xfda0, 0x00a3, 0xfc00, 0x003d, 0xa840, 0x00a3, 0xc000, 0x009a, 0x8000, 0x003d, 0x0100, 0xfad3, 0x4000, 0x0255, 0xdd33, 0x003a, 0xc0f8, 0xf3a9, 0x4000, 0x0095, 0xaaa9, 0x003d, 0xf570, 0xffa3, 0x0000, 0x0005, 0x0045, 0xa0aa, 0xfd45, 0x0002, 0x0044, 0xaa84, 0xaa84, 0x5545, 0x065d, 0xf0f0, 0xf1f0, 0xe1f1, 0xcfcf, 0x0f8f, 0x0f0f, 0xfc0e, 0x7d45, 0x4000, 0xea00, 0x45d1, 0x0001, 0x0395, 0x3f55, 0x004d, 0xf0f0, 0x145d, 0x0004, 0x00a9, 0x0068, 0xffa4, 0xfffe, 0xffa6, 0x0054, 0xfa0c, 0x6415, 0x0002, 0x5500, 0x56aa, 0xa80c, 0x0041, 0xf070, 0x00d1, 0x8080, 0x0041, 0x0fe0, 0x4441, 0x014d, 0x7010, 0xf1f0, 0x18d4, 0x5000, 0xfffe, 0xd917, 0x5400, 0x5655, 0x73d1, 0x0001, 0x0039, 0x9555, 0x87ad, 0x0001, 0x0040, 0x0080, 0x8ddd, 0x031d, 0xf0f0, 0xf0f0, 0xf0f0, 0xf1f1, 0xf5d1, 0x5000, 0xa555, 0x006d, 0x8080, 0xa36d, 0x0003, 0x0040, 0x806a, 0xa06a, 0xa87a, 0xaaaa, 0x0056, 0x0104, 0x3336, 0x3333, 0x02d6, 0xfefe, 0xfcfe, 0xfcfc, 0xa3d6, 0x5001, 0xaa55, 0x95fa, 0xa333, 0x013d, 0xc0e0, 0x8080, 0x006d, 0xfff0, 0x6566, 0x6666, 0x00d4, 0x3010, 0xafd4, 0x0000, 0x0015, 0x009a, 0x7c3e, 0x439a, 0x4006, 0x0215, 0x0255, 0x0a55, 0x0a55, 0x0a55, 0xaa55, 0xaaff, 0x3a4d, 0x5404, 0x50fe, 0x40fe, 0x00fe, 0x00fe, 0x003e, 0xd33a, 0x024d, 0x1010, 0x3030, 0xf3f0, 0xf5d4, 0x4001, 0x5500, 0x55a1, 0x545d, 0x015d, 0xc0e0, 0xc0c0, 0x465d, 0x0001, 0x0050, 0x5790, 0x0265, 0x0800, 0x0a00, 0x2a8c, 0x3d56, 0x0000, 0x0105, 0x333d, 0x1133, 0x00a3, 0xfffc, 0x369a, 0x5401, 0x0255, 0xfe00, 0x3f13, 0x0000, 0x5555, 0x003a, 0x00e0, 0xf3a9, 0x0001, 0x0555, 0x555a, 0x0165, 0xba10, 0xfe7f, 0x63d5, 0x0001, 0x0040, 0x3380, 0x3556, 0x0156, 0xa854, 0x1040, 0x3156, 0x0000, 0xaa40, 0x4d31, 0x0000, 0xfe95, 0x943a, 0x5004, 0x00a5, 0x0f95, 0xff54, 0xff50, 0xff40, 0x3a99, 0x4411, 0x0134, 0x3010, 0x0070, 0x02d4, 0xef08, 0x8fcf, 0x0f0f, 0xc3d4, 0x5400, 0x5000, 0xf6c3, 0x4000, 0x10a0, 0x0263, 0x0c0c, 0x0c0c, 0x0e0e, 0x6663, 0x8ac3, 0x1001, 0x01e0, 0x00e0, 0x78a3, 0xe401, 0xf940, 0xfe95, 0x788a, 0x0087, 0x0010, 0x3a87, 0x0007, 0xe401, 0xe500, 0xe500, 0xe500, 0xe900, 0xe940, 0xf940, 0xfa54, 0x00c3, 0x204a, 0x78a3, 0x0007, 0x0054, 0x50a5, 0x00fa, 0x00e5, 0x00e8, 0x00e5, 0x54e9, 0xa9fa, 0x0078, 0xffce, 0x7777, 0x0136, 0xe0e0, 0xf0f0, 0xcf36, 0x0005, 0x0055, 0x0056, 0x0055, 0x5759, 0x5575, 0x5595, 0x3a98, 0x5401, 0x50e9, 0x40fa, 0x873a, 0x5003, 0x543e, 0x553f, 0x553f, 0x554f, 0x33a8, 0x01c3, 0xa280, 0x4512, 0x00a3, 0xe080, 0x01c3, 0x82aa, 0x0228, 0x8ac3, 0x4001, 0x8000, 0xe000, 0x89a3, 0x0001, 0x40e5, 0x40fd, 0xa378, 0x4001, 0x103a, 0x550e, 0x788a, 0x0087, 0x1030, 0x8777, 0x023c, 0xd56e, 0x5f7f, 0x5ff5, 0x8ac3, 0x0401, 0xa000, 0xfa00, 0x78a3, 0x4008, 0xa4fa, 0xe4bf, 0xe4bf, 0xe4ff, 0xe4ff, 0xf9ff, 0xf9ff, 0xfeff, 0x06ff, 0xa83c, 0x4406, 0x515e, 0x455e, 0x545e, 0x555e, 0x555e, 0x555e, 0x555e, 0x0014, 0xfefe, 0x1114, 0x0231, 0xcfe0, 0xcfcf, 0x8f8f, 0xff13, 0x0001, 0x0815, 0x2015, 0x0045, 0x8080, 0xf145, 0x0001, 0x0090, 0x0090, 0x1145, 0x04f3, 0x8920, 0x8022, 0x4218, 0x0499, 0x1024, 0x87f3, 0x4000, 0x0410, 0x3a87, 0x0006, 0x40f9, 0x40f9, 0x40fa, 0x40fd, 0x50fe, 0x50fe, 0xd4ff, 0x3333, 0x333c, 0x00f3, 0x0840, 0xf33f, 0x3f33, 0x0253, 0x8080, 0x8080, 0x8080, 0xf5f3, 0x1000, 0x0180, 0x5533, 0x00f3, 0x0480, 0xca3f, 0x1400, 0xd651, 0xa36c, 0x400e, 0x400a, 0x400a, 0x602a, 0x420a, 0x6082, 0x5a2a, 0x5882, 0xa000, 0xe000, 0xe800, 0xe088, 0xe800, 0xe888, 0xea22, 0xf888, 0x378a, 0x5406, 0x5415, 0x9416, 0x9519, 0xa516, 0xa516, 0xa506, 0xa9c6, 0x3a87, 0x0078, 0xe0f0, 0x378a, 0x5401, 0x4095, 0x3f55, 0x3c8a, 0x5000, 0x0ffe, 0x00c3, 0x110e, 0x0087, 0x80e0, 0x3a87, 0x0003, 0x0005, 0x0056, 0x056a, 0x16bf, 0x0036, 0xc0c0, 0x6666, 0xc366, 0x0036, 0xe0c0, 0xac36, 0x0002, 0x0094, 0x0064, 0xfd94, 0x88aa, 0x00a3, 0x80f0, 0x013c, 0x8af0, 0x56a9, 0x9ac3, 0x1001, 0xa801, 0xe8ff, 0x02a9, 0x3070, 0x1818, 0x0e0c, 0xc3a9, 0x9403, 0xaa94, 0xae95, 0xaba5, 0xaea9, 0x333a, 0x01c3, 0xc782, 0xf542, 0xcccc, 0xcdcc, 0x043c, 0x0840, 0x9240, 0xa554, 0x0c0a, 0x4c08, 0x9a3c, 0x5403, 0x9501, 0xa510, 0xe541, 0xe954, 0x043c, 0x8a20, 0xaa50, 0x0b54, 0x00aa, 0x55aa, 0x9a3c, 0x4401, 0xfa44, 0xf9bf, 0x3a98, 0x9402, 0x911b, 0x801b, 0x000b, 0x78a3, 0xa401, 0xa4ae, 0xa4af, 0x8777, 0x8c3a, 0xa406, 0x94aa, 0x94aa, 0x949a, 0x54aa, 0x909a, 0x53a6, 0x5366, 0x00c3, 0xffca, 0x153c, 0x4000, 0x00f2, 0x3145, 0x9003, 0x90fa, 0xa4ea, 0xa4aa, 0xa4aa, 0x1111, 0x023c, 0x802a, 0xaa55, 0x77ab, 0x51c3, 0x0002, 0x0201, 0xff00, 0xff7f, 0x053c, 0xa802, 0xaa55, 0xb5db, 0xaa9f, 0x655a, 0xfdab, 0xdccc, 0x063c, 0x0050, 0xaba0, 0xdb56, 0x0b6e, 0x1a90, 0x5540, 0xd6a5, 0x8ac3, 0x0402, 0x1041, 0x550a, 0x552f, 0xa887, 0xc333, 0x8877, 0xc3aa, 0xa387, 0x4000, 0x40a9, 0xc3a8, 0x3a87, 0x0000, 0x00f9, 0x33a8, 0xcdcc, 0x073c, 0x5084, 0xa902, 0xd55a, 0x2d5b, 0x2084, 0x9552, 0xab7a, 0x0ffa, 0x005c, 0x0e0e, 0xd35c, 0x5404, 0x5022, 0x5008, 0x5c22, 0x5b88, 0x7aaa, 0x033c, 0x2800, 0x2592, 0x6d55, 0xb7da, 0xfd3c, 0x0000, 0x4400, 0x3cdc, 0x013c, 0xd520, 0xfaa6, 0xf6f3, 0x0001, 0xaa94, 0xaa95, 0x6ff3, 0x01f6, 0x3030, 0x3030, 0xfff6, 0x0000, 0x0001, 0x083f, 0x0952, 0x4924, 0x2400, 0x9220, 0x1244, 0x2480, 0x0550, 0x0920, 0x0055, 0xf3ff, 0xff3f, 0x006f, 0x7070, 0x3fff, 0x02f6, 0xf8f8, 0xf8f8, 0xf0f0, 0x203f, 0x500a, 0x4802, 0x5550, 0x2a49, 0x2481, 0x2401, 0xa551, 0x8422, 0x4412, 0x1401, 0xaff1, 0x0fda, 0x0aa0, 0x0120, 0x65f4, 0x0ad5, 0x0aa0, 0x0490, 0xa950, 0xa00a, 0x900a, 0x5404, 0x802a, 0x002a, 0x5092, 0x5495, 0x5005, 0x2005, 0x5009, 0x1aa5, 0x0aa0, 0x0240, 0x2048, 0x45f3, 0x1400, 0xaa55, 0xf145, 0x9004, 0xa400, 0xa900, 0xaa40, 0xaa90, 0xaaa4, 0x1114, 0x03f1, 0xc080, 0xe0e0, 0xf8f0, 0xfcf8, 0x093f, 0x2480, 0x4040, 0x8015, 0x9024, 0xa802, 0x0904, 0x0052, 0x5049, 0x9001, 0x1204, 0x123f, 0x0001, 0x0000, 0x0090, 0x4512, 0x9403, 0xb555, 0xad55, 0xad55, 0xb555, 0x005f, 0xfefc, 0x4455, 0x023f, 0x00aa, 0x2092, 0x4a01, 0x001f, 0xf0e0, 0x631f, 0x4007, 0xaa55, 0xa8fe, 0x8afe, 0x22ff, 0x28ff, 0x22ff, 0x08ff, 0xc0ff, 0x6666, 0x0087, 0xfe80, 0x00a8, 0xffc0, 0x01f3, 0x8000, 0xaa54, 0xf3a8, 0x4001, 0x94aa, 0xa9aa, 0x01f3, 0x8208, 0x5aa4, 0x8a3f, 0x4400, 0x4111, 0x78a3, 0x9002, 0x94ff, 0x90ff, 0x50ff, 0x8888, 0x00a3, 0x00f0, 0x003f, 0xf65a, 0x0087, 0xf080, 0xfa87, 0x5000, 0x95a5, 0x003a, 0xffee, 0x00f3, 0x8aa8, 0xf6f3, 0x4406, 0x002a, 0x102a, 0x402a, 0x102a, 0x446a, 0x116a, 0x156a, 0xf666, 0x023f, 0xdfe4, 0xafbe, 0xad5e, 0xfff3, 0x3f3f, 0x003a, 0xfefc, 0x01f3, 0x1004, 0x550a, 0x78a3, 0x0004, 0x40a9, 0x40fe, 0x40fe, 0x00a9, 0x0055, 0x8af3, 0x0401, 0x8004, 0xeafa, 0x0178, 0xef08, 0xcfef, 0x38a7, 0x0001, 0xaaa9, 0x55ff, 0x0087, 0xc080, 0x3a87, 0x0003, 0x0094, 0x40e5, 0x54f9, 0xa5fe, 0x3f33, 0x333a, 0x02f3, 0x04a0, 0xa251, 0xd55a, 0xf3f3, 0x78a3, 0x5002, 0x50fe, 0x50fe, 0x40a9, 0xaaaa, 0x00f3, 0xa890, 0xf3f3, 0x0087, 0x8080, 0x3a87, 0x0002, 0x5550, 0xaa95, 0xffea, 0xa83f, 0x1400, 0x5e45, 0x00a3, 0x1030, 0x01f3, 0x8208, 0x4a04, 0xaf3f, 0x4400, 0x4444, 0x00f1, 0xc080, 0xf3f1, 0x0003, 0x5464, 0x9555, 0xa099, 0x6469, 0x01f3, 0x5aba, 0xffa5, 0x453f, 0x4401, 0xaa44, 0xaaea, 0xf145, 0xa403, 0xa900, 0xa900, 0xaa40, 0xaa90, 0x1145, 0x0041, 0x0010, 0x1111, 0x0ef3, 0x5a54, 0xadd5, 0x57fa, 0xa55d, 0xd6aa, 0xf7aa, 0xff5a, 0x892b, 0x5554, 0xd6a9, 0xdaba, 0xa90f, 0xa554, 0xa55a, 0xbd66, 0xa83f, 0x4000, 0x557a, 0x33a8, 0x08f3, 0x0288, 0xd6a4, 0x8525, 0xaa58, 0xb555, 0x245f, 0x5592, 0xadaa, 0xd6ab, 0xf53f, 0x1005, 0x4540, 0x51a4, 0x44a9, 0x11a8, 0x01aa, 0x81aa, 0x00f5, 0x3070, 0x5555, 0x06f3, 0x9224, 0x5455, 0x55ab, 0xffaa, 0x5284, 0xb5aa, 0xbd66, 0xa93f, 0x4000, 0xeaaa, 0x0269, 0xfefe, 0xfefe, 0xfefe, 0x006a, 0xfefe, 0x01a9, 0x8000, 0xf0c0, 0xd3a9, 0x400a, 0x5095, 0x54a5, 0x55a9, 0x55ea, 0x6505, 0xa915, 0xaa15, 0xaa15, 0xaa05, 0x6a05, 0x6a05, 0x99aa, 0x01d6, 0xf8f0, 0xf8f8, 0x3cd6, 0x4001, 0xf056, 0xf055, 0xddd3, 0x3a66, 0xcdd3, 0x378a, 0x9006, 0x40aa, 0x40aa, 0x40aa, 0x43aa, 0x0faa, 0x0fa9, 0x0fa9, 0xf978, 0x5403, 0xaaa1, 0xaaa1, 0xaaa1, 0xaaa1, 0x9987, 0x0089, 0x1030, 0x3a89, 0x0003, 0x0001, 0x005a, 0x416b, 0x556b, 0x8a3d, 0xa400, 0x94ff, 0x7887, 0xad3d, 0x877a, 0x8a3d, 0x5400, 0x40a9, 0xa783, 0x0004, 0xfda9, 0xcf69, 0x03d9, 0x00f6, 0x003d, 0xfd3a, 0x4000, 0x5465, 0x003d, 0x097e, 0xcddd, 0x03d5, 0xf0f8, 0xf0f0, 0xe0f0, 0xc0e0, 0x02cd, 0x2000, 0x0020, 0x8008, 0x035d, 0xefe0, 0xcfcf, 0x8f8f, 0x0f0f, 0x5555, 0x00a9, 0xe0c0, 0x999a, 0x03d6, 0xe0c0, 0xe0e0, 0xf0e0, 0xf0f0, 0x7788, 0x9887, 0x0187, 0xc0c0, 0x8080, 0xfa78, 0x5401, 0x5255, 0x4a55, 0x7777, 0x0189, 0x1010, 0x3030, 0xfa89, 0x0008, 0x0005, 0x4006, 0x4016, 0x001a, 0x001a, 0x0016, 0x0016, 0x0016, 0x001a, 0x0278, 0xfe3e, 0xfefe, 0xfefe, 0xfa78, 0x5400, 0x5405, 0xaa87, 0x065d, 0x0100, 0x0101, 0x0303, 0x0703, 0xf0f0, 0xe0e0, 0x80c0, 0xdddd, 0xc3a9, 0x5402, 0x94fe, 0x94fa, 0xa5fe, 0x3adc, 0x1002, 0x10fa, 0x00fa, 0x003e, 0xc33a, 0x3d6c, 0x4004, 0xf88a, 0xe0a8, 0xc222, 0xf8a2, 0xc002, 0xdcdc, 0x003c, 0x0c0c, 0x9a3c, 0x5001, 0xffe9, 0xffe9, 0x89a3, 0x9405, 0xa5ae, 0xe5ab, 0xb5ae, 0xf5bf, 0xfd6f, 0x567f, 0xa9d3, 0x4000, 0x03ea, 0x3a98, 0x5400, 0x11f9, 0xaaa9, 0x00a8, 0x0080, 0x0078, 0xa8a8, 0xa3cd, 0x0003, 0x0641, 0x1a14, 0x6a51, 0xaf44, 0xd3c3, 0xc3a8, 0x5000, 0x00ea, 0x873a, 0x5000, 0x0fea, 0x0196, 0x8080, 0x8080, 0x0036, 0xc080, 0x0189, 0xa840, 0xd0a0, 0x3a89, 0x4001, 0xaa44, 0xbf44, 0x3c9a, 0x5405, 0x543e, 0x543f, 0x543f, 0x543e, 0x540f, 0x550f, 0xaa33, 0x00a9, 0x7020, 0xf3a9, 0x4002, 0x4055, 0x50a9, 0x54aa, 0x3333, 0x06cd, 0x8410, 0x2a52, 0xd555, 0xdfbb, 0x48a2, 0x55e2, 0xead5, 0xf3dc, 0x0400, 0x0180, 0xcccc, 0x003a, 0xff00, 0x003c, 0x00be, 0x01dc, 0x0092, 0x0055, 0xfdc3, 0x4000, 0x5065, 0x02dc, 0x850a, 0x2544, 0x0499, 0xcccc, 0x03a9, 0xc0c0, 0xc0c0, 0xc1c0, 0x83c1, 0x003a, 0xfe0e, 0x00c3, 0xfd68, 0xfd3c, 0x9402, 0x0588, 0x0500, 0x1520, 0x02dc, 0xa6a0, 0xff5c, 0x0e8b, 0xc3cc, 0x01cd, 0x104a, 0x9045, 0x53dc, 0x5408, 0x0044, 0x5b80, 0x0f44, 0x6f44, 0x3f10, 0xbf40, 0xff00, 0xff02, 0xff03, 0xc355, 0x01cd, 0x418a, 0x2892, 0xf3cd, 0x5400, 0x6655, 0x00cd, 0xa108, 0xdcdd, 0x003c, 0x2a80, 0x04dc, 0xffd0, 0x1aab, 0x0855, 0x0461, 0xdbf0, 0xf3cd, 0x0400, 0x5040, 0x3ccd, 0x03dc, 0x8228, 0x0011, 0xa6f0, 0x295e, 0xf3cd, 0x0401, 0x4155, 0x4556, 0x00c3, 0xf8fe, 0x00cd, 0x014a, 0xf3cd, 0x0402, 0x5012, 0x9445, 0x5444, 0x003c, 0x1020, 0x03dc, 0xf5b0, 0x4bae, 0x0caa, 0x1900, 0xcccc, 0x005d, 0xfefe, 0xfc5d, 0x5004, 0x5255, 0x4055, 0x4855, 0x0a55, 0x8a55, 0x5555, 0x05cd, 0x554a, 0x6daa, 0x7fbb, 0xffee, 0x55aa, 0xed2a, 0xffdc, 0x1000, 0x0044, 0x01a9, 0xc0c0, 0xf0e0, 0xc3a9, 0x4002, 0x40a5, 0x50a5, 0x50a9, 0xc333, 0x006a, 0xfefe, 0xd36a, 0x5403, 0x5655, 0x8055, 0xa0ba, 0xe8ee, 0xa3cd, 0x8404, 0x818a, 0x2412, 0x8111, 0x9444, 0x8404, 0x9a3d, 0x9406, 0xa5fe, 0xa5fe, 0xa5ff, 0xa9ff, 0xa9ff, 0xe9ff, 0xe9ff, 0x9999, 0x00cd, 0x0200, 0xac3d, 0x0004, 0x2100, 0x8508, 0x1500, 0x5722, 0x7f80, 0xdd33, 0x01cd, 0x4010, 0x5401, 0xddcd, 0xaa66, 0xdd33, 0xaa96, 0xd33a, 0x3a96, 0x9401, 0x54fe, 0x54ea, 0x3aaa, 0x00a9, 0xc0e0, 0x8a39, 0x0000, 0xa500, 0xa378, 0x5402, 0x14fa, 0x14ea, 0x00ea, 0x98a3, 0x4002, 0x40ea, 0x40fa, 0x40fa, 0x0089, 0x1010, 0x3cd9, 0x0001, 0xfdd9, 0x7655, 0x01cd, 0x4088, 0x8420, 0xfcd3, 0x4403, 0x6a09, 0x5556, 0x5905, 0x5559, 0x3cdd, 0x00cd, 0xc010, 0xcddd, 0xdcdd, 0x02a9, 0xffe0, 0xc080, 0xf8e0, 0xaa99, 0x003a, 0x8e0c, 0xcad3, 0x1000, 0xf00a, 0x01a9, 0x8080, 0xf060, 0xcf9a, 0x5400, 0x0000, 0x04cd, 0x0020, 0x2880, 0x0482, 0x2020, 0xa209, 0x35cd, 0x1004, 0x0101, 0x0aaa, 0x3aaa, 0x2aaa, 0xeaaa, 0x5555, 0x01cd, 0x0010, 0x1048, 0x5cd3, 0x5400, 0x5765, 0x09dc, 0xbf76, 0xf7fe, 0xfadf, 0xdfdf, 0x7ffe, 0xffdb, 0xfe6b, 0x7fad, 0x7fef, 0x55ef, 0xdcdd, 0x015d, 0xe0e0, 0xc0c0, 0xfc5d, 0x0000, 0x0240, 0x5ddc, 0x00cd, 0x0914, 0xffc5, 0x0000, 0x0001, 0x02cd, 0x8820, 0x8020, 0x4000, 0xf0dc, 0x4400, 0x5554, 0x0000, 0x0000
};

// [D_08C296CC] D_08C2990C Huffman Window 1
u32 D_08c2990c_window1[] = {
	0xf63f27be, 0x7d2df6d3, 0x7fd9d7bb, 0xfbd97932, 0xdbfbfbef, 0xb2f7dffb, 0x3dfcf6f9, 0xebf7bedf, 0x7f7b277b, 0x6ef7e5f6, 0xef4edf28, 0xfcbfbfbb, 0xbb5ffd53, 0xaef1d8df, 0xfbbeb5ec, 0x776fbedb, 0x416f7b7f, 0xf6efd2ff, 0x00000000
};

// [D_08C29718] D_08C2990C Huffman Window 2
u32 D_08c2990c_window2[] = {
	0x1043a8da, 0x9242d78b, 0x77010742, 0x856aa054, 0xab55a257, 0x9ce395b3, 0xd2926e9a, 0x66154e5b, 0xcab12344, 0x3ee894d4, 0x58e7baa0, 0xa8945211, 0x52a8aeae, 0x00000001
};

// [D_08C29750] D_08C2990C Huffman
struct Huffman D_08c2990c_huffman[] = {
	/* Data */			D_08c2990c_huffmandata,
	/* Size */			0xe35,
	/* Count */			0x241,
	/* Window 1 */		D_08c2990c_window1,
	/* Window 2 */		D_08c2990c_window2,
};

// [D_08C29760] D_08C2990C RLE Data
u8 D_08c2990c_rledata[] = {
	0x1, 0xf, 0x1, 0xf, 0xc, 0x4, 0x4, 0xc, 0x4, 0x17, 0x6, 0xf, 0x11, 0x9, 0x7, 0x4, 0x5, 0x6, 0x1, 0xa, 0x8, 0xd, 0x1, 0xe, 0x4, 0x4, 0x2, 0x7, 0x6, 0xa, 0x1, 0xa, 0x8, 0x5, 0x2, 0x6, 0x1, 0x10, 0x10, 0x8, 0xb, 0xc, 0x1, 0x6, 0x2, 0x7, 0x1, 0x5, 0x1, 0x9, 0x1, 0xc, 0x4, 0xa, 0x1, 0x4, 0x1, 0x3, 0x12, 0xa, 0x1, 0x3, 0x1, 0xb, 0x1, 0x7, 0x5, 0x3, 0x1, 0xa, 0x2, 0x3, 0x1, 0x5, 0x3, 0x7, 0x3, 0x12, 0x1c, 0xf, 0x7, 0x9, 0x1, 0x4, 0x2, 0x9, 0x6, 0xa, 0x2, 0xe, 0x1, 0x5, 0x1, 0x9, 0x5, 0xb, 0x1, 0x7, 0x5, 0x3, 0x1, 0xb, 0x1, 0x3, 0x5, 0x6, 0x6, 0x7, 0x2, 0x13, 0x4, 0x8, 0x3, 0x4, 0xa, 0x6, 0x3, 0xb, 0x7, 0xa, 0x13, 0xe, 0x1, 0x5, 0x2, 0x8, 0x6, 0xa, 0x8, 0x6, 0x13, 0xe, 0x32, 0x9, 0x7, 0x7, 0x9, 0x9, 0x1, 0x3, 0x1e, 0x4, 0x5, 0x3, 0x9, 0x7, 0x11, 0x3, 0x5, 0x6, 0x4, 0x5, 0x11, 0xd, 0x22, 0x3, 0x18, 0x5, 0x1, 0xb, 0x1e, 0x6, 0x11, 0xf, 0x1, 0xf, 0x10, 0x7, 0x3c, 0xd, 0x1, 0x10, 0xc, 0x3, 0x5, 0xb, 0x1, 0x5, 0xb, 0x3, 0x1, 0x3, 0x3, 0x5, 0x2a, 0x6, 0x18, 0x8, 0x25, 0x3, 0xd, 0x4, 0x8, 0x8, 0x8, 0x4, 0x1c, 0x9, 0xd, 0x9, 0x23, 0xd, 0x11, 0x5, 0xb, 0xb, 0x5, 0xd, 0x2, 0xb, 0x1, 0x4, 0x5, 0x3, 0x2, 0x6, 0x1, 0xe, 0x2, 0x7, 0xc, 0x8, 0x5, 0x4, 0x8, 0x3, 0x24, 0xc, 0x1d, 0x3, 0x5, 0xb, 0x1, 0x9, 0x26, 0x8, 0xd, 0xb, 0x28, 0x4, 0xb, 0x5, 0xc, 0x8, 0x22, 0x8, 0x9, 0xd, 0x1, 0x3, 0x41, 0x6, 0x28, 0xb, 0x1a, 0x5, 0xd, 0x3, 0x1a, 0x9, 0x7, 0x4, 0x2b, 0xa, 0x11, 0x6, 0xa, 0xa, 0x6, 0x7, 0x9, 0xd, 0x3, 0xb, 0x16, 0xa, 0x3, 0xf, 0x13, 0xd, 0x3, 0xd, 0x47, 0x3, 0x69, 0x5, 0xb, 0x5, 0x4d, 0xd, 0xd, 0x3, 0xb, 0x5, 0x77, 0x3, 0x23, 0x3, 0xc, 0x6, 0x7, 0x9, 0x7, 0x7, 0x19, 0x7, 0x4d, 0x3, 0xd, 0x3, 0x1d, 0x5, 0x3, 0xd, 0x3, 0xb, 0xe, 0x3, 0x14, 0xb, 0x2, 0xe, 0x8, 0x8, 0x7, 0x9, 0x9, 0x7, 0x7, 0x9, 0x14, 0xb, 0x8, 0x9, 0x6, 0x5, 0x70, 0x3, 0x6, 0x4, 0x13, 0x3, 0x22, 0x4, 0x15, 0x3, 0xf, 0x3, 0x13, 0x6, 0x12, 0x3, 0x5, 0xe, 0x14, 0x3, 0x43, 0x4, 0x8, 0x3, 0x3c, 0x3, 0xa, 0xe, 0x82, 0xe, 0x16, 0x3, 0x19, 0xb, 0x25, 0x5, 0x47, 0x3, 0x51, 0x4, 0xc, 0x4, 0x1b, 0x5, 0x76, 0x4, 0xc, 0x4, 0x1b, 0x5, 0x7, 0x6, 0x7f, 0x5, 0x18, 0x8, 0x31, 0x7, 0x2c, 0xc, 0x9, 0x4, 0x14, 0xc, 0x14, 0xc, 0x4, 0x9, 0x7, 0x5, 0xe, 0x4, 0x11, 0x7, 0x1, 0x4, 0xd, 0x3, 0x1c, 0xc, 0x2, 0x9, 0x19, 0xd, 0x3, 0xa, 0x6, 0x7, 0x9, 0x0, 0x60, 0x0
};

// [D_08C2990C] D_08C2990C Graphics
struct CompressedGraphics D_08c2990c = {
	/* Huffman Data */		D_08c2990c_huffman,
	/* RLE Data */			D_08c2990c_rledata,
	/* RLE Size */			0x1aa,
	/* RLE Offset */		0x1600,
	/* Double Compressed */	TRUE,
};

u8 D_08c2991c[8] = {
	0x73, 0x00, 0x3C, 0x00, 0x69, 0x00, 0x64, 0x00
};

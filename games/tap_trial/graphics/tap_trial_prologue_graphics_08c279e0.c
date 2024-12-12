#include "global.h"
#include "graphics.h"

// // //  D_08C279E0  // // //

// [D_08C26350] D_08C279E0 Huffman Data
u16 D_08c279e0_huffmandata[] = {
	0x006d, 0xfff0, 0x1456, 0x4005, 0x9000, 0xf900, 0xff90, 0xfff9, 0xfff9, 0xfffd, 0x006f, 0xfefc, 0x1456, 0x4001, 0xe500, 0xffe5, 0xff1e, 0x0000, 0x0009, 0xeef1, 0x021e, 0x3030, 0x3030, 0x3030, 0x41fe, 0x0000, 0xaa55, 0x6541, 0x9001, 0xe400, 0xe400, 0x006f, 0xe080, 0x66ff, 0x6666, 0x001f, 0xf0c0, 0x1fff, 0x1111, 0x00fe, 0x0fc0, 0x91fe, 0x5000, 0xfaaa, 0x00e9, 0xffc0, 0x02fe, 0x0f80, 0x8800, 0x080f, 0x19ef, 0x0003, 0x0000, 0xffe9, 0xaa95, 0x1555, 0x006f, 0xf0f0, 0x15f6, 0x5400, 0x5e00, 0x6666, 0xff14, 0x5666, 0x46f1, 0x4000, 0x40ea, 0x4156, 0x9000, 0xb4aa, 0x1111, 0x026f, 0xc080, 0xf8e0, 0xfefe, 0x05ef, 0x0fe0, 0x080f, 0x0f0e, 0x1f01, 0x3f3f, 0x031f, 0xff91, 0xa400, 0xa9aa, 0x03ef, 0x0f80, 0x030f, 0x0f1f, 0x70fc, 0x14ef, 0x0001, 0xaa55, 0xfffa, 0xfe91, 0x4004, 0x9000, 0xa400, 0xa900, 0xaa90, 0xaaa5, 0x011f, 0xfcfc, 0xfcfc, 0x19ef, 0xe403, 0x95ff, 0x55ff, 0x55fa, 0xffa5, 0x03ef, 0xf8fe, 0xf0e0, 0x3f03, 0x010f, 0xf9fe, 0x0002, 0x8055, 0x00aa, 0xaa55, 0x9999, 0x00fe, 0x07f0, 0xffef, 0x0000, 0x0054, 0x0091, 0x7030, 0x1111, 0x00e9, 0x0f00, 0x0091, 0xfff0, 0xee99, 0x1456, 0x0000, 0x9494, 0x1114, 0x0091, 0xfce0, 0xf1e9, 0x4001, 0xaa55, 0x000a, 0x01fe, 0xffc0, 0xfcf0, 0x01e1, 0xfcfc, 0xfefe, 0x49e1, 0x5401, 0x5655, 0x0055, 0x5411, 0x69e1, 0x0001, 0x0029, 0xffff, 0x1654, 0x9000, 0xffaa, 0x9111, 0x011f, 0xfcfc, 0xfcfc, 0xe19f, 0x9001, 0xc0aa, 0xfca9, 0x19ee, 0x02ef, 0x01fc, 0xf01f, 0x11ff, 0xadbf, 0x0000, 0xa995, 0xbbba, 0x02bd, 0x7030, 0x2010, 0xa010, 0xddbd, 0x016d, 0xfefe, 0xfefe, 0x666d, 0x00e6, 0x1010, 0xafc6, 0x0000, 0x0001, 0x02bd, 0x0080, 0x0040, 0x8040, 0xfabd, 0x5004, 0x54aa, 0x94aa, 0x946a, 0xa96a, 0x945a, 0x00ba, 0x3f1c, 0xd6ba, 0x5001, 0xfffa, 0x7ffa, 0xbdc6, 0x9001, 0x90fa, 0xd0ff, 0x96ab, 0x4004, 0x540a, 0xd54a, 0x755a, 0x5500, 0x7540, 0xaaab, 0x009a, 0x0100, 0xaaaa, 0xa9a9, 0x00ba, 0x0e08, 0x03db, 0xfef8, 0x40f8, 0x7f7f, 0x0019, 0xf3ab, 0x4405, 0x055a, 0x056a, 0x056a, 0x156a, 0x15aa, 0x15aa, 0x003a, 0x181e, 0x2bdc, 0x4006, 0x0255, 0x5255, 0x2255, 0x0255, 0x0a55, 0x2a54, 0x8a54, 0xdccc, 0x3332, 0x00a3, 0xef80, 0x54da, 0x0001, 0xaaa5, 0xaad5, 0xdbcd, 0x5445, 0xbcdd, 0x455d, 0xccdd, 0x45db, 0x5ecd, 0x4400, 0x40c9, 0x5dcb, 0xe400, 0x859a, 0xdba9, 0x5402, 0x95fa, 0xa5ea, 0xa9fe, 0xddcd, 0x01db, 0xfcf8, 0xfefe, 0x0034, 0x8080, 0x0154, 0xa040, 0x5150, 0x5445, 0x0123, 0x00e0, 0x0c0c, 0x0034, 0xfefe, 0xf345, 0xa400, 0xa1aa, 0x3333, 0x0354, 0x0100, 0xa542, 0xf575, 0x910f, 0x4454, 0x4545, 0x01ab, 0xfcfc, 0xf1f3, 0xdacb, 0x5001, 0x4c0a, 0xf42a, 0x00d6, 0xf010, 0x01bd, 0x080c, 0x8e0c, 0xfdab, 0x5002, 0x40aa, 0x542a, 0x500a, 0x03d6, 0xfcfc, 0xfcfc, 0xfcfc, 0xfcfc, 0x01bd, 0x0808, 0x0e0c, 0xcdab, 0x4004, 0x502a, 0x540a, 0xc015, 0x3015, 0xc055, 0xcba3, 0x5403, 0x54ea, 0x54aa, 0x50e9, 0x50a9, 0xbbba, 0x00cd, 0x0300, 0xfbdc, 0x5404, 0x4255, 0x5455, 0x4255, 0x5055, 0x5855, 0xdddd, 0x0332, 0x0202, 0x8703, 0xfcfe, 0x3ffc, 0xff23, 0x0000, 0x0050, 0x014d, 0xe0f0, 0xc0e0, 0xfc4d, 0x0000, 0x0040, 0xdcdd, 0x004d, 0xfef0, 0xab4d, 0x5400, 0xfa55, 0xdba9, 0x4407, 0x505a, 0x511a, 0x5456, 0x9515, 0x9545, 0xa951, 0xe955, 0xffe9, 0xdbba, 0x02bd, 0xb070, 0x2050, 0x1000, 0xdddd, 0xb444, 0x004a, 0xf070, 0x342a, 0x5000, 0x57aa, 0x0024, 0xe0e0, 0xa324, 0x0002, 0x0050, 0x7ba0, 0x6b55, 0x0232, 0x80c0, 0x818f, 0xf0c0, 0x2222, 0x4444, 0x0369, 0xefe0, 0xefef, 0xefef, 0xefef, 0x01d6, 0x8080, 0xc080, 0x6666, 0xdd66, 0xf987, 0x9404, 0x50aa, 0x54aa, 0x50aa, 0x54a9, 0x90aa, 0x0098, 0x8f0e, 0x9998, 0xaabb, 0x00a9, 0x0030, 0xa789, 0x000c, 0x1154, 0x05a5, 0x56a5, 0x1aa5, 0x6aa7, 0xaa50, 0xaa54, 0xaa51, 0xa950, 0xa951, 0xa550, 0x9501, 0x5441, 0x029a, 0xf400, 0xfbfd, 0x8b00, 0xbcd9, 0x0002, 0xeea5, 0xb655, 0xb655, 0x00cd, 0xc0a0, 0xbfcd, 0x0000, 0x0040, 0x00cb, 0x2050, 0xfcdb, 0x0002, 0x0089, 0x002a, 0x0a19, 0x02ab, 0x2a5c, 0x1428, 0x0800, 0x00cb, 0x0080, 0xfdcb, 0x840e, 0x50a9, 0x95aa, 0x50aa, 0xa5aa, 0x91aa, 0xa9aa, 0x94aa, 0x54aa, 0x10aa, 0x50a5, 0x00a5, 0x4055, 0x00a4, 0x0054, 0x0091, 0xcbcb, 0x01cd, 0x8010, 0xc0a0, 0xabcd, 0x0006, 0x0061, 0x4094, 0x00a5, 0x6599, 0x95ea, 0xa6aa, 0xa9ee, 0x00ab, 0x4e0c, 0xf3ba, 0x0001, 0x8055, 0xa011, 0x02b5, 0xc0c0, 0x80c0, 0x8080, 0x3ab5, 0x0001, 0x3fe9, 0x3fea, 0x013a, 0x9cbc, 0xc3ce, 0xfba3, 0x5400, 0x6505, 0xa33a, 0x0035, 0x1010, 0x00a5, 0x3030, 0x5555, 0x5aaa, 0x00b5, 0xfff0, 0x00ab, 0xfff2, 0x009a, 0xf7f4, 0x006b, 0xfefe, 0x666b, 0x00a6, 0x1010, 0x0096, 0x1010, 0xff96, 0x0000, 0x0001, 0x00bd, 0xd0e0, 0xdbdd, 0x00ab, 0xac08, 0x009a, 0x8000, 0xff9a, 0x5400, 0x5554, 0x00ab, 0x5f1e, 0x009a, 0x1000, 0xb69a, 0x5405, 0x5511, 0x010a, 0x000a, 0xc002, 0xf002, 0xffc2, 0xcdb6, 0x5401, 0x74d9, 0x9ea6, 0xfbad, 0x0000, 0x2295, 0xbbba, 0x00bd, 0x5172, 0x9abd, 0x0003, 0x0004, 0x559a, 0x5aab, 0xaabf, 0x9998, 0xaa99, 0x0089, 0x0700, 0xf798, 0x5000, 0x0255, 0x9999, 0x00db, 0x00a4, 0x00ba, 0x00d6, 0x009a, 0x7f0a, 0x9999, 0x00bd, 0xc040, 0x9abd, 0x0006, 0x0095, 0x4095, 0x50a5, 0x55a9, 0x95ea, 0xa5fa, 0xe9aa, 0x009a, 0xef8e, 0x0089, 0x8e82, 0xf798, 0x0001, 0x2211, 0xa805, 0x00bd, 0xfda0, 0x00ab, 0xfc40, 0x00bd, 0xa840, 0x00ab, 0xd000, 0x009a, 0x8000, 0x00bd, 0x0500, 0x9adb, 0x4006, 0x0255, 0x2a50, 0xab00, 0xbb0a, 0xff2a, 0x55ab, 0x4440, 0x00ba, 0xd8fe, 0xaaaa, 0xaa3a, 0x00ba, 0x1702, 0xdcab, 0x000b, 0x0211, 0x2340, 0x8a00, 0xae00, 0x0002, 0x81fa, 0x04a8, 0x01e8, 0x0420, 0x11a0, 0x0480, 0x1080, 0x003b, 0xfff0, 0x00a3, 0x3c18, 0xaaa3, 0x3aaa, 0x02ba, 0x2008, 0x0894, 0xce80, 0xdcab, 0x0003, 0x0001, 0x2881, 0x3200, 0xeea0, 0xcbbb, 0x00cd, 0x0202, 0xfbdc, 0x540a, 0x4255, 0x1055, 0x6255, 0x1554, 0x1588, 0x15a1, 0x5588, 0x15a0, 0x1588, 0x11a0, 0x85a8, 0xbbbc, 0x0045, 0xa0aa, 0x3a45, 0x0003, 0x0044, 0xfe84, 0xea84, 0xaa04, 0xdba5, 0x000b, 0x0065, 0x0059, 0x0098, 0x00a8, 0x0368, 0x0e00, 0x0a00, 0x1a00, 0x5a00, 0x6600, 0x5a00, 0x5601, 0xd453, 0x5000, 0x9555, 0x17d5, 0x0000, 0xff95, 0x5ddd, 0xbd14, 0x5400, 0x40ea, 0xcddd, 0x00d4, 0xf0f0, 0x3d45, 0x5400, 0x17aa, 0xdddd, 0x145b, 0xa401, 0xfeff, 0xa6ff, 0x1111, 0x0054, 0xfa0c, 0x6415, 0x0003, 0x5500, 0x56aa, 0xa80c, 0x6a55, 0xa321, 0x0001, 0xfaa5, 0xfe95, 0xba32, 0x4004, 0x40e9, 0x50ea, 0x95fa, 0x95fa, 0xa1fa, 0xdcba, 0x5408, 0xee95, 0xfa55, 0xfb65, 0xfe95, 0xffa5, 0xff99, 0xfff9, 0xffa6, 0x5aaf, 0xccdd, 0x00bc, 0x8f4e, 0x2cab, 0x4004, 0x5008, 0x540a, 0xd502, 0x5540, 0xf550, 0xaaab, 0x002a, 0x8f0e, 0x1a23, 0x5403, 0x502a, 0x0009, 0x0552, 0x1554, 0xfd41, 0x0000, 0x0055, 0xd111, 0x0041, 0xe0fe, 0x00d1, 0xef00, 0x01cd, 0x80c0, 0xc0e0, 0xfcd1, 0x0000, 0x5540, 0xdddc, 0x01d4, 0xf8fe, 0xc0e0, 0x78d1, 0x0001, 0x0255, 0x0300, 0xbd91, 0x0000, 0x0001, 0x17bd, 0xe401, 0x00ff, 0x0040, 0x87ad, 0x4001, 0x8000, 0xc000, 0xdddd, 0xaaab, 0x012a, 0x8a0a, 0xc705, 0xba32, 0x9002, 0x940a, 0x9550, 0xa555, 0xdcba, 0x4006, 0x0094, 0x4065, 0x40a5, 0x5095, 0x50e9, 0x54a5, 0x54ea, 0xddcb, 0x00cd, 0x8040, 0xabcd, 0x0006, 0x0061, 0x4055, 0x44a9, 0x94a9, 0x55aa, 0xa5ea, 0xa9fa, 0x00ab, 0x8f0e, 0x2aaa, 0x01dc, 0xfcfe, 0xfeff, 0xc1d8, 0x5402, 0x5e55, 0x5255, 0x5a55, 0x871d, 0x0001, 0x0025, 0x00d5, 0x5d31, 0x0001, 0x00a9, 0xaaa8, 0x55dd, 0x006d, 0x8080, 0xab6d, 0x0002, 0x2040, 0x806a, 0xa26a, 0x63ab, 0xbbbd, 0xaaaa, 0x0056, 0x0104, 0xbbb6, 0xbbbb, 0x02d6, 0xfefe, 0xfcfe, 0xfcfc, 0xabd6, 0x5001, 0xaa55, 0x95fb, 0xabbb, 0xdddc, 0x01bd, 0x0c0e, 0x0808, 0x0056, 0x4000, 0x6666, 0xdcba, 0x5006, 0x50e9, 0x54a6, 0x54e9, 0x50a5, 0x50e9, 0x5099, 0x40a5, 0xccbb, 0x333a, 0x0323, 0xf1e0, 0xfbf3, 0x09eb, 0x8790, 0xf3a2, 0x4006, 0x6aaa, 0x5a00, 0x5800, 0x5800, 0x6800, 0x6a00, 0x6aaa, 0x00d4, 0x3010, 0xffd4, 0x0000, 0x0015, 0x009a, 0xfc3e, 0x4b9a, 0x4006, 0x0215, 0x0255, 0x0255, 0x0a15, 0x0a45, 0x8014, 0x20ff, 0xba4d, 0x5400, 0x50fa, 0xbaaa, 0x4ddc, 0xfdba, 0x5002, 0x50aa, 0x94aa, 0x90a9, 0x00cd, 0x0c00, 0x4bdc, 0x0402, 0x2055, 0x8055, 0xa967, 0xcdd4, 0x004b, 0x3030, 0xfcab, 0x5000, 0x5408, 0xbbbc, 0x00ab, 0x8f0e, 0x3b2a, 0x1001, 0xf40a, 0xf002, 0x002a, 0xf8f0, 0x00d4, 0x80c0, 0x5bd4, 0x0006, 0xf255, 0xcd55, 0xfd55, 0xf955, 0xf955, 0xf955, 0xf955, 0xdddd, 0x65cd, 0x5554, 0x0265, 0x0800, 0x0a00, 0x2a8c, 0xbd56, 0x0000, 0x0105, 0xbbbd, 0x11bb, 0x00ab, 0xfffc, 0x009a, 0x5448, 0x6a93, 0xa400, 0xabaa, 0x1b6a, 0x0001, 0x8881, 0xffff, 0x00ba, 0x00e0, 0x01a9, 0x10ee, 0x3f4f, 0xaaba, 0xaaaa, 0x0165, 0xba10, 0xfe7f, 0x6bd5, 0x0001, 0x0040, 0x3380, 0xb556, 0x0156, 0xa854, 0x1040, 0xa256, 0x0000, 0xfa40, 0xc2ba, 0x5401, 0x5402, 0xd502, 0xcba3, 0x5402, 0x95aa, 0x95ea, 0x95ba, 0xadcb, 0x9401, 0x400f, 0xaaa5, 0xdccb, 0x02cd, 0x1030, 0x1020, 0x1000, 0x3abd, 0x0002, 0xfaa5, 0xfaa5, 0xfea9, 0xaaab, 0x00a2, 0x7070, 0xf3a2, 0x0000, 0x0025, 0x3aaa, 0x0332, 0x1810, 0xfc38, 0x286f, 0x3020, 0xb1a2, 0x4000, 0xaaaa, 0xa4db, 0x4000, 0x0fa9, 0x44b3, 0x4b9a, 0x0000, 0x04e4, 0xbaaa, 0x00a9, 0xf0e0, 0x419a, 0x4400, 0xfa15, 0x9ab4, 0x0002, 0x0001, 0x0006, 0x001e, 0xabcd, 0x0006, 0x00a5, 0x4094, 0x0099, 0x50a5, 0x50aa, 0x95a9, 0x94ea, 0xaabb, 0x03d4, 0xf080, 0xfcfe, 0xf0f8, 0xc0e0, 0x6ceb, 0x9402, 0x64f5, 0x55f5, 0x54f5, 0x016e, 0x0c0c, 0x0e0e, 0x666e, 0xecee, 0x8abb, 0xbbec, 0x8abb, 0xbbbe, 0x78ab, 0xe401, 0xf940, 0xfe95, 0x788a, 0x0087, 0x0010, 0xba87, 0x0005, 0xe401, 0xe500, 0xf500, 0xe500, 0xe900, 0xe940, 0x8777, 0xeba8, 0x8887, 0xebaa, 0x00ce, 0x204a, 0x00be, 0x9080, 0x8abe, 0x4002, 0x4055, 0x55a9, 0xa4fa, 0x7788, 0xbbeb, 0x78aa, 0x78be, 0x5000, 0x54e9, 0xb78a, 0x9000, 0x94ff, 0xaaab, 0x7789, 0x889a, 0x0078, 0xffce, 0x7777, 0x01e6, 0xe0e0, 0xf0f0, 0xcfe6, 0x0005, 0x0055, 0x0056, 0x0055, 0x5759, 0x5575, 0x5595, 0xba98, 0x4401, 0x10e9, 0x40fa, 0xebaa, 0xba87, 0x9400, 0x95fe, 0xeeb3, 0xa988, 0xa8eb, 0x4000, 0x443a, 0x3ba8, 0xfceb, 0x5402, 0x1991, 0x1998, 0x2656, 0xecee, 0x00be, 0x8a18, 0xfabe, 0x5001, 0x9544, 0xa955, 0x00ce, 0x82aa, 0xfbce, 0x4001, 0x0404, 0x4080, 0x00be, 0x0c0c, 0x9abe, 0x9400, 0xe550, 0xbbbe, 0x89aa, 0x8abe, 0x9400, 0x95fe, 0xab78, 0x4001, 0x103a, 0x550e, 0x789a, 0xe401, 0xf9ff, 0xfeff, 0x8777, 0x02ec, 0xd56e, 0x5f7f, 0x5ff5, 0xbece, 0x00be, 0xe880, 0x8abe, 0x5001, 0x54a5, 0xa4fa, 0xab78, 0x5007, 0x150e, 0x154f, 0x554e, 0x554f, 0x554e, 0x5553, 0x5553, 0x5554, 0xbba8, 0xecec, 0xbba8, 0xeece, 0xbba8, 0xecee, 0xbba8, 0xeeec, 0xeba8, 0xa402, 0xa4ff, 0xa4ff, 0xa4ff, 0xeeee, 0x0014, 0xfefe, 0xe914, 0x5401, 0xf955, 0xf5ff, 0x9b1e, 0x0000, 0x0025, 0xe911, 0x001e, 0x7070, 0xff1e, 0x0001, 0x0815, 0x2015, 0x0045, 0x8080, 0xf145, 0x0001, 0x0090, 0x0090, 0x1145, 0x04fe, 0x8920, 0x8022, 0x4218, 0x0499, 0x1024, 0x87fe, 0x4000, 0x0410, 0x7777, 0xeba8, 0xba87, 0x4000, 0x40f9, 0xebaa, 0xeb87, 0x4000, 0x40e9, 0xeb3a, 0x8877, 0xebba, 0x8877, 0xeeb3, 0x3887, 0xee3b, 0xeeec, 0x00fe, 0x0840, 0xfeef, 0xefee, 0x025e, 0x8080, 0x8080, 0x8080, 0xf5fe, 0x1000, 0x0180, 0x55ee, 0x00fe, 0x0480, 0xfeef, 0xeefe, 0x6cba, 0x9401, 0xa5ea, 0xa4ea, 0xeb6c, 0x4005, 0x703a, 0x430a, 0x70c2, 0x5f3a, 0x5cc2, 0xa000, 0xeabc, 0x0005, 0x0090, 0xcc94, 0x0090, 0xcc94, 0x3394, 0xcc95, 0x8abc, 0xa400, 0xbffe, 0xb78a, 0x5405, 0x9416, 0x9519, 0xa516, 0xa516, 0xa506, 0xa9c6, 0xaa87, 0x0078, 0xe0f0, 0x789a, 0xa400, 0x40ea, 0xcab8, 0x0000, 0x0a95, 0xabec, 0xa401, 0x01fa, 0x54aa, 0xcbec, 0x0087, 0x80e0, 0xba87, 0x0003, 0x0005, 0x0056, 0x056a, 0x16bf, 0x00b6, 0xc0c0, 0x6666, 0xce66, 0x00e6, 0xe0c0, 0xbce6, 0x0001, 0x0094, 0x0064, 0xcee6, 0xaaab, 0x88aa, 0x00ab, 0x80f0, 0xfebc, 0x0000, 0x8855, 0xbccc, 0x00ce, 0xa956, 0xecee, 0xeeec, 0xf9ab, 0x9000, 0x54aa, 0x01a9, 0x7870, 0x1c18, 0xb8a9, 0x5002, 0x5400, 0xd408, 0xffd5, 0xecba, 0x4002, 0x5059, 0x5456, 0xd459, 0x00cb, 0xc782, 0xfbce, 0xa400, 0x9112, 0x00dc, 0x0400, 0x02ec, 0x0084, 0x4924, 0xaa55, 0x00bc, 0x80c0, 0xaebc, 0x0003, 0x2050, 0x0254, 0x20d5, 0x42f5, 0x9abb, 0xbbec, 0x9aaa, 0x04ec, 0x8a20, 0xaa50, 0x0b54, 0x00aa, 0x55aa, 0x9aec, 0x4400, 0xfa44, 0x8ba9, 0x4003, 0x4306, 0x4cc5, 0x7fc5, 0xfff6, 0xb78a, 0x5001, 0x5359, 0x505a, 0x8777, 0xecba, 0xa404, 0x94aa, 0x94aa, 0x94ba, 0x54aa, 0x90ba, 0xccec, 0xbba8, 0xecec, 0xbba8, 0xa8ce, 0x4401, 0x5550, 0x15e5, 0x11a5, 0xccaa, 0x1455, 0xea11, 0xa145, 0x9002, 0xa4ea, 0xa4aa, 0xa4aa, 0x1111, 0x01ec, 0x802a, 0xaa55, 0x9bce, 0x1001, 0x4211, 0x0340, 0xb1ec, 0x5400, 0x555e, 0xbfc5, 0x0000, 0x0040, 0x05ec, 0xa802, 0xaa55, 0xb5db, 0xaa9f, 0x655a, 0xfdab, 0xfebc, 0x0003, 0x2255, 0x0015, 0x8815, 0x8885, 0xcebc, 0x01ce, 0x124a, 0xfd49, 0xeccb, 0x02ec, 0x401a, 0xa555, 0x6dd6, 0xbace, 0x1000, 0xdffa, 0xba98, 0xccbb, 0xa887, 0xcbbb, 0x8877, 0xcbaa, 0xab87, 0x4000, 0x40a9, 0xcba8, 0xba87, 0x0000, 0x00f9, 0xbba8, 0x07ec, 0x0840, 0x9025, 0x55aa, 0xd5bd, 0x0842, 0x5522, 0xb7a9, 0xffaa, 0xe5dc, 0x5008, 0x53a9, 0x50a9, 0x73a9, 0x4ca5, 0x33a5, 0xcca7, 0xffad, 0x009f, 0xc000, 0xcced, 0x05ec, 0x2592, 0x6d55, 0xb7da, 0x8a00, 0xd520, 0xfaa6, 0xf6fe, 0x0001, 0xaa94, 0xaa95, 0x6ffe, 0x01f6, 0x3030, 0x3030, 0xfff6, 0x0000, 0x0001, 0x08ef, 0x0952, 0x4924, 0x2400, 0x9220, 0x1244, 0x2480, 0x0550, 0x0920, 0x0055, 0xfeff, 0xffef, 0x006f, 0x7070, 0xefff, 0x02f6, 0xf8f8, 0xf8f8, 0xf0f0, 0x09ef, 0x500a, 0x4802, 0x5550, 0x2a49, 0x2481, 0x2401, 0xa551, 0x8422, 0x4412, 0x1401, 0xb3fe, 0x5400, 0xfc88, 0x02ef, 0xfdaa, 0xaa00, 0x1200, 0x3bef, 0x0000, 0x7610, 0x12fe, 0x2a9a, 0x5ff5, 0x6ff5, 0xaffb, 0xf556, 0xf55f, 0xfb6f, 0xd5ab, 0xd57f, 0x6dff, 0x6aaf, 0xfaab, 0xfaaf, 0xf6df, 0x5aaf, 0x5fe5, 0xbff5, 0xb7fd, 0xf6df, 0x9145, 0x0006, 0x0090, 0x00a4, 0x40a9, 0x90aa, 0xa4aa, 0xa9aa, 0xeaaa, 0xff91, 0x0005, 0x0090, 0x00a4, 0x00a8, 0x40a9, 0x80aa, 0x90aa, 0x0aef, 0x4800, 0x0402, 0x0154, 0x0248, 0x8029, 0x904a, 0x0520, 0x0490, 0x0015, 0x2049, 0x0001, 0x2eff, 0x512f, 0x0000, 0xaae9, 0xf541, 0x9002, 0xa400, 0xa400, 0x9000, 0x005f, 0xfefc, 0x4455, 0x02ef, 0x00aa, 0x2092, 0x4a01, 0x001f, 0xf0e0, 0x6e1f, 0x4007, 0xaa55, 0xa8fe, 0x8afe, 0x22ff, 0x28ff, 0x22ff, 0x08ff, 0xc0ff, 0x6666, 0x0087, 0xfe80, 0xba98, 0x0000, 0xaaa5, 0xfeba, 0x0000, 0xa894, 0x00fe, 0x5480, 0xfefe, 0xfefe, 0xa988, 0xa9eb, 0x5000, 0x543e, 0xfeba, 0x9400, 0xa8ea, 0x01fe, 0xa482, 0xa55a, 0xeffe, 0x8a33, 0x8ab7, 0x0000, 0x00e9, 0x8a3b, 0x7777, 0xaa3e, 0xab38, 0x0000, 0xff59, 0x3eee, 0xbbbb, 0x00ef, 0xf65a, 0x0087, 0xf080, 0xa987, 0x5000, 0xe5f9, 0xeb3a, 0x9400, 0xfe54, 0xe3bb, 0x00fe, 0x8aa8, 0xb6fe, 0x4409, 0x002a, 0x102a, 0x402a, 0x102a, 0x446a, 0x116a, 0x156a, 0x456a, 0xc001, 0x0104, 0xefee, 0x3eee, 0x00ef, 0xd5ea, 0xbaef, 0x4401, 0x4401, 0xfd7a, 0xeb3a, 0xa401, 0xfabf, 0xfdab, 0xffbe, 0x4000, 0x5020, 0x00fe, 0x0a10, 0xabef, 0x4400, 0xaa44, 0x7b8a, 0x5402, 0xfd2a, 0xfd2a, 0x542a, 0x00ab, 0x00f0, 0x00fe, 0x2200, 0x98ab, 0x4000, 0xd5a5, 0x7888, 0x8889, 0x0087, 0x1010, 0x9a87, 0x0001, 0x0005, 0x557e, 0x3333, 0xaaaa, 0x0087, 0xc080, 0x3a87, 0x0001, 0x0094, 0x40e5, 0xbba8, 0x8887, 0xe3ba, 0xaa98, 0xefb3, 0xb33a, 0x02fe, 0x04a0, 0xa251, 0xd55a, 0xfefe, 0xaaab, 0x7778, 0xaabe, 0xba78, 0x5400, 0x02ae, 0x9abe, 0x9401, 0x60be, 0x00aa, 0xbeab, 0x00ef, 0x5576, 0x0087, 0x8080, 0xfa87, 0x0000, 0x5550, 0xa888, 0x00ba, 0xff80, 0x8fbe, 0x4000, 0x8200, 0xefee, 0xeba8, 0xa401, 0xe5ff, 0xe9ff, 0xfbfe, 0x4000, 0x040a, 0xfebb, 0x00fe, 0x4a04, 0x91ef, 0x4407, 0x4444, 0xeaaa, 0x3aaa, 0x1eaa, 0x03ce, 0x4443, 0x145a, 0x111e, 0xfef9, 0x01fe, 0xa55a, 0x55ff, 0xf145, 0x0005, 0x0040, 0x00a4, 0x00a9, 0x40a9, 0x90aa, 0xa4aa, 0x0041, 0x0010, 0x1111, 0x0efe, 0x5a54, 0xadd5, 0x57fa, 0xa55d, 0xd6aa, 0xf7aa, 0xff5a, 0x892b, 0x5554, 0xd6a9, 0xdaba, 0xa90f, 0xa554, 0xa55a, 0xbd66, 0xefff, 0xba88, 0xeeeb, 0x33a9, 0xb3fe, 0x4000, 0x047e, 0xeee3, 0x07fe, 0xd6a4, 0x8525, 0xaa58, 0xb555, 0x245f, 0x5592, 0xadaa, 0xd6ab, 0xf5ef, 0x1005, 0x4540, 0x51a4, 0x44a9, 0x11a8, 0x01aa, 0x81aa, 0x00f5, 0x3070, 0x5555, 0x06fe, 0x9224, 0x5455, 0x55ab, 0xffaa, 0x5284, 0xb5aa, 0xbd66, 0xa9ef, 0x4000, 0xeaaa, 0x0269, 0xfefe, 0xfefe, 0xfefe, 0x006a, 0xfefe, 0x01a9, 0x8000, 0xf0c0, 0xdba9, 0x4002, 0x5095, 0x54a5, 0x55a9, 0xdbbb, 0x009a, 0x8040, 0x69ab, 0x0005, 0x0095, 0x0095, 0x00a5, 0x40a5, 0x40a5, 0xffa5, 0xbe6d, 0x0002, 0x0095, 0x0095, 0x00d5, 0xdcb6, 0x4001, 0x50fe, 0x50f7, 0xdddb, 0xba66, 0x9acb, 0x4007, 0xffea, 0xffa8, 0xffea, 0xffa8, 0xffe8, 0xffa8, 0xffe8, 0xffa8, 0xb78a, 0x5001, 0x43aa, 0x4369, 0xabd8, 0x0000, 0x00f9, 0xabbd, 0x9889, 0x9abd, 0x8401, 0x54fe, 0x40a9, 0xa98b, 0x0004, 0xffa9, 0xcfe5, 0x03f9, 0x00fa, 0x003e, 0xfdba, 0x4000, 0x5465, 0x00bd, 0x097e, 0x02cd, 0x080a, 0x080c, 0x0408, 0xb5cd, 0x0004, 0x4000, 0x5fea, 0xffaa, 0x5faa, 0xdfaa, 0xcbe5, 0x0002, 0x00e9, 0x00b8, 0x00f4, 0xbc55, 0x03dc, 0xf8fe, 0xfcfe, 0xfcfa, 0xfcfa, 0x00cb, 0x0382, 0xfdbc, 0x4400, 0x4655, 0x00cb, 0x70b0, 0xdceb, 0x0408, 0x008a, 0x00ab, 0xfee8, 0xff88, 0xfea8, 0xee88, 0xfea1, 0xea00, 0xfaa0, 0xbbbe, 0x06bc, 0xafe0, 0xefff, 0xf7ff, 0xf5fb, 0xfdf8, 0xfdf7, 0xfbfa, 0xfdbc, 0x5007, 0xaa55, 0x2a62, 0xaa0a, 0xaa10, 0x0a40, 0x2a50, 0x0044, 0x0a51, 0xbbcb, 0x035d, 0xfefe, 0xfcfc, 0xf8f8, 0xf0f0, 0xdacb, 0x0006, 0x0250, 0x0044, 0x4071, 0x1054, 0x10dd, 0x54f5, 0x51f7, 0x00dc, 0xcfea, 0xdddd, 0x00a9, 0xe1c0, 0xd69a, 0x4000, 0xfaaa, 0x6666, 0xdcd6, 0x02d6, 0xe0e0, 0xf0e0, 0xf0f0, 0x0098, 0xfafc, 0x019a, 0xfffe, 0xf8fc, 0xf78a, 0xa406, 0x946a, 0x906a, 0x90aa, 0x94aa, 0x94aa, 0x94aa, 0x90aa, 0x7777, 0x0298, 0xbe5a, 0xfcfd, 0xfcfe, 0xda98, 0x5400, 0x50a9, 0xbcda, 0x0008, 0xffa5, 0xfa65, 0xee95, 0xe995, 0xba55, 0xd955, 0xe955, 0xa555, 0xbfff, 0xecb5, 0x5405, 0x5465, 0x5c95, 0x5095, 0x50a5, 0x7055, 0x40a5, 0xbbbb, 0x00dc, 0xf8fe, 0xfbdc, 0x5400, 0x5255, 0x01cd, 0x7010, 0x3010, 0xdddd, 0x03cb, 0xa0e0, 0x41a0, 0x41a0, 0x8581, 0x02cd, 0x0300, 0x0300, 0x0b03, 0xfdcb, 0xa406, 0x54aa, 0x6aaa, 0x5a01, 0x5604, 0x2a00, 0x4501, 0x1600, 0x00cb, 0xb030, 0x02ab, 0xefc0, 0x61f7, 0x8090, 0x00cd, 0x00c0, 0xf3ba, 0x0403, 0x0528, 0x050a, 0x8102, 0x8142, 0x00ba, 0x0e04, 0x5acb, 0x4004, 0x0020, 0xff0a, 0xff22, 0xfc48, 0xfd42, 0x5dcb, 0x1002, 0x51f9, 0x64ea, 0x95aa, 0xdddd, 0xcba9, 0x5402, 0x94fe, 0x94fa, 0xa5fe, 0xbadc, 0x1002, 0x10fa, 0x00fa, 0x003e, 0xcbba, 0xbd6c, 0x4004, 0xf88a, 0xe0a8, 0xc222, 0xf8a2, 0xc002, 0xdcdc, 0x00bc, 0x0c0c, 0x9abc, 0x9001, 0xffe9, 0xffea, 0x89ab, 0x9405, 0xa5ae, 0xe5ab, 0xb5ae, 0xf5bf, 0xfd6f, 0x567f, 0xa9db, 0x4000, 0x03ea, 0xba98, 0x5400, 0x11f9, 0xaaa9, 0x00a8, 0x0080, 0x0078, 0xa8a8, 0xabcd, 0x1003, 0x5641, 0x5a14, 0x6a51, 0xaf46, 0xcbcb, 0xaa98, 0xcbbb, 0x9888, 0x87ba, 0x5000, 0x0fea, 0x0196, 0x8080, 0x8080, 0xfb36, 0x0000, 0x0040, 0xbb66, 0x0189, 0xa840, 0xd0a0, 0xba89, 0x4001, 0xaa44, 0xaf44, 0xbc9a, 0x5405, 0x500e, 0x553f, 0x540f, 0x543e, 0x540f, 0x550f, 0xaabb, 0x029a, 0xfffe, 0xf5fb, 0x5070, 0xf9ba, 0x4401, 0x110a, 0x5402, 0x06cd, 0x8410, 0x2a52, 0xd555, 0xdfbb, 0x48a2, 0x55e2, 0xead5, 0xfbdc, 0x0400, 0x0180, 0xcccc, 0x00ba, 0xff40, 0x00bc, 0x00be, 0x01dc, 0x0092, 0x0055, 0xfdcb, 0x4000, 0x5065, 0x02dc, 0x850a, 0x2544, 0x0499, 0xcccc, 0x03a9, 0xc0c0, 0xe3e0, 0xc3c3, 0x83c3, 0x00ba, 0xfe7e, 0xdacb, 0x4004, 0x5214, 0xc055, 0x50dd, 0x5055, 0x4075, 0x02dc, 0xa6a0, 0xa95a, 0x0204, 0xcecc, 0x01cd, 0xa5aa, 0x57fd, 0x5ecd, 0x5408, 0x9555, 0x110b, 0x115f, 0x452f, 0x117f, 0x54bf, 0x56ff, 0x47ff, 0x6fff, 0x00cd, 0xfefa, 0xfecd, 0x4400, 0x6655, 0x00bc, 0x7c3e, 0xfebc, 0x5001, 0x4045, 0x0819, 0xcbbb, 0x00ec, 0xa800, 0xbdec, 0x0404, 0x0800, 0x0030, 0x88c2, 0x00cc, 0x22f2, 0x01cb, 0x71f2, 0x00f1, 0xfdbc, 0x0002, 0x8015, 0x0015, 0x8045, 0x01cb, 0xfafc, 0xfffe, 0x00cd, 0x5550, 0xfbcd, 0x4400, 0x5164, 0xbdcd, 0x02bc, 0x41e0, 0x67e1, 0x0f5f, 0xfdcb, 0x4001, 0x5098, 0x1055, 0xcdcd, 0x00cb, 0xfdfe, 0xcccb, 0x02dc, 0xadb0, 0x4aae, 0x0caa, 0x025d, 0xfefe, 0xfcfc, 0xf8f8, 0xf5dc, 0x5400, 0x54aa, 0x5555, 0x04dc, 0xaab4, 0x9254, 0x5044, 0x5aa5, 0x412d, 0xdcdc, 0xcccc, 0x01a9, 0xc0c0, 0xf0e0, 0xcba9, 0x4002, 0x40a5, 0x50a5, 0x50a9, 0xcbbb, 0x006a, 0xfefe, 0xdb6a, 0x5403, 0x5655, 0xa055, 0xa0ba, 0xeaee, 0xabcd, 0x8404, 0x818a, 0x2412, 0x8111, 0x9444, 0x8404, 0x9abd, 0x9406, 0xa5fe, 0xa5fe, 0xa5ff, 0xa9ff, 0xa9ff, 0xe9ff, 0xe9ff, 0x9999, 0x00cd, 0x0200, 0xacbd, 0x0004, 0x2100, 0x8508, 0x1500, 0x5722, 0x7f80, 0xcdbb, 0x01cd, 0x4010, 0x5401, 0xddcd, 0xaa66, 0xddbb, 0xba96, 0xa402, 0x94fe, 0x54fe, 0x54ea, 0xbaaa, 0x00a9, 0xc0e0, 0xdab9, 0x0007, 0x2900, 0xa900, 0xa500, 0xa900, 0xa502, 0xa500, 0xa500, 0x9502, 0xbcd9, 0x0001, 0xfdd9, 0x7655, 0x01cd, 0x4088, 0x8420, 0xfcdb, 0x4403, 0x6a09, 0x5556, 0x5905, 0x5559, 0xbcdd, 0x00cd, 0xc010, 0xcddd, 0xdcdd, 0x02a9, 0xffe0, 0xc080, 0xf8e0, 0xaa99, 0x00ba, 0x8e0e, 0xcadb, 0x1000, 0xf008, 0x01a9, 0x8080, 0xf060, 0xcf9a, 0x5400, 0x0000, 0x05cd, 0x0420, 0x2880, 0x0482, 0x0820, 0x2002, 0xa209, 0xe5cd, 0x1004, 0x4101, 0x5aaa, 0x7aaa, 0x6aaa, 0xeaaa, 0x5555, 0x02dc, 0xf8fa, 0xf8ec, 0xe8b4, 0x5dce, 0x5400, 0x979a, 0xebdc, 0x140c, 0xa884, 0xb801, 0xa801, 0x8814, 0xa001, 0x8011, 0x8004, 0x0011, 0x022a, 0x08ba, 0x02aa, 0x08ab, 0x08aa, 0xbbbe, 0x04cb, 0x1c0e, 0x870c, 0xaf4a, 0x6bd6, 0xfbf7, 0xcccd, 0x03bc, 0x7a7a, 0xbc79, 0x5e3d, 0x2f1e, 0x02cd, 0x0040, 0x8020, 0x08a1, 0xfbdc, 0x5400, 0x1111, 0xbcdd, 0x00bc, 0xf4e8, 0xfdbc, 0x4000, 0x4655, 0x01cb, 0x2030, 0x1418, 0x5dcb, 0x5000, 0xfeaa, 0xdcdd, 0x005d, 0x0c0e, 0xfc5d, 0x5001, 0x4000, 0x4002, 0x00cd, 0x0914, 0xfdcb, 0x9400, 0x54a9, 0x04cd, 0x7170, 0x50b2, 0x58b2, 0x1202, 0x4000, 0xf0dc, 0x4400, 0x5554, 0x0000
};

// [D_08C27784] D_08C279E0 Huffman Window 1
u32 D_08c279e0_window1[] = {
	0xf63f93df, 0xb6df5bbf, 0xc0cf97fa, 0xbdbfe5dd, 0xffe667cb, 0xff7bcdfe, 0x79fff766, 0xedf5afb6, 0x8deee7de, 0xf6e7f2cc, 0xb6fb3f31, 0x38681deb, 0xb9fa9746, 0x29bdd00e, 0x9def9640, 0x178ffcb1, 0x6a06bf42, 0xf777fd3b, 0xff379138, 0xb7610333, 0x7bf742ed, 0x9bb7dfce, 0xeb7feef7, 0xefbddc3b, 0x65d6fefd, 0x7e97d16f, 0x001fbdd7
};

// [D_08C277F0] D_08C279E0 Huffman Window 2
u32 D_08c279e0_window2[] = {
	0x55a748da, 0xa8ea2b94, 0x4d564907, 0x01552a91, 0x20485722, 0xa35edf51, 0x5d525cb7, 0xdd5e8ca5, 0xcf57ce55, 0xa5df4ead, 0x5cbbf45a, 0x9b68da85, 0x574d5375, 0xa99ff44a, 0xdf445d12, 0xaa4456b3, 0x45aba452, 0x000aaa35
};

// [D_08C27838] D_08C279E0 Huffman
struct Huffman D_08c279e0_huffman[] = {
	/* Data */			D_08c279e0_huffmandata,
	/* Size */			0x1207,
	/* Count */			0x356,
	/* Window 1 */		D_08c279e0_window1,
	/* Window 2 */		D_08c279e0_window2,
};

// [D_08C27848] D_08C279E0 RLE Data
u8 D_08c279e0_rledata[] = {
	0x1, 0xf, 0xc, 0x4, 0x4, 0xc, 0x4, 0x17, 0x6, 0xf, 0x11, 0x19, 0x7, 0x4, 0x5, 0x6, 0x1, 0xa, 0x8, 0xd, 0x1, 0xe, 0xa, 0x7, 0x6, 0xa, 0x1, 0xa, 0xa, 0x3, 0x2, 0x6, 0x1, 0x10, 0x10, 0x8, 0xb, 0xc, 0x1, 0x6, 0x2, 0x7, 0x1, 0x5, 0x1, 0x9, 0x1, 0xc, 0x4, 0xa, 0x1, 0x4, 0x1, 0x3, 0x12, 0xa, 0x1, 0x3, 0x1, 0xb, 0x1, 0x7, 0x5, 0x3, 0x1, 0xa, 0x2, 0x3, 0x1, 0x5, 0x3, 0x7, 0x3, 0x12, 0x1c, 0xf, 0x7, 0x9, 0x1, 0x4, 0x2, 0x9, 0x6, 0xa, 0x2, 0xe, 0x3, 0x3, 0x1, 0x9, 0x3, 0x3, 0x1, 0x9, 0x5, 0xb, 0x1, 0x7, 0x9, 0xb, 0x9, 0x6, 0x6, 0x7, 0x2, 0x4, 0x1, 0xe, 0x4, 0x8, 0x3, 0x4, 0xc, 0x4, 0x3, 0xb, 0x7, 0xa, 0x13, 0xe, 0x1, 0x5, 0x2, 0x8, 0x6, 0xa, 0x21, 0x4, 0x3c, 0x9, 0x7, 0xc, 0x2, 0xb, 0x28, 0x1a, 0x29, 0x3, 0x21, 0x3, 0x5, 0x6, 0x4, 0x5, 0x4, 0x3, 0xa, 0xd, 0x22, 0x3, 0x3a, 0x3, 0x6, 0xa, 0xd, 0x3, 0x1, 0xb, 0x45, 0xf, 0x1, 0xf, 0x10, 0x7, 0x3d, 0xc, 0x2, 0xf, 0x2, 0xd, 0x5, 0xb, 0xd, 0x3, 0x1, 0x5, 0x3b, 0xd, 0x2, 0x3, 0x1e, 0x10, 0xc, 0x3, 0x11, 0x5, 0x15, 0x5, 0x2b, 0x5, 0x1a, 0x6, 0x1d, 0x3, 0x21, 0x8, 0x8, 0x4, 0x1c, 0x9, 0x47, 0x5, 0x21, 0x9, 0x23, 0xd, 0x11, 0x5, 0xb, 0xb, 0x5, 0xd, 0x43, 0xa, 0x1, 0x4, 0x1, 0x6, 0x3, 0x6, 0x1, 0xe, 0x4, 0xd, 0x2, 0x7, 0x8, 0x4, 0xc, 0x3, 0x1, 0xb, 0x4, 0x8, 0x5, 0x4, 0x8, 0x3, 0x21, 0x8, 0x1f, 0x8, 0x24, 0xc, 0x1d, 0x3, 0x5, 0xb, 0x31, 0x9, 0x4b, 0xb, 0x48, 0x8, 0x62, 0x8, 0x19, 0xd, 0x1, 0x3, 0x6f, 0xb, 0x49, 0x9, 0x36, 0xa, 0x11, 0x6, 0xa, 0xa, 0x6, 0x7, 0x9, 0xd, 0x3, 0xb, 0x16, 0xa, 0x3, 0xf, 0x13, 0xd, 0x3, 0xd, 0x47, 0x3, 0x69, 0x5, 0xb, 0x5, 0x4d, 0xd, 0xd, 0x3, 0xb, 0x5, 0x77, 0x3, 0x23, 0x3, 0xc, 0x6, 0x7, 0x9, 0x7, 0x7, 0x19, 0x7, 0x4d, 0x3, 0xd, 0x3, 0x1d, 0x5, 0x3, 0xd, 0x3, 0xb, 0xe, 0x3, 0x14, 0xb, 0x2, 0xe, 0x8, 0x8, 0x7, 0x9, 0x9, 0x7, 0x7, 0x9, 0x14, 0xb, 0x8, 0x9, 0x6, 0x5, 0x70, 0x3, 0x42, 0x4, 0x3d, 0x6, 0x12, 0x3, 0x5, 0xe, 0x14, 0x3, 0x43, 0x4, 0x8, 0x3, 0x3c, 0x3, 0xa, 0xe, 0xd2, 0x3, 0x40, 0xc, 0x1, 0xb, 0x18, 0x4, 0x92, 0x5, 0x2, 0xc, 0x74, 0x4, 0xc, 0x4, 0x96, 0x4, 0xb, 0x5, 0x17, 0x9, 0x5c, 0x5, 0x1b, 0x5, 0xb, 0x5, 0x18, 0x8, 0x31, 0x7, 0x31, 0x4, 0x14, 0xc, 0x14, 0xc, 0x4, 0x9, 0x7, 0x5, 0x23, 0x7, 0x91, 0x6, 0xa, 0x0, 0x90, 0x0
};

// [D_08C279E0] D_08C279E0 Graphics
struct CompressedGraphics D_08c279e0 = {
	/* Huffman Data */		D_08c279e0_huffman,
	/* RLE Data */			D_08c279e0_rledata,
	/* RLE Size */			0x196,
	/* RLE Offset */		0x1a00,
	/* Double Compressed */	TRUE,
};

u8 D_08c279f0[8] = {
	0x73, 0x00, 0x3C, 0x00, 0x78, 0x00, 0x50, 0x00
};

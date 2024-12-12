#include "global.h"
#include "graphics.h"

// // //  D_08C0212C  // // //

// [D_08C00020] D_08C0212C Huffman Data
u16 D_08c0212c_huffmandata[] = {
	0x0189, 0x0200, 0xe01f, 0x01a9, 0x4000, 0x8010, 0x1eff, 0x1365, 0x1eff, 0x1365, 0x1eee, 0x1396, 0x1111, 0x34a5, 0x9b84, 0x5000, 0x5b7a, 0x9c8b, 0x4000, 0xc04a, 0x8aee, 0x9bbb, 0x41fe, 0x5401, 0x54e5, 0xaae0, 0x4111, 0x4333, 0x9765, 0xccbb, 0x98bd, 0xeeec, 0xb9de, 0xe401, 0xe401, 0xe401, 0x8aac, 0x7888, 0xcbcc, 0x7769, 0x9abc, 0x0000, 0x1084, 0x9bcc, 0x01bc, 0x00e0, 0x01a4, 0x1777, 0xfff4, 0x1778, 0xfff4, 0x197a, 0xfff4, 0x1767, 0x8b14, 0x4000, 0x157a, 0x89cb, 0x9000, 0xc02a, 0xaa98, 0x8bbc, 0x17ea, 0x5400, 0xfffe, 0x667b, 0x9876, 0xcc9b, 0xdccc, 0xec8b, 0xc9be, 0x0003, 0x0039, 0x0039, 0x0039, 0x0039, 0xb941, 0x4000, 0xfe55, 0xedcb, 0x5400, 0xfeaa, 0x516e, 0x0000, 0x0025, 0x1365, 0x6781, 0x0000, 0xb979, 0xa9bc, 0x5000, 0xe555, 0xdddd, 0xec9b, 0x9001, 0x90ff, 0x90ff, 0xeeee, 0x841e, 0x7888, 0x9431, 0xd8b9, 0x5405, 0x5550, 0x5558, 0x5553, 0x5553, 0x5553, 0x5553, 0x0acd, 0xc020, 0x3040, 0x3040, 0x2110, 0x65d5, 0x5ac4, 0xdaa7, 0xafdf, 0xffdf, 0x5edf, 0xfee7, 0xcbcb, 0x03cd, 0xd048, 0x60c0, 0x50e0, 0x5044, 0xfa89, 0x0401, 0x150a, 0x050a, 0x9a99, 0x0189, 0x8a04, 0xee15, 0x9999, 0x8999, 0x0078, 0x805a, 0xc978, 0x0000, 0x0011, 0xdc89, 0x1400, 0x54e0, 0xed98, 0xac98, 0x0400, 0x00a4, 0xda98, 0xdc98, 0x4400, 0x11e5, 0xdca9, 0xdc89, 0x0400, 0x41e0, 0xda99, 0x9ace, 0x9999, 0x9acd, 0xac89, 0x4000, 0x100e, 0x9aae, 0x9999, 0x9acd, 0xad89, 0x4000, 0x00fa, 0xd9ac, 0x5000, 0x5faa, 0x9999, 0x00cd, 0x1c20, 0xdddd, 0xdddd, 0x0178, 0x405a, 0xaaa0, 0x8888, 0xec9b, 0x9400, 0xd0ff, 0xeeee, 0xeabb, 0x00be, 0x7070, 0xeeee, 0xdbbb, 0x00bc, 0xf870, 0xdecb, 0x0400, 0xffaa, 0xcccc, 0xabcc, 0x00cb, 0x080c, 0xabab, 0x9984, 0x9acb, 0x0000, 0x03e5, 0xaddd, 0xbbb9, 0xdeee, 0xbb9a, 0xbade, 0x4000, 0x00f9, 0xbacd, 0xbcde, 0x0001, 0x00a4, 0xff90, 0xdeee, 0x9aac, 0xcade, 0x0001, 0x00a9, 0x1ea5, 0xcded, 0xdcab, 0xc9de, 0x5400, 0x55fa, 0xcabb, 0xdddd, 0xcba9, 0xdddc, 0xcea9, 0xa400, 0xad7a, 0x9ace, 0xeedc, 0x99ac, 0xcded, 0x989a, 0xcedd, 0x999a, 0xaddd, 0x899b, 0x9acd, 0x5000, 0x80fe, 0x999a, 0x9bde, 0xae9b, 0x4400, 0x13ea, 0xdeee, 0xb9ac, 0x9ade, 0x0000, 0x01f9, 0xe9cd, 0xa401, 0xa4f1, 0xa4f1, 0xedda, 0x99cd, 0x999b, 0xeec8, 0xecb9, 0x0400, 0x00f8, 0xccb9, 0x01b9, 0x41d2, 0x4001, 0x1fb9, 0x0000, 0xea40, 0x13d6, 0x1fff, 0x13d6, 0x1fff, 0x13d6, 0x1fff, 0x13d6, 0x1fff, 0x13d6, 0x1fff, 0x13a5, 0x1eff, 0x1366, 0x1eff, 0x1376, 0xe13f, 0x0006, 0x0090, 0x0090, 0x0360, 0x0360, 0x0360, 0x0360, 0x0360, 0x41ff, 0x01cd, 0xb6ea, 0xd7ea, 0xacbd, 0x5401, 0x5855, 0x7dff, 0x1c8a, 0x5400, 0x5554, 0xf31c, 0x4000, 0x40fe, 0x1cf4, 0x5401, 0x54ea, 0x54ea, 0x1bbb, 0x1af4, 0x5400, 0x54ea, 0x1888, 0xfff4, 0x1778, 0xfff4, 0x413c, 0xa400, 0xd8aa, 0xf1c4, 0x0001, 0xffc9, 0xffc9, 0xf416, 0xe400, 0xe4ff, 0x316f, 0x0001, 0x0039, 0xfff9, 0xef41, 0x0001, 0x5540, 0xaa95, 0xc13e, 0x0000, 0xaa95, 0xfe1c, 0x9001, 0x90ff, 0x90ff, 0xffff, 0xe18c, 0xffff, 0xe18c, 0xffff, 0xe1a9, 0xe16f, 0x0001, 0x00e5, 0x00e5, 0xc41f, 0xe400, 0xe4ff, 0xcccc, 0xb41f, 0xbbbb, 0x541f, 0xbbb6, 0x641f, 0x6666, 0xb41f, 0x6568, 0xb41f, 0x7899, 0x841f, 0x6778, 0x10cd, 0x0010, 0x2020, 0x8080, 0x0601, 0x0208, 0xad08, 0x2112, 0x7121, 0x40aa, 0x8080, 0x8a51, 0x0fef, 0x0008, 0xaa08, 0x1425, 0x12b5, 0xb010, 0x87cd, 0x0400, 0xaa44, 0xa987, 0x0000, 0xffa5, 0xafed, 0x0000, 0x5500, 0x009c, 0x8080, 0x87a9, 0x0007, 0xfa15, 0xf8ff, 0xe8ff, 0xbcae, 0xefbb, 0x0aee, 0x0fec, 0x0fe8, 0x7789, 0x64ff, 0x7834, 0x5401, 0xff80, 0xbabe, 0x9a8d, 0x5400, 0x5495, 0xd988, 0xca8e, 0x5400, 0x5725, 0xea88, 0x8899, 0xec88, 0x5333, 0x8765, 0x9400, 0xbfff, 0xa999, 0xdaaa, 0x00ed, 0xff80, 0x00ce, 0xfcf0, 0xacce, 0x9999, 0x0278, 0xaff0, 0x9bff, 0xdffe, 0x7877, 0xf139, 0x13bf, 0x0000, 0x0039, 0xf136, 0xe400, 0xe4ff, 0xffff, 0xf135, 0xefff, 0x1136, 0x1111, 0xa879, 0x2400, 0x2030, 0xcaaa, 0x31ef, 0x0001, 0xaba9, 0xfefe, 0xa973, 0x5400, 0xfaaa, 0xdccc, 0x00fd, 0xfff0, 0xe41f, 0x4000, 0x9000, 0xffff, 0xb41e, 0xefff, 0x8841, 0x1eff, 0x8884, 0x411e, 0x8768, 0x5441, 0xbbb9, 0xbc41, 0xbbbb, 0x5664, 0xa966, 0x5667, 0x6666, 0x8989, 0x8567, 0x6401, 0xa4ff, 0x4fff, 0x00b9, 0xff7e, 0x3eff, 0x6663, 0x14ee, 0x5656, 0x6311, 0x8887, 0x8765, 0xda98, 0x0400, 0x5119, 0x9cdd, 0x8999, 0x9ade, 0x9000, 0x40ff, 0x99aa, 0x6566, 0xfe34, 0x8946, 0x0000, 0xfe54, 0xda87, 0x4000, 0xf955, 0xed98, 0x0400, 0x55f9, 0xf9ea, 0x5401, 0x552a, 0x554a, 0x1eff, 0x6683, 0x31ef, 0x6888, 0x731e, 0x8877, 0x6631, 0x8887, 0x9773, 0xa8b9, 0x4401, 0x1112, 0x444b, 0x99ad, 0x9bbb, 0xf436, 0x4000, 0x40fe, 0xeef4, 0x3666, 0x3114, 0x8778, 0x8956, 0x4000, 0xafaa, 0xdc89, 0x0000, 0x00f9, 0xeec8, 0x99b9, 0xeec8, 0xabab, 0xabbb, 0x02bc, 0x367e, 0x5afc, 0xfefd, 0xdcab, 0x1009, 0xfe40, 0xfe0f, 0xfe2b, 0xfe0b, 0xfe2f, 0xfa2b, 0xbaab, 0xea2b, 0x002b, 0x0060, 0xcbba, 0x01cb, 0x4040, 0x8040, 0xac9b, 0x1000, 0x4081, 0xbbab, 0x00cb, 0x3850, 0xca9b, 0x8401, 0x002c, 0x258b, 0xbbcc, 0x029b, 0x0040, 0x5421, 0xfabb, 0xb99b, 0x00cb, 0xb2f8, 0xfcba, 0x9400, 0x55aa, 0xbccb, 0x00ab, 0x5a14, 0x9cba, 0x9402, 0x11c1, 0x5511, 0x5575, 0x9b9a, 0x009b, 0xfac0, 0xff9b, 0x4400, 0x5155, 0x04cd, 0xe940, 0x00b4, 0x0020, 0xd4a0, 0xfef5, 0x05bc, 0xb244, 0xbfed, 0xadfa, 0x49f7, 0xdafa, 0xfeef, 0xbbbb, 0xbbbb, 0x00cd, 0xf4c0, 0xcdcd, 0xbccd, 0x00cd, 0xfffc, 0x02bc, 0x9004, 0x0040, 0x0001, 0xfcba, 0xa403, 0x4199, 0x1959, 0x5655, 0x5994, 0xbbba, 0x0789, 0x8080, 0xfcff, 0xfdeb, 0xfff5, 0x525a, 0x502f, 0x0010, 0xb048, 0x8989, 0x9899, 0x00b9, 0x0040, 0x0589, 0x0080, 0xa944, 0xfd56, 0xd56a, 0xefba, 0xbfff, 0x0087, 0xfdfe, 0xcab9, 0x5005, 0x9459, 0x5119, 0x5127, 0x545f, 0xa00f, 0x5019, 0x99ba, 0x00b9, 0x4b7e, 0xb999, 0xb9b9, 0x0189, 0x1402, 0x00d0, 0x00b9, 0x2448, 0xedcb, 0x4001, 0x40aa, 0x40ae, 0x9bdc, 0x1401, 0x14ae, 0x50ab, 0xca9b, 0x8404, 0x04ff, 0x95fc, 0x03aa, 0x4010, 0x1300, 0x059b, 0x454a, 0xcfea, 0xaa55, 0x8254, 0x5528, 0xffdd, 0xfb98, 0x4400, 0x4556, 0x00b9, 0x0200, 0xff9b, 0x5400, 0x5455, 0x0089, 0x0882, 0x9989, 0x9dcb, 0x5001, 0x53f6, 0x10c1, 0x999a, 0xba99, 0x019b, 0x7e1c, 0x2fba, 0xfcb9, 0x0000, 0x9000, 0x02b9, 0x4080, 0x60c0, 0xd1a0, 0x8ce9, 0x0000, 0xe500, 0x9bbb, 0x8cee, 0x9bbb, 0x9ade, 0x9bbb, 0x8aee, 0xcd9b, 0x4003, 0x407a, 0x400a, 0x400e, 0x400e, 0xb9ed, 0x5404, 0x54e1, 0x54e1, 0x54e1, 0x54e1, 0x54f1, 0xabcd, 0xa400, 0xb002, 0xdedc, 0xaacd, 0x03bc, 0x0040, 0x0441, 0x2a90, 0xe885, 0x8bcb, 0xeeea, 0xe9bc, 0x9403, 0x91fc, 0x94fc, 0x94fc, 0x51fc, 0xbedc, 0x6401, 0x94fc, 0x54ff, 0xde9b, 0x8400, 0xc4aa, 0x00bc, 0xf030, 0xcdde, 0xdccc, 0x00bc, 0xfe40, 0xc9bb, 0xd9be, 0x0000, 0x00e5, 0xc9bb, 0xcdbe, 0x0004, 0x0295, 0x02d5, 0xa2b5, 0xffd5, 0xcf55, 0xcb9d, 0xa403, 0xa4aa, 0xa4aa, 0xa7aa, 0xabaa, 0x009b, 0x2020, 0x00db, 0xf000, 0x07cd, 0x0302, 0x000c, 0x0408, 0x080c, 0x02d8, 0xf06e, 0xff5f, 0xfd5f, 0xfdcb, 0x5400, 0x5655, 0x01bc, 0x4902, 0x4504, 0xbcbc, 0x07cd, 0x4000, 0x02a0, 0x5e43, 0xf97c, 0xffb5, 0xb5ea, 0x6bdd, 0xefbd, 0x0089, 0x4080, 0xfb89, 0x0000, 0x0250, 0x8999, 0x01b9, 0x2a14, 0x0a0a, 0x0289, 0xadfa, 0x0552, 0x2450, 0xcb89, 0x0400, 0x50e0, 0xca98, 0x8988, 0xb999, 0x0198, 0xf8ea, 0xc080, 0xac98, 0x4401, 0xea10, 0xea57, 0xcb9a, 0x6402, 0x50cf, 0x4238, 0x4655, 0xb998, 0x00b9, 0x0a8e, 0xb9b9, 0x03cd, 0x0100, 0x0200, 0x0500, 0x030a, 0x0078, 0x0410, 0x0298, 0xd502, 0xb56a, 0x6a5a, 0x00cb, 0x2820, 0xa9cb, 0x0001, 0x0801, 0x0004, 0xabbb, 0x009b, 0x8820, 0xcd9b, 0x1000, 0x1104, 0xbecd, 0xa407, 0x050a, 0x170a, 0x1f02, 0x1708, 0x1f02, 0x1f2a, 0x1f08, 0xff20, 0xdc9b, 0x1402, 0x4201, 0x1044, 0x8044, 0xa9dc, 0x5400, 0x40fa, 0xca9b, 0x4404, 0x04fe, 0x14fe, 0x44e1, 0x1588, 0x0481, 0xb9a9, 0x9acd, 0x5000, 0x80fe, 0x899b, 0x9adc, 0x0400, 0x80fe, 0xac89, 0x5000, 0x54fa, 0x89ab, 0x0401, 0x80fe, 0xeafe, 0x8988, 0xbedc, 0x9000, 0x90f5, 0x9add, 0xcedb, 0x5401, 0x9c0e, 0x500e, 0x9bce, 0x9dcb, 0x9400, 0x90ca, 0x9add, 0xdca9, 0xbbcd, 0x8b9b, 0x03b9, 0x6090, 0xa015, 0x0014, 0x0025, 0x0c98, 0xfbfc, 0xf5ff, 0x0bff, 0xb1b4, 0xb5ea, 0xf7fa, 0x57ba, 0xf00a, 0x0071, 0xdfff, 0xdfdf, 0xdfdf, 0x00df, 0xf789, 0x0007, 0x5104, 0x1494, 0x4485, 0x4494, 0x1491, 0x0191, 0x4491, 0xaa91, 0x7777, 0x0298, 0x42a8, 0xa550, 0x9252, 0xf789, 0x5408, 0xaa41, 0x91aa, 0x9451, 0x9151, 0x8444, 0x9104, 0x8451, 0x8511, 0x5554, 0x7777, 0x0298, 0x5410, 0x5428, 0xa8ea, 0xf798, 0x0000, 0xaa51, 0x7777, 0x049a, 0xf040, 0x900f, 0x491a, 0x4bc6, 0xf51f, 0xffa9, 0x0000, 0x1154, 0x01ca, 0x1604, 0x0054, 0xcaca, 0xcaca, 0x019a, 0x0202, 0x0202, 0xaa9a, 0x00ca, 0x0550, 0x8c9a, 0x4003, 0x2220, 0xd155, 0xd511, 0xd454, 0xa9a9, 0x0089, 0x0808, 0xfa89, 0x4001, 0x5555, 0x48a2, 0x01a9, 0x0002, 0x000a, 0x0098, 0x5ffe, 0xfa98, 0x0007, 0x9900, 0x9859, 0xa499, 0x68a6, 0x5466, 0x5896, 0x6465, 0x5596, 0x8888, 0x01a9, 0x89fc, 0x8516, 0x99a9, 0x0089, 0x0100, 0xfa89, 0x0001, 0x5555, 0x828a, 0x0565, 0x92a0, 0xb54a, 0xb54a, 0x0105, 0x4010, 0x4120, 0x5555, 0x5556, 0x0085, 0xfff0, 0x0198, 0x0114, 0x0aa0, 0xf687, 0x0007, 0x5500, 0x5549, 0x5509, 0x5549, 0x5519, 0x5509, 0x5549, 0x0019, 0x6667, 0x0298, 0xab94, 0xaa55, 0x5ab5, 0xf789, 0x4406, 0xaa11, 0x65aa, 0x6115, 0x6455, 0x6145, 0x6555, 0x6015, 0x0078, 0xf040, 0x7777, 0x0356, 0x04a0, 0x0402, 0x0006, 0x8006, 0xff56, 0x1400, 0x5511, 0x0287, 0x4100, 0x4512, 0x0209, 0x0067, 0xff00, 0x0178, 0xaf5a, 0x5556, 0xf678, 0x1401, 0x5551, 0xaaaa, 0x0d89, 0xfbf6, 0xe975, 0x407a, 0x40b4, 0xfeab, 0x56fb, 0xabfd, 0x49a6, 0x16a1, 0x0042, 0xa50a, 0x7568, 0x2020, 0x2020, 0x9999, 0x9989, 0x0278, 0x8080, 0x8080, 0x8080, 0xf798, 0x0400, 0x1080, 0x7898, 0x0078, 0x0200, 0x0298, 0x0020, 0x00a0, 0x50a0, 0xf978, 0x4006, 0x6000, 0x4800, 0x4000, 0x4800, 0x4000, 0x4202, 0x6000, 0x0289, 0x7ffe, 0xffdf, 0x5bef, 0x069a, 0xc8a0, 0xa040, 0x7040, 0x5fa7, 0x8aad, 0x450a, 0x0409, 0x01ca, 0x0a04, 0xd044, 0x029a, 0x0202, 0x0202, 0x0202, 0xfa9c, 0x2400, 0x26aa, 0xaaca, 0x0298, 0x5f7e, 0x7f6f, 0x7f7f, 0xfa89, 0x0000, 0x8840, 0x0189, 0x0648, 0x0281, 0xf9a8, 0xa406, 0x68a9, 0x98a6, 0x58a9, 0xa496, 0x5869, 0xa4a6, 0x5499, 0x029a, 0xfbfa, 0xfbff, 0xf9fe, 0x0665, 0x754a, 0xb55e, 0xb52c, 0x5502, 0x0501, 0x0411, 0x0401, 0x0178, 0x0040, 0x2080, 0xf867, 0x0406, 0x068a, 0x0428, 0x06a2, 0x048a, 0x06aa, 0x04aa, 0x06aa, 0x0398, 0x1042, 0x0100, 0x0080, 0x2582, 0x0278, 0x0404, 0x0414, 0x0404, 0xf978, 0x1000, 0x1800, 0x8888, 0x0356, 0x4020, 0x4020, 0x4060, 0x4020, 0x0287, 0x4010, 0x0010, 0x0054, 0x05b9, 0x0900, 0x0022, 0x0411, 0x0822, 0x8004, 0x0400, 0xfab9, 0x0001, 0x4040, 0x0080, 0x99a9, 0x00b9, 0x1002, 0x8ab9, 0x400b, 0x0008, 0x4002, 0x4088, 0x1086, 0x4d01, 0x0c04, 0x4c00, 0x0c40, 0x1c00, 0x0c40, 0x4c40, 0x4d11, 0xf789, 0x4006, 0x0080, 0x0090, 0x0084, 0x4080, 0x0084, 0x0080, 0x0081, 0x7999, 0x0389, 0x2480, 0x2904, 0x2880, 0x0800, 0xfb89, 0x4000, 0x4240, 0x0389, 0x8080, 0x8080, 0x8080, 0x0200, 0x9989, 0x9999, 0x0dca, 0x1208, 0x0900, 0x3517, 0x122f, 0x0010, 0x00a0, 0xaad4, 0xeaac, 0x68dc, 0x40d4, 0xdc29, 0xd5bd, 0xdd7d, 0xa8ad, 0xb89a, 0x000e, 0xc090, 0x008d, 0x4084, 0x0083, 0x7091, 0xccb3, 0xc490, 0x1d8c, 0x4310, 0x1177, 0x3011, 0x4451, 0xcc47, 0x3471, 0x0010, 0xab9b, 0x00a9, 0xeefa, 0xcba9, 0x5402, 0x5456, 0x5465, 0x5455, 0xacab, 0x01a9, 0xfefe, 0xfdff, 0xaaab, 0x009a, 0x8020, 0xf9ba, 0x4000, 0x0000, 0xa9aa, 0x0a65, 0x1000, 0x2800, 0x5000, 0x5ac0, 0xaa95, 0xaad5, 0xab55, 0x208a, 0x2085, 0x52a4, 0x02a1, 0x5556, 0x0289, 0xf5de, 0xfdfe, 0xfffe, 0x7698, 0x1006, 0x0008, 0x00c8, 0x0008, 0x0038, 0x0008, 0x0038, 0x00c8, 0x8868, 0x0389, 0x4412, 0x1409, 0x1044, 0x1042, 0xf798, 0x2406, 0x2110, 0x2401, 0x6500, 0x2100, 0x6444, 0x6100, 0x2400, 0x8989, 0x0356, 0x4060, 0x2040, 0x2140, 0x2040, 0x0787, 0xafaa, 0x2eaa, 0x2a55, 0x0aa5, 0xd77a, 0xd57a, 0xa8f5, 0x62da, 0x9999, 0x8999, 0x00a9, 0x0020, 0x00b9, 0x0050, 0xffb9, 0x0000, 0x0111, 0x0089, 0x8068, 0x02b9, 0x8020, 0x0010, 0x0080, 0x019a, 0xdefe, 0xf6bd, 0xb8a9, 0x0408, 0x0000, 0xc008, 0x0008, 0x0138, 0x04c9, 0x1018, 0x0018, 0x0038, 0xaa08, 0xf978, 0x4006, 0x6222, 0x622a, 0x4aa2, 0x68aa, 0x6a8a, 0x68aa, 0x6aaa, 0x0998, 0x2100, 0xa3e9, 0xe7f5, 0xdfff, 0xb540, 0xf653, 0xf773, 0xf7b7, 0x7088, 0xf7d5, 0xac98, 0x5401, 0xfe55, 0xefff, 0x9aaa, 0x02ac, 0xf9f6, 0xeaf5, 0xedfb, 0xaaaa, 0xaaa9, 0x07ca, 0x4ae0, 0xeef5, 0xcee5, 0xcd6b, 0xd55a, 0xdb55, 0xda8d, 0x4a82, 0x89ac, 0x1402, 0xe665, 0xd599, 0xe655, 0x8ba9, 0x840a, 0x55c5, 0x45d1, 0x55d5, 0x55c5, 0x02d1, 0x4800, 0x1444, 0x8411, 0x5108, 0x1514, 0x8449, 0x029a, 0x15aa, 0x1010, 0x1010, 0xfb9a, 0x0002, 0x8001, 0x0001, 0x2001, 0x039a, 0x44b0, 0x69b0, 0x40a0, 0x0280, 0x0765, 0x6994, 0x53ad, 0x2a54, 0xaa55, 0x0520, 0x0500, 0x2511, 0x0208, 0x0198, 0x1440, 0x1400, 0x6798, 0x0008, 0x4044, 0xae20, 0x8c00, 0xac00, 0x0c00, 0xac00, 0x8c04, 0x8c40, 0x8c00, 0x0398, 0x5208, 0x5a6d, 0x76ad, 0xb7df, 0xf978, 0x1006, 0x1200, 0x1280, 0x9208, 0x1880, 0x9a00, 0x1880, 0x1a20, 0x9889, 0x0356, 0xa0a0, 0x0406, 0x004d, 0x2206, 0xff65, 0x0400, 0x5155, 0x0687, 0x4a00, 0xaa25, 0x8005, 0xab50, 0xd75a, 0xd75d, 0x7d5d, 0x7878, 0x0098, 0x2020, 0x0178, 0x4800, 0x040f, 0x0298, 0xb448, 0x5288, 0xf12a, 0xf798, 0x4407, 0x0010, 0x0008, 0x4409, 0x0408, 0x4459, 0x0108, 0x4419, 0x1148, 0x8979, 0x0b87, 0x017c, 0x4154, 0x7f7f, 0x7f7f, 0x00fe, 0x4a69, 0x00fd, 0x1601, 0xf7d3, 0xd7f7, 0x00f7, 0xd57a, 0xff78, 0x4400, 0x0041, 0x0ba9, 0x8aaa, 0x65e9, 0x5549, 0x9577, 0x020a, 0x010a, 0x0905, 0x0515, 0x44a8, 0xaa55, 0x6cf5, 0xfeb5, 0xfa89, 0xa406, 0x2688, 0xa6a2, 0x262a, 0xa62a, 0xa622, 0xa6a8, 0x268a, 0x9a9a, 0x0f98, 0x5a64, 0x6a37, 0x375d, 0x3f6d, 0x5509, 0x5709, 0x5f95, 0xdf2a, 0xfefe, 0xfefe, 0xfefe, 0xfefe, 0xae43, 0xef53, 0xaf57, 0xbfff, 0x0465, 0x4280, 0xa501, 0x5288, 0x0409, 0x0201, 0x5555, 0x5555, 0x0078, 0xd6fa, 0xf876, 0x0000, 0x5654, 0x6666, 0x0187, 0xad12, 0xb55b, 0x0267, 0x2020, 0xff20, 0x2060, 0xf687, 0x0400, 0x1008, 0x7767, 0x0187, 0xf8fe, 0x4a05, 0xf768, 0x0003, 0x8210, 0x0898, 0x556a, 0x9aa8, 0x0178, 0x040c, 0x0c04, 0x0756, 0x5082, 0xaaf6, 0x0054, 0x1248, 0xfbf6, 0x6aff, 0x28f5, 0xd0f5, 0x0267, 0x0ff0, 0xa408, 0x0ff8, 0x6777, 0x0187, 0xfed0, 0xfffe, 0x8887, 0x8889, 0x0478, 0xaff0, 0x8408, 0xa802, 0x0804, 0x87f0, 0x8878, 0x0198, 0xa800, 0x5400, 0x9888, 0x9888, 0x0187, 0xff00, 0xdfd5, 0xf798, 0x1003, 0x4108, 0x0418, 0x4008, 0xaa08, 0x8977, 0x0778, 0xd1e0, 0x91ca, 0xd28a, 0xa594, 0x1288, 0x258b, 0x0512, 0x0543, 0xf678, 0x0400, 0x6400, 0x0778, 0x9cd4, 0xafc6, 0xdd86, 0x258a, 0x1904, 0x8124, 0x0228, 0x2010, 0x8788, 0x009a, 0xfffe, 0x0098, 0x3f00, 0x009a, 0xb5fa, 0x87a9, 0x4400, 0xfe50, 0x8787, 0x0089, 0x0ff0, 0x9899, 0x009a, 0xf5fa, 0x7869, 0xa400, 0x04ba, 0x9a99, 0x9969, 0x0089, 0x2ff0, 0x78a9, 0x1003, 0x1119, 0x5119, 0x4448, 0xaeea, 0x0198, 0x2514, 0x2b54, 0x0087, 0xff00, 0xf798, 0x0000, 0x8001, 0x8788, 0x0198, 0x0812, 0x2b05, 0x9867, 0x8400, 0x3baa, 0x0087, 0xfff0, 0x8878, 0x0298, 0x7ede, 0x00fe, 0x5eb4, 0xf798, 0x5400, 0x0255, 0x7878, 0x0189, 0xdc54, 0xbd68, 0x7778, 0x7777, 0x0089, 0xf87e, 0x0365, 0x1004, 0x4004, 0x0914, 0x1014, 0x5555, 0x0387, 0x1502, 0x0500, 0x0510, 0x2a00, 0x0367, 0x2820, 0x3020, 0x3020, 0x3020, 0x0278, 0x208a, 0x0095, 0x8029, 0xf678, 0x0007, 0x1124, 0x4561, 0x1064, 0x4560, 0x1024, 0x0564, 0x1060, 0x0464, 0x0756, 0x4490, 0xa490, 0x2a80, 0x2480, 0xf5fa, 0xf26a, 0xd468, 0xf16a, 0x7777, 0x0089, 0xfdfe, 0x0087, 0xdf00, 0x0298, 0x8500, 0x4504, 0x0201, 0x0087, 0xdf00, 0x0098, 0x1120, 0xf798, 0x0001, 0x1140, 0xaaaa, 0x0289, 0xdffe, 0x5669, 0x14a3, 0xf789, 0x4400, 0x1a48, 0x9978, 0x0078, 0x20fc, 0x0198, 0x4b0a, 0x4f95, 0x0378, 0x8080, 0xff80, 0xed91, 0x8090, 0x8888, 0x8898, 0x0178, 0x2ff0, 0xa5e0, 0xf978, 0x0000, 0x2010, 0x0478, 0x0808, 0xc8ff, 0x880b, 0x0808, 0xa8ff, 0x8877, 0x0098, 0x0020, 0x029a, 0xe9f4, 0xd5e0, 0xe9d0, 0xf89a, 0x1000, 0xaa51, 0x8888, 0x05a9, 0x00a0, 0x1020, 0xd040, 0xf6ff, 0x76ef, 0x8fef, 0x89a9, 0x029a, 0x02a2, 0x0202, 0x4202, 0xaa9a, 0xaaaa, 0x0398, 0x002a, 0x550b, 0x752f, 0x7b6f, 0xf798, 0x4400, 0xaa04, 0x7777, 0x0498, 0x25c0, 0x7e93, 0x6eab, 0x2a00, 0xfefe, 0x99a8, 0x0389, 0x1010, 0xf010, 0x0fe7, 0x0640, 0x8999, 0x9999, 0x0565, 0x5daa, 0x11aa, 0xaa40, 0xba2d, 0x0208, 0x0114, 0x5565, 0x0085, 0xfff0, 0x0078, 0x0882, 0xf678, 0x0000, 0xa555, 0x0078, 0x68b4, 0xf678, 0x0007, 0x1100, 0x1059, 0x4459, 0x1159, 0xaa59, 0x54aa, 0x5559, 0x4159, 0x7768, 0x0098, 0x4000, 0x0078, 0x1f00, 0x8888, 0x7768, 0x0087, 0xffea, 0x8888, 0x8889, 0x0378, 0x0c04, 0x0404, 0x3eff, 0x0c0c, 0x0656, 0x8000, 0x2000, 0x5480, 0x0280, 0x0204, 0x46ad, 0x040b, 0x6656, 0x0167, 0xc230, 0xff0f, 0x7777, 0x0798, 0x8200, 0x8200, 0x0001, 0x0402, 0xb504, 0xa54a, 0xaab2, 0xaad5, 0xf789, 0x4407, 0x1100, 0x4449, 0x5119, 0x1158, 0x4419, 0x1148, 0x4419, 0x1108, 0x9878, 0x0378, 0x8080, 0x8080, 0x8080, 0x8080, 0x0098, 0x8020, 0x0378, 0x0808, 0x0808, 0x0808, 0x0808, 0x02a9, 0xe54a, 0xaf4e, 0xed52, 0xf89a, 0x5400, 0x5545, 0x9899, 0x029a, 0xf4ea, 0xf5da, 0xedd4, 0xf89a, 0x0400, 0x6651, 0x9898, 0x029a, 0x0280, 0x0240, 0x2f90, 0x99a9, 0x9999, 0x00a8, 0xfd00, 0xf98a, 0x0404, 0x0482, 0x0420, 0x2482, 0x0400, 0xa488, 0x99a9, 0x0c98, 0x6b80, 0x775f, 0x775f, 0x4f3b, 0x7675, 0x759f, 0x959f, 0xf5bf, 0xfeaf, 0xfefe, 0xfefe, 0xfefe, 0x7fea, 0xff89, 0x0000, 0x0440, 0x0765, 0x5a54, 0x5895, 0xaa55, 0x5a55, 0x010a, 0x0012, 0x0401, 0x0512, 0x0387, 0xf70e, 0xb55b, 0xb75f, 0xffdf, 0xf687, 0x0406, 0x4408, 0x1108, 0x0408, 0x1108, 0x4408, 0x1108, 0x0408, 0x7767, 0x0098, 0x1010, 0x0378, 0x0404, 0x040c, 0x040c, 0x040c, 0x0556, 0x2040, 0x0080, 0x20f5, 0x69d4, 0x29d4, 0x22d4, 0xff67, 0x0000, 0x0040, 0x00ab, 0x5d0a, 0xfcba, 0x4400, 0x0a14, 0x01ab, 0x4024, 0x0041, 0xbbbb, 0xbcbc, 0x00ab, 0x2152, 0x13aa, 0xbcbb, 0xb13a, 0x9003, 0x9fff, 0x9cff, 0x9fff, 0x9fff, 0x01ac, 0xa000, 0x24c0, 0x9abc, 0x400a, 0x0888, 0x4091, 0x15a6, 0x0855, 0x2a1d, 0x4a6d, 0x2a6e, 0x444d, 0x690c, 0x9e5e, 0x996d, 0x019b, 0x0802, 0x0808, 0x139b, 0x4003, 0x4002, 0x4003, 0x4003, 0x5553, 0x003b, 0xfe00, 0xf41b, 0x5400, 0xe455, 0xdfff, 0xf41b, 0xefff, 0xf41b, 0xefff, 0xf41b, 0xefff, 0xf419, 0xefff, 0x009b, 0x0808, 0x0041, 0x7f00, 0xbe1f, 0x0003, 0x0040, 0x0060, 0x0060, 0xff60, 0x213b, 0x4004, 0x9015, 0xe4aa, 0xf8bf, 0xf8ff, 0xa8ab, 0x2221, 0x00dc, 0x0408, 0x03ac, 0x0702, 0x0100, 0x0601, 0x0002, 0x06bc, 0x0202, 0x0202, 0x0202, 0x0202, 0x8080, 0x8080, 0x8080, 0xfabc, 0x0002, 0x0040, 0x0060, 0x2041, 0xcbaa, 0x03cb, 0xfefe, 0xfefe, 0xfefe, 0xfefe, 0x4766, 0xffe3, 0x3466, 0xfffe, 0x4346, 0xffff, 0xe346, 0x34ef, 0x4002, 0x801e, 0xd00b, 0xf407, 0xfffe, 0x634f, 0x34ef, 0x0002, 0x0090, 0x0090, 0xfed0, 0x0063, 0xffe0, 0x0076, 0x2004, 0x6666, 0x123e, 0xf322, 0x223e, 0xf121, 0x223e, 0x4f12, 0x5400, 0x101e, 0x33ee, 0x2211, 0xfe33, 0x2123, 0xff43, 0xf124, 0x9400, 0x5bfc, 0x564f, 0xa400, 0xb4ba, 0x3f56, 0x4400, 0x150e, 0x2631, 0xa402, 0xa3aa, 0xa3aa, 0xa3aa, 0x4666, 0x8881, 0x3488, 0x0156, 0xe080, 0x058a, 0xe4b1, 0x5004, 0x5255, 0x5355, 0x5355, 0x5355, 0x5355, 0x91eb, 0x0000, 0xffc9, 0xb91e, 0xaaaa, 0xf14b, 0xe404, 0xe4ff, 0xe4ff, 0xe4ff, 0xe4ff, 0xe4ff, 0x149f, 0x0000, 0x0039, 0xf13a, 0xffff, 0x003b, 0x0300, 0x9b41, 0xa407, 0xa4aa, 0xa4aa, 0xa4aa, 0xa4aa, 0xf4aa, 0x0aff, 0x4a00, 0x4a55, 0x41bf, 0x0003, 0x00e5, 0x00e5, 0x00e5, 0x00e5, 0x4199, 0xffff, 0x5666, 0xff43, 0x5666, 0xff43, 0x5666, 0x6f43, 0xa400, 0xa4ff, 0xe436, 0x0000, 0x00f9, 0xff73, 0x0000, 0xaa55, 0x003e, 0xff00, 0x1387, 0x5400, 0x0095, 0x3888, 0xbbb1, 0xbb9b, 0x00b1, 0xfefe, 0x89b1, 0x5403, 0x5459, 0x5469, 0xa855, 0xf4aa, 0xaa89, 0xef14, 0xa400, 0xa46a, 0x3eff, 0xff14, 0x3eff, 0xff14, 0x3eff, 0xff14, 0x3eff, 0xff14, 0x3eff, 0xff14, 0x3eff, 0xff14, 0x3eff, 0xfabc, 0x4405, 0x1904, 0x1451, 0x6105, 0x2444, 0x5145, 0x2454, 0x01cb, 0xa524, 0x2cb2, 0x9acb, 0x0410, 0x0895, 0x4001, 0x0211, 0x0201, 0x1091, 0x1d45, 0x5d56, 0x8d55, 0x4d55, 0x1c55, 0x4d55, 0x1d15, 0x5d55, 0xc400, 0xc440, 0xc000, 0xd100, 0x019b, 0x8080, 0x8080, 0x01cb, 0x4800, 0x1420, 0xa9cb, 0x0002, 0x0081, 0x0080, 0x038c, 0x009b, 0x0808, 0xfc9b, 0x4001, 0x4200, 0x4080, 0x00cb, 0x4080, 0x00db, 0xf000, 0x06cd, 0xab44, 0xfb94, 0xfffd, 0xaa6a, 0x7fde, 0x5fbe, 0xdfbf, 0xccac, 0xcdcc, 0x02ca, 0xfdfc, 0xfcfa, 0xfafd, 0xbdca, 0x4408, 0x6e55, 0x5da6, 0x6daa, 0x9da6, 0x5d5a, 0x6d65, 0x5d59, 0x5d96, 0x5559, 0xbdcd, 0x00bc, 0x8080, 0xfdbc, 0x0003, 0x0040, 0x0048, 0x0060, 0x0040, 0xbdcc, 0x01cd, 0xfefe, 0xfff5, 0xfbcd, 0x1407, 0x5255, 0x4644, 0x1254, 0x5645, 0x1254, 0x5655, 0x5654, 0x5255, 0x00dc, 0x0802, 0xe346, 0x0001, 0x00a4, 0x40f9, 0x6f43, 0xa400, 0x50ff, 0xffe4, 0x0001, 0x1555, 0x1aaa, 0x0056, 0x0200, 0x2376, 0x1001, 0x8000, 0xea02, 0x4432, 0x213e, 0xf322, 0x0256, 0x8000, 0x0040, 0x0040, 0xf654, 0x9000, 0x939a, 0x0356, 0x0a80, 0x0282, 0x0005, 0x0102, 0xcab6, 0x0000, 0x6555, 0xcbab, 0x00cb, 0x0400, 0x9abc, 0x5402, 0x9655, 0x555d, 0x545d, 0xab9a, 0x019b, 0x2020, 0x2020, 0x114b, 0x1111, 0x00cb, 0x0808, 0xf9cb, 0x6402, 0x2010, 0x2004, 0x2011, 0xbcbb, 0x019b, 0x0404, 0x0404, 0x0076, 0x0020, 0xe463, 0x0000, 0xf855, 0x0056, 0x4000, 0x6666, 0x00e3, 0xff00, 0x02b9, 0x2208, 0x154a, 0x3f4f, 0xf19b, 0x0000, 0x0250, 0xbbbb, 0x0189, 0xa0e0, 0xe0e0, 0x489b, 0x5401, 0x54a5, 0x55a5, 0x1349, 0x0000, 0xaaf9, 0xf13c, 0x4004, 0x40fe, 0x40fe, 0x40fe, 0x40aa, 0x0055, 0x13cd, 0x0000, 0xaa95, 0x1ccc, 0x00f1, 0x00f0, 0x3333, 0x1333, 0xbccd, 0x13db, 0x1d73, 0x0000, 0xffc9, 0x13d6, 0x03dc, 0x5b2a, 0x362b, 0x7f2b, 0xff5f, 0x1fdc, 0x0000, 0x0001, 0xb31f, 0xe401, 0xe4ff, 0xe9ff, 0x14cb, 0x0002, 0x1555, 0x556a, 0x556f, 0xc41e, 0x41fc, 0x0000, 0x0039, 0x431b, 0x5401, 0xa855, 0x00ea, 0x14fc, 0x0003, 0xe555, 0xe555, 0xe555, 0xe555, 0xf13f, 0x0001, 0x0090, 0x0090, 0x00c1, 0xff00, 0x134c, 0x5000, 0xe055, 0xfec1, 0x0001, 0xaa85, 0xffc5, 0x16cd, 0xa410, 0xfff9, 0x0802, 0x9030, 0x0cf1, 0x0005, 0xae4a, 0x2801, 0x92f5, 0xeab0, 0xfdff, 0xedfb, 0x6fb7, 0x75a5, 0x5aa5, 0xb521, 0xb040, 0x0200, 0x9fa8, 0x0a0f, 0x4804, 0x76af, 0x020d, 0xccdc, 0x673f, 0x9000, 0x50fa, 0xef43, 0x4001, 0xeaaa, 0x2aff, 0xf643, 0x4000, 0xff06, 0x3fe4, 0xa401, 0x55aa, 0x03d5, 0xf654, 0x4000, 0xff95, 0x883e, 0x81ef, 0x0000, 0x01e4, 0x13ef, 0x9000, 0x4007, 0xfe14, 0xffff, 0xe146, 0xffff, 0x3467, 0xfffe, 0x4665, 0xffe3, 0xf348, 0x0001, 0x00f9, 0x00f9, 0xff34, 0x7683, 0xff34, 0x583f, 0x7f34, 0xa400, 0xa4ca, 0x64ff, 0x5f34, 0xa400, 0xa4ca, 0xf84e, 0xa405, 0xa4aa, 0xa4aa, 0xa4aa, 0xa4aa, 0xa7aa, 0xa5aa, 0x1e68, 0x0000, 0x0005, 0x4b1e, 0xa405, 0xa4aa, 0xa4aa, 0xa4aa, 0xa4aa, 0xa4aa, 0xa4aa, 0xc41b, 0x0000, 0xffc9, 0x00ab, 0x80fc, 0x134b, 0x0001, 0x5554, 0xfff8, 0xf13c, 0xb41f, 0x0000, 0xfff9, 0xbb44, 0x00cb, 0xf030, 0x41bc, 0x0001, 0x9000, 0xa000, 0xf41b, 0x9006, 0x90ff, 0x90ff, 0x90ff, 0x94ff, 0xe5ff, 0xf9ff, 0xfeff, 0x008f, 0xfff0, 0x0038, 0x8c08, 0xe843, 0x4000, 0xfd2a, 0x3886, 0x36f4, 0x5402, 0x54ea, 0x54ea, 0x554f, 0xef43, 0xa402, 0xadea, 0xab3a, 0xaa4a, 0x64ef, 0xffff, 0x843e, 0xffff, 0x7844, 0xefff, 0xba63, 0x5400, 0xffaa, 0x1c4b, 0x4000, 0xd800, 0xf14b, 0x5400, 0xa9e5, 0x00f1, 0xffec, 0xffff, 0xff14, 0x3eff, 0xff14, 0x13ef, 0x9002, 0x9003, 0x9000, 0xb000, 0xe51f, 0x0000, 0x0090, 0x531e, 0xefff, 0x5531, 0x00b9, 0xff00, 0x13bc, 0x9400, 0x95aa, 0x1111, 0x3dcc, 0xeee1, 0xf13c, 0x4001, 0x40fe, 0x40fe, 0x39f1, 0x5400, 0x3aaa, 0xbbbb, 0x13bb, 0x0013, 0xff80, 0x9cfe, 0x0001, 0x5554, 0xfffa, 0xccbb, 0x02dc, 0x2080, 0x4481, 0x5002, 0x9f9c, 0x0000, 0x5555, 0x01bc, 0xedfa, 0x4020, 0xccdc, 0xba1c, 0x0000, 0xfff9, 0xfb31, 0x9005, 0x91aa, 0x93aa, 0x93aa, 0x93aa, 0x93aa, 0x93aa, 0xbbbb, 0xf41b, 0xefff, 0xf41b, 0xefff, 0xf41b, 0xefff, 0xf41b, 0xefff, 0xf41b, 0xefff, 0xf41b, 0xefff, 0xf41b, 0xefff, 0xf41b, 0x31ef, 0x4003, 0x9000, 0xd000, 0x9000, 0x5000, 0x219f, 0x0000, 0xfff9, 0x213b, 0xe400, 0xaabf, 0xffe1, 0x0000, 0x9555, 0xffff, 0x00bc, 0xff00, 0x00cd, 0xf010, 0xfdbc, 0x0001, 0x5555, 0x00aa, 0x00db, 0xff00, 0xcccc, 0xdddd, 0x00bc, 0xc202, 0xcadb, 0x0002, 0x5550, 0x02ae, 0x0000, 0x02cd, 0xd4fa, 0xd4ea, 0xfd6a, 0xacbc, 0x00bc, 0x0ffa, 0x00dc, 0x0488, 0xcccd, 0x00cb, 0x00fe, 0x02cd, 0xa000, 0x8040, 0x0010, 0xcccc, 0xaaaa, 0x00db, 0xff00, 0x01dc, 0xbfc6, 0x5076, 0xefcd, 0x1000, 0xaa11, 0x753e, 0xffff, 0x7833, 0xefff, 0x7763, 0x3eff, 0x8874, 0x34ff, 0x8877, 0x64ff, 0x4f87, 0x5000, 0x503a, 0x73ff, 0x0078, 0x0ffc, 0xe348, 0x5000, 0x9055, 0xfffe, 0x3466, 0x41fe, 0x5400, 0xa554, 0x834f, 0x0000, 0x00e4, 0x8834, 0x83ef, 0x4004, 0x90fe, 0xe0ff, 0x90ff, 0x40ff, 0xfffe, 0xe348, 0x9400, 0xe400, 0xf348, 0x0004, 0x00d9, 0x00f9, 0x00f9, 0x00f9, 0x00f9, 0xff34, 0x4867, 0x0002, 0x0255, 0xaa00, 0xaaaf, 0xf84e, 0xa400, 0xa4aa, 0x8888, 0x0076, 0xff00, 0xa1e8, 0x0005, 0xfff9, 0xfff9, 0xfff9, 0xfff9, 0xfff9, 0xfff9, 0xab1e, 0xa400, 0xa4ff, 0xabbb, 0xf13a, 0xe403, 0xe4ff, 0xe4ff, 0xe4ff, 0xe4ff, 0xffff, 0xe13a, 0xfeee, 0xb14a, 0xa409, 0x54aa, 0x0655, 0xf600, 0xf60f, 0xf6ff, 0xf6ff, 0xf6ff, 0xf6ff, 0xf6ff, 0x60ff, 0x41af, 0x0000, 0x00e5, 0x41ab, 0x41bf, 0x0004, 0x00e5, 0x00e5, 0x00e5, 0x00e5, 0x00e5, 0xf987, 0x0002, 0x0900, 0x0100, 0x0900, 0x0087, 0xf030, 0x4378, 0x5001, 0x0500, 0x55e0, 0xe338, 0x7777, 0xf438, 0x8877, 0xfe43, 0x3887, 0xffe3, 0x3377, 0x38f4, 0x5400, 0x553a, 0xe138, 0xffff, 0xaa81, 0x17a9, 0x6400, 0x0557, 0x78a1, 0x9400, 0x5477, 0x88aa, 0x00a1, 0xfefe, 0xf4a1, 0x5401, 0x5655, 0xf255, 0x3eff, 0xff14, 0x3eff, 0xff14, 0x3eff, 0xff14, 0x3eff, 0xff14, 0x3eff, 0xff14, 0x3eff, 0xff14, 0x3eff, 0xff14, 0x3eff, 0x00ab, 0x0208, 0xabbb, 0xb9bb, 0x00ab, 0x0802, 0x9bac, 0xa40e, 0xaaa9, 0x8a6a, 0xaba8, 0xaaae, 0xab9a, 0xabae, 0xaa6a, 0x2a91, 0xaaa6, 0xaaa1, 0x59a6, 0x2a46, 0xaa64, 0xa989, 0x4a12, 0xc8ab, 0x0006, 0x3709, 0x4148, 0x1018, 0x0008, 0xcc08, 0x0038, 0x300b, 0xcb8b, 0xf79b, 0x1006, 0x4491, 0x4494, 0x1184, 0x4495, 0x0184, 0x4484, 0x0084, 0x7bbb, 0x039b, 0xb55a, 0xd575, 0xa47a, 0x4069, 0xa8b9, 0x9406, 0x9145, 0x8414, 0x8544, 0x9144, 0x9751, 0x9551, 0x8544, 0x039b, 0xaaa8, 0xd96b, 0x99a7, 0x8146, 0xb9b9, 0x00ac, 0x0200, 0x03dc, 0x0800, 0x0c22, 0x0400, 0x8001, 0xccdc, 0x03ca, 0xc078, 0xf854, 0xa8fc, 0xf8fe, 0xfabc, 0x0400, 0x2400, 0x00bc, 0x2020, 0xfabc, 0x0000, 0x0004, 0xcaba, 0x00bc, 0x2020, 0xfbac, 0x0004, 0x8440, 0xa111, 0x9104, 0x8511, 0x9004, 0x00bc, 0x80d0, 0xfabc, 0x000a, 0x8850, 0x2811, 0x889a, 0x2629, 0x2292, 0x4422, 0x0144, 0x4812, 0x0120, 0x0122, 0x2100, 0xcaca, 0x01cb, 0xfefe, 0xfefe, 0xcccb, 0x01ac, 0xa050, 0x0d50, 0x00dc, 0x0108, 0x1765, 0x9400, 0x2a40, 0x5ad4, 0x2cea, 0x1422, 0x2982, 0x154a, 0x354a, 0xba6a, 0xb554, 0xb5ae, 0xfa5d, 0x2b15, 0x522d, 0x152a, 0xad55, 0x4814, 0xaaa4, 0x4aa4, 0x5055, 0x0102, 0x0208, 0x0900, 0x1500, 0x0189, 0x4020, 0x40b0, 0x00b9, 0x8020, 0xf689, 0x0007, 0x5951, 0x5911, 0x5954, 0x4911, 0x5850, 0x4904, 0x1910, 0x4800, 0x03b9, 0x9324, 0x0254, 0xaba4, 0x5daa, 0xf7b9, 0x6406, 0x2000, 0x2101, 0x6000, 0x2400, 0x6404, 0x2411, 0x2101, 0x9bbb, 0x0356, 0x2020, 0x4060, 0xd020, 0x2040, 0x0278, 0x0080, 0x00a0, 0x0080, 0x0098, 0x0004, 0x0378, 0x2a08, 0x5584, 0xaa14, 0x4005, 0x009b, 0xffea, 0xa9b8, 0x0004, 0x9900, 0xd6a9, 0x6566, 0x57a6, 0x5d95, 0x009b, 0xfdf4, 0x0089, 0x0ff0, 0x01b9, 0xc540, 0xf5aa, 0x89ab, 0x1004, 0x08a6, 0x9a98, 0xffff, 0x0584, 0x0611, 0x00ab, 0x0840, 0x8f9b, 0x0000, 0x0500, 0x0089, 0xf202, 0xab98, 0x0003, 0x6299, 0xa1bb, 0x62aa, 0xa2ab, 0xbcbc, 0xba8b, 0x0079, 0x8080, 0xb978, 0x0004, 0xaa40, 0xae6a, 0xee6a, 0xbe6a, 0xfb6e, 0x7b9b, 0x0189, 0x0002, 0x30ff, 0x01b9, 0x0500, 0x0a80, 0x0189, 0x1808, 0x08ff, 0xf89b, 0x9402, 0x9111, 0x8455, 0x8444, 0xbb9b, 0x0089, 0x0ff0, 0x01b9, 0x0400, 0x2a1a, 0xbb9b, 0x0aca, 0x370a, 0xff00, 0x0f7f, 0xac02, 0xff5a, 0xff7f, 0xd4aa, 0x6a00, 0xd4ac, 0xd06c, 0xf895, 0xaaaa, 0xaaaa, 0x01bc, 0x0202, 0x0202, 0xccbc, 0xcccc, 0x008a, 0x8080, 0x9999, 0x8999, 0x9cba, 0x9005, 0x4954, 0x2448, 0x8a66, 0x2849, 0x336a, 0x0073, 0xc8a9, 0x1000, 0xaaaa, 0xfbac, 0x6403, 0x9966, 0x989a, 0x4465, 0x21a2, 0xbaba, 0x00a9, 0xfefe, 0xcb9a, 0x5404, 0xce55, 0xc2c0, 0x3ecc, 0xf233, 0xcecc, 0xcccc, 0x009a, 0x80a0, 0xacb9, 0x0001, 0xd900, 0xbb7d, 0xaaab, 0x00ac, 0x0288, 0xcccc, 0xcaca, 0x0e65, 0x0810, 0x2810, 0x2040, 0x4081, 0x0291, 0x55d2, 0x55db, 0x105b, 0x8150, 0xd156, 0x9406, 0x1000, 0x4054, 0x0120, 0x0050, 0xaf65, 0x0000, 0x0011, 0x0089, 0xfffe, 0x0087, 0xff00, 0x0198, 0x1542, 0x37af, 0x0068, 0x2020, 0x7777, 0x7777, 0x0068, 0x2020, 0xf698, 0x1001, 0x0008, 0x4108, 0x8868, 0x0098, 0xffbe, 0x8888, 0x8888, 0x00b9, 0x08a0, 0x87b9, 0x0407, 0x4111, 0xff20, 0xff2c, 0xaaaf, 0xffec, 0x3c20, 0xc020, 0x3020, 0x9799, 0x0069, 0xfff0, 0x0456, 0x0588, 0x4408, 0xaf7f, 0x0d06, 0x0d04, 0x6566, 0x0078, 0xfb54, 0x6666, 0x6666, 0x0287, 0xab04, 0x7f5f, 0xd4bf, 0xf678, 0x5400, 0xaa54, 0x6666, 0x0178, 0x49a6, 0x4a16, 0xab78, 0x1001, 0xaa04, 0xaeaa, 0x02bc, 0x5ffe, 0xdb5f, 0xd55e, 0xbcbc, 0x00ab, 0x0400, 0x01bc, 0xffee, 0x2dd5, 0xfabc, 0x0403, 0x1108, 0x8445, 0x4161, 0x1014, 0xccac, 0x00bc, 0x408a, 0x98bc, 0x0007, 0x0401, 0x1159, 0x4449, 0x1118, 0x111d, 0x445d, 0x101c, 0x011d, 0xcc9c, 0x019b, 0x8080, 0x8080, 0xfa9b, 0x0000, 0x0240, 0x019b, 0x0808, 0x0018, 0xfc9b, 0x0001, 0x0004, 0x2080, 0x029b, 0x0848, 0x0828, 0x0808, 0xf9cb, 0x8400, 0x8000, 0xbbbc, 0x019b, 0x0040, 0x0010, 0xfa9b, 0x0001, 0x0004, 0x0020, 0x02cd, 0x4590, 0x422a, 0x0094, 0xfbcd, 0x0000, 0xaa01, 0x02cd, 0xfbee, 0xfde7, 0xa2c6, 0xfbcd, 0x1001, 0x4444, 0xaaaa, 0x01ca, 0xfcf8, 0xfcf8, 0xbdca, 0x5009, 0x5555, 0x5096, 0xff59, 0x9dff, 0x9d69, 0x5d99, 0x9e9a, 0x6d69, 0x9d66, 0x6da9, 0xdddd, 0x02bc, 0x8080, 0x80c0, 0x8080, 0xfbdc, 0x4000, 0x0080, 0xbcdc, 0x00bc, 0x00a8, 0xfdbc, 0x0408, 0x0041, 0x0220, 0x0881, 0x0001, 0x0089, 0x0001, 0x2089, 0x0089, 0x0821, 0xcdcb, 0x03cd, 0xeff6, 0xbfff, 0xefff, 0xdfbf, 0xcccc, 0x1456, 0x0080, 0x2108, 0x0040, 0xa040, 0x4020, 0x4020, 0x5020, 0x0102, 0x0284, 0x0200, 0x0100, 0x8040, 0xc028, 0xa012, 0x4000, 0x0204, 0x0001, 0x5471, 0x5021, 0x50a8, 0x6228, 0x01b9, 0xbf56, 0xbf7a, 0xf69b, 0x0004, 0x5944, 0x5944, 0x5910, 0x4441, 0x1900, 0x009b, 0xa060, 0xbbbb, 0xab9a, 0x00cb, 0x0010, 0xbbbb, 0xcbcb, 0x019b, 0x0444, 0x0404, 0xfc9b, 0x1002, 0x1000, 0x1008, 0x9002, 0xbbcb, 0x0356, 0x2040, 0x4000, 0x4000, 0x2000, 0x0189, 0xd4d0, 0x80b0, 0x9999, 0x8999, 0x009b, 0xf7fe, 0x99bb, 0x99b9, 0x0398, 0x0400, 0x0100, 0x1502, 0x2f03, 0xffab, 0x0000, 0x0400, 0x00cb, 0x0002, 0xfcba, 0x5401, 0x5556, 0x145a, 0xbccb, 0x008b, 0x07f8, 0xbcbb, 0x00ab, 0x0400, 0x8a9b, 0x0402, 0x4850, 0xffff, 0x0020, 0x8abc, 0x400e, 0x1255, 0xa104, 0x0041, 0x8005, 0x2020, 0x2a05, 0xa9aa, 0x14a2, 0x505d, 0x859d, 0x015d, 0x155d, 0x014e, 0x559e, 0xfe4d, 0x79b8, 0x0006, 0xd995, 0xd555, 0xd955, 0xd595, 0xd956, 0xe6a9, 0x0000, 0x009b, 0xa580, 0xfa9b, 0x0000, 0x8404, 0x009b, 0x1000, 0xff9b, 0x4000, 0x0451, 0x00b8, 0xff00, 0xf98b, 0x4005, 0x4022, 0x4000, 0x4208, 0x6020, 0x6a0a, 0x55a2, 0x8888, 0x029b, 0x0408, 0xa810, 0x2801, 0x0089, 0xff00, 0xbbbb, 0xbb9b, 0x04cd, 0xe9fa, 0xd451, 0x0b5f, 0xfbf5, 0xfbfe, 0xbbbb, 0x03ca, 0xfcfe, 0xf8fe, 0x48b0, 0xfcfc, 0xadbc, 0x0406, 0x2480, 0x0400, 0x0480, 0xc480, 0x0400, 0x8400, 0x8680, 0xcddc, 0x00bc, 0x8080, 0xcccc, 0xbacc, 0x02bc, 0x8080, 0x8080, 0x80ff, 0xccbc, 0xcacc, 0x00bc, 0x8200, 0x00ca, 0xfefe, 0xdbca, 0xa404, 0xaa99, 0xd6aa, 0x5e75, 0xf657, 0x5efd, 0x01bc, 0x1010, 0xf010, 0xbbbb, 0x00dc, 0x1512, 0xfbcd, 0x5400, 0xaa55, 0xbbbb, 0x1665, 0xf456, 0xfaaf, 0x82ac, 0xda28, 0x2b9d, 0x575e, 0x041a, 0x1500, 0x7dad, 0x7bfe, 0x01ac, 0xfb54, 0x7b96, 0xb7ad, 0x022d, 0x5e15, 0xfa56, 0x75af, 0x20df, 0xac42, 0x1502, 0x152a, 0x020a, 0x019b, 0x75da, 0xf5eb, 0x99b9, 0x9b99, 0x0089, 0x03fc, 0x869b, 0x4405, 0x5514, 0x55f9, 0x55d9, 0x55f9, 0x74d9, 0xfffb, 0x6978, 0x5000, 0xaeaa, 0xa6b9, 0x4401, 0x1108, 0x5745, 0x01b9, 0xfdb6, 0x1eb7, 0x999b, 0x00b8, 0xff00, 0x87b9, 0x6406, 0x2501, 0x6111, 0x6541, 0x2404, 0x2001, 0xef04, 0x45ff, 0x9bbb, 0x0456, 0x8060, 0x4040, 0x0020, 0xda62, 0x00f2, 0x6798, 0x1001, 0x2000, 0xeaaa, 0x0098, 0x150a, 0x0178, 0x000a, 0xa805, 0x8777, 0x8787, 0x0086, 0xff00, 0xf089, 0x5400, 0xaa55, 0x0000
};

// [D_08C01E6C] D_08C0212C Huffman Window 1
u32 D_08c0212c_window1[] = {
	0x14204c03, 0xd85bc130, 0x29621572, 0x10928499, 0x00343240, 0x81fc2fa0, 0x42cfc001, 0x00368326, 0x07890180, 0xd6d83090, 0xf2f2e4f6, 0xf2703cbf, 0xd71ddfd4, 0xdc2aebf7, 0xb9d7da76, 0xff7fb3fb, 0xad6ceef7, 0xff97fe6d, 0xf766f7bb, 0xf35eeca5, 0xdfefb2dd, 0x7d2b2bb9, 0xd96fb593, 0x007f27f7, 0x40e405ef, 0xc07338f0, 0xff8002c7, 0x2de3fdb3, 0xde85f77b, 0xd0806fbf, 0x8781bf5f, 0x00376631, 0x736e7bc0, 0x2edd9a00, 0x01b100f6, 0xef6eb900, 0x67ffeff5, 0xcb6e496f, 0x7765b2cf, 0x7adbfdfb, 0x7febc9b2, 0xf9b792d3, 0x00000cf6
};

// [D_08C01F18] D_08C0212C Huffman Window 2
u32 D_08c0212c_window2[] = {
	0xff27ff7c, 0xffdbffa4, 0xfdbe3eef, 0x884152af, 0x88e77aab, 0xa9ffe834, 0x244a24a2, 0x52d122a1, 0x51658852, 0x140522a1, 0x50204a52, 0x080a0888, 0x32a944a5, 0x5d7def9a, 0x4955d50a, 0xffdbfaf4, 0xd5dbf36f, 0xeff6024f, 0x1542e5ef, 0x822a8828, 0x5142412b, 0xa1115555, 0x3890855c, 0x00000045
};

// [D_08C01F78] D_08C0212C Huffman
struct Huffman D_08c0212c_huffman[] = {
	/* Data */			D_08c0212c_huffmandata,
	/* Size */			0x1d5b,
	/* Count */			0x54c,
	/* Window 1 */		D_08c0212c_window1,
	/* Window 2 */		D_08c0212c_window2,
};

// [D_08C01F88] D_08C0212C RLE Data
u8 D_08c0212c_rledata[] = {
	0x67, 0x9, 0x21, 0x4, 0x6, 0xd, 0x6, 0x12, 0x47, 0x9, 0x21, 0xa, 0xe, 0x7, 0x11, 0x7, 0x19, 0xf, 0x95, 0x8, 0x24, 0x3, 0xf, 0x6, 0x2, 0x5, 0x1b, 0x3, 0x3, 0x4, 0x6, 0x5, 0x17, 0x3, 0x37, 0x3, 0x1d, 0x6, 0x9a, 0x6, 0xa, 0x3, 0x1d, 0x5, 0xb, 0xa, 0x13, 0x4, 0x12, 0x4, 0x3d, 0xb, 0x4, 0x3, 0x65, 0x4, 0x87, 0x9, 0x6, 0xa, 0x21, 0x5, 0x2, 0x9, 0xe, 0xa, 0x4, 0xb, 0x3, 0x5, 0x9, 0x4, 0x2, 0x7, 0x3c, 0x4, 0x4b, 0x8, 0xa, 0x7, 0x17, 0x9, 0x67, 0x9, 0x57, 0x5, 0x2, 0x4, 0x16, 0x6, 0x59, 0xf, 0x1a, 0x6, 0xb, 0x3, 0x33, 0xd, 0x2d, 0x3, 0x2c, 0x6, 0x44, 0x5, 0x12, 0x5, 0x11, 0x7, 0x2f, 0x9, 0x11, 0x5, 0x24, 0x4, 0x3, 0x4, 0x6, 0x5, 0x31, 0x10, 0x10, 0xb, 0x4, 0x9, 0x17, 0x5, 0x5e, 0x6, 0x2, 0x5, 0x11, 0x8, 0x5d, 0x3, 0x14, 0x3, 0x28, 0x4, 0x67, 0x3, 0xf, 0x3, 0x4, 0x3, 0x59, 0x3, 0x2, 0x3, 0x11, 0xd, 0x83, 0x5, 0x3d, 0xd, 0x19, 0x7, 0x15, 0x3, 0x2, 0x4, 0x9, 0xb, 0x38, 0x6, 0x19, 0x7, 0x81, 0x3, 0xd, 0x3, 0x4, 0x4, 0x2d, 0x7, 0x31, 0x5, 0x5, 0xa, 0x8, 0x3, 0xa, 0x4, 0x85, 0x5, 0x67, 0x3, 0x2, 0xc, 0x2d, 0x3, 0x31, 0xf, 0x19, 0x3, 0x37, 0x3, 0x1a, 0x6, 0x6, 0x3, 0x14, 0x3, 0x16, 0x4, 0x4b, 0x5, 0x14, 0x6, 0x53, 0x3, 0x11, 0x7, 0x5, 0xd, 0x3, 0x3, 0x10, 0xe, 0x33, 0x5, 0x2, 0x7, 0x11, 0x10, 0x73, 0xb, 0x43, 0x3, 0x2, 0x9, 0x14, 0x4, 0x2, 0x4, 0x16, 0xd, 0x71, 0x3, 0xe, 0xf, 0x2, 0xd, 0x31, 0xc, 0x13, 0x10, 0x41, 0x8, 0x2, 0xd, 0x5, 0x3, 0x4d, 0x3, 0x1, 0x7, 0x71, 0x7, 0x12, 0xa, 0x5, 0x3, 0x4e, 0x3, 0x2, 0x3, 0x17, 0x6, 0x2, 0x7, 0x1, 0xa, 0x6, 0x9, 0xa, 0x4, 0x31, 0x7, 0x12, 0x5, 0x2, 0x7, 0x11, 0x9, 0xb, 0x7, 0x35, 0x5, 0x1b, 0xd, 0x17, 0x3, 0x1, 0x7, 0x1, 0x4, 0xc, 0x3, 0x1b, 0x5, 0x5, 0x9, 0xa, 0x8, 0x7, 0x5, 0x2d, 0x3, 0x3, 0x5, 0xd, 0x7, 0x8, 0x7, 0x4a, 0x5, 0xa, 0x4, 0x39, 0x3, 0x37, 0x5, 0x1c, 0x4, 0x29, 0x7, 0x9, 0x7, 0x5, 0x3, 0x2, 0x6, 0x5, 0xb, 0x1, 0x3, 0x6, 0x6, 0x7, 0x9, 0x15, 0x6, 0x38, 0x7, 0x2b, 0x5, 0xb, 0xb, 0x4d, 0x3, 0x49, 0x7, 0x70, 0xb, 0x5c, 0x5, 0x6d, 0x3, 0xd5, 0x3, 0x17, 0x5, 0x3, 0x3, 0x6b, 0x8, 0x8, 0x7, 0xb, 0x4, 0xb, 0x4, 0xb, 0x5, 0xb, 0x5, 0x31, 0x3, 0x1f, 0x8, 0x43, 0x4, 0x3e, 0x8, 0x1f, 0x5, 0x55, 0x7, 0x2b, 0x4, 0x35, 0x4, 0x2, 0x4, 0x1d, 0x7, 0x11, 0xa, 0x5b, 0x3, 0x70, 0x3, 0xb, 0x8, 0x57, 0x8, 0x5c, 0x4, 0x43, 0x8, 0x4, 0x4, 0x11, 0x7, 0x18, 0x0, 0x70, 0x0, 0x0, 0x0
};

// [D_08C0212C] D_08C0212C Graphics
struct CompressedGraphics D_08c0212c = {
	/* Huffman Data */		D_08c0212c_huffman,
	/* RLE Data */			D_08c0212c_rledata,
	/* RLE Size */			0x1a0,
	/* RLE Offset */		0x2400,
	/* Double Compressed */	TRUE,
};

u8 D_08c0213c[4] = {
	0x70, 0x00, 0x90, 0x00
};

enum InstrumentBanksEnum {
	INST_BANK_UNUSED_0,
	INST_BANK_UNUSED_1,
	INST_BANK_UNUSED_2,
	INST_BANK_UNUSED_3,
	INST_BANK_UNUSED_4,
	INST_BANK_54,
	INST_BANK_UNUSED_5,
	INST_BANK_UNUSED_7,
	INST_BANK_UNUSED_8,
	INST_BANK_UNUSED_9,
	INST_BANK_UNUSED_10,
	INST_BANK_UNUSED_11,
	INST_BANK_UNUSED_12,
	INST_BANK_UNUSED_13,
	INST_BANK_UNUSED_14,
	INST_BANK_UNUSED_15,
	INST_BANK_UNUSED_16,
	INST_BANK_55,
	INST_BANK_1,
	INST_BANK_2,
	INST_BANK_3,
	INST_BANK_4,
	INST_BANK_5,
	INST_BANK_6,
	INST_BANK_7,
	INST_BANK_8,
	INST_BANK_9,
	INST_BANK_10,
	INST_BANK_11,
	INST_BANK_12,
	INST_BANK_13,
	INST_BANK_14,
	INST_BANK_15,
	INST_BANK_16,
	INST_BANK_17,
	INST_BANK_UNUSED_35,
	INST_BANK_UNUSED_36,
	INST_BANK_UNUSED_37,
	INST_BANK_UNUSED_38,
	INST_BANK_UNUSED_39,
	INST_BANK_47,
	INST_BANK_49,
	INST_BANK_50,
	INST_BANK_48,
	INST_BANK_UNUSED_44,
	INST_BANK_51,
	INST_BANK_52,
	INST_BANK_53,
	INST_BANK_UNUSED_48,
	INST_BANK_UNUSED_49,
	INST_BANK_18,
	INST_BANK_19,
	INST_BANK_20,
	INST_BANK_21,
	INST_BANK_22,
	INST_BANK_23,
	INST_BANK_24,
	INST_BANK_25,
	INST_BANK_26,
	INST_BANK_27,
	INST_BANK_28,
	INST_BANK_29,
	INST_BANK_30,
	INST_BANK_31,
	INST_BANK_32,
	INST_BANK_33,
	INST_BANK_34,
	INST_BANK_35,
	INST_BANK_36,
	INST_BANK_37,
	INST_BANK_38,
	INST_BANK_39,
	INST_BANK_40,
	INST_BANK_41,
	INST_BANK_42,
	INST_BANK_43,
	INST_BANK_44,
	INST_BANK_45,
	INST_BANK_46,
	INST_BANK_UNUSED_79,
	INST_BANK_UNUSED_80,
	INST_BANK_UNUSED_81,
	INST_BANK_UNUSED_82,
	INST_BANK_UNUSED_83,
	INST_BANK_UNUSED_84,
	INST_BANK_UNUSED_85,
	INST_BANK_UNUSED_86,
	INST_BANK_UNUSED_87,
	INST_BANK_UNUSED_88,
	INST_BANK_UNUSED_89,
	INST_BANK_UNUSED_90,
	INST_BANK_UNUSED_91,
	INST_BANK_UNUSED_92,
	INST_BANK_UNUSED_93,
	INST_BANK_UNUSED_94,
	INST_BANK_UNUSED_95,
	INST_BANK_UNUSED_96,
	INST_BANK_UNUSED_97,
	INST_BANK_UNUSED_98,
	INST_BANK_UNUSED_99,
	INST_BANK_56,
	INST_BANK_57,
	INST_BANK_58,
	INST_BANK_59,
	INST_BANK_60,
	INST_BANK_61,
	INST_BANK_UNUSED_106,
	INST_BANK_UNUSED_107,
	INST_BANK_UNUSED_108,
	INST_BANK_UNUSED_109,
	INST_BANK_62,
	INST_BANK_63
};

const InstrumentBank *const instrumentBanks[] = {
	/* 000 */ NULL,
    /* 001 */ NULL,
    /* 002 */ NULL,
    /* 003 */ NULL,
    /* 004 */ NULL,
    /* 005 */ &instrumentBank54,
    /* 006 */ NULL,
    /* 007 */ NULL,
    /* 008 */ NULL,
    /* 009 */ NULL,
    /* 010 */ NULL,
    /* 011 */ NULL,
    /* 012 */ NULL,
    /* 013 */ NULL,
    /* 014 */ NULL,
    /* 015 */ NULL,
    /* 016 */ NULL,
    /* 017 */ &instrumentBank55,
    /* 018 */ &instrumentBank1,
    /* 019 */ &instrumentBank2,
    /* 020 */ &instrumentBank3,
    /* 021 */ &instrumentBank4,
    /* 022 */ &instrumentBank5,
    /* 023 */ &instrumentBank6,
    /* 024 */ &instrumentBank7,
    /* 025 */ &instrumentBank8,
    /* 026 */ &instrumentBank9,
    /* 027 */ &instrumentBank10,
    /* 028 */ &instrumentBank11,
    /* 029 */ &instrumentBank12,
    /* 030 */ &instrumentBank13,
    /* 031 */ &instrumentBank14,
    /* 032 */ &instrumentBank15,
    /* 033 */ &instrumentBank16,
    /* 034 */ &instrumentBank17,
    /* 035 */ NULL,
    /* 036 */ NULL,
    /* 037 */ NULL,
    /* 038 */ NULL,
    /* 039 */ NULL,
    /* 040 */ &instrumentBank47,
    /* 041 */ &instrumentBank49,
    /* 042 */ &instrumentBank50,
    /* 043 */ &instrumentBank48,
    /* 044 */ NULL,
    /* 045 */ &instrumentBank51,
    /* 046 */ &instrumentBank52,
    /* 047 */ &instrumentBank53,
    /* 048 */ NULL,
    /* 049 */ NULL,
    /* 050 */ &instrumentBank18,
    /* 051 */ &instrumentBank19,
    /* 052 */ &instrumentBank20,
    /* 053 */ &instrumentBank21,
    /* 054 */ &instrumentBank22,
    /* 055 */ &instrumentBank23,
    /* 056 */ &instrumentBank24,
    /* 057 */ &instrumentBank25,
    /* 058 */ &instrumentBank26,
    /* 059 */ &instrumentBank27,
    /* 060 */ &instrumentBank28,
    /* 061 */ &instrumentBank29,
    /* 062 */ &instrumentBank30,
    /* 063 */ &instrumentBank31,
    /* 064 */ &instrumentBank32,
    /* 065 */ &instrumentBank33,
    /* 066 */ &instrumentBank34,
    /* 067 */ &instrumentBank35,
    /* 068 */ &instrumentBank36,
    /* 069 */ &instrumentBank37,
    /* 070 */ &instrumentBank38,
    /* 071 */ &instrumentBank39,
    /* 072 */ &instrumentBank40,
    /* 073 */ &instrumentBank41,
    /* 074 */ &instrumentBank42,
    /* 075 */ &instrumentBank43,
    /* 076 */ &instrumentBank44,
    /* 077 */ &instrumentBank45,
    /* 078 */ &instrumentBank46,
    /* 079 */ NULL,
    /* 080 */ NULL,
    /* 081 */ NULL,
    /* 082 */ NULL,
    /* 083 */ NULL,
    /* 084 */ NULL,
    /* 085 */ NULL,
    /* 086 */ NULL,
    /* 087 */ NULL,
    /* 088 */ NULL,
    /* 089 */ NULL,
    /* 090 */ NULL,
    /* 091 */ NULL,
    /* 092 */ NULL,
    /* 093 */ NULL,
    /* 094 */ NULL,
    /* 095 */ NULL,
    /* 096 */ NULL,
    /* 097 */ NULL,
    /* 098 */ NULL,
    /* 099 */ NULL,
    /* 100 */ &instrumentBank56,
    /* 101 */ &instrumentBank57,
    /* 102 */ &instrumentBank58,
    /* 103 */ &instrumentBank59,
    /* 104 */ &instrumentBank60,
    /* 105 */ &instrumentBank61,
    /* 106 */ NULL,
    /* 107 */ NULL,
    /* 108 */ NULL,
    /* 109 */ NULL,
    /* 110 */ &instrumentBank62,
    /* 111 */ &instrumentBank63,
	(void *)1
};

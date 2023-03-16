#include "level_data.h"

// Level Data
struct LevelData level_data_table[] = {
    /* KARATE_MAN */ {
        /* Entry Scene   */ &D_089cfed0,
        /* Game Name     */ "�J���e��",
        /* Game Desc.    */ "�Ƃ�ł��郂�m��\n"
                            "A�{�^���Ńp���`�I\n"
                            "�悭����Q�[���H\n"
                            "�c�����ˁB",
        /* Icon ID       */ 8,
        /* Icon Style    */ 0,
        /* Epilogue GFX  */ epilogue_karate_man_gfx_tables,
        /* Epilogue Text */ {
            /* TRY AGAIN */ "������ ���邳�B",
            /* OK        */ "�Ƃ肠�����A���͂� �H�ׂƂ����I",
            /* SUPERB    */ "����Ȃ� �u�b�Ƃ΂���������I�I"
        }
    },
    /* KARATE_MAN_2 */ {
        /* Entry Scene   */ &D_089d0728,
        /* Game Name     */ "�J���e�� �Q",
        /* Game Desc.    */ "�Ƃ�ł��郂�m��\n"
                            "A�{�^���Ńp���`�I\n"
                            "�ł��A �X�s�[�h��\n"
                            "�w���e�R�����B",
        /* Icon ID       */ 0,
        /* Icon Style    */ 0,
        /* Epilogue GFX  */ epilogue_karate_man_2_gfx_tables,
        /* Epilogue Text */ {
            /* TRY AGAIN */ "�e���|�� �Ȃ񂾁[�I�I",
            /* OK        */ "�܁A���Ă����B ���͂� �H�ׂ悤�I",
            /* SUPERB    */ "������ ����ȃ��������[�I�I"
        }
    },
    /* CLAPPY_TRIO */ {
        /* Entry Scene   */ &D_089d0188,
        /* Game Name     */ "�p�`�p�`�O�l�O",
        /* Game Desc.    */ "���Ԃɔ�������郈�I\n"
                            "���Ȃ��͂R�ԖځB\n"
                            "�O��2�l���悭���ăl�I",
        /* Icon ID       */ 4,
        /* Icon Style    */ 0,
        /* Epilogue GFX  */ epilogue_clappy_trio_gfx_tables,
        /* Epilogue Text */ {
            /* TRY AGAIN */ "���Ԃ��A����������I",
            /* OK        */ "��������̂� �܂����������ˁB",
            /* SUPERB    */ "���̎O�l�O�A ���s�b�^�����I�I"
        }
    },
    /* SNAPPY_TRIO */ {
        /* Entry Scene   */ &D_089d634c,
        /* Game Name     */ "�o���o���O�l�O",
        /* Game Desc.    */ "���t�������ނ炪\n"
                            "�o�����ƃX�[�c��\n"
                            "���Ă������I\n"
                            "�J�b�R�C�C�I�I",
        /* Icon ID       */ 10,
        /* Icon Style    */ 0,
        /* Epilogue GFX  */ epilogue_snappy_trio_gfx_tables,
        /* Epilogue Text */ {
            /* TRY AGAIN */ "�L���[�I ��邵�ā[�I�I",
            /* OK        */ "���ƃ`���b�g�Ȃ񂾂��ǂˁc",
            /* SUPERB    */ "���s�b�^���Ł[���I �C�F�[�C�I"
        }
    },
    /* POLYRHYTHM */ {
        /* Entry Scene   */ &D_089d0358,
        /* Game Name     */ "�|�����Y��",
        /* Game Desc.    */ "�\\\���{�^���Ƃ`�{�^���̓����������}�X�^�[���I���������J���^�����B���Ԃ�c",
        /* Icon ID       */ 3,
        /* Icon Style    */ 0,
        /* Epilogue GFX  */ epilogue_polyrhythm_gfx_tables,
        /* Epilogue Text */ {
            /* TRY AGAIN */ "�Ԃ����m�A�ʎY�� �����ւ񂾂Ȃ��c",
            /* OK        */ "�ǂ�ǂ� �Ԃ����m�� ���Y���I",
            /* SUPERB    */ "�Ԃ����m�� ���Y���܂��肾�l�I�I"
        }
    },
    /* POLYRHYTHM_2 */ {
        /* Entry Scene   */ &D_089d044c,
        /* Game Name     */ "�|�����Y�� �Q",
        /* Game Desc.    */ "���ꂼ���E�Ɨ��I\n"
                            "�e���|�悭 ���Ȃ���\n"
                            "���b�c �|�����Y���I\n"
                            "�C�F�[�C�I",
        /* Icon ID       */ 51,
        /* Icon Style    */ 0,
        /* Epilogue GFX  */ epilogue_polyrhythm_2_gfx_tables,
        /* Epilogue Text */ {
            /* TRY AGAIN */ "�Ԃ����m�A�����Ɛ��Y���Ȃ���c",
            /* OK        */ "�����Ƃ����� �Ԃ����m�� ���Y���I",
            /* SUPERB    */ "�Ԃ����m�� ����񂶂�񐶎Y�����Ⴄ���I�I"
        }
    },
    /* NIGHT_WALK */ {
        /* Entry Scene   */ &D_089d0540,
        /* Game Name     */ "�i�C�g�E�H�[�N",
        /* Game Desc.    */ "���y�ɂ��킹��\n"
                            "�W�����v���ăl�I\n"
                            "�������� ���܂���\n"
                            "���Ȃ������ցc",
        /* Icon ID       */ 7,
        /* Icon Style    */ 0,
        /* Epilogue GFX  */ epilogue_night_walk_gfx_tables,
        /* Epilogue Text */ {
            /* TRY AGAIN */ "���� ������ ����΂��ăl�c",
            /* OK        */ "���� ������ہA ���̂����ȁB",
            /* SUPERB    */ "�������� ���񂰂����Ă郈�I"
        }
    },
    /* NIGHT_WALK_2 */ {
        /* Entry Scene   */ &D_089d0634,
        /* Game Name     */ "�i�C�g�E�H�[�N �Q",
        /* Game Desc.    */ "���y�ɂ��킹��\n"
                            "�W�����v���ăl�I\n"
                            "�r���r���E�I��\n"
                            "�C�����悤�B",
        /* Icon ID       */ 41,
        /* Icon Style    */ 0,
        /* Epilogue GFX  */ epilogue_night_walk_2_gfx_tables,
        /* Epilogue Text */ {
            /* TRY AGAIN */ "���Ђ�[�I �����ς�����������I�I",
            /* OK        */ "�镗�� �Ƃ��Ă� �����������ȁB",
            /* SUPERB    */ "�������� ���Ƃ����������I"
        }
    },
    /* RHYTHM_TWEEZERS */ {
        /* Entry Scene   */ &D_089d081c,
        /* Game Name     */ "���Y���E��",
        /* Game Desc.    */ "�ǂ�ǂ񐶂��Ă���\n"
                            "�����Ƃ������u�сv�I\n"
                            "�ʂ����Ⴆ�A \n"
                            "�ʂ����Ⴆ�I",
        /* Icon ID       */ 14,
        /* Icon Style    */ 0,
        /* Epilogue GFX  */ epilogue_rhythm_tweezers_gfx_tables,
        /* Epilogue Text */ {
            /* TRY AGAIN */ "���ꂶ�� ������̂� �Ȃ��I",
            /* OK        */ "�Ȃ�� �����̃��T�C�� �т��͂���񂾁H",
            /* SUPERB    */ "�X�b�L�����������I ��C�����܂��I�I"
        }
    },
    /* RHYTHM_TWEEZERS_2 */ {
        /* Entry Scene   */ &D_089d09ec,
        /* Game Name     */ "���Y���E�� �Q",
        /* Game Desc.    */ "�܂����Ă������Ă���\n"
                            "�����Ƃ������u�сv�I\n"
                            "�ʂ����Ⴆ�A \n"
                            "�ʂ����Ⴆ�I",
        /* Icon ID       */ 25,
        /* Icon Style    */ 0,
        /* Epilogue GFX  */ epilogue_rhythm_tweezers_2_gfx_tables,
        /* Epilogue Text */ {
            /* TRY AGAIN */ "�Ȃ�� �т� �͂���񂾁[�I�H",
            /* OK        */ "�������Ȃ�� �����̃��T�C������ �т��c�H",
            /* SUPERB    */ "�X�b�L�����������I ��C�����܂����I�I"
        }
    },
    /* SICK_BEATS */ {
        /* Entry Scene   */ &D_089d0ae0,
        /* Game Name     */ "�o�C�L�� �͂���",
        /* Game Desc.    */ "���肩��̒m�点\n"
                            "�u��ςł��I\n"
                            "�o�C�L�������ł��I�I\n"
                            "�搶�A�������ā`�v",
        /* Icon ID       */ 13,
        /* Icon Style    */ 0,
        /* Epilogue GFX  */ epilogue_sick_beats_gfx_tables,
        /* Epilogue Text */ {
            /* TRY AGAIN */ "�����͎��s���B",
            /* OK        */ "���s�͐����̂��ƃJ���I",
            /* SUPERB    */ "���̂������N�X�����ł����I�I"
        }
    },
    /* BOUNCY_ROAD */ {
        /* Entry Scene   */ &D_089d0da4,
        /* Game Name     */ "�z�b�s���O���[�h",
        /* Game Desc.    */ "�Ƃ�ł���ۂ��ʁB\n"
                            "����̓C�C��ł��B\n"
                            "���Ƃ��Ȃ��Ńl�I",
        /* Icon ID       */ 12,
        /* Icon Style    */ 0,
        /* Epilogue GFX  */ epilogue_bouncy_road_gfx_tables,
        /* Epilogue Text */ {
            /* TRY AGAIN */ "�Ȃ��Ȃ� ���Y�J�V�[�I",
            /* OK        */ "���������� �R���r�l�[�V�����������l�I",
            /* SUPERB    */ "���񂽂� ���񂽂��"
        }
    },
    /* BOUNCY_ROAD_2 */ {
        /* Entry Scene   */ &D_089d0f74,
        /* Game Name     */ "�z�b�s���O���[�h�Q",
        /* Game Desc.    */ "�Ƃ�ł���ۂ��ʁB\n"
                            "�ق�ƂɃC�C���\n"
                            "�Ȃ�ł����`�B\n"
                            "���Ƃ��Ȃ��Ńl�I",
        /* Icon ID       */ 50,
        /* Icon Style    */ 0,
        /* Epilogue GFX  */ epilogue_bouncy_road_2_gfx_tables,
        /* Epilogue Text */ {
            /* TRY AGAIN */ "�G�[���I �����ς��I�I",
            /* OK        */ "�Ȃ��Ȃ� ����΂��Ă����l�I",
            /* SUPERB    */ "�炭���� �炭�����"
        }
    },
    /* NINJA_BODYGUARD */ {
        /* Entry Scene   */ &D_089d1068,
        /* Game Name     */ "�E��",
        /* Game Desc.    */ "�G�P(�Ă����イ)���I\n"
                            "�\\\���{�^����A�{�^���ŉ���(��������)���I\n"
                            "�t�W���}�i�ӂ�����j�I�I",
        /* Icon ID       */ 5,
        /* Icon Style    */ 0,
        /* Epilogue GFX  */ epilogue_ninja_bodyguard_gfx_tables,
        /* Epilogue Text */ {
            /* TRY AGAIN */ "�Q�b�I �g�m�� �������Ă�I�I",
            /* OK        */ "�g�m�I ���߂�Ȃ��`���B",
            /* SUPERB    */ "�A�b�p������ ����ꂿ������[�I�I"
        }
    },
    /* NINJA_REINCARNATE */ {
        /* Entry Scene   */ &D_089d1238,
        /* Game Name     */ "�E�҂̎q��",
        /* Game Desc.    */ "�I���̂���������\n"
                            "����������\n"
                            "����������\n"
                            "�E�҂Ȃ񂾂��B",
        /* Icon ID       */ 38,
        /* Icon Style    */ 0,
        /* Epilogue GFX  */ epilogue_ninja_reincarnate_gfx_tables,
        /* Epilogue Text */ {
            /* TRY AGAIN */ "�܂���ȁI ���܂�������Ȃ̂��[�I�I",
            /* OK        */ "���ށA�X�W�͗ǂ��ȁB����΂�I",
            /* SUPERB    */ "�I�k�V�͋����B���K���Ɂc�I"
        }
    },
    /* SNEAKY_SPIRITS */ {
        /* Entry Scene   */ &D_089d132c,
        /* Game Name     */ "���낢���΂�",
        /* Game Desc.    */ "�������c�� �������\n"
                            "�o�J�ɂ��Ă���I\n"
                            "���L�[�b�I�I\n"
                            "���炵�߂��Ⴈ���I",
        /* Icon ID       */ 1,
        /* Icon Style    */ 0,
        /* Epilogue GFX  */ epilogue_sneaky_spirits_gfx_tables,
        /* Epilogue Text */ {
            /* TRY AGAIN */ "���������c�ɃC�^�Y�����ꂽ�I",
            /* OK        */ "���Ƃ߂��I",
            /* SUPERB    */ "�����ς� ���Ƃ߂��I�I"
        }
    },
    /* SNEAKY_SPIRITS_2 */ {
        /* Entry Scene   */ &D_089d14fc,
        /* Game Name     */ "���낢���΂� �Q",
        /* Game Desc.    */ "�������c�� �������\n"
                            "�i�������Ă���I\n"
                            "���J���J�[�b�I�I\n"
                            "���炵�߂��Ⴈ���I",
        /* Icon ID       */ 53,
        /* Icon Style    */ 0,
        /* Epilogue GFX  */ epilogue_sneaky_spirits_2_gfx_tables,
        /* Epilogue Text */ {
            /* TRY AGAIN */ "����[�I ����ق��������I",
            /* OK        */ "���΂��u�i�A�i���_���`�v",
            /* SUPERB    */ "�݂�ȁA���Ȃ��ăl�I"
        }
    },
    /* SAMURAI_SLICE */ {
        /* Entry Scene   */ &D_089d15f0,
        /* Game Name     */ "��Ўa��",
        /* Game Desc.    */ "�����̂� �����̂�\n"
                            "�z�炪�ʂ�B\n"
                            "���ʂ��� �T�����C�A\n"
                            "�a��̂� ��ƁI",
        /* Icon ID       */ 18,
        /* Icon Style    */ 0,
        /* Epilogue GFX  */ epilogue_samurai_slice_gfx_tables,
        /* Epilogue Text */ {
            /* TRY AGAIN */ "�n���ڂꂵ���܂����I",
            /* OK        */ "����ɐ��i�i���傤����j���ׂ��I",
            /* SUPERB    */ "�؂ꂠ���A �T�C�R�[���I�I"
        }
    },
    /* SPACEBALL */ {
        /* Entry Scene   */ &D_089d18cc,
        /* Game Name     */ "�G�A�[�o�b�^�[",
        /* Game Desc.    */ "�Y�[�������ɂ���ȁI\n"
                            "�S�Ń{�[����łāI\n"
                            "���o�ɗ���ȁI\n"
                            "�ǂ�ƍs���`�I",
        /* Icon ID       */ 9,
        /* Icon Style    */ 0,
        /* Epilogue GFX  */ epilogue_spaceball_gfx_tables,
        /* Epilogue Text */ {
            /* TRY AGAIN */ "����� ��邵�Ă��������B",
            /* OK        */ "����ɏ��ڎw���ė��K���I",
            /* SUPERB    */ "����Ȃ� �������������[�I"
        }
    },
    /* SPACEBALL_2 */ {
        /* Entry Scene   */ &D_089d19c0,
        /* Game Name     */ "�G�A�[�o�b�^�[ �Q",
        /* Game Desc.    */ "�Y�[�������ɂ���ȁI\n"
                            "�S�Ń{�[����łāI\n"
                            "���o�ɗ���ȁI\n"
                            "�܂��ӂ��ȁ`�I",
        /* Icon ID       */ 52,
        /* Icon Style    */ 0,
        /* Epilogue GFX  */ epilogue_spaceball_2_gfx_tables,
        /* Epilogue Text */ {
            /* TRY AGAIN */ "�i�j�X���m�f�X�J�[�I",
            /* OK        */ "����ȂƂ���� �I���Ȃ��I",
            /* SUPERB    */ "�݂�ȁA���Č��ā[�I"
        }
    },
    /* TAP_TRIAL */ {
        /* Entry Scene   */ &D_089d1c6c,
        /* Game Name     */ "�^�b�v�_���Y",
        /* Game Desc.    */ "���Ȃ��͏��̎q�B\n"
                            "�ƂȂ�̃T��������\n"
                            "���킹�ă^�b�v��\n"
                            "�����ރb�X�I",
        /* Icon ID       */ 6,
        /* Icon Style    */ 0,
        /* Epilogue GFX  */ epilogue_tap_trial_gfx_tables,
        /* Epilogue Text */ {
            /* TRY AGAIN */ "���O����B",
            /* OK        */ "������ƁA �w���ȃg�R���������ǃl�I",
            /* SUPERB    */ "�C���� �����A�T�C�R�[�I�I"
        }
    },
    /* TAP_TRIAL_2 */ {
        /* Entry Scene   */ &D_089d6258,
        /* Game Name     */ "�X�[�p�[�^�b�v",
        /* Game Desc.    */ "�T�����p���[�A�b�v�I\n"
                            "���Ȃ��� ������\n"
                            "���Ă����邩�I�H\n"
                            "�܂���ȁ`�I",
        /* Icon ID       */ 11,
        /* Icon Style    */ 0,
        /* Epilogue GFX  */ epilogue_tap_trial_2_gfx_tables,
        /* Epilogue Text */ {
            /* TRY AGAIN */ "�K�[���I",
            /* OK        */ "���`��c ������ �������J���W�c",
            /* SUPERB    */ "���̋C�����A�Ƃ܂�ȁ[���I"
        }
    },
    /* MARCHING_ORDERS */ {
        /* Entry Scene   */ &D_089d21dc,
        /* Game Name     */ "�}�[�`��",
        /* Game Desc.    */ "�s�i������̂��B\n"
                            "�����Ăȍs���̓`�[�����_���ɂ���I\n"
                            "����΂肽�܂��B",
        /* Icon ID       */ 21,
        /* Icon Style    */ 0,
        /* Epilogue GFX  */ epilogue_marching_orders_gfx_tables,
        /* Epilogue Text */ {
            /* TRY AGAIN */ "�킟���I�����Ă��ڂ肳�ꂽ�I",
            /* OK        */ "�����̔C���́A���������Ł[����",
            /* SUPERB    */ "�F���l�̋~�o�A�听���I�I"
        }
    },
    /* MARCHING_ORDERS_2 */ {
        /* Entry Scene   */ &D_089d23ac,
        /* Game Name     */ "�}�[�`�� �Q",
        /* Game Desc.    */ "�s�i������̂��B\n"
                            "����ǂ̂� �������\n"
                            "�e�N�j�J�����I\n"
                            "����΂肽�܂��B",
        /* Icon ID       */ 20,
        /* Icon Style    */ 0,
        /* Epilogue GFX  */ epilogue_marching_orders_2_gfx_tables,
        /* Epilogue Text */ {
            /* TRY AGAIN */ "���A����ł́A�C�J���I���`�ށc",
            /* OK        */ "�����I �����ƃJ�b�R�悭���ǂ�Ȃ���΁I",
            /* SUPERB    */ "���ق��тɁA����Ȃ̂�����Ă��܂����I�I"
        }
    },
    /* WIZARDS_WALTZ */ {
        /* Entry Scene   */ &D_089d24a0,
        /* Game Name     */ "�܂ق�����",
        /* Game Desc.    */ "���Ȃ��͂܂ق��g���B\n"
                            "���݂�������\n"
                            "�����傤�����ɉԂ�\n"
                            "�v���[���g���悤�B",
        /* Icon ID       */ 23,
        /* Icon Style    */ 0,
        /* Epilogue GFX  */ epilogue_wizards_waltz_gfx_tables,
        /* Epilogue Text */ {
            /* TRY AGAIN */ "����Ȃ̃��_�`�A ���킢���`�I",
            /* OK        */ "������ �Ԃ������� ���ꂵ���ȁ`�B",
            /* SUPERB    */ "��[���A �킽�� ���� ���݂����Ȃ����I"
        }
    },
    /* BUNNY_HOP */ {
        /* Entry Scene   */ &D_089d2858,
        /* Game Name     */ "�E�T�M�Ƃ�",
        /* Game Desc.    */ "�W�����v�����ӂ�\n"
                            "�����E�T�M����B\n"
                            "�r�[�g�ɂ̂���\n"
                            "�C���킽�낤�I",
        /* Icon ID       */ 24,
        /* Icon Style    */ 0,
        /* Epilogue GFX  */ epilogue_bunny_hop_gfx_tables,
        /* Epilogue Text */ {
            /* TRY AGAIN */ "���ɋA�肽�`���I",
            /* OK        */ "���n�͎��s����������c",
            /* SUPERB    */ "�܂�_�I�I"
        }
    },
    /* FIREWORKS */ {
        /* Entry Scene   */ &D_089d2a34,
        /* Game Name     */ "�ԉ�",
        /* Game Desc.    */ "�ĂƂ����΂��A\n"
                            "����ωԉ΂��ȁH\n"
                            "�F�����₩��\n"
                            "�ł��グ�悤�I",
        /* Icon ID       */ 26,
        /* Icon Style    */ 0,
        /* Epilogue GFX  */ epilogue_fireworks_gfx_tables,
        /* Epilogue Text */ {
            /* TRY AGAIN */ "�Q�z�Q�z�b�c ���s�B",
            /* OK        */ "�Ȃ��Ȃ��̃f�L�����I",
            /* SUPERB    */ "�ԉ΂̂��ƂȂ�I���ɂ܂�����I�I"
        }
    },
    /* POWER_CALLIGRAPHY */ {
        /* Entry Scene   */ &D_089d2dd4,
        /* Game Name     */ "���Y�����K��",
        /* Game Desc.    */ "�M���g���ē��{���\n"
                            "�����܂��B\n"
                            "���Ȃ�������̂�\n"
                            "�I�C�V�C�Ƃ������B",
        /* Icon ID       */ 28,
        /* Icon Style    */ 0,
        /* Epilogue GFX  */ epilogue_power_calligraphy_gfx_tables,
        /* Epilogue Text */ {
            /* TRY AGAIN */ "�Ӂ`�c  �A�J����B",
            /* OK        */ "���K���� �����Ɗy�������I",
            /* SUPERB    */ "���K������ �m���m�����l�I�I"
        }
    },
    /* POWER_CALLIGRAPHY_2 */ {
        /* Entry Scene   */ &D_089d2dd4,
        /* Game Name     */ "���Y�����K�� �Q",
        /* Game Desc.    */ "�M���g���ē��{���\n"
                            "�����܂��B\n"
                            "���Ȃ�������̂�\n"
                            "�I�C�V�C�Ƃ������B",
        /* Icon ID       */ 28,
        /* Icon Style    */ 0,
        /* Epilogue GFX  */ epilogue_power_calligraphy_2_gfx_tables,
        /* Epilogue Text */ {
            /* TRY AGAIN */ "�Ӂ`�c  �A�J����B",
            /* OK        */ "���K���� �����Ɗy�������I",
            /* SUPERB    */ "���K������ �m���m�����l�I�I"
        }
    },
    /* TOSS_BOYS */ {
        /* Entry Scene   */ &D_089d3268,
        /* Game Name     */ "�g�X�{�[�C�Y",
        /* Game Desc.    */ "�Ȃ��悵�R�l�g�A\n"
                            "�������������Ȃ���\n"
                            "�����y�����g�X��\n"
                            "���K���Ă܂��B",
        /* Icon ID       */ 30,
        /* Icon Style    */ 0,
        /* Epilogue GFX  */ epilogue_toss_boys_gfx_tables,
        /* Epilogue Text */ {
            /* TRY AGAIN */ "�_���_�����@�`�I",
            /* OK        */ "�܂��܂������Ə��ɂł���͂��I",
            /* SUPERB    */ "�ڕW�́A �g�X���E�I�茠 �D�����[�I�I"
        }
    },
    /* TOSS_BOYS_2 */ {
        /* Entry Scene   */ &D_089d3174,
        /* Game Name     */ "�g�X�{�[�C�Y �Q",
        /* Game Desc.    */ "�Ȃ��悵�R�l�g�A\n"
                            "�������������Ȃ���\n"
                            "�����y�����g�X��\n"
                            "���K���Ă܂��B",
        /* Icon ID       */ 29,
        /* Icon Style    */ 0,
        /* Epilogue GFX  */ epilogue_toss_boys_2_gfx_tables,
        /* Epilogue Text */ {
            /* TRY AGAIN */ "�{���{�����@�`�I",
            /* OK        */ "����ȂƂ���� �I���Ȃ��I",
            /* SUPERB    */ "�ŋ������o�[�̂��񂶂傤���[�I�I"
        }
    },
    /* RAT_RACE */ {
        /* Entry Scene   */ &D_089d2c04,
        /* Game Name     */ "�������� ���b�g",
        /* Game Desc.    */ "���Ȃ��̓l�Y�~�B\n"
                            "��X�L�ȃ`�[�Y��\n"
                            "�߂�����\n"
                            "�X�g�b�v���S�[�I�I",
        /* Icon ID       */ 31,
        /* Icon Style    */ 0,
        /* Epilogue GFX  */ epilogue_rat_race_gfx_tables,
        /* Epilogue Text */ {
            /* TRY AGAIN */ "�`�[�Y �H�ׂ�����`�c",
            /* OK        */ "�`�[�Y ���������ˁB",
            /* SUPERB    */ "�݂�ȁA �悩�����l�I"
        }
    },
    /* TRAM_PAULINE */ {
        /* Entry Scene   */ &D_089d35fc,
        /* Game Name     */ "�g�����ƃ|����",
        /* Game Desc.    */ "�����˃g�����A\n"
                            "�����ă|������\n"
                            "�A�N���o�e�B�b�N�V���[���͂��܂郈�I",
        /* Icon ID       */ 32,
        /* Icon Style    */ 0,
        /* Epilogue GFX  */ epilogue_tram_pauline_gfx_tables,
        /* Epilogue Text */ {
            /* TRY AGAIN */ "�債���ς����`�I�I",
            /* OK        */ "���イ�ƃn���p�ł����c",
            /* SUPERB    */ "�R���r�l�[�V���� �o�b�`�V�I�I"
        }
    },
    /* SHOWTIME */ {
        /* Entry Scene   */ &D_089d3c48,
        /* Game Name     */ "�V���[�^�C��",
        /* Game Desc.    */ "�y���M���N������\n"
                            "�V���[�^�C����\n"
                            "�͂��܂郈�I\n"
                            "��[����[���I",
        /* Icon ID       */ 36,
        /* Icon Style    */ 0,
        /* Epilogue GFX  */ epilogue_showtime_gfx_tables,
        /* Epilogue Text */ {
            /* TRY AGAIN */ "���q����A �������Ă��l�c",
            /* OK        */ "�{�N���� ����Ȃ��񂶂�Ȃ��͂��c",
            /* SUPERB    */ "������I�I ���q���� �y����ł��ꂽ�[�I�I"
        }
    },
    /* SPACE_DANCE */ {
        /* Entry Scene   */ &D_089d3e18,
        /* Game Name     */ "�X�y�[�X�_���X",
        /* Game Desc.    */ "�����͖��d�͂̉F���B\n"
                            "�ł��A ���ǂ낤���I\n"
                            "���b�c�X�y�[�X�_���X�I",
        /* Icon ID       */ 40,
        /* Icon Style    */ 0,
        /* Epilogue GFX  */ epilogue_space_dance_gfx_tables,
        /* Epilogue Text */ {
            /* TRY AGAIN */ "�u�A �u���b�N�z�[�����[�I�I",
            /* OK        */ "���̐��̂悤�� �����₫�����ȁc",
            /* SUPERB    */ "�{�N������ �X�y�[�X�X�[�p�[�X�^�[�I�I"
        }
    },
    /* COSMIC_DANCE */ {
        /* Entry Scene   */ &D_089d68f8,
        /* Game Name     */ "�R�X���_���X",
        /* Game Desc.    */ "�F�����\\\����\n"
                            "�_���T�[�����I\n"
                            "�L����������\n"
                            "�����Â��ł��I�I",
        /* Icon ID       */ 16,
        /* Icon Style    */ 0,
        /* Epilogue GFX  */ epilogue_cosmic_dance_gfx_tables,
        /* Epilogue Text */ {
            /* TRY AGAIN */ "���A����肾�[�I�I",
            /* OK        */ "���Ȃ��������� ����Ȃ��̂Ȃ́H",
            /* SUPERB    */ "�{�N������ �X�[�p�[�R�X���X�^�[���I�I"
        }
    },
    /* RAP_MEN */ {
        /* Entry Scene   */ &D_089d40d0,
        /* Game Name     */ "���b�v����",
        /* Game Desc.    */ "�N�[���Ȃӂ���g��\n"
                            "����Ă����I\n"
                            "�A�c�����b�v��\n"
                            "��R�[�t�������I",
        /* Icon ID       */ 42,
        /* Icon Style    */ 0,
        /* Epilogue GFX  */ epilogue_rap_men_gfx_tables,
        /* Epilogue Text */ {
            /* TRY AGAIN */ "�I�������A �_�T�����c",
            /* OK        */ "�`�F�b�B �Ȃ� ���q��邢�킟�B",
            /* SUPERB    */ "���ꂩ��� ��낵�� ���̂�܂����[�I�I"
        }
    },
    /* RAP_WOMEN */ {
        /* Entry Scene   */ &D_089d6440,
        /* Game Name     */ "���b�v�E�C����",
        /* Game Desc.    */ "���̃��b�v������\n"
                            "���C�o�����o�ꂾ�I\n"
                            "�L���[�g�ȃ{�C�X��\n"
                            "���� ���������I",
        /* Icon ID       */ 15,
        /* Icon Style    */ 0,
        /* Epilogue GFX  */ epilogue_rap_women_gfx_tables,
        /* Epilogue Text */ {
            /* TRY AGAIN */ "����Ȃ� ���Ⴄ�킟�c",
            /* OK        */ "�Ȃ� ������� �C�}�C�`�����c�I",
            /* SUPERB    */ "�������� �R���R���A������[�I�I�C�F�[�C�I"
        }
    },
    /* QUIZ_SHOW */ {
        /* Entry Scene   */ &D_089d42a0,
        /* Game Name     */ "�N�C�Y",
        /* Game Desc.    */ "�i��҂́A\n"
                            "�u���������񐔁v��\n"
                            "���Ă�J���^����\n"
                            "�N�C�Y�ł��B",
        /* Icon ID       */ 43,
        /* Icon Style    */ 0,
        /* Epilogue GFX  */ epilogue_quiz_show_gfx_tables,
        /* Epilogue Text */ {
            /* TRY AGAIN */ "�܁A ����Ȃ��̂��B",
            /* OK        */ "����Ɍ����� �׋��A�׋��cZzz",
            /* SUPERB    */ "���E���s �������������I"
        }
    },
    /* BON_ODORI */ {
        /* Entry Scene   */ &D_089d6088,
        /* Game Name     */ "�U���ڂ񂨂ǂ�",
        /* Game Desc.    */ "�ڂ񂨂ǂ��\n"
                            "������ ���킹��\n"
                            "�p���b�� ���\n"
                            "�������܂��傤�B",
        /* Icon ID       */ 35,
        /* Icon Style    */ 0,
        /* Epilogue GFX  */ epilogue_bon_odori_gfx_tables,
        /* Epilogue Text */ {
            /* TRY AGAIN */ "���ނ���c",
            /* OK        */ "���񂱂��ԉ΂��āA���Ȃ��ˁB",
            /* SUPERB    */ "���[�A�y���������I"
        }
    },
    /* BON_DANCE */ {
        /* Entry Scene   */ &D_089d7314,
        /* Game Name     */ "�{���_���X",
        /* Game Desc.    */ "���ꂪ ���܂ǂ���\n"
                            "�ڂ񂨂ǂ�I\n"
                            "�m���m�������I\n"
                            "�C�F�[�C�I",
        /* Icon ID       */ 17,
        /* Icon Style    */ 0,
        /* Epilogue GFX  */ epilogue_bon_dance_gfx_tables,
        /* Epilogue Text */ {
            /* TRY AGAIN */ "��������c",
            /* OK        */ "���[��A�J���ӂ��Ă���������B",
            /* SUPERB    */ "�{���_���X���� �������y������l�[�I"
        }
    },
    /* REMIX_1 */ {
        /* Entry Scene   */ &D_089d2764,
        /* Game Name     */ "���~�b�N�X �P",
        /* Game Desc.    */ "�L�~�̎��͂�\n"
                            "�����Ă݂Ă݂�H\n"
                            "����܂ł̌o����\n"
                            "���m���������`�I",
        /* Icon ID       */ 22,
        /* Icon Style    */ 1,
        /* Epilogue GFX  */ epilogue_remix1_gfx_tables,
        /* Epilogue Text */ {
            /* TRY AGAIN */ "����̃f�L �F �L�̂���N���X",
            /* OK        */ "����̃f�L �F ���H�N���X",
            /* SUPERB    */ "����̃f�L �F �Ȃ�ƁA �f�B�i�[�N���X�I�I"
        }
    },
    /* REMIX_2 */ {
        /* Entry Scene   */ &D_089d6628,
        /* Game Name     */ "���~�b�N�X �Q",
        /* Game Desc.    */ "�L�~�̎��͂�\n"
                            "�����Ă݂Ă݂�H\n"
                            "����܂ł̌o����\n"
                            "���m���������`�I",
        /* Icon ID       */ 27,
        /* Icon Style    */ 1,
        /* Epilogue GFX  */ epilogue_remix2_gfx_tables,
        /* Epilogue Text */ {
            /* TRY AGAIN */ "����̔M�C �F �ЂƂ�ŗ��K���x��",
            /* OK        */ "����̔M�C �F �y�����L���b�`�{�[�����x��",
            /* SUPERB    */ "����̔M�C �F ���������x���I�I"
        }
    },
    /* REMIX_3 */ {
        /* Entry Scene   */ &D_089d7038,
        /* Game Name     */ "���~�b�N�X �R",
        /* Game Desc.    */ "�L�~�̎��͂�\n"
                            "�����Ă݂Ă݂�H\n"
                            "����܂ł̌o����\n"
                            "���m���������`�I",
        /* Icon ID       */ 33,
        /* Icon Style    */ 1,
        /* Epilogue GFX  */ epilogue_remix3_gfx_tables,
        /* Epilogue Text */ {
            /* TRY AGAIN */ "����̃��u �F �u���[�N���n�[�g�����c",
            /* OK        */ "����̃��u �F �Ƃ��Ă��t�����h���[�Ȋ�����",
            /* SUPERB    */ "����̃��u �F ���u���u�Ł[���I�I"
        }
    },
    /* REMIX_4 */ {
        /* Entry Scene   */ &D_089d671c,
        /* Game Name     */ "���~�b�N�X �S",
        /* Game Desc.    */ "�L�~�̎��͂�\n"
                            "�����Ă݂Ă݂�H\n"
                            "����܂ł̌o����\n"
                            "���m���������`�I",
        /* Icon ID       */ 34,
        /* Icon Style    */ 1,
        /* Epilogue GFX  */ epilogue_remix4_gfx_tables,
        /* Epilogue Text */ {
            /* TRY AGAIN */ "����̓V�C �F �J",
            /* OK        */ "����̓V�C �F ������",
            /* SUPERB    */ "����̓V�C �F �n�b�s�[�Ȑ���I�I"
        }
    },
    /* REMIX_5 */ {
        /* Entry Scene   */ &D_089d7220,
        /* Game Name     */ "���~�b�N�X �T",
        /* Game Desc.    */ "�L�~�̎��͂�\n"
                            "�����Ă݂Ă݂�H\n"
                            "����܂ł̌o����\n"
                            "���m���������`�I",
        /* Icon ID       */ 39,
        /* Icon Style    */ 1,
        /* Epilogue GFX  */ epilogue_remix5_gfx_tables,
        /* Epilogue Text */ {
            /* TRY AGAIN */ "����̂ӂ��� �F �W���}����Ă��܂����I",
            /* OK        */ "����̂ӂ��� �F ���̂����A�`���b�g�s�������c",
            /* SUPERB    */ "����̂ӂ��� �F �K���ɂȂ�܂�����"
        }
    },
    /* REMIX_6 */ {
        /* Entry Scene   */ &D_089d7408,
        /* Game Name     */ "���~�b�N�X �U",
        /* Game Desc.    */ "�L�~�̎��͂�\n"
                            "�����Ă݂Ă݂�H\n"
                            "����܂ł̌o����\n"
                            "���m���������`�I",
        /* Icon ID       */ 2,
        /* Icon Style    */ 1,
        /* Epilogue GFX  */ epilogue_remix6_gfx_tables,
        /* Epilogue Text */ {
            /* TRY AGAIN */ "����̓��e �F ��₳�݂����J���W",
            /* OK        */ "����̓��e �F �ӊO�ȃJ���W",
            /* SUPERB    */ "����̓��e �F �A���r���[�o�{�[�ȃJ���W�I�I"
        }
    },
    /* REMIX_7 */ {
        /* Entry Scene   */ &D_089d712c,
        /* Game Name     */ "���~�b�N�X �V",
        /* Game Desc.    */ "�L�~�̎��͂�\n"
                            "�����Ă݂Ă݂�H\n"
                            "����܂ł̌o����\n"
                            "���m���������`�I",
        /* Icon ID       */ 19,
        /* Icon Style    */ 1,
        /* Epilogue GFX  */ epilogue_remix7_gfx_tables,
        /* Epilogue Text */ {
            /* TRY AGAIN */ "����̂��傤��イ �F �������",
            /* OK        */ "����̂��傤��イ �F �ق̂ڂ�",
            /* SUPERB    */ "����̂��傤��イ �F �y�������`�I�I"
        }
    },
    /* REMIX_8 */ {
        /* Entry Scene   */ &D_089d74fc,
        /* Game Name     */ "���~�b�N�X �W",
        /* Game Desc.    */ "�L�~�̎��͂�\n"
                            "�����Ă݂Ă݂�H\n"
                            "����܂ł̌o����\n"
                            "���m���������`�I",
        /* Icon ID       */ 37,
        /* Icon Style    */ 1,
        /* Epilogue GFX  */ epilogue_remix8_gfx_tables,
        /* Epilogue Text */ {
            /* TRY AGAIN */ "����̃h���C�u �F ������c",
            /* OK        */ "����̃h���C�u �F �܂��܂�������Ȃ�",
            /* SUPERB    */ "����̃h���C�u �F �Ƃ��Ă��u���I�I"
        }
    },
    /* CAFE */ {
        /* Entry Scene   */ &D_089cda0c,
        /* Game Name     */ "�i���J�E���Z��",
        /* Game Desc.    */ "�ŋ߂̒��q �ǂ��H\n"
                            "�Ȃɂ��C�ɂȂ��\n"
                            "�����ő��k��\n"
                            "���Ă݂悤�B",
        /* Icon ID       */ 45,
        /* Icon Style    */ 2,
        /* Epilogue GFX  */ epilogue_cafe_gfx_tables,
        /* Epilogue Text */ {
            /* TRY AGAIN */ NULL,
            /* OK        */ NULL,
            /* SUPERB    */ NULL
        }
    },
    /* RHYTHM_TOYS */ {
        /* Entry Scene   */ &D_089dd86c,
        /* Game Name     */ "��������",
        /* Game Desc.    */ "���_���� ���߂�\n"
                            "���̂ł邨�������\n"
                            "������ł݂ăl�I\n"
                            "���������郈�B",
        /* Icon ID       */ 46,
        /* Icon Style    */ 2,
        /* Epilogue GFX  */ epilogue_toys_menu_gfx_tables,
        /* Epilogue Text */ {
            /* TRY AGAIN */ NULL,
            /* OK        */ NULL,
            /* SUPERB    */ NULL
        }
    },
    /* ENDLESS_GAMES */ {
        /* Entry Scene   */ &D_089dd8ac,
        /* Game Name     */ "�Q�[��",
        /* Game Desc.    */ "���_���� ���߂�\n"
                            "�Ƃ��ׂȃQ�[����\n"
                            "���킵�Ă݂ăl�I\n"
                            "���������郈�B",
        /* Icon ID       */ 47,
        /* Icon Style    */ 2,
        /* Epilogue GFX  */ epilogue_endless_menu_gfx_tables,
        /* Epilogue Text */ {
            /* TRY AGAIN */ NULL,
            /* OK        */ NULL,
            /* SUPERB    */ NULL
        }
    },
    /* DRUM_LESSONS */ {
        /* Entry Scene   */ &D_089dd8ec,
        /* Game Name     */ "�h�������b�X��",
        /* Game Desc.    */ "���_���� ���߂�\n"
                            "�h�����̃��b�X����\n"
                            "�����Ă݂悤�B\n"
                            "���ɂȂ��ăl�I",
        /* Icon ID       */ 48,
        /* Icon Style    */ 2,
        /* Epilogue GFX  */ epilogue_lessons_menu_gfx_tables,
        /* Epilogue Text */ {
            /* TRY AGAIN */ NULL,
            /* OK        */ NULL,
            /* SUPERB    */ NULL
        }
    },
    /* STAFF_CREDIT */ {
        /* Entry Scene   */ &D_089d6e5c,
        /* Game Name     */ "�X�^�b�t",
        /* Game Desc.    */ "���� �悩������\n"
                            "���Ă݂ăl�B\n"
                            "���̃Q�[����\n"
                            "�X�^�b�t�����ł��B",
        /* Icon ID       */ 49,
        /* Icon Style    */ 2,
        /* Epilogue GFX  */ epilogue_staff_credit_gfx_tables,
        /* Epilogue Text */ {
            /* TRY AGAIN */ NULL,
            /* OK        */ NULL,
            /* SUPERB    */ NULL
        }
    },
    /* LIVE_MENU */ {
        /* Entry Scene   */ &D_089d6f44,
        /* Game Name     */ "���C�u",
        /* Game Desc.    */ "���C�u�ɏo�����I\n"
                            "�L�~�̃��Y������\n"
                            "�悢�Ǝv������\n"
                            "�ǂ������C�y�Ɂ`",
        /* Icon ID       */ 44,
        /* Icon Style    */ 2,
        /* Epilogue GFX  */ epilogue_concert_hall_gfx_tables,
        /* Epilogue Text */ {
            /* TRY AGAIN */ "���΂����u�܂����A����΂�Ȃ�I�v",
            /* OK        */ "�I�[�i�[�u�L�~�A�Ȃ��Ȃ� �X�W���郈�v",
            /* SUPERB    */ "�v���f���[�T�[�u�����ŁA�K���o���Ă݂Ȃ��H�v"
        }
    }
};

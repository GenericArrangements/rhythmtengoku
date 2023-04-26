#include "global.h"
#include "studio.h"
#include "graphics/studio/studio_graphics.h"


// For readability.
#define gStudioInfo ((struct StudioSceneInfo *)D_030046a4)


/* STUDIO */


// [D_089d83d0] Drum Kit Names
const char *studio_drum_kit_names[] = {
    /* DEFAULT */ "�t�c�[�ȃh����",
    /* DRY     */ "�h���C�ȃh����",
    /* POWER   */ "�p���[�ȃh����",
    /* TECHNO  */ "�e�N�m�ȃh����",
    /* MATTE   */ "�}�b�g�ȃh����",
    /* ASIAN   */ "�A�W�A�ȃh����",
    /* LIGHT   */ "���C�g�ȃh����",
    /* HEAVY   */ "�n�[�h�ȃh����",
    /* HIHAT   */ "�n�b�g�e�N�ȃh����",
    /* HEEL1   */ "�J�J�g�e�N�ȃh���� �P",
    /* HEEL2   */ "�J�J�g�e�N�ȃh���� �Q",
    /* SFX     */ "�����ȃh����",
    /* TAP     */ "�^�b�v�ȃh����",
    /* AIR     */ "���؂�h����",
    /* SAMURAI */ "���ނ炢�h����"
};


// Drum Kit List - Get String
const char *studio_drum_list_get_string(s32 line) {
    char numString[0x10];

    if ((line < 0) || (line >= 15)) {
        return NULL;
    }

    strint(numString, line + 1);
    memcpy(gStudioInfo->string, "", 1);
    strcat(gStudioInfo->string, "\0048.");

    if (D_030046a8->data.drumKitsUnlocked[line]) {
        strcat(gStudioInfo->string, studio_drum_kit_names[line]);
    } else {
        strcat(gStudioInfo->string, "�H�H�H");
    }

    return gStudioInfo->string;
}


// Drum Kit List - On Scroll
void studio_drum_list_on_scroll(s32 arg, u32 current, u32 previous) {
    play_sound_in_player(MUSIC_PLAYER_2, &s_menu_cursor1_seqData);
}


// Drum Kit List - Init.
void studio_drum_list_init(s32 state, s32 selItem, s32 selLine) {
    gStudioInfo->drumListState = state;
    gStudioInfo->drumList = create_new_listbox(
            get_current_mem_id(), 10, 128, 22, 0, 1, 3, 358, 16, 0x8800, 16,
            selItem, 15, anim_studio_selection_item, 2, 6, clamp_int32(selLine, 0, 5),
            studio_drum_list_get_string, NULL);
    listbox_run_func_on_scroll(gStudioInfo->drumList, studio_drum_list_on_scroll, 0);
}


// Drum Kit List - Exit to Listening Scene
void studio_drum_list_exit_to_drumming(void) {
    const struct Scene *scene;
    s32 songItem, drumItem;

    func_080006f0(get_scene_trans_target(&scene_studio), 1);

    songItem = listbox_get_sel_item(gStudioInfo->songList);
    drumItem = listbox_get_sel_item(gStudioInfo->drumList);
    studio_set_current_kit(drumItem);
    set_next_scene(&D_089d49d4);
    set_scene_trans_target(&D_089d49d4, &scene_studio);
    set_scene_trans_var(&D_089d49d4, songItem);
    func_0801d968(script_scene_studio_exit);
    gStudioInfo->scriptIsReady = FALSE;
}


// Drum Kit List - End of Memory Warning
void studio_drum_list_warning_memory_result(s32 event, s32 arg) {
    if (event == 1) {
        studio_drum_list_exit_to_drumming();
    } else {
        gStudioInfo->sceneState = STUDIO_STATE_NAV_DRUM_LIST;
    }
}


// [D_089d840c] Memory Warnings
const char *studio_mem_warnings_text[] = {
    /* NO WARNING NEEDED ------------------------------ */
        NULL,
    /* NO MEMORY -------------------------------------- */
        // [ You can't save any more data. ]
        // [ Perform without saving? ]
        "�������������ς��ł��B\n"
        "�f�[�^�͎c��Ȃ����ǉ��t����H",
    /* TOO MANY REPLAYS ------------------------------- */
        // [ You can only save 10 recitals. ]
        // [ Perform without saving? ]
        "���t�f�[�^��10�R�����c���܂���B\n"
        "�f�[�^�͎c��Ȃ����ǉ��t����H",
    /* LOW MEMORY ------------------------------------- */
        // [ There's not much memory left. ]
        // [ Perform anyway? ]
        "�����������Ȃ��Ȃ��Ă��Ă܂��B\n"
        "���̂܂܉��t����H"
    /* ------------------------------------------------ */
};


// Drum Kit List - Update
void studio_drum_list_update(void) {
    struct TengokuSaveData *saveBuffer;
    u32 remaining, warningReason;
    u32 event = STUDIO_LIST_EV_NONE;

    if (!listbox_is_busy(gStudioInfo->drumList) && studio_scene_can_receive_inputs()) {
        if (D_03004afc & A_BUTTON) {
            event = STUDIO_LIST_EV_CONFIRM;
        }
        if (D_03004afc & B_BUTTON) {
            event = STUDIO_LIST_EV_CANCEL;
        }
        if (D_030053b8 & DPAD_UP) {
            event = STUDIO_LIST_EV_SCROLL_UP;
        }
        if (D_030053b8 & DPAD_DOWN) {
            event = STUDIO_LIST_EV_SCROLL_DOWN;
        }
    }

    switch(event) {
        case STUDIO_LIST_EV_CONFIRM:
            if (!D_030046a8->data.drumKitsUnlocked[listbox_get_sel_item(gStudioInfo->drumList)]) {
                play_sound_in_player(MUSIC_PLAYER_2, &s_menu_error_seqData);
            } else {
                remaining = get_remaining_replay_data_space(&D_030046a8->data.drumReplaysAlloc) >> 8;
                if (remaining != 0) {
                    if (get_available_replay_data_id(&D_030046a8->data.drumReplaysAlloc) < 0) {
                        warningReason = 2;
                    } else if (remaining < 10) {
                        warningReason = 3;
                    } else {
                        warningReason = 0;
                    }
                } else {
                    warningReason = 1;
                }
                if (warningReason != 0) {
                    studio_warning_create(STUDIO_WARNING_OPT_Y, studio_mem_warnings_text[warningReason], studio_drum_list_warning_memory_result, 0, &s_menu_se24_seqData);
                    play_sound_in_player(MUSIC_PLAYER_2, &s_menu_kettei2_seqData);
                } else {
                    studio_drum_list_exit_to_drumming();
                    play_sound_in_player(MUSIC_PLAYER_2, &s_menu_se24_seqData);
                }
            }
            break;

        case STUDIO_LIST_EV_CANCEL:
            play_sound_in_player(MUSIC_PLAYER_2, &s_menu_cancel3_seqData);
            listbox_hide_sel_sprite(gStudioInfo->drumList);
            listbox_show_sel_sprite(gStudioInfo->optionList);
            studio_scene_pan_to_menu(STUDIO_MENU_OPTION_LIST);
            gStudioInfo->sceneState = STUDIO_STATE_NAV_OPTION_LIST;
            break;

        case STUDIO_LIST_EV_SCROLL_UP:
            listbox_scroll_up(gStudioInfo->drumList);
            break;

        case STUDIO_LIST_EV_SCROLL_DOWN:
            listbox_scroll_down(gStudioInfo->drumList);
            break;
    }
}
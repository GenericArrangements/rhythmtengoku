.section .rodata
.syntax unified

.include "include/gba.inc"
.include "include/bs_riq.inc"
.include "include/bs/drum_studio.inc"

load_drum_studio_labels


/* Drum Studio - Ending Scripts */


@ Fade Out
@ glabel D_089e2ad4
    fade_music_out TO_TEMPO, 24
    fade_screen_out 12, BLACK
    rest 24
    stop


@ Show Replay Options, then Fade Out
@ glabel D_089e2b04
    dms_event01 0
    dms_show_save_options 0
    set_tempo 140
    rest 12
    goto D_089e2ad4

.end

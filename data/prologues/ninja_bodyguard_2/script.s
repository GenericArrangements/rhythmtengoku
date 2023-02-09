.section .rodata
.syntax unified

.include "include/gba.inc"
.include "include/bs_riq.inc"


@ Prologue (Ninja Bodyguard 2) - Script
glabel D_089ed334
    set_game_fade_in_time 8
    load_game D_089ed314, 0
    run stop_all_soundplayers, 0
    play_sfx s_jingle_iai_seqData
    rest 24
    rest 24
    run func_080474ac, 1
    rest 24
    rest 24
    run func_080474ac, 0
    rest 24
    rest 24
    rest 24
    run func_08006d80, 0
    rest 24
    set_game_fade_in_time 16
    return

.end

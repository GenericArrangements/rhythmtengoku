.section .rodata
.syntax unified

.include "include/gba.inc"
.include "include/bs_riq.inc"
.include "include/bs/drum_studio.inc"

load_drum_studio_labels


/* Script Data - Drum Lesson (Long 1) */


@ Dialogue
glabel D_080639f8
.ascii "よくきいてマネしてね。\n"
.ascii "好きなタイミングでどうぞ。\n"
.ascii "演奏を止めると、\n"
.asciz "お手本がきけるヨ！"
.balign 4, 0


@ Pattern
glabel D_08063a50
    spawn_cue CUE_SNARE_L
    rest 24
    spawn_cue CUE_KICK_R
    rest 12
    spawn_cue CUE_KICK_R
    rest 12
    spawn_cue CUE_SNARE_L
    rest 24
    spawn_cue CUE_KICK_R
    rest 24
    spawn_cue CUE_SNARE_L
    rest 24
    spawn_cue CUE_KICK_R
    rest 12
    spawn_cue CUE_KICK_R
    rest 12
    spawn_cue CUE_SNARE_L
    rest 24
    return


@ Pattern Start
glabel D_08063b34
    spawn_cue CUE_KICK_R
    rest 21
    return


@ Dialogue
glabel D_08063b58
.ascii "\n"
.ascii "シンバルでキッチリと\n"
.ascii "まとめておこうネ！\n"
.asciz "これは、できるよネ？\n"
.balign 4, 0


@ Pattern Start
glabel D_08063b98
    spawn_cue CUE_KICK_R
    spawn_cue CUE_CRASH
    rest 21
    return


@ Dialogue
glabel D_08063bc8
.ascii "\n"
.ascii "チョットだけ　かえるヨ！\n"
.asciz "わかるかな？\n"
.balign 4, 0


@ Pattern
glabel D_08063bf0
    spawn_cue CUE_SNARE_L
    rest 24
    spawn_cue CUE_KICK_R
    rest 12
    spawn_cue CUE_KICK_R
    rest 12
    spawn_cue CUE_SNARE_L
    rest 24
    spawn_cue CUE_KICK_R
    rest 24
    spawn_cue CUE_SNARE_L
    rest 24
    spawn_cue CUE_SNARE_L
    rest 12
    spawn_cue CUE_KICK_R
    rest 12
    spawn_cue CUE_SNARE_L
    rest 24
    return


@ Dialogue
glabel D_08063cd4
.ascii "\n"
.ascii "１つだけ、音がふえるヨ！\n"
.ascii "わりとカンタンだから\n"
.asciz "がんばってネ！\n"
.balign 4, 0


@ Pattern
glabel D_08063d14
    spawn_cue CUE_SNARE_L
    rest 24
    spawn_cue CUE_KICK_R
    rest 12
    spawn_cue CUE_KICK_R
    rest 12
    spawn_cue CUE_SNARE_L
    rest 24
    spawn_cue CUE_KICK_R
    rest 24
    spawn_cue CUE_SNARE_L
    rest 24
    spawn_cue CUE_SNARE_R
    rest 6
    spawn_cue CUE_SNARE_L
    rest 6
    spawn_cue CUE_KICK_R
    rest 12
    spawn_cue CUE_SNARE_L
    rest 24
    return

.end

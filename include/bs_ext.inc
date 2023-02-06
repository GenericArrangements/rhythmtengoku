.include "include/bs.inc"

@ Scene-global variable, most commonly set by function calls and read for conditional statements.
.set GLOBAL_VARIABLE, (D_030053c0 + 0x24)
.set FUNCTION_RESULT, GLOBAL_VARIABLE


/* ------------------------ Extension Macros (BeatScript) ------------------------ */


@ [SCENE] Set Tempo
.macro set_tempo bpm
    run =set_beatscript_tempo, \bpm
.endm


@ [SCENE] Set Music Key
.macro set_music_key key
    run =scene_set_music_key, \key
.endm


@ [SCENE] Set Music Volume
.macro set_music_volume volume
    run =scene_set_music_volume, \volume
.endm


@ [SCENE] Get Random Value
.macro get_random range
    run =agb_random, \range
.endm


/* ------------------------ Extension Macros (Rhythm Tengoku) ------------------------ */


@ [RIQ] Enable Pause Menu
.macro enable_pause enable
    run =func_0801db04, \enable
.endm


@ [RIQ] Enable Play Inputs
.macro enable_play_inputs enable
    run =gameplay_enable_inputs, \enable
.endm


@ [RIQ] Print Text (Standard Printer)
.macro print_text_s text
    run =gameplay_display_text, \text
.endm

.macro clear_text_s
    print_text_s 0
.endm


@ [RIQ] Set Results Header Text
.macro set_results_header text
    run =func_08019310, \text
.endm


@ [RIQ] Import Marking Criteria
.macro import_marking_criteria list
    run =func_08019304, \list
.endm


@ [RIQ] Enable Input Assessment
.macro assess_inputs enable
    run =func_08019324, \enable
.endm


@ [RIQ] Set Current Marking Criteria
.macro set_marking_criteria id
    run =gameplay_set_marking_criteria, \id
.endm


@ [RIQ] Forgive Some Misses
.macro forgive_x_misses total
    run =gameplay_set_mercy_count, \total
.endm


@ [RIQ] Start Perfect Campaign
.macro start_perfect_campaign
    run =gameplay_start_perfect_campaign, 0
.endm


@ [RIQ] Enable Input Assessment for Perfect Campaign
.macro assess_perfect_inputs enable
    run =gameplay_check_for_perfect, \enable
.endm


@ [RIQ] Set Current Game Engine
.macro load_game engine, version
    run2 =gameplay_set_current_engine, \engine, \version
.endm


@ [RIQ] Run Game Engine Event
.macro game_event engine, event, args
    run =gameplay_set_engine_event_param, \args
    run2 =gameplay_run_engine_event, \event, \engine
.endm


@ [RIQ] Run Game Common Event
.macro common_event event, arg
    run2 =gameplay_run_common_event, \event, \arg
.endm

@ Play Beat Animations
.macro beat_anim
    common_event 0, 0
.endm

@ Print Special Text/Sprite
.macro print_text_f arg
    common_event 1, \arg
.endm

.macro clear_text_f
    print_text_f 0
.endm

@ Initialise Tutorial
.macro init_tutorial skipDest
    common_event 2, \skipDest
.endm

.macro stop_tutorial
    init_tutorial 0
.endm


@ [RIQ] Spawn Cue
.macro spawn_cue cueID
    run =gameplay_spawn_cue, \cueID
.endm


@ [RIQ] Set Screen Fade-In Time
.macro set_game_fade_in_time time
    run =gameplay_set_screen_fade_in_time, \time
.endm

/* ------------------------ BeatScript Labels: Mannequin Factory ------------------------ */


@ Load Data
.macro load_mannequin_labels
    @ Game Events
    .set EVENT_00,      0x00
    .set EVENT_01,      0x01
    .set EVENT_02,      0x02
    .set EVENT_03,      0x03
    .set EVENT_04,      0x04
    .set EVENT_05,      0x05
    .set EVENT_06,      0x06
    .set STUB_EVENT,    0x07

    @ Cues
    .set CUE_00,    0x00
    .set CUE_01,    0x01
    .set CUE_02,    0x02
    .set CUE_03,    0x03
    .set CUE_04,    0x04
    .set CUE_05,    0x05
.endm


@ Load Game: Mannequin Factory
.macro load_mannequin_factory
    load_mannequin_labels
    load_game =MANNEQUIN_FACTORY, 0
.endm

@ Load Game: Mannequin Factory (Tutorial)
.macro load_mannequin_factory_tutorial
    load_mannequin_labels
    load_game =MANNEQUIN_FACTORY, 1
.endm


/* ---------------- Game Engine Events ---------------- */


@ Run Game Event
.macro mannequin_event event, args
    game_event =MANNEQUIN_FACTORY, \event, \args
.endm


@ [Event 0x00] ?
.macro mq_event00 args
    mannequin_event 0x00, \args
.endm

@ [Event 0x01] ?
.macro mq_event01 args
    mannequin_event 0x01, \args
.endm

@ [Event 0x02] ?
.macro mq_event02 args
    mannequin_event 0x02, \args
.endm

@ [Event 0x03] ?
.macro mq_event03 args
    mannequin_event 0x03, \args
.endm

@ [Event 0x04] ?
.macro mq_event04 args
    mannequin_event 0x04, \args
.endm

@ [Event 0x05] ?
.macro mq_event05 args
    mannequin_event 0x05, \args
.endm

@ [Event 0x06] ?
.macro mq_event06 args
    mannequin_event 0x06, \args
.endm

@ [Event 0x07] Nothing
.macro mq_stub_event noArgs
    mannequin_event 0x07, \noArgs
.endm
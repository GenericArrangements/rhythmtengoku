asm(".syntax unified \n\
\n\
.balign 4, 0 \n\
\n\
thumb_func_start func_080242cc \n\
/* 080242cc */ PUSH {LR} \n\
/* 080242ce */ MOVS R0, 0x0 @ Set R0 to 0x0 \n\
/* 080242d0 */ BL func_0800c604 \n\
/* 080242d4 */ BL get_current_mem_id \n\
/* 080242d8 */ LSLS R0, R0, 0x10 \n\
/* 080242da */ LSRS R0, R0, 0x10 \n\
/* 080242dc */ LDR R1, =drum_intro_buffered_textures \n\
/* 080242de */ BL func_080087b4 \n\
/* 080242e2 */ LDR R1, =func_0802428c \n\
/* 080242e4 */ MOVS R2, 0x0 @ Set R2 to 0x0 \n\
/* 080242e6 */ BL task_run_after \n\
/* 080242ea */ POP {R0} \n\
/* 080242ec */ BX R0 \n\
\n\
.ltorg \n\
.balign 4, 0 \n\
.syntax divided");

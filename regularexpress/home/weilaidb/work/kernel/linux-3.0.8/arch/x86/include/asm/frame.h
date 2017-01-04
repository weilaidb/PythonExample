.macro FRAME
pushl_cfi %ebp
CFI_REL_OFFSET ebp,0
movl %esp,%ebp
.endm
.macro ENDFRAME
popl_cfi %ebp
CFI_RESTORE ebp
.endm
.macro FRAME
.endm
.macro ENDFRAME
.endm

.macro LOCK_PREFIX
1:	lock
.section .smp_locks,"a"
.balign 4
.long 1b - .
.previous
.endm
.macro LOCK_PREFIX
.endm
.macro altinstruction_entry orig alt feature orig_len alt_len
.align 8
.quad \orig
.quad \alt
.word \feature
.byte \orig_len
.byte \alt_len
.endm

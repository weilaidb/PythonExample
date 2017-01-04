#define __M68KNOMMU_ENTRY_H
#define ALLOWINT (~0x700)
#define SWITCH_STACK_SIZE (6*4+4)
.globl sw_usp
.globl sw_ksp
.macro SAVE_ALL
move	#0x2700,%sr
btst	#5,%sp@(2)
bnes	6f
movel	%sp,sw_usp
addql	#8,sw_usp
movel	sw_ksp,%sp
subql	#8,%sp
clrl	%sp@-
movel	%d0,%sp@-
movel	%d0,%sp@-
lea	%sp@(-32),%sp
moveml	%d1-%d5/%a0-%a2,%sp@
movel	sw_usp,%a0
movel	%a0@-,%sp@(PT_OFF_PC)
movel	%a0@-,%sp@(PT_OFF_FORMATVEC)
bra	7f
6:
clrl	%sp@-
movel	%d0,%sp@-
movel	%d0,%sp@-
lea	%sp@(-32),%sp
moveml	%d1-%d5/%a0-%a2,%sp@
7:
.endm
.macro RESTORE_USER
move	#0x2700,%sr
movel	sw_usp,%a0
movel	%sp@(PT_OFF_PC),%a0@-
movel	%sp@(PT_OFF_FORMATVEC),%a0@-
moveml	%sp@,%d1-%d5/%a0-%a2
lea	%sp@(32),%sp
movel	%sp@+,%d0
addql	#4,%sp
addl	%sp@+,%sp
addql	#8,%sp
movel	%sp,sw_ksp
subql	#8,sw_usp
movel	sw_usp,%sp
rte
.endm
.macro RDUSP
movel	sw_usp,%a2
.endm
.macro WRUSP
movel	%a0,sw_usp
.endm
.macro SAVE_ALL
move	#0x2700,%sr
clrl	%sp@-
movel	%d0,%sp@-
movel	%d0,%sp@-
lea	%sp@(-32),%sp
moveml	%d1-%d5/%a0-%a2,%sp@
.endm
.macro RESTORE_USER
moveml	%sp@,%d1-%d5/%a0-%a2
lea	%sp@(32),%sp
movel	%sp@+,%d0
addql	#4,%sp
addl	%sp@+,%sp
rte
.endm
.macro RDUSP
.word	0x4e6a
.endm
.macro WRUSP
.word	0x4e60
.endm
.macro SAVE_SWITCH_STACK
lea	%sp@(-24),%sp
moveml	%a3-%a6/%d6-%d7,%sp@
.endm
.macro RESTORE_SWITCH_STACK
moveml	%sp@,%a3-%a6/%d6-%d7
lea	%sp@(24),%sp
.endm
.macro SAVE_ALL
clrl	%sp@-
movel	%d0,%sp@-
movel	%d0,%sp@-
moveml	%d1-%d5/%a0-%a2,%sp@-
.endm
.macro RESTORE_ALL
moveml	%sp@+,%a0-%a2/%d1-%d5
movel	%sp@+,%d0
addql	#4,%sp
addl	%sp@+,%sp
rte
.endm
.macro SAVE_SWITCH_STACK
moveml	%a3-%a6/%d6-%d7,%sp@-
.endm
.macro RESTORE_SWITCH_STACK
moveml	%sp@+,%a3-%a6/%d6-%d7
.endm

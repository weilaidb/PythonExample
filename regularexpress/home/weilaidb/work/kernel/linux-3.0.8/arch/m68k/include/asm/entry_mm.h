#define __M68K_ENTRY_H
#if defined(MACH_ATARI_ONLY)
#define ALLOWINT	(~0x400)
#define	MAX_NOINT_IPL	3
#define ALLOWINT	(~0x700)
#define	MAX_NOINT_IPL	0
#define curptr a2
LFLUSH_I_AND_D = 0x00000808
#define SAVE_ALL_INT save_all_int
#define SAVE_ALL_SYS save_all_sys
#define RESTORE_ALL restore_all
.macro	save_all_int
clrl	%sp@-		| stk_adj
pea	-1:w		| orig d0
movel	%d0,%sp@-	| d0
moveml	%d1-%d5/%a0-%a1/%curptr,%sp@-
.endm
.macro	save_all_sys
clrl	%sp@-		| stk_adj
movel	%d0,%sp@-	| orig d0
movel	%d0,%sp@-	| d0
moveml	%d1-%d5/%a0-%a1/%curptr,%sp@-
.endm
.macro	restore_all
moveml	%sp@+,%a0-%a1/%curptr/%d1-%d5
movel	%sp@+,%d0
addql	#4,%sp		| orig d0
addl	%sp@+,%sp	| stk adj
rte
.endm
#define SWITCH_STACK_SIZE (6*4+4)
#define SAVE_SWITCH_STACK save_switch_stack
#define RESTORE_SWITCH_STACK restore_switch_stack
#define GET_CURRENT(tmp) get_current tmp
.macro	save_switch_stack
moveml	%a3-%a6/%d6-%d7,%sp@-
.endm
.macro	restore_switch_stack
moveml	%sp@+,%a3-%a6/%d6-%d7
.endm
.macro	get_current reg=%d0
movel	%sp,\reg
andw	#-THREAD_SIZE,\reg
movel	\reg,%curptr
movel	%curptr@,%curptr
.endm
#define STR(X) STR1(X)
#define STR1(X) #X
#define SAVE_ALL_INT				\
"clrl	%%sp@-;"	\
"pea	-1:w;"	\
"movel	%%d0,%%sp@-;"		\
"moveml	%%d1-%%d5/%%a0-%%a2,%%sp@-"
#define GET_CURRENT(tmp) \
"movel	%%sp,"#tmp"\n\t" \
"andw	#-"STR(THREAD_SIZE)","#tmp"\n\t" \
"movel	"#tmp",%%a2\n\t" \
"movel	%%a2@,%%a2"

#define _ASM_REGISTERS_H
#define __OFFSET(X,N)	((X)+(N)*4)
#define __OFFSETC(X,N)	xxxxxxxxxxxxxxxxxxxxxxxx
#define __OFFSET(X,N)	((X)+(N)*4)
#define __OFFSETC(X,N)	((X)+(N))
struct pt_regs  __attribute__((aligned(8)));
#define REG__STATUS_STEP	0x00000001
#define REG__STATUS_STEPPED	0x00000002
#define REG__STATUS_BROKE	0x00000004
#define REG__STATUS_SYSC_ENTRY	0x40000000
#define REG__STATUS_SYSC_EXIT	0x80000000
#define REG_GR(R)	__OFFSET(REG_GR0, (R))
#define REG_SP		REG_GR(1)
#define REG_FP		REG_GR(2)
#define REG_PREV_FRAME	REG_GR(28)
#define REG_CURR_TASK	REG_GR(29)
struct frv_debug_regs
__attribute__((aligned(8)));
struct user_int_regs
;
struct user_fpmedia_regs
;
struct user_context
__attribute__((aligned(8)));
struct frv_frame0  __attribute__((aligned(32)));
#define __INT_GR(R)		__OFFSET(__INT_GR0,		(R))
#define __FPMEDIA_FR(R)		__OFFSET(__FPMEDIA_FR0,		(R))
#define __FPMEDIA_FNER(R)	__OFFSET(__FPMEDIA_FNER0,	(R))
#define __FPMEDIA_MSR(R)	__OFFSET(__FPMEDIA_MSR0,	(R))
#define __FPMEDIA_ACC(R)	__OFFSET(__FPMEDIA_ACC0,	(R))
#define __FPMEDIA_ACCG(R)	__OFFSETC(__FPMEDIA_ACCG0,	(R))
#define __FPMEDIA_FSR(R)	__OFFSET(__FPMEDIA_FSR0,	(R))
#define __THREAD_GR(R)		__OFFSET(__THREAD_GR16,		(R) - 16)

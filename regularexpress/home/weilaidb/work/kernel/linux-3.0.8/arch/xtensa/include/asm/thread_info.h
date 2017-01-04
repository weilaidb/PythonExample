#define _XTENSA_THREAD_INFO_H
# include <asm/processor.h>
#if XTENSA_HAVE_COPROCESSORS
typedef struct xtregs_coprocessor  xtregs_coprocessor_t;
struct thread_info ;
#define TI_TASK		 0x00000000
#define TI_EXEC_DOMAIN	 0x00000004
#define TI_FLAGS	 0x00000008
#define TI_STATUS	 0x0000000C
#define TI_CPU		 0x00000010
#define TI_PRE_COUNT	 0x00000014
#define TI_ADDR_LIMIT	 0x00000018
#define TI_RESTART_BLOCK 0x000001C
#define PREEMPT_ACTIVE		0x10000000
#define INIT_THREAD_INFO(tsk)			\
#define init_thread_info	(init_thread_union.thread_info)
#define init_stack		(init_thread_union.stack)
static inline struct thread_info *current_thread_info(void)
#define GET_THREAD_INFO(reg,sp) \
extui reg, sp, 0, 13; \
xor   reg, sp, reg
#define TIF_SYSCALL_TRACE	0
#define TIF_SIGPENDING		1
#define TIF_NEED_RESCHED	2
#define TIF_SINGLESTEP		3
#define TIF_IRET		4
#define TIF_MEMDIE		5
#define TIF_RESTORE_SIGMASK	6
#define TIF_POLLING_NRFLAG	16
#define TIF_FREEZE		17
#define _TIF_SYSCALL_TRACE	(1<<TIF_SYSCALL_TRACE)
#define _TIF_SIGPENDING		(1<<TIF_SIGPENDING)
#define _TIF_NEED_RESCHED	(1<<TIF_NEED_RESCHED)
#define _TIF_SINGLESTEP		(1<<TIF_SINGLESTEP)
#define _TIF_IRET		(1<<TIF_IRET)
#define _TIF_POLLING_NRFLAG	(1<<TIF_POLLING_NRFLAG)
#define _TIF_RESTORE_SIGMASK	(1<<TIF_RESTORE_SIGMASK)
#define _TIF_FREEZE		(1<<TIF_FREEZE)
#define _TIF_WORK_MASK		0x0000FFFE
#define _TIF_ALLWORK_MASK	0x0000FFFF
#define TS_USEDFPU		0x0001
#define THREAD_SIZE 8192
#define THREAD_SIZE_ORDER 1

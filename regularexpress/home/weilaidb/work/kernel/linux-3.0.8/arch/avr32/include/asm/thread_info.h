#define __ASM_AVR32_THREAD_INFO_H
#define THREAD_SIZE_ORDER	1
#define THREAD_SIZE		(PAGE_SIZE << THREAD_SIZE_ORDER)
struct task_struct;
struct exec_domain;
struct thread_info ;
#define INIT_THREAD_INFO(tsk)						\
#define init_thread_info	(init_thread_union.thread_info)
#define init_stack		(init_thread_union.stack)
static inline struct thread_info *current_thread_info(void)
#define get_thread_info(ti) get_task_struct((ti)->task)
#define put_thread_info(ti) put_task_struct((ti)->task)
#define PREEMPT_ACTIVE		0x40000000
#define TIF_SYSCALL_TRACE       0
#define TIF_SIGPENDING          1
#define TIF_NEED_RESCHED        2
#define TIF_POLLING_NRFLAG      3
#define TIF_BREAKPOINT		4
#define TIF_SINGLE_STEP		5
#define TIF_MEMDIE		6
#define TIF_RESTORE_SIGMASK	7
#define TIF_CPU_GOING_TO_SLEEP	8
#define TIF_NOTIFY_RESUME	9
#define TIF_FREEZE		29
#define TIF_DEBUG		30
#define TIF_USERSPACE		31
#define _TIF_SYSCALL_TRACE	(1 << TIF_SYSCALL_TRACE)
#define _TIF_SIGPENDING		(1 << TIF_SIGPENDING)
#define _TIF_NEED_RESCHED	(1 << TIF_NEED_RESCHED)
#define _TIF_POLLING_NRFLAG	(1 << TIF_POLLING_NRFLAG)
#define _TIF_SINGLE_STEP	(1 << TIF_SINGLE_STEP)
#define _TIF_MEMDIE		(1 << TIF_MEMDIE)
#define _TIF_RESTORE_SIGMASK	(1 << TIF_RESTORE_SIGMASK)
#define _TIF_CPU_GOING_TO_SLEEP (1 << TIF_CPU_GOING_TO_SLEEP)
#define _TIF_NOTIFY_RESUME	(1 << TIF_NOTIFY_RESUME)
#define _TIF_FREEZE		(1 << TIF_FREEZE)
#define _TIF_WORK_MASK				\
((1 << TIF_SIGPENDING)			\
| _TIF_NOTIFY_RESUME			\
| (1 << TIF_NEED_RESCHED)		\
| (1 << TIF_POLLING_NRFLAG)		\
| (1 << TIF_BREAKPOINT)		\
| (1 << TIF_RESTORE_SIGMASK))
#define _TIF_ALLWORK_MASK	(_TIF_WORK_MASK | (1 << TIF_SYSCALL_TRACE) | \
_TIF_NOTIFY_RESUME)
#define _TIF_DBGWORK_MASK	(_TIF_WORK_MASK & ~(1 << TIF_BREAKPOINT))

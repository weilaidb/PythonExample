#define _ALPHA_THREAD_INFO_H
struct thread_info ;
#define INIT_THREAD_INFO(tsk)			\
#define init_thread_info	(init_thread_union.thread_info)
#define init_stack		(init_thread_union.stack)
register struct thread_info *__current_thread_info __asm__("$8");
#define current_thread_info()  __current_thread_info
#define THREAD_SIZE_ORDER 1
#define THREAD_SIZE (2*PAGE_SIZE)
#define PREEMPT_ACTIVE		0x40000000
#define TIF_SYSCALL_TRACE	0
#define TIF_NOTIFY_RESUME	1
#define TIF_SIGPENDING		2
#define TIF_NEED_RESCHED	3
#define TIF_POLLING_NRFLAG	8
#define TIF_DIE_IF_KERNEL	9
#define TIF_UAC_NOPRINT		10
#define TIF_UAC_NOFIX		11
#define TIF_UAC_SIGBUS		12
#define TIF_MEMDIE		13
#define TIF_RESTORE_SIGMASK	14
#define TIF_FREEZE		16
#define _TIF_SYSCALL_TRACE	(1<<TIF_SYSCALL_TRACE)
#define _TIF_SIGPENDING		(1<<TIF_SIGPENDING)
#define _TIF_NEED_RESCHED	(1<<TIF_NEED_RESCHED)
#define _TIF_POLLING_NRFLAG	(1<<TIF_POLLING_NRFLAG)
#define _TIF_RESTORE_SIGMASK	(1<<TIF_RESTORE_SIGMASK)
#define _TIF_NOTIFY_RESUME	(1<<TIF_NOTIFY_RESUME)
#define _TIF_FREEZE		(1<<TIF_FREEZE)
#define _TIF_WORK_MASK		(_TIF_SIGPENDING | _TIF_NEED_RESCHED | \
_TIF_NOTIFY_RESUME)
#define _TIF_ALLWORK_MASK	(_TIF_WORK_MASK		\
| _TIF_SYSCALL_TRACE)
#define ALPHA_UAC_SHIFT		10
#define ALPHA_UAC_MASK		(1 << TIF_UAC_NOPRINT | 1 << TIF_UAC_NOFIX | \
1 << TIF_UAC_SIGBUS)
#define SET_UNALIGN_CTL(task,value)	()
#define GET_UNALIGN_CTL(task,value)	()

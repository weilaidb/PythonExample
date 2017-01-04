#define _ASM_THREAD_INFO_H
#define ALIGN_PAGE_MASK		0xffffe000
#define THREAD_SIZE_ORDER	1
#define THREAD_SIZE		8192
#define STACK_WARN		(THREAD_SIZE/8)
typedef unsigned long mm_segment_t;
struct thread_info ;
#define INIT_THREAD_INFO(tsk)			\
#define init_thread_info	(init_thread_union.thread_info)
#define init_stack		(init_thread_union.stack)
__attribute_const__
static inline struct thread_info *current_thread_info(void)
#define TI_TASK		0
#define TI_EXECDOMAIN	4
#define TI_FLAGS	8
#define TI_CPU		12
#define TI_PREEMPT	16
#define	PREEMPT_ACTIVE	0x4000000
#define TIF_SYSCALL_TRACE	0
#define TIF_SIGPENDING		1
#define TIF_NEED_RESCHED	2
#define TIF_POLLING_NRFLAG	3
#define TIF_MEMDIE		4
#define TIF_RESTORE_SIGMASK	5
#define TIF_FREEZE		6
#define TIF_IRQ_SYNC		7
#define TIF_NOTIFY_RESUME	8
#define TIF_SINGLESTEP		9
#define _TIF_SYSCALL_TRACE	(1<<TIF_SYSCALL_TRACE)
#define _TIF_SIGPENDING		(1<<TIF_SIGPENDING)
#define _TIF_NEED_RESCHED	(1<<TIF_NEED_RESCHED)
#define _TIF_POLLING_NRFLAG	(1<<TIF_POLLING_NRFLAG)
#define _TIF_RESTORE_SIGMASK	(1<<TIF_RESTORE_SIGMASK)
#define _TIF_FREEZE		(1<<TIF_FREEZE)
#define _TIF_IRQ_SYNC		(1<<TIF_IRQ_SYNC)
#define _TIF_NOTIFY_RESUME	(1<<TIF_NOTIFY_RESUME)
#define _TIF_SINGLESTEP		(1<<TIF_SINGLESTEP)
#define _TIF_WORK_MASK		0x0000FFFE

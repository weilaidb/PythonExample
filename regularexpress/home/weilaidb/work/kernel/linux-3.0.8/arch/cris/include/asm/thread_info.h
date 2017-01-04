#define _ASM_THREAD_INFO_H
struct thread_info ;
#define PREEMPT_ACTIVE		0x10000000
#define INIT_THREAD_INFO(tsk)				\
#define init_thread_info	(init_thread_union.thread_info)
#define __HAVE_ARCH_THREAD_INFO_ALLOCATOR
#define alloc_thread_info_node(tsk, node)	\
((struct thread_info *) __get_free_pages(GFP_KERNEL, 1))
#define free_thread_info(ti) free_pages((unsigned long) (ti), 1)
#define TIF_SYSCALL_TRACE	0
#define TIF_NOTIFY_RESUME	1
#define TIF_SIGPENDING		2
#define TIF_NEED_RESCHED	3
#define TIF_RESTORE_SIGMASK	9
#define TIF_POLLING_NRFLAG	16
#define TIF_MEMDIE		17
#define TIF_FREEZE		18
#define _TIF_SYSCALL_TRACE	(1<<TIF_SYSCALL_TRACE)
#define _TIF_NOTIFY_RESUME	(1<<TIF_NOTIFY_RESUME)
#define _TIF_SIGPENDING		(1<<TIF_SIGPENDING)
#define _TIF_NEED_RESCHED	(1<<TIF_NEED_RESCHED)
#define _TIF_RESTORE_SIGMASK	(1<<TIF_RESTORE_SIGMASK)
#define _TIF_POLLING_NRFLAG	(1<<TIF_POLLING_NRFLAG)
#define _TIF_FREEZE		(1<<TIF_FREEZE)
#define _TIF_WORK_MASK		0x0000FFFE
#define _TIF_ALLWORK_MASK	0x0000FFFF

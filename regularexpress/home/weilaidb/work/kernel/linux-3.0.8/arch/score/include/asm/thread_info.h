#define _ASM_SCORE_THREAD_INFO_H
#define KU_MASK	0x08
#define KU_USER	0x08
#define KU_KERN	0x00
#define THREAD_SIZE_ORDER 	(1)
#define THREAD_SIZE 		(PAGE_SIZE << THREAD_SIZE_ORDER)
#define THREAD_MASK 		(THREAD_SIZE - _AC(1,UL))
#define __HAVE_ARCH_THREAD_INFO_ALLOCATOR
struct thread_info ;
#define INIT_THREAD_INFO(tsk)			\
#define init_thread_info	(init_thread_union.thread_info)
#define init_stack		(init_thread_union.stack)
register struct thread_info *__current_thread_info __asm__("r28");
#define current_thread_info()	__current_thread_info
#define alloc_thread_info_node(tsk, node) kmalloc_node(THREAD_SIZE, GFP_KERNEL, node)
#define free_thread_info(info) kfree(info)
#define PREEMPT_ACTIVE		0x10000000
#define TIF_SYSCALL_TRACE	0
#define TIF_SIGPENDING		1
#define TIF_NEED_RESCHED	2
#define TIF_NOTIFY_RESUME	5
#define TIF_RESTORE_SIGMASK	9
#define TIF_POLLING_NRFLAG	17
#define TIF_MEMDIE		18
#define _TIF_SYSCALL_TRACE	(1<<TIF_SYSCALL_TRACE)
#define _TIF_SIGPENDING		(1<<TIF_SIGPENDING)
#define _TIF_NEED_RESCHED	(1<<TIF_NEED_RESCHED)
#define _TIF_NOTIFY_RESUME	(1<<TIF_NOTIFY_RESUME)
#define _TIF_RESTORE_SIGMASK	(1<<TIF_RESTORE_SIGMASK)
#define _TIF_POLLING_NRFLAG	(1<<TIF_POLLING_NRFLAG)
#define _TIF_WORK_MASK		(0x0000ffff)

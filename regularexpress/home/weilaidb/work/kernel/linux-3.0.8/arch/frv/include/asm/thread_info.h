#define _ASM_THREAD_INFO_H
#define THREAD_SIZE		8192
#define __HAVE_ARCH_TASK_STRUCT_ALLOCATOR
struct thread_info ;
#define PREEMPT_ACTIVE		0x10000000
#define INIT_THREAD_INFO(tsk)			\
#define init_thread_info	(init_thread_union.thread_info)
#define init_stack		(init_thread_union.stack)
register struct thread_info *__current_thread_info asm("gr15");
#define current_thread_info() ()
#define __HAVE_ARCH_THREAD_INFO_ALLOCATOR
#define alloc_thread_info_node(tsk, node)			\
kzalloc_node(THREAD_SIZE, GFP_KERNEL, node)
#define alloc_thread_info_node(tsk, node)			\
kmalloc_node(THREAD_SIZE, GFP_KERNEL, node)
#define free_thread_info(info)	kfree(info)
#define TIF_SYSCALL_TRACE	0
#define TIF_NOTIFY_RESUME	1
#define TIF_SIGPENDING		2
#define TIF_NEED_RESCHED	3
#define TIF_SINGLESTEP		4
#define TIF_RESTORE_SIGMASK	5
#define TIF_POLLING_NRFLAG	16
#define TIF_MEMDIE		17
#define TIF_FREEZE		18
#define _TIF_SYSCALL_TRACE	(1 << TIF_SYSCALL_TRACE)
#define _TIF_NOTIFY_RESUME	(1 << TIF_NOTIFY_RESUME)
#define _TIF_SIGPENDING		(1 << TIF_SIGPENDING)
#define _TIF_NEED_RESCHED	(1 << TIF_NEED_RESCHED)
#define _TIF_SINGLESTEP		(1 << TIF_SINGLESTEP)
#define _TIF_RESTORE_SIGMASK	(1 << TIF_RESTORE_SIGMASK)
#define _TIF_POLLING_NRFLAG	(1 << TIF_POLLING_NRFLAG)
#define _TIF_FREEZE		(1 << TIF_FREEZE)
#define _TIF_WORK_MASK		0x0000FFFE
#define _TIF_ALLWORK_MASK	0x0000FFFF
#define TS_USEDFPM		0x0001

#define _ASM_THREAD_INFO_H
#define NSWINS 8
struct thread_info ;
#define INIT_THREAD_INFO(tsk)				\
#define init_thread_info	(init_thread_union.thread_info)
#define init_stack		(init_thread_union.stack)
register struct thread_info *current_thread_info_reg asm("g6");
#define current_thread_info()   (current_thread_info_reg)
#define THREAD_INFO_ORDER  1
#define __HAVE_ARCH_THREAD_INFO_ALLOCATOR
BTFIXUPDEF_CALL(struct thread_info *, alloc_thread_info_node, int)
#define alloc_thread_info_node(tsk, node) BTFIXUP_CALL(alloc_thread_info_node)(node)
BTFIXUPDEF_CALL(void, free_thread_info, struct thread_info *)
#define free_thread_info(ti) BTFIXUP_CALL(free_thread_info)(ti)
#define THREAD_SIZE		8192
#define TI_UWINMASK	0x00
#define TI_TASK		0x04
#define TI_EXECDOMAIN	0x08
#define TI_FLAGS	0x0c
#define TI_CPU		0x10
#define TI_PREEMPT	0x14
#define TI_SOFTIRQ	0x18
#define TI_HARDIRQ	0x1c
#define TI_KSP		0x20
#define TI_KPC		0x24
#define TI_KPSR		0x28
#define TI_KWIM		0x2c
#define TI_REG_WINDOW	0x30
#define TI_RWIN_SPTRS	0x230
#define TI_W_SAVED	0x250
#define PREEMPT_ACTIVE		0x4000000
#define TIF_SYSCALL_TRACE	0
#define TIF_NOTIFY_RESUME	1
#define TIF_SIGPENDING		2
#define TIF_NEED_RESCHED	3
#define TIF_RESTORE_SIGMASK	4
#define TIF_USEDFPU		8
#define TIF_POLLING_NRFLAG	9
#define TIF_MEMDIE		10
#define TIF_FREEZE		11
#define _TIF_SYSCALL_TRACE	(1<<TIF_SYSCALL_TRACE)
#define _TIF_NOTIFY_RESUME	(1<<TIF_NOTIFY_RESUME)
#define _TIF_SIGPENDING		(1<<TIF_SIGPENDING)
#define _TIF_NEED_RESCHED	(1<<TIF_NEED_RESCHED)
#define _TIF_RESTORE_SIGMASK	(1<<TIF_RESTORE_SIGMASK)
#define _TIF_USEDFPU		(1<<TIF_USEDFPU)
#define _TIF_POLLING_NRFLAG	(1<<TIF_POLLING_NRFLAG)
#define _TIF_DO_NOTIFY_RESUME_MASK	(_TIF_NOTIFY_RESUME | \
_TIF_SIGPENDING | \
_TIF_RESTORE_SIGMASK)
#define _TIF_FREEZE		(1<<TIF_FREEZE)

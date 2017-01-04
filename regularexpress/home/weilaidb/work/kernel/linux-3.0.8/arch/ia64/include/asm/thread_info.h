#define _ASM_IA64_THREAD_INFO_H
#define PREEMPT_ACTIVE_BIT 30
#define PREEMPT_ACTIVE	(1 << PREEMPT_ACTIVE_BIT)
struct thread_info ;
#define THREAD_SIZE			KERNEL_STACK_SIZE
#define INIT_THREAD_INFO(tsk)			\
#define __HAVE_ARCH_THREAD_INFO_ALLOCATOR
#define current_thread_info()	((struct thread_info *) ((char *) current + IA64_TASK_SIZE))
#define alloc_thread_info_node(tsk, node)	\
((struct thread_info *) ((char *) (tsk) + IA64_TASK_SIZE))
#define task_thread_info(tsk)	((struct thread_info *) ((char *) (tsk) + IA64_TASK_SIZE))
#define current_thread_info()	((struct thread_info *) 0)
#define alloc_thread_info_node(tsk, node)	((struct thread_info *) 0)
#define task_thread_info(tsk)	((struct thread_info *) 0)
#define free_thread_info(ti)
#define task_stack_page(tsk)	((void *)(tsk))
#define __HAVE_THREAD_FUNCTIONS
#define setup_thread_stack(p, org)			\
*task_thread_info(p) = *task_thread_info(org);	\
task_thread_info(p)->ac_stime = 0;		\
task_thread_info(p)->ac_utime = 0;		\
task_thread_info(p)->task = (p);
#define setup_thread_stack(p, org) \
*task_thread_info(p) = *task_thread_info(org); \
task_thread_info(p)->task = (p);
#define end_of_stack(p) (unsigned long *)((void *)(p) + IA64_RBS_OFFSET)
#define __HAVE_ARCH_TASK_STRUCT_ALLOCATOR
#define alloc_task_struct_node(node)						\
()
#define free_task_struct(tsk)	free_pages((unsigned long) (tsk), KERNEL_STACK_SIZE_ORDER)
#define TIF_SIGPENDING		0
#define TIF_NEED_RESCHED	1
#define TIF_SYSCALL_TRACE	2
#define TIF_SYSCALL_AUDIT	3
#define TIF_SINGLESTEP		4
#define TIF_NOTIFY_RESUME	6
#define TIF_POLLING_NRFLAG	16
#define TIF_MEMDIE		17
#define TIF_MCA_INIT		18
#define TIF_DB_DISABLED		19
#define TIF_FREEZE		20
#define TIF_RESTORE_RSE		21
#define _TIF_SYSCALL_TRACE	(1 << TIF_SYSCALL_TRACE)
#define _TIF_SYSCALL_AUDIT	(1 << TIF_SYSCALL_AUDIT)
#define _TIF_SINGLESTEP		(1 << TIF_SINGLESTEP)
#define _TIF_SYSCALL_TRACEAUDIT	(_TIF_SYSCALL_TRACE|_TIF_SYSCALL_AUDIT|_TIF_SINGLESTEP)
#define _TIF_NOTIFY_RESUME	(1 << TIF_NOTIFY_RESUME)
#define _TIF_SIGPENDING		(1 << TIF_SIGPENDING)
#define _TIF_NEED_RESCHED	(1 << TIF_NEED_RESCHED)
#define _TIF_POLLING_NRFLAG	(1 << TIF_POLLING_NRFLAG)
#define _TIF_MCA_INIT		(1 << TIF_MCA_INIT)
#define _TIF_DB_DISABLED	(1 << TIF_DB_DISABLED)
#define _TIF_FREEZE		(1 << TIF_FREEZE)
#define _TIF_RESTORE_RSE	(1 << TIF_RESTORE_RSE)
#define TIF_ALLWORK_MASK	(_TIF_SIGPENDING|_TIF_NOTIFY_RESUME|_TIF_SYSCALL_AUDIT|\
_TIF_NEED_RESCHED|_TIF_SYSCALL_TRACE)
#define TIF_WORK_MASK		(TIF_ALLWORK_MASK&~(_TIF_SYSCALL_TRACE|_TIF_SYSCALL_AUDIT))
#define TS_POLLING		1
#define TS_RESTORE_SIGMASK	2
#define tsk_is_polling(t) (task_thread_info(t)->status & TS_POLLING)
#define HAVE_SET_RESTORE_SIGMASK	1
static inline void set_restore_sigmask(void)

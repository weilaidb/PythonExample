#define __UNICORE_THREAD_INFO_H__
#define THREAD_SIZE_ORDER	1
#define THREAD_SIZE		8192
#define THREAD_START_SP		(THREAD_SIZE - 8)
struct task_struct;
struct exec_domain;
typedef struct  mm_segment_t;
struct cpu_context_save ;
struct thread_info ;
#define INIT_THREAD_INFO(tsk)						\
#define init_thread_info	(init_thread_union.thread_info)
#define init_stack		(init_thread_union.stack)
static inline struct thread_info *current_thread_info(void) __attribute_const__;
static inline struct thread_info *current_thread_info(void)
#define thread_saved_pc(tsk)	\
((unsigned long)(task_thread_info(tsk)->cpu_context.pc))
#define thread_saved_sp(tsk)	\
((unsigned long)(task_thread_info(tsk)->cpu_context.sp))
#define thread_saved_fp(tsk)	\
((unsigned long)(task_thread_info(tsk)->cpu_context.fp))
#define PREEMPT_ACTIVE	0x40000000
#define TIF_SIGPENDING		0
#define TIF_NEED_RESCHED	1
#define TIF_NOTIFY_RESUME	2
#define TIF_SYSCALL_TRACE	8
#define TIF_MEMDIE		18
#define TIF_FREEZE		19
#define TIF_RESTORE_SIGMASK	20
#define _TIF_SIGPENDING		(1 << TIF_SIGPENDING)
#define _TIF_NEED_RESCHED	(1 << TIF_NEED_RESCHED)
#define _TIF_NOTIFY_RESUME	(1 << TIF_NOTIFY_RESUME)
#define _TIF_SYSCALL_TRACE	(1 << TIF_SYSCALL_TRACE)
#define _TIF_FREEZE		(1 << TIF_FREEZE)
#define _TIF_RESTORE_SIGMASK	(1 << TIF_RESTORE_SIGMASK)
#define _TIF_WORK_MASK		0x000000ff

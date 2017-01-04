#define _ASM_M68K_THREAD_INFO_H
#if PAGE_SHIFT < 13
#define THREAD_SIZE	4096
#define THREAD_SIZE	8192
#define THREAD_SIZE	PAGE_SIZE
#define THREAD_SIZE_ORDER	((THREAD_SIZE / PAGE_SIZE) - 1)
struct thread_info ;
#define PREEMPT_ACTIVE		0x4000000
#define INIT_THREAD_INFO(tsk)			\
#define init_stack		(init_thread_union.stack)
#define task_thread_info(tsk)	((struct thread_info *) NULL)
#define task_thread_info(tsk)	((struct thread_info *)((char *)tsk+TASK_TINFO))
#define init_thread_info	(init_task.thread.info)
#define task_stack_page(tsk)	((tsk)->stack)
#define current_thread_info()	task_thread_info(current)
#define __HAVE_THREAD_FUNCTIONS
#define setup_thread_stack(p, org) ()
#define end_of_stack(p)		((unsigned long *)(p)->stack + 1)
static inline struct thread_info *current_thread_info(void)
#define init_thread_info	(init_thread_union.thread_info)
#define TIF_SIGPENDING		6
#define TIF_NEED_RESCHED	7
#define TIF_DELAYED_TRACE	14
#define TIF_SYSCALL_TRACE	15
#define TIF_MEMDIE		16
#define TIF_FREEZE		17
#define TIF_RESTORE_SIGMASK	18

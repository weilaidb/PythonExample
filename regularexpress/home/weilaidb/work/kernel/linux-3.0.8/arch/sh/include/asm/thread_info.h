#define __ASM_SH_THREAD_INFO_H
struct thread_info ;
#define PREEMPT_ACTIVE		0x10000000
#if defined(CONFIG_4KSTACKS)
#define THREAD_SHIFT	12
#define THREAD_SHIFT	13
#define THREAD_SIZE	(1 << THREAD_SHIFT)
#define STACK_WARN	(THREAD_SIZE >> 3)
#define INIT_THREAD_INFO(tsk)			\
#define init_thread_info	(init_thread_union.thread_info)
#define init_stack		(init_thread_union.stack)
register unsigned long current_stack_pointer asm("r15") __used;
static inline struct thread_info *current_thread_info(void)
#if THREAD_SHIFT >= PAGE_SHIFT
#define THREAD_SIZE_ORDER	(THREAD_SHIFT - PAGE_SHIFT)
extern struct thread_info *alloc_thread_info_node(struct task_struct *tsk, int node);
extern void free_thread_info(struct thread_info *ti);
extern void arch_task_cache_init(void);
#define arch_task_cache_init arch_task_cache_init
extern int arch_dup_task_struct(struct task_struct *dst, struct task_struct *src);
extern void init_thread_xstate(void);
#define __HAVE_ARCH_THREAD_INFO_ALLOCATOR
#define TIF_SYSCALL_TRACE	0
#define TIF_SIGPENDING		1
#define TIF_NEED_RESCHED	2
#define TIF_SINGLESTEP		4
#define TIF_SYSCALL_AUDIT	5
#define TIF_SECCOMP		6
#define TIF_NOTIFY_RESUME	7
#define TIF_SYSCALL_TRACEPOINT	8
#define TIF_POLLING_NRFLAG	17
#define TIF_MEMDIE		18
#define TIF_FREEZE		19
#define _TIF_SYSCALL_TRACE	(1 << TIF_SYSCALL_TRACE)
#define _TIF_SIGPENDING		(1 << TIF_SIGPENDING)
#define _TIF_NEED_RESCHED	(1 << TIF_NEED_RESCHED)
#define _TIF_SINGLESTEP		(1 << TIF_SINGLESTEP)
#define _TIF_SYSCALL_AUDIT	(1 << TIF_SYSCALL_AUDIT)
#define _TIF_SECCOMP		(1 << TIF_SECCOMP)
#define _TIF_NOTIFY_RESUME	(1 << TIF_NOTIFY_RESUME)
#define _TIF_SYSCALL_TRACEPOINT	(1 << TIF_SYSCALL_TRACEPOINT)
#define _TIF_POLLING_NRFLAG	(1 << TIF_POLLING_NRFLAG)
#define _TIF_FREEZE		(1 << TIF_FREEZE)
#define _TIF_WORK_SYSCALL_MASK	(_TIF_SYSCALL_TRACE | _TIF_SINGLESTEP | \
_TIF_SYSCALL_AUDIT | _TIF_SECCOMP    | \
_TIF_SYSCALL_TRACEPOINT)
#define _TIF_ALLWORK_MASK	(_TIF_SYSCALL_TRACE | _TIF_SIGPENDING      | \
_TIF_NEED_RESCHED  | _TIF_SYSCALL_AUDIT   | \
_TIF_SINGLESTEP    | _TIF_NOTIFY_RESUME   | \
_TIF_SYSCALL_TRACEPOINT)
#define _TIF_WORK_MASK		(_TIF_ALLWORK_MASK & ~(_TIF_SYSCALL_TRACE | \
_TIF_SYSCALL_AUDIT | _TIF_SINGLESTEP))
#define TS_RESTORE_SIGMASK	0x0001
#define TS_USEDFPU		0x0002
#define HAVE_SET_RESTORE_SIGMASK	1
static inline void set_restore_sigmask(void)

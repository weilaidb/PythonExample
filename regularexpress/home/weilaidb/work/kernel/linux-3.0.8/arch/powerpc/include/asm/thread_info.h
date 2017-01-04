#define _ASM_POWERPC_THREAD_INFO_H
#if defined(CONFIG_PPC64)
#define THREAD_SHIFT		14
#elif defined(CONFIG_PPC_256K_PAGES)
#define THREAD_SHIFT		15
#define THREAD_SHIFT		13
#define THREAD_SIZE		(1 << THREAD_SHIFT)
struct thread_info ;
#define INIT_THREAD_INFO(tsk)			\
#define init_thread_info	(init_thread_union.thread_info)
#define init_stack		(init_thread_union.stack)
#if THREAD_SHIFT >= PAGE_SHIFT
#define THREAD_SIZE_ORDER	(THREAD_SHIFT - PAGE_SHIFT)
#define __HAVE_ARCH_THREAD_INFO_ALLOCATOR
extern struct thread_info *alloc_thread_info_node(struct task_struct *tsk, int node);
extern void free_thread_info(struct thread_info *ti);
static inline struct thread_info *current_thread_info(void)
#define PREEMPT_ACTIVE		0x10000000
#define TIF_SYSCALL_TRACE	0
#define TIF_SIGPENDING		1
#define TIF_NEED_RESCHED	2
#define TIF_POLLING_NRFLAG	3
#define TIF_32BIT		4
#define TIF_PERFMON_WORK	5
#define TIF_PERFMON_CTXSW	6
#define TIF_SYSCALL_AUDIT	7
#define TIF_SINGLESTEP		8
#define TIF_MEMDIE		9
#define TIF_SECCOMP		10
#define TIF_RESTOREALL		11
#define TIF_NOERROR		12
#define TIF_NOTIFY_RESUME	13
#define TIF_FREEZE		14
#define TIF_SYSCALL_TRACEPOINT	15
#define TIF_RUNLATCH		16
#define _TIF_SYSCALL_TRACE	(1<<TIF_SYSCALL_TRACE)
#define _TIF_SIGPENDING		(1<<TIF_SIGPENDING)
#define _TIF_NEED_RESCHED	(1<<TIF_NEED_RESCHED)
#define _TIF_POLLING_NRFLAG	(1<<TIF_POLLING_NRFLAG)
#define _TIF_32BIT		(1<<TIF_32BIT)
#define _TIF_PERFMON_WORK	(1<<TIF_PERFMON_WORK)
#define _TIF_PERFMON_CTXSW	(1<<TIF_PERFMON_CTXSW)
#define _TIF_SYSCALL_AUDIT	(1<<TIF_SYSCALL_AUDIT)
#define _TIF_SINGLESTEP		(1<<TIF_SINGLESTEP)
#define _TIF_SECCOMP		(1<<TIF_SECCOMP)
#define _TIF_RESTOREALL		(1<<TIF_RESTOREALL)
#define _TIF_NOERROR		(1<<TIF_NOERROR)
#define _TIF_NOTIFY_RESUME	(1<<TIF_NOTIFY_RESUME)
#define _TIF_FREEZE		(1<<TIF_FREEZE)
#define _TIF_SYSCALL_TRACEPOINT	(1<<TIF_SYSCALL_TRACEPOINT)
#define _TIF_RUNLATCH		(1<<TIF_RUNLATCH)
#define _TIF_SYSCALL_T_OR_A	(_TIF_SYSCALL_TRACE | _TIF_SYSCALL_AUDIT | \
_TIF_SECCOMP | _TIF_SYSCALL_TRACEPOINT)
#define _TIF_USER_WORK_MASK	(_TIF_SIGPENDING | _TIF_NEED_RESCHED | \
_TIF_NOTIFY_RESUME)
#define _TIF_PERSYSCALL_MASK	(_TIF_RESTOREALL|_TIF_NOERROR)
#define TLF_NAPPING		0
#define TLF_SLEEPING		1
#define TLF_RESTORE_SIGMASK	2
#define TLF_LAZY_MMU		3
#define _TLF_NAPPING		(1 << TLF_NAPPING)
#define _TLF_SLEEPING		(1 << TLF_SLEEPING)
#define _TLF_RESTORE_SIGMASK	(1 << TLF_RESTORE_SIGMASK)
#define _TLF_LAZY_MMU		(1 << TLF_LAZY_MMU)
#define HAVE_SET_RESTORE_SIGMASK	1
static inline void set_restore_sigmask(void)
#define is_32bit_task()	(test_thread_flag(TIF_32BIT))
#define is_32bit_task()	(1)

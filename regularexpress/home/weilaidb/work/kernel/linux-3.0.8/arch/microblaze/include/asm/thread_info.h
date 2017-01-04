#define _ASM_MICROBLAZE_THREAD_INFO_H
#define THREAD_SHIFT		13
#define THREAD_SIZE		(1 << THREAD_SHIFT)
#define THREAD_SIZE_ORDER	1
# include <linux/types.h>
# include <asm/processor.h>
struct cpu_context ;
typedef struct  mm_segment_t;
struct thread_info ;
#define INIT_THREAD_INFO(tsk)			\
#define init_thread_info	(init_thread_union.thread_info)
#define init_stack		(init_thread_union.stack)
static inline struct thread_info *current_thread_info(void)
#define PREEMPT_ACTIVE		0x10000000
#define TIF_SYSCALL_TRACE	0
#define TIF_NOTIFY_RESUME	1
#define TIF_SIGPENDING		2
#define TIF_NEED_RESCHED	3
#define TIF_SINGLESTEP		4
#define TIF_IRET		5
#define TIF_MEMDIE		6
#define TIF_SYSCALL_AUDIT	9
#define TIF_SECCOMP		10
#define TIF_FREEZE		14
#define TIF_POLLING_NRFLAG	16
#define _TIF_SYSCALL_TRACE	(1 << TIF_SYSCALL_TRACE)
#define _TIF_NOTIFY_RESUME	(1 << TIF_NOTIFY_RESUME)
#define _TIF_SIGPENDING		(1 << TIF_SIGPENDING)
#define _TIF_NEED_RESCHED	(1 << TIF_NEED_RESCHED)
#define _TIF_SINGLESTEP		(1 << TIF_SINGLESTEP)
#define _TIF_IRET		(1 << TIF_IRET)
#define _TIF_POLLING_NRFLAG	(1 << TIF_POLLING_NRFLAG)
#define _TIF_FREEZE		(1 << TIF_FREEZE)
#define _TIF_SYSCALL_AUDIT	(1 << TIF_SYSCALL_AUDIT)
#define _TIF_SECCOMP		(1 << TIF_SECCOMP)
#define _TIF_WORK_SYSCALL_MASK  (_TIF_SYSCALL_TRACE | _TIF_SINGLESTEP | \
_TIF_SYSCALL_AUDIT | _TIF_SECCOMP)
#define _TIF_WORK_MASK		0x0000FFFE
#define _TIF_ALLWORK_MASK	0x0000FFFF
#define TS_USEDFPU		0x0001
#define TS_RESTORE_SIGMASK	0x0002
#define HAVE_SET_RESTORE_SIGMASK 1
static inline void set_restore_sigmask(void)

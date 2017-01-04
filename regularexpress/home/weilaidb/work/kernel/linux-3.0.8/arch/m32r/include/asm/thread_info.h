#define _ASM_M32R_THREAD_INFO_H
struct thread_info ;
#define TI_TASK		0x00000000
#define TI_EXEC_DOMAIN	0x00000004
#define TI_FLAGS	0x00000008
#define TI_STATUS	0x0000000C
#define TI_CPU		0x00000010
#define TI_PRE_COUNT	0x00000014
#define TI_ADDR_LIMIT	0x00000018
#define TI_RESTART_BLOCK 0x000001C
#define PREEMPT_ACTIVE		0x10000000
#define THREAD_SIZE (PAGE_SIZE << 1)
#define INIT_THREAD_INFO(tsk)			\
#define init_thread_info	(init_thread_union.thread_info)
#define init_stack		(init_thread_union.stack)
static inline struct thread_info *current_thread_info(void)
#define __HAVE_ARCH_THREAD_INFO_ALLOCATOR
#define alloc_thread_info_node(tsk, node)			\
kzalloc_node(THREAD_SIZE, GFP_KERNEL, node)
#define alloc_thread_info_node(tsk, node)			\
kmalloc_node(THREAD_SIZE, GFP_KERNEL, node)
#define free_thread_info(info) kfree(info)
#define TI_FLAG_FAULT_CODE_SHIFT	28
static inline void set_thread_fault_code(unsigned int val)
static inline unsigned int get_thread_fault_code(void)
#define TIF_SYSCALL_TRACE	0
#define TIF_SIGPENDING		1
#define TIF_NEED_RESCHED	2
#define TIF_SINGLESTEP		3
#define TIF_IRET		4
#define TIF_NOTIFY_RESUME	5
#define TIF_RESTORE_SIGMASK	8
#define TIF_USEDFPU		16
#define TIF_POLLING_NRFLAG	17
#define TIF_MEMDIE		18
#define TIF_FREEZE		19
#define _TIF_SYSCALL_TRACE	(1<<TIF_SYSCALL_TRACE)
#define _TIF_SIGPENDING		(1<<TIF_SIGPENDING)
#define _TIF_NEED_RESCHED	(1<<TIF_NEED_RESCHED)
#define _TIF_SINGLESTEP		(1<<TIF_SINGLESTEP)
#define _TIF_IRET		(1<<TIF_IRET)
#define _TIF_NOTIFY_RESUME	(1<<TIF_NOTIFY_RESUME)
#define _TIF_RESTORE_SIGMASK	(1<<TIF_RESTORE_SIGMASK)
#define _TIF_USEDFPU		(1<<TIF_USEDFPU)
#define _TIF_POLLING_NRFLAG	(1<<TIF_POLLING_NRFLAG)
#define _TIF_FREEZE		(1<<TIF_FREEZE)
#define _TIF_WORK_MASK		0x0000FFFE
#define _TIF_ALLWORK_MASK	0x0000FFFF
#define TS_USEDFPU		0x0001

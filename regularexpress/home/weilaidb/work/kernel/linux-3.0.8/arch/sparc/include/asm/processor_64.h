#define __ASM_SPARC64_PROCESSOR_H
#define current_text_addr() ()
#define wp_works_ok 1
#define wp_works_ok__is_a_macro
#define VA_BITS		44
#define VPTE_SIZE	(1UL << (VA_BITS - PAGE_SHIFT + 3))
#define VPTE_SIZE	(1 << (VA_BITS - PAGE_SHIFT + 3))
#define TASK_SIZE_OF(tsk) \
(test_tsk_thread_flag(tsk,TIF_32BIT) ? \
(1UL << 32UL) : ((unsigned long)-VPTE_SIZE))
#define TASK_SIZE	TASK_SIZE_OF(current)
#define STACK_TOP32	((1UL << 32UL) - PAGE_SIZE)
#define STACK_TOP64	(0x0000080000000000UL - (1UL << 32UL))
#define STACK_TOP	(test_thread_flag(TIF_32BIT) ? \
STACK_TOP32 : STACK_TOP64)
#define STACK_TOP_MAX	STACK_TOP64
typedef struct  mm_segment_t;
struct thread_struct ;
#define INIT_THREAD
#define INIT_THREAD
struct task_struct;
extern unsigned long thread_saved_pc(struct task_struct *);
#define TSTATE_INITIAL_MM	TSTATE_TSO
#define TSTATE_INITIAL_MM	TSTATE_RMO
#define start_thread(regs, pc, sp) \
do  while (0)
#define start_thread32(regs, pc, sp) \
do  while (0)
#define release_thread(tsk)		do  while (0)
#define prepare_to_copy(tsk)	do  while (0)
extern pid_t kernel_thread(int (*fn)(void *), void * arg, unsigned long flags);
extern unsigned long get_wchan(struct task_struct *task);
#define task_pt_regs(tsk) (task_thread_info(tsk)->kregs)
#define KSTK_EIP(tsk)  (task_pt_regs(tsk)->tpc)
#define KSTK_ESP(tsk)  (task_pt_regs(tsk)->u_regs[UREG_FP])
#define cpu_relax()	barrier()
#define ARCH_HAS_PREFETCH
#define ARCH_HAS_PREFETCHW
#define ARCH_HAS_SPINLOCK_PREFETCH
static inline void prefetch(const void *x)
static inline void prefetchw(const void *x)
#define spin_lock_prefetch(x)	prefetchw(x)
#define HAVE_ARCH_PICK_MMAP_LAYOUT

#define __ASM_ALPHA_PROCESSOR_H
#define current_text_addr() \
()
#define TASK_SIZE (0x40000000000UL)
#define STACK_TOP \
(current->personality & ADDR_LIMIT_32BIT ? 0x80000000 : 0x00120000000UL)
#define STACK_TOP_MAX	0x00120000000UL
#define TASK_UNMAPPED_BASE \
((current->personality & ADDR_LIMIT_32BIT) ? 0x40000000 : TASK_SIZE / 2)
typedef struct  mm_segment_t;
struct thread_struct ;
#define INIT_THREAD
struct task_struct;
extern unsigned long thread_saved_pc(struct task_struct *);
extern void start_thread(struct pt_regs *, unsigned long, unsigned long);
extern void release_thread(struct task_struct *);
#define prepare_to_copy(tsk)	do  while (0)
extern long kernel_thread(int (*fn)(void *), void *arg, unsigned long flags);
unsigned long get_wchan(struct task_struct *p);
#define KSTK_EIP(tsk) (task_pt_regs(tsk)->pc)
#define KSTK_ESP(tsk) \
((tsk) == current ? rdusp() : task_thread_info(tsk)->pcb.usp)
#define cpu_relax()	barrier()
#define ARCH_HAS_PREFETCH
#define ARCH_HAS_PREFETCHW
#define ARCH_HAS_SPINLOCK_PREFETCH
#define spin_lock_prefetch(lock)  	do  while (0)
extern inline void prefetch(const void *ptr)
extern inline void prefetchw(const void *ptr)
extern inline void spin_lock_prefetch(const void *ptr)

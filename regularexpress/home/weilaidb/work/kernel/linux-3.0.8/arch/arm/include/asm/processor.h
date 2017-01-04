#define __ASM_ARM_PROCESSOR_H
#define current_text_addr() ()
#define STACK_TOP	((current->personality & ADDR_LIMIT_32BIT) ? \
TASK_SIZE : TASK_SIZE_26)
#define STACK_TOP_MAX	TASK_SIZE
struct debug_info ;
struct thread_struct ;
#define INIT_THREAD
#define nommu_start_thread(regs) do  while (0)
#define nommu_start_thread(regs) regs->ARM_r10 = current->mm->start_data
#define start_thread(regs,pc,sp)					\
()
struct task_struct;
extern void release_thread(struct task_struct *);
#define prepare_to_copy(tsk)	do  while (0)
unsigned long get_wchan(struct task_struct *p);
#if __LINUX_ARM_ARCH__ == 6 || defined(CONFIG_ARM_ERRATA_754327)
#define cpu_relax()			smp_mb()
#define cpu_relax()			barrier()
extern int kernel_thread(int (*fn)(void *), void *arg, unsigned long flags);
#define task_pt_regs(p) \
((struct pt_regs *)(THREAD_START_SP + task_stack_page(p)) - 1)
#define KSTK_EIP(tsk)	task_pt_regs(tsk)->ARM_pc
#define KSTK_ESP(tsk)	task_pt_regs(tsk)->ARM_sp
#if __LINUX_ARM_ARCH__ >= 5
#define ARCH_HAS_PREFETCH
static inline void prefetch(const void *ptr)
#define ARCH_HAS_PREFETCHW
#define prefetchw(ptr)	prefetch(ptr)
#define ARCH_HAS_SPINLOCK_PREFETCH
#define spin_lock_prefetch(x) do  while (0)

#define __UM_MMU_CONTEXT_H
extern void arch_dup_mmap(struct mm_struct *oldmm, struct mm_struct *mm);
extern void arch_exit_mmap(struct mm_struct *mm);
#define get_mmu_context(task) do ; while(0)
#define activate_context(tsk) do ; while(0)
#define deactivate_mm(tsk,mm)	do  while (0)
extern void force_flush_all(void);
static inline void activate_mm(struct mm_struct *old, struct mm_struct *new)
static inline void switch_mm(struct mm_struct *prev, struct mm_struct *next,
struct task_struct *tsk)
static inline void enter_lazy_tlb(struct mm_struct *mm,
struct task_struct *tsk)
extern int init_new_context(struct task_struct *task, struct mm_struct *mm);
extern void destroy_context(struct mm_struct *mm);

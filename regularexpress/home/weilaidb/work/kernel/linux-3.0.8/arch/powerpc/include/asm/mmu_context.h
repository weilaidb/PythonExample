#define __ASM_POWERPC_MMU_CONTEXT_H
extern int init_new_context(struct task_struct *tsk, struct mm_struct *mm);
extern void destroy_context(struct mm_struct *mm);
extern void switch_mmu_context(struct mm_struct *prev, struct mm_struct *next);
extern void switch_stab(struct task_struct *tsk, struct mm_struct *mm);
extern void switch_slb(struct task_struct *tsk, struct mm_struct *mm);
extern void set_context(unsigned long id, pgd_t *pgd);
extern int __init_new_context(void);
extern void __destroy_context(int context_id);
static inline void mmu_context_init(void)
extern unsigned long __init_new_context(void);
extern void __destroy_context(unsigned long context_id);
extern void mmu_context_init(void);
extern void switch_cop(struct mm_struct *next);
extern int use_cop(unsigned long acop, struct mm_struct *mm);
extern void drop_cop(unsigned long acop, struct mm_struct *mm);
static inline void switch_mm(struct mm_struct *prev, struct mm_struct *next,
struct task_struct *tsk)
#define deactivate_mm(tsk,mm)	do  while (0)
static inline void activate_mm(struct mm_struct *prev, struct mm_struct *next)
static inline void enter_lazy_tlb(struct mm_struct *mm,
struct task_struct *tsk)

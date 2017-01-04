#define _ASM_MMU_CONTEXT_H
static inline void enter_lazy_tlb(struct mm_struct *mm, struct task_struct *tsk)
extern int init_new_context(struct task_struct *tsk, struct mm_struct *mm);
extern void change_mm_context(mm_context_t *old, mm_context_t *ctx, pgd_t *_pgd);
extern void destroy_context(struct mm_struct *mm);
#define init_new_context(tsk, mm)		()
#define change_mm_context(old, ctx, _pml4)	do  while(0)
#define destroy_context(mm)			do  while(0)
#define switch_mm(prev, next, tsk)						\
do  while(0)
#define activate_mm(prev, next)						\
do  while(0)
#define deactivate_mm(tsk, mm)			\
do  while(0)

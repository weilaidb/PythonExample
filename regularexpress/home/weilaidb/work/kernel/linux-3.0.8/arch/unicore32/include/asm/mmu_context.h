#define __UNICORE_MMU_CONTEXT_H__
#define init_new_context(tsk, mm)	0
#define destroy_context(mm)		do  while (0)
static inline void
enter_lazy_tlb(struct mm_struct *mm, struct task_struct *tsk)
static inline void
switch_mm(struct mm_struct *prev, struct mm_struct *next,
struct task_struct *tsk)
#define deactivate_mm(tsk, mm)	do  while (0)
#define activate_mm(prev, next)	switch_mm(prev, next, NULL)
#define arch_exit_mmap(mm) \
do  while (0)
static inline void arch_dup_mmap(struct mm_struct *oldmm,
struct mm_struct *mm)

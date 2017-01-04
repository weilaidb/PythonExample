#define __ASM_ARM_MMU_CONTEXT_H
void __check_kvm_seq(struct mm_struct *mm);
#define ASID_BITS		8
#define ASID_MASK		((~0) << ASID_BITS)
#define ASID_FIRST_VERSION	(1 << ASID_BITS)
extern unsigned int cpu_last_asid;
DECLARE_PER_CPU(struct mm_struct *, current_mm);
void __init_new_context(struct task_struct *tsk, struct mm_struct *mm);
void __new_context(struct mm_struct *mm);
static inline void check_context(struct mm_struct *mm)
#define init_new_context(tsk,mm)	(__init_new_context(tsk,mm),0)
static inline void check_context(struct mm_struct *mm)
#define init_new_context(tsk,mm)	0
#define destroy_context(mm)		do  while(0)
static inline void
enter_lazy_tlb(struct mm_struct *mm, struct task_struct *tsk)
static inline void
switch_mm(struct mm_struct *prev, struct mm_struct *next,
struct task_struct *tsk)
#define deactivate_mm(tsk,mm)	do  while (0)
#define activate_mm(prev,next)	switch_mm(prev, next, NULL)
#define arch_exit_mmap(mm) \
do  while (0)
static inline void arch_dup_mmap(struct mm_struct *oldmm,
struct mm_struct *mm)

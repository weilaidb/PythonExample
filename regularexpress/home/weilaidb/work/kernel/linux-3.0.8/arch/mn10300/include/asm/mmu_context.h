#define _ASM_MMU_CONTEXT_H
#define MMU_CONTEXT_TLBPID_NR		256
#define MMU_CONTEXT_TLBPID_MASK		0x000000ffUL
#define MMU_CONTEXT_VERSION_MASK	0xffffff00UL
#define MMU_CONTEXT_FIRST_VERSION	0x00000100UL
#define MMU_NO_CONTEXT			0x00000000UL
#define MMU_CONTEXT_TLBPID_LOCK_NR	0
#define enter_lazy_tlb(mm, tsk)	do  while (0)
static inline void cpu_ran_vm(int cpu, struct mm_struct *mm)
static inline bool cpu_maybe_ran_vm(int cpu, struct mm_struct *mm)
extern unsigned long mmu_context_cache[NR_CPUS];
#define mm_context(mm)	(mm->context.tlbpid[smp_processor_id()])
static inline unsigned long allocate_mmu_context(struct mm_struct *mm)
static inline unsigned long get_mmu_context(struct mm_struct *mm)
static inline int init_new_context(struct task_struct *tsk,
struct mm_struct *mm)
static inline void activate_context(struct mm_struct *mm)
#define init_new_context(tsk, mm)	(0)
#define activate_context(mm)		local_flush_tlb()
#define destroy_context(mm)	do  while (0)
static inline void switch_mm(struct mm_struct *prev, struct mm_struct *next,
struct task_struct *tsk)
#define deactivate_mm(tsk, mm)	do  while (0)
#define activate_mm(prev, next)	switch_mm((prev), (next), NULL)

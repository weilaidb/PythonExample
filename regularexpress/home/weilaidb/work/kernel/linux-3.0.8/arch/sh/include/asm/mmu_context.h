#define __ASM_SH_MMU_CONTEXT_H
#define MMU_CONTEXT_ASID_MASK		0x0000ffff
#define MMU_CONTEXT_ASID_MASK		0x000000ff
#define MMU_CONTEXT_VERSION_MASK	(~0UL & ~MMU_CONTEXT_ASID_MASK)
#define MMU_CONTEXT_FIRST_VERSION	(MMU_CONTEXT_ASID_MASK + 1)
#define MMU_NO_ASID			MMU_CONTEXT_FIRST_VERSION
#define NO_CONTEXT			0UL
#define asid_cache(cpu)		(cpu_data[cpu].asid_cache)
#define cpu_context(cpu, mm)	((mm)->context.id[cpu])
#define cpu_asid(cpu, mm)	\
(cpu_context((cpu), (mm)) & MMU_CONTEXT_ASID_MASK)
#define MMU_VPN_MASK	0xfffff000
#if defined(CONFIG_SUPERH32)
static inline void get_mmu_context(struct mm_struct *mm, unsigned int cpu)
static inline int init_new_context(struct task_struct *tsk,
struct mm_struct *mm)
static inline void activate_context(struct mm_struct *mm, unsigned int cpu)
static inline void switch_mm(struct mm_struct *prev,
struct mm_struct *next,
struct task_struct *tsk)
#define activate_mm(prev, next)		switch_mm((prev),(next),NULL)
#define deactivate_mm(tsk,mm)		do  while (0)
#define enter_lazy_tlb(mm,tsk)		do  while (0)
#define set_asid(asid)			do  while (0)
#define get_asid()			(0)
#define cpu_asid(cpu, mm)		()
#define switch_and_save_asid(asid)	(0)
#define set_TTB(pgd)			do  while (0)
#define get_TTB()			(0)
#if defined(CONFIG_CPU_SH3) || defined(CONFIG_CPU_SH4)
static inline void enable_mmu(void)
static inline void disable_mmu(void)
#define enable_mmu()	do  while (0)
#define disable_mmu()	do  while (0)

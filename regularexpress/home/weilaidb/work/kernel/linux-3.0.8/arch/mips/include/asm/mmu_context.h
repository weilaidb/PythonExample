#define _ASM_MMU_CONTEXT_H
#define TLBMISS_HANDLER_SETUP_PGD(pgd)				\
tlbmiss_handler_setup_pgd((unsigned long)(pgd))
extern void tlbmiss_handler_setup_pgd(unsigned long pgd);
#define TLBMISS_HANDLER_SETUP()						\
do  while (0)
static inline unsigned long get_current_pgd(void)
extern unsigned long pgd_current[];
#define TLBMISS_HANDLER_SETUP_PGD(pgd) \
pgd_current[smp_processor_id()] = (unsigned long)(pgd)
#define TLBMISS_HANDLER_SETUP()						\
write_c0_context((unsigned long) smp_processor_id() << 25);	\
back_to_back_c0_hazard();					\
TLBMISS_HANDLER_SETUP_PGD(swapper_pg_dir)
#define TLBMISS_HANDLER_SETUP()						\
write_c0_context((unsigned long) smp_processor_id() << 26);	\
back_to_back_c0_hazard();					\
TLBMISS_HANDLER_SETUP_PGD(swapper_pg_dir)
#if defined(CONFIG_CPU_R3000) || defined(CONFIG_CPU_TX39XX)
#define ASID_INC	0x40
#define ASID_MASK	0xfc0
#elif defined(CONFIG_CPU_R8000)
#define ASID_INC	0x10
#define ASID_MASK	0xff0
#elif defined(CONFIG_CPU_RM9000)
#define ASID_INC	0x1
#define ASID_MASK	0xfff
#elif defined(CONFIG_MIPS_MT_SMTC)
#define ASID_INC	0x1
extern unsigned long smtc_asid_mask;
#define ASID_MASK	(smtc_asid_mask)
#define	HW_ASID_MASK	0xff
#define ASID_INC	0x1
#define ASID_MASK	0xff
#define cpu_context(cpu, mm)	((mm)->context.asid[cpu])
#define cpu_asid(cpu, mm)	(cpu_context((cpu), (mm)) & ASID_MASK)
#define asid_cache(cpu)		(cpu_data[cpu].asid_cache)
static inline void enter_lazy_tlb(struct mm_struct *mm, struct task_struct *tsk)
#define ASID_VERSION_MASK  ((unsigned long)~(ASID_MASK|(ASID_MASK-1)))
#define ASID_FIRST_VERSION ((unsigned long)(~ASID_VERSION_MASK) + 1)
static inline void
get_new_mmu_context(struct mm_struct *mm, unsigned long cpu)
#define get_new_mmu_context(mm, cpu) smtc_get_new_mmu_context((mm), (cpu))
static inline int
init_new_context(struct task_struct *tsk, struct mm_struct *mm)
static inline void switch_mm(struct mm_struct *prev, struct mm_struct *next,
struct task_struct *tsk)
static inline void destroy_context(struct mm_struct *mm)
#define deactivate_mm(tsk, mm)	do  while (0)
static inline void
activate_mm(struct mm_struct *prev, struct mm_struct *next)
static inline void
drop_mmu_context(struct mm_struct *mm, unsigned cpu)

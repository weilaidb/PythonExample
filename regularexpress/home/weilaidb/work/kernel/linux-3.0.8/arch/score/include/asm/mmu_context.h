#define _ASM_SCORE_MMU_CONTEXT_H
extern unsigned long asid_cache;
extern unsigned long pgd_current;
#define TLBMISS_HANDLER_SETUP_PGD(pgd) (pgd_current = (unsigned long)(pgd))
#define TLBMISS_HANDLER_SETUP()				\
do  while (0)
#define ASID_VERSION_MASK	0xfffff000
#define ASID_FIRST_VERSION	0x1000
#define ASID_INC	0x10
#define ASID_MASK	0xff0
static inline void enter_lazy_tlb(struct mm_struct *mm,
struct task_struct *tsk)
static inline void
get_new_mmu_context(struct mm_struct *mm)
static inline int
init_new_context(struct task_struct *tsk, struct mm_struct *mm)
static inline void switch_mm(struct mm_struct *prev, struct mm_struct *next,
struct task_struct *tsk)
static inline void destroy_context(struct mm_struct *mm)
static inline void
deactivate_mm(struct task_struct *task, struct mm_struct *mm)
static inline void
activate_mm(struct mm_struct *prev, struct mm_struct *next)

#define _XTENSA_MMU_CONTEXT_H
#if (XCHAL_HAVE_TLBS != 1)
# error "Linux must have an MMU!"
extern unsigned long asid_cache;
#define NO_CONTEXT	0
#define ASID_USER_FIRST	4
#define ASID_MASK	((1 << XCHAL_MMU_ASID_BITS) - 1)
#define ASID_INSERT(x)	(0x03020001 | (((x) & ASID_MASK) << 8))
static inline void set_rasid_register (unsigned long val)
static inline unsigned long get_rasid_register (void)
static inline void
__get_new_mmu_context(struct mm_struct *mm)
static inline void
__load_mmu_context(struct mm_struct *mm)
static inline int
init_new_context(struct task_struct *tsk, struct mm_struct *mm)
static inline void
activate_mm(struct mm_struct *prev, struct mm_struct *next)
static inline void switch_mm(struct mm_struct *prev, struct mm_struct *next,
struct task_struct *tsk)
#define deactivate_mm(tsk, mm)	do  while(0)
static inline void destroy_context(struct mm_struct *mm)
static inline void enter_lazy_tlb(struct mm_struct *mm, struct task_struct *tsk)

#define __PARISC_MMU_CONTEXT_H
static inline void enter_lazy_tlb(struct mm_struct *mm, struct task_struct *tsk)
extern unsigned long alloc_sid(void);
extern void free_sid(unsigned long);
static inline int
init_new_context(struct task_struct *tsk, struct mm_struct *mm)
static inline void
destroy_context(struct mm_struct *mm)
static inline unsigned long __space_to_prot(mm_context_t context)
static inline void load_context(mm_context_t context)
static inline void switch_mm(struct mm_struct *prev, struct mm_struct *next, struct task_struct *tsk)
#define deactivate_mm(tsk,mm)	do  while (0)
static inline void activate_mm(struct mm_struct *prev, struct mm_struct *next)

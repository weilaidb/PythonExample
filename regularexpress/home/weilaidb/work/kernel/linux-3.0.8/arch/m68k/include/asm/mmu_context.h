#define __M68K_MMU_CONTEXT_H
static inline void enter_lazy_tlb(struct mm_struct *mm, struct task_struct *tsk)
static inline int init_new_context(struct task_struct *tsk,
struct mm_struct *mm)
#define destroy_context(mm)		do  while(0)
static inline void switch_mm_0230(struct mm_struct *mm)
static inline void switch_mm_0460(struct mm_struct *mm)
static inline void switch_mm(struct mm_struct *prev, struct mm_struct *next, struct task_struct *tsk)
#define deactivate_mm(tsk,mm)	do  while (0)
static inline void activate_mm(struct mm_struct *prev_mm,
struct mm_struct *next_mm)
extern unsigned long get_free_context(struct mm_struct *mm);
extern void clear_context(unsigned long context);
static inline int init_new_context(struct task_struct *tsk, struct mm_struct *mm)
static inline void get_mmu_context(struct mm_struct *mm)
static inline void destroy_context(struct mm_struct *mm)
static inline void activate_context(struct mm_struct *mm)
static inline void switch_mm(struct mm_struct *prev, struct mm_struct *next, struct task_struct *tsk)
#define deactivate_mm(tsk,mm)	do  while (0)
static inline void activate_mm(struct mm_struct *prev_mm,
struct mm_struct *next_mm)
static inline int init_new_context(struct task_struct *tsk, struct mm_struct *mm)
static inline void switch_mm(struct mm_struct *prev, struct mm_struct *next, struct task_struct *tsk)
#define destroy_context(mm)	do  while (0)
#define deactivate_mm(tsk,mm)	do  while (0)
static inline void activate_mm(struct mm_struct *prev_mm, struct mm_struct *next_mm)

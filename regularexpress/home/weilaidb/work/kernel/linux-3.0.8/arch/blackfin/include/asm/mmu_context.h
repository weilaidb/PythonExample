#define __BLACKFIN_MMU_CONTEXT_H__
extern void *current_l1_stack_save;
extern int nr_l1stack_tasks;
extern void *l1_stack_base;
extern unsigned long l1_stack_len;
extern int l1sram_free(const void*);
extern void *l1sram_alloc_max(void*);
static inline void free_l1stack(void)
static inline unsigned long
alloc_l1stack(unsigned long length, unsigned long *stack_base)
static inline int
activate_l1stack(struct mm_struct *mm, unsigned long sp_base)
#define deactivate_mm(tsk,mm)	do  while (0)
#define activate_mm(prev, next) switch_mm(prev, next, NULL)
static inline void __switch_mm(struct mm_struct *prev_mm, struct mm_struct *next_mm,
struct task_struct *tsk)
#define lock_mm_switch(flags)	flags = hard_local_irq_save_cond()
#define unlock_mm_switch(flags)	hard_local_irq_restore_cond(flags)
#define lock_mm_switch(flags)	do  while (0)
#define unlock_mm_switch(flags)	do  while (0)
static inline void switch_mm(struct mm_struct *prev, struct mm_struct *next,
struct task_struct *tsk)
static inline void protect_page(struct mm_struct *mm, unsigned long addr,
unsigned long flags)
static inline void update_protections(struct mm_struct *mm)
static inline void switch_mm(struct mm_struct *prev, struct mm_struct *next,
struct task_struct *tsk)
static inline void enter_lazy_tlb(struct mm_struct *mm, struct task_struct *tsk)
static inline int
init_new_context(struct task_struct *tsk, struct mm_struct *mm)
static inline void destroy_context(struct mm_struct *mm)
#define ipipe_mm_switch_protect(flags)		\
flags = hard_local_irq_save_cond()
#define ipipe_mm_switch_unprotect(flags)	\
hard_local_irq_restore_cond(flags)

#define __S390_MMU_CONTEXT_H
static inline int init_new_context(struct task_struct *tsk,
struct mm_struct *mm)
#define destroy_context(mm)             do  while (0)
#define LCTL_OPCODE "lctl"
#define LCTL_OPCODE "lctlg"
static inline void update_mm(struct mm_struct *mm, struct task_struct *tsk)
static inline void switch_mm(struct mm_struct *prev, struct mm_struct *next,
struct task_struct *tsk)
#define enter_lazy_tlb(mm,tsk)	do  while (0)
#define deactivate_mm(tsk,mm)	do  while (0)
static inline void activate_mm(struct mm_struct *prev,
struct mm_struct *next)

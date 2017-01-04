#define _ASM_IA64_MMU_CONTEXT_H
#define IA64_REGION_ID_KERNEL	0
#define ia64_rid(ctx,addr)	(((ctx) << 3) | (addr >> 61))
# include <asm/page.h>
# ifndef __ASSEMBLY__
struct ia64_ctx ;
extern struct ia64_ctx ia64_ctx;
DECLARE_PER_CPU(u8, ia64_need_tlb_flush);
extern void mmu_context_init (void);
extern void wrap_mmu_context (struct mm_struct *mm);
static inline void
enter_lazy_tlb (struct mm_struct *mm, struct task_struct *tsk)
static inline void
delayed_tlb_flush (void)
static inline nv_mm_context_t
get_mmu_context (struct mm_struct *mm)
static inline int
init_new_context (struct task_struct *p, struct mm_struct *mm)
static inline void
destroy_context (struct mm_struct *mm)
static inline void
reload_context (nv_mm_context_t context)
static inline void
activate_context (struct mm_struct *mm)
#define deactivate_mm(tsk,mm)	do  while (0)
static inline void
activate_mm (struct mm_struct *prev, struct mm_struct *next)
#define switch_mm(prev_mm,next_mm,next_task)	activate_mm(prev_mm, next_mm)
# endif

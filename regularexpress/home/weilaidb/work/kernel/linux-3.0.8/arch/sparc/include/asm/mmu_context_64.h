#define __SPARC64_MMU_CONTEXT_H
static inline void enter_lazy_tlb(struct mm_struct *mm, struct task_struct *tsk)
extern spinlock_t ctx_alloc_lock;
extern unsigned long tlb_context_cache;
extern unsigned long mmu_context_bmap[];
extern void get_new_mmu_context(struct mm_struct *mm);
extern void smp_new_mmu_context_version(void);
#define smp_new_mmu_context_version() do  while (0)
extern int init_new_context(struct task_struct *tsk, struct mm_struct *mm);
extern void destroy_context(struct mm_struct *mm);
extern void __tsb_context_switch(unsigned long pgd_pa,
struct tsb_config *tsb_base,
struct tsb_config *tsb_huge,
unsigned long tsb_descr_pa);
static inline void tsb_context_switch(struct mm_struct *mm)
extern void tsb_grow(struct mm_struct *mm, unsigned long tsb_index, unsigned long mm_rss);
extern void smp_tsb_sync(struct mm_struct *mm);
#define smp_tsb_sync(__mm) do  while (0)
#define load_secondary_context(__mm) \
__asm__ __volatile__( \
"\n661:	stxa		%0, [%1] %2\n" \
"	.section	.sun4v_1insn_patch, \"ax\"\n" \
"	.word		661b\n" \
"	stxa		%0, [%1] %3\n" \
"	.previous\n" \
"	flush		%%g6\n" \
: \
: "r" (CTX_HWBITS((__mm)->context)), \
"r" (SECONDARY_CONTEXT), "i" (ASI_DMMU), "i" (ASI_MMU))
extern void __flush_tlb_mm(unsigned long, unsigned long);
static inline void switch_mm(struct mm_struct *old_mm, struct mm_struct *mm, struct task_struct *tsk)
#define deactivate_mm(tsk,mm)	do  while (0)
static inline void activate_mm(struct mm_struct *active_mm, struct mm_struct *mm)

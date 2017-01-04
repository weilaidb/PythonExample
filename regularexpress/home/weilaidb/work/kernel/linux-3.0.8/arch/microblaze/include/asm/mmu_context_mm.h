#define _ASM_MICROBLAZE_MMU_CONTEXT_H
# ifdef __KERNEL__
# define CTX_TO_VSID(ctx, va)	(((ctx) * (897 * 16) + ((va) >> 28) * 0x111) \
& 0xffffff)
static inline void enter_lazy_tlb(struct mm_struct *mm, struct task_struct *tsk)
# define NO_CONTEXT	256
# define LAST_CONTEXT	255
# define FIRST_CONTEXT	1
extern void set_context(mm_context_t context, pgd_t *pgd);
extern unsigned long context_map[];
extern mm_context_t next_mmu_context;
extern atomic_t nr_free_contexts;
extern struct mm_struct *context_mm[LAST_CONTEXT+1];
extern void steal_context(void);
static inline void get_mmu_context(struct mm_struct *mm)
# define init_new_context(tsk, mm)	(((mm)->context = NO_CONTEXT), 0)
static inline void destroy_context(struct mm_struct *mm)
static inline void switch_mm(struct mm_struct *prev, struct mm_struct *next,
struct task_struct *tsk)
static inline void activate_mm(struct mm_struct *active_mm,
struct mm_struct *mm)
extern void mmu_context_init(void);
# endif

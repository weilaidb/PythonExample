#define __ASM_AVR32_MMU_CONTEXT_H
#define MMU_CONTEXT_ASID_MASK		0x000000ff
#define MMU_CONTEXT_VERSION_MASK	0xffffff00
#define MMU_CONTEXT_FIRST_VERSION       0x00000100
#define NO_CONTEXT			0
#define MMU_NO_ASID			0x100
#define MMU_VPN_MASK	0xfffff000
extern unsigned long mmu_context_cache;
static inline void
get_mmu_context(struct mm_struct *mm)
static inline int init_new_context(struct task_struct *tsk,
struct mm_struct *mm)
static inline void destroy_context(struct mm_struct *mm)
static inline void set_asid(unsigned long asid)
static inline unsigned long get_asid(void)
static inline void activate_context(struct mm_struct *mm)
static inline void switch_mm(struct mm_struct *prev,
struct mm_struct *next,
struct task_struct *tsk)
#define deactivate_mm(tsk,mm) do  while(0)
#define activate_mm(prev, next) switch_mm((prev), (next), NULL)
static inline void
enter_lazy_tlb(struct mm_struct *mm, struct task_struct *tsk)
static inline void enable_mmu(void)
static inline void disable_mmu(void)

#define _ASM_M32R_MMU_CONTEXT_H
#define MMU_CONTEXT_ASID_MASK      (0x000000FF)
#define MMU_CONTEXT_VERSION_MASK   (0xFFFFFF00)
#define MMU_CONTEXT_FIRST_VERSION  (0x00000100)
#define NO_CONTEXT                 (0x00000000)
extern unsigned long mmu_context_cache_dat;
#define mmu_context_cache	mmu_context_cache_dat
#define mm_context(mm)		mm->context
extern unsigned long mmu_context_cache_dat[];
#define mmu_context_cache	mmu_context_cache_dat[smp_processor_id()]
#define mm_context(mm)		mm->context[smp_processor_id()]
#define set_tlb_tag(entry, tag)		(*entry = (tag & PAGE_MASK)|get_asid())
#define set_tlb_data(entry, data)	(*entry = (data | _PAGE_PRESENT))
#define enter_lazy_tlb(mm, tsk)	do  while (0)
static inline void get_new_mmu_context(struct mm_struct *mm)
static inline void get_mmu_context(struct mm_struct *mm)
static inline int init_new_context(struct task_struct *tsk,
struct mm_struct *mm)
#define destroy_context(mm)	do  while (0)
static inline void set_asid(unsigned long asid)
static inline unsigned long get_asid(void)
static inline void activate_context(struct mm_struct *mm)
static inline void switch_mm(struct mm_struct *prev,
struct mm_struct *next, struct task_struct *tsk)
#define deactivate_mm(tsk, mm)	do  while (0)
#define activate_mm(prev, next)	\
switch_mm((prev), (next), NULL)
#define get_mmu_context(mm)             do  while (0)
#define init_new_context(tsk,mm)        (0)
#define destroy_context(mm)             do  while (0)
#define set_asid(asid)                  do  while (0)
#define get_asid()                      (0)
#define activate_context(mm)            do  while (0)
#define switch_mm(prev,next,tsk)        do  while (0)
#define deactivate_mm(mm,tsk)           do  while (0)
#define activate_mm(prev,next)          do  while (0)
#define enter_lazy_tlb(mm,tsk)          do  while (0)

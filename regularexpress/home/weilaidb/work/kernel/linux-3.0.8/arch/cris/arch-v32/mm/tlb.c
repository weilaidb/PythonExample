#define UPDATE_TLB_SEL_IDX(val)					\
do  while(0)
#define UPDATE_TLB_HILO(tlb_hi, tlb_lo)		\
do  while(0)
void
__flush_tlb_all(void)
void
__flush_tlb_mm(struct mm_struct *mm)
void
__flush_tlb_page(struct vm_area_struct *vma, unsigned long addr)
int
init_new_context(struct task_struct *tsk, struct mm_struct *mm)
static DEFINE_SPINLOCK(mmu_context_lock);
void
switch_mm(struct mm_struct *prev, struct mm_struct *next,
struct task_struct *tsk)

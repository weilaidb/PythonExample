#define D(x)
void
flush_tlb_all(void)
void
flush_tlb_mm(struct mm_struct *mm)
void flush_tlb_page(struct vm_area_struct *vma, unsigned long addr)
int
init_new_context(struct task_struct *tsk, struct mm_struct *mm)
void switch_mm(struct mm_struct *prev, struct mm_struct *next,
struct task_struct *tsk)

DEFINE_PER_CPU(int, current_asid);
int min_asid, max_asid;
void flush_tlb_mm(struct mm_struct *mm)
void flush_tlb_current_task(void)
void flush_tlb_page_mm(const struct vm_area_struct *vma, struct mm_struct *mm,
unsigned long va)
void flush_tlb_page(const struct vm_area_struct *vma, unsigned long va)
EXPORT_SYMBOL(flush_tlb_page);
void flush_tlb_range(const struct vm_area_struct *vma,
unsigned long start, unsigned long end)
void flush_tlb_all(void)
void flush_tlb_kernel_range(unsigned long start, unsigned long end)

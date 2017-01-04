void local_flush_tlb_page(struct vm_area_struct *vma, unsigned long page)
void local_flush_tlb_range(struct vm_area_struct *vma, unsigned long start,
unsigned long end)
void local_flush_tlb_kernel_range(unsigned long start, unsigned long end)
void local_flush_tlb_mm(struct mm_struct *mm)
void __flush_tlb_global(void)

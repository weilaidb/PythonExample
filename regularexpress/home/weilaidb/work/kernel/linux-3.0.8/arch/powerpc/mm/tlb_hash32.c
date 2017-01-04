void flush_hash_entry(struct mm_struct *mm, pte_t *ptep, unsigned long addr)
EXPORT_SYMBOL(flush_hash_entry);
void flush_tlb_page_nohash(struct vm_area_struct *vma, unsigned long addr)
void tlb_flush(struct mmu_gather *tlb)
static void flush_range(struct mm_struct *mm, unsigned long start,
unsigned long end)
void flush_tlb_kernel_range(unsigned long start, unsigned long end)
EXPORT_SYMBOL(flush_tlb_kernel_range);
void flush_tlb_mm(struct mm_struct *mm)
EXPORT_SYMBOL(flush_tlb_mm);
void flush_tlb_page(struct vm_area_struct *vma, unsigned long vmaddr)
EXPORT_SYMBOL(flush_tlb_page);
void flush_tlb_range(struct vm_area_struct *vma, unsigned long start,
unsigned long end)
EXPORT_SYMBOL(flush_tlb_range);

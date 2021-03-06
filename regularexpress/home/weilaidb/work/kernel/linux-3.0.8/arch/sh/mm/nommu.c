void copy_page(void *to, void *from)
__kernel_size_t __copy_user(void *to, const void *from, __kernel_size_t n)
__kernel_size_t __clear_user(void *to, __kernel_size_t n)
void local_flush_tlb_all(void)
void local_flush_tlb_mm(struct mm_struct *mm)
void local_flush_tlb_range(struct vm_area_struct *vma, unsigned long start,
unsigned long end)
void local_flush_tlb_page(struct vm_area_struct *vma, unsigned long page)
void local_flush_tlb_one(unsigned long asid, unsigned long page)
void local_flush_tlb_kernel_range(unsigned long start, unsigned long end)
void __flush_tlb_global(void)
void __update_tlb(struct vm_area_struct *vma, unsigned long address, pte_t pte)
void __init kmap_coherent_init(void)
void *kmap_coherent(struct page *page, unsigned long addr)
void kunmap_coherent(void *kvaddr)
void __init page_table_range_init(unsigned long start, unsigned long end,
pgd_t *pgd_base)
void __set_fixmap(enum fixed_addresses idx, unsigned long phys, pgprot_t prot)
void pgtable_cache_init(void)

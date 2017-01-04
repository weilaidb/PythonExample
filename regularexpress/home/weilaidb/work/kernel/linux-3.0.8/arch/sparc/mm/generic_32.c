static inline void io_remap_pte_range(struct mm_struct *mm, pte_t * pte, unsigned long address, unsigned long size,
unsigned long offset, pgprot_t prot, int space)
static inline int io_remap_pmd_range(struct mm_struct *mm, pmd_t * pmd, unsigned long address, unsigned long size,
unsigned long offset, pgprot_t prot, int space)
int io_remap_pfn_range(struct vm_area_struct *vma, unsigned long from,
unsigned long pfn, unsigned long size, pgprot_t prot)
EXPORT_SYMBOL(io_remap_pfn_range);

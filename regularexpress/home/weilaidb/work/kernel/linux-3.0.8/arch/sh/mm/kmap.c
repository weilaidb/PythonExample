#define kmap_get_fixmap_pte(vaddr)                                     \
pte_offset_kernel(pmd_offset(pud_offset(pgd_offset_k(vaddr), (vaddr)), (vaddr)), (vaddr))
static pte_t *kmap_coherent_pte;
void __init kmap_coherent_init(void)
void *kmap_coherent(struct page *page, unsigned long addr)
void kunmap_coherent(void *kvaddr)

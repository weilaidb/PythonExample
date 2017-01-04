static int ioremap_pte_range(pmd_t *pmd, unsigned long addr,
unsigned long end, phys_addr_t phys_addr, pgprot_t prot)
static inline int ioremap_pmd_range(pud_t *pud, unsigned long addr,
unsigned long end, phys_addr_t phys_addr, pgprot_t prot)
static inline int ioremap_pud_range(pgd_t *pgd, unsigned long addr,
unsigned long end, phys_addr_t phys_addr, pgprot_t prot)
int ioremap_page_range(unsigned long addr,
unsigned long end, phys_addr_t phys_addr, pgprot_t prot)
EXPORT_SYMBOL_GPL(ioremap_page_range);

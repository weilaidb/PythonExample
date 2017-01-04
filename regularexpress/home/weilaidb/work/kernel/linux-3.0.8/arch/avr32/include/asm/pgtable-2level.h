#define __ASM_AVR32_PGTABLE_2LEVEL_H
#define PGDIR_SHIFT	22
#define PTRS_PER_PGD	1024
#define PTRS_PER_PTE	1024
#define pte_ERROR(e) \
printk("%s:%d: bad pte %08lx.\n", __FILE__, __LINE__, pte_val(e))
#define pgd_ERROR(e) \
printk("%s:%d: bad pgd %08lx.\n", __FILE__, __LINE__, pgd_val(e))
#define set_pte(pteptr, pteval) (*(pteptr) = pteval)
#define set_pte_at(mm,addr,ptep,pteval) set_pte(ptep, pteval)
#define set_pmd(pmdptr, pmdval) (*(pmdptr) = pmdval)
#define pte_pfn(x)		((unsigned long)(((x).pte >> PAGE_SHIFT)))
#define pfn_pte(pfn, prot)	__pte(((pfn) << PAGE_SHIFT) | pgprot_val(prot))
#define pfn_pmd(pfn, prot)	__pmd(((pfn) << PAGE_SHIFT) | pgprot_val(prot))

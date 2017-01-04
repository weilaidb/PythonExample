#define _SPARC64_PGALLOC_H
static inline pgd_t *pgd_alloc(struct mm_struct *mm)
static inline void pgd_free(struct mm_struct *mm, pgd_t *pgd)
#define pud_populate(MM, PUD, PMD)	pud_set(PUD, PMD)
static inline pmd_t *pmd_alloc_one(struct mm_struct *mm, unsigned long addr)
static inline void pmd_free(struct mm_struct *mm, pmd_t *pmd)
static inline pte_t *pte_alloc_one_kernel(struct mm_struct *mm,
unsigned long address)
static inline pgtable_t pte_alloc_one(struct mm_struct *mm,
unsigned long address)
static inline void pte_free_kernel(struct mm_struct *mm, pte_t *pte)
static inline void pte_free(struct mm_struct *mm, pgtable_t ptepage)
#define pmd_populate_kernel(MM, PMD, PTE)	pmd_set(PMD, PTE)
#define pmd_populate(MM,PMD,PTE_PAGE)		\
pmd_populate_kernel(MM,PMD,page_address(PTE_PAGE))
#define pmd_pgtable(pmd) pmd_page(pmd)
static inline void check_pgt_cache(void)
#define __pte_free_tlb(tlb, pte, addr)	pte_free((tlb)->mm, pte)
#define __pmd_free_tlb(tlb, pmd, addr)	pmd_free((tlb)->mm, pmd)

#define _ASMARM_PGALLOC_H
#define check_pgt_cache()		do  while (0)
#define _PAGE_USER_TABLE	(PMD_TYPE_TABLE | PMD_BIT4 | PMD_DOMAIN(DOMAIN_USER))
#define _PAGE_KERNEL_TABLE	(PMD_TYPE_TABLE | PMD_BIT4 | PMD_DOMAIN(DOMAIN_KERNEL))
#define pmd_alloc_one(mm,addr)		()
#define pmd_free(mm, pmd)		do  while (0)
#define pgd_populate(mm,pmd,pte)	BUG()
extern pgd_t *pgd_alloc(struct mm_struct *mm);
extern void pgd_free(struct mm_struct *mm, pgd_t *pgd);
#define PGALLOC_GFP	(GFP_KERNEL | __GFP_NOTRACK | __GFP_REPEAT | __GFP_ZERO)
static inline void clean_pte_table(pte_t *pte)
static inline pte_t *
pte_alloc_one_kernel(struct mm_struct *mm, unsigned long addr)
static inline pgtable_t
pte_alloc_one(struct mm_struct *mm, unsigned long addr)
static inline void pte_free_kernel(struct mm_struct *mm, pte_t *pte)
static inline void pte_free(struct mm_struct *mm, pgtable_t pte)
static inline void __pmd_populate(pmd_t *pmdp, phys_addr_t pte,
unsigned long prot)
static inline void
pmd_populate_kernel(struct mm_struct *mm, pmd_t *pmdp, pte_t *ptep)
static inline void
pmd_populate(struct mm_struct *mm, pmd_t *pmdp, pgtable_t ptep)
#define pmd_pgtable(pmd) pmd_page(pmd)

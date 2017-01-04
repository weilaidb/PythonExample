#define __UM_PGALLOC_H
#define pmd_populate_kernel(mm, pmd, pte) \
set_pmd(pmd, __pmd(_PAGE_TABLE + (unsigned long) __pa(pte)))
#define pmd_populate(mm, pmd, pte) 				\
set_pmd(pmd, __pmd(_PAGE_TABLE +			\
((unsigned long long)page_to_pfn(pte) <<	\
(unsigned long long) PAGE_SHIFT)))
#define pmd_pgtable(pmd) pmd_page(pmd)
extern pgd_t *pgd_alloc(struct mm_struct *);
extern void pgd_free(struct mm_struct *mm, pgd_t *pgd);
extern pte_t *pte_alloc_one_kernel(struct mm_struct *, unsigned long);
extern pgtable_t pte_alloc_one(struct mm_struct *, unsigned long);
static inline void pte_free_kernel(struct mm_struct *mm, pte_t *pte)
static inline void pte_free(struct mm_struct *mm, pgtable_t pte)
#define __pte_free_tlb(tlb,pte, address)		\
do  while (0)
static inline void pmd_free(struct mm_struct *mm, pmd_t *pmd)
#define __pmd_free_tlb(tlb,x, address)   tlb_remove_page((tlb),virt_to_page(x))
#define check_pgt_cache()	do  while (0)

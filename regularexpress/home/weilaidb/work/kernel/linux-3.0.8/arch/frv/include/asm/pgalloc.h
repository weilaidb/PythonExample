#define _ASM_PGALLOC_H
#define pmd_populate_kernel(mm, pmd, pte) __set_pmd(pmd, __pa(pte) | _PAGE_TABLE)
#define pmd_populate(MM, PMD, PAGE)						\
do  while(0)
#define pmd_pgtable(pmd) pmd_page(pmd)
extern pgd_t *pgd_alloc(struct mm_struct *);
extern void pgd_free(struct mm_struct *mm, pgd_t *);
extern pte_t *pte_alloc_one_kernel(struct mm_struct *, unsigned long);
extern pgtable_t pte_alloc_one(struct mm_struct *, unsigned long);
static inline void pte_free_kernel(struct mm_struct *mm, pte_t *pte)
static inline void pte_free(struct mm_struct *mm, pgtable_t pte)
#define __pte_free_tlb(tlb,pte,address)			\
do  while (0)
#define pmd_alloc_one(mm, addr)		()
#define pmd_free(mm, x)			do  while (0)
#define __pmd_free_tlb(tlb,x,a)		do  while (0)

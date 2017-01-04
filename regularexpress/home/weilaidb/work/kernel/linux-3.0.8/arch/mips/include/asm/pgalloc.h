#define _ASM_PGALLOC_H
static inline void pmd_populate_kernel(struct mm_struct *mm, pmd_t *pmd,
pte_t *pte)
static inline void pmd_populate(struct mm_struct *mm, pmd_t *pmd,
pgtable_t pte)
#define pmd_pgtable(pmd) pmd_page(pmd)
extern void pmd_init(unsigned long page, unsigned long pagetable);
static inline void pud_populate(struct mm_struct *mm, pud_t *pud, pmd_t *pmd)
extern void pgd_init(unsigned long page);
static inline pgd_t *pgd_alloc(struct mm_struct *mm)
static inline void pgd_free(struct mm_struct *mm, pgd_t *pgd)
static inline pte_t *pte_alloc_one_kernel(struct mm_struct *mm,
unsigned long address)
static inline struct page *pte_alloc_one(struct mm_struct *mm,
unsigned long address)
static inline void pte_free_kernel(struct mm_struct *mm, pte_t *pte)
static inline void pte_free(struct mm_struct *mm, pgtable_t pte)
#define __pte_free_tlb(tlb,pte,address)			\
do  while (0)
static inline pmd_t *pmd_alloc_one(struct mm_struct *mm, unsigned long address)
static inline void pmd_free(struct mm_struct *mm, pmd_t *pmd)
#define __pmd_free_tlb(tlb, x, addr)	pmd_free((tlb)->mm, x)
#define check_pgt_cache()	do  while (0)
extern void pagetable_init(void);

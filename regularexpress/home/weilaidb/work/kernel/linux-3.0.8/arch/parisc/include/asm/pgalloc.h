#define _ASM_PGALLOC_H
static inline pgd_t *pgd_alloc(struct mm_struct *mm)
static inline void pgd_free(struct mm_struct *mm, pgd_t *pgd)
#if PT_NLEVELS == 3
static inline void pgd_populate(struct mm_struct *mm, pgd_t *pgd, pmd_t *pmd)
static inline pmd_t *pmd_alloc_one(struct mm_struct *mm, unsigned long address)
static inline void pmd_free(struct mm_struct *mm, pmd_t *pmd)
#define pmd_alloc_one(mm, addr)		()
#define pmd_free(mm, x)			do  while (0)
#define pgd_populate(mm, pmd, pte)	BUG()
static inline void
pmd_populate_kernel(struct mm_struct *mm, pmd_t *pmd, pte_t *pte)
#define pmd_populate(mm, pmd, pte_page) \
pmd_populate_kernel(mm, pmd, page_address(pte_page))
#define pmd_pgtable(pmd) pmd_page(pmd)
static inline pgtable_t
pte_alloc_one(struct mm_struct *mm, unsigned long address)
static inline pte_t *
pte_alloc_one_kernel(struct mm_struct *mm, unsigned long addr)
static inline void pte_free_kernel(struct mm_struct *mm, pte_t *pte)
static inline void pte_free(struct mm_struct *mm, struct page *pte)
#define check_pgt_cache()	do  while (0)

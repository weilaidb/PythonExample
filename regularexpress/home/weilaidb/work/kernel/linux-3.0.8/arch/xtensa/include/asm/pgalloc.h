#define _XTENSA_PGALLOC_H
#define pmd_populate_kernel(mm, pmdp, ptep)				     \
(pmd_val(*(pmdp)) = ((unsigned long)ptep))
#define pmd_populate(mm, pmdp, page)					     \
(pmd_val(*(pmdp)) = ((unsigned long)page_to_virt(page)))
#define pmd_pgtable(pmd) pmd_page(pmd)
static inline pgd_t*
pgd_alloc(struct mm_struct *mm)
static inline void pgd_free(struct mm_struct *mm, pgd_t *pgd)
extern struct kmem_cache *pgtable_cache;
static inline pte_t *pte_alloc_one_kernel(struct mm_struct *mm,
unsigned long address)
static inline pgtable_t pte_alloc_one(struct mm_struct *mm,
unsigned long addr)
static inline void pte_free_kernel(struct mm_struct *mm, pte_t *pte)
static inline void pte_free(struct mm_struct *mm, pgtable_t pte)
#define pmd_pgtable(pmd) pmd_page(pmd)

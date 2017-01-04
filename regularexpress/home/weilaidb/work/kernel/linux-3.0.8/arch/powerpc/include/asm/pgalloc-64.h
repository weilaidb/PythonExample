#define _ASM_POWERPC_PGALLOC_64_H
struct vmemmap_backing ;
#define MAX_PGTABLE_INDEX_SIZE	0xf
extern struct kmem_cache *pgtable_cache[];
#define PGT_CACHE(shift) (pgtable_cache[(shift)-1])
static inline pgd_t *pgd_alloc(struct mm_struct *mm)
static inline void pgd_free(struct mm_struct *mm, pgd_t *pgd)
#define pgd_populate(MM, PGD, PUD)	pgd_set(PGD, PUD)
static inline pud_t *pud_alloc_one(struct mm_struct *mm, unsigned long addr)
static inline void pud_free(struct mm_struct *mm, pud_t *pud)
static inline void pud_populate(struct mm_struct *mm, pud_t *pud, pmd_t *pmd)
#define pmd_populate(mm, pmd, pte_page) \
pmd_populate_kernel(mm, pmd, page_address(pte_page))
#define pmd_populate_kernel(mm, pmd, pte) pmd_set(pmd, (unsigned long)(pte))
#define pmd_pgtable(pmd) pmd_page(pmd)
#define pud_populate(mm, pud, pmd)	pud_set(pud, (unsigned long)pmd)
static inline void pmd_populate_kernel(struct mm_struct *mm, pmd_t *pmd,
pte_t *pte)
#define pmd_populate(mm, pmd, pte_page) \
pmd_populate_kernel(mm, pmd, page_address(pte_page))
#define pmd_pgtable(pmd) pmd_page(pmd)
static inline pmd_t *pmd_alloc_one(struct mm_struct *mm, unsigned long addr)
static inline void pmd_free(struct mm_struct *mm, pmd_t *pmd)
static inline pte_t *pte_alloc_one_kernel(struct mm_struct *mm,
unsigned long address)
static inline pgtable_t pte_alloc_one(struct mm_struct *mm,
unsigned long address)
static inline void pgtable_free(void *table, unsigned index_size)
#define __pmd_free_tlb(tlb, pmd, addr)		      \
pgtable_free_tlb(tlb, pmd, PMD_INDEX_SIZE)
#define __pud_free_tlb(tlb, pud, addr)		      \
pgtable_free_tlb(tlb, pud, PUD_INDEX_SIZE)
#define check_pgt_cache()	do  while (0)

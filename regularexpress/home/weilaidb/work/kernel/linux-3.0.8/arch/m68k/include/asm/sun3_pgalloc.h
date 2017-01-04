#define _SUN3_PGALLOC_H
#define _KERNPG_TABLE 0
extern const char bad_pmd_string[];
#define pmd_alloc_one(mm,address)       ()
static inline void pte_free_kernel(struct mm_struct *mm, pte_t *pte)
static inline void pte_free(struct mm_struct *mm, pgtable_t page)
#define __pte_free_tlb(tlb,pte,addr)			\
do  while (0)
static inline pte_t *pte_alloc_one_kernel(struct mm_struct *mm,
unsigned long address)
static inline pgtable_t pte_alloc_one(struct mm_struct *mm,
unsigned long address)
static inline void pmd_populate_kernel(struct mm_struct *mm, pmd_t *pmd, pte_t *pte)
static inline void pmd_populate(struct mm_struct *mm, pmd_t *pmd, pgtable_t page)
#define pmd_pgtable(pmd) pmd_page(pmd)
#define pmd_free(mm, x)			do  while (0)
#define __pmd_free_tlb(tlb, x, addr)	do  while (0)
static inline void pgd_free(struct mm_struct *mm, pgd_t *pgd)
static inline pgd_t * pgd_alloc(struct mm_struct *mm)
#define pgd_populate(mm, pmd, pte) BUG()

#define _ASM_IA64_PGALLOC_H
static inline pgd_t *pgd_alloc(struct mm_struct *mm)
static inline void pgd_free(struct mm_struct *mm, pgd_t *pgd)
static inline void
pgd_populate(struct mm_struct *mm, pgd_t * pgd_entry, pud_t * pud)
static inline pud_t *pud_alloc_one(struct mm_struct *mm, unsigned long addr)
static inline void pud_free(struct mm_struct *mm, pud_t *pud)
#define __pud_free_tlb(tlb, pud, address)	pud_free((tlb)->mm, pud)
static inline void
pud_populate(struct mm_struct *mm, pud_t * pud_entry, pmd_t * pmd)
static inline pmd_t *pmd_alloc_one(struct mm_struct *mm, unsigned long addr)
static inline void pmd_free(struct mm_struct *mm, pmd_t *pmd)
#define __pmd_free_tlb(tlb, pmd, address)	pmd_free((tlb)->mm, pmd)
static inline void
pmd_populate(struct mm_struct *mm, pmd_t * pmd_entry, pgtable_t pte)
#define pmd_pgtable(pmd) pmd_page(pmd)
static inline void
pmd_populate_kernel(struct mm_struct *mm, pmd_t * pmd_entry, pte_t * pte)
static inline pgtable_t pte_alloc_one(struct mm_struct *mm, unsigned long addr)
static inline pte_t *pte_alloc_one_kernel(struct mm_struct *mm,
unsigned long addr)
static inline void pte_free(struct mm_struct *mm, pgtable_t pte)
static inline void pte_free_kernel(struct mm_struct *mm, pte_t *pte)
static inline void check_pgt_cache(void)
#define __pte_free_tlb(tlb, pte, address)	pte_free((tlb)->mm, pte)

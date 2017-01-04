#define _MOTOROLA_PGALLOC_H
extern pmd_t *get_pointer_table(void);
extern int free_pointer_table(pmd_t *);
static inline pte_t *pte_alloc_one_kernel(struct mm_struct *mm, unsigned long address)
static inline void pte_free_kernel(struct mm_struct *mm, pte_t *pte)
static inline pgtable_t pte_alloc_one(struct mm_struct *mm, unsigned long address)
static inline void pte_free(struct mm_struct *mm, pgtable_t page)
static inline void __pte_free_tlb(struct mmu_gather *tlb, pgtable_t page,
unsigned long address)
static inline pmd_t *pmd_alloc_one(struct mm_struct *mm, unsigned long address)
static inline int pmd_free(struct mm_struct *mm, pmd_t *pmd)
static inline int __pmd_free_tlb(struct mmu_gather *tlb, pmd_t *pmd,
unsigned long address)
static inline void pgd_free(struct mm_struct *mm, pgd_t *pgd)
static inline pgd_t *pgd_alloc(struct mm_struct *mm)
static inline void pmd_populate_kernel(struct mm_struct *mm, pmd_t *pmd, pte_t *pte)
static inline void pmd_populate(struct mm_struct *mm, pmd_t *pmd, pgtable_t page)
#define pmd_pgtable(pmd) pmd_page(pmd)
static inline void pgd_populate(struct mm_struct *mm, pgd_t *pgd, pmd_t *pmd)

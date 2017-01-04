#define _S390_PGALLOC_H
unsigned long *crst_table_alloc(struct mm_struct *);
void crst_table_free(struct mm_struct *, unsigned long *);
unsigned long *page_table_alloc(struct mm_struct *);
void page_table_free(struct mm_struct *, unsigned long *);
void page_table_free_rcu(struct mmu_gather *, unsigned long *);
void __tlb_remove_table(void *_table);
static inline void clear_table(unsigned long *s, unsigned long val, size_t n)
static inline void crst_table_init(unsigned long *crst, unsigned long entry)
static inline unsigned long pgd_entry_type(struct mm_struct *mm)
#define pud_alloc_one(mm,address)		()
#define pud_free(mm, x)				do  while (0)
#define pmd_alloc_one(mm,address)		()
#define pmd_free(mm, x)				do  while (0)
#define pgd_populate(mm, pgd, pud)		BUG()
#define pud_populate(mm, pud, pmd)		BUG()
static inline unsigned long pgd_entry_type(struct mm_struct *mm)
int crst_table_upgrade(struct mm_struct *, unsigned long limit);
void crst_table_downgrade(struct mm_struct *, unsigned long limit);
static inline pud_t *pud_alloc_one(struct mm_struct *mm, unsigned long address)
#define pud_free(mm, pud) crst_table_free(mm, (unsigned long *) pud)
static inline pmd_t *pmd_alloc_one(struct mm_struct *mm, unsigned long vmaddr)
#define pmd_free(mm, pmd) crst_table_free(mm, (unsigned long *) pmd)
static inline void pgd_populate(struct mm_struct *mm, pgd_t *pgd, pud_t *pud)
static inline void pud_populate(struct mm_struct *mm, pud_t *pud, pmd_t *pmd)
static inline pgd_t *pgd_alloc(struct mm_struct *mm)
#define pgd_free(mm, pgd) crst_table_free(mm, (unsigned long *) pgd)
static inline void pmd_populate(struct mm_struct *mm,
pmd_t *pmd, pgtable_t pte)
#define pmd_populate_kernel(mm, pmd, pte) pmd_populate(mm, pmd, pte)
#define pmd_pgtable(pmd) \
(pgtable_t)(pmd_val(pmd) & -sizeof(pte_t)*PTRS_PER_PTE)
#define pte_alloc_one_kernel(mm, vmaddr) ((pte_t *) page_table_alloc(mm))
#define pte_alloc_one(mm, vmaddr) ((pte_t *) page_table_alloc(mm))
#define pte_free_kernel(mm, pte) page_table_free(mm, (unsigned long *) pte)
#define pte_free(mm, pte) page_table_free(mm, (unsigned long *) pte)
extern void rcu_table_freelist_finish(void);

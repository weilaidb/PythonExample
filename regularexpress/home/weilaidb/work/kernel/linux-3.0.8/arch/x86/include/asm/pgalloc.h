#define _ASM_X86_PGALLOC_H
static inline int  __paravirt_pgd_alloc(struct mm_struct *mm)
#define paravirt_pgd_alloc(mm)	__paravirt_pgd_alloc(mm)
static inline void paravirt_pgd_free(struct mm_struct *mm, pgd_t *pgd)
static inline void paravirt_alloc_pte(struct mm_struct *mm, unsigned long pfn)
static inline void paravirt_alloc_pmd(struct mm_struct *mm, unsigned long pfn)
static inline void paravirt_alloc_pmd_clone(unsigned long pfn, unsigned long clonepfn,
unsigned long start, unsigned long count)
static inline void paravirt_alloc_pud(struct mm_struct *mm, unsigned long pfn)
static inline void paravirt_release_pte(unsigned long pfn)
static inline void paravirt_release_pmd(unsigned long pfn)
static inline void paravirt_release_pud(unsigned long pfn)
extern gfp_t __userpte_alloc_gfp;
extern pgd_t *pgd_alloc(struct mm_struct *);
extern void pgd_free(struct mm_struct *mm, pgd_t *pgd);
extern pte_t *pte_alloc_one_kernel(struct mm_struct *, unsigned long);
extern pgtable_t pte_alloc_one(struct mm_struct *, unsigned long);
static inline void pte_free_kernel(struct mm_struct *mm, pte_t *pte)
static inline void pte_free(struct mm_struct *mm, struct page *pte)
extern void ___pte_free_tlb(struct mmu_gather *tlb, struct page *pte);
static inline void __pte_free_tlb(struct mmu_gather *tlb, struct page *pte,
unsigned long address)
static inline void pmd_populate_kernel(struct mm_struct *mm,
pmd_t *pmd, pte_t *pte)
static inline void pmd_populate(struct mm_struct *mm, pmd_t *pmd,
struct page *pte)
#define pmd_pgtable(pmd) pmd_page(pmd)
#if PAGETABLE_LEVELS > 2
static inline pmd_t *pmd_alloc_one(struct mm_struct *mm, unsigned long addr)
static inline void pmd_free(struct mm_struct *mm, pmd_t *pmd)
extern void ___pmd_free_tlb(struct mmu_gather *tlb, pmd_t *pmd);
static inline void __pmd_free_tlb(struct mmu_gather *tlb, pmd_t *pmd,
unsigned long address)
extern void pud_populate(struct mm_struct *mm, pud_t *pudp, pmd_t *pmd);
static inline void pud_populate(struct mm_struct *mm, pud_t *pud, pmd_t *pmd)
#if PAGETABLE_LEVELS > 3
static inline void pgd_populate(struct mm_struct *mm, pgd_t *pgd, pud_t *pud)
static inline pud_t *pud_alloc_one(struct mm_struct *mm, unsigned long addr)
static inline void pud_free(struct mm_struct *mm, pud_t *pud)
extern void ___pud_free_tlb(struct mmu_gather *tlb, pud_t *pud);
static inline void __pud_free_tlb(struct mmu_gather *tlb, pud_t *pud,
unsigned long address)

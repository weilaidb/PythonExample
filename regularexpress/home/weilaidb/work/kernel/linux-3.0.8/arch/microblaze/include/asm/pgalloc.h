#define _ASM_MICROBLAZE_PGALLOC_H
#define PGDIR_ORDER	0
extern struct pgtable_cache_struct  quicklists;
#define pgd_quicklist		(quicklists.pgd_cache)
#define pmd_quicklist		((unsigned long *)0)
#define pte_quicklist		(quicklists.pte_cache)
#define pgtable_cache_size	(quicklists.pgtable_cache_sz)
extern unsigned long *zero_cache;
extern atomic_t zero_sz;
extern atomic_t zeropage_hits;
extern atomic_t zeropage_calls;
extern atomic_t zerototal;
#define zero_quicklist		(zero_cache)
#define zero_cache_sz	 	(zero_sz)
#define zero_cache_calls	(zeropage_calls)
#define zero_cache_hits		(zeropage_hits)
#define zero_cache_total	(zerototal)
extern unsigned long get_zero_page_fast(void);
extern void __bad_pte(pmd_t *pmd);
extern inline pgd_t *get_pgd_slow(void)
extern inline pgd_t *get_pgd_fast(void)
extern inline void free_pgd_fast(pgd_t *pgd)
extern inline void free_pgd_slow(pgd_t *pgd)
#define pgd_free(mm, pgd)        free_pgd_fast(pgd)
#define pgd_alloc(mm)		get_pgd_fast()
#define pmd_pgtable(pmd)	pmd_page(pmd)
#define pmd_alloc_one_fast(mm, address)	()
#define pmd_alloc_one(mm, address)	()
extern pte_t *pte_alloc_one_kernel(struct mm_struct *mm, unsigned long addr);
static inline struct page *pte_alloc_one(struct mm_struct *mm,
unsigned long address)
static inline pte_t *pte_alloc_one_fast(struct mm_struct *mm,
unsigned long address)
extern inline void pte_free_fast(pte_t *pte)
extern inline void pte_free_kernel(struct mm_struct *mm, pte_t *pte)
extern inline void pte_free_slow(struct page *ptepage)
extern inline void pte_free(struct mm_struct *mm, struct page *ptepage)
#define __pte_free_tlb(tlb, pte, addr)	pte_free((tlb)->mm, (pte))
#define pmd_populate(mm, pmd, pte) \
(pmd_val(*(pmd)) = (unsigned long)page_address(pte))
#define pmd_populate_kernel(mm, pmd, pte) \
(pmd_val(*(pmd)) = (unsigned long) (pte))
#define pmd_alloc_one(mm, address)	()
#define pmd_free(mm, x)			do  while (0)
#define __pmd_free_tlb(tlb, x, addr)	pmd_free((tlb)->mm, x)
#define pgd_populate(mm, pmd, pte)	BUG()
extern int do_check_pgt_cache(int, int);
#define check_pgt_cache()		do  while (0)

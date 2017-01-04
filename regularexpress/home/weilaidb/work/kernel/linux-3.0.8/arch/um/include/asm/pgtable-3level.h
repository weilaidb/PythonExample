#define __UM_PGTABLE_3LEVEL_H
#define PGDIR_SHIFT	30
#define PGDIR_SHIFT	31
#define PGDIR_SIZE	(1UL << PGDIR_SHIFT)
#define PGDIR_MASK	(~(PGDIR_SIZE-1))
#define PMD_SHIFT	21
#define PMD_SIZE	(1UL << PMD_SHIFT)
#define PMD_MASK	(~(PMD_SIZE-1))
#define PTRS_PER_PTE 512
#define PTRS_PER_PMD 512
#define PTRS_PER_PGD 512
#define PTRS_PER_PMD 1024
#define PTRS_PER_PGD 1024
#define USER_PTRS_PER_PGD ((TASK_SIZE + (PGDIR_SIZE - 1)) / PGDIR_SIZE)
#define FIRST_USER_ADDRESS	0
#define pte_ERROR(e) \
printk("%s:%d: bad pte %p(%016lx).\n", __FILE__, __LINE__, &(e), \
pte_val(e))
#define pmd_ERROR(e) \
printk("%s:%d: bad pmd %p(%016lx).\n", __FILE__, __LINE__, &(e), \
pmd_val(e))
#define pgd_ERROR(e) \
printk("%s:%d: bad pgd %p(%016lx).\n", __FILE__, __LINE__, &(e), \
pgd_val(e))
#define pud_none(x)	(!(pud_val(x) & ~_PAGE_NEWPAGE))
#define	pud_bad(x)	((pud_val(x) & (~PAGE_MASK & ~_PAGE_USER)) != _KERNPG_TABLE)
#define pud_present(x)	(pud_val(x) & _PAGE_PRESENT)
#define pud_populate(mm, pud, pmd) \
set_pud(pud, __pud(_PAGE_TABLE + __pa(pmd)))
#define set_pud(pudptr, pudval) set_64bit((u64 *) (pudptr), pud_val(pudval))
#define set_pud(pudptr, pudval) (*(pudptr) = (pudval))
static inline int pgd_newpage(pgd_t pgd)
static inline void pgd_mkuptodate(pgd_t pgd)
#define set_pmd(pmdptr, pmdval) set_64bit((u64 *) (pmdptr), pmd_val(pmdval))
#define set_pmd(pmdptr, pmdval) (*(pmdptr) = (pmdval))
struct mm_struct;
extern pmd_t *pmd_alloc_one(struct mm_struct *mm, unsigned long address);
static inline void pud_clear (pud_t *pud)
#define pud_page(pud) phys_to_page(pud_val(pud) & PAGE_MASK)
#define pud_page_vaddr(pud) ((unsigned long) __va(pud_val(pud) & PAGE_MASK))
#define pmd_offset(pud, address) ((pmd_t *) pud_page_vaddr(*(pud)) + \
pmd_index(address))
static inline unsigned long pte_pfn(pte_t pte)
static inline pte_t pfn_pte(pfn_t page_nr, pgprot_t pgprot)
static inline pmd_t pfn_pmd(pfn_t page_nr, pgprot_t pgprot)
#define PTE_FILE_MAX_BITS	32
#define pte_to_pgoff(p) ((p).pte >> 32)
#define pgoff_to_pte(off) ((pte_t) )
#define pte_to_pgoff(pte) ((pte).pte_high)
#define pgoff_to_pte(off) ((pte_t) )

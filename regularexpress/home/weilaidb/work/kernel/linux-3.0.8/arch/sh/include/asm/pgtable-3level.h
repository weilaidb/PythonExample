#define __ASM_SH_PGTABLE_3LEVEL_H
#define PAGETABLE_LEVELS	3
#define PTE_MAGNITUDE		3
#define PGDIR_SHIFT		30
#define PTRS_PER_PGD		4
#define USER_PTRS_PER_PGD	2
#define PMD_SHIFT	(PAGE_SHIFT + (PAGE_SHIFT - PTE_MAGNITUDE))
#define PMD_SIZE	(1UL << PMD_SHIFT)
#define PMD_MASK	(~(PMD_SIZE-1))
#define PTRS_PER_PMD	((1 << PGDIR_SHIFT) / PMD_SIZE)
#define pmd_ERROR(e) \
printk("%s:%d: bad pmd %016llx.\n", __FILE__, __LINE__, pmd_val(e))
typedef struct  pmd_t;
#define pmd_val(x)	((x).pmd)
#define __pmd(x)	((pmd_t)  )
static inline unsigned long pud_page_vaddr(pud_t pud)
#define pmd_index(address)	(((address) >> PMD_SHIFT) & (PTRS_PER_PMD-1))
static inline pmd_t *pmd_offset(pud_t *pud, unsigned long address)
#define pud_none(x)	(!pud_val(x))
#define pud_present(x)	(pud_val(x))
#define pud_clear(xp)	do  while (0)
#define	pud_bad(x)	(pud_val(x) & ~PAGE_MASK)
#define set_pud(pudptr, pudval) do  while(0)

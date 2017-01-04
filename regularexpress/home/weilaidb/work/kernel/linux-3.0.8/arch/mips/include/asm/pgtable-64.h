#define _ASM_PGTABLE_64_H
#define PGDIR_SHIFT	(PAGE_SHIFT + PAGE_SHIFT + PTE_ORDER - 3)
#define PMD_SHIFT	(PAGE_SHIFT + (PAGE_SHIFT + PTE_ORDER - 3))
#define PMD_SIZE	(1UL << PMD_SHIFT)
#define PMD_MASK	(~(PMD_SIZE-1))
#define PGDIR_SHIFT	(PMD_SHIFT + (PAGE_SHIFT + PMD_ORDER - 3))
#define PGDIR_SIZE	(1UL << PGDIR_SHIFT)
#define PGDIR_MASK	(~(PGDIR_SIZE-1))
#define PGD_ORDER		1
#define PUD_ORDER		aieeee_attempt_to_allocate_pud
#define PMD_ORDER		0
#define PTE_ORDER		0
#define PGD_ORDER		0
#define PUD_ORDER		aieeee_attempt_to_allocate_pud
#define PMD_ORDER		0
#define PTE_ORDER		0
#define PGD_ORDER		0
#define PUD_ORDER		aieeee_attempt_to_allocate_pud
#define PMD_ORDER		0
#define PTE_ORDER		0
#define PGD_ORDER		0
#define PUD_ORDER		aieeee_attempt_to_allocate_pud
#define PMD_ORDER		0
#define PTE_ORDER		0
#define PGD_ORDER		0
#define PUD_ORDER		aieeee_attempt_to_allocate_pud
#define PMD_ORDER		aieeee_attempt_to_allocate_pmd
#define PTE_ORDER		0
#define PTRS_PER_PGD	((PAGE_SIZE << PGD_ORDER) / sizeof(pgd_t))
#define PTRS_PER_PMD	((PAGE_SIZE << PMD_ORDER) / sizeof(pmd_t))
#define PTRS_PER_PTE	((PAGE_SIZE << PTE_ORDER) / sizeof(pte_t))
#if PGDIR_SIZE >= TASK_SIZE64
#define USER_PTRS_PER_PGD       (1)
#define USER_PTRS_PER_PGD	(TASK_SIZE64 / PGDIR_SIZE)
#define FIRST_USER_ADDRESS	0UL
#define VMALLOC_START		(MAP_BASE + (2 * PAGE_SIZE))
#define VMALLOC_END	\
(MAP_BASE + \
min(PTRS_PER_PGD * PTRS_PER_PMD * PTRS_PER_PTE * PAGE_SIZE, \
(1UL << cpu_vmbits)) - (1UL << 32))
#if defined(CONFIG_MODULES) && defined(KBUILD_64BIT_SYM32) && \
VMALLOC_START != CKSSEG
#define MODULE_START	CKSSEG
#define MODULE_END	(FIXADDR_START-2*PAGE_SIZE)
#define pte_ERROR(e) \
printk("%s:%d: bad pte %016lx.\n", __FILE__, __LINE__, pte_val(e))
#define pmd_ERROR(e) \
printk("%s:%d: bad pmd %016lx.\n", __FILE__, __LINE__, pmd_val(e))
#define pgd_ERROR(e) \
printk("%s:%d: bad pgd %016lx.\n", __FILE__, __LINE__, pgd_val(e))
extern pte_t invalid_pte_table[PTRS_PER_PTE];
extern pte_t empty_bad_page_table[PTRS_PER_PTE];
typedef struct  pmd_t;
#define pmd_val(x)	((x).pmd)
#define __pmd(x)	((pmd_t)  )
extern pmd_t invalid_pmd_table[PTRS_PER_PMD];
extern pmd_t empty_bad_pmd_table[PTRS_PER_PMD];
static inline int pmd_none(pmd_t pmd)
#define pmd_bad(pmd)		(pmd_val(pmd) & ~PAGE_MASK)
static inline int pmd_present(pmd_t pmd)
static inline void pmd_clear(pmd_t *pmdp)
static inline int pud_none(pud_t pud)
static inline int pud_bad(pud_t pud)
static inline int pud_present(pud_t pud)
static inline void pud_clear(pud_t *pudp)
#define pte_page(x)		pfn_to_page(pte_pfn(x))
#define pte_pfn(x)		((unsigned long)((x).pte >> (PAGE_SHIFT + 2)))
#define pfn_pte(pfn, prot)	__pte(((pfn) << (PAGE_SHIFT + 2)) | pgprot_val(prot))
#define pte_pfn(x)		((unsigned long)((x).pte >> _PFN_SHIFT))
#define pfn_pte(pfn, prot)	__pte(((pfn) << _PFN_SHIFT) | pgprot_val(prot))
#define __pgd_offset(address)	pgd_index(address)
#define __pud_offset(address)	(((address) >> PUD_SHIFT) & (PTRS_PER_PUD-1))
#define __pmd_offset(address)	pmd_index(address)
#define pgd_offset_k(address) pgd_offset(&init_mm, address)
#define pgd_index(address)	(((address) >> PGDIR_SHIFT) & (PTRS_PER_PGD-1))
#define pmd_index(address)	(((address) >> PMD_SHIFT) & (PTRS_PER_PMD-1))
#define pgd_offset(mm, addr)	((mm)->pgd + pgd_index(addr))
static inline unsigned long pud_page_vaddr(pud_t pud)
#define pud_phys(pud)		virt_to_phys((void *)pud_val(pud))
#define pud_page(pud)		(pfn_to_page(pud_phys(pud) >> PAGE_SHIFT))
static inline pmd_t *pmd_offset(pud_t * pud, unsigned long address)
#define __pte_offset(address)						\
(((address) >> PAGE_SHIFT) & (PTRS_PER_PTE - 1))
#define pte_offset(dir, address)					\
((pte_t *) pmd_page_vaddr(*(dir)) + __pte_offset(address))
#define pte_offset_kernel(dir, address)					\
((pte_t *) pmd_page_vaddr(*(dir)) + __pte_offset(address))
#define pte_offset_map(dir, address)					\
((pte_t *)page_address(pmd_page(*(dir))) + __pte_offset(address))
#define pte_unmap(pte) ((void)(pte))
extern void pgd_init(unsigned long page);
extern void pmd_init(unsigned long page, unsigned long pagetable);
static inline pte_t mk_swap_pte(unsigned long type, unsigned long offset)
#define __swp_type(x)		(((x).val >> 32) & 0xff)
#define __swp_offset(x)		((x).val >> 40)
#define __swp_entry(type, offset) ((swp_entry_t) )
#define __pte_to_swp_entry(pte)	((swp_entry_t) )
#define __swp_entry_to_pte(x)	((pte_t) )
#define PTE_FILE_MAX_BITS	56
#define pte_to_pgoff(_pte)	((_pte).pte >> 8)
#define pgoff_to_pte(off)	((pte_t) )

#define _ASM_PGTABLE_32_H
extern void add_wired_entry(unsigned long entrylo0, unsigned long entrylo1,
unsigned long entryhi, unsigned long pagemask);
extern int add_temporary_entry(unsigned long entrylo0, unsigned long entrylo1,
unsigned long entryhi, unsigned long pagemask);
#define PGDIR_SHIFT	(2 * PAGE_SHIFT + PTE_ORDER - PTE_T_LOG2)
#define PGDIR_SIZE	(1UL << PGDIR_SHIFT)
#define PGDIR_MASK	(~(PGDIR_SIZE-1))
#define __PGD_ORDER	(32 - 3 * PAGE_SHIFT + PGD_T_LOG2 + PTE_T_LOG2)
#define PGD_ORDER	(__PGD_ORDER >= 0 ? __PGD_ORDER : 0)
#define PUD_ORDER	aieeee_attempt_to_allocate_pud
#define PMD_ORDER	1
#define PTE_ORDER	0
#define PTRS_PER_PGD	(USER_PTRS_PER_PGD * 2)
#define PTRS_PER_PTE	((PAGE_SIZE << PTE_ORDER) / sizeof(pte_t))
#define USER_PTRS_PER_PGD	(0x80000000UL/PGDIR_SIZE)
#define FIRST_USER_ADDRESS	0
#define VMALLOC_START     MAP_BASE
#define PKMAP_BASE		(0xfe000000UL)
# define VMALLOC_END	(PKMAP_BASE-2*PAGE_SIZE)
# define VMALLOC_END	(FIXADDR_START-2*PAGE_SIZE)
#define pte_ERROR(e) \
printk("%s:%d: bad pte %016Lx.\n", __FILE__, __LINE__, pte_val(e))
#define pte_ERROR(e) \
printk("%s:%d: bad pte %08lx.\n", __FILE__, __LINE__, pte_val(e))
#define pgd_ERROR(e) \
printk("%s:%d: bad pgd %08lx.\n", __FILE__, __LINE__, pgd_val(e))
extern void load_pgd(unsigned long pg_dir);
extern pte_t invalid_pte_table[PAGE_SIZE/sizeof(pte_t)];
static inline int pmd_none(pmd_t pmd)
#define pmd_bad(pmd)		(pmd_val(pmd) & ~PAGE_MASK)
static inline int pmd_present(pmd_t pmd)
static inline void pmd_clear(pmd_t *pmdp)
#if defined(CONFIG_64BIT_PHYS_ADDR) && defined(CONFIG_CPU_MIPS32)
#define pte_page(x)		pfn_to_page(pte_pfn(x))
#define pte_pfn(x)		((unsigned long)((x).pte_high >> 6))
static inline pte_t
pfn_pte(unsigned long pfn, pgprot_t prot)
#define pte_page(x)		pfn_to_page(pte_pfn(x))
#define pte_pfn(x)		((unsigned long)((x).pte >> (PAGE_SHIFT + 2)))
#define pfn_pte(pfn, prot)	__pte(((pfn) << (PAGE_SHIFT + 2)) | pgprot_val(prot))
#define pte_pfn(x)		((unsigned long)((x).pte >> _PFN_SHIFT))
#define pfn_pte(pfn, prot)	__pte(((unsigned long long)(pfn) << _PFN_SHIFT) | pgprot_val(prot))
#define __pgd_offset(address)	pgd_index(address)
#define __pud_offset(address)	(((address) >> PUD_SHIFT) & (PTRS_PER_PUD-1))
#define __pmd_offset(address)	(((address) >> PMD_SHIFT) & (PTRS_PER_PMD-1))
#define pgd_offset_k(address) pgd_offset(&init_mm, address)
#define pgd_index(address)	(((address) >> PGDIR_SHIFT) & (PTRS_PER_PGD-1))
#define pgd_offset(mm, addr)	((mm)->pgd + pgd_index(addr))
#define __pte_offset(address)						\
(((address) >> PAGE_SHIFT) & (PTRS_PER_PTE - 1))
#define pte_offset(dir, address)					\
((pte_t *) pmd_page_vaddr(*(dir)) + __pte_offset(address))
#define pte_offset_kernel(dir, address)					\
((pte_t *) pmd_page_vaddr(*(dir)) + __pte_offset(address))
#define pte_offset_map(dir, address)                                    \
((pte_t *)page_address(pmd_page(*(dir))) + __pte_offset(address))
#define pte_unmap(pte) ((void)(pte))
#if defined(CONFIG_CPU_R3000) || defined(CONFIG_CPU_TX39XX)
#define __swp_type(x)		(((x).val >> 10) & 0x1f)
#define __swp_offset(x)		((x).val >> 15)
#define __swp_entry(type,offset)	\
((swp_entry_t) )
#define PTE_FILE_MAX_BITS	28
#define pte_to_pgoff(_pte)	((((_pte).pte >> 1 ) & 0x07) | \
(((_pte).pte >> 2 ) & 0x38) | \
(((_pte).pte >> 10) <<  6 ))
#define pgoff_to_pte(off)	((pte_t) )
#if defined(CONFIG_64BIT_PHYS_ADDR) && defined(CONFIG_CPU_MIPS32)
#define __swp_type(x)		(((x).val >> 2) & 0x1f)
#define __swp_offset(x) 	 ((x).val >> 7)
#define __swp_entry(type,offset)	\
((swp_entry_t)  )
#define __swp_type(x)		(((x).val >> 8) & 0x1f)
#define __swp_offset(x) 	 ((x).val >> 13)
#define __swp_entry(type,offset)	\
((swp_entry_t)  )
#if defined(CONFIG_64BIT_PHYS_ADDR) && defined(CONFIG_CPU_MIPS32)
#define PTE_FILE_MAX_BITS	30
#define pte_to_pgoff(_pte)	((_pte).pte_high >> 2)
#define pgoff_to_pte(off) 	((pte_t) )
#define PTE_FILE_MAX_BITS	28
#define pte_to_pgoff(_pte)	((((_pte).pte >> 1) & 0x7) | \
(((_pte).pte >> 2) & 0x8) | \
(((_pte).pte >> 8) <<  4))
#define pgoff_to_pte(off)	((pte_t) )
#if defined(CONFIG_64BIT_PHYS_ADDR) && defined(CONFIG_CPU_MIPS32)
#define __pte_to_swp_entry(pte) ((swp_entry_t) )
#define __swp_entry_to_pte(x)	((pte_t) )
#define __pte_to_swp_entry(pte)	((swp_entry_t) )
#define __swp_entry_to_pte(x)	((pte_t) )

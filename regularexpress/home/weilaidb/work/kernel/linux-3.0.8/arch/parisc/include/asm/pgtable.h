#define _PARISC_PGTABLE_H
struct vm_area_struct;
#define kern_addr_valid(addr)	(1)
#define set_pte(pteptr, pteval)                                 \
do while(0)
#define set_pte_at(mm,addr,ptep,pteval) set_pte(ptep,pteval)
#define pte_ERROR(e) \
printk("%s:%d: bad pte %08lx.\n", __FILE__, __LINE__, pte_val(e))
#define pmd_ERROR(e) \
printk("%s:%d: bad pmd %08lx.\n", __FILE__, __LINE__, (unsigned long)pmd_val(e))
#define pgd_ERROR(e) \
printk("%s:%d: bad pgd %08lx.\n", __FILE__, __LINE__, (unsigned long)pgd_val(e))
#define KERNEL_INITIAL_ORDER	24
#define KERNEL_INITIAL_SIZE	(1 << KERNEL_INITIAL_ORDER)
#if defined(CONFIG_64BIT) && defined(CONFIG_PARISC_PAGE_SIZE_4KB)
#define PT_NLEVELS	3
#define PGD_ORDER	1
#define PMD_ORDER	1
#define PGD_ALLOC_ORDER	2
#define PT_NLEVELS	2
#define PGD_ORDER	1
#define PGD_ALLOC_ORDER	PGD_ORDER
#define PLD_SHIFT	PAGE_SHIFT
#define PLD_SIZE	PAGE_SIZE
#define BITS_PER_PTE	(PAGE_SHIFT - BITS_PER_PTE_ENTRY)
#define PTRS_PER_PTE    (1UL << BITS_PER_PTE)
#define pgtable_cache_init()	do  while (0)
#define PMD_SHIFT       (PLD_SHIFT + BITS_PER_PTE)
#define PMD_SIZE	(1UL << PMD_SHIFT)
#define PMD_MASK	(~(PMD_SIZE-1))
#if PT_NLEVELS == 3
#define BITS_PER_PMD	(PAGE_SHIFT + PMD_ORDER - BITS_PER_PMD_ENTRY)
#define BITS_PER_PMD	0
#define PTRS_PER_PMD    (1UL << BITS_PER_PMD)
#define PGDIR_SHIFT	(PMD_SHIFT + BITS_PER_PMD)
#if (PGDIR_SHIFT + PAGE_SHIFT + PGD_ORDER - BITS_PER_PGD_ENTRY) > BITS_PER_LONG
#define BITS_PER_PGD	(BITS_PER_LONG - PGDIR_SHIFT)
#define BITS_PER_PGD	(PAGE_SHIFT + PGD_ORDER - BITS_PER_PGD_ENTRY)
#define PGDIR_SIZE	(1UL << PGDIR_SHIFT)
#define PGDIR_MASK	(~(PGDIR_SIZE-1))
#define PTRS_PER_PGD    (1UL << BITS_PER_PGD)
#define USER_PTRS_PER_PGD       PTRS_PER_PGD
#define MAX_ADDRBITS	(PGDIR_SHIFT + BITS_PER_PGD)
#define MAX_ADDRESS	(1UL << MAX_ADDRBITS)
#define SPACEID_SHIFT	(MAX_ADDRBITS - 32)
#define MAX_ADDRBITS	(BITS_PER_LONG)
#define MAX_ADDRESS	(1UL << MAX_ADDRBITS)
#define SPACEID_SHIFT	0
#if (KERNEL_INITIAL_ORDER) >= (PMD_SHIFT)
# define PT_INITIAL	(1 << (KERNEL_INITIAL_ORDER - PMD_SHIFT))
# define PT_INITIAL	(1)
#define FIRST_USER_ADDRESS	0
#define _PAGE_READ_BIT     31
#define _PAGE_WRITE_BIT    30
#define _PAGE_EXEC_BIT     29
#define _PAGE_GATEWAY_BIT  28
#define _PAGE_DMB_BIT      27
#define _PAGE_DIRTY_BIT    26
#define _PAGE_FILE_BIT	_PAGE_DIRTY_BIT
#define _PAGE_REFTRAP_BIT  25
#define _PAGE_NO_CACHE_BIT 24
#define _PAGE_ACCESSED_BIT 23
#define _PAGE_PRESENT_BIT  22
#define _PAGE_USER_BIT     20
#define xlate_pabit(x) (31 - x)
#define PTE_SHIFT	   	xlate_pabit(_PAGE_USER_BIT)
#define PFN_PTE_SHIFT		12
#define PTE_FILE_MAX_BITS	(BITS_PER_LONG - PTE_SHIFT)
#define pte_to_pgoff(pte) (pte_val(pte) >> PTE_SHIFT)
#define pgoff_to_pte(off) ((pte_t) )
#define _PAGE_READ     (1 << xlate_pabit(_PAGE_READ_BIT))
#define _PAGE_WRITE    (1 << xlate_pabit(_PAGE_WRITE_BIT))
#define _PAGE_RW       (_PAGE_READ | _PAGE_WRITE)
#define _PAGE_EXEC     (1 << xlate_pabit(_PAGE_EXEC_BIT))
#define _PAGE_GATEWAY  (1 << xlate_pabit(_PAGE_GATEWAY_BIT))
#define _PAGE_DMB      (1 << xlate_pabit(_PAGE_DMB_BIT))
#define _PAGE_DIRTY    (1 << xlate_pabit(_PAGE_DIRTY_BIT))
#define _PAGE_REFTRAP  (1 << xlate_pabit(_PAGE_REFTRAP_BIT))
#define _PAGE_NO_CACHE (1 << xlate_pabit(_PAGE_NO_CACHE_BIT))
#define _PAGE_ACCESSED (1 << xlate_pabit(_PAGE_ACCESSED_BIT))
#define _PAGE_PRESENT  (1 << xlate_pabit(_PAGE_PRESENT_BIT))
#define _PAGE_USER     (1 << xlate_pabit(_PAGE_USER_BIT))
#define _PAGE_FILE     (1 << xlate_pabit(_PAGE_FILE_BIT))
#define _PAGE_TABLE	(_PAGE_PRESENT | _PAGE_READ | _PAGE_WRITE |  _PAGE_DIRTY | _PAGE_ACCESSED)
#define _PAGE_CHG_MASK	(PAGE_MASK | _PAGE_ACCESSED | _PAGE_DIRTY)
#define _PAGE_KERNEL_RO	(_PAGE_PRESENT | _PAGE_READ | _PAGE_DIRTY | _PAGE_ACCESSED)
#define _PAGE_KERNEL_EXEC	(_PAGE_KERNEL_RO | _PAGE_EXEC)
#define _PAGE_KERNEL_RWX	(_PAGE_KERNEL_EXEC | _PAGE_WRITE)
#define _PAGE_KERNEL		(_PAGE_KERNEL_RO | _PAGE_WRITE)
#define _PxD_PRESENT_BIT   31
#define _PxD_ATTACHED_BIT  30
#define _PxD_VALID_BIT     29
#define PxD_FLAG_PRESENT  (1 << xlate_pabit(_PxD_PRESENT_BIT))
#define PxD_FLAG_ATTACHED (1 << xlate_pabit(_PxD_ATTACHED_BIT))
#define PxD_FLAG_VALID    (1 << xlate_pabit(_PxD_VALID_BIT))
#define PxD_FLAG_MASK     (0xf)
#define PxD_FLAG_SHIFT    (4)
#define PxD_VALUE_SHIFT   (8)
#define PAGE_NONE	__pgprot(_PAGE_PRESENT | _PAGE_USER | _PAGE_ACCESSED)
#define PAGE_SHARED	__pgprot(_PAGE_PRESENT | _PAGE_USER | _PAGE_READ | _PAGE_WRITE | _PAGE_ACCESSED)
#define PAGE_READONLY	__pgprot(_PAGE_PRESENT | _PAGE_USER | _PAGE_READ | _PAGE_ACCESSED)
#define PAGE_WRITEONLY  __pgprot(_PAGE_PRESENT | _PAGE_USER | _PAGE_WRITE | _PAGE_ACCESSED)
#define PAGE_EXECREAD   __pgprot(_PAGE_PRESENT | _PAGE_USER | _PAGE_READ | _PAGE_EXEC |_PAGE_ACCESSED)
#define PAGE_COPY       PAGE_EXECREAD
#define PAGE_RWX        __pgprot(_PAGE_PRESENT | _PAGE_USER | _PAGE_READ | _PAGE_WRITE | _PAGE_EXEC |_PAGE_ACCESSED)
#define PAGE_KERNEL	__pgprot(_PAGE_KERNEL)
#define PAGE_KERNEL_EXEC	__pgprot(_PAGE_KERNEL_EXEC)
#define PAGE_KERNEL_RWX	__pgprot(_PAGE_KERNEL_RWX)
#define PAGE_KERNEL_RO	__pgprot(_PAGE_KERNEL_RO)
#define PAGE_KERNEL_UNC	__pgprot(_PAGE_KERNEL | _PAGE_NO_CACHE)
#define PAGE_GATEWAY    __pgprot(_PAGE_PRESENT | _PAGE_USER | _PAGE_ACCESSED | _PAGE_GATEWAY| _PAGE_READ)
#define __P000  PAGE_NONE
#define __P001  PAGE_READONLY
#define __P010  __P000
#define __P011  __P001
#define __P100  PAGE_EXECREAD
#define __P101  PAGE_EXECREAD
#define __P110  __P100
#define __P111  __P101
#define __S000  PAGE_NONE
#define __S001  PAGE_READONLY
#define __S010  PAGE_WRITEONLY
#define __S011  PAGE_SHARED
#define __S100  PAGE_EXECREAD
#define __S101  PAGE_EXECREAD
#define __S110  PAGE_RWX
#define __S111  PAGE_RWX
extern pgd_t swapper_pg_dir[];
extern pte_t pg0[];
extern unsigned long *empty_zero_page;
#define ZERO_PAGE(vaddr) (virt_to_page(empty_zero_page))
#define pte_none(x)     (pte_val(x) == 0)
#define pte_present(x)	(pte_val(x) & _PAGE_PRESENT)
#define pte_clear(mm,addr,xp)	do  while (0)
#define pmd_flag(x)	(pmd_val(x) & PxD_FLAG_MASK)
#define pmd_address(x)	((unsigned long)(pmd_val(x) &~ PxD_FLAG_MASK) << PxD_VALUE_SHIFT)
#define pgd_flag(x)	(pgd_val(x) & PxD_FLAG_MASK)
#define pgd_address(x)	((unsigned long)(pgd_val(x) &~ PxD_FLAG_MASK) << PxD_VALUE_SHIFT)
#if PT_NLEVELS == 3
#define pmd_none(x)	(!pmd_val(x) || pmd_flag(x) == PxD_FLAG_ATTACHED)
#define pmd_none(x)	(!pmd_val(x))
#define pmd_bad(x)	(!(pmd_flag(x) & PxD_FLAG_VALID))
#define pmd_present(x)	(pmd_flag(x) & PxD_FLAG_PRESENT)
static inline void pmd_clear(pmd_t *pmd)
#if PT_NLEVELS == 3
#define pgd_page_vaddr(pgd) ((unsigned long) __va(pgd_address(pgd)))
#define pgd_page(pgd)	virt_to_page((void *)pgd_page_vaddr(pgd))
#define pgd_none(x)     (!pgd_val(x))
#define pgd_bad(x)      (!(pgd_flag(x) & PxD_FLAG_VALID))
#define pgd_present(x)  (pgd_flag(x) & PxD_FLAG_PRESENT)
static inline void pgd_clear(pgd_t *pgd)
static inline int pgd_none(pgd_t pgd)
static inline int pgd_bad(pgd_t pgd)
static inline int pgd_present(pgd_t pgd)
static inline void pgd_clear(pgd_t * pgdp)
static inline int pte_dirty(pte_t pte)
static inline int pte_young(pte_t pte)
static inline int pte_write(pte_t pte)
static inline int pte_file(pte_t pte)
static inline int pte_special(pte_t pte)
static inline pte_t pte_mkclean(pte_t pte)
static inline pte_t pte_mkold(pte_t pte)
static inline pte_t pte_wrprotect(pte_t pte)
static inline pte_t pte_mkdirty(pte_t pte)
static inline pte_t pte_mkyoung(pte_t pte)
static inline pte_t pte_mkwrite(pte_t pte)
static inline pte_t pte_mkspecial(pte_t pte)
#define __mk_pte(addr,pgprot) \
()
#define mk_pte(page, pgprot)	pfn_pte(page_to_pfn(page), (pgprot))
static inline pte_t pfn_pte(unsigned long pfn, pgprot_t pgprot)
static inline pte_t pte_modify(pte_t pte, pgprot_t newprot)
#define pte_pfn(x)		(pte_val(x) >> PFN_PTE_SHIFT)
#define pte_page(pte)		(pfn_to_page(pte_pfn(pte)))
#define pmd_page_vaddr(pmd)	((unsigned long) __va(pmd_address(pmd)))
#define __pmd_page(pmd) ((unsigned long) __va(pmd_address(pmd)))
#define pmd_page(pmd)	virt_to_page((void *)__pmd_page(pmd))
#define pgd_index(address) ((address) >> PGDIR_SHIFT)
#define pgd_offset(mm, address) \
((mm)->pgd + ((address) >> PGDIR_SHIFT))
#define pgd_offset_k(address) pgd_offset(&init_mm, address)
#if PT_NLEVELS == 3
#define pmd_offset(dir,address) \
((pmd_t *) pgd_page_vaddr(*(dir)) + (((address)>>PMD_SHIFT) & (PTRS_PER_PMD-1)))
#define pmd_offset(dir,addr) ((pmd_t *) dir)
#define pte_index(address) (((address) >> PAGE_SHIFT) & (PTRS_PER_PTE-1))
#define pte_offset_kernel(pmd, address) \
((pte_t *) pmd_page_vaddr(*(pmd)) + pte_index(address))
#define pte_offset_map(pmd, address) pte_offset_kernel(pmd, address)
#define pte_unmap(pte) do  while (0)
#define pte_unmap(pte)			do  while (0)
#define pte_unmap_nested(pte)		do  while (0)
extern void paging_init (void);
#define PG_dcache_dirty         PG_arch_1
extern void update_mmu_cache(struct vm_area_struct *, unsigned long, pte_t *);
#define __swp_type(x)                     ((x).val & 0x1f)
#define __swp_offset(x)                   ( (((x).val >> 6) &  0x7) | \
(((x).val >> 8) & ~0x7) )
#define __swp_entry(type, offset)         ((swp_entry_t) )
#define __pte_to_swp_entry(pte)		((swp_entry_t) )
#define __swp_entry_to_pte(x)		((pte_t) )
static inline int ptep_test_and_clear_young(struct vm_area_struct *vma, unsigned long addr, pte_t *ptep)
extern spinlock_t pa_dbit_lock;
struct mm_struct;
static inline pte_t ptep_get_and_clear(struct mm_struct *mm, unsigned long addr, pte_t *ptep)
static inline void ptep_set_wrprotect(struct mm_struct *mm, unsigned long addr, pte_t *ptep)
#define pte_same(A,B)	(pte_val(A) == pte_val(B))
#define _PAGE_SIZE_ENCODING_4K		0
#define _PAGE_SIZE_ENCODING_16K		1
#define _PAGE_SIZE_ENCODING_64K		2
#define _PAGE_SIZE_ENCODING_256K	3
#define _PAGE_SIZE_ENCODING_1M		4
#define _PAGE_SIZE_ENCODING_4M		5
#define _PAGE_SIZE_ENCODING_16M		6
#define _PAGE_SIZE_ENCODING_64M		7
#if defined(CONFIG_PARISC_PAGE_SIZE_4KB)
# define _PAGE_SIZE_ENCODING_DEFAULT _PAGE_SIZE_ENCODING_4K
#elif defined(CONFIG_PARISC_PAGE_SIZE_16KB)
# define _PAGE_SIZE_ENCODING_DEFAULT _PAGE_SIZE_ENCODING_16K
#elif defined(CONFIG_PARISC_PAGE_SIZE_64KB)
# define _PAGE_SIZE_ENCODING_DEFAULT _PAGE_SIZE_ENCODING_64K
#define io_remap_pfn_range(vma, vaddr, pfn, size, prot)		\
remap_pfn_range(vma, vaddr, pfn, size, prot)
#define pgprot_noncached(prot) __pgprot(pgprot_val(prot) | _PAGE_NO_CACHE)
#define HAVE_ARCH_UNMAPPED_AREA
#define __HAVE_ARCH_PTEP_TEST_AND_CLEAR_YOUNG
#define __HAVE_ARCH_PTEP_GET_AND_CLEAR
#define __HAVE_ARCH_PTEP_SET_WRPROTECT
#define __HAVE_ARCH_PTE_SAME

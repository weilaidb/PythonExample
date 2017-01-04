#define _ASM_MICROBLAZE_PGTABLE_H
#define io_remap_pfn_range(vma, vaddr, pfn, size, prot)		\
remap_pfn_range(vma, vaddr, pfn, size, prot)
extern int mem_init_done;
#define pgd_present(pgd)	(1)
#define pgd_none(pgd)		(0)
#define pgd_bad(pgd)		(0)
#define pgd_clear(pgdp)
#define kern_addr_valid(addr)	(1)
#define	pmd_offset(a, b)	((void *) 0)
#define PAGE_NONE		__pgprot(0)
#define PAGE_SHARED		__pgprot(0)
#define PAGE_COPY		__pgprot(0)
#define PAGE_READONLY		__pgprot(0)
#define PAGE_KERNEL		__pgprot(0)
#define pgprot_noncached(x)	(x)
#define __swp_type(x)		(0)
#define __swp_offset(x)		(0)
#define __swp_entry(typ, off)	((swp_entry_t) )
#define __pte_to_swp_entry(pte)	((swp_entry_t) )
#define __swp_entry_to_pte(x)	((pte_t) )
static inline int pte_file(pte_t pte)
#define ZERO_PAGE(vaddr)	()
#define swapper_pg_dir ((pgd_t *) NULL)
#define pgtable_cache_init()	do  while (0)
#define arch_enter_lazy_cpu_mode()	do  while (0)
#define pgprot_noncached_wc(prot)	prot
#define	VMALLOC_START	0
#define	VMALLOC_END	0xffffffff
#define FIRST_USER_ADDRESS	0
extern unsigned long va_to_phys(unsigned long address);
extern pte_t *va_to_pte(unsigned long address);
static inline int pte_special(pte_t pte)
static inline pte_t pte_mkspecial(pte_t pte)
#define VMALLOC_START	(CONFIG_KERNEL_START + \
max(32 * 1024 * 1024UL, memory_size))
#define VMALLOC_END	ioremap_bot
#define _PAGE_CACHE_CTL	(_PAGE_GUARDED | _PAGE_NO_CACHE | \
_PAGE_WRITETHRU)
#define pgprot_noncached(prot) \
(__pgprot((pgprot_val(prot) & ~_PAGE_CACHE_CTL) | \
_PAGE_NO_CACHE | _PAGE_GUARDED))
#define pgprot_noncached_wc(prot) \
(__pgprot((pgprot_val(prot) & ~_PAGE_CACHE_CTL) | \
_PAGE_NO_CACHE))
#define PMD_SHIFT	(PAGE_SHIFT + PTE_SHIFT)
#define PMD_SIZE	(1UL << PMD_SHIFT)
#define PMD_MASK	(~(PMD_SIZE-1))
#define PGDIR_SHIFT	PMD_SHIFT
#define PGDIR_SIZE	(1UL << PGDIR_SHIFT)
#define PGDIR_MASK	(~(PGDIR_SIZE-1))
#define PTRS_PER_PTE	(1 << PTE_SHIFT)
#define PTRS_PER_PMD	1
#define PTRS_PER_PGD	(1 << (32 - PGDIR_SHIFT))
#define USER_PTRS_PER_PGD	(TASK_SIZE / PGDIR_SIZE)
#define FIRST_USER_PGD_NR	0
#define USER_PGD_PTRS (PAGE_OFFSET >> PGDIR_SHIFT)
#define KERNEL_PGD_PTRS (PTRS_PER_PGD-USER_PGD_PTRS)
#define pte_ERROR(e) \
printk(KERN_ERR "%s:%d: bad pte "PTE_FMT".\n", \
__FILE__, __LINE__, pte_val(e))
#define pmd_ERROR(e) \
printk(KERN_ERR "%s:%d: bad pmd %08lx.\n", \
__FILE__, __LINE__, pmd_val(e))
#define pgd_ERROR(e) \
printk(KERN_ERR "%s:%d: bad pgd %08lx.\n", \
__FILE__, __LINE__, pgd_val(e))
#define	_PAGE_GUARDED	0x001
#define _PAGE_FILE	0x001
#define _PAGE_PRESENT	0x002
#define	_PAGE_NO_CACHE	0x004
#define	_PAGE_WRITETHRU	0x008
#define	_PAGE_USER	0x010
#define	_PAGE_RW	0x040
#define	_PAGE_DIRTY	0x080
#define _PAGE_HWWRITE	0x100
#define _PAGE_HWEXEC	0x200
#define _PAGE_ACCESSED	0x400
#define _PMD_PRESENT	PAGE_MASK
#define _PAGE_HASHPTE	0
#define _PTE_NONE_MASK	0
#define _PAGE_SHARED	0
#define _PAGE_HWWRITE	0
#define _PAGE_HWEXEC	0
#define _PAGE_EXEC	0
#define _PAGE_CHG_MASK	(PAGE_MASK | _PAGE_ACCESSED | _PAGE_DIRTY)
#define _PAGE_BASE	(_PAGE_PRESENT | _PAGE_ACCESSED)
#define _PAGE_WRENABLE	(_PAGE_RW | _PAGE_DIRTY | _PAGE_HWWRITE)
#define _PAGE_KERNEL \
(_PAGE_BASE | _PAGE_WRENABLE | _PAGE_SHARED | _PAGE_HWEXEC)
#define _PAGE_IO	(_PAGE_KERNEL | _PAGE_NO_CACHE | _PAGE_GUARDED)
#define PAGE_NONE	__pgprot(_PAGE_BASE)
#define PAGE_READONLY	__pgprot(_PAGE_BASE | _PAGE_USER)
#define PAGE_READONLY_X	__pgprot(_PAGE_BASE | _PAGE_USER | _PAGE_EXEC)
#define PAGE_SHARED	__pgprot(_PAGE_BASE | _PAGE_USER | _PAGE_RW)
#define PAGE_SHARED_X \
__pgprot(_PAGE_BASE | _PAGE_USER | _PAGE_RW | _PAGE_EXEC)
#define PAGE_COPY	__pgprot(_PAGE_BASE | _PAGE_USER)
#define PAGE_COPY_X	__pgprot(_PAGE_BASE | _PAGE_USER | _PAGE_EXEC)
#define PAGE_KERNEL	__pgprot(_PAGE_KERNEL)
#define PAGE_KERNEL_RO	__pgprot(_PAGE_BASE | _PAGE_SHARED)
#define PAGE_KERNEL_CI	__pgprot(_PAGE_IO)
#define __P000	PAGE_NONE
#define __P001	PAGE_READONLY_X
#define __P010	PAGE_COPY
#define __P011	PAGE_COPY_X
#define __P100	PAGE_READONLY
#define __P101	PAGE_READONLY_X
#define __P110	PAGE_COPY
#define __P111	PAGE_COPY_X
#define __S000	PAGE_NONE
#define __S001	PAGE_READONLY_X
#define __S010	PAGE_SHARED
#define __S011	PAGE_SHARED_X
#define __S100	PAGE_READONLY
#define __S101	PAGE_READONLY_X
#define __S110	PAGE_SHARED
#define __S111	PAGE_SHARED_X
extern unsigned long empty_zero_page[1024];
#define ZERO_PAGE(vaddr) (virt_to_page(empty_zero_page))
#define pte_none(pte)		((pte_val(pte) & ~_PTE_NONE_MASK) == 0)
#define pte_present(pte)	(pte_val(pte) & _PAGE_PRESENT)
#define pte_clear(mm, addr, ptep) \
do  while (0)
#define pmd_none(pmd)		(!pmd_val(pmd))
#define	pmd_bad(pmd)		((pmd_val(pmd) & _PMD_PRESENT) == 0)
#define	pmd_present(pmd)	((pmd_val(pmd) & _PMD_PRESENT) != 0)
#define	pmd_clear(pmdp)		do  while (0)
#define pte_page(x)		(mem_map + (unsigned long) \
((pte_val(x) - memory_start) >> PAGE_SHIFT))
#define PFN_SHIFT_OFFSET	(PAGE_SHIFT)
#define pte_pfn(x)		(pte_val(x) >> PFN_SHIFT_OFFSET)
#define pfn_pte(pfn, prot) \
__pte(((pte_basic_t)(pfn) << PFN_SHIFT_OFFSET) | pgprot_val(prot))
static inline int pgd_none(pgd_t pgd)
static inline int pgd_bad(pgd_t pgd)
static inline int pgd_present(pgd_t pgd)
#define pgd_clear(xp)				do  while (0)
#define pgd_page(pgd) \
((unsigned long) __va(pgd_val(pgd) & PAGE_MASK))
static inline int pte_read(pte_t pte)
static inline int pte_write(pte_t pte)
static inline int pte_exec(pte_t pte)
static inline int pte_dirty(pte_t pte)
static inline int pte_young(pte_t pte)
static inline int pte_file(pte_t pte)
static inline void pte_uncache(pte_t pte)
static inline void pte_cache(pte_t pte)
static inline pte_t pte_rdprotect(pte_t pte) \
static inline pte_t pte_wrprotect(pte_t pte) \
static inline pte_t pte_exprotect(pte_t pte) \
static inline pte_t pte_mkclean(pte_t pte) \
static inline pte_t pte_mkold(pte_t pte) \
static inline pte_t pte_mkread(pte_t pte) \
static inline pte_t pte_mkexec(pte_t pte) \
static inline pte_t pte_mkwrite(pte_t pte) \
static inline pte_t pte_mkdirty(pte_t pte) \
static inline pte_t pte_mkyoung(pte_t pte) \
static inline pte_t mk_pte_phys(phys_addr_t physpage, pgprot_t pgprot)
#define mk_pte(page, pgprot) \
()
static inline pte_t pte_modify(pte_t pte, pgprot_t newprot)
static inline unsigned long pte_update(pte_t *p, unsigned long clr,
unsigned long set)
static inline void set_pte(struct mm_struct *mm, unsigned long addr,
pte_t *ptep, pte_t pte)
static inline void set_pte_at(struct mm_struct *mm, unsigned long addr,
pte_t *ptep, pte_t pte)
#define __HAVE_ARCH_PTEP_TEST_AND_CLEAR_YOUNG
static inline int ptep_test_and_clear_young(struct vm_area_struct *vma,
unsigned long address, pte_t *ptep)
static inline int ptep_test_and_clear_dirty(struct mm_struct *mm,
unsigned long addr, pte_t *ptep)
#define __HAVE_ARCH_PTEP_GET_AND_CLEAR
static inline pte_t ptep_get_and_clear(struct mm_struct *mm,
unsigned long addr, pte_t *ptep)
static inline void ptep_mkdirty(struct mm_struct *mm,
unsigned long addr, pte_t *ptep)
#define pmd_page_kernel(pmd)	((unsigned long) (pmd_val(pmd) & PAGE_MASK))
#define pmd_page(pmd)	(pfn_to_page(__pa(pmd_val(pmd)) >> PAGE_SHIFT))
#define pgd_offset_k(address) pgd_offset(&init_mm, address)
#define pgd_index(address)	 ((address) >> PGDIR_SHIFT)
#define pgd_offset(mm, address)	 ((mm)->pgd + pgd_index(address))
static inline pmd_t *pmd_offset(pgd_t *dir, unsigned long address)
#define pte_index(address)		\
(((address) >> PAGE_SHIFT) & (PTRS_PER_PTE - 1))
#define pte_offset_kernel(dir, addr)	\
((pte_t *) pmd_page_kernel(*(dir)) + pte_index(addr))
#define pte_offset_map(dir, addr)		\
((pte_t *) kmap_atomic(pmd_page(*(dir))) + pte_index(addr))
#define pte_unmap(pte)		kunmap_atomic(pte)
#define PTE_FILE_MAX_BITS	29
#define pte_to_pgoff(pte)	(pte_val(pte) >> 3)
#define pgoff_to_pte(off)	((pte_t) )
extern pgd_t swapper_pg_dir[PTRS_PER_PGD];
#define __swp_type(entry)		((entry).val & 0x3f)
#define __swp_offset(entry)	((entry).val >> 6)
#define __swp_entry(type, offset) \
((swp_entry_t) )
#define __pte_to_swp_entry(pte)	((swp_entry_t) )
#define __swp_entry_to_pte(x)	((pte_t) )
extern unsigned long iopa(unsigned long addr);
#define	IOMAP_FULL_CACHING	0
#define	IOMAP_NOCACHE_SER	1
#define	IOMAP_NOCACHE_NONSER	2
#define	IOMAP_NO_COPYBACK	3
#define kern_addr_valid(addr)	(1)
#define io_remap_page_range remap_page_range
#define pgtable_cache_init()	do  while (0)
void do_page_fault(struct pt_regs *regs, unsigned long address,
unsigned long error_code);
void mapin_ram(void);
int map_page(unsigned long va, phys_addr_t pa, int flags);
extern int mem_init_done;
asmlinkage void __init mmu_init(void);
void __init *early_get_page(void);
extern unsigned long ioremap_bot, ioremap_base;
void *consistent_alloc(gfp_t gfp, size_t size, dma_addr_t *dma_handle);
void consistent_free(size_t size, void *vaddr);
void consistent_sync(void *vaddr, size_t size, int direction);
void consistent_sync_page(struct page *page, unsigned long offset,
size_t size, int direction);
void setup_memory(void);

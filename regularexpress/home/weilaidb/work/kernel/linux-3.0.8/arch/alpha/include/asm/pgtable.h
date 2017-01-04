#define _ALPHA_PGTABLE_H
struct mm_struct;
struct vm_area_struct;
#define set_pte(pteptr, pteval) ((*(pteptr)) = (pteval))
#define set_pte_at(mm,addr,ptep,pteval) set_pte(ptep,pteval)
#define PMD_SHIFT	(PAGE_SHIFT + (PAGE_SHIFT-3))
#define PMD_SIZE	(1UL << PMD_SHIFT)
#define PMD_MASK	(~(PMD_SIZE-1))
#define PGDIR_SHIFT	(PAGE_SHIFT + 2*(PAGE_SHIFT-3))
#define PGDIR_SIZE	(1UL << PGDIR_SHIFT)
#define PGDIR_MASK	(~(PGDIR_SIZE-1))
#define PTRS_PER_PTE	(1UL << (PAGE_SHIFT-3))
#define PTRS_PER_PMD	(1UL << (PAGE_SHIFT-3))
#define PTRS_PER_PGD	(1UL << (PAGE_SHIFT-3))
#define USER_PTRS_PER_PGD	(TASK_SIZE / PGDIR_SIZE)
#define FIRST_USER_ADDRESS	0
#define PTRS_PER_PAGE	(1UL << (PAGE_SHIFT-3))
#define VMALLOC_START		0xfffffe0000000000
#define VMALLOC_START		(-2*PGDIR_SIZE)
#define VMALLOC_END		(-PGDIR_SIZE)
#define _PAGE_VALID	0x0001
#define _PAGE_FOR	0x0002
#define _PAGE_FOW	0x0004
#define _PAGE_FOE	0x0008
#define _PAGE_ASM	0x0010
#define _PAGE_KRE	0x0100
#define _PAGE_URE	0x0200
#define _PAGE_KWE	0x1000
#define _PAGE_UWE	0x2000
#define _PAGE_DIRTY	0x20000
#define _PAGE_ACCESSED	0x40000
#define _PAGE_FILE	0x80000
#define __DIRTY_BITS	(_PAGE_DIRTY | _PAGE_KWE | _PAGE_UWE)
#define __ACCESS_BITS	(_PAGE_ACCESSED | _PAGE_KRE | _PAGE_URE)
#define _PFN_MASK	0xFFFFFFFF00000000UL
#define _PAGE_TABLE	(_PAGE_VALID | __DIRTY_BITS | __ACCESS_BITS)
#define _PAGE_CHG_MASK	(_PFN_MASK | __DIRTY_BITS | __ACCESS_BITS)
#define PAGE_NONE	__pgprot(_PAGE_VALID | __ACCESS_BITS | _PAGE_FOR | _PAGE_FOW | _PAGE_FOE)
#define PAGE_SHARED	__pgprot(_PAGE_VALID | __ACCESS_BITS)
#define PAGE_COPY	__pgprot(_PAGE_VALID | __ACCESS_BITS | _PAGE_FOW)
#define PAGE_READONLY	__pgprot(_PAGE_VALID | __ACCESS_BITS | _PAGE_FOW)
#define PAGE_KERNEL	__pgprot(_PAGE_VALID | _PAGE_ASM | _PAGE_KRE | _PAGE_KWE)
#define _PAGE_NORMAL(x) __pgprot(_PAGE_VALID | __ACCESS_BITS | (x))
#define _PAGE_P(x) _PAGE_NORMAL((x) | (((x) & _PAGE_FOW)?0:_PAGE_FOW))
#define _PAGE_S(x) _PAGE_NORMAL(x)
#define __P000	_PAGE_P(_PAGE_FOE | _PAGE_FOW | _PAGE_FOR)
#define __P001	_PAGE_P(_PAGE_FOE | _PAGE_FOW)
#define __P010	_PAGE_P(_PAGE_FOE)
#define __P011	_PAGE_P(_PAGE_FOE)
#define __P100	_PAGE_P(_PAGE_FOW | _PAGE_FOR)
#define __P101	_PAGE_P(_PAGE_FOW)
#define __P110	_PAGE_P(0)
#define __P111	_PAGE_P(0)
#define __S000	_PAGE_S(_PAGE_FOE | _PAGE_FOW | _PAGE_FOR)
#define __S001	_PAGE_S(_PAGE_FOE | _PAGE_FOW)
#define __S010	_PAGE_S(_PAGE_FOE)
#define __S011	_PAGE_S(_PAGE_FOE)
#define __S100	_PAGE_S(_PAGE_FOW | _PAGE_FOR)
#define __S101	_PAGE_S(_PAGE_FOW)
#define __S110	_PAGE_S(0)
#define __S111	_PAGE_S(0)
#define pgprot_noncached(prot)	(prot)
extern pte_t __bad_page(void);
extern pmd_t * __bad_pagetable(void);
extern unsigned long __zero_page(void);
#define BAD_PAGETABLE	__bad_pagetable()
#define BAD_PAGE	__bad_page()
#define ZERO_PAGE(vaddr)	(virt_to_page(ZERO_PGE))
#define BITS_PER_PTR			(8*sizeof(unsigned long))
#define PTR_MASK			(~(sizeof(void*)-1))
#define SIZEOF_PTR_LOG2			3
#define PAGE_PTR(address)		\
((unsigned long)(address)>>(PAGE_SHIFT-SIZEOF_PTR_LOG2)&PTR_MASK&~PAGE_MASK)
#if defined(CONFIG_ALPHA_GENERIC) && defined(USE_48_BIT_KSEG)
#error "EV6-only feature in a generic kernel"
#if defined(CONFIG_ALPHA_GENERIC) || \
(defined(CONFIG_ALPHA_EV6) && !defined(USE_48_BIT_KSEG))
#define KSEG_PFN	(0xc0000000000UL >> PAGE_SHIFT)
#define PHYS_TWIDDLE(pfn) \
((((pfn) & KSEG_PFN) == (0x40000000000UL >> PAGE_SHIFT)) \
? ((pfn) ^= KSEG_PFN) : (pfn))
#define PHYS_TWIDDLE(pfn) (pfn)
#define page_to_pa(page)	(((page) - mem_map) << PAGE_SHIFT)
#define pte_pfn(pte)	(pte_val(pte) >> 32)
#define pte_page(pte)	pfn_to_page(pte_pfn(pte))
#define mk_pte(page, pgprot)						\
()
extern inline pte_t pfn_pte(unsigned long physpfn, pgprot_t pgprot)
extern inline pte_t pte_modify(pte_t pte, pgprot_t newprot)
extern inline void pmd_set(pmd_t * pmdp, pte_t * ptep)
extern inline void pgd_set(pgd_t * pgdp, pmd_t * pmdp)
extern inline unsigned long
pmd_page_vaddr(pmd_t pmd)
#define pmd_page(pmd)	(mem_map + ((pmd_val(pmd) & _PFN_MASK) >> 32))
#define pgd_page(pgd)	(mem_map + ((pgd_val(pgd) & _PFN_MASK) >> 32))
extern inline unsigned long pgd_page_vaddr(pgd_t pgd)
extern inline int pte_none(pte_t pte)
extern inline int pte_present(pte_t pte)
extern inline void pte_clear(struct mm_struct *mm, unsigned long addr, pte_t *ptep)
extern inline int pmd_none(pmd_t pmd)
extern inline int pmd_bad(pmd_t pmd)
extern inline int pmd_present(pmd_t pmd)
extern inline void pmd_clear(pmd_t * pmdp)
extern inline int pgd_none(pgd_t pgd)
extern inline int pgd_bad(pgd_t pgd)
extern inline int pgd_present(pgd_t pgd)
extern inline void pgd_clear(pgd_t * pgdp)
extern inline int pte_write(pte_t pte)
extern inline int pte_dirty(pte_t pte)
extern inline int pte_young(pte_t pte)
extern inline int pte_file(pte_t pte)
extern inline int pte_special(pte_t pte)
extern inline pte_t pte_wrprotect(pte_t pte)
extern inline pte_t pte_mkclean(pte_t pte)
extern inline pte_t pte_mkold(pte_t pte)
extern inline pte_t pte_mkwrite(pte_t pte)
extern inline pte_t pte_mkdirty(pte_t pte)
extern inline pte_t pte_mkyoung(pte_t pte)
extern inline pte_t pte_mkspecial(pte_t pte)
#define PAGE_DIR_OFFSET(tsk,address) pgd_offset((tsk),(address))
#define pgd_offset_k(address) pgd_offset(&init_mm, (address))
#define pgd_index(address)	(((address) >> PGDIR_SHIFT) & (PTRS_PER_PGD-1))
#define pgd_offset(mm, address)	((mm)->pgd+pgd_index(address))
extern inline pmd_t * pmd_offset(pgd_t * dir, unsigned long address)
extern inline pte_t * pte_offset_kernel(pmd_t * dir, unsigned long address)
#define pte_offset_map(dir,addr)	pte_offset_kernel((dir),(addr))
#define pte_unmap(pte)			do  while (0)
extern pgd_t swapper_pg_dir[1024];
extern inline void update_mmu_cache(struct vm_area_struct * vma,
unsigned long address, pte_t *ptep)
extern inline pte_t mk_swap_pte(unsigned long type, unsigned long offset)
#define __swp_type(x)		(((x).val >> 32) & 0xff)
#define __swp_offset(x)		((x).val >> 40)
#define __swp_entry(type, off)	((swp_entry_t) )
#define __pte_to_swp_entry(pte)	((swp_entry_t) )
#define __swp_entry_to_pte(x)	((pte_t) )
#define pte_to_pgoff(pte)	(pte_val(pte) >> 32)
#define pgoff_to_pte(off)	((pte_t) )
#define PTE_FILE_MAX_BITS	32
#define kern_addr_valid(addr)	(1)
#define io_remap_pfn_range(vma, start, pfn, size, prot)	\
remap_pfn_range(vma, start, pfn, size, prot)
#define pte_ERROR(e) \
printk("%s:%d: bad pte %016lx.\n", __FILE__, __LINE__, pte_val(e))
#define pmd_ERROR(e) \
printk("%s:%d: bad pmd %016lx.\n", __FILE__, __LINE__, pmd_val(e))
#define pgd_ERROR(e) \
printk("%s:%d: bad pgd %016lx.\n", __FILE__, __LINE__, pgd_val(e))
extern void paging_init(void);
#define pgtable_cache_init()	do  while (0)
#define HAVE_ARCH_UNMAPPED_AREA

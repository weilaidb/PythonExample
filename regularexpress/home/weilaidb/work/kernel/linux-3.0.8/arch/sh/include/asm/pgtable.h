#define __ASM_SH_PGTABLE_H
extern unsigned long empty_zero_page[PAGE_SIZE / sizeof(unsigned long)];
#define ZERO_PAGE(vaddr) (virt_to_page(empty_zero_page))
#define NEFF		32
#define	NEFF_SIGN	(1LL << (NEFF - 1))
#define	NEFF_MASK	(-1LL << NEFF)
static inline unsigned long long neff_sign_extend(unsigned long val)
#define NPHYS		29
#define NPHYS		32
#define	NPHYS_SIGN	(1LL << (NPHYS - 1))
#define	NPHYS_MASK	(-1LL << NPHYS)
#define PGDIR_SIZE	(1UL << PGDIR_SHIFT)
#define PGDIR_MASK	(~(PGDIR_SIZE-1))
#define PTRS_PER_PTE	(PAGE_SIZE / (1 << PTE_MAGNITUDE))
#define FIRST_USER_ADDRESS	0
#define PHYS_ADDR_MASK29		0x1fffffff
#define PHYS_ADDR_MASK32		0xffffffff
static inline unsigned long phys_addr_mask(void)
#define PTE_PHYS_MASK		(phys_addr_mask() & PAGE_MASK)
#define PTE_FLAGS_MASK		(~(PTE_PHYS_MASK) << PAGE_SHIFT)
#define VMALLOC_START	(P3SEG)
#define VMALLOC_START	(0xf0000000)
#define VMALLOC_END	(FIXADDR_START-2*PAGE_SIZE)
#if defined(CONFIG_SUPERH32)
#define __P000	PAGE_NONE
#define __P001	PAGE_READONLY
#define __P010	PAGE_COPY
#define __P011	PAGE_COPY
#define __P100	PAGE_EXECREAD
#define __P101	PAGE_EXECREAD
#define __P110	PAGE_COPY
#define __P111	PAGE_COPY
#define __S000	PAGE_NONE
#define __S001	PAGE_READONLY
#define __S010	PAGE_WRITEONLY
#define __S011	PAGE_SHARED
#define __S100	PAGE_EXECREAD
#define __S101	PAGE_EXECREAD
#define __S110	PAGE_RWX
#define __S111	PAGE_RWX
typedef pte_t *pte_addr_t;
#define kern_addr_valid(addr)	(1)
#define io_remap_pfn_range(vma, vaddr, pfn, size, prot)		\
remap_pfn_range(vma, vaddr, pfn, size, prot)
#define pte_pfn(x)		((unsigned long)(((x).pte_low >> PAGE_SHIFT)))
extern void pgtable_cache_init(void);
struct vm_area_struct;
struct mm_struct;
extern void __update_cache(struct vm_area_struct *vma,
unsigned long address, pte_t pte);
extern void __update_tlb(struct vm_area_struct *vma,
unsigned long address, pte_t pte);
static inline void
update_mmu_cache(struct vm_area_struct *vma, unsigned long address, pte_t *ptep)
extern pgd_t swapper_pg_dir[PTRS_PER_PGD];
extern void paging_init(void);
extern void page_table_range_init(unsigned long start, unsigned long end,
pgd_t *pgd);
#define HAVE_ARCH_UNMAPPED_AREA
#define HAVE_ARCH_UNMAPPED_AREA_TOPDOWN
#define __HAVE_ARCH_PTE_SPECIAL

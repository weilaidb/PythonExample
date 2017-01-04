#define _M68K_PGTABLE_H
#define set_pte(pteptr, pteval)					\
do while(0)
#define set_pte_at(mm,addr,ptep,pteval) set_pte(ptep,pteval)
#define PMD_SHIFT       17
#define PMD_SHIFT	22
#define PMD_SIZE	(1UL << PMD_SHIFT)
#define PMD_MASK	(~(PMD_SIZE-1))
#define PGDIR_SHIFT     17
#define PGDIR_SHIFT	25
#define PGDIR_SIZE	(1UL << PGDIR_SHIFT)
#define PGDIR_MASK	(~(PGDIR_SIZE-1))
#define PTRS_PER_PTE   16
#define PTRS_PER_PMD   1
#define PTRS_PER_PGD   2048
#define PTRS_PER_PTE	1024
#define PTRS_PER_PMD	8
#define PTRS_PER_PGD	128
#define USER_PTRS_PER_PGD	(TASK_SIZE/PGDIR_SIZE)
#define FIRST_USER_ADDRESS	0
#define KMAP_START     0x0DC00000
#define KMAP_END       0x0E000000
#define	KMAP_START	0xd0000000
#define	KMAP_END	0xf0000000
#define VMALLOC_OFFSET	(8*1024*1024)
#define VMALLOC_START (((unsigned long) high_memory + VMALLOC_OFFSET) & ~(VMALLOC_OFFSET-1))
#define VMALLOC_END KMAP_START
extern unsigned long m68k_vmalloc_end;
#define VMALLOC_START 0x0f800000
#define VMALLOC_END m68k_vmalloc_end
extern void *empty_zero_page;
#define ZERO_PAGE(vaddr)	(virt_to_page(empty_zero_page))
#define BITS_PER_PTR			(8*sizeof(unsigned long))
#define PTR_MASK			(~(sizeof(void*)-1))
#define SIZEOF_PTR_LOG2			       2
extern void kernel_set_cachemode(void *addr, unsigned long size, int cmode);
static inline void update_mmu_cache(struct vm_area_struct *vma,
unsigned long address, pte_t *ptep)
#define kern_addr_valid(addr)	(1)
#define io_remap_pfn_range(vma, vaddr, pfn, size, prot)		\
remap_pfn_range(vma, vaddr, pfn, size, prot)
# define __SUN3_PAGE_NOCACHE	SUN3_PAGE_NOCACHE
# define __SUN3_PAGE_NOCACHE	0
#define pgprot_noncached(prot)							\
(MMU_IS_SUN3								\
? (__pgprot(pgprot_val(prot) | __SUN3_PAGE_NOCACHE))			\
: ((MMU_IS_851 || MMU_IS_030)						\
? (__pgprot(pgprot_val(prot) | _PAGE_NOCACHE030))			\
: (MMU_IS_040 || MMU_IS_060)					\
? (__pgprot((pgprot_val(prot) & _CACHEMASK040) | _PAGE_NOCACHE_S))	\
: (prot)))
#define pgtable_cache_init()	do  while (0)
#define check_pgt_cache()	do  while (0)

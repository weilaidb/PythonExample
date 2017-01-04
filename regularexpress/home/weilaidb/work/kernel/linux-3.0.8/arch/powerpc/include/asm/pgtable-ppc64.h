#define _ASM_POWERPC_PGTABLE_PPC64_H_
#define FIRST_USER_ADDRESS	0
#define PGTABLE_EADDR_SIZE (PTE_INDEX_SIZE + PMD_INDEX_SIZE + \
PUD_INDEX_SIZE + PGD_INDEX_SIZE + PAGE_SHIFT)
#define PGTABLE_RANGE (ASM_CONST(1) << PGTABLE_EADDR_SIZE)
#if TASK_SIZE_USER64 > PGTABLE_RANGE
#error TASK_SIZE_USER64 exceeds pagetable range
#if TASK_SIZE_USER64 > (1UL << (USER_ESID_BITS + SID_SHIFT))
#error TASK_SIZE_USER64 exceeds user VSID range
#define KERN_VIRT_START ASM_CONST(0x8000000000000000)
#define KERN_VIRT_START ASM_CONST(0xD000000000000000)
#define KERN_VIRT_SIZE	PGTABLE_RANGE
#define VMALLOC_START	KERN_VIRT_START
#define VMALLOC_SIZE	(KERN_VIRT_SIZE >> 2)
#define VMALLOC_SIZE	(KERN_VIRT_SIZE >> 1)
#define VMALLOC_END	(VMALLOC_START + VMALLOC_SIZE)
#define KERN_IO_START	(KERN_VIRT_START + (KERN_VIRT_SIZE >> 1))
#define FULL_IO_SIZE	0x80000000ul
#define  ISA_IO_BASE	(KERN_IO_START)
#define  ISA_IO_END	(KERN_IO_START + 0x10000ul)
#define  PHB_IO_BASE	(ISA_IO_END)
#define  PHB_IO_END	(KERN_IO_START + FULL_IO_SIZE)
#define IOREMAP_BASE	(PHB_IO_END)
#define IOREMAP_END	(KERN_VIRT_START + KERN_VIRT_SIZE)
#define REGION_SHIFT		60UL
#define REGION_MASK		(0xfUL << REGION_SHIFT)
#define REGION_ID(ea)		(((unsigned long)(ea)) >> REGION_SHIFT)
#define VMALLOC_REGION_ID	(REGION_ID(VMALLOC_START))
#define KERNEL_REGION_ID	(REGION_ID(PAGE_OFFSET))
#define VMEMMAP_REGION_ID	(0xfUL)
#define USER_REGION_ID		(0UL)
#define VMEMMAP_BASE		VMALLOC_END
#define VMEMMAP_END		KERN_IO_START
#define VMEMMAP_BASE		(VMEMMAP_REGION_ID << REGION_SHIFT)
#define vmemmap			((struct page *)VMEMMAP_BASE)
#define HAVE_ARCH_UNMAPPED_AREA
#define HAVE_ARCH_UNMAPPED_AREA_TOPDOWN
#define __real_pte(e,p)		((real_pte_t))
#define __rpte_to_pte(r)	((r).pte)
#define __real_pte(e,p)		(e)
#define __rpte_to_pte(r)	(__pte(r))
#define __rpte_to_hidx(r,index)	(pte_val(__rpte_to_pte(r)) >> 12)
#define pte_iterate_hashed_subpages(rpte, psize, va, index, shift)       \
do  while(0)
#define pte_pagesize_index(mm, addr, pte)	get_slice_psize(mm, addr)
#define pte_pagesize_index(mm, addr, pte)	MMU_PAGE_4K
#define PMD_BAD_BITS		(PTE_TABLE_SIZE-1)
#define PUD_BAD_BITS		(PMD_TABLE_SIZE-1)
#define pmd_set(pmdp, pmdval) 	(pmd_val(*(pmdp)) = (pmdval))
#define pmd_none(pmd)		(!pmd_val(pmd))
#define	pmd_bad(pmd)		(!is_kernel_addr(pmd_val(pmd)) \
|| (pmd_val(pmd) & PMD_BAD_BITS))
#define	pmd_present(pmd)	(pmd_val(pmd) != 0)
#define	pmd_clear(pmdp)		(pmd_val(*(pmdp)) = 0)
#define pmd_page_vaddr(pmd)	(pmd_val(pmd) & ~PMD_MASKED_BITS)
#define pmd_page(pmd)		virt_to_page(pmd_page_vaddr(pmd))
#define pud_set(pudp, pudval)	(pud_val(*(pudp)) = (pudval))
#define pud_none(pud)		(!pud_val(pud))
#define	pud_bad(pud)		(!is_kernel_addr(pud_val(pud)) \
|| (pud_val(pud) & PUD_BAD_BITS))
#define pud_present(pud)	(pud_val(pud) != 0)
#define pud_clear(pudp)		(pud_val(*(pudp)) = 0)
#define pud_page_vaddr(pud)	(pud_val(pud) & ~PUD_MASKED_BITS)
#define pud_page(pud)		virt_to_page(pud_page_vaddr(pud))
#define pgd_set(pgdp, pudp)	()
#define pgd_index(address) (((address) >> (PGDIR_SHIFT)) & 0x1ff)
#define pgd_offset(mm, address)	 ((mm)->pgd + pgd_index(address))
#define pmd_offset(pudp,addr) \
(((pmd_t *) pud_page_vaddr(*(pudp))) + (((addr) >> PMD_SHIFT) & (PTRS_PER_PMD - 1)))
#define pte_offset_kernel(dir,addr) \
(((pte_t *) pmd_page_vaddr(*(dir))) + (((addr) >> PAGE_SHIFT) & (PTRS_PER_PTE - 1)))
#define pte_offset_map(dir,addr)	pte_offset_kernel((dir), (addr))
#define pte_unmap(pte)			do  while(0)
#define pgd_offset_k(address) pgd_offset(&init_mm, address)
static inline unsigned long pte_update(struct mm_struct *mm,
unsigned long addr,
pte_t *ptep, unsigned long clr,
int huge)
static inline int __ptep_test_and_clear_young(struct mm_struct *mm,
unsigned long addr, pte_t *ptep)
#define __HAVE_ARCH_PTEP_TEST_AND_CLEAR_YOUNG
#define ptep_test_and_clear_young(__vma, __addr, __ptep)		   \
()
#define __HAVE_ARCH_PTEP_SET_WRPROTECT
static inline void ptep_set_wrprotect(struct mm_struct *mm, unsigned long addr,
pte_t *ptep)
static inline void huge_ptep_set_wrprotect(struct mm_struct *mm,
unsigned long addr, pte_t *ptep)
#define __HAVE_ARCH_PTEP_CLEAR_YOUNG_FLUSH
#define ptep_clear_flush_young(__vma, __address, __ptep)		\
()
#define __HAVE_ARCH_PTEP_GET_AND_CLEAR
static inline pte_t ptep_get_and_clear(struct mm_struct *mm,
unsigned long addr, pte_t *ptep)
static inline void pte_clear(struct mm_struct *mm, unsigned long addr,
pte_t * ptep)
static inline void __ptep_set_access_flags(pte_t *ptep, pte_t entry)
#define __HAVE_ARCH_PTE_SAME
#define pte_same(A,B)	(((pte_val(A) ^ pte_val(B)) & ~_PAGE_HPTEFLAGS) == 0)
#define pte_ERROR(e) \
printk("%s:%d: bad pte %08lx.\n", __FILE__, __LINE__, pte_val(e))
#define pmd_ERROR(e) \
printk("%s:%d: bad pmd %08lx.\n", __FILE__, __LINE__, pmd_val(e))
#define pgd_ERROR(e) \
printk("%s:%d: bad pgd %08lx.\n", __FILE__, __LINE__, pgd_val(e))
#define __swp_type(entry)	(((entry).val >> 1) & 0x3f)
#define __swp_offset(entry)	((entry).val >> 8)
#define __swp_entry(type, offset) ((swp_entry_t))
#define __pte_to_swp_entry(pte)	((swp_entry_t))
#define __swp_entry_to_pte(x)	((pte_t) )
#define pte_to_pgoff(pte)	(pte_val(pte) >> PTE_RPN_SHIFT)
#define pgoff_to_pte(off)	((pte_t) )
#define PTE_FILE_MAX_BITS	(BITS_PER_LONG - PTE_RPN_SHIFT)
void pgtable_cache_add(unsigned shift, void (*ctor)(void *));
void pgtable_cache_init(void);static inline pte_t *find_linux_pte(pgd_t *pgdir, unsigned long ea)
pte_t *find_linux_pte_or_hugepte(pgd_t *pgdir, unsigned long ea,
unsigned *shift);
static inline pte_t *find_linux_pte_or_hugepte(pgd_t *pgdir, unsigned long ea,
unsigned *shift)

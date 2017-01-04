#define _ASM_S390_PGTABLE_H
extern pgd_t swapper_pg_dir[] __attribute__ ((aligned (4096)));
extern void paging_init(void);
extern void vmem_map_init(void);
extern void fault_init(void);
#define update_mmu_cache(vma, address, ptep)     do  while (0)
extern unsigned long empty_zero_page;
extern unsigned long zero_page_mask;
#define ZERO_PAGE(vaddr) \
(virt_to_page((void *)(empty_zero_page + \
(((unsigned long)(vaddr)) &zero_page_mask))))
#define is_zero_pfn is_zero_pfn
static inline int is_zero_pfn(unsigned long pfn)
#define my_zero_pfn(addr)	page_to_pfn(ZERO_PAGE(addr))
# define PMD_SHIFT	20
# define PUD_SHIFT	20
# define PGDIR_SHIFT	20
# define PMD_SHIFT	20
# define PUD_SHIFT	31
# define PGDIR_SHIFT	42
#define PMD_SIZE        (1UL << PMD_SHIFT)
#define PMD_MASK        (~(PMD_SIZE-1))
#define PUD_SIZE	(1UL << PUD_SHIFT)
#define PUD_MASK	(~(PUD_SIZE-1))
#define PGDIR_SIZE	(1UL << PGDIR_SHIFT)
#define PGDIR_MASK	(~(PGDIR_SIZE-1))
#define PTRS_PER_PTE	256
#define PTRS_PER_PMD	1
#define PTRS_PER_PUD	1
#define PTRS_PER_PMD	2048
#define PTRS_PER_PUD	2048
#define PTRS_PER_PGD	2048
#define FIRST_USER_ADDRESS  0
#define pte_ERROR(e) \
printk("%s:%d: bad pte %p.\n", __FILE__, __LINE__, (void *) pte_val(e))
#define pmd_ERROR(e) \
printk("%s:%d: bad pmd %p.\n", __FILE__, __LINE__, (void *) pmd_val(e))
#define pud_ERROR(e) \
printk("%s:%d: bad pud %p.\n", __FILE__, __LINE__, (void *) pud_val(e))
#define pgd_ERROR(e) \
printk("%s:%d: bad pgd %p.\n", __FILE__, __LINE__, (void *) pgd_val(e))
extern unsigned long VMALLOC_START;
#define VMALLOC_SIZE	(96UL << 20)
#define VMALLOC_END	0x7e000000UL
#define VMEM_MAP_END	0x80000000UL
#define VMALLOC_SIZE	(128UL << 30)
#define VMALLOC_END	0x3e000000000UL
#define VMEM_MAP_END	0x40000000000UL
#define VMEM_MAX_PAGES	((VMEM_MAP_END - VMALLOC_END) / sizeof(struct page))
#define VMEM_MAX_PFN	min(VMALLOC_START >> PAGE_SHIFT, VMEM_MAX_PAGES)
#define VMEM_MAX_PHYS	((VMEM_MAX_PFN << PAGE_SHIFT) & ~((16 << 20) - 1))
#define vmemmap		((struct page *) VMALLOC_END)
#define _PAGE_CO	0x100
#define _PAGE_RO	0x200
#define _PAGE_INVALID	0x400
#define _PAGE_SWT	0x001
#define _PAGE_SWX	0x002
#define _PAGE_SWC	0x004
#define _PAGE_SWR	0x008
#define _PAGE_SPECIAL	0x010
#define __HAVE_ARCH_PTE_SPECIAL
#define _PAGE_CHG_MASK	(PAGE_MASK | _PAGE_SPECIAL | _PAGE_SWC | _PAGE_SWR)
#define _PAGE_TYPE_EMPTY	0x400
#define _PAGE_TYPE_NONE		0x401
#define _PAGE_TYPE_SWAP		0x403
#define _PAGE_TYPE_FILE		0x601
#define _PAGE_TYPE_RO		0x200
#define _PAGE_TYPE_RW		0x000
#define _HPAGE_TYPE_EMPTY	0x020
#define _HPAGE_TYPE_NONE	0x220
#define _HPAGE_TYPE_RO		0x200
#define _HPAGE_TYPE_RW		0x000
#define _ASCE_SPACE_SWITCH	0x80000000UL
#define _ASCE_ORIGIN_MASK	0x7ffff000UL
#define _ASCE_PRIVATE_SPACE	0x100
#define _ASCE_ALT_EVENT		0x80
#define _ASCE_TABLE_LENGTH	0x7f
#define _SEGMENT_ENTRY_ORIGIN	0x7fffffc0UL
#define _SEGMENT_ENTRY_RO	0x200
#define _SEGMENT_ENTRY_INV	0x20
#define _SEGMENT_ENTRY_COMMON	0x10
#define _SEGMENT_ENTRY_PTL	0x0f
#define _SEGMENT_ENTRY		(_SEGMENT_ENTRY_PTL)
#define _SEGMENT_ENTRY_EMPTY	(_SEGMENT_ENTRY_INV)
#define RCP_ACC_BITS	0xf0000000UL
#define RCP_FP_BIT	0x08000000UL
#define RCP_PCL_BIT	0x00800000UL
#define RCP_HR_BIT	0x00400000UL
#define RCP_HC_BIT	0x00200000UL
#define RCP_GR_BIT	0x00040000UL
#define RCP_GC_BIT	0x00020000UL
#define KVM_UR_BIT	0x00008000UL
#define KVM_UC_BIT	0x00004000UL
#define _ASCE_ORIGIN		~0xfffUL
#define _ASCE_PRIVATE_SPACE	0x100
#define _ASCE_ALT_EVENT		0x80
#define _ASCE_SPACE_SWITCH	0x40
#define _ASCE_REAL_SPACE	0x20
#define _ASCE_TYPE_MASK		0x0c
#define _ASCE_TYPE_REGION1	0x0c
#define _ASCE_TYPE_REGION2	0x08
#define _ASCE_TYPE_REGION3	0x04
#define _ASCE_TYPE_SEGMENT	0x00
#define _ASCE_TABLE_LENGTH	0x03
#define _REGION_ENTRY_ORIGIN	~0xfffUL
#define _REGION_ENTRY_INV	0x20
#define _REGION_ENTRY_TYPE_MASK	0x0c
#define _REGION_ENTRY_TYPE_R1	0x0c
#define _REGION_ENTRY_TYPE_R2	0x08
#define _REGION_ENTRY_TYPE_R3	0x04
#define _REGION_ENTRY_LENGTH	0x03
#define _REGION1_ENTRY		(_REGION_ENTRY_TYPE_R1 | _REGION_ENTRY_LENGTH)
#define _REGION1_ENTRY_EMPTY	(_REGION_ENTRY_TYPE_R1 | _REGION_ENTRY_INV)
#define _REGION2_ENTRY		(_REGION_ENTRY_TYPE_R2 | _REGION_ENTRY_LENGTH)
#define _REGION2_ENTRY_EMPTY	(_REGION_ENTRY_TYPE_R2 | _REGION_ENTRY_INV)
#define _REGION3_ENTRY		(_REGION_ENTRY_TYPE_R3 | _REGION_ENTRY_LENGTH)
#define _REGION3_ENTRY_EMPTY	(_REGION_ENTRY_TYPE_R3 | _REGION_ENTRY_INV)
#define _SEGMENT_ENTRY_ORIGIN	~0x7ffUL
#define _SEGMENT_ENTRY_RO	0x200
#define _SEGMENT_ENTRY_INV	0x20
#define _SEGMENT_ENTRY		(0)
#define _SEGMENT_ENTRY_EMPTY	(_SEGMENT_ENTRY_INV)
#define _SEGMENT_ENTRY_LARGE	0x400
#define _SEGMENT_ENTRY_CO	0x100
#define RCP_ACC_BITS	0xf000000000000000UL
#define RCP_FP_BIT	0x0800000000000000UL
#define RCP_PCL_BIT	0x0080000000000000UL
#define RCP_HR_BIT	0x0040000000000000UL
#define RCP_HC_BIT	0x0020000000000000UL
#define RCP_GR_BIT	0x0004000000000000UL
#define RCP_GC_BIT	0x0002000000000000UL
#define KVM_UR_BIT	0x0000800000000000UL
#define KVM_UC_BIT	0x0000400000000000UL
#define _ASCE_USER_BITS		(_ASCE_SPACE_SWITCH | _ASCE_PRIVATE_SPACE | \
_ASCE_ALT_EVENT)
#define PAGE_NONE	__pgprot(_PAGE_TYPE_NONE)
#define PAGE_RO		__pgprot(_PAGE_TYPE_RO)
#define PAGE_RW		__pgprot(_PAGE_TYPE_RW)
#define PAGE_KERNEL	PAGE_RW
#define PAGE_COPY	PAGE_RO
#define __P000	PAGE_NONE
#define __P001	PAGE_RO
#define __P010	PAGE_RO
#define __P011	PAGE_RO
#define __P100	PAGE_RO
#define __P101	PAGE_RO
#define __P110	PAGE_RO
#define __P111	PAGE_RO
#define __S000	PAGE_NONE
#define __S001	PAGE_RO
#define __S010	PAGE_RW
#define __S011	PAGE_RW
#define __S100	PAGE_RO
#define __S101	PAGE_RO
#define __S110	PAGE_RW
#define __S111	PAGE_RW
static inline int mm_exclusive(struct mm_struct *mm)
static inline int mm_has_pgste(struct mm_struct *mm)
static inline int pgd_present(pgd_t pgd)
static inline int pgd_none(pgd_t pgd)
static inline int pgd_bad(pgd_t pgd)
static inline int pud_present(pud_t pud)
static inline int pud_none(pud_t pud)
static inline int pud_bad(pud_t pud)
static inline int pgd_present(pgd_t pgd)
static inline int pgd_none(pgd_t pgd)
static inline int pgd_bad(pgd_t pgd)
static inline int pud_present(pud_t pud)
static inline int pud_none(pud_t pud)
static inline int pud_bad(pud_t pud)
static inline int pmd_present(pmd_t pmd)
static inline int pmd_none(pmd_t pmd)
static inline int pmd_bad(pmd_t pmd)
static inline int pte_none(pte_t pte)
static inline int pte_present(pte_t pte)
static inline int pte_file(pte_t pte)
static inline int pte_special(pte_t pte)
#define __HAVE_ARCH_PTE_SAME
static inline int pte_same(pte_t a, pte_t b)
static inline pgste_t pgste_get_lock(pte_t *ptep)
static inline void pgste_set_unlock(pte_t *ptep, pgste_t pgste)
static inline pgste_t pgste_update_all(pte_t *ptep, pgste_t pgste)
static inline pgste_t pgste_update_young(pte_t *ptep, pgste_t pgste)
static inline void pgste_set_pte(pte_t *ptep, pgste_t pgste)
static inline void set_pte_at(struct mm_struct *mm, unsigned long addr,
pte_t *ptep, pte_t entry)
static inline int pte_write(pte_t pte)
static inline int pte_dirty(pte_t pte)
static inline int pte_young(pte_t pte)
static inline void pgd_clear(pgd_t *pgd)
static inline void pud_clear(pud_t *pud)
static inline void pmd_clear(pmd_t *pmdp)
static inline void pte_clear(struct mm_struct *mm, unsigned long addr, pte_t *ptep)
static inline pte_t pte_modify(pte_t pte, pgprot_t newprot)
static inline pte_t pte_wrprotect(pte_t pte)
static inline pte_t pte_mkwrite(pte_t pte)
static inline pte_t pte_mkclean(pte_t pte)
static inline pte_t pte_mkdirty(pte_t pte)
static inline pte_t pte_mkold(pte_t pte)
static inline pte_t pte_mkyoung(pte_t pte)
static inline pte_t pte_mkspecial(pte_t pte)
static inline pte_t pte_mkhuge(pte_t pte)
static inline int ptep_test_and_clear_user_dirty(struct mm_struct *mm,
pte_t *ptep)
static inline int ptep_test_and_clear_user_young(struct mm_struct *mm,
pte_t *ptep)
#define __HAVE_ARCH_PTEP_TEST_AND_CLEAR_YOUNG
static inline int ptep_test_and_clear_young(struct vm_area_struct *vma,
unsigned long addr, pte_t *ptep)
#define __HAVE_ARCH_PTEP_CLEAR_YOUNG_FLUSH
static inline int ptep_clear_flush_young(struct vm_area_struct *vma,
unsigned long address, pte_t *ptep)
static inline void __ptep_ipte(unsigned long address, pte_t *ptep)
#define __HAVE_ARCH_PTEP_GET_AND_CLEAR
static inline pte_t ptep_get_and_clear(struct mm_struct *mm,
unsigned long address, pte_t *ptep)
#define __HAVE_ARCH_PTEP_MODIFY_PROT_TRANSACTION
static inline pte_t ptep_modify_prot_start(struct mm_struct *mm,
unsigned long address,
pte_t *ptep)
static inline void ptep_modify_prot_commit(struct mm_struct *mm,
unsigned long address,
pte_t *ptep, pte_t pte)
#define __HAVE_ARCH_PTEP_CLEAR_FLUSH
static inline pte_t ptep_clear_flush(struct vm_area_struct *vma,
unsigned long address, pte_t *ptep)
#define __HAVE_ARCH_PTEP_GET_AND_CLEAR_FULL
static inline pte_t ptep_get_and_clear_full(struct mm_struct *mm,
unsigned long address,
pte_t *ptep, int full)
#define __HAVE_ARCH_PTEP_SET_WRPROTECT
static inline pte_t ptep_set_wrprotect(struct mm_struct *mm,
unsigned long address, pte_t *ptep)
#define __HAVE_ARCH_PTEP_SET_ACCESS_FLAGS
static inline int ptep_set_access_flags(struct vm_area_struct *vma,
unsigned long address, pte_t *ptep,
pte_t entry, int dirty)
static inline pte_t mk_pte_phys(unsigned long physpage, pgprot_t pgprot)
static inline pte_t mk_pte(struct page *page, pgprot_t pgprot)
#define pgd_index(address) (((address) >> PGDIR_SHIFT) & (PTRS_PER_PGD-1))
#define pud_index(address) (((address) >> PUD_SHIFT) & (PTRS_PER_PUD-1))
#define pmd_index(address) (((address) >> PMD_SHIFT) & (PTRS_PER_PMD-1))
#define pte_index(address) (((address) >> PAGE_SHIFT) & (PTRS_PER_PTE-1))
#define pgd_offset(mm, address) ((mm)->pgd + pgd_index(address))
#define pgd_offset_k(address) pgd_offset(&init_mm, address)
#define pmd_deref(pmd) (pmd_val(pmd) & _SEGMENT_ENTRY_ORIGIN)
#define pud_deref(pmd) ()
#define pgd_deref(pmd) ()
#define pud_offset(pgd, address) ((pud_t *) pgd)
#define pmd_offset(pud, address) ((pmd_t *) pud + pmd_index(address))
#define pmd_deref(pmd) (pmd_val(pmd) & _SEGMENT_ENTRY_ORIGIN)
#define pud_deref(pud) (pud_val(pud) & _REGION_ENTRY_ORIGIN)
#define pgd_deref(pgd) (pgd_val(pgd) & _REGION_ENTRY_ORIGIN)
static inline pud_t *pud_offset(pgd_t *pgd, unsigned long address)
static inline pmd_t *pmd_offset(pud_t *pud, unsigned long address)
#define pfn_pte(pfn,pgprot) mk_pte_phys(__pa((pfn) << PAGE_SHIFT),(pgprot))
#define pte_pfn(x) (pte_val(x) >> PAGE_SHIFT)
#define pte_page(x) pfn_to_page(pte_pfn(x))
#define pmd_page(pmd) pfn_to_page(pmd_val(pmd) >> PAGE_SHIFT)
#define pte_offset(pmd, addr) ((pte_t *) pmd_deref(*(pmd)) + pte_index(addr))
#define pte_offset_kernel(pmd, address) pte_offset(pmd,address)
#define pte_offset_map(pmd, address) pte_offset_kernel(pmd, address)
#define pte_unmap(pte) do  while (0)
#define __SWP_OFFSET_MASK (~0UL >> 12)
#define __SWP_OFFSET_MASK (~0UL >> 11)
static inline pte_t mk_swap_pte(unsigned long type, unsigned long offset)
#define __swp_type(entry)	(((entry).val >> 2) & 0x1f)
#define __swp_offset(entry)	(((entry).val >> 11) | (((entry).val >> 7) & 1))
#define __swp_entry(type,offset) ((swp_entry_t) )
#define __pte_to_swp_entry(pte)	((swp_entry_t) )
#define __swp_entry_to_pte(x)	((pte_t) )
# define PTE_FILE_MAX_BITS	26
# define PTE_FILE_MAX_BITS	59
#define pte_to_pgoff(__pte) \
((((__pte).pte >> 12) << 7) + (((__pte).pte >> 1) & 0x7f))
#define pgoff_to_pte(__off) \
((pte_t) )
#define kern_addr_valid(addr)   (1)
extern int vmem_add_mapping(unsigned long start, unsigned long size);
extern int vmem_remove_mapping(unsigned long start, unsigned long size);
extern int s390_enable_sie(void);
#define pgtable_cache_init()	do  while (0)

#define _ASM_POWERPC_PGTABLE_PPC32_H
extern unsigned long va_to_phys(unsigned long address);
extern pte_t *va_to_pte(unsigned long address);
extern unsigned long ioremap_bot;
extern int icache_44x_need_flush;
#define PGDIR_SHIFT	(PAGE_SHIFT + PTE_SHIFT)
#define PGDIR_SIZE	(1UL << PGDIR_SHIFT)
#define PGDIR_MASK	(~(PGDIR_SIZE-1))
#define PTE_TABLE_SIZE	(sizeof(pte_t) << PTE_SHIFT)
#define PGD_TABLE_SIZE	(sizeof(pgd_t) << (32 - PGDIR_SHIFT))
#define PTRS_PER_PTE	(1 << PTE_SHIFT)
#define PTRS_PER_PMD	1
#define PTRS_PER_PGD	(1 << (32 - PGDIR_SHIFT))
#define USER_PTRS_PER_PGD	(TASK_SIZE / PGDIR_SIZE)
#define FIRST_USER_ADDRESS	0
#define pte_ERROR(e) \
printk("%s:%d: bad pte %llx.\n", __FILE__, __LINE__, \
(unsigned long long)pte_val(e))
#define pgd_ERROR(e) \
printk("%s:%d: bad pgd %08lx.\n", __FILE__, __LINE__, pgd_val(e))
#define KVIRT_TOP	PKMAP_BASE
#define KVIRT_TOP	(0xfe000000UL)
#define IOREMAP_TOP	((KVIRT_TOP - CONFIG_CONSISTENT_SIZE) & PAGE_MASK)
#define IOREMAP_TOP	KVIRT_TOP
#define VMALLOC_OFFSET (0x1000000)
#define VMALLOC_START (((_ALIGN((long)high_memory, PPC_PIN_SIZE) + VMALLOC_OFFSET) & ~(VMALLOC_OFFSET-1)))
#define VMALLOC_START ((((long)high_memory + VMALLOC_OFFSET) & ~(VMALLOC_OFFSET-1)))
#define VMALLOC_END	ioremap_bot
#if defined(CONFIG_40x)
#elif defined(CONFIG_44x)
#elif defined(CONFIG_FSL_BOOKE) && defined(CONFIG_PTE_64BIT)
#elif defined(CONFIG_FSL_BOOKE)
#elif defined(CONFIG_8xx)
#define pte_clear(mm, addr, ptep) \
do  while (0)
#define pmd_none(pmd)		(!pmd_val(pmd))
#define	pmd_bad(pmd)		(pmd_val(pmd) & _PMD_BAD)
#define	pmd_present(pmd)	(pmd_val(pmd) & _PMD_PRESENT_MASK)
#define	pmd_clear(pmdp)		do  while (0)
extern int flush_hash_pages(unsigned context, unsigned long va,
unsigned long pmdval, int count);
extern void add_hash_page(unsigned context, unsigned long va,
unsigned long pmdval);
extern void flush_hash_entry(struct mm_struct *mm, pte_t *ptep,
unsigned long address);
static inline unsigned long pte_update(pte_t *p,
unsigned long clr,
unsigned long set)
static inline unsigned long long pte_update(pte_t *p,
unsigned long clr,
unsigned long set)
#define __HAVE_ARCH_PTEP_TEST_AND_CLEAR_YOUNG
static inline int __ptep_test_and_clear_young(unsigned int context, unsigned long addr, pte_t *ptep)
#define ptep_test_and_clear_young(__vma, __addr, __ptep) \
__ptep_test_and_clear_young((__vma)->vm_mm->context.id, __addr, __ptep)
#define __HAVE_ARCH_PTEP_GET_AND_CLEAR
static inline pte_t ptep_get_and_clear(struct mm_struct *mm, unsigned long addr,
pte_t *ptep)
#define __HAVE_ARCH_PTEP_SET_WRPROTECT
static inline void ptep_set_wrprotect(struct mm_struct *mm, unsigned long addr,
pte_t *ptep)
static inline void huge_ptep_set_wrprotect(struct mm_struct *mm,
unsigned long addr, pte_t *ptep)
static inline void __ptep_set_access_flags(pte_t *ptep, pte_t entry)
#define __HAVE_ARCH_PTE_SAME
#define pte_same(A,B)	(((pte_val(A) ^ pte_val(B)) & ~_PAGE_HASHPTE) == 0)
#define pmd_page_vaddr(pmd)	\
((unsigned long) __va(pmd_val(pmd) & PAGE_MASK))
#define pmd_page(pmd)		\
pfn_to_page(pmd_val(pmd) >> PAGE_SHIFT)
#define pmd_page_vaddr(pmd)	\
((unsigned long) (pmd_val(pmd) & PAGE_MASK))
#define pmd_page(pmd)		\
pfn_to_page((__pa(pmd_val(pmd)) >> PAGE_SHIFT))
#define pgd_offset_k(address) pgd_offset(&init_mm, address)
#define pgd_index(address)	 ((address) >> PGDIR_SHIFT)
#define pgd_offset(mm, address)	 ((mm)->pgd + pgd_index(address))
#define pte_index(address)		\
(((address) >> PAGE_SHIFT) & (PTRS_PER_PTE - 1))
#define pte_offset_kernel(dir, addr)	\
((pte_t *) pmd_page_vaddr(*(dir)) + pte_index(addr))
#define pte_offset_map(dir, addr)		\
((pte_t *) kmap_atomic(pmd_page(*(dir))) + pte_index(addr))
#define pte_unmap(pte)		kunmap_atomic(pte)
#define __swp_type(entry)		((entry).val & 0x1f)
#define __swp_offset(entry)		((entry).val >> 5)
#define __swp_entry(type, offset)	((swp_entry_t) )
#define __pte_to_swp_entry(pte)		((swp_entry_t) )
#define __swp_entry_to_pte(x)		((pte_t) )
#define PTE_FILE_MAX_BITS	29
#define pte_to_pgoff(pte)	(pte_val(pte) >> 3)
#define pgoff_to_pte(off)	((pte_t) )
#define pgtable_cache_init()	do  while (0)
extern int get_pteptr(struct mm_struct *mm, unsigned long addr, pte_t **ptep,
pmd_t **pmdp);

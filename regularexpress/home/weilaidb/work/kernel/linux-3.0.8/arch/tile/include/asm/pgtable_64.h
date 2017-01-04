#define _ASM_TILE_PGTABLE_64_H
#define PGDIR_SHIFT	HV_LOG2_L1_SPAN
#define PGDIR_SIZE	HV_L1_SPAN
#define PGDIR_MASK	(~(PGDIR_SIZE-1))
#define PTRS_PER_PGD	HV_L0_ENTRIES
#define SIZEOF_PGD	(PTRS_PER_PGD * sizeof(pgd_t))
#define PMD_SHIFT	HV_LOG2_PAGE_SIZE_LARGE
#define PMD_SIZE	HV_PAGE_SIZE_LARGE
#define PMD_MASK	(~(PMD_SIZE-1))
#define PTRS_PER_PMD	(1 << (PGDIR_SHIFT - PMD_SHIFT))
#define SIZEOF_PMD	(PTRS_PER_PMD * sizeof(pmd_t))
#define PTRS_PER_PTE (1 << (HV_LOG2_PAGE_SIZE_LARGE - HV_LOG2_PAGE_SIZE_SMALL))
#define SIZEOF_PTE	(PTRS_PER_PTE * sizeof(pte_t))
#define _VMALLOC_END	HUGE_VMAP_BASE
#define VMALLOC_END	(_VMALLOC_END - PAGE_SIZE)
#define VMALLOC_START	(_VMALLOC_START + PAGE_SIZE)
#define HUGE_VMAP_END	(HUGE_VMAP_BASE + PGDIR_SIZE)
static inline int pud_none(pud_t pud)
static inline int pud_present(pud_t pud)
#define pmd_ERROR(e) \
pr_err("%s:%d: bad pmd 0x%016llx.\n", __FILE__, __LINE__, pmd_val(e))
static inline void pud_clear(pud_t *pudp)
static inline int pud_bad(pud_t pud)
#define pud_ptfn(pud) hv_pte_get_ptfn((pud).pgd)
#define pud_page_vaddr(pud) \
(__va((phys_addr_t)pud_ptfn(pud) << HV_LOG2_PAGE_TABLE_ALIGN))
#define pud_page(pud) pfn_to_page(HV_PTFN_TO_PFN(pud_ptfn(pud)))
static inline unsigned long pud_index(unsigned long address)
#define pmd_offset(pud, address) \
((pmd_t *)pud_page_vaddr(*(pud)) + pmd_index(address))
static inline void __set_pmd(pmd_t *pmdp, pmd_t pmdval)
static inline pmd_t ptfn_pmd(unsigned long ptfn, pgprot_t prot)
static inline unsigned long pmd_ptfn(pmd_t pmd)
static inline void pmd_clear(pmd_t *pmdp)
#define pgd_addr_normalize pgd_addr_normalize
static inline unsigned long pgd_addr_normalize(unsigned long addr)
static inline int pgd_addr_invalid(unsigned long addr)
#define __HAVE_ARCH_PTEP_TEST_AND_CLEAR_YOUNG
static inline int ptep_test_and_clear_young(struct vm_area_struct *vma,
unsigned long addr, pte_t *ptep)
#define __HAVE_ARCH_PTEP_SET_WRPROTECT
static inline void ptep_set_wrprotect(struct mm_struct *mm,
unsigned long addr, pte_t *ptep)
#define __HAVE_ARCH_PTEP_GET_AND_CLEAR
static inline pte_t ptep_get_and_clear(struct mm_struct *mm,
unsigned long addr, pte_t *ptep)

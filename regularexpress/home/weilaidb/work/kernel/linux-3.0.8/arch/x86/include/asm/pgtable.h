#define _ASM_X86_PGTABLE_H
#define pgprot_noncached(prot)					\
((boot_cpu_data.x86 > 3)				\
? (__pgprot(pgprot_val(prot) | _PAGE_CACHE_UC_MINUS))	\
: (prot))
extern unsigned long empty_zero_page[PAGE_SIZE / sizeof(unsigned long)];
#define ZERO_PAGE(vaddr) (virt_to_page(empty_zero_page))
extern spinlock_t pgd_lock;
extern struct list_head pgd_list;
extern struct mm_struct *pgd_page_get_mm(struct page *page);
#define set_pte(ptep, pte)		native_set_pte(ptep, pte)
#define set_pte_at(mm, addr, ptep, pte)	native_set_pte_at(mm, addr, ptep, pte)
#define set_pmd_at(mm, addr, pmdp, pmd)	native_set_pmd_at(mm, addr, pmdp, pmd)
#define set_pte_atomic(ptep, pte)					\
native_set_pte_atomic(ptep, pte)
#define set_pmd(pmdp, pmd)		native_set_pmd(pmdp, pmd)
#define set_pgd(pgdp, pgd)		native_set_pgd(pgdp, pgd)
#define pgd_clear(pgd)			native_pgd_clear(pgd)
# define set_pud(pudp, pud)		native_set_pud(pudp, pud)
#define pud_clear(pud)			native_pud_clear(pud)
#define pte_clear(mm, addr, ptep)	native_pte_clear(mm, addr, ptep)
#define pmd_clear(pmd)			native_pmd_clear(pmd)
#define pte_update(mm, addr, ptep)              do  while (0)
#define pte_update_defer(mm, addr, ptep)        do  while (0)
#define pmd_update(mm, addr, ptep)              do  while (0)
#define pmd_update_defer(mm, addr, ptep)        do  while (0)
#define pgd_val(x)	native_pgd_val(x)
#define __pgd(x)	native_make_pgd(x)
#define pud_val(x)	native_pud_val(x)
#define __pud(x)	native_make_pud(x)
#define pmd_val(x)	native_pmd_val(x)
#define __pmd(x)	native_make_pmd(x)
#define pte_val(x)	native_pte_val(x)
#define __pte(x)	native_make_pte(x)
#define arch_end_context_switch(prev)	do  while(0)
static inline int pte_dirty(pte_t pte)
static inline int pte_young(pte_t pte)
static inline int pmd_young(pmd_t pmd)
static inline int pte_write(pte_t pte)
static inline int pte_file(pte_t pte)
static inline int pte_huge(pte_t pte)
static inline int pte_global(pte_t pte)
static inline int pte_exec(pte_t pte)
static inline int pte_special(pte_t pte)
static inline unsigned long pte_pfn(pte_t pte)
static inline unsigned long pmd_pfn(pmd_t pmd)
#define pte_page(pte)	pfn_to_page(pte_pfn(pte))
static inline int pmd_large(pmd_t pte)
static inline int pmd_trans_splitting(pmd_t pmd)
static inline int pmd_trans_huge(pmd_t pmd)
static inline int has_transparent_hugepage(void)
static inline pte_t pte_set_flags(pte_t pte, pteval_t set)
static inline pte_t pte_clear_flags(pte_t pte, pteval_t clear)
static inline pte_t pte_mkclean(pte_t pte)
static inline pte_t pte_mkold(pte_t pte)
static inline pte_t pte_wrprotect(pte_t pte)
static inline pte_t pte_mkexec(pte_t pte)
static inline pte_t pte_mkdirty(pte_t pte)
static inline pte_t pte_mkyoung(pte_t pte)
static inline pte_t pte_mkwrite(pte_t pte)
static inline pte_t pte_mkhuge(pte_t pte)
static inline pte_t pte_clrhuge(pte_t pte)
static inline pte_t pte_mkglobal(pte_t pte)
static inline pte_t pte_clrglobal(pte_t pte)
static inline pte_t pte_mkspecial(pte_t pte)
static inline pmd_t pmd_set_flags(pmd_t pmd, pmdval_t set)
static inline pmd_t pmd_clear_flags(pmd_t pmd, pmdval_t clear)
static inline pmd_t pmd_mkold(pmd_t pmd)
static inline pmd_t pmd_wrprotect(pmd_t pmd)
static inline pmd_t pmd_mkdirty(pmd_t pmd)
static inline pmd_t pmd_mkhuge(pmd_t pmd)
static inline pmd_t pmd_mkyoung(pmd_t pmd)
static inline pmd_t pmd_mkwrite(pmd_t pmd)
static inline pmd_t pmd_mknotpresent(pmd_t pmd)
static inline pgprotval_t massage_pgprot(pgprot_t pgprot)
static inline pte_t pfn_pte(unsigned long page_nr, pgprot_t pgprot)
static inline pmd_t pfn_pmd(unsigned long page_nr, pgprot_t pgprot)
static inline pte_t pte_modify(pte_t pte, pgprot_t newprot)
static inline pmd_t pmd_modify(pmd_t pmd, pgprot_t newprot)
#define pgprot_modify pgprot_modify
static inline pgprot_t pgprot_modify(pgprot_t oldprot, pgprot_t newprot)
#define pte_pgprot(x) __pgprot(pte_flags(x) & PTE_FLAGS_MASK)
#define canon_pgprot(p) __pgprot(massage_pgprot(p))
static inline int is_new_memtype_allowed(u64 paddr, unsigned long size,
unsigned long flags,
unsigned long new_flags)
pmd_t *populate_extra_pmd(unsigned long vaddr);
pte_t *populate_extra_pte(unsigned long vaddr);
# include "pgtable_32.h"
# include "pgtable_64.h"
static inline int pte_none(pte_t pte)
#define __HAVE_ARCH_PTE_SAME
static inline int pte_same(pte_t a, pte_t b)
static inline int pte_present(pte_t a)
static inline int pte_hidden(pte_t pte)
static inline int pmd_present(pmd_t pmd)
static inline int pmd_none(pmd_t pmd)
static inline unsigned long pmd_page_vaddr(pmd_t pmd)
#define pmd_page(pmd)	pfn_to_page((pmd_val(pmd) & PTE_PFN_MASK) >> PAGE_SHIFT)
static inline unsigned long pmd_index(unsigned long address)
#define mk_pte(page, pgprot)   pfn_pte(page_to_pfn(page), (pgprot))
static inline unsigned long pte_index(unsigned long address)
static inline pte_t *pte_offset_kernel(pmd_t *pmd, unsigned long address)
static inline int pmd_bad(pmd_t pmd)
static inline unsigned long pages_to_mb(unsigned long npg)
#define io_remap_pfn_range(vma, vaddr, pfn, size, prot)	\
remap_pfn_range(vma, vaddr, pfn, size, prot)
#if PAGETABLE_LEVELS > 2
static inline int pud_none(pud_t pud)
static inline int pud_present(pud_t pud)
static inline unsigned long pud_page_vaddr(pud_t pud)
#define pud_page(pud)		pfn_to_page(pud_val(pud) >> PAGE_SHIFT)
static inline pmd_t *pmd_offset(pud_t *pud, unsigned long address)
static inline int pud_large(pud_t pud)
static inline int pud_bad(pud_t pud)
static inline int pud_large(pud_t pud)
#if PAGETABLE_LEVELS > 3
static inline int pgd_present(pgd_t pgd)
static inline unsigned long pgd_page_vaddr(pgd_t pgd)
#define pgd_page(pgd)		pfn_to_page(pgd_val(pgd) >> PAGE_SHIFT)
static inline unsigned long pud_index(unsigned long address)
static inline pud_t *pud_offset(pgd_t *pgd, unsigned long address)
static inline int pgd_bad(pgd_t pgd)
static inline int pgd_none(pgd_t pgd)
#define pgd_index(address) (((address) >> PGDIR_SHIFT) & (PTRS_PER_PGD - 1))
#define pgd_offset(mm, address) ((mm)->pgd + pgd_index((address)))
#define pgd_offset_k(address) pgd_offset(&init_mm, (address))
#define KERNEL_PGD_BOUNDARY	pgd_index(PAGE_OFFSET)
#define KERNEL_PGD_PTRS		(PTRS_PER_PGD - KERNEL_PGD_BOUNDARY)
extern int direct_gbpages;
static inline pte_t native_local_ptep_get_and_clear(pte_t *ptep)
static inline pmd_t native_local_pmdp_get_and_clear(pmd_t *pmdp)
static inline void native_set_pte_at(struct mm_struct *mm, unsigned long addr,
pte_t *ptep , pte_t pte)
static inline void native_set_pmd_at(struct mm_struct *mm, unsigned long addr,
pmd_t *pmdp , pmd_t pmd)
#define pte_update(mm, addr, ptep)		do  while (0)
#define pte_update_defer(mm, addr, ptep)	do  while (0)
struct vm_area_struct;
#define  __HAVE_ARCH_PTEP_SET_ACCESS_FLAGS
extern int ptep_set_access_flags(struct vm_area_struct *vma,
unsigned long address, pte_t *ptep,
pte_t entry, int dirty);
#define __HAVE_ARCH_PTEP_TEST_AND_CLEAR_YOUNG
extern int ptep_test_and_clear_young(struct vm_area_struct *vma,
unsigned long addr, pte_t *ptep);
#define __HAVE_ARCH_PTEP_CLEAR_YOUNG_FLUSH
extern int ptep_clear_flush_young(struct vm_area_struct *vma,
unsigned long address, pte_t *ptep);
#define __HAVE_ARCH_PTEP_GET_AND_CLEAR
static inline pte_t ptep_get_and_clear(struct mm_struct *mm, unsigned long addr,
pte_t *ptep)
#define __HAVE_ARCH_PTEP_GET_AND_CLEAR_FULL
static inline pte_t ptep_get_and_clear_full(struct mm_struct *mm,
unsigned long addr, pte_t *ptep,
int full)
#define __HAVE_ARCH_PTEP_SET_WRPROTECT
static inline void ptep_set_wrprotect(struct mm_struct *mm,
unsigned long addr, pte_t *ptep)
#define flush_tlb_fix_spurious_fault(vma, address)
#define mk_pmd(page, pgprot)   pfn_pmd(page_to_pfn(page), (pgprot))
#define  __HAVE_ARCH_PMDP_SET_ACCESS_FLAGS
extern int pmdp_set_access_flags(struct vm_area_struct *vma,
unsigned long address, pmd_t *pmdp,
pmd_t entry, int dirty);
#define __HAVE_ARCH_PMDP_TEST_AND_CLEAR_YOUNG
extern int pmdp_test_and_clear_young(struct vm_area_struct *vma,
unsigned long addr, pmd_t *pmdp);
#define __HAVE_ARCH_PMDP_CLEAR_YOUNG_FLUSH
extern int pmdp_clear_flush_young(struct vm_area_struct *vma,
unsigned long address, pmd_t *pmdp);
#define __HAVE_ARCH_PMDP_SPLITTING_FLUSH
extern void pmdp_splitting_flush(struct vm_area_struct *vma,
unsigned long addr, pmd_t *pmdp);
#define __HAVE_ARCH_PMD_WRITE
static inline int pmd_write(pmd_t pmd)
#define __HAVE_ARCH_PMDP_GET_AND_CLEAR
static inline pmd_t pmdp_get_and_clear(struct mm_struct *mm, unsigned long addr,
pmd_t *pmdp)
#define __HAVE_ARCH_PMDP_SET_WRPROTECT
static inline void pmdp_set_wrprotect(struct mm_struct *mm,
unsigned long addr, pmd_t *pmdp)
static inline void clone_pgd_range(pgd_t *dst, pgd_t *src, int count)

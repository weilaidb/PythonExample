#define _ASM_X86_HUGETLB_H
static inline int is_hugepage_only_range(struct mm_struct *mm,
unsigned long addr,
unsigned long len)
static inline int prepare_hugepage_range(struct file *file,
unsigned long addr, unsigned long len)
static inline void hugetlb_prefault_arch_hook(struct mm_struct *mm)
static inline void hugetlb_free_pgd_range(struct mmu_gather *tlb,
unsigned long addr, unsigned long end,
unsigned long floor,
unsigned long ceiling)
static inline void set_huge_pte_at(struct mm_struct *mm, unsigned long addr,
pte_t *ptep, pte_t pte)
static inline pte_t huge_ptep_get_and_clear(struct mm_struct *mm,
unsigned long addr, pte_t *ptep)
static inline void huge_ptep_clear_flush(struct vm_area_struct *vma,
unsigned long addr, pte_t *ptep)
static inline int huge_pte_none(pte_t pte)
static inline pte_t huge_pte_wrprotect(pte_t pte)
static inline void huge_ptep_set_wrprotect(struct mm_struct *mm,
unsigned long addr, pte_t *ptep)
static inline int huge_ptep_set_access_flags(struct vm_area_struct *vma,
unsigned long addr, pte_t *ptep,
pte_t pte, int dirty)
static inline pte_t huge_ptep_get(pte_t *ptep)
static inline int arch_prepare_hugepage(struct page *page)
static inline void arch_release_hugepage(struct page *page)

#define _ASM_S390_HUGETLB_H
#define is_hugepage_only_range(mm, addr, len)	0
#define hugetlb_free_pgd_range			free_pgd_range
void set_huge_pte_at(struct mm_struct *mm, unsigned long addr,
pte_t *ptep, pte_t pte);
static inline int prepare_hugepage_range(struct file *file,
unsigned long addr, unsigned long len)
#define hugetlb_prefault_arch_hook(mm)		do  while (0)
int arch_prepare_hugepage(struct page *page);
void arch_release_hugepage(struct page *page);
static inline pte_t huge_pte_wrprotect(pte_t pte)
static inline int huge_pte_none(pte_t pte)
static inline pte_t huge_ptep_get(pte_t *ptep)
static inline pte_t huge_ptep_get_and_clear(struct mm_struct *mm,
unsigned long addr, pte_t *ptep)
static inline void __pmd_csp(pmd_t *pmdp)
static inline void __pmd_idte(unsigned long address, pmd_t *pmdp)
static inline void huge_ptep_invalidate(struct mm_struct *mm,
unsigned long address, pte_t *ptep)
#define huge_ptep_set_access_flags(__vma, __addr, __ptep, __entry, __dirty) \
()
#define huge_ptep_set_wrprotect(__mm, __addr, __ptep)			\
()
static inline void huge_ptep_clear_flush(struct vm_area_struct *vma,
unsigned long address, pte_t *ptep)

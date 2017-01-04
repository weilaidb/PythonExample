pte_t *huge_pte_alloc(struct mm_struct *mm, unsigned long addr,
unsigned long sz)
pte_t *huge_pte_offset(struct mm_struct *mm, unsigned long addr)
int huge_pmd_unshare(struct mm_struct *mm, unsigned long *addr, pte_t *ptep)
int is_aligned_hugepage_range(unsigned long addr, unsigned long len)
struct page *
follow_huge_addr(struct mm_struct *mm, unsigned long address, int write)
int pmd_huge(pmd_t pmd)
int pud_huge(pud_t pud)
struct page *
follow_huge_pmd(struct mm_struct *mm, unsigned long address,
pmd_t *pmd, int write)

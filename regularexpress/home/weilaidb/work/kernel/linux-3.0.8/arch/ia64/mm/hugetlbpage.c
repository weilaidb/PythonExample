unsigned int hpage_shift = HPAGE_SHIFT_DEFAULT;
EXPORT_SYMBOL(hpage_shift);
pte_t *
huge_pte_alloc(struct mm_struct *mm, unsigned long addr, unsigned long sz)
pte_t *
huge_pte_offset (struct mm_struct *mm, unsigned long addr)
int huge_pmd_unshare(struct mm_struct *mm, unsigned long *addr, pte_t *ptep)
#define mk_pte_huge(entry)
int prepare_hugepage_range(struct file *file,
unsigned long addr, unsigned long len)
struct page *follow_huge_addr(struct mm_struct *mm, unsigned long addr, int write)
int pmd_huge(pmd_t pmd)
int pud_huge(pud_t pud)
struct page *
follow_huge_pmd(struct mm_struct *mm, unsigned long address, pmd_t *pmd, int write)
void hugetlb_free_pgd_range(struct mmu_gather *tlb,
unsigned long addr, unsigned long end,
unsigned long floor, unsigned long ceiling)
unsigned long hugetlb_get_unmapped_area(struct file *file, unsigned long addr, unsigned long len,
unsigned long pgoff, unsigned long flags)
static int __init hugetlb_setup_sz(char *str)
early_param("hugepagesz", hugetlb_setup_sz);

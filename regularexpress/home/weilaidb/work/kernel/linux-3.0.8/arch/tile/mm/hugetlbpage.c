pte_t *huge_pte_alloc(struct mm_struct *mm,
unsigned long addr, unsigned long sz)
pte_t *huge_pte_offset(struct mm_struct *mm, unsigned long addr)
struct page *follow_huge_addr(struct mm_struct *mm, unsigned long address,
int write)
int pmd_huge(pmd_t pmd)
int pud_huge(pud_t pud)
struct page *follow_huge_pmd(struct mm_struct *mm, unsigned long address,
pmd_t *pmd, int write)
struct page *follow_huge_addr(struct mm_struct *mm, unsigned long address,
int write)
int pmd_huge(pmd_t pmd)
int pud_huge(pud_t pud)
struct page *follow_huge_pmd(struct mm_struct *mm, unsigned long address,
pmd_t *pmd, int write)
struct page *follow_huge_pud(struct mm_struct *mm, unsigned long address,
pud_t *pud, int write)
int huge_pmd_unshare(struct mm_struct *mm, unsigned long *addr, pte_t *ptep)
static unsigned long hugetlb_get_unmapped_area_bottomup(struct file *file,
unsigned long addr, unsigned long len,
unsigned long pgoff, unsigned long flags)
static unsigned long hugetlb_get_unmapped_area_topdown(struct file *file,
unsigned long addr0, unsigned long len,
unsigned long pgoff, unsigned long flags)
unsigned long hugetlb_get_unmapped_area(struct file *file, unsigned long addr,
unsigned long len, unsigned long pgoff, unsigned long flags)
static __init int setup_hugepagesz(char *opt)
__setup("hugepagesz=", setup_hugepagesz);

static unsigned long page_table_shareable(struct vm_area_struct *svma,
struct vm_area_struct *vma,
unsigned long addr, pgoff_t idx)
static int vma_shareable(struct vm_area_struct *vma, unsigned long addr)
static void huge_pmd_share(struct mm_struct *mm, unsigned long addr, pud_t *pud)
int huge_pmd_unshare(struct mm_struct *mm, unsigned long *addr, pte_t *ptep)
pte_t *huge_pte_alloc(struct mm_struct *mm,
unsigned long addr, unsigned long sz)
pte_t *huge_pte_offset(struct mm_struct *mm, unsigned long addr)
static unsigned long hugetlb_get_unmapped_area_bottomup(struct file *file,
unsigned long addr, unsigned long len,
unsigned long pgoff, unsigned long flags)
static unsigned long hugetlb_get_unmapped_area_topdown(struct file *file,
unsigned long addr0, unsigned long len,
unsigned long pgoff, unsigned long flags)
unsigned long
hugetlb_get_unmapped_area(struct file *file, unsigned long addr,
unsigned long len, unsigned long pgoff, unsigned long flags)
static __init int setup_hugepagesz(char *opt)
__setup("hugepagesz=", setup_hugepagesz);

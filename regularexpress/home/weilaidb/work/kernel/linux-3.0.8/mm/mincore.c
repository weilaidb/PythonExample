static void mincore_hugetlb_page_range(struct vm_area_struct *vma,
unsigned long addr, unsigned long end,
unsigned char *vec)
static unsigned char mincore_page(struct address_space *mapping, pgoff_t pgoff)
static void mincore_unmapped_range(struct vm_area_struct *vma,
unsigned long addr, unsigned long end,
unsigned char *vec)
static void mincore_pte_range(struct vm_area_struct *vma, pmd_t *pmd,
unsigned long addr, unsigned long end,
unsigned char *vec)
static void mincore_pmd_range(struct vm_area_struct *vma, pud_t *pud,
unsigned long addr, unsigned long end,
unsigned char *vec)
static void mincore_pud_range(struct vm_area_struct *vma, pgd_t *pgd,
unsigned long addr, unsigned long end,
unsigned char *vec)
static void mincore_page_range(struct vm_area_struct *vma,
unsigned long addr, unsigned long end,
unsigned char *vec)
static long do_mincore(unsigned long addr, unsigned long pages, unsigned char *vec)
SYSCALL_DEFINE3(mincore, unsigned long, start, size_t, len,
unsigned char __user *, vec)

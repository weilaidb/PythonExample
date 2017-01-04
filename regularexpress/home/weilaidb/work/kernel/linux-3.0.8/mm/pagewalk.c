static int walk_pte_range(pmd_t *pmd, unsigned long addr, unsigned long end,
struct mm_walk *walk)
static int walk_pmd_range(pud_t *pud, unsigned long addr, unsigned long end,
struct mm_walk *walk)
static int walk_pud_range(pgd_t *pgd, unsigned long addr, unsigned long end,
struct mm_walk *walk)
static unsigned long hugetlb_entry_end(struct hstate *h, unsigned long addr,
unsigned long end)
static int walk_hugetlb_range(struct vm_area_struct *vma,
unsigned long addr, unsigned long end,
struct mm_walk *walk)
int walk_page_range(unsigned long addr, unsigned long end,
struct mm_walk *walk)

#define VA_EXCLUDE_START (0x0000080000000000UL - (1UL << 32UL))
#define VA_EXCLUDE_END   (0xfffff80000000000UL + (1UL << 32UL))
static unsigned long hugetlb_get_unmapped_area_bottomup(struct file *filp,
unsigned long addr,
unsigned long len,
unsigned long pgoff,
unsigned long flags)
static unsigned long
hugetlb_get_unmapped_area_topdown(struct file *filp, const unsigned long addr0,
const unsigned long len,
const unsigned long pgoff,
const unsigned long flags)
unsigned long
hugetlb_get_unmapped_area(struct file *file, unsigned long addr,
unsigned long len, unsigned long pgoff, unsigned long flags)
pte_t *huge_pte_alloc(struct mm_struct *mm,
unsigned long addr, unsigned long sz)
pte_t *huge_pte_offset(struct mm_struct *mm, unsigned long addr)
int huge_pmd_unshare(struct mm_struct *mm, unsigned long *addr, pte_t *ptep)
void set_huge_pte_at(struct mm_struct *mm, unsigned long addr,
pte_t *ptep, pte_t entry)
pte_t huge_ptep_get_and_clear(struct mm_struct *mm, unsigned long addr,
pte_t *ptep)
struct page *follow_huge_addr(struct mm_struct *mm,
unsigned long address, int write)
int pmd_huge(pmd_t pmd)
int pud_huge(pud_t pud)
struct page *follow_huge_pmd(struct mm_struct *mm, unsigned long address,
pmd_t *pmd, int write)
static void context_reload(void *__data)
void hugetlb_prefault_arch_hook(struct mm_struct *mm)

#define PAGE_SHIFT_64K	16
#define PAGE_SHIFT_16M	24
#define PAGE_SHIFT_16G	34
#define MAX_NUMBER_GPAGES	1024
static unsigned long gpage_freearray[MAX_NUMBER_GPAGES];
static unsigned nr_gpages;
static inline int shift_to_mmu_psize(unsigned int shift)
static inline unsigned int mmu_psize_to_shift(unsigned int mmu_psize)
#define hugepd_none(hpd)	((hpd).pd == 0)
static inline pte_t *hugepd_page(hugepd_t hpd)
static inline unsigned int hugepd_shift(hugepd_t hpd)
static inline pte_t *hugepte_offset(hugepd_t *hpdp, unsigned long addr, unsigned pdshift)
pte_t *find_linux_pte_or_hugepte(pgd_t *pgdir, unsigned long ea, unsigned *shift)
pte_t *huge_pte_offset(struct mm_struct *mm, unsigned long addr)
static int __hugepte_alloc(struct mm_struct *mm, hugepd_t *hpdp,
unsigned long address, unsigned pdshift, unsigned pshift)
pte_t *huge_pte_alloc(struct mm_struct *mm, unsigned long addr, unsigned long sz)
void add_gpage(unsigned long addr, unsigned long page_size,
unsigned long number_of_pages)
int alloc_bootmem_huge_page(struct hstate *hstate)
int huge_pmd_unshare(struct mm_struct *mm, unsigned long *addr, pte_t *ptep)
static void free_hugepd_range(struct mmu_gather *tlb, hugepd_t *hpdp, int pdshift,
unsigned long start, unsigned long end,
unsigned long floor, unsigned long ceiling)
static void hugetlb_free_pmd_range(struct mmu_gather *tlb, pud_t *pud,
unsigned long addr, unsigned long end,
unsigned long floor, unsigned long ceiling)
static void hugetlb_free_pud_range(struct mmu_gather *tlb, pgd_t *pgd,
unsigned long addr, unsigned long end,
unsigned long floor, unsigned long ceiling)
void hugetlb_free_pgd_range(struct mmu_gather *tlb,
unsigned long addr, unsigned long end,
unsigned long floor, unsigned long ceiling)
struct page *
follow_huge_addr(struct mm_struct *mm, unsigned long address, int write)
int pmd_huge(pmd_t pmd)
int pud_huge(pud_t pud)
struct page *
follow_huge_pmd(struct mm_struct *mm, unsigned long address,
pmd_t *pmd, int write)
static noinline int gup_hugepte(pte_t *ptep, unsigned long sz, unsigned long addr,
unsigned long end, int write, struct page **pages, int *nr)
static unsigned long hugepte_addr_end(unsigned long addr, unsigned long end,
unsigned long sz)
int gup_hugepd(hugepd_t *hugepd, unsigned pdshift,
unsigned long addr, unsigned long end,
int write, struct page **pages, int *nr)
unsigned long hugetlb_get_unmapped_area(struct file *file, unsigned long addr,
unsigned long len, unsigned long pgoff,
unsigned long flags)
unsigned long vma_mmu_pagesize(struct vm_area_struct *vma)
static int __init add_huge_page_size(unsigned long long size)
static int __init hugepage_setup_sz(char *str)
__setup("hugepagesz=", hugepage_setup_sz);
static int __init hugetlbpage_init(void)
module_init(hugetlbpage_init);
void flush_dcache_icache_hugepage(struct page *page)

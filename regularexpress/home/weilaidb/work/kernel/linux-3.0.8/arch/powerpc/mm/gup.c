#undef DEBUG
static inline void get_huge_page_tail(struct page *page)
static noinline int gup_pte_range(pmd_t pmd, unsigned long addr,
unsigned long end, int write, struct page **pages, int *nr)
static int gup_pmd_range(pud_t pud, unsigned long addr, unsigned long end,
int write, struct page **pages, int *nr)
static int gup_pud_range(pgd_t pgd, unsigned long addr, unsigned long end,
int write, struct page **pages, int *nr)
int get_user_pages_fast(unsigned long start, int nr_pages, int write,
struct page **pages)

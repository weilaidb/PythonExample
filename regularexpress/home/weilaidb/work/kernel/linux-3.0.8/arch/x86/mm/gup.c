static inline pte_t gup_get_pte(pte_t *ptep)
static noinline int gup_pte_range(pmd_t pmd, unsigned long addr,
unsigned long end, int write, struct page **pages, int *nr)
static inline void get_head_page_multiple(struct page *page, int nr)
static inline void get_huge_page_tail(struct page *page)
static noinline int gup_huge_pmd(pmd_t pmd, unsigned long addr,
unsigned long end, int write, struct page **pages, int *nr)
static int gup_pmd_range(pud_t pud, unsigned long addr, unsigned long end,
int write, struct page **pages, int *nr)
static noinline int gup_huge_pud(pud_t pud, unsigned long addr,
unsigned long end, int write, struct page **pages, int *nr)
static int gup_pud_range(pgd_t pgd, unsigned long addr, unsigned long end,
int write, struct page **pages, int *nr)
int __get_user_pages_fast(unsigned long start, int nr_pages, int write,
struct page **pages)
int get_user_pages_fast(unsigned long start, int nr_pages, int write,
struct page **pages)

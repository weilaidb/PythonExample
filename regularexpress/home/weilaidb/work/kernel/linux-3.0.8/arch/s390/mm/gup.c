static inline int gup_pte_range(pmd_t *pmdp, pmd_t pmd, unsigned long addr,
unsigned long end, int write, struct page **pages, int *nr)
static inline int gup_huge_pmd(pmd_t *pmdp, pmd_t pmd, unsigned long addr,
unsigned long end, int write, struct page **pages, int *nr)
static inline int gup_pmd_range(pud_t *pudp, pud_t pud, unsigned long addr,
unsigned long end, int write, struct page **pages, int *nr)
static inline int gup_pud_range(pgd_t *pgdp, pgd_t pgd, unsigned long addr,
unsigned long end, int write, struct page **pages, int *nr)
int get_user_pages_fast(unsigned long start, int nr_pages, int write,
struct page **pages)

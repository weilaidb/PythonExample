#define SWITCHER_PGD_INDEX (PTRS_PER_PGD - 1)
#define SWITCHER_PMD_INDEX 	(PTRS_PER_PMD - 1)
#define RESERVE_MEM 		2U
#define CHECK_GPGD_MASK		_PAGE_PRESENT
#define RESERVE_MEM 		4U
#define CHECK_GPGD_MASK		_PAGE_TABLE
static DEFINE_PER_CPU(pte_t *, switcher_pte_pages);
#define switcher_pte_page(cpu) per_cpu(switcher_pte_pages, cpu)
static pgd_t *spgd_addr(struct lg_cpu *cpu, u32 i, unsigned long vaddr)
static pmd_t *spmd_addr(struct lg_cpu *cpu, pgd_t spgd, unsigned long vaddr)
static pte_t *spte_addr(struct lg_cpu *cpu, pgd_t spgd, unsigned long vaddr)
static unsigned long gpgd_addr(struct lg_cpu *cpu, unsigned long vaddr)
static unsigned long gpmd_addr(pgd_t gpgd, unsigned long vaddr)
static unsigned long gpte_addr(struct lg_cpu *cpu,
pmd_t gpmd, unsigned long vaddr)
static unsigned long gpte_addr(struct lg_cpu *cpu,
pgd_t gpgd, unsigned long vaddr)
static unsigned long get_pfn(unsigned long virtpfn, int write)
static pte_t gpte_to_spte(struct lg_cpu *cpu, pte_t gpte, int write)
static void release_pte(pte_t pte)
static void check_gpte(struct lg_cpu *cpu, pte_t gpte)
static void check_gpgd(struct lg_cpu *cpu, pgd_t gpgd)
static void check_gpmd(struct lg_cpu *cpu, pmd_t gpmd)
bool demand_page(struct lg_cpu *cpu, unsigned long vaddr, int errcode)
static bool page_writable(struct lg_cpu *cpu, unsigned long vaddr)
void pin_page(struct lg_cpu *cpu, unsigned long vaddr)
static void release_pmd(pmd_t *spmd)
static void release_pgd(pgd_t *spgd)
static void release_pgd(pgd_t *spgd)
static void flush_user_mappings(struct lguest *lg, int idx)
void guest_pagetable_flush_user(struct lg_cpu *cpu)
unsigned long guest_pa(struct lg_cpu *cpu, unsigned long vaddr)
static unsigned int find_pgdir(struct lguest *lg, unsigned long pgtable)
static unsigned int new_pgdir(struct lg_cpu *cpu,
unsigned long gpgdir,
int *blank_pgdir)
void guest_new_pagetable(struct lg_cpu *cpu, unsigned long pgtable)
static void release_all_pagetables(struct lguest *lg)
void guest_pagetable_clear_all(struct lg_cpu *cpu)
static void do_set_pte(struct lg_cpu *cpu, int idx,
unsigned long vaddr, pte_t gpte)
void guest_set_pte(struct lg_cpu *cpu,
unsigned long gpgdir, unsigned long vaddr, pte_t gpte)
void guest_set_pgd(struct lguest *lg, unsigned long gpgdir, u32 idx)
void guest_set_pmd(struct lguest *lg, unsigned long pmdp, u32 idx)
static unsigned long setup_pagetables(struct lguest *lg,
unsigned long mem,
unsigned long initrd_size)
int init_guest_pagetable(struct lguest *lg)
void page_table_guest_data_init(struct lg_cpu *cpu)
void free_guest_pagetable(struct lguest *lg)
void map_switcher_in_guest(struct lg_cpu *cpu, struct lguest_pages *pages)
static void free_switcher_pte_pages(void)
static __init void populate_switcher_pte_page(unsigned int cpu,
struct page *switcher_page[],
unsigned int pages)
__init int init_pagetables(struct page **switcher_page, unsigned int pages)
void free_pagetables(void)

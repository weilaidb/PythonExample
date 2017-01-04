unsigned long highstart_pfn, highend_pfn;
static noinline int do_test_wp_bit(void);
bool __read_mostly __vmalloc_start_set = false;
static __init void *alloc_low_page(void)
static pmd_t * __init one_md_table_init(pgd_t *pgd)
static pte_t * __init one_page_table_init(pmd_t *pmd)
pmd_t * __init populate_extra_pmd(unsigned long vaddr)
pte_t * __init populate_extra_pte(unsigned long vaddr)
static pte_t *__init page_table_kmap_check(pte_t *pte, pmd_t *pmd,
unsigned long vaddr, pte_t *lastpte)
static void __init
page_table_range_init(unsigned long start, unsigned long end, pgd_t *pgd_base)
static inline int is_kernel_text(unsigned long addr)
unsigned long __init
kernel_physical_mapping_init(unsigned long start,
unsigned long end,
unsigned long page_size_mask)
pte_t *kmap_pte;
pgprot_t kmap_prot;
static inline pte_t *kmap_get_fixmap_pte(unsigned long vaddr)
static void __init kmap_init(void)
static void __init permanent_kmaps_init(pgd_t *pgd_base)
static void __init add_one_highpage_init(struct page *page)
void __init add_highpages_with_active_regions(int nid,
unsigned long start_pfn, unsigned long end_pfn)
static inline void permanent_kmaps_init(pgd_t *pgd_base)
void __init native_pagetable_setup_start(pgd_t *base)
void __init native_pagetable_setup_done(pgd_t *base)
void __init early_ioremap_page_table_range_init(void)
static void __init pagetable_init(void)
pteval_t __supported_pte_mask __read_mostly = ~(_PAGE_NX | _PAGE_GLOBAL | _PAGE_IOMAP);
EXPORT_SYMBOL_GPL(__supported_pte_mask);
static unsigned int highmem_pages = -1;
static int __init parse_highmem(char *arg)
early_param("highmem", parse_highmem);
#define MSG_HIGHMEM_TOO_BIG \
"highmem size (%luMB) is bigger than pages available (%luMB)!\n"
#define MSG_LOWMEM_TOO_SMALL \
"highmem size (%luMB) results in <64MB lowmem, ignoring it!\n"
void __init lowmem_pfn_init(void)
#define MSG_HIGHMEM_TOO_SMALL \
"only %luMB highmem pages available, ignoring highmem size of %luMB!\n"
#define MSG_HIGHMEM_TRIMMED \
"Warning: only 4GB will be used. Use a HIGHMEM64G enabled kernel!\n"
void __init highmem_pfn_init(void)
void __init find_low_pfn_range(void)
void __init initmem_init(void)
static void __init zone_sizes_init(void)
void __init setup_bootmem_allocator(void)
void __init paging_init(void)
static void __init test_wp_bit(void)
void __init mem_init(void)
int arch_add_memory(int nid, u64 start, u64 size)
static noinline int do_test_wp_bit(void)
const int rodata_test_data = 0xC3;
EXPORT_SYMBOL_GPL(rodata_test_data);
int kernel_set_to_readonly __read_mostly;
void set_kernel_text_rw(void)
void set_kernel_text_ro(void)
static void mark_nxdata_nx(void)
void mark_rodata_ro(void)

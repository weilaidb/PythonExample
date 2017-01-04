#define clear_pgd(pmdptr) (*(pmdptr) = hv_pte(0))
unsigned long VMALLOC_RESERVE = CONFIG_VMALLOC_RESERVE;
EXPORT_SYMBOL(VMALLOC_RESERVE);
static pte_t * __init alloc_pte(void)
static pte_t *l2_ptes[MAX_NUMNODES];
static int num_l2_ptes[MAX_NUMNODES];
static void init_prealloc_ptes(int node, int pages)
pte_t *get_prealloc_pte(unsigned long pfn)
static int initial_heap_home(void)
static void __init assign_pte(pmd_t *pmd, pte_t *page_table)
#if HV_L1_SIZE != HV_L2_SIZE
# error Rework assumption that L1 and L2 page tables are same size.
static inline pmd_t *alloc_pmd(void)
static inline void assign_pmd(pud_t *pud, pmd_t *pmd)
void __init shatter_pmd(pmd_t *pmd)
static void __init page_table_range_init(unsigned long start,
unsigned long end, pgd_t *pgd_base)
#if CHIP_HAS_CBOX_HOME_MAP()
static int __initdata ktext_hash = 1;
static int __initdata kdata_hash = 1;
int __write_once hash_default = 1;
EXPORT_SYMBOL(hash_default);
int __write_once kstack_hash = 1;
static __initdata struct cpumask kdata_mask;
static __initdata int kdata_arg_seen;
int __write_once kdata_huge;
static pgprot_t __init construct_pgprot(pgprot_t prot, int home)
static pgprot_t __init init_pgprot(ulong address)
static int __initdata ktext_arg_seen;
static int __initdata ktext_small;
static int __initdata ktext_local;
static int __initdata ktext_all;
static int __initdata ktext_nondataplane;
static int __initdata ktext_nocache;
static struct cpumask __initdata ktext_mask;
static int __init setup_ktext(char *str)
early_param("ktext", setup_ktext);
static inline pgprot_t ktext_set_nocache(pgprot_t prot)
static pmd_t *__init get_pmd(pgd_t pgtables[], unsigned long va)
static pmd_t *__init get_pmd(pgd_t pgtables[], unsigned long va)
static pgd_t pgtables[PTRS_PER_PGD]
__attribute__((aligned(HV_PAGE_TABLE_ALIGN)));
static void __init kernel_physical_mapping_init(pgd_t *pgd_base)
int devmem_is_allowed(unsigned long pagenr)
static void __init permanent_kmaps_init(pgd_t *pgd_base)
static void __init init_free_pfn_range(unsigned long start, unsigned long end)
static void __init set_non_bootmem_pages_init(void)
void __init paging_init(void)
void __init set_page_homes(void)
static void __init set_max_mapnr_init(void)
void __init mem_init(void)
int arch_add_memory(u64 start, u64 size)
int remove_memory(u64 start, u64 size)
struct kmem_cache *pgd_cache;
void __init pgtable_cache_init(void)
#if !CHIP_HAS_COHERENT_LOCAL_CACHE()
static void mark_w1data_ro(void)
static long __write_once initfree;
static long __write_once initfree = 1;
static int __init set_initfree(char *str)
__setup("initfree=", set_initfree);
static void free_init_pages(char *what, unsigned long begin, unsigned long end)
void free_initmem(void)

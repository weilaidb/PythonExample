extern void __weak sh4__flush_region_init(void);
static unsigned long long dtlb_cache_slot;
static inline void
sh64_setup_dtlb_cache_slot(unsigned long eaddr, unsigned long asid,
unsigned long paddr)
static inline void sh64_teardown_dtlb_cache_slot(void)
static inline void sh64_icache_inv_all(void)
static void sh64_icache_inv_kernel_range(unsigned long start, unsigned long end)
static void sh64_icache_inv_user_page(struct vm_area_struct *vma, unsigned long eaddr)
static void sh64_icache_inv_user_page_range(struct mm_struct *mm,
unsigned long start, unsigned long end)
static void sh64_icache_inv_current_user_range(unsigned long start, unsigned long end)
#define DUMMY_ALLOCO_AREA_SIZE ((L1_CACHE_BYTES << 10) + (1024 * 4))
static unsigned char dummy_alloco_area[DUMMY_ALLOCO_AREA_SIZE] __cacheline_aligned = ;
static void inline sh64_dcache_purge_sets(int sets_to_purge_base, int n_sets)
static void sh64_dcache_purge_all(void)
#define MAGIC_PAGE0_START 0xffffffffec000000ULL
static void sh64_dcache_purge_coloured_phy_page(unsigned long paddr,
unsigned long eaddr)
static void sh64_dcache_purge_phy_page(unsigned long paddr)
static void sh64_dcache_purge_user_pages(struct mm_struct *mm,
unsigned long addr, unsigned long end)
static void sh64_dcache_purge_user_range(struct mm_struct *mm,
unsigned long start, unsigned long end)
static void sh5_flush_cache_all(void *unused)
static void sh5_flush_cache_mm(void *unused)
static void sh5_flush_cache_range(void *args)
static void sh5_flush_cache_page(void *args)
static void sh5_flush_dcache_page(void *page)
static void sh5_flush_icache_range(void *args)
static void sh5_flush_cache_sigtramp(void *vaddr)
void __init sh5_cache_init(void)

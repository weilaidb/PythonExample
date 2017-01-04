#define MAX_ICACHE_PAGES	32
static void __flush_cache_one(unsigned long addr, unsigned long phys,
unsigned long exec_offset);
static void sh4_flush_icache_range(void *args)
static inline void flush_cache_one(unsigned long start, unsigned long phys)
static void sh4_flush_dcache_page(void *arg)
static void flush_icache_all(void)
static void flush_dcache_all(void)
static void sh4_flush_cache_all(void *unused)
static void sh4_flush_cache_mm(void *arg)
static void sh4_flush_cache_page(void *args)
static void sh4_flush_cache_range(void *args)
static void __flush_cache_one(unsigned long addr, unsigned long phys,
unsigned long exec_offset)
extern void __weak sh4__flush_region_init(void);
void __init sh4_cache_init(void)

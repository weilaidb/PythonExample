#define CACHE_LINE_SIZE		32
static void __iomem *l2x0_base;
static DEFINE_SPINLOCK(l2x0_lock);
static uint32_t l2x0_way_mask;
static uint32_t l2x0_size;
static inline void cache_wait_way(void __iomem *reg, unsigned long mask)
static inline void cache_wait(void __iomem *reg, unsigned long mask)
#define cache_wait	cache_wait_way
static inline void cache_sync(void)
static inline void l2x0_clean_line(unsigned long addr)
static inline void l2x0_inv_line(unsigned long addr)
#if defined(CONFIG_PL310_ERRATA_588369) || defined(CONFIG_PL310_ERRATA_727915)
#define debug_writel(val)	outer_cache.set_debug(val)
static void l2x0_set_debug(unsigned long val)
static inline void debug_writel(unsigned long val)
#define l2x0_set_debug	NULL
static inline void l2x0_flush_line(unsigned long addr)
static inline void l2x0_flush_line(unsigned long addr)
static void l2x0_cache_sync(void)
static void __l2x0_flush_all(void)
static void l2x0_flush_all(void)
static void l2x0_clean_all(void)
static void l2x0_inv_all(void)
static void l2x0_inv_range(unsigned long start, unsigned long end)
static void l2x0_clean_range(unsigned long start, unsigned long end)
static void l2x0_flush_range(unsigned long start, unsigned long end)
static void l2x0_disable(void)
void __init l2x0_init(void __iomem *base, __u32 aux_val, __u32 aux_mask)

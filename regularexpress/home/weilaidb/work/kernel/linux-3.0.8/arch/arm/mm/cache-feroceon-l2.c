static inline unsigned long l2_get_va(unsigned long paddr)
static inline void l2_put_va(unsigned long vaddr)
static inline void l2_clean_pa(unsigned long addr)
static inline void l2_clean_pa_range(unsigned long start, unsigned long end)
static inline void l2_clean_inv_pa(unsigned long addr)
static inline void l2_inv_pa(unsigned long addr)
static inline void l2_inv_pa_range(unsigned long start, unsigned long end)
static inline void l2_inv_all(void)
#define CACHE_LINE_SIZE		32
#define MAX_RANGE_SIZE		1024
static int l2_wt_override;
static unsigned long calc_range_end(unsigned long start, unsigned long end)
static void feroceon_l2_inv_range(unsigned long start, unsigned long end)
static void feroceon_l2_clean_range(unsigned long start, unsigned long end)
static void feroceon_l2_flush_range(unsigned long start, unsigned long end)
static int __init flush_and_disable_dcache(void)
static void __init enable_dcache(void)
static void __init __invalidate_icache(void)
static int __init invalidate_and_disable_icache(void)
static void __init enable_icache(void)
static inline u32 read_extra_features(void)
static inline void write_extra_features(u32 u)
static void __init disable_l2_prefetch(void)
static void __init enable_l2(void)
void __init feroceon_l2_init(int __l2_wt_override)
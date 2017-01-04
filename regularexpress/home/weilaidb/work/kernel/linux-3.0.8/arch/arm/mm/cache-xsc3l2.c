#define CR_L2	(1 << 26)
#define CACHE_LINE_SIZE		32
#define CACHE_LINE_SHIFT	5
#define CACHE_WAY_PER_SET	8
#define CACHE_WAY_SIZE(l2ctype)	(8192 << (((l2ctype) >> 8) & 0xf))
#define CACHE_SET_SIZE(l2ctype)	(CACHE_WAY_SIZE(l2ctype) >> CACHE_LINE_SHIFT)
static inline int xsc3_l2_present(void)
static inline void xsc3_l2_clean_mva(unsigned long addr)
static inline void xsc3_l2_inv_mva(unsigned long addr)
static inline void xsc3_l2_inv_all(void)
static inline void l2_unmap_va(unsigned long va)
static inline unsigned long l2_map_va(unsigned long pa, unsigned long prev_va)
static void xsc3_l2_inv_range(unsigned long start, unsigned long end)
static void xsc3_l2_clean_range(unsigned long start, unsigned long end)
static inline void xsc3_l2_flush_all(void)
static void xsc3_l2_flush_range(unsigned long start, unsigned long end)
static int __init xsc3_l2_init(void)
core_initcall(xsc3_l2_init);

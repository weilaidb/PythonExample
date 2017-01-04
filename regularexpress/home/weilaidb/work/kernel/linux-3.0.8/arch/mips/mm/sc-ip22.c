static unsigned long scache_size;
#undef DEBUG_CACHE
#define SC_SIZE 0x00080000
#define SC_LINE 32
#define CI_MASK (SC_SIZE - SC_LINE)
#define SC_INDEX(n) ((n) & CI_MASK)
static inline void indy_sc_wipe(unsigned long first, unsigned long last)
static void indy_sc_wback_invalidate(unsigned long addr, unsigned long size)
static void indy_sc_enable(void)
static void indy_sc_disable(void)
static inline int __init indy_sc_probe(void)
static struct bcache_ops indy_sc_ops = ;
void __cpuinit indy_sc_init(void)

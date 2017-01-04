static unsigned long scache_size;
#define SC_LINE 32
#define SC_PAGE (128*SC_LINE)
static inline void blast_r5000_scache(void)
static void r5k_dma_cache_inv_sc(unsigned long addr, unsigned long size)
static void r5k_sc_enable(void)
static void r5k_sc_disable(void)
static inline int __init r5k_sc_probe(void)
static struct bcache_ops r5k_sc_ops = ;
void __cpuinit r5k_sc_init(void)

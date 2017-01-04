static void mips_sc_wback_inv(unsigned long addr, unsigned long size)
static void mips_sc_inv(unsigned long addr, unsigned long size)
static void mips_sc_enable(void)
static void mips_sc_disable(void)
static struct bcache_ops mips_sc_ops = ;
static inline int mips_sc_is_activated(struct cpuinfo_mips *c)
static inline int __init mips_sc_probe(void)
int __cpuinit mips_sc_init(void)

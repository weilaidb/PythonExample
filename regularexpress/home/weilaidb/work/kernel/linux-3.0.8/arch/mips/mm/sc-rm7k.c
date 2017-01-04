#undef DEBUG
#define sc_lsize	32
#define tc_pagesize	(32*128)
#define scache_size	(256*1024)
#define tc_lsize	32
extern unsigned long icache_way_size, dcache_way_size;
static unsigned long tcache_size;
static int rm7k_tcache_init;
static void rm7k_sc_wback_inv(unsigned long addr, unsigned long size)
static void rm7k_sc_inv(unsigned long addr, unsigned long size)
static void blast_rm7k_tcache(void)
static __cpuinit void __rm7k_tc_enable(void)
static __cpuinit void rm7k_tc_enable(void)
static __cpuinit void __rm7k_sc_enable(void)
static __cpuinit void rm7k_sc_enable(void)
static void rm7k_tc_disable(void)
static void rm7k_sc_disable(void)
static struct bcache_ops rm7k_sc_ops = ;
static __cpuinit void __probe_tcache(void)
void __cpuinit rm7k_sc_init(void)

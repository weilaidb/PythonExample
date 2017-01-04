#define DBG(fmt...)
extern void bootx_init(unsigned long r4, unsigned long phys);
int boot_cpuid = -1;
EXPORT_SYMBOL_GPL(boot_cpuid);
int __initdata boot_cpu_count;
int boot_cpuid_phys;
int smp_hw_index[NR_CPUS];
unsigned long ISA_DMA_THRESHOLD;
unsigned int DMA_MODE_READ;
unsigned int DMA_MODE_WRITE;
unsigned long vgacon_remap_base;
EXPORT_SYMBOL(vgacon_remap_base);
int dcache_bsize;
int icache_bsize;
int ucache_bsize;
notrace unsigned long __init early_init(unsigned long dt_ptr)
notrace void __init machine_init(unsigned long dt_ptr)
notrace int __init early_parse_wdt(char *p)
early_param("wdt", early_parse_wdt);
int __init early_parse_wdt_period (char *p)
early_param("wdt_period", early_parse_wdt_period);
int __init ppc_setup_l2cr(char *str)
__setup("l2cr=", ppc_setup_l2cr);
int __init ppc_setup_l3cr(char *str)
__setup("l3cr=", ppc_setup_l3cr);
unsigned char nvram_read_byte(int addr)
EXPORT_SYMBOL(nvram_read_byte);
void nvram_write_byte(unsigned char val, int addr)
EXPORT_SYMBOL(nvram_write_byte);
ssize_t nvram_get_size(void)
EXPORT_SYMBOL(nvram_get_size);
void nvram_sync(void)
EXPORT_SYMBOL(nvram_sync);
int __init ppc_init(void)
arch_initcall(ppc_init);
static void __init irqstack_early_init(void)
#if defined(CONFIG_BOOKE) || defined(CONFIG_40x)
static void __init exc_lvl_early_init(void)
#define exc_lvl_early_init()
void __init setup_arch(char **cmdline_p)

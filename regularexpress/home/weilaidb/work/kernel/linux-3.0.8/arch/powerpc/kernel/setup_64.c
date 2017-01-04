#undef DEBUG
#define DBG(fmt...) udbg_printf(fmt)
#define DBG(fmt...)
int boot_cpuid = 0;
int __initdata boot_cpu_count;
u64 ppc64_pft_size;
struct ppc64_caches ppc64_caches = ;
EXPORT_SYMBOL_GPL(ppc64_caches);
int dcache_bsize;
int icache_bsize;
int ucache_bsize;
static char *smt_enabled_cmdline;
static void check_smt_enabled(void)
static int __init early_smt_enabled(char *p)
early_param("smt-enabled", early_smt_enabled);
#define check_smt_enabled()
void __init early_setup(unsigned long dt_ptr)
void early_setup_secondary(void)
#if defined(CONFIG_SMP) || defined(CONFIG_KEXEC)
void smp_release_cpus(void)
static void __init initialize_cache_info(void)
void __init setup_system(void)
static u64 safe_stack_limit(void)
static void __init irqstack_early_init(void)
static void __init exc_lvl_early_init(void)
#define exc_lvl_early_init()
static void __init emergency_stack_init(void)
void __init setup_arch(char **cmdline_p)
#define PPC64_LINUX_FUNCTION 0x0f000000
#define PPC64_IPL_MESSAGE 0xc0000000
#define PPC64_TERM_MESSAGE 0xb0000000
static void ppc64_do_msg(unsigned int src, const char *msg)
void ppc64_boot_msg(unsigned int src, const char *msg)
#define PCPU_DYN_SIZE		()
static void * __init pcpu_fc_alloc(unsigned int cpu, size_t size, size_t align)
static void __init pcpu_fc_free(void *ptr, size_t size)
static int pcpu_cpu_distance(unsigned int from, unsigned int to)
unsigned long __per_cpu_offset[NR_CPUS] __read_mostly;
EXPORT_SYMBOL(__per_cpu_offset);
void __init setup_per_cpu_areas(void)
struct ppc_pci_io ppc_pci_io;
EXPORT_SYMBOL(ppc_pci_io);

#if defined(CONFIG_SMP) && (IA64_CPU_SIZE > PAGE_SIZE)
# error "struct cpuinfo_ia64 too big!"
unsigned long __per_cpu_offset[NR_CPUS];
EXPORT_SYMBOL(__per_cpu_offset);
DEFINE_PER_CPU(struct cpuinfo_ia64, ia64_cpu_info);
DEFINE_PER_CPU(unsigned long, local_per_cpu_offset);
unsigned long ia64_cycles_per_usec;
struct ia64_boot_param *ia64_boot_param;
struct screen_info screen_info;
unsigned long vga_console_iobase;
unsigned long vga_console_membase;
static struct resource data_resource = ;
static struct resource code_resource = ;
static struct resource bss_resource = ;
unsigned long ia64_max_cacheline_size;
unsigned long ia64_iobase;
EXPORT_SYMBOL(ia64_iobase);
struct io_space io_space[MAX_IO_SPACES];
EXPORT_SYMBOL(io_space);
unsigned int num_io_spaces;
#define	I_CACHE_STRIDE_SHIFT	5
unsigned long ia64_i_cache_stride_shift = ~0;
#define	CACHE_STRIDE_SHIFT	5
unsigned long ia64_cache_stride_shift = ~0;
unsigned long ia64_max_iommu_merge_mask = ~0UL;
EXPORT_SYMBOL(ia64_max_iommu_merge_mask);
struct rsvd_region rsvd_region[IA64_MAX_RSVD_REGIONS + 1] __initdata;
int num_rsvd_regions __initdata;
int __init
filter_rsvd_memory (u64 start, u64 end, void *arg)
int __init
filter_memory(u64 start, u64 end, void *arg)
static void __init
sort_regions (struct rsvd_region *rsvd_region, int max)
static int __init register_memory(void)
__initcall(register_memory);
static int __init check_crashkernel_memory(unsigned long pbase, size_t size)
static void __init setup_crashkernel(unsigned long total, int *n)
static inline void __init setup_crashkernel(unsigned long total, int *n)
void __init
reserve_memory (void)
void __init
find_initrd (void)
static void __init
io_port_init (void)
static inline int __init
early_console_setup (char *cmdline)
static inline void
mark_bsp_online (void)
static __initdata int nomca;
static __init int setup_nomca(char *s)
early_param("nomca", setup_nomca);
int __init reserve_elfcorehdr(u64 *start, u64 *end)
void __init
setup_arch (char **cmdline_p)
static int
show_cpuinfo (struct seq_file *m, void *v)
static void *
c_start (struct seq_file *m, loff_t *pos)
static void *
c_next (struct seq_file *m, void *v, loff_t *pos)
static void
c_stop (struct seq_file *m, void *v)
const struct seq_operations cpuinfo_op = ;
#define MAX_BRANDS	8
static char brandname[MAX_BRANDS][128];
static char * __cpuinit
get_model_name(__u8 family, __u8 model)
static void __cpuinit
identify_cpu (struct cpuinfo_ia64 *c)
static void __cpuinit
get_cache_info(void)
void __cpuinit
cpu_init (void)
void __init
check_bugs (void)
static int __init run_dmi_scan(void)
core_initcall(run_dmi_scan);

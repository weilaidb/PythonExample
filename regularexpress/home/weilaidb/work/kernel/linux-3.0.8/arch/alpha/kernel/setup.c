extern struct atomic_notifier_head panic_notifier_list;
static int alpha_panic_event(struct notifier_block *, unsigned long, void *);
static struct notifier_block alpha_panic_block = ;
struct hwrpb_struct *hwrpb;
EXPORT_SYMBOL(hwrpb);
unsigned long srm_hae;
int alpha_l1i_cacheshape;
int alpha_l1d_cacheshape;
int alpha_l2_cacheshape;
int alpha_l3_cacheshape;
unsigned long alpha_verbose_mcheck = CONFIG_VERBOSE_MCHECK_ON;
struct cpumask node_to_cpumask_map[MAX_NUMNODES] __read_mostly;
EXPORT_SYMBOL(node_to_cpumask_map);
int boot_cpuid;
int srmcons_output = 0;
unsigned long mem_size_limit = 0;
unsigned long alpha_agpgart_size = DEFAULT_AGP_APER_SIZE;
struct alpha_machine_vector alpha_mv;
int alpha_using_srm;
EXPORT_SYMBOL(alpha_using_srm);
static struct alpha_machine_vector *get_sysvec(unsigned long, unsigned long,
unsigned long);
static struct alpha_machine_vector *get_sysvec_byname(const char *);
static void get_sysnames(unsigned long, unsigned long, unsigned long,
char **, char **);
static void determine_cpu_caches (unsigned int);
static char __initdata command_line[COMMAND_LINE_SIZE];
struct screen_info screen_info = ;
EXPORT_SYMBOL(screen_info);
unsigned long __direct_map_base;
unsigned long __direct_map_size;
EXPORT_SYMBOL(__direct_map_base);
EXPORT_SYMBOL(__direct_map_size);
#define WEAK(X) \
extern struct alpha_machine_vector X; \
asm(".weak "#X)
WEAK(alcor_mv);
WEAK(alphabook1_mv);
WEAK(avanti_mv);
WEAK(cabriolet_mv);
WEAK(clipper_mv);
WEAK(dp264_mv);
WEAK(eb164_mv);
WEAK(eb64p_mv);
WEAK(eb66_mv);
WEAK(eb66p_mv);
WEAK(eiger_mv);
WEAK(jensen_mv);
WEAK(lx164_mv);
WEAK(lynx_mv);
WEAK(marvel_ev7_mv);
WEAK(miata_mv);
WEAK(mikasa_mv);
WEAK(mikasa_primo_mv);
WEAK(monet_mv);
WEAK(nautilus_mv);
WEAK(noname_mv);
WEAK(noritake_mv);
WEAK(noritake_primo_mv);
WEAK(p2k_mv);
WEAK(pc164_mv);
WEAK(privateer_mv);
WEAK(rawhide_mv);
WEAK(ruffian_mv);
WEAK(rx164_mv);
WEAK(sable_mv);
WEAK(sable_gamma_mv);
WEAK(shark_mv);
WEAK(sx164_mv);
WEAK(takara_mv);
WEAK(titan_mv);
WEAK(webbrick_mv);
WEAK(wildfire_mv);
WEAK(xl_mv);
WEAK(xlt_mv);
#undef WEAK
static void __init
reserve_std_resources(void)
#define PFN_MAX		PFN_DOWN(0x80000000)
#define for_each_mem_cluster(memdesc, _cluster, i)		\
for ((_cluster) = (memdesc)->cluster, (i) = 0;		\
(i) < (memdesc)->numclusters; (i)++, (_cluster)++)
static unsigned long __init
get_mem_size_limit(char *s)
void * __init
move_initrd(unsigned long mem_limit)
static void __init
setup_memory(void *kernel_end)
extern void setup_memory(void *);
int __init
page_is_ram(unsigned long pfn)
static int __init
register_cpus(void)
arch_initcall(register_cpus);
void __init
setup_arch(char **cmdline_p)
static char sys_unknown[] = "Unknown";
static char systype_names[][16] = ;
static char unofficial_names[][8] = ;
static char api_names[][16] = ;
static char eb164_names[][8] = ;
static int eb164_indices[] = ;
static char alcor_names[][16] = ;
static int alcor_indices[] = ;
static char eb64p_names[][16] = ;
static int eb64p_indices[] = ;
static char eb66_names[][8] = ;
static int eb66_indices[] = ;
static char marvel_names[][16] = ;
static int marvel_indices[] = ;
static char rawhide_names[][16] = ;
static int rawhide_indices[] = ;
static char titan_names[][16] = ;
static int titan_indices[] = ;
static char tsunami_names[][16] = ;
static int tsunami_indices[] = ;
static struct alpha_machine_vector * __init
get_sysvec(unsigned long type, unsigned long variation, unsigned long cpu)
static struct alpha_machine_vector * __init
get_sysvec_byname(const char *name)
static void
get_sysnames(unsigned long type, unsigned long variation, unsigned long cpu,
char **type_name, char **variation_name)
static char *
platform_string(void)
static int
get_nr_processors(struct percpu_struct *cpubase, unsigned long num)
static void
show_cache_size (struct seq_file *f, const char *which, int shape)
static int
show_cpuinfo(struct seq_file *f, void *slot)
static int __init
read_mem_block(int *addr, int stride, int size)
#define CSHAPE(totalsize, linesize, assoc) \
((totalsize & ~0xff) | (linesize << 4) | assoc)
#define MAX_BCACHE_SIZE	16*1024*1024
static int __init
external_cache_probe(int minsize, int width)
static void __init
determine_cpu_caches (unsigned int cpu_type)
static void *
c_start(struct seq_file *f, loff_t *pos)
static void *
c_next(struct seq_file *f, void *v, loff_t *pos)
static void
c_stop(struct seq_file *f, void *v)
const struct seq_operations cpuinfo_op = ;
static int
alpha_panic_event(struct notifier_block *this, unsigned long event, void *ptr)
static __init int add_pcspkr(void)
device_initcall(add_pcspkr);

DEFINE_PER_CPU(cpuinfo_sparc, __cpu_data) = ;
EXPORT_PER_CPU_SYMBOL(__cpu_data);
int ncpus_probed;
unsigned int fsr_storage;
struct cpu_info ;
struct fpu_info ;
#define NOCPU 8
#define NOFPU 8
struct manufacturer_info ;
#define CPU(ver, _name) \
#define CPU_PMU(ver, _name, _pmu_name)	\
#define FPU(ver, _name) \
static const struct manufacturer_info __initconst manufacturer_info[] = ;
static const char *sparc_cpu_type;
static const char *sparc_fpu_type;
const char *sparc_pmu_type;
static void __init set_cpu_and_fpu(int psr_impl, int psr_vers, int fpu_vers)
static int show_cpuinfo(struct seq_file *m, void *__unused)
unsigned int dcache_parity_tl1_occurred;
unsigned int icache_parity_tl1_occurred;
static int show_cpuinfo(struct seq_file *m, void *__unused)
static void *c_start(struct seq_file *m, loff_t *pos)
static void *c_next(struct seq_file *m, void *v, loff_t *pos)
static void c_stop(struct seq_file *m, void *v)
const struct seq_operations cpuinfo_op = ;
static int __init cpu_type_probe(void)
static void __init sun4v_cpu_probe(void)
static int __init cpu_type_probe(void)
early_initcall(cpu_type_probe);

#define DEBUG_SMP
#define Dprintk(x...) printk(x)
#define Dprintk(x...)
extern cpumask_t cpu_initialized;
static unsigned int bsp_phys_id = -1;
physid_mask_t phys_cpu_present_map;
cpumask_t cpu_bootout_map;
cpumask_t cpu_bootin_map;
static cpumask_t cpu_callin_map;
cpumask_t cpu_callout_map;
EXPORT_SYMBOL(cpu_callout_map);
struct cpuinfo_m32r cpu_data[NR_CPUS] __cacheline_aligned;
static int cpucount;
static cpumask_t smp_commenced_mask;
extern struct  stack_start;
static volatile int physid_2_cpu[NR_CPUS];
#define physid_to_cpu(physid)	physid_2_cpu[physid]
volatile int cpu_2_physid[NR_CPUS];
DEFINE_PER_CPU(int, prof_multiplier) = 1;
DEFINE_PER_CPU(int, prof_old_multiplier) = 1;
DEFINE_PER_CPU(int, prof_counter) = 1;
spinlock_t ipi_lock[NR_IPIS];
static unsigned int calibration_result;
void smp_prepare_boot_cpu(void);
void smp_prepare_cpus(unsigned int);
static void init_ipi_lock(void);
static void do_boot_cpu(int);
int __cpu_up(unsigned int);
void smp_cpus_done(unsigned int);
int start_secondary(void *);
static void smp_callin(void);
static void smp_online(void);
static void show_mp_info(int);
static void smp_store_cpu_info(int);
static void show_cpu_info(int);
int setup_profiling_timer(unsigned int);
static void init_cpu_to_physid(void);
static void map_cpu_to_physid(int, int);
static void unmap_cpu_to_physid(int, int);
void __devinit smp_prepare_boot_cpu(void)
void __init smp_prepare_cpus(unsigned int max_cpus)
static void __init init_ipi_lock(void)
static void __init do_boot_cpu(int phys_id)
int __cpuinit __cpu_up(unsigned int cpu_id)
void __init smp_cpus_done(unsigned int max_cpus)
int __init start_secondary(void *unused)
static void __init smp_callin(void)
static void __init smp_online(void)
static void __init show_mp_info(int nr_cpu)
static void __init smp_store_cpu_info(int cpu_id)
static void __init show_cpu_info(int cpu_id)
int setup_profiling_timer(unsigned int multiplier)
static void __init init_cpu_to_physid(void)
static void __init map_cpu_to_physid(int cpu_id, int phys_id)
static void __init unmap_cpu_to_physid(int cpu_id, int phys_id)

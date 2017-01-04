#define SMP_DEBUG 0
#if SMP_DEBUG
#define Dprintk(x...)  printk(x)
#define Dprintk(x...)
#define bsp_remove_ok	1
#define bsp_remove_ok	0
struct task_struct *idle_thread_array[NR_CPUS];
struct sal_to_os_boot sal_boot_rendez_state[NR_CPUS];
struct sal_to_os_boot *sal_state_for_booting_cpu = &sal_boot_rendez_state[0];
#define set_brendez_area(x) (sal_state_for_booting_cpu = &sal_boot_rendez_state[(x)]);
#define get_idle_for_cpu(x)		(idle_thread_array[(x)])
#define set_idle_for_cpu(x,p)	(idle_thread_array[(x)] = (p))
#define get_idle_for_cpu(x)		(NULL)
#define set_idle_for_cpu(x,p)
#define set_brendez_area(x)
#define MASTER	(0)
#define SLAVE	(SMP_CACHE_BYTES/8)
#define NUM_ROUNDS	64
#define NUM_ITERS	5
static DEFINE_SPINLOCK(itc_sync_lock);
static volatile unsigned long go[SLAVE + 1];
#define DEBUG_ITC_SYNC	0
extern void start_ap (void);
extern unsigned long ia64_iobase;
struct task_struct *task_for_booting_cpu;
DEFINE_PER_CPU(int, cpu_state);
cpumask_t cpu_core_map[NR_CPUS] __cacheline_aligned;
EXPORT_SYMBOL(cpu_core_map);
DEFINE_PER_CPU_SHARED_ALIGNED(cpumask_t, cpu_sibling_map);
EXPORT_PER_CPU_SYMBOL(cpu_sibling_map);
int smp_num_siblings = 1;
volatile int ia64_cpu_to_sapicid[NR_CPUS];
EXPORT_SYMBOL(ia64_cpu_to_sapicid);
static volatile cpumask_t cpu_callin_map;
struct smp_boot_data smp_boot_data __initdata;
unsigned long ap_wakeup_vector = -1;
char __initdata no_int_routing;
unsigned char smp_int_redirect;
#define CPEI_OVERRIDE_DEFAULT	(1)
#define CPEI_OVERRIDE_DEFAULT	(0)
unsigned int force_cpei_retarget = CPEI_OVERRIDE_DEFAULT;
static int __init
cmdl_force_cpei(char *str)
__setup("force_cpei=", cmdl_force_cpei);
static int __init
nointroute (char *str)
__setup("nointroute", nointroute);
static void fix_b0_for_bsp(void)
void
sync_master (void *arg)
static inline long
get_delta (long *rt, long *master)
void
ia64_sync_itc (unsigned int master)
static inline void __devinit
smp_setup_percpu_timer (void)
static void __cpuinit
smp_callin (void)
int __cpuinit
start_secondary (void *unused)
struct pt_regs * __cpuinit idle_regs(struct pt_regs *regs)
struct create_idle ;
void __cpuinit
do_fork_idle(struct work_struct *work)
static int __cpuinit
do_boot_cpu (int sapicid, int cpu)
static int __init
decay (char *str)
__setup("decay=", decay);
void __init
smp_build_cpu_map (void)
void __init
smp_prepare_cpus (unsigned int max_cpus)
void __devinit smp_prepare_boot_cpu(void)
static inline void
clear_cpu_sibling_map(int cpu)
static void
remove_siblinginfo(int cpu)
extern void fixup_irqs(void);
int migrate_platform_irqs(unsigned int cpu)
int __cpu_disable(void)
void __cpu_die(unsigned int cpu)
void
smp_cpus_done (unsigned int dummy)
static inline void __devinit
set_cpu_sibling_map(int cpu)
int __cpuinit
__cpu_up (unsigned int cpu)
void __init
init_smp_config(void)
void __devinit
identify_siblings(struct cpuinfo_ia64 *c)
int is_multithreading_enabled(void)
EXPORT_SYMBOL_GPL(is_multithreading_enabled);

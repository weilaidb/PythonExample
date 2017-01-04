#define VDD_SC1_ARRAY_CLAMP_GFS_CTL 0x15A0
#define SCSS_CPU1CORE_RESET 0xD80
#define SCSS_DBG_STATUS_CORE_PWRDUP 0xE64
#define GIC_PPI_EDGE_MASK 0xFFFFD7FF
extern void msm_secondary_startup(void);
volatile int pen_release = -1;
static DEFINE_SPINLOCK(boot_lock);
void __cpuinit platform_secondary_init(unsigned int cpu)
static __cpuinit void prepare_cold_cpu(unsigned int cpu)
int __cpuinit boot_secondary(unsigned int cpu, struct task_struct *idle)
void __init smp_init_cpus(void)
void __init platform_smp_prepare_cpus(unsigned int max_cpus)

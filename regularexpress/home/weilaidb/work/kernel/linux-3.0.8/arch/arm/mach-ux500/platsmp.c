extern void u8500_secondary_startup(void);
volatile int pen_release = -1;
static void write_pen_release(int val)
static void __iomem *scu_base_addr(void)
static DEFINE_SPINLOCK(boot_lock);
void __cpuinit platform_secondary_init(unsigned int cpu)
int __cpuinit boot_secondary(unsigned int cpu, struct task_struct *idle)
static void __init wakeup_secondary(void)
void __init smp_init_cpus(void)
void __init platform_smp_prepare_cpus(unsigned int max_cpus)

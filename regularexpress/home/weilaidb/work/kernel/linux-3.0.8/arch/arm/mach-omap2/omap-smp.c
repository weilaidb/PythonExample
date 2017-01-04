static void __iomem *scu_base;
static DEFINE_SPINLOCK(boot_lock);
void __cpuinit platform_secondary_init(unsigned int cpu)
int __cpuinit boot_secondary(unsigned int cpu, struct task_struct *idle)
static void __init wakeup_secondary(void)
void __init smp_init_cpus(void)
void __init platform_smp_prepare_cpus(unsigned int max_cpus)

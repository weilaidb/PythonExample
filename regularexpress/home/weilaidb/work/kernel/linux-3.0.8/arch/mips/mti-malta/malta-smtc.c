static void msmtc_send_ipi_single(int cpu, unsigned int action)
static void msmtc_send_ipi_mask(const struct cpumask *mask, unsigned int action)
static void __cpuinit msmtc_init_secondary(void)
static void __cpuinit msmtc_boot_secondary(int cpu, struct task_struct *idle)
static void __cpuinit msmtc_smp_finish(void)
static void msmtc_cpus_done(void)
static void __init msmtc_smp_setup(void)
static void __init msmtc_prepare_cpus(unsigned int max_cpus)
struct plat_smp_ops msmtc_smp_ops = ;
int plat_set_irq_affinity(struct irq_data *d, const struct cpumask *affinity,
bool force)

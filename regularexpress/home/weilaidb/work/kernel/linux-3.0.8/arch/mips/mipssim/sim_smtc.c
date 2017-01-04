static void ssmtc_send_ipi_single(int cpu, unsigned int action)
static inline void ssmtc_send_ipi_mask(const struct cpumask *mask,
unsigned int action)
static void __cpuinit ssmtc_init_secondary(void)
static void __cpuinit ssmtc_smp_finish(void)
static void ssmtc_cpus_done(void)
static void __cpuinit ssmtc_boot_secondary(int cpu, struct task_struct *idle)
static void __init ssmtc_smp_setup(void)
static void ssmtc_prepare_cpus(unsigned int max_cpus)
struct plat_smp_ops ssmtc_smp_ops = ;

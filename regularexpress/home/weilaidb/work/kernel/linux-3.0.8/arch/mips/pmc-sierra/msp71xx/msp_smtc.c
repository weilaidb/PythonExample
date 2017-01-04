static void msp_smtc_send_ipi_single(int cpu, unsigned int action)
static void msp_smtc_send_ipi_mask(const struct cpumask *mask,
unsigned int action)
static void __cpuinit msp_smtc_init_secondary(void)
static void __cpuinit msp_smtc_boot_secondary(int cpu,
struct task_struct *idle)
static void __cpuinit msp_smtc_smp_finish(void)
static void msp_smtc_cpus_done(void)
static void __init msp_smtc_smp_setup(void)
static void __init msp_smtc_prepare_cpus(unsigned int max_cpus)
struct plat_smp_ops msp_smtc_smp_ops = ;

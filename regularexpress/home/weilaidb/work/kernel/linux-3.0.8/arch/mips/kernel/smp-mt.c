static void __init smvp_copy_vpe_config(void)
static unsigned int __init smvp_vpe_init(unsigned int tc, unsigned int mvpconf0,
unsigned int ncpu)
static void __init smvp_tc_init(unsigned int tc, unsigned int mvpconf0)
static void vsmp_send_ipi_single(int cpu, unsigned int action)
static void vsmp_send_ipi_mask(const struct cpumask *mask, unsigned int action)
static void __cpuinit vsmp_init_secondary(void)
static void __cpuinit vsmp_smp_finish(void)
static void vsmp_cpus_done(void)
static void __cpuinit vsmp_boot_secondary(int cpu, struct task_struct *idle)
static void __init vsmp_smp_setup(void)
static void __init vsmp_prepare_cpus(unsigned int max_cpus)
struct plat_smp_ops vsmp_smp_ops = ;

#undef DEBUG
static void ipi_call_function(unsigned int cpu)
static void ipi_resched(unsigned int cpu)
void cmp_send_ipi_single(int cpu, unsigned int action)
static void cmp_send_ipi_mask(const struct cpumask *mask, unsigned int action)
static void cmp_init_secondary(void)
static void cmp_smp_finish(void)
static void cmp_cpus_done(void)
static void cmp_boot_secondary(int cpu, struct task_struct *idle)
void __init cmp_smp_setup(void)
void __init cmp_prepare_cpus(unsigned int max_cpus)
struct plat_smp_ops cmp_smp_ops = ;

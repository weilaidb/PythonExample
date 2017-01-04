static void *mailbox_set_regs[] = ;
static void *mailbox_clear_regs[] = ;
static void *mailbox_regs[] = ;
void __cpuinit sb1250_smp_init(void)
static void sb1250_send_ipi_single(int cpu, unsigned int action)
static inline void sb1250_send_ipi_mask(const struct cpumask *mask,
unsigned int action)
static void __cpuinit sb1250_init_secondary(void)
static void __cpuinit sb1250_smp_finish(void)
static void sb1250_cpus_done(void)
static void __cpuinit sb1250_boot_secondary(int cpu, struct task_struct *idle)
static void __init sb1250_smp_setup(void)
static void __init sb1250_prepare_cpus(unsigned int max_cpus)
struct plat_smp_ops sb_smp_ops = ;
void sb1250_mailbox_interrupt(void)

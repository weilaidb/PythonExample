extern void smp_call_function_interrupt(void);
static void *mailbox_0_set_regs[] = ;
static void *mailbox_0_clear_regs[] = ;
static void *mailbox_0_regs[] = ;
void __cpuinit bcm1480_smp_init(void)
static void bcm1480_send_ipi_single(int cpu, unsigned int action)
static void bcm1480_send_ipi_mask(const struct cpumask *mask,
unsigned int action)
static void __cpuinit bcm1480_init_secondary(void)
static void __cpuinit bcm1480_smp_finish(void)
static void bcm1480_cpus_done(void)
static void __cpuinit bcm1480_boot_secondary(int cpu, struct task_struct *idle)
static void __init bcm1480_smp_setup(void)
static void __init bcm1480_prepare_cpus(unsigned int max_cpus)
struct plat_smp_ops bcm1480_smp_ops = ;
void bcm1480_mailbox_interrupt(void)

#define LAUNCHSTACK_SIZE 256
static __cpuinitdata arch_spinlock_t launch_lock = __ARCH_SPIN_LOCK_UNLOCKED;
static unsigned long secondary_sp __cpuinitdata;
static unsigned long secondary_gp __cpuinitdata;
static unsigned char launchstack[LAUNCHSTACK_SIZE] __initdata
__attribute__((aligned(2 * sizeof(long))));
static void __init prom_smp_bootstrap(void)
void __init prom_grab_secondary(void)
void titan_mailbox_irq(void)
static void yos_send_ipi_single(int cpu, unsigned int action)
static void yos_send_ipi_mask(const struct cpumask *mask, unsigned int action)
static void __cpuinit yos_init_secondary(void)
static void __cpuinit yos_smp_finish(void)
static void yos_cpus_done(void)
static void __cpuinit yos_boot_secondary(int cpu, struct task_struct *idle)
static void __init yos_smp_setup(void)
static void __init yos_prepare_cpus(unsigned int max_cpus)
struct plat_smp_ops yos_smp_ops = ;

volatile unsigned long octeon_processor_boot = 0xff;
volatile unsigned long octeon_processor_sp;
volatile unsigned long octeon_processor_gp;
uint64_t octeon_bootloader_entry_addr;
EXPORT_SYMBOL(octeon_bootloader_entry_addr);
static irqreturn_t mailbox_interrupt(int irq, void *dev_id)
void octeon_send_ipi_single(int cpu, unsigned int action)
static inline void octeon_send_ipi_mask(const struct cpumask *mask,
unsigned int action)
static void octeon_smp_hotplug_setup(void)
static void octeon_smp_setup(void)
static void octeon_boot_secondary(int cpu, struct task_struct *idle)
static void __cpuinit octeon_init_secondary(void)
void octeon_prepare_cpus(unsigned int max_cpus)
static void octeon_smp_finish(void)
static void octeon_cpus_done(void)
DEFINE_PER_CPU(int, cpu_state);
extern void fixup_irqs(void);
static DEFINE_SPINLOCK(smp_reserve_lock);
static int octeon_cpu_disable(void)
static void octeon_cpu_die(unsigned int cpu)
void play_dead(void)
extern void kernel_entry(unsigned long arg1, ...);
static void start_after_reset(void)
static int octeon_update_boot_vector(unsigned int cpu)
static int __cpuinit octeon_cpu_callback(struct notifier_block *nfb,
unsigned long action, void *hcpu)
static int __cpuinit register_cavium_notifier(void)
late_initcall(register_cavium_notifier);
struct plat_smp_ops octeon_smp_ops = ;

static DEFINE_SPINLOCK(boot_lock);
void __init platform_init_cpus(void)
void __init platform_prepare_cpus(unsigned int max_cpus)
int __init setup_profiling_timer(unsigned int multiplier)
void __cpuinit platform_secondary_init(unsigned int cpu)
int __cpuinit platform_boot_secondary(unsigned int cpu, struct task_struct *idle)
static const char supple0[] = "IRQ_SUPPLE_0";
static const char supple1[] = "IRQ_SUPPLE_1";
void __init platform_request_ipi(int irq, void *handler)
void platform_send_ipi(cpumask_t callmap, int irq)
void platform_send_ipi_cpu(unsigned int cpu, int irq)
void platform_clear_ipi(unsigned int cpu, int irq)
void __cpuinit bfin_local_timer_setup(void)

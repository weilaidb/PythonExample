cpumask_var_t xen_cpu_initialized_map;
static DEFINE_PER_CPU(int, xen_resched_irq);
static DEFINE_PER_CPU(int, xen_callfunc_irq);
static DEFINE_PER_CPU(int, xen_callfuncsingle_irq);
static DEFINE_PER_CPU(int, xen_debug_irq) = -1;
static irqreturn_t xen_call_function_interrupt(int irq, void *dev_id);
static irqreturn_t xen_call_function_single_interrupt(int irq, void *dev_id);
static irqreturn_t xen_reschedule_interrupt(int irq, void *dev_id)
static void __cpuinit cpu_bringup(void)
static void __cpuinit cpu_bringup_and_idle(void)
static int xen_smp_intr_init(unsigned int cpu)
static void __init xen_fill_possible_map(void)
static void __init xen_filter_cpu_maps(void)
static void __init xen_smp_prepare_boot_cpu(void)
static void __init xen_smp_prepare_cpus(unsigned int max_cpus)
static int __cpuinit
cpu_initialize_context(unsigned int cpu, struct task_struct *idle)
static int __cpuinit xen_cpu_up(unsigned int cpu)
static void xen_smp_cpus_done(unsigned int max_cpus)
static int xen_cpu_disable(void)
static void xen_cpu_die(unsigned int cpu)
static void __cpuinit xen_play_dead(void)
static int xen_cpu_disable(void)
static void xen_cpu_die(unsigned int cpu)
static void xen_play_dead(void)
static void stop_self(void *v)
static void xen_stop_other_cpus(int wait)
static void xen_smp_send_reschedule(int cpu)
static void xen_send_IPI_mask(const struct cpumask *mask,
enum ipi_vector vector)
static void xen_smp_send_call_function_ipi(const struct cpumask *mask)
static void xen_smp_send_call_function_single_ipi(int cpu)
static irqreturn_t xen_call_function_interrupt(int irq, void *dev_id)
static irqreturn_t xen_call_function_single_interrupt(int irq, void *dev_id)
static const struct smp_ops xen_smp_ops __initconst = ;
void __init xen_smp_init(void)
static void __init xen_hvm_smp_prepare_cpus(unsigned int max_cpus)
static int __cpuinit xen_hvm_cpu_up(unsigned int cpu)
static void xen_hvm_cpu_die(unsigned int cpu)
void __init xen_hvm_smp_init(void)

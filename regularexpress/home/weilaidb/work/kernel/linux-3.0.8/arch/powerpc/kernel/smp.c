#undef DEBUG
#define DBG(fmt...) udbg_printf(fmt)
#define DBG(fmt...)
static DEFINE_PER_CPU(struct task_struct *, idle_thread_array);
#define get_idle_for_cpu(x)      (per_cpu(idle_thread_array, x))
#define set_idle_for_cpu(x, p)   (per_cpu(idle_thread_array, x) = (p))
static struct task_struct *idle_thread_array[NR_CPUS] __cpuinitdata ;
#define get_idle_for_cpu(x)      (idle_thread_array[(x)])
#define set_idle_for_cpu(x, p)   (idle_thread_array[(x)] = (p))
struct thread_info *secondary_ti;
DEFINE_PER_CPU(cpumask_var_t, cpu_sibling_map);
DEFINE_PER_CPU(cpumask_var_t, cpu_core_map);
EXPORT_PER_CPU_SYMBOL(cpu_sibling_map);
EXPORT_PER_CPU_SYMBOL(cpu_core_map);
struct smp_ops_t *smp_ops;
volatile unsigned int cpu_callin_map[NR_CPUS];
int smt_enabled_at_boot = 1;
static void (*crash_ipi_function_ptr)(struct pt_regs *) = NULL;
int __devinit smp_generic_kick_cpu(int nr)
static irqreturn_t call_function_action(int irq, void *data)
static irqreturn_t reschedule_action(int irq, void *data)
static irqreturn_t call_function_single_action(int irq, void *data)
static irqreturn_t debug_ipi_action(int irq, void *data)
static irq_handler_t smp_ipi_action[] = ;
const char *smp_ipi_name[] = ;
int smp_request_message_ipi(int virq, int msg)
struct cpu_messages ;
static DEFINE_PER_CPU_SHARED_ALIGNED(struct cpu_messages, ipi_message);
void smp_muxed_ipi_set_data(int cpu, unsigned long data)
void smp_muxed_ipi_message_pass(int cpu, int msg)
void smp_muxed_ipi_resend(void)
irqreturn_t smp_ipi_demux(void)
void smp_send_reschedule(int cpu)
void arch_send_call_function_single_ipi(int cpu)
void arch_send_call_function_ipi_mask(const struct cpumask *mask)
#if defined(CONFIG_DEBUGGER) || defined(CONFIG_KEXEC)
void smp_send_debugger_break(void)
void crash_send_ipi(void (*crash_ipi_callback)(struct pt_regs *))
static void stop_this_cpu(void *dummy)
void smp_send_stop(void)
struct thread_info *current_set[NR_CPUS];
static void __devinit smp_store_cpu_info(int id)
void __init smp_prepare_cpus(unsigned int max_cpus)
void __devinit smp_prepare_boot_cpu(void)
static DEFINE_PER_CPU(int, cpu_state) = ;
int generic_cpu_disable(void)
void generic_cpu_die(unsigned int cpu)
void generic_mach_cpu_die(void)
void generic_set_cpu_dead(unsigned int cpu)
struct create_idle ;
static void __cpuinit do_fork_idle(struct work_struct *work)
static int __cpuinit create_idle(unsigned int cpu)
int __cpuinit __cpu_up(unsigned int cpu)
int cpu_to_core_id(int cpu)
int cpu_core_index_of_thread(int cpu)
EXPORT_SYMBOL_GPL(cpu_core_index_of_thread);
int cpu_first_thread_of_core(int core)
EXPORT_SYMBOL_GPL(cpu_first_thread_of_core);
static struct device_node *cpu_to_l2cache(int cpu)
void __devinit start_secondary(void *unused)
int setup_profiling_timer(unsigned int multiplier)
void __init smp_cpus_done(unsigned int max_cpus)
int arch_sd_sibling_asym_packing(void)
int __cpu_disable(void)
void __cpu_die(unsigned int cpu)
static DEFINE_MUTEX(powerpc_cpu_hotplug_driver_mutex);
void cpu_hotplug_driver_lock()
void cpu_hotplug_driver_unlock()
void cpu_die(void)

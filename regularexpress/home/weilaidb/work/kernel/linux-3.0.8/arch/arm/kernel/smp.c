struct secondary_data secondary_data;
enum ipi_msg_type ;
int __cpuinit __cpu_up(unsigned int cpu)
static void percpu_timer_stop(void);
int __cpu_disable(void)
static DECLARE_COMPLETION(cpu_died);
void __cpu_die(unsigned int cpu)
void __ref cpu_die(void)
static void __cpuinit smp_store_cpu_info(unsigned int cpuid)
asmlinkage void __cpuinit secondary_start_kernel(void)
void __init smp_cpus_done(unsigned int max_cpus)
void __init smp_prepare_boot_cpu(void)
void __init smp_prepare_cpus(unsigned int max_cpus)
static void (*smp_cross_call)(const struct cpumask *, unsigned int);
void __init set_smp_cross_call(void (*fn)(const struct cpumask *, unsigned int))
void arch_send_call_function_ipi_mask(const struct cpumask *mask)
void arch_send_call_function_single_ipi(int cpu)
static const char *ipi_types[NR_IPI] = ;
void show_ipi_list(struct seq_file *p, int prec)
u64 smp_irq_stat_cpu(unsigned int cpu)
static DEFINE_PER_CPU(struct clock_event_device, percpu_clockevent);
static void ipi_timer(void)
asmlinkage void __exception_irq_entry do_local_timer(struct pt_regs *regs)
void show_local_irqs(struct seq_file *p, int prec)
static void smp_timer_broadcast(const struct cpumask *mask)
#define smp_timer_broadcast	NULL
static void broadcast_timer_set_mode(enum clock_event_mode mode,
struct clock_event_device *evt)
static void __cpuinit broadcast_timer_setup(struct clock_event_device *evt)
void __cpuinit percpu_timer_setup(void)
static void percpu_timer_stop(void)
static DEFINE_SPINLOCK(stop_lock);
static void ipi_cpu_stop(unsigned int cpu)
asmlinkage void __exception_irq_entry do_IPI(int ipinr, struct pt_regs *regs)
void smp_send_reschedule(int cpu)
void smp_send_stop(void)
int setup_profiling_timer(unsigned int multiplier)

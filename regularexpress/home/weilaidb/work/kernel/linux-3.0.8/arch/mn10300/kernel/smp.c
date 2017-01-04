static unsigned long sleep_mode[NR_CPUS];
static void run_sleep_cpu(unsigned int cpu);
static void run_wakeup_cpu(unsigned int cpu);
#undef DEBUG_SMP
#define Dprintk(fmt, ...) printk(KERN_DEBUG fmt, ##__VA_ARGS__)
#define Dprintk(fmt, ...) no_printk(KERN_DEBUG fmt, ##__VA_ARGS__)
#define	CALL_FUNCTION_NMI_IPI_TIMEOUT	0
struct nmi_call_data_struct  __attribute__ ((__aligned__(SMP_CACHE_BYTES)));
static DEFINE_SPINLOCK(smp_nmi_call_lock);
static struct nmi_call_data_struct *nmi_call_data;
static cpumask_t cpu_callin_map;
static cpumask_t cpu_callout_map;
cpumask_t cpu_boot_map;
unsigned long start_stack[NR_CPUS - 1];
struct mn10300_cpuinfo cpu_data[NR_CPUS] __cacheline_aligned;
static int cpucount;
static cpumask_t smp_commenced_mask;
cpumask_t cpu_initialized __initdata = CPU_MASK_NONE;
static int do_boot_cpu(int);
static void smp_show_cpu_info(int cpu_id);
static void smp_callin(void);
static void smp_online(void);
static void smp_store_cpu_info(int);
static void smp_cpu_init(void);
static void smp_tune_scheduling(void);
static void send_IPI_mask(const cpumask_t *cpumask, int irq);
static void init_ipi(void);
static void mn10300_ipi_disable(unsigned int irq);
static void mn10300_ipi_enable(unsigned int irq);
static void mn10300_ipi_chip_disable(struct irq_data *d);
static void mn10300_ipi_chip_enable(struct irq_data *d);
static void mn10300_ipi_ack(struct irq_data *d);
static void mn10300_ipi_nop(struct irq_data *d);
static struct irq_chip mn10300_ipi_type = ;
static irqreturn_t smp_reschedule_interrupt(int irq, void *dev_id);
static irqreturn_t smp_call_function_interrupt(int irq, void *dev_id);
static struct irqaction reschedule_ipi = ;
static struct irqaction call_function_ipi = ;
#if !defined(CONFIG_GENERIC_CLOCKEVENTS) || defined(CONFIG_GENERIC_CLOCKEVENTS_BROADCAST)
static irqreturn_t smp_ipi_timer_interrupt(int irq, void *dev_id);
static struct irqaction local_timer_ipi = ;
static void init_ipi(void)
static void mn10300_ipi_shutdown(unsigned int irq)
static void mn10300_ipi_enable(unsigned int irq)
static void mn10300_ipi_chip_enable(struct irq_data *d)
static void mn10300_ipi_disable(unsigned int irq)
static void mn10300_ipi_chip_disable(struct irq_data *d)
static void mn10300_ipi_ack(struct irq_data *d)
static void mn10300_ipi_nop(struct irq_data *d)
static void send_IPI_mask(const cpumask_t *cpumask, int irq)
void send_IPI_self(int irq)
void send_IPI_allbutself(int irq)
void arch_send_call_function_ipi_mask(const struct cpumask *mask)
void arch_send_call_function_single_ipi(int cpu)
void smp_send_reschedule(int cpu)
int smp_nmi_call_function(smp_call_func_t func, void *info, int wait)
void smp_jump_to_debugger(void)
void stop_this_cpu(void *unused)
void smp_send_stop(void)
static irqreturn_t smp_reschedule_interrupt(int irq, void *dev_id)
static irqreturn_t smp_call_function_interrupt(int irq, void *dev_id)
void smp_nmi_call_function_interrupt(void)
#if !defined(CONFIG_GENERIC_CLOCKEVENTS) || \
defined(CONFIG_GENERIC_CLOCKEVENTS_BROADCAST)
static irqreturn_t smp_ipi_timer_interrupt(int irq, void *dev_id)
void __init smp_init_cpus(void)
static void __init smp_cpu_init(void)
void smp_prepare_cpu_init(void)
int __init start_secondary(void *unused)
void __init smp_prepare_cpus(unsigned int max_cpus)
static void __init smp_store_cpu_info(int cpu)
static void __init smp_tune_scheduling(void)
static int __init do_boot_cpu(int phy_id)
static void __init smp_show_cpu_info(int cpu)
static void __init smp_callin(void)
static void __init smp_online(void)
void __init smp_cpus_done(unsigned int max_cpus)
void __devinit smp_prepare_boot_cpu(void)
void initialize_secondary(void)
int __devinit __cpu_up(unsigned int cpu)
int setup_profiling_timer(unsigned int multiplier)
static DEFINE_PER_CPU(struct cpu, cpu_devices);
static int __init topology_init(void)
subsys_initcall(topology_init);
int __cpu_disable(void)
void __cpu_die(unsigned int cpu)
static inline void hotplug_cpu_disable_cache(void)
static inline void hotplug_cpu_enable_cache(void)
static inline void hotplug_cpu_invalidate_cache(void)
#define hotplug_cpu_disable_cache()	do  while (0)
#define hotplug_cpu_enable_cache()	do  while (0)
#define hotplug_cpu_invalidate_cache()	do  while (0)
static int hotplug_cpu_nmi_call_function(cpumask_t cpumask,
smp_call_func_t func, void *info,
int wait)
static void restart_wakeup_cpu(void)
static void prepare_sleep_cpu(void *unused)
static void sleep_cpu(void *unused)
static void run_sleep_cpu(unsigned int cpu)
static void wakeup_cpu(void)
static void run_wakeup_cpu(unsigned int cpu)

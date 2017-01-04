HV_Topology smp_topology __write_once;
EXPORT_SYMBOL(smp_topology);
#if CHIP_HAS_IPI()
static unsigned long __iomem *ipi_mappings[NR_CPUS];
static int stopping_cpus;
static void __send_IPI_many(HV_Recipient *recip, int nrecip, int tag)
void send_IPI_single(int cpu, int tag)
void send_IPI_many(const struct cpumask *mask, int tag)
void send_IPI_allbutself(int tag)
void on_each_cpu_mask(const struct cpumask *mask, void (*func)(void *),
void *info, bool wait)
static void smp_start_cpu_interrupt(void)
static void smp_stop_cpu_interrupt(void)
void smp_send_stop(void)
void evaluate_message(int tag)
struct ipi_flush ;
static void ipi_flush_icache_range(void *info)
void flush_icache_range(unsigned long start, unsigned long end)
static irqreturn_t handle_reschedule_ipi(int irq, void *token)
static struct irqaction resched_action = ;
void __init ipi_init(void)
#if CHIP_HAS_IPI()
void smp_send_reschedule(int cpu)
void smp_send_reschedule(int cpu)

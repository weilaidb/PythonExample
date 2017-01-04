#undef DEBUG_SMP
static int smp_debug_lvl = 0;
#define smp_debug(lvl, printargs...)		\
if (lvl >= smp_debug_lvl)	\
printk(printargs);
#define smp_debug(lvl, ...)	do  while(0)
volatile struct task_struct *smp_init_current_idle_task;
static volatile int cpu_now_booting __cpuinitdata;
static int parisc_max_cpus __cpuinitdata = 1;
static DEFINE_PER_CPU(spinlock_t, ipi_lock);
enum ipi_message_type ;
#undef PER_CPU_IRQ_REGION
static void
ipi_init(int cpuid)
static void
halt_processor(void)
irqreturn_t __irq_entry
ipi_interrupt(int irq, void *dev_id)
static inline void
ipi_send(int cpu, enum ipi_message_type op)
static void
send_IPI_mask(const struct cpumask *mask, enum ipi_message_type op)
static inline void
send_IPI_single(int dest_cpu, enum ipi_message_type op)
static inline void
send_IPI_allbutself(enum ipi_message_type op)
inline void
smp_send_stop(void)
static inline void
smp_send_start(void)
void
smp_send_reschedule(int cpu)
void
smp_send_all_nop(void)
void arch_send_call_function_ipi_mask(const struct cpumask *mask)
void arch_send_call_function_single_ipi(int cpu)
void
smp_flush_tlb_all(void)
static void __init
smp_cpu_init(int cpunum)
void __init smp_callin(void)
int __cpuinit smp_boot_one_cpu(int cpuid)
void __init smp_prepare_boot_cpu(void)
void __init smp_prepare_cpus(unsigned int max_cpus)
void smp_cpus_done(unsigned int cpu_max)
int __cpuinit __cpu_up(unsigned int cpu)
int __init
setup_profiling_timer(unsigned int multiplier)

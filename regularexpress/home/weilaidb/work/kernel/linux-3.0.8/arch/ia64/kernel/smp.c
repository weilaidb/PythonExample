static struct local_tlb_flush_counts  __attribute__((__aligned__(32))) local_tlb_flush_counts[NR_CPUS];
static DEFINE_PER_CPU_SHARED_ALIGNED(unsigned short [NR_CPUS],
shadow_flush_counts);
#define IPI_CALL_FUNC		0
#define IPI_CPU_STOP		1
#define IPI_CALL_FUNC_SINGLE	2
#define IPI_KDUMP_CPU_STOP	3
static DEFINE_PER_CPU_SHARED_ALIGNED(unsigned long, ipi_operation);
extern void cpu_halt (void);
static void
stop_this_cpu(void)
void
cpu_die(void)
irqreturn_t
handle_IPI (int irq, void *dev_id)
static inline void
send_IPI_single (int dest_cpu, int op)
static inline void
send_IPI_allbutself (int op)
static inline void
send_IPI_mask(const struct cpumask *mask, int op)
static inline void
send_IPI_all (int op)
static inline void
send_IPI_self (int op)
void
kdump_smp_send_stop(void)
void
kdump_smp_send_init(void)
void
smp_send_reschedule (int cpu)
EXPORT_SYMBOL_GPL(smp_send_reschedule);
static void
smp_send_local_flush_tlb (int cpu)
void
smp_local_flush_tlb(void)
#define FLUSH_DELAY	5
void
smp_flush_tlb_cpumask(cpumask_t xcpumask)
void
smp_flush_tlb_all (void)
void
smp_flush_tlb_mm (struct mm_struct *mm)
void arch_send_call_function_single_ipi(int cpu)
void arch_send_call_function_ipi_mask(const struct cpumask *mask)
void
smp_send_stop (void)
int
setup_profiling_timer (unsigned int multiplier)

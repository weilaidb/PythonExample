struct corelock_slot corelock __attribute__ ((__section__(".l2.bss")));
unsigned long blackfin_iflush_l1_entry[NR_CPUS];
void __cpuinitdata *init_retx_coreb, *init_saved_retx_coreb,
*init_saved_seqstat_coreb, *init_saved_icplb_fault_addr_coreb,
*init_saved_dcplb_fault_addr_coreb;
#define BFIN_IPI_RESCHEDULE   0
#define BFIN_IPI_CALL_FUNC    1
#define BFIN_IPI_CPU_STOP     2
struct blackfin_flush_data ;
void *secondary_stack;
struct smp_call_struct ;
static struct blackfin_flush_data smp_flush_data;
static DEFINE_SPINLOCK(stop_lock);
struct ipi_message ;
#define BFIN_IPI_MSGQ_LEN 5
struct ipi_message_queue ;
static DEFINE_PER_CPU(struct ipi_message_queue, ipi_msg_queue);
static void ipi_cpu_stop(unsigned int cpu)
static void ipi_flush_icache(void *info)
static void ipi_call_function(unsigned int cpu, struct ipi_message *msg)
static irqreturn_t ipi_handler_int0(int irq, void *dev_instance)
static irqreturn_t ipi_handler_int1(int irq, void *dev_instance)
static void ipi_queue_init(void)
static inline void smp_send_message(cpumask_t callmap, unsigned long type,
void (*func) (void *info), void *info, int wait)
int smp_call_function(void (*func)(void *info), void *info, int wait)
EXPORT_SYMBOL_GPL(smp_call_function);
int smp_call_function_single(int cpuid, void (*func) (void *info), void *info,
int wait)
EXPORT_SYMBOL_GPL(smp_call_function_single);
void smp_send_reschedule(int cpu)
void smp_send_stop(void)
int __cpuinit __cpu_up(unsigned int cpu)
static void __cpuinit setup_secondary(unsigned int cpu)
void __cpuinit secondary_start_kernel(void)
void __init smp_prepare_boot_cpu(void)
void __init smp_prepare_cpus(unsigned int max_cpus)
void __init smp_cpus_done(unsigned int max_cpus)
void smp_icache_flush_range_others(unsigned long start, unsigned long end)
EXPORT_SYMBOL_GPL(smp_icache_flush_range_others);
unsigned long icache_invld_count[NR_CPUS];
void resync_core_icache(void)
EXPORT_SYMBOL(resync_core_icache);
unsigned long dcache_invld_count[NR_CPUS];
unsigned long barrier_mask __attribute__ ((__section__(".l2.bss")));
void resync_core_dcache(void)
EXPORT_SYMBOL(resync_core_dcache);
int __cpuexit __cpu_disable(void)
static DECLARE_COMPLETION(cpu_killed);
int __cpuexit __cpu_die(unsigned int cpu)
void cpu_die(void)

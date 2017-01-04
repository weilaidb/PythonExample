static struct  call_function __cacheline_aligned_in_smp =
;
enum ;
struct call_function_data ;
static DEFINE_PER_CPU_SHARED_ALIGNED(struct call_function_data, cfd_data);
struct call_single_queue ;
static DEFINE_PER_CPU_SHARED_ALIGNED(struct call_single_queue, call_single_queue);
static int
hotplug_cfd(struct notifier_block *nfb, unsigned long action, void *hcpu)
static struct notifier_block __cpuinitdata hotplug_cfd_notifier = ;
void __init call_function_init(void)
static void csd_lock_wait(struct call_single_data *data)
static void csd_lock(struct call_single_data *data)
static void csd_unlock(struct call_single_data *data)
static
void generic_exec_single(int cpu, struct call_single_data *data, int wait)
void generic_smp_call_function_interrupt(void)
void generic_smp_call_function_single_interrupt(void)
static DEFINE_PER_CPU_SHARED_ALIGNED(struct call_single_data, csd_data);
int smp_call_function_single(int cpu, smp_call_func_t func, void *info,
int wait)
EXPORT_SYMBOL(smp_call_function_single);
int smp_call_function_any(const struct cpumask *mask,
smp_call_func_t func, void *info, int wait)
EXPORT_SYMBOL_GPL(smp_call_function_any);
void __smp_call_function_single(int cpu, struct call_single_data *data,
int wait)
void smp_call_function_many(const struct cpumask *mask,
smp_call_func_t func, void *info, bool wait)
EXPORT_SYMBOL(smp_call_function_many);
int smp_call_function(smp_call_func_t func, void *info, int wait)
EXPORT_SYMBOL(smp_call_function);
void ipi_call_lock(void)
void ipi_call_unlock(void)
void ipi_call_lock_irq(void)
void ipi_call_unlock_irq(void)
unsigned int setup_max_cpus = NR_CPUS;
EXPORT_SYMBOL(setup_max_cpus);
void __weak arch_disable_smp_support(void)
static int __init nosmp(char *str)
early_param("nosmp", nosmp);
static int __init nrcpus(char *str)
early_param("nr_cpus", nrcpus);
static int __init maxcpus(char *str)
early_param("maxcpus", maxcpus);
int nr_cpu_ids __read_mostly = NR_CPUS;
EXPORT_SYMBOL(nr_cpu_ids);
void __init setup_nr_cpu_ids(void)
void __init smp_init(void)
int on_each_cpu(void (*func) (void *info), void *info, int wait)
EXPORT_SYMBOL(on_each_cpu);

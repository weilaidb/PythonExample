struct cpuinfo_um cpu_data[NR_CPUS];
int num_reschedules_sent = 0;
struct task_struct *idle_threads[NR_CPUS];
void smp_send_reschedule(int cpu)
void smp_send_stop(void)
static cpumask_t smp_commenced_mask = CPU_MASK_NONE;
static cpumask_t cpu_callin_map = CPU_MASK_NONE;
static int idle_proc(void *cpup)
static struct task_struct *idle_thread(int cpu)
void smp_prepare_cpus(unsigned int maxcpus)
void smp_prepare_boot_cpu(void)
int __cpu_up(unsigned int cpu)
int setup_profiling_timer(unsigned int multiplier)
void smp_call_function_slave(int cpu);
void IPI_handler(int cpu)
int hard_smp_processor_id(void)
static DEFINE_SPINLOCK(call_lock);
static atomic_t scf_started;
static atomic_t scf_finished;
static void (*func)(void *info);
static void *info;
void smp_call_function_slave(int cpu)
int smp_call_function(void (*_func)(void *info), void *_info, int wait)

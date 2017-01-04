struct cpu_stop_done ;
struct cpu_stopper ;
static DEFINE_PER_CPU(struct cpu_stopper, cpu_stopper);
static void cpu_stop_init_done(struct cpu_stop_done *done, unsigned int nr_todo)
static void cpu_stop_signal_done(struct cpu_stop_done *done, bool executed)
static void cpu_stop_queue_work(struct cpu_stopper *stopper,
struct cpu_stop_work *work)
int stop_one_cpu(unsigned int cpu, cpu_stop_fn_t fn, void *arg)
void stop_one_cpu_nowait(unsigned int cpu, cpu_stop_fn_t fn, void *arg,
struct cpu_stop_work *work_buf)
DEFINE_MUTEX(stop_cpus_mutex);
static DEFINE_PER_CPU(struct cpu_stop_work, stop_cpus_work);
int __stop_cpus(const struct cpumask *cpumask, cpu_stop_fn_t fn, void *arg)
int stop_cpus(const struct cpumask *cpumask, cpu_stop_fn_t fn, void *arg)
int try_stop_cpus(const struct cpumask *cpumask, cpu_stop_fn_t fn, void *arg)
static int cpu_stopper_thread(void *data)
extern void sched_set_stop_task(int cpu, struct task_struct *stop);
static int __cpuinit cpu_stop_cpu_callback(struct notifier_block *nfb,
unsigned long action, void *hcpu)
static struct notifier_block __cpuinitdata cpu_stop_cpu_notifier = ;
static int __init cpu_stop_init(void)
early_initcall(cpu_stop_init);
enum stopmachine_state ;
struct stop_machine_data ;
static void set_state(struct stop_machine_data *smdata,
enum stopmachine_state newstate)
static void ack_state(struct stop_machine_data *smdata)
static int stop_machine_cpu_stop(void *data)
int __stop_machine(int (*fn)(void *), void *data, const struct cpumask *cpus)
int stop_machine(int (*fn)(void *), void *data, const struct cpumask *cpus)
EXPORT_SYMBOL_GPL(stop_machine);

#define _LINUX_STOP_MACHINE
typedef int (*cpu_stop_fn_t)(void *arg);
struct cpu_stop_work ;
extern struct mutex stop_cpus_mutex;
int stop_one_cpu(unsigned int cpu, cpu_stop_fn_t fn, void *arg);
void stop_one_cpu_nowait(unsigned int cpu, cpu_stop_fn_t fn, void *arg,
struct cpu_stop_work *work_buf);
int stop_cpus(const struct cpumask *cpumask, cpu_stop_fn_t fn, void *arg);
int try_stop_cpus(const struct cpumask *cpumask, cpu_stop_fn_t fn, void *arg);
struct cpu_stop_work ;
static inline int stop_one_cpu(unsigned int cpu, cpu_stop_fn_t fn, void *arg)
static void stop_one_cpu_nowait_workfn(struct work_struct *work)
static inline void stop_one_cpu_nowait(unsigned int cpu,
cpu_stop_fn_t fn, void *arg,
struct cpu_stop_work *work_buf)
static inline int stop_cpus(const struct cpumask *cpumask,
cpu_stop_fn_t fn, void *arg)
static inline int try_stop_cpus(const struct cpumask *cpumask,
cpu_stop_fn_t fn, void *arg)
#if defined(CONFIG_STOP_MACHINE) && defined(CONFIG_SMP)
int stop_machine(int (*fn)(void *), void *data, const struct cpumask *cpus);
int __stop_machine(int (*fn)(void *), void *data, const struct cpumask *cpus);
static inline int __stop_machine(int (*fn)(void *), void *data,
const struct cpumask *cpus)
static inline int stop_machine(int (*fn)(void *), void *data,
const struct cpumask *cpus)

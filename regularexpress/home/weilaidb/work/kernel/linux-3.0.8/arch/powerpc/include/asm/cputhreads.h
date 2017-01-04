#define _ASM_POWERPC_CPUTHREADS_H
extern int threads_per_core;
extern int threads_shift;
extern cpumask_t threads_core_mask;
#define threads_per_core	1
#define threads_shift		0
#define threads_core_mask	(CPU_MASK_CPU0)
static inline cpumask_t cpu_thread_mask_to_cores(const struct cpumask *threads)
static inline int cpu_nr_cores(void)
static inline cpumask_t cpu_online_cores_map(void)
int cpu_core_index_of_thread(int cpu);
int cpu_first_thread_of_core(int core);
static inline int cpu_core_index_of_thread(int cpu)
static inline int cpu_first_thread_of_core(int core)
static inline int cpu_thread_in_core(int cpu)
static inline int cpu_first_thread_sibling(int cpu)
static inline int cpu_last_thread_sibling(int cpu)

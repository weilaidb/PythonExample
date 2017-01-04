#define __UM_SMP_H
#define raw_smp_processor_id() (current_thread->cpu)
#define cpu_logical_map(n) (n)
#define cpu_number_map(n) (n)
extern int hard_smp_processor_id(void);
#define NO_PROC_ID -1
extern int ncpus;
static inline void smp_cpus_done(unsigned int maxcpus)
extern struct task_struct *idle_threads[NR_CPUS];
#define hard_smp_processor_id()		0

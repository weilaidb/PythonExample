#define __LINUX_SMP_H
extern void cpu_idle(void);
typedef void (*smp_call_func_t)(void *info);
struct call_single_data ;
extern unsigned int total_cpus;
int smp_call_function_single(int cpuid, smp_call_func_t func, void *info,
int wait);
extern void smp_send_stop(void);
extern void smp_send_reschedule(int cpu);
extern void smp_prepare_cpus(unsigned int max_cpus);
extern int __cpu_up(unsigned int cpunum);
extern void smp_cpus_done(unsigned int max_cpus);
int smp_call_function(smp_call_func_t func, void *info, int wait);
void smp_call_function_many(const struct cpumask *mask,
smp_call_func_t func, void *info, bool wait);
void __smp_call_function_single(int cpuid, struct call_single_data *data,
int wait);
int smp_call_function_any(const struct cpumask *mask,
smp_call_func_t func, void *info, int wait);
void __init call_function_init(void);
void generic_smp_call_function_single_interrupt(void);
void generic_smp_call_function_interrupt(void);
void ipi_call_lock(void);
void ipi_call_unlock(void);
void ipi_call_lock_irq(void);
void ipi_call_unlock_irq(void);
static inline void call_function_init(void)
int on_each_cpu(smp_call_func_t func, void *info, int wait);
void smp_prepare_boot_cpu(void);
extern unsigned int setup_max_cpus;
extern void __init setup_nr_cpu_ids(void);
extern void __init smp_init(void);
static inline void smp_send_stop(void)
#define raw_smp_processor_id()			0
static inline int up_smp_call_function(smp_call_func_t func, void *info)
#define smp_call_function(func, info, wait) \
(up_smp_call_function(func, info))
#define on_each_cpu(func,info,wait)		\
()
static inline void smp_send_reschedule(int cpu)
#define num_booting_cpus()			1
#define smp_prepare_boot_cpu()			do  while (0)
#define smp_call_function_many(mask, func, info, wait) \
(up_smp_call_function(func, info))
static inline void call_function_init(void)
static inline int
smp_call_function_any(const struct cpumask *mask, smp_call_func_t func,
void *info, int wait)
extern unsigned int debug_smp_processor_id(void);
# define smp_processor_id() debug_smp_processor_id()
# define smp_processor_id() raw_smp_processor_id()
#define get_cpu()		()
#define put_cpu()		preempt_enable()
extern void arch_disable_smp_support(void);
void smp_setup_processor_id(void);

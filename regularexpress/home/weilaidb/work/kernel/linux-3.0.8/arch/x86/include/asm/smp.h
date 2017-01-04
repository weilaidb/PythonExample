#define _ASM_X86_SMP_H
# include <asm/mpspec.h>
# include <asm/apic.h>
# ifdef CONFIG_X86_IO_APIC
#  include <asm/io_apic.h>
# endif
extern int smp_num_siblings;
extern unsigned int num_processors;
static inline bool cpu_has_ht_siblings(void)
DECLARE_PER_CPU(cpumask_var_t, cpu_sibling_map);
DECLARE_PER_CPU(cpumask_var_t, cpu_core_map);
DECLARE_PER_CPU(cpumask_var_t, cpu_llc_shared_map);
DECLARE_PER_CPU(u16, cpu_llc_id);
DECLARE_PER_CPU(int, cpu_number);
static inline struct cpumask *cpu_sibling_mask(int cpu)
static inline struct cpumask *cpu_core_mask(int cpu)
static inline struct cpumask *cpu_llc_shared_mask(int cpu)
DECLARE_EARLY_PER_CPU(u16, x86_cpu_to_apicid);
DECLARE_EARLY_PER_CPU(u16, x86_bios_cpu_apicid);
#if defined(CONFIG_X86_LOCAL_APIC) && defined(CONFIG_X86_32)
DECLARE_EARLY_PER_CPU(int, x86_cpu_to_logical_apicid);
extern unsigned long stack_start;
struct smp_ops ;
extern void set_cpu_sibling_map(int cpu);
#define startup_ipi_hook(phys_apicid, start_eip, start_esp) do  while (0)
extern struct smp_ops smp_ops;
static inline void smp_send_stop(void)
static inline void stop_other_cpus(void)
static inline void smp_prepare_boot_cpu(void)
static inline void smp_prepare_cpus(unsigned int max_cpus)
static inline void smp_cpus_done(unsigned int max_cpus)
static inline int __cpu_up(unsigned int cpu)
static inline int __cpu_disable(void)
static inline void __cpu_die(unsigned int cpu)
static inline void play_dead(void)
static inline void smp_send_reschedule(int cpu)
static inline void arch_send_call_function_single_ipi(int cpu)
static inline void arch_send_call_function_ipi_mask(const struct cpumask *mask)
void cpu_disable_common(void);
void native_smp_prepare_boot_cpu(void);
void native_smp_prepare_cpus(unsigned int max_cpus);
void native_smp_cpus_done(unsigned int max_cpus);
int native_cpu_up(unsigned int cpunum);
int native_cpu_disable(void);
void native_cpu_die(unsigned int cpu);
void native_play_dead(void);
void play_dead_common(void);
void wbinvd_on_cpu(int cpu);
int wbinvd_on_all_cpus(void);
void native_send_call_func_ipi(const struct cpumask *mask);
void native_send_call_func_single_ipi(int cpu);
void smp_store_cpu_info(int id);
#define cpu_physical_id(cpu)	per_cpu(x86_cpu_to_apicid, cpu)
static inline int num_booting_cpus(void)
#define wbinvd_on_cpu(cpu)     wbinvd()
static inline int wbinvd_on_all_cpus(void)
extern unsigned disabled_cpus __cpuinitdata;
#define raw_smp_processor_id() (percpu_read(cpu_number))
extern int safe_smp_processor_id(void);
#elif defined(CONFIG_X86_64_SMP)
#define raw_smp_processor_id() (percpu_read(cpu_number))
#define stack_smp_processor_id()					\
()
#define safe_smp_processor_id()		smp_processor_id()
static inline int logical_smp_processor_id(void)
extern int hard_smp_processor_id(void);
# ifndef CONFIG_SMP
#  define hard_smp_processor_id()	0
# endif

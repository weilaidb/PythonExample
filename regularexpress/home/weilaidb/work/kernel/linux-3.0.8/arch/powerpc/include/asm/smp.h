#define _ASM_POWERPC_SMP_H
extern int boot_cpuid;
extern int boot_cpu_count;
extern void cpu_die(void);
struct smp_ops_t ;
extern void smp_send_debugger_break(void);
extern void start_secondary_resume(void);
extern void __devinit smp_generic_give_timebase(void);
extern void __devinit smp_generic_take_timebase(void);
DECLARE_PER_CPU(unsigned int, cpu_pvr);
extern void migrate_irqs(void);
int generic_cpu_disable(void);
void generic_cpu_die(unsigned int cpu);
void generic_mach_cpu_die(void);
void generic_set_cpu_dead(unsigned int cpu);
#define raw_smp_processor_id()	(local_paca->paca_index)
#define hard_smp_processor_id() (get_paca()->hw_cpu_id)
extern int smp_hw_index[];
#define raw_smp_processor_id()	(current_thread_info()->cpu)
#define hard_smp_processor_id() 	(smp_hw_index[smp_processor_id()])
static inline int get_hard_smp_processor_id(int cpu)
static inline void set_hard_smp_processor_id(int cpu, int phys)
DECLARE_PER_CPU(cpumask_var_t, cpu_sibling_map);
DECLARE_PER_CPU(cpumask_var_t, cpu_core_map);
static inline struct cpumask *cpu_sibling_mask(int cpu)
static inline struct cpumask *cpu_core_mask(int cpu)
extern int cpu_to_core_id(int cpu);
#define PPC_MSG_CALL_FUNCTION   0
#define PPC_MSG_RESCHEDULE      1
#define PPC_MSG_CALL_FUNC_SINGLE	2
#define PPC_MSG_DEBUGGER_BREAK  3
extern int smp_request_message_ipi(int virq, int message);
extern const char *smp_ipi_name[];
extern void smp_muxed_ipi_set_data(int cpu, unsigned long data);
extern void smp_muxed_ipi_message_pass(int cpu, int msg);
extern void smp_muxed_ipi_resend(void);
extern irqreturn_t smp_ipi_demux(void);
void smp_init_iSeries(void);
void smp_init_pSeries(void);
void smp_init_cell(void);
void smp_init_celleb(void);
void smp_setup_cpu_maps(void);
extern int __cpu_disable(void);
extern void __cpu_die(unsigned int cpu);
#define hard_smp_processor_id()		get_hard_smp_processor_id(0)
#define smp_setup_cpu_maps()
static inline int get_hard_smp_processor_id(int cpu)
static inline void set_hard_smp_processor_id(int cpu, int phys)
extern void smp_release_cpus(void);
extern int boot_cpuid_phys;
static inline int get_hard_smp_processor_id(int cpu)
static inline void set_hard_smp_processor_id(int cpu, int phys)
extern int smt_enabled_at_boot;
extern int smp_mpic_probe(void);
extern void smp_mpic_setup_cpu(int cpu);
extern int smp_generic_kick_cpu(int nr);
extern void smp_generic_give_timebase(void);
extern void smp_generic_take_timebase(void);
extern struct smp_ops_t *smp_ops;
extern void arch_send_call_function_single_ipi(int cpu);
extern void arch_send_call_function_ipi_mask(const struct cpumask *mask);
extern void generic_secondary_smp_init(void);
extern void generic_secondary_thread_init(void);
extern unsigned long __secondary_hold_spinloop;
extern unsigned long __secondary_hold_acknowledge;
extern char __secondary_hold;

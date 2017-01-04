#define __ASM_SMP_H
extern void machine_restart_smp(char *);
extern void machine_halt_smp(void);
extern void machine_power_off_smp(void);
#define raw_smp_processor_id()	(S390_lowcore.cpu_nr)
extern int __cpu_disable (void);
extern void __cpu_die (unsigned int cpu);
extern int __cpu_up (unsigned int cpu);
extern struct mutex smp_cpu_state_mutex;
extern int smp_cpu_polarization[];
extern void arch_send_call_function_single_ipi(int cpu);
extern void arch_send_call_function_ipi_mask(const struct cpumask *mask);
extern struct save_area *zfcpdump_save_areas[NR_CPUS + 1];
extern void smp_switch_to_ipl_cpu(void (*func)(void *), void *);
extern void smp_switch_to_cpu(void (*)(void *), void *, unsigned long sp,
int from, int to);
extern void smp_restart_cpu(void);
static inline int smp_vcpu_scheduled(int cpu)
static inline void smp_switch_to_ipl_cpu(void (*func)(void *), void *data)
#define smp_vcpu_scheduled	(1)
extern int smp_rescan_cpus(void);
extern void __noreturn cpu_die(void);
static inline int smp_rescan_cpus(void)
static inline void cpu_die(void)

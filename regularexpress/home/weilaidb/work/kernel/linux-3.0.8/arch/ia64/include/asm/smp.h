#define _ASM_IA64_SMP_H
static inline unsigned int
ia64_get_lid (void)
#define hard_smp_processor_id()		ia64_get_lid()
#define XTP_OFFSET		0x1e0008
#define SMP_IRQ_REDIRECTION	(1 << 0)
#define SMP_IPI_REDIRECTION	(1 << 1)
#define raw_smp_processor_id() (current_thread_info()->cpu)
extern struct smp_boot_data  smp_boot_data __initdata;
extern char no_int_routing __devinitdata;
extern cpumask_t cpu_core_map[NR_CPUS];
DECLARE_PER_CPU_SHARED_ALIGNED(cpumask_t, cpu_sibling_map);
extern int smp_num_siblings;
extern void __iomem *ipi_base_addr;
extern unsigned char smp_int_redirect;
extern volatile int ia64_cpu_to_sapicid[];
#define cpu_physical_id(i)	ia64_cpu_to_sapicid[i]
extern unsigned long ap_wakeup_vector;
static inline int
cpu_logical_id (int cpuid)
static inline void
min_xtp (void)
static inline void
normal_xtp (void)
static inline void
max_xtp (void)
extern int __cpu_disable (void);
extern void __cpu_die (unsigned int cpu);
extern void cpu_die (void) __attribute__ ((noreturn));
extern void __init smp_build_cpu_map(void);
extern void __init init_smp_config (void);
extern void smp_do_timer (struct pt_regs *regs);
extern irqreturn_t handle_IPI(int irq, void *dev_id);
extern void smp_send_reschedule (int cpu);
extern void identify_siblings (struct cpuinfo_ia64 *);
extern int is_multithreading_enabled(void);
extern void arch_send_call_function_single_ipi(int cpu);
extern void arch_send_call_function_ipi_mask(const struct cpumask *mask);
#define cpu_logical_id(i)		0
#define cpu_physical_id(i)		ia64_get_lid()

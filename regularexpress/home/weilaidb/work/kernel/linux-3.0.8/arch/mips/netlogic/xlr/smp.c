void core_send_ipi(int logical_cpu, unsigned int action)
void nlm_send_ipi_single(int cpu, unsigned int action)
void nlm_send_ipi_mask(const struct cpumask *mask, unsigned int action)
void nlm_smp_function_ipi_handler(unsigned int irq, struct irq_desc *desc)
void nlm_smp_resched_ipi_handler(unsigned int irq, struct irq_desc *desc)
void nlm_common_ipi_handler(int irq, struct pt_regs *regs)
void nlm_early_init_secondary(void)
static void __cpuinit nlm_init_secondary(void)
void nlm_smp_finish(void)
void nlm_cpus_done(void)
int nlm_cpu_unblock[NR_CPUS];
int nlm_cpu_ready[NR_CPUS];
unsigned long nlm_next_gp;
unsigned long nlm_next_sp;
cpumask_t phys_cpu_present_map;
void nlm_boot_secondary(int logical_cpu, struct task_struct *idle)
void __init nlm_smp_setup(void)
void nlm_prepare_cpus(unsigned int max_cpus)
struct plat_smp_ops nlm_smp_ops = ;
unsigned long secondary_entry_point;
int nlm_wakeup_secondary_cpus(u32 wakeup_mask)

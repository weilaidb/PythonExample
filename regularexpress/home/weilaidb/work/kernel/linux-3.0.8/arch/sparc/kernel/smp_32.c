volatile unsigned long cpu_callin_map[NR_CPUS] __cpuinitdata = ;
cpumask_t smp_commenced_mask = CPU_MASK_NONE;
void __cpuinit smp_store_cpu_info(int id)
void __init smp_cpus_done(unsigned int max_cpus)
void cpu_panic(void)
struct linux_prom_registers smp_penguin_ctable __cpuinitdata = ;
void smp_send_reschedule(int cpu)
void smp_send_stop(void)
void arch_send_call_function_single_ipi(int cpu)
void arch_send_call_function_ipi_mask(const struct cpumask *mask)
void smp_resched_interrupt(void)
void smp_call_function_single_interrupt(void)
void smp_call_function_interrupt(void)
void smp_flush_cache_all(void)
void smp_flush_tlb_all(void)
void smp_flush_cache_mm(struct mm_struct *mm)
void smp_flush_tlb_mm(struct mm_struct *mm)
void smp_flush_cache_range(struct vm_area_struct *vma, unsigned long start,
unsigned long end)
void smp_flush_tlb_range(struct vm_area_struct *vma, unsigned long start,
unsigned long end)
void smp_flush_cache_page(struct vm_area_struct *vma, unsigned long page)
void smp_flush_tlb_page(struct vm_area_struct *vma, unsigned long page)
void smp_flush_page_to_ram(unsigned long page)
void smp_flush_sig_insns(struct mm_struct *mm, unsigned long insn_addr)
extern unsigned int lvl14_resolution;
static DEFINE_SPINLOCK(prof_setup_lock);
int setup_profiling_timer(unsigned int multiplier)
void __init smp_prepare_cpus(unsigned int max_cpus)
void __init smp_setup_cpu_possible_map(void)
void __init smp_prepare_boot_cpu(void)
int __cpuinit __cpu_up(unsigned int cpu)
void smp_bogo(struct seq_file *m)
void smp_info(struct seq_file *m)

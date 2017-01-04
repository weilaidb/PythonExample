volatile cpumask_t cpu_callin_map;
int __cpu_number_map[NR_CPUS];
EXPORT_SYMBOL(__cpu_number_map);
int __cpu_logical_map[NR_CPUS];
EXPORT_SYMBOL(__cpu_logical_map);
int smp_num_siblings = 1;
EXPORT_SYMBOL(smp_num_siblings);
cpumask_t cpu_sibling_map[NR_CPUS] __read_mostly;
EXPORT_SYMBOL(cpu_sibling_map);
static cpumask_t cpu_sibling_setup_map;
static inline void set_cpu_sibling_map(int cpu)
struct plat_smp_ops *mp_ops;
__cpuinit void register_smp_ops(struct plat_smp_ops *ops)
asmlinkage __cpuinit void start_secondary(void)
void __irq_entry smp_call_function_interrupt(void)
static void stop_this_cpu(void *dummy)
void smp_send_stop(void)
void __init smp_cpus_done(unsigned int max_cpus)
void __init smp_prepare_cpus(unsigned int max_cpus)
void __devinit smp_prepare_boot_cpu(void)
static struct task_struct *cpu_idle_thread[NR_CPUS];
struct create_idle ;
static void __cpuinit do_fork_idle(struct work_struct *work)
int __cpuinit __cpu_up(unsigned int cpu)
int setup_profiling_timer(unsigned int multiplier)
static void flush_tlb_all_ipi(void *info)
void flush_tlb_all(void)
static void flush_tlb_mm_ipi(void *mm)
static inline void smp_on_other_tlbs(void (*func) (void *info), void *info)
static inline void smp_on_each_tlb(void (*func) (void *info), void *info)
void flush_tlb_mm(struct mm_struct *mm)
struct flush_tlb_data ;
static void flush_tlb_range_ipi(void *info)
void flush_tlb_range(struct vm_area_struct *vma, unsigned long start, unsigned long end)
static void flush_tlb_kernel_range_ipi(void *info)
void flush_tlb_kernel_range(unsigned long start, unsigned long end)
static void flush_tlb_page_ipi(void *info)
void flush_tlb_page(struct vm_area_struct *vma, unsigned long page)
static void flush_tlb_one_ipi(void *info)
void flush_tlb_one(unsigned long vaddr)
EXPORT_SYMBOL(flush_tlb_page);
EXPORT_SYMBOL(flush_tlb_one);

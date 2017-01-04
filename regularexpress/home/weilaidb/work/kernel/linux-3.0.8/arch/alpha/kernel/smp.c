#define DEBUG_SMP 0
#if DEBUG_SMP
#define DBGS(args)	printk args
#define DBGS(args)
struct cpuinfo_alpha cpu_data[NR_CPUS];
EXPORT_SYMBOL(cpu_data);
static struct  ipi_data[NR_CPUS] __cacheline_aligned;
enum ipi_message_type ;
static int smp_secondary_alive __devinitdata = 0;
int smp_num_probed;
int smp_num_cpus = 1;
EXPORT_SYMBOL(smp_num_cpus);
static inline void __init
smp_store_cpu_info(int cpuid)
static inline void __init
smp_setup_percpu_timer(int cpuid)
static void __init
wait_boot_cpu_to_stop(int cpuid)
void __cpuinit
smp_callin(void)
static int __devinit
wait_for_txrdy (unsigned long cpumask)
static void __cpuinit
send_secondary_console_msg(char *str, int cpuid)
static void
recv_secondary_console_msg(void)
static int __cpuinit
secondary_cpu_start(int cpuid, struct task_struct *idle)
static int __cpuinit
smp_boot_one_cpu(int cpuid)
void __init
setup_smp(void)
void __init
smp_prepare_cpus(unsigned int max_cpus)
void __devinit
smp_prepare_boot_cpu(void)
int __cpuinit
__cpu_up(unsigned int cpu)
void __init
smp_cpus_done(unsigned int max_cpus)
void
smp_percpu_timer_interrupt(struct pt_regs *regs)
int
setup_profiling_timer(unsigned int multiplier)
static void
send_ipi_message(const struct cpumask *to_whom, enum ipi_message_type operation)
void
handle_ipi(struct pt_regs *regs)
void
smp_send_reschedule(int cpu)
void
smp_send_stop(void)
void arch_send_call_function_ipi_mask(const struct cpumask *mask)
void arch_send_call_function_single_ipi(int cpu)
static void
ipi_imb(void *ignored)
void
smp_imb(void)
EXPORT_SYMBOL(smp_imb);
static void
ipi_flush_tlb_all(void *ignored)
void
flush_tlb_all(void)
#define asn_locked() (cpu_data[smp_processor_id()].asn_lock)
static void
ipi_flush_tlb_mm(void *x)
void
flush_tlb_mm(struct mm_struct *mm)
EXPORT_SYMBOL(flush_tlb_mm);
struct flush_tlb_page_struct ;
static void
ipi_flush_tlb_page(void *x)
void
flush_tlb_page(struct vm_area_struct *vma, unsigned long addr)
EXPORT_SYMBOL(flush_tlb_page);
void
flush_tlb_range(struct vm_area_struct *vma, unsigned long start, unsigned long end)
EXPORT_SYMBOL(flush_tlb_range);
static void
ipi_flush_icache_page(void *x)
void
flush_icache_user_range(struct vm_area_struct *vma, struct page *page,
unsigned long addr, int len)

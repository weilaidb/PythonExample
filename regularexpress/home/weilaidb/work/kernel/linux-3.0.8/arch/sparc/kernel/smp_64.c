int sparc64_multi_core __read_mostly;
DEFINE_PER_CPU(cpumask_t, cpu_sibling_map) = CPU_MASK_NONE;
cpumask_t cpu_core_map[NR_CPUS] __read_mostly =
;
EXPORT_PER_CPU_SYMBOL(cpu_sibling_map);
EXPORT_SYMBOL(cpu_core_map);
static cpumask_t smp_commenced_mask;
void smp_info(struct seq_file *m)
void smp_bogo(struct seq_file *m)
extern void setup_sparc64_timer(void);
static volatile unsigned long callin_flag = 0;
void __cpuinit smp_callin(void)
void cpu_panic(void)
#define MASTER	0
#define SLAVE	(SMP_CACHE_BYTES/sizeof(unsigned long))
#define NUM_ROUNDS	64
#define NUM_ITERS	5
static DEFINE_SPINLOCK(itc_sync_lock);
static unsigned long go[SLAVE + 1];
#define DEBUG_TICK_SYNC	0
static inline long get_delta (long *rt, long *master)
void smp_synchronize_tick_client(void)
static void smp_start_sync_tick_client(int cpu);
static void smp_synchronize_one_tick(int cpu)
#if defined(CONFIG_SUN_LDOMS) && defined(CONFIG_HOTPLUG_CPU)
static unsigned long kimage_addr_to_ra(void *p)
static void __cpuinit ldom_startcpu_cpuid(unsigned int cpu, unsigned long thread_reg, void **descrp)
extern unsigned long sparc64_cpu_startup;
static struct thread_info *cpu_new_thread = NULL;
static int __cpuinit smp_boot_one_cpu(unsigned int cpu)
static void spitfire_xcall_helper(u64 data0, u64 data1, u64 data2, u64 pstate, unsigned long cpu)
static void spitfire_xcall_deliver(struct trap_per_cpu *tb, int cnt)
static void cheetah_xcall_deliver(struct trap_per_cpu *tb, int cnt)
static void hypervisor_xcall_deliver(struct trap_per_cpu *tb, int cnt)
static void (*xcall_deliver_impl)(struct trap_per_cpu *, int);
static void xcall_deliver(u64 data0, u64 data1, u64 data2, const cpumask_t *mask)
static void smp_cross_call_masked(unsigned long *func, u32 ctx, u64 data1, u64 data2, const cpumask_t *mask)
static void smp_cross_call(unsigned long *func, u32 ctx, u64 data1, u64 data2)
extern unsigned long xcall_sync_tick;
static void smp_start_sync_tick_client(int cpu)
extern unsigned long xcall_call_function;
void arch_send_call_function_ipi_mask(const struct cpumask *mask)
extern unsigned long xcall_call_function_single;
void arch_send_call_function_single_ipi(int cpu)
void __irq_entry smp_call_function_client(int irq, struct pt_regs *regs)
void __irq_entry smp_call_function_single_client(int irq, struct pt_regs *regs)
static void tsb_sync(void *info)
void smp_tsb_sync(struct mm_struct *mm)
extern unsigned long xcall_flush_tlb_mm;
extern unsigned long xcall_flush_tlb_pending;
extern unsigned long xcall_flush_tlb_kernel_range;
extern unsigned long xcall_fetch_glob_regs;
extern unsigned long xcall_receive_signal;
extern unsigned long xcall_new_mmu_context_version;
extern unsigned long xcall_kgdb_capture;
extern unsigned long xcall_flush_dcache_page_cheetah;
extern unsigned long xcall_flush_dcache_page_spitfire;
extern atomic_t dcpage_flushes;
extern atomic_t dcpage_flushes_xcall;
static inline void __local_flush_dcache_page(struct page *page)
void smp_flush_dcache_page_impl(struct page *page, int cpu)
void flush_dcache_page_all(struct mm_struct *mm, struct page *page)
void __irq_entry smp_new_mmu_context_version_client(int irq, struct pt_regs *regs)
void smp_new_mmu_context_version(void)
void kgdb_roundup_cpus(unsigned long flags)
void smp_fetch_global_regs(void)
void smp_flush_tlb_mm(struct mm_struct *mm)
void smp_flush_tlb_pending(struct mm_struct *mm, unsigned long nr, unsigned long *vaddrs)
void smp_flush_tlb_kernel_range(unsigned long start, unsigned long end)
extern unsigned long xcall_capture;
static atomic_t smp_capture_depth = ATOMIC_INIT(0);
static atomic_t smp_capture_registry = ATOMIC_INIT(0);
static unsigned long penguins_are_doing_time;
void smp_capture(void)
void smp_release(void)
extern void prom_world(int);
void __irq_entry smp_penguin_jailcell(int irq, struct pt_regs *regs)
int setup_profiling_timer(unsigned int multiplier)
void __init smp_prepare_cpus(unsigned int max_cpus)
void __devinit smp_prepare_boot_cpu(void)
void __init smp_setup_processor_id(void)
void __devinit smp_fill_in_sib_core_maps(void)
int __cpuinit __cpu_up(unsigned int cpu)
void cpu_play_dead(void)
int __cpu_disable(void)
void __cpu_die(unsigned int cpu)
void __init smp_cpus_done(unsigned int max_cpus)
void smp_send_reschedule(int cpu)
void __irq_entry smp_receive_signal_client(int irq, struct pt_regs *regs)
void smp_send_stop(void)
static void * __init pcpu_alloc_bootmem(unsigned int cpu, size_t size,
size_t align)
static void __init pcpu_free_bootmem(void *ptr, size_t size)
static int __init pcpu_cpu_distance(unsigned int from, unsigned int to)
static void __init pcpu_populate_pte(unsigned long addr)
void __init setup_per_cpu_areas(void)

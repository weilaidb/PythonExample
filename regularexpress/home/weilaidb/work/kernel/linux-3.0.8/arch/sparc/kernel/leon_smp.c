extern ctxd_t *srmmu_ctx_table_phys;
static int smp_processors_ready;
extern volatile unsigned long cpu_callin_map[NR_CPUS];
extern cpumask_t smp_commenced_mask;
void __init leon_configure_cache_smp(void);
static void leon_ipi_init(void);
int leon_ipi_irq = LEON3_IRQ_IPI_DEFAULT;
static inline unsigned long do_swap(volatile unsigned long *ptr,
unsigned long val)
static void smp_setup_percpu_timer(void);
void __cpuinit leon_callin(void)
extern struct linux_prom_registers smp_penguin_ctable;
void __init leon_configure_cache_smp(void)
void leon_smp_setbroadcast(unsigned int mask)
unsigned int leon_smp_getbroadcast(void)
int leon_smp_nrcpus(void)
void __init leon_boot_cpus(void)
int __cpuinit leon_boot_one_cpu(int i)
void __init leon_smp_done(void)
void leon_irq_rotate(int cpu)
struct leon_ipi_work ;
static DEFINE_PER_CPU_SHARED_ALIGNED(struct leon_ipi_work, leon_ipi_work);
static void __init leon_ipi_init(void)
static void leon_ipi_single(int cpu)
static void leon_ipi_mask_one(int cpu)
static void leon_ipi_resched(int cpu)
void leonsmp_ipi_interrupt(void)
static struct smp_funcall  ccall_info;
static DEFINE_SPINLOCK(cross_call_lock);
static void leon_cross_call(smpfunc_t func, cpumask_t mask, unsigned long arg1,
unsigned long arg2, unsigned long arg3,
unsigned long arg4)
void leon_cross_call_irq(void)
irqreturn_t leon_percpu_timer_interrupt(int irq, void *unused)
static void __init smp_setup_percpu_timer(void)
void __init leon_blackbox_id(unsigned *addr)
void __init leon_blackbox_current(unsigned *addr)
void __init leon_init_smp(void)

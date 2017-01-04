#define IRQ_IPI_SINGLE		12
#define IRQ_IPI_MASK		13
#define IRQ_IPI_RESCHED		14
#define IRQ_CROSS_CALL		15
static inline unsigned long
swap_ulong(volatile unsigned long *ptr, unsigned long val)
static void smp4m_ipi_init(void);
static void smp_setup_percpu_timer(void);
void __cpuinit smp4m_callin(void)
void __init smp4m_boot_cpus(void)
int __cpuinit smp4m_boot_one_cpu(int i)
void __init smp4m_smp_done(void)
static void __init smp4m_ipi_init(void)
static void smp4m_ipi_resched(int cpu)
static void smp4m_ipi_single(int cpu)
static void smp4m_ipi_mask_one(int cpu)
static struct smp_funcall  ccall_info;
static DEFINE_SPINLOCK(cross_call_lock);
static void smp4m_cross_call(smpfunc_t func, cpumask_t mask, unsigned long arg1,
unsigned long arg2, unsigned long arg3,
unsigned long arg4)
void smp4m_cross_call_irq(void)
void smp4m_percpu_timer_interrupt(struct pt_regs *regs)
static void __cpuinit smp_setup_percpu_timer(void)
static void __init smp4m_blackbox_id(unsigned *addr)
static void __init smp4m_blackbox_current(unsigned *addr)
void __init sun4m_init_smp(void)

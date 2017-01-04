#define IRQ_CROSS_CALL		15
static volatile int smp_processors_ready;
static int smp_highest_cpu;
static inline unsigned long sun4d_swap(volatile unsigned long *ptr, unsigned long val)
static void smp4d_ipi_init(void);
static void smp_setup_percpu_timer(void);
static unsigned char cpu_leds[32];
static inline void show_leds(int cpuid)
void __cpuinit smp4d_callin(void)
void __init smp4d_boot_cpus(void)
int __cpuinit smp4d_boot_one_cpu(int i)
void __init smp4d_smp_done(void)
struct sun4d_ipi_work ;
static DEFINE_PER_CPU_SHARED_ALIGNED(struct sun4d_ipi_work, sun4d_ipi_work);
static void __init smp4d_ipi_init(void)
void sun4d_ipi_interrupt(void)
static void smp4d_ipi_single(int cpu)
static void smp4d_ipi_mask_one(int cpu)
static void smp4d_ipi_resched(int cpu)
static struct smp_funcall  ccall_info __attribute__((aligned(8)));
static DEFINE_SPINLOCK(cross_call_lock);
static void smp4d_cross_call(smpfunc_t func, cpumask_t mask, unsigned long arg1,
unsigned long arg2, unsigned long arg3,
unsigned long arg4)
void smp4d_cross_call_irq(void)
void smp4d_percpu_timer_interrupt(struct pt_regs *regs)
static void __cpuinit smp_setup_percpu_timer(void)
void __init smp4d_blackbox_id(unsigned *addr)
void __init smp4d_blackbox_current(unsigned *addr)
void __init sun4d_init_smp(void)

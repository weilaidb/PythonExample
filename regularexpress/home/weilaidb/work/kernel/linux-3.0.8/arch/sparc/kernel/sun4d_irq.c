struct sun4d_handler_data ;
static unsigned int sun4d_encode_irq(int board, int lvl, int slot)
struct sun4d_timer_regs ;
static struct sun4d_timer_regs __iomem *sun4d_timers;
#define SUN4D_TIMER_IRQ        10
static unsigned char board_to_cpu[32];
static int pil_to_sbus[] = ;
DEFINE_SPINLOCK(sun4d_imsk_lock);
static void sun4d_sbus_handler_irq(int sbusl)
void sun4d_handler_irq(int pil, struct pt_regs *regs)
static void sun4d_mask_irq(struct irq_data *data)
static void sun4d_unmask_irq(struct irq_data *data)
static unsigned int sun4d_startup_irq(struct irq_data *data)
static void sun4d_shutdown_irq(struct irq_data *data)
struct irq_chip sun4d_irq = ;
static void sun4d_set_cpu_int(int cpu, int level)
static void sun4d_clear_ipi(int cpu, int level)
static void sun4d_set_udt(int cpu)
void __init sun4d_distribute_irqs(void)
static void sun4d_clear_clock_irq(void)
static void sun4d_load_profile_irq(int cpu, unsigned int limit)
static void __init sun4d_load_profile_irqs(void)
unsigned int _sun4d_build_device_irq(unsigned int real_irq,
unsigned int pil,
unsigned int board)
unsigned int sun4d_build_device_irq(struct platform_device *op,
unsigned int real_irq)
unsigned int sun4d_build_timer_irq(unsigned int board, unsigned int real_irq)
static void __init sun4d_fixup_trap_table(void)
static void __init sun4d_init_timers(irq_handler_t counter_fn)
void __init sun4d_init_sbi_irq(void)
void __init sun4d_init_IRQ(void)

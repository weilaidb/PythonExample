#define SUN4C_INT_ENABLE  0x01
#define SUN4C_INT_E14     0x80
#define SUN4C_INT_E10     0x20
#define SUN4C_INT_E8      0x10
#define SUN4C_INT_E6      0x08
#define SUN4C_INT_E4      0x04
#define SUN4C_INT_E1      0x02
unsigned char __iomem *interrupt_enable;
static void sun4c_mask_irq(struct irq_data *data)
static void sun4c_unmask_irq(struct irq_data *data)
static unsigned int sun4c_startup_irq(struct irq_data *data)
static void sun4c_shutdown_irq(struct irq_data *data)
static struct irq_chip sun4c_irq = ;
static unsigned int sun4c_build_device_irq(struct platform_device *op,
unsigned int real_irq)
struct sun4c_timer_info ;
static struct sun4c_timer_info __iomem *sun4c_timers;
static void sun4c_clear_clock_irq(void)
static void sun4c_load_profile_irq(int cpu, unsigned int limit)
static void __init sun4c_init_timers(irq_handler_t counter_fn)
static void sun4c_nop(void)
void __init sun4c_init_IRQ(void)

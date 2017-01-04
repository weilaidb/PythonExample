static struct clk * uart1_ck;
static struct clk * uart2_ck;
static struct clk * uart3_ck;
static inline unsigned int omap_serial_in(struct plat_serial8250_port *up,
int offset)
static inline void omap_serial_outp(struct plat_serial8250_port *p, int offset,
int value)
static void __init omap_serial_reset(struct plat_serial8250_port *p)
static struct plat_serial8250_port serial_platform_data[] = ;
static struct platform_device serial_device = ;
void __init omap_serial_init(void)
static irqreturn_t omap_serial_wake_interrupt(int irq, void *dev_id)
void omap_serial_wake_trigger(int enable)
static void __init omap_serial_set_port_wakeup(int gpio_nr)
static int __init omap_serial_wakeup_init(void)
late_initcall(omap_serial_wakeup_init);
static int __init omap_init(void)
arch_initcall(omap_init);

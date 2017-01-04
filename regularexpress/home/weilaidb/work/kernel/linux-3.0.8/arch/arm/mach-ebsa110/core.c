#define IRQ_MASK		0xfe000000
#define IRQ_MSET		0xfe000000
#define IRQ_STAT		0xff000000
#define IRQ_MCLR		0xff000000
static void ebsa110_mask_irq(struct irq_data *d)
static void ebsa110_unmask_irq(struct irq_data *d)
static struct irq_chip ebsa110_irq_chip = ;
static void __init ebsa110_init_irq(void)
static struct map_desc ebsa110_io_desc[] __initdata = ;
static void __init ebsa110_map_io(void)
#define PIT_CTRL		(PIT_BASE + 0x0d)
#define PIT_T2			(PIT_BASE + 0x09)
#define PIT_T1			(PIT_BASE + 0x05)
#define PIT_T0			(PIT_BASE + 0x01)
#define MCLK	47894000
#define CLKBY7	(MCLK / 7)
#define COUNT	((CLKBY7 + (HZ / 2)) / HZ)
static unsigned long ebsa110_gettimeoffset(void)
static irqreturn_t
ebsa110_timer_interrupt(int irq, void *dev_id)
static struct irqaction ebsa110_timer_irq = ;
static void __init ebsa110_timer_init(void)
static struct sys_timer ebsa110_timer = ;
static struct plat_serial8250_port serial_platform_data[] = ;
static struct platform_device serial_device = ;
static struct resource am79c961_resources[] = ;
static struct platform_device am79c961_device = ;
static struct platform_device *ebsa110_devices[] = ;
static int __init ebsa110_init(void)
arch_initcall(ebsa110_init);
MACHINE_START(EBSA110, "EBSA110")
.boot_params	= 0x00000400,
.reserve_lp0	= 1,
.reserve_lp2	= 1,
.soft_reboot	= 1,
.map_io		= ebsa110_map_io,
.init_irq	= ebsa110_init_irq,
.timer		= &ebsa110_timer,
MACHINE_END

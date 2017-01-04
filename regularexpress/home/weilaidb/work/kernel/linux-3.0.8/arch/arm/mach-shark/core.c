#define IO_BASE                 0xe0000000
#define IO_SIZE                 0x08000000
#define IO_START                0x40000000
#define ROMCARD_SIZE            0x08000000
#define ROMCARD_START           0x10000000
void arch_reset(char mode, const char *cmd)
static struct plat_serial8250_port serial_platform_data[] = ;
static struct platform_device serial_device = ;
static struct resource rtc_resources[] = ;
static struct platform_device rtc_device = ;
static int __init shark_init(void)
arch_initcall(shark_init);
extern void shark_init_irq(void);
static struct map_desc shark_io_desc[] __initdata = ;
static void __init shark_map_io(void)
#define IRQ_TIMER 0
#define HZ_TIME ((1193180 + HZ/2) / HZ)
static irqreturn_t
shark_timer_interrupt(int irq, void *dev_id)
static struct irqaction shark_timer_irq = ;
static void __init shark_timer_init(void)
static struct sys_timer shark_timer = ;
MACHINE_START(SHARK, "Shark")
.boot_params	= 0x08003000,
.map_io		= shark_map_io,
.init_irq	= shark_init_irq,
.timer		= &shark_timer,
MACHINE_END

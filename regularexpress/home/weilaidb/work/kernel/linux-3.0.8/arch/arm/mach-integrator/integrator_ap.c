#define VA_IC_BASE	__io_address(INTEGRATOR_IC_BASE)
#define VA_SC_BASE	__io_address(INTEGRATOR_SC_BASE)
#define VA_EBI_BASE	__io_address(INTEGRATOR_EBI_BASE)
#define VA_CMIC_BASE	__io_address(INTEGRATOR_HDR_IC)
static struct map_desc ap_io_desc[] __initdata = ;
static void __init ap_map_io(void)
#define INTEGRATOR_SC_VALID_INT	0x003fffff
static struct fpga_irq_data sc_irq_data = ;
static void __init ap_init_irq(void)
static unsigned long ic_irq_enable;
static int irq_suspend(void)
static void irq_resume(void)
#define irq_suspend NULL
#define irq_resume NULL
static struct syscore_ops irq_syscore_ops = ;
static int __init irq_syscore_init(void)
device_initcall(irq_syscore_init);
#define SC_CTRLC (VA_SC_BASE + INTEGRATOR_SC_CTRLC_OFFSET)
#define SC_CTRLS (VA_SC_BASE + INTEGRATOR_SC_CTRLS_OFFSET)
#define EBI_CSR1 (VA_EBI_BASE + INTEGRATOR_EBI_CSR1_OFFSET)
#define EBI_LOCK (VA_EBI_BASE + INTEGRATOR_EBI_LOCK_OFFSET)
static int ap_flash_init(struct platform_device *dev)
static void ap_flash_exit(struct platform_device *dev)
static void ap_flash_set_vpp(struct platform_device *pdev, int on)
static struct physmap_flash_data ap_flash_data = ;
static struct resource cfi_flash_resource = ;
static struct platform_device cfi_flash_device = ;
static void __init ap_init(void)
#define TIMER0_VA_BASE IO_ADDRESS(INTEGRATOR_TIMER0_BASE)
#define TIMER1_VA_BASE IO_ADDRESS(INTEGRATOR_TIMER1_BASE)
#define TIMER2_VA_BASE IO_ADDRESS(INTEGRATOR_TIMER2_BASE)
#define TIMER_INTERVAL	(TICKS_PER_uSEC * mSEC_10)
#if TIMER_INTERVAL >= 0x100000
#define TICKS2USECS(x)	(256 * (x) / TICKS_PER_uSEC)
#elif TIMER_INTERVAL >= 0x10000
#define TICKS2USECS(x)	(16 * (x) / TICKS_PER_uSEC)
#define TICKS2USECS(x)	((x) / TICKS_PER_uSEC)
static unsigned long timer_reload;
static void integrator_clocksource_init(u32 khz)
static void __iomem * const clkevt_base = (void __iomem *)TIMER1_VA_BASE;
static irqreturn_t integrator_timer_interrupt(int irq, void *dev_id)
static void clkevt_set_mode(enum clock_event_mode mode, struct clock_event_device *evt)
static int clkevt_set_next_event(unsigned long next, struct clock_event_device *evt)
static struct clock_event_device integrator_clockevent = ;
static struct irqaction integrator_timer_irq = ;
static void integrator_clockevent_init(u32 khz)
static void __init ap_init_timer(void)
static struct sys_timer ap_timer = ;
MACHINE_START(INTEGRATOR, "ARM-Integrator")
.boot_params	= 0x00000100,
.reserve	= integrator_reserve,
.map_io		= ap_map_io,
.init_early	= integrator_init_early,
.init_irq	= ap_init_irq,
.timer		= &ap_timer,
.init_machine	= ap_init,
MACHINE_END

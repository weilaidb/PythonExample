static const int mx27lite_pins[] __initconst = ;
static const struct imxuart_platform_data uart_pdata __initconst = ;
static void __init mx27lite_init(void)
static void __init mx27lite_timer_init(void)
static struct sys_timer mx27lite_timer = ;
MACHINE_START(IMX27LITE, "LogicPD i.MX27LITE")
.boot_params = MX27_PHYS_OFFSET + 0x100,
.map_io = mx27_map_io,
.init_early = imx27_init_early,
.init_irq = mx27_init_irq,
.timer = &mx27lite_timer,
.init_machine = mx27lite_init,
MACHINE_END

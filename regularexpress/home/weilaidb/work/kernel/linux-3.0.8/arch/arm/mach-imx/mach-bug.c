static const struct imxuart_platform_data uart_pdata __initconst = ;
static const unsigned int bug_pins[] __initconst = ;
static void __init bug_board_init(void)
static void __init bug_timer_init(void)
static struct sys_timer bug_timer = ;
MACHINE_START(BUG, "BugLabs BUGBase")
.map_io = mx31_map_io,
.init_early = imx31_init_early,
.init_irq = mx31_init_irq,
.timer = &bug_timer,
.init_machine = bug_board_init,
MACHINE_END

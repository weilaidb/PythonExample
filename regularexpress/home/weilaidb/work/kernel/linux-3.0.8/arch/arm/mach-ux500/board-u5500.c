static void __init u5500_uart_init(void)
static void __init u5500_init_machine(void)
MACHINE_START(U5500, "ST-Ericsson U5500 Platform")
.boot_params	= 0x00000100,
.map_io		= u5500_map_io,
.init_irq	= ux500_init_irq,
.timer		= &ux500_timer,
.init_machine	= u5500_init_machine,
MACHINE_END

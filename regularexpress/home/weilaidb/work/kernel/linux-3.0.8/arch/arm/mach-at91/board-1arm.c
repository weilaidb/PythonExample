static void __init onearm_init_early(void)
static void __init onearm_init_irq(void)
static struct at91_eth_data __initdata onearm_eth_data = ;
static struct at91_usbh_data __initdata onearm_usbh_data = ;
static struct at91_udc_data __initdata onearm_udc_data = ;
static void __init onearm_board_init(void)
MACHINE_START(ONEARM, "Ajeco 1ARM single board computer")
.timer		= &at91rm9200_timer,
.map_io		= at91rm9200_map_io,
.init_early	= onearm_init_early,
.init_irq	= onearm_init_irq,
.init_machine	= onearm_board_init,
MACHINE_END

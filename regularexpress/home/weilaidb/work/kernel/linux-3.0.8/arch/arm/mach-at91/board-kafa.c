static void __init kafa_init_early(void)
static void __init kafa_init_irq(void)
static struct at91_eth_data __initdata kafa_eth_data = ;
static struct at91_usbh_data __initdata kafa_usbh_data = ;
static struct at91_udc_data __initdata kafa_udc_data = ;
static void __init kafa_board_init(void)
MACHINE_START(KAFA, "Sperry-Sun KAFA")
.timer		= &at91rm9200_timer,
.map_io		= at91rm9200_map_io,
.init_early	= kafa_init_early,
.init_irq	= kafa_init_irq,
.init_machine	= kafa_board_init,
MACHINE_END

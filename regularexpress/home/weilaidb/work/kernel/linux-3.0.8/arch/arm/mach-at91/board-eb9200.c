static void __init eb9200_init_early(void)
static void __init eb9200_init_irq(void)
static struct at91_eth_data __initdata eb9200_eth_data = ;
static struct at91_usbh_data __initdata eb9200_usbh_data = ;
static struct at91_udc_data __initdata eb9200_udc_data = ;
static struct at91_cf_data __initdata eb9200_cf_data = ;
static struct at91_mmc_data __initdata eb9200_mmc_data = ;
static struct i2c_board_info __initdata eb9200_i2c_devices[] = ;
static void __init eb9200_board_init(void)
MACHINE_START(ATEB9200, "Embest ATEB9200")
.timer		= &at91rm9200_timer,
.map_io		= at91rm9200_map_io,
.init_early	= eb9200_init_early,
.init_irq	= eb9200_init_irq,
.init_machine	= eb9200_board_init,
MACHINE_END

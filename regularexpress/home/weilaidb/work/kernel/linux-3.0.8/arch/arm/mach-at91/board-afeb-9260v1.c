static void __init afeb9260_init_early(void)
static void __init afeb9260_init_irq(void)
static struct at91_usbh_data __initdata afeb9260_usbh_data = ;
static struct at91_udc_data __initdata afeb9260_udc_data = ;
static struct spi_board_info afeb9260_spi_devices[] = ;
static struct at91_eth_data __initdata afeb9260_macb_data = ;
static struct mtd_partition __initdata afeb9260_nand_partition[] = ;
static struct mtd_partition * __init nand_partitions(int size, int *num_partitions)
static struct atmel_nand_data __initdata afeb9260_nand_data = ;
static struct at91_mmc_data __initdata afeb9260_mmc_data = ;
static struct i2c_board_info __initdata afeb9260_i2c_devices[] = ;
static struct at91_cf_data afeb9260_cf_data = ;
static void __init afeb9260_board_init(void)
MACHINE_START(AFEB9260, "Custom afeb9260 board")
.timer		= &at91sam926x_timer,
.map_io		= at91sam9260_map_io,
.init_early	= afeb9260_init_early,
.init_irq	= afeb9260_init_irq,
.init_machine	= afeb9260_board_init,
MACHINE_END

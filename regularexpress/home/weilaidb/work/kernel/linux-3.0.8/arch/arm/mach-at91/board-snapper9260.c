#define SNAPPER9260_IO_EXP_GPIO(x)	(NR_BUILTIN_GPIO + (x))
static void __init snapper9260_init_early(void)
static void __init snapper9260_init_irq(void)
static struct at91_usbh_data __initdata snapper9260_usbh_data = ;
static struct at91_udc_data __initdata snapper9260_udc_data = ;
static struct at91_eth_data snapper9260_macb_data = ;
static struct mtd_partition __initdata snapper9260_nand_partitions[] = ;
static struct mtd_partition * __init
snapper9260_nand_partition_info(int size, int *num_partitions)
static struct atmel_nand_data __initdata snapper9260_nand_data = ;
static struct sam9_smc_config __initdata snapper9260_nand_smc_config = ;
static struct pca953x_platform_data snapper9260_io_expander_data = ;
static struct i2c_board_info __initdata snapper9260_i2c_devices[] = ;
static void __init snapper9260_add_device_nand(void)
static void __init snapper9260_board_init(void)
MACHINE_START(SNAPPER_9260, "Bluewater Systems Snapper 9260/9G20 module")
.timer		= &at91sam926x_timer,
.map_io		= at91sam9260_map_io,
.init_early	= snapper9260_init_early,
.init_irq	= snapper9260_init_irq,
.init_machine	= snapper9260_board_init,
MACHINE_END

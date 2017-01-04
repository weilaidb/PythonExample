static void __init cam60_init_early(void)
static void __init cam60_init_irq(void)
static struct at91_usbh_data __initdata cam60_usbh_data = ;
#if defined(CONFIG_MTD_DATAFLASH)
static struct mtd_partition cam60_spi_partitions[] = ;
static struct flash_platform_data cam60_spi_flash_platform_data = ;
static struct spi_board_info cam60_spi_devices[] __initdata = ;
static struct __initdata at91_eth_data cam60_macb_data = ;
static struct mtd_partition __initdata cam60_nand_partition[] = ;
static struct mtd_partition * __init nand_partitions(int size, int *num_partitions)
static struct atmel_nand_data __initdata cam60_nand_data = ;
static struct sam9_smc_config __initdata cam60_nand_smc_config = ;
static void __init cam60_add_device_nand(void)
static void __init cam60_board_init(void)
MACHINE_START(CAM60, "KwikByte CAM60")
.timer		= &at91sam926x_timer,
.map_io		= at91sam9260_map_io,
.init_early	= cam60_init_early,
.init_irq	= cam60_init_irq,
.init_machine	= cam60_board_init,
MACHINE_END

static void __init dk_init_early(void)
static void __init dk_init_irq(void)
static struct at91_eth_data __initdata dk_eth_data = ;
static struct at91_usbh_data __initdata dk_usbh_data = ;
static struct at91_udc_data __initdata dk_udc_data = ;
static struct at91_cf_data __initdata dk_cf_data = ;
static struct at91_mmc_data __initdata dk_mmc_data = ;
static struct spi_board_info dk_spi_devices[] = ;
static struct i2c_board_info __initdata dk_i2c_devices[] = ;
static struct mtd_partition __initdata dk_nand_partition[] = ;
static struct mtd_partition * __init nand_partitions(int size, int *num_partitions)
static struct atmel_nand_data __initdata dk_nand_data = ;
#define DK_FLASH_BASE	AT91_CHIPSELECT_0
#define DK_FLASH_SIZE	SZ_2M
static struct physmap_flash_data dk_flash_data = ;
static struct resource dk_flash_resource = ;
static struct platform_device dk_flash = ;
static struct gpio_led dk_leds[] = ;
static void __init dk_board_init(void)
MACHINE_START(AT91RM9200DK, "Atmel AT91RM9200-DK")
.timer		= &at91rm9200_timer,
.map_io		= at91rm9200_map_io,
.init_early	= dk_init_early,
.init_irq	= dk_init_irq,
.init_machine	= dk_board_init,
MACHINE_END

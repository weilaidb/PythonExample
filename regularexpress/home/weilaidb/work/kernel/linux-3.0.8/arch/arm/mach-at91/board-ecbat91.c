static void __init ecb_at91init_early(void)
static void __init ecb_at91init_irq(void)
static struct at91_eth_data __initdata ecb_at91eth_data = ;
static struct at91_usbh_data __initdata ecb_at91usbh_data = ;
static struct at91_mmc_data __initdata ecb_at91mmc_data = ;
#if defined(CONFIG_MTD_DATAFLASH)
static struct mtd_partition __initdata my_flash0_partitions[] =
;
static struct flash_platform_data __initdata my_flash0_platform = ;
static struct spi_board_info __initdata ecb_at91spi_devices[] = ;
static void __init ecb_at91board_init(void)
MACHINE_START(ECBAT91, "emQbit's ECB_AT91")
.timer		= &at91rm9200_timer,
.map_io		= at91rm9200_map_io,
.init_early	= ecb_at91init_early,
.init_irq	= ecb_at91init_irq,
.init_machine	= ecb_at91board_init,
MACHINE_END

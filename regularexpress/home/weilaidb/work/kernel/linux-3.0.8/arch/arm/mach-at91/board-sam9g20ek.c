#define HAVE_2MMC	(1 << 0)
static int inline ek_have_2mmc(void)
static void __init ek_init_early(void)
static void __init ek_init_irq(void)
static struct at91_usbh_data __initdata ek_usbh_data = ;
static struct at91_udc_data __initdata ek_udc_data = ;
static struct spi_board_info ek_spi_devices[] = ;
static struct at91_eth_data __initdata ek_macb_data = ;
static void __init ek_add_device_macb(void)
static struct mtd_partition __initdata ek_nand_partition[] = ;
static struct mtd_partition * __init nand_partitions(int size, int *num_partitions)
static struct atmel_nand_data __initdata ek_nand_data = ;
static struct sam9_smc_config __initdata ek_nand_smc_config = ;
static void __init ek_add_device_nand(void)
#if defined(CONFIG_MMC_ATMELMCI) || defined(CONFIG_MMC_ATMELMCI_MODULE)
static struct mci_platform_data __initdata ek_mmc_data = ;
static struct at91_mmc_data __initdata ek_mmc_data = ;
static void __init ek_add_device_mmc(void)
static struct gpio_led ek_leds[] = ;
static void __init ek_add_device_gpio_leds(void)
#if defined(CONFIG_KEYBOARD_GPIO) || defined(CONFIG_KEYBOARD_GPIO_MODULE)
static struct gpio_keys_button ek_buttons[] = ;
static struct gpio_keys_platform_data ek_button_data = ;
static struct platform_device ek_button_device = ;
static void __init ek_add_device_buttons(void)
static void __init ek_add_device_buttons(void)
#if defined(CONFIG_REGULATOR_FIXED_VOLTAGE) || defined(CONFIG_REGULATOR_FIXED_VOLTAGE_MODULE)
static struct regulator_consumer_supply ek_audio_consumer_supplies[] = ;
static struct regulator_init_data ek_avdd_reg_init_data = ;
static struct fixed_voltage_config ek_vdd_pdata = ;
static struct platform_device ek_voltage_regulator = ;
static void __init ek_add_regulators(void)
static void __init ek_add_regulators(void)
static struct i2c_board_info __initdata ek_i2c_devices[] = ;
static void __init ek_board_init(void)
MACHINE_START(AT91SAM9G20EK, "Atmel AT91SAM9G20-EK")
.timer		= &at91sam926x_timer,
.map_io		= at91sam9260_map_io,
.init_early	= ek_init_early,
.init_irq	= ek_init_irq,
.init_machine	= ek_board_init,
MACHINE_END
MACHINE_START(AT91SAM9G20EK_2MMC, "Atmel AT91SAM9G20-EK 2 MMC Slot Mod")
.timer		= &at91sam926x_timer,
.map_io		= at91sam9260_map_io,
.init_early	= ek_init_early,
.init_irq	= ek_init_irq,
.init_machine	= ek_board_init,
MACHINE_END

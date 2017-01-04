static unsigned long z2_pin_config[] = ;
#if defined(CONFIG_MTD_PHYSMAP) || defined(CONFIG_MTD_PHYSMAP_MODULE)
static struct resource z2_flash_resource = ;
static struct mtd_partition z2_flash_parts[] = ;
static struct physmap_flash_data z2_flash_data = ;
static struct platform_device z2_flash = ;
static void __init z2_nor_init(void)
static inline void z2_nor_init(void)
#if defined(CONFIG_BACKLIGHT_PWM) || defined(CONFIG_BACKLIGHT_PWM_MODULE)
static struct platform_pwm_backlight_data z2_backlight_data[] = ;
static struct platform_device z2_backlight_devices[2] = ;
static void __init z2_pwm_init(void)
static inline void z2_pwm_init(void)
#if defined(CONFIG_FB_PXA) || defined(CONFIG_FB_PXA_MODULE)
static struct pxafb_mode_info z2_lcd_modes[] = ;
static struct pxafb_mach_info z2_lcd_screen = ;
static void __init z2_lcd_init(void)
static inline void z2_lcd_init(void)
#if defined(CONFIG_MMC_PXA) || defined(CONFIG_MMC_PXA_MODULE)
static struct pxamci_platform_data z2_mci_platform_data = ;
static void __init z2_mmc_init(void)
static inline void z2_mmc_init(void)
#if defined(CONFIG_LEDS_GPIO) || defined(CONFIG_LEDS_GPIO_MODULE)
struct gpio_led z2_gpio_leds[] = ;
static struct gpio_led_platform_data z2_gpio_led_info = ;
static struct platform_device z2_leds = ;
static void __init z2_leds_init(void)
static inline void z2_leds_init(void)
#if defined(CONFIG_KEYBOARD_PXA27x) || defined(CONFIG_KEYBOARD_PXA27x_MODULE)
static unsigned int z2_matrix_keys[] = ;
static struct pxa27x_keypad_platform_data z2_keypad_platform_data = ;
static void __init z2_mkp_init(void)
static inline void z2_mkp_init(void)
#if defined(CONFIG_KEYBOARD_GPIO) || defined(CONFIG_KEYBOARD_GPIO_MODULE)
static struct gpio_keys_button z2_pxa_buttons[] = ;
static struct gpio_keys_platform_data z2_pxa_keys_data = ;
static struct platform_device z2_pxa_keys = ;
static void __init z2_keys_init(void)
static inline void z2_keys_init(void)
#if defined(CONFIG_I2C_PXA) || defined(CONFIG_I2C_PXA_MODULE)
static struct z2_battery_info batt_chip_info = ;
static struct i2c_board_info __initdata z2_i2c_board_info[] = ;
static void __init z2_i2c_init(void)
static inline void z2_i2c_init(void)
#if defined(CONFIG_SPI_PXA2XX) || defined(CONFIG_SPI_PXA2XX_MODULE)
static int z2_lbs_spi_setup(struct spi_device *spi)
;
static int z2_lbs_spi_teardown(struct spi_device *spi)
;
static struct pxa2xx_spi_chip z2_lbs_chip_info = ;
static struct libertas_spi_platform_data z2_lbs_pdata = ;
static struct pxa2xx_spi_chip lms283_chip_info = ;
static const struct lms283gf05_pdata lms283_pdata = ;
static struct spi_board_info spi_board_info[] __initdata = ;
static struct pxa2xx_spi_master pxa_ssp1_master_info = ;
static struct pxa2xx_spi_master pxa_ssp2_master_info = ;
static void __init z2_spi_init(void)
static inline void z2_spi_init(void)
#if defined(CONFIG_REGULATOR_TPS65023) || \
defined(CONFIG_REGULATOR_TPS65023_MODULE)
static struct regulator_consumer_supply z2_tps65021_consumers[] = ;
static struct regulator_init_data z2_tps65021_info[] = ;
static struct i2c_board_info __initdata z2_pi2c_board_info[] = ;
static void __init z2_pmic_init(void)
static inline void z2_pmic_init(void)
static void __init z2_init(void)
MACHINE_START(ZIPIT2, "Zipit Z2")
.boot_params	= 0xa0000100,
.map_io		= pxa27x_map_io,
.init_irq	= pxa27x_init_irq,
.timer		= &pxa_timer,
.init_machine	= z2_init,
MACHINE_END

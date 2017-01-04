#define GPIO_MMC1_CARD_DETECT	mfp_to_gpio(MFP_PIN_GPIO15)
static mfp_cfg_t littleton_mfp_cfg[] __initdata = ;
static struct resource smc91x_resources[] = ;
static struct smc91x_platdata littleton_smc91x_info = ;
static struct platform_device smc91x_device = ;
#if defined(CONFIG_FB_PXA) || defined(CONFIG_FB_PXA_MODULE)
static struct pxafb_mode_info tpo_tdo24mtea1_modes[] = ;
static struct pxafb_mach_info littleton_lcd_info = ;
static void littleton_init_lcd(void)
static inline void littleton_init_lcd(void) ;
#if defined(CONFIG_SPI_PXA2XX) || defined(CONFIG_SPI_PXA2XX_MODULE)
static struct pxa2xx_spi_master littleton_spi_info = ;
static struct pxa2xx_spi_chip littleton_tdo24m_chip = ;
static struct spi_board_info littleton_spi_devices[] __initdata = ;
static void __init littleton_init_spi(void)
static inline void littleton_init_spi(void)
#if defined(CONFIG_KEYBOARD_PXA27x) || defined(CONFIG_KEYBOARD_PXA27x_MODULE)
static unsigned int littleton_matrix_key_map[] = ;
static struct pxa27x_keypad_platform_data littleton_keypad_info = ;
static void __init littleton_init_keypad(void)
static inline void littleton_init_keypad(void)
#if defined(CONFIG_MMC_PXA) || defined(CONFIG_MMC_PXA_MODULE)
static struct pxamci_platform_data littleton_mci_platform_data = ;
static void __init littleton_init_mmc(void)
static inline void littleton_init_mmc(void)
#if defined(CONFIG_MTD_NAND_PXA3xx) || defined(CONFIG_MTD_NAND_PXA3xx_MODULE)
static struct mtd_partition littleton_nand_partitions[] = ;
static struct pxa3xx_nand_platform_data littleton_nand_info = ;
static void __init littleton_init_nand(void)
static inline void littleton_init_nand(void)
#if defined(CONFIG_I2C_PXA) || defined(CONFIG_I2C_PXA_MODULE)
static struct led_info littleton_da9034_leds[] = ;
static struct da9034_touch_pdata littleton_da9034_touch = ;
static struct da903x_subdev_info littleton_da9034_subdevs[] = ;
static struct da903x_platform_data littleton_da9034_info = ;
static struct max732x_platform_data littleton_max7320_info = ;
static struct i2c_board_info littleton_i2c_info[] = ;
static void __init littleton_init_i2c(void)
static inline void littleton_init_i2c(void)
static void __init littleton_init(void)
MACHINE_START(LITTLETON, "Marvell Form Factor Development Platform (aka Littleton)")
.boot_params	= 0xa0000100,
.map_io		= pxa3xx_map_io,
.nr_irqs	= LITTLETON_NR_IRQS,
.init_irq	= pxa3xx_init_irq,
.timer		= &pxa_timer,
.init_machine	= littleton_init,
MACHINE_END

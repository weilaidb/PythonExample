static unsigned long vpac270_pin_config[] __initdata = ;
#if defined(CONFIG_MTD_PHYSMAP) || defined(CONFIG_MTD_PHYSMAP_MODULE)
static struct mtd_partition vpac270_nor_partitions[] = ;
static struct physmap_flash_data vpac270_flash_data[] = ;
static struct resource vpac270_flash_resource = ;
static struct platform_device vpac270_flash = ;
static void __init vpac270_nor_init(void)
static inline void vpac270_nor_init(void)
#if defined(CONFIG_MTD_ONENAND) || defined(CONFIG_MTD_ONENAND_MODULE)
static struct mtd_partition vpac270_onenand_partitions[] = ;
static struct onenand_platform_data vpac270_onenand_info = ;
static struct resource vpac270_onenand_resources[] = ;
static struct platform_device vpac270_onenand = ;
static void __init vpac270_onenand_init(void)
static void __init vpac270_onenand_init(void)
#if defined(CONFIG_MMC_PXA) || defined(CONFIG_MMC_PXA_MODULE)
static struct pxamci_platform_data vpac270_mci_platform_data = ;
static void __init vpac270_mmc_init(void)
static inline void vpac270_mmc_init(void)
#if defined(CONFIG_KEYBOARD_GPIO) || defined(CONFIG_KEYBOARD_GPIO_MODULE)
static struct gpio_keys_button vpac270_pxa_buttons[] = ;
static struct gpio_keys_platform_data vpac270_pxa_keys_data = ;
static struct platform_device vpac270_pxa_keys = ;
static void __init vpac270_keys_init(void)
static inline void vpac270_keys_init(void)
#if defined(CONFIG_LEDS_GPIO) || defined(CONFIG_LEDS_GPIO_MODULE)
struct gpio_led vpac270_gpio_leds[] = ;
static struct gpio_led_platform_data vpac270_gpio_led_info = ;
static struct platform_device vpac270_leds = ;
static void __init vpac270_leds_init(void)
static inline void vpac270_leds_init(void)
#if defined(CONFIG_USB_OHCI_HCD) || defined(CONFIG_USB_OHCI_HCD_MODULE)
static int vpac270_ohci_init(struct device *dev)
static struct pxaohci_platform_data vpac270_ohci_info = ;
static void __init vpac270_uhc_init(void)
static inline void vpac270_uhc_init(void)
#if defined(CONFIG_USB_GADGET_PXA27X)||defined(CONFIG_USB_GADGET_PXA27X_MODULE)
static struct gpio_vbus_mach_info vpac270_gpio_vbus_info = ;
static struct platform_device vpac270_gpio_vbus = ;
static void vpac270_udc_command(int cmd)
static struct pxa2xx_udc_mach_info vpac270_udc_info __initdata = ;
static void __init vpac270_udc_init(void)
static inline void vpac270_udc_init(void)
#if defined(CONFIG_DM9000) || defined(CONFIG_DM9000_MODULE)
static struct resource vpac270_dm9000_resources[] = ;
static struct dm9000_plat_data vpac270_dm9000_platdata = ;
static struct platform_device vpac270_dm9000_device = ;
static void __init vpac270_eth_init(void)
static inline void vpac270_eth_init(void)
#if	defined(CONFIG_TOUCHSCREEN_UCB1400) || \
defined(CONFIG_TOUCHSCREEN_UCB1400_MODULE)
static pxa2xx_audio_ops_t vpac270_ac97_pdata = ;
static struct ucb1400_pdata vpac270_ucb1400_pdata = ;
static struct platform_device vpac270_ucb1400_device = ;
static void __init vpac270_ts_init(void)
static inline void vpac270_ts_init(void)
#if defined(CONFIG_RTC_DRV_DS1307) || defined(CONFIG_RTC_DRV_DS1307_MODULE)
static struct i2c_board_info __initdata vpac270_i2c_devs[] = ;
static void __init vpac270_rtc_init(void)
static inline void vpac270_rtc_init(void)
#if defined(CONFIG_FB_PXA) || defined(CONFIG_FB_PXA_MODULE)
static struct pxafb_mode_info vpac270_lcd_modes[] = ;
static struct pxafb_mach_info vpac270_lcd_screen = ;
static void vpac270_lcd_power(int on, struct fb_var_screeninfo *info)
static void __init vpac270_lcd_init(void)
static inline void vpac270_lcd_init(void)
#if defined(CONFIG_PATA_PXA) || defined(CONFIG_PATA_PXA_MODULE)
static struct pata_pxa_pdata vpac270_pata_pdata = ;
static struct resource vpac270_ide_resources[] = ;
static struct platform_device vpac270_ide_device = ;
static void __init vpac270_ide_init(void)
static inline void vpac270_ide_init(void)
#if defined(CONFIG_REGULATOR_MAX1586) || \
defined(CONFIG_REGULATOR_MAX1586_MODULE)
static struct regulator_consumer_supply vpac270_max1587a_consumers[] = ;
static struct regulator_init_data vpac270_max1587a_v3_info = ;
static struct max1586_subdev_data vpac270_max1587a_subdevs[] = ;
static struct max1586_platform_data vpac270_max1587a_info = ;
static struct i2c_board_info __initdata vpac270_pi2c_board_info[] = ;
static void __init vpac270_pmic_init(void)
static inline void vpac270_pmic_init(void)
static void __init vpac270_init(void)
MACHINE_START(VPAC270, "Voipac PXA270")
.boot_params	= 0xa0000100,
.map_io		= pxa27x_map_io,
.init_irq	= pxa27x_init_irq,
.timer		= &pxa_timer,
.init_machine	= vpac270_init
MACHINE_END

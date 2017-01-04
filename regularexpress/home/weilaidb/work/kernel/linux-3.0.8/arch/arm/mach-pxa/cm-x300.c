#define CM_X300_ETH_PHYS	0x08000010
#define GPIO82_MMC_IRQ		(82)
#define GPIO85_MMC_WP		(85)
#define	CM_X300_MMC_IRQ		IRQ_GPIO(GPIO82_MMC_IRQ)
#define GPIO95_RTC_CS		(95)
#define GPIO96_RTC_WR		(96)
#define GPIO97_RTC_RD		(97)
#define GPIO98_RTC_IO		(98)
#define GPIO_ULPI_PHY_RST	(127)
static mfp_cfg_t cm_x3xx_mfp_cfg[] __initdata = ;
static mfp_cfg_t cm_x3xx_rev_lt130_mfp_cfg[] __initdata = ;
static mfp_cfg_t cm_x3xx_rev_ge130_mfp_cfg[] __initdata = ;
static mfp_cfg_t cm_x310_mfp_cfg[] __initdata = ;
#if defined(CONFIG_DM9000) || defined(CONFIG_DM9000_MODULE)
static struct resource dm9000_resources[] = ;
static struct dm9000_plat_data cm_x300_dm9000_platdata = ;
static struct platform_device dm9000_device = ;
static void __init cm_x300_init_dm9000(void)
static inline void cm_x300_init_dm9000(void)
#if defined(CONFIG_FB_PXA) || defined(CONFIG_FB_PXA_MODULE)
static struct pxafb_mode_info cm_x300_lcd_modes[] = ;
static struct pxafb_mach_info cm_x300_lcd = ;
static void __init cm_x300_init_lcd(void)
static inline void cm_x300_init_lcd(void)
#if defined(CONFIG_BACKLIGHT_PWM) || defined(CONFIG_BACKLIGHT_PWM_MODULE)
static struct platform_pwm_backlight_data cm_x300_backlight_data = ;
static struct platform_device cm_x300_backlight_device = ;
static void cm_x300_init_bl(void)
static inline void cm_x300_init_bl(void)
#if defined(CONFIG_SPI_GPIO) || defined(CONFIG_SPI_GPIO_MODULE)
#define GPIO_LCD_BASE	(144)
#define GPIO_LCD_DIN	(GPIO_LCD_BASE + 8)
#define GPIO_LCD_DOUT	(GPIO_LCD_BASE + 9)
#define GPIO_LCD_SCL	(GPIO_LCD_BASE + 10)
#define GPIO_LCD_CS	(GPIO_LCD_BASE + 11)
#define LCD_SPI_BUS_NUM	(1)
static struct spi_gpio_platform_data cm_x300_spi_gpio_pdata = ;
static struct platform_device cm_x300_spi_gpio = ;
static struct tdo24m_platform_data cm_x300_tdo24m_pdata = ;
static struct spi_board_info cm_x300_spi_devices[] __initdata = ;
static void __init cm_x300_init_spi(void)
static inline void cm_x300_init_spi(void)
#if defined(CONFIG_SND_PXA2XX_LIB_AC97)
static void __init cm_x300_init_ac97(void)
static inline void cm_x300_init_ac97(void)
#if defined(CONFIG_MTD_NAND_PXA3xx) || defined(CONFIG_MTD_NAND_PXA3xx_MODULE)
static struct mtd_partition cm_x300_nand_partitions[] = ;
static struct pxa3xx_nand_platform_data cm_x300_nand_info = ;
static void __init cm_x300_init_nand(void)
static inline void cm_x300_init_nand(void)
#if defined(CONFIG_MMC) || defined(CONFIG_MMC_MODULE)
static struct pxamci_platform_data cm_x300_mci_platform_data = ;
static int cm_x300_mci2_init(struct device *dev,
irq_handler_t cm_x300_detect_int,
void *data)
static void cm_x300_mci2_exit(struct device *dev, void *data)
static struct pxamci_platform_data cm_x300_mci2_platform_data = ;
static void __init cm_x300_init_mmc(void)
static inline void cm_x300_init_mmc(void)
#if defined(CONFIG_PXA310_ULPI)
static struct clk *pout_clk;
static int cm_x300_ulpi_phy_reset(void)
static inline int cm_x300_u2d_init(struct device *dev)
static void cm_x300_u2d_exit(struct device *dev)
static struct pxa3xx_u2d_platform_data cm_x300_u2d_platform_data = ;
static void cm_x300_init_u2d(void)
static inline void cm_x300_init_u2d(void)
#if defined(CONFIG_USB_OHCI_HCD) || defined(CONFIG_USB_OHCI_HCD_MODULE)
static int cm_x300_ohci_init(struct device *dev)
static struct pxaohci_platform_data cm_x300_ohci_platform_data = ;
static void __init cm_x300_init_ohci(void)
static inline void cm_x300_init_ohci(void)
#if defined(CONFIG_LEDS_GPIO) || defined(CONFIG_LEDS_GPIO_MODULE)
static struct gpio_led cm_x300_leds[] = ;
static struct gpio_led_platform_data cm_x300_gpio_led_pdata = ;
static struct platform_device cm_x300_led_device = ;
static void __init cm_x300_init_leds(void)
static inline void cm_x300_init_leds(void)
#if defined(CONFIG_I2C) || defined(CONFIG_I2C_MODULE)
static struct pca953x_platform_data cm_x300_gpio_ext_pdata_0 = ;
static struct pca953x_platform_data cm_x300_gpio_ext_pdata_1 = ;
static struct i2c_board_info cm_x300_gpio_ext_info[] = ;
static void __init cm_x300_init_i2c(void)
static inline void cm_x300_init_i2c(void)
#if defined(CONFIG_RTC_DRV_V3020) || defined(CONFIG_RTC_DRV_V3020_MODULE)
struct v3020_platform_data cm_x300_v3020_pdata = ;
static struct platform_device cm_x300_rtc_device = ;
static void __init cm_x300_init_rtc(void)
static inline void cm_x300_init_rtc(void)
struct power_supply_info cm_x300_psy_info = ;
static void cm_x300_battery_low(void)
static void cm_x300_battery_critical(void)
struct da9030_battery_info cm_x300_battery_info = ;
static struct regulator_consumer_supply buck2_consumers[] = ;
static struct regulator_init_data buck2_data = ;
struct da903x_subdev_info cm_x300_da9030_subdevs[] = ;
static struct da903x_platform_data cm_x300_da9030_info = ;
static struct i2c_board_info cm_x300_pmic_info = ;
static struct i2c_pxa_platform_data cm_x300_pwr_i2c_info = ;
static void __init cm_x300_init_da9030(void)
static void __init cm_x300_init_wi2wi(void)
static void __init cm_x300_init_mfp(void)
static void __init cm_x300_init(void)
static void __init cm_x300_fixup(struct machine_desc *mdesc, struct tag *tags,
char **cmdline, struct meminfo *mi)
MACHINE_START(CM_X300, "CM-X300 module")
.boot_params	= 0xa0000100,
.map_io		= pxa3xx_map_io,
.init_irq	= pxa3xx_init_irq,
.timer		= &pxa_timer,
.init_machine	= cm_x300_init,
.fixup		= cm_x300_fixup,
MACHINE_END

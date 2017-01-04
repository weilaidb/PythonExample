#define ADS7846_PENDOWN_GPIO	15
static void __init omap_nokia770_init_irq(void)
static const unsigned int nokia770_keymap[] = ;
static struct resource nokia770_kp_resources[] = ;
static const struct matrix_keymap_data nokia770_keymap_data = ;
static struct omap_kp_platform_data nokia770_kp_data = ;
static struct platform_device nokia770_kp_device = ;
static struct platform_device *nokia770_devices[] __initdata = ;
static void mipid_shutdown(struct mipid_platform_data *pdata)
static struct mipid_platform_data nokia770_mipid_platform_data = ;
static void __init mipid_dev_init(void)
static void __init ads7846_dev_init(void)
static int ads7846_get_pendown_state(void)
static struct ads7846_platform_data nokia770_ads7846_platform_data __initdata = ;
static struct spi_board_info nokia770_spi_board_info[] __initdata = ;
static struct hwa742_platform_data nokia770_hwa742_platform_data = ;
static void __init hwa742_dev_init(void)
static struct omap_usb_config nokia770_usb_config __initdata = ;
#if defined(CONFIG_MMC_OMAP) || defined(CONFIG_MMC_OMAP_MODULE)
#define NOKIA770_GPIO_MMC_POWER		41
#define NOKIA770_GPIO_MMC_SWITCH	23
static int nokia770_mmc_set_power(struct device *dev, int slot, int power_on,
int vdd)
static int nokia770_mmc_get_cover_state(struct device *dev, int slot)
static struct omap_mmc_platform_data nokia770_mmc2_data = ;
static struct omap_mmc_platform_data *nokia770_mmc_data[OMAP16XX_NR_MMC];
static void __init nokia770_mmc_init(void)
static inline void nokia770_mmc_init(void)
static void __init omap_nokia770_init(void)
static void __init omap_nokia770_map_io(void)
MACHINE_START(NOKIA770, "Nokia 770")
.boot_params	= 0x10000100,
.map_io		= omap_nokia770_map_io,
.reserve	= omap_reserve,
.init_irq	= omap_nokia770_init_irq,
.init_machine	= omap_nokia770_init,
.timer		= &omap_timer,
MACHINE_END

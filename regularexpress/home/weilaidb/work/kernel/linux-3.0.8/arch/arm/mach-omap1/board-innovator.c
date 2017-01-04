#define INNOVATOR1610_ETHR_START	0x04000300
static const unsigned int innovator_keymap[] = ;
static struct mtd_partition innovator_partitions[] = ;
static struct physmap_flash_data innovator_flash_data = ;
static struct resource innovator_flash_resource = ;
static struct platform_device innovator_flash_device = ;
static struct resource innovator_kp_resources[] = ;
static const struct matrix_keymap_data innovator_keymap_data = ;
static struct omap_kp_platform_data innovator_kp_data = ;
static struct platform_device innovator_kp_device = ;
static struct smc91x_platdata innovator_smc91x_info = ;
static struct map_desc innovator1510_io_desc[] __initdata = ;
static struct resource innovator1510_smc91x_resources[] = ;
static struct platform_device innovator1510_smc91x_device = ;
static struct platform_device innovator1510_lcd_device = ;
static struct platform_device innovator1510_spi_device = ;
static struct platform_device *innovator1510_devices[] __initdata = ;
static int innovator_get_pendown_state(void)
static const struct ads7846_platform_data innovator1510_ts_info = ;
static struct spi_board_info __initdata innovator1510_boardinfo[] = ;
static struct resource innovator1610_smc91x_resources[] = ;
static struct platform_device innovator1610_smc91x_device = ;
static struct platform_device innovator1610_lcd_device = ;
static struct platform_device *innovator1610_devices[] __initdata = ;
static void __init innovator_init_smc91x(void)
static void __init innovator_init_irq(void)
static struct omap_usb_config innovator1510_usb_config __initdata = ;
static struct omap_lcd_config innovator1510_lcd_config __initdata = ;
static struct omap_usb_config h2_usb_config __initdata = ;
static struct omap_lcd_config innovator1610_lcd_config __initdata = ;
#if defined(CONFIG_MMC_OMAP) || defined(CONFIG_MMC_OMAP_MODULE)
static int mmc_set_power(struct device *dev, int slot, int power_on,
int vdd)
static struct omap_mmc_platform_data mmc1_data = ;
static struct omap_mmc_platform_data *mmc_data[OMAP16XX_NR_MMC];
static void __init innovator_mmc_init(void)
static inline void innovator_mmc_init(void)
static struct omap_board_config_kernel innovator_config[] = ;
static void __init innovator_init(void)
static void __init innovator_map_io(void)
MACHINE_START(OMAP_INNOVATOR, "TI-Innovator")
.boot_params	= 0x10000100,
.map_io		= innovator_map_io,
.reserve	= omap_reserve,
.init_irq	= innovator_init_irq,
.init_machine	= innovator_init,
.timer		= &omap_timer,
MACHINE_END

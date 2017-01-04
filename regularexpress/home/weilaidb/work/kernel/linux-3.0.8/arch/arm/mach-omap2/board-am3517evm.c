#define AM35XX_EVM_MDIO_FREQUENCY	(1000000)
static struct mdio_platform_data am3517_evm_mdio_pdata = ;
static struct resource am3517_mdio_resources[] = ;
static struct platform_device am3517_mdio_device = ;
static struct emac_platform_data am3517_evm_emac_pdata = ;
static struct resource am3517_emac_resources[] = ;
static struct platform_device am3517_emac_device = ;
static void am3517_enable_ethernet_int(void)
static void am3517_disable_ethernet_int(void)
static void am3517_evm_ethernet_init(struct emac_platform_data *pdata)
#define LCD_PANEL_PWR		176
#define LCD_PANEL_BKLIGHT_PWR	182
#define LCD_PANEL_PWM		181
static struct i2c_board_info __initdata am3517evm_i2c1_boardinfo[] = ;
#define GPIO_RTCS35390A_IRQ	55
static void __init am3517_evm_rtc_init(void)
static struct pca953x_platform_data am3517evm_gpio_expander_info_0 = ;
static struct i2c_board_info __initdata am3517evm_i2c2_boardinfo[] = ;
static struct pca953x_platform_data am3517evm_ui_gpio_expander_info_1 = ;
static struct pca953x_platform_data am3517evm_ui_gpio_expander_info_2 = ;
static struct i2c_board_info __initdata am3517evm_i2c3_boardinfo[] = ;
static int __init am3517_evm_i2c_init(void)
static int lcd_enabled;
static int dvi_enabled;
#if defined(CONFIG_PANEL_SHARP_LQ043T1DG01) || \
defined(CONFIG_PANEL_SHARP_LQ043T1DG01_MODULE)
static struct gpio am3517_evm_dss_gpios[] __initdata = ;
static void __init am3517_evm_display_init(void)
static void __init am3517_evm_display_init(void)
static int am3517_evm_panel_enable_lcd(struct omap_dss_device *dssdev)
static void am3517_evm_panel_disable_lcd(struct omap_dss_device *dssdev)
static struct panel_generic_dpi_data lcd_panel = ;
static struct omap_dss_device am3517_evm_lcd_device = ;
static int am3517_evm_panel_enable_tv(struct omap_dss_device *dssdev)
static void am3517_evm_panel_disable_tv(struct omap_dss_device *dssdev)
static struct omap_dss_device am3517_evm_tv_device = ;
static int am3517_evm_panel_enable_dvi(struct omap_dss_device *dssdev)
static void am3517_evm_panel_disable_dvi(struct omap_dss_device *dssdev)
static struct panel_generic_dpi_data dvi_panel = ;
static struct omap_dss_device am3517_evm_dvi_device = ;
static struct omap_dss_device *am3517_evm_dss_devices[] = ;
static struct omap_dss_board_info am3517_evm_dss_data = ;
static void __init am3517_evm_init_early(void)
static struct omap_musb_board_data musb_board_data = ;
static __init void am3517_evm_musb_init(void)
static const struct usbhs_omap_board_data usbhs_bdata __initconst = ;
static struct omap_board_mux board_mux[] __initdata = ;
static struct resource am3517_hecc_resources[] = ;
static struct platform_device am3517_hecc_device = ;
static struct ti_hecc_platform_data am3517_evm_hecc_pdata = ;
static void am3517_evm_hecc_init(struct ti_hecc_platform_data *pdata)
static struct omap_board_config_kernel am3517_evm_config[] __initdata = ;
static void __init am3517_evm_init(void)
MACHINE_START(OMAP3517EVM, "OMAP3517/AM3517 EVM")
.boot_params	= 0x80000100,
.reserve	= omap_reserve,
.map_io		= omap3_map_io,
.init_early	= am3517_evm_init_early,
.init_irq	= omap_init_irq,
.init_machine	= am3517_evm_init,
.timer		= &omap_timer,
MACHINE_END

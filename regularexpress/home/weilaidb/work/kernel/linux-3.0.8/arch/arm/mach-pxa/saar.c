#define GPIO_LCD_RESET		(16)
static mfp_cfg_t saar_mfp_cfg[] __initdata = ;
#define SAAR_ETH_PHYS	(0x14000000)
static struct resource smc91x_resources[] = ;
static struct smc91x_platdata saar_smc91x_info = ;
static struct platform_device smc91x_device = ;
#if defined(CONFIG_FB_PXA) || defined(CONFIG_FB_PXA_MODULE)
static uint16_t lcd_power_on[] = ;
static uint16_t lcd_panel_on[] = ;
static uint16_t lcd_panel_off[] = ;
static uint16_t lcd_power_off[] = ;
static uint16_t update_framedata[] = ;
static void ltm022a97a_lcd_power(int on, struct fb_var_screeninfo *var)
static void ltm022a97a_update(struct fb_info *info)
static struct pxafb_mode_info toshiba_ltm022a97a_modes[] = ;
static struct pxafb_mach_info saar_lcd_info = ;
static void __init saar_init_lcd(void)
static inline void saar_init_lcd(void)
#if defined(CONFIG_I2C_PXA) || defined(CONFIG_I2C_PXA_MODULE)
static struct da9034_backlight_pdata saar_da9034_backlight = ;
static struct da903x_subdev_info saar_da9034_subdevs[] = ;
static struct da903x_platform_data saar_da9034_info = ;
static struct i2c_board_info saar_i2c_info[] = ;
static void __init saar_init_i2c(void)
static inline void saar_init_i2c(void)
#if defined(CONFIG_MTD_ONENAND) || defined(CONFIG_MTD_ONENAND_MODULE)
static struct mtd_partition saar_onenand_partitions[] = ;
static struct onenand_platform_data saar_onenand_info = ;
#define SMC_CS0_PHYS_BASE	(0x10000000)
static struct resource saar_resource_onenand[] = ;
static struct platform_device saar_device_onenand = ;
static void __init saar_init_onenand(void)
static void __init saar_init_onenand(void)
static void __init saar_init(void)
MACHINE_START(SAAR, "PXA930 Handheld Platform (aka SAAR)")
.boot_params    = 0xa0000100,
.map_io         = pxa3xx_map_io,
.init_irq       = pxa3xx_init_irq,
.timer          = &pxa_timer,
.init_machine   = saar_init,
MACHINE_END

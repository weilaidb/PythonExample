#define SMDKV210_UCON_DEFAULT	(S3C2410_UCON_TXILEVEL |	\
S3C2410_UCON_RXILEVEL |	\
S3C2410_UCON_TXIRQMODE |	\
S3C2410_UCON_RXIRQMODE |	\
S3C2410_UCON_RXFIFO_TOI |	\
S3C2443_UCON_RXERR_IRQEN)
#define SMDKV210_ULCON_DEFAULT	S3C2410_LCON_CS8
#define SMDKV210_UFCON_DEFAULT	(S3C2410_UFCON_FIFOMODE |	\
S5PV210_UFCON_TXTRIG4 |	\
S5PV210_UFCON_RXTRIG4)
static struct s3c2410_uartcfg smdkv210_uartcfgs[] __initdata = ;
static struct s3c_ide_platdata smdkv210_ide_pdata __initdata = ;
static uint32_t smdkv210_keymap[] __initdata = ;
static struct matrix_keymap_data smdkv210_keymap_data __initdata = ;
static struct samsung_keypad_platdata smdkv210_keypad_data __initdata = ;
static struct resource smdkv210_dm9000_resources[] = ;
static struct dm9000_plat_data smdkv210_dm9000_platdata = ;
struct platform_device smdkv210_dm9000 = ;
static void smdkv210_lte480wv_set_power(struct plat_lcd_data *pd,
unsigned int power)
static struct plat_lcd_data smdkv210_lcd_lte480wv_data = ;
static struct platform_device smdkv210_lcd_lte480wv = ;
static struct s3c_fb_pd_win smdkv210_fb_win0 = ;
static struct s3c_fb_platdata smdkv210_lcd0_pdata __initdata = ;
static int smdkv210_backlight_init(struct device *dev)
static void smdkv210_backlight_exit(struct device *dev)
static struct platform_pwm_backlight_data smdkv210_backlight_data = ;
static struct platform_device smdkv210_backlight_device = ;
static struct platform_device *smdkv210_devices[] __initdata = ;
static void __init smdkv210_dm9000_init(void)
static struct i2c_board_info smdkv210_i2c_devs0[] __initdata = ;
static struct i2c_board_info smdkv210_i2c_devs1[] __initdata = ;
static struct i2c_board_info smdkv210_i2c_devs2[] __initdata = ;
static struct s3c2410_ts_mach_info s3c_ts_platform __initdata = ;
static void __init smdkv210_map_io(void)
static void __init smdkv210_machine_init(void)
MACHINE_START(SMDKV210, "SMDKV210")
.boot_params	= S5P_PA_SDRAM + 0x100,
.init_irq	= s5pv210_init_irq,
.map_io		= smdkv210_map_io,
.init_machine	= smdkv210_machine_init,
.timer		= &s5p_timer,
MACHINE_END

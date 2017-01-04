#define SMDKC100_UCON_DEFAULT	(S3C2410_UCON_TXILEVEL |	\
S3C2410_UCON_RXILEVEL |	\
S3C2410_UCON_TXIRQMODE |	\
S3C2410_UCON_RXIRQMODE |	\
S3C2410_UCON_RXFIFO_TOI |	\
S3C2443_UCON_RXERR_IRQEN)
#define SMDKC100_ULCON_DEFAULT	S3C2410_LCON_CS8
#define SMDKC100_UFCON_DEFAULT	(S3C2410_UFCON_FIFOMODE |	\
S3C2440_UFCON_RXTRIG8 |	\
S3C2440_UFCON_TXTRIG16)
static struct s3c2410_uartcfg smdkc100_uartcfgs[] __initdata = ;
static struct i2c_board_info i2c_devs0[] __initdata = ;
static struct i2c_board_info i2c_devs1[] __initdata = ;
static void smdkc100_lcd_power_set(struct plat_lcd_data *pd,
unsigned int power)
static struct plat_lcd_data smdkc100_lcd_power_data = ;
static struct platform_device smdkc100_lcd_powerdev = ;
static struct s3c_fb_pd_win smdkc100_fb_win0 = ;
static struct s3c_fb_platdata smdkc100_lcd_pdata __initdata = ;
static struct s3c_ide_platdata smdkc100_ide_pdata __initdata = ;
static uint32_t smdkc100_keymap[] __initdata = ;
static struct matrix_keymap_data smdkc100_keymap_data __initdata = ;
static struct samsung_keypad_platdata smdkc100_keypad_data __initdata = ;
static int smdkc100_backlight_init(struct device *dev)
static void smdkc100_backlight_exit(struct device *dev)
static struct platform_pwm_backlight_data smdkc100_backlight_data = ;
static struct platform_device smdkc100_backlight_device = ;
static struct platform_device *smdkc100_devices[] __initdata = ;
static struct s3c2410_ts_mach_info s3c_ts_platform __initdata = ;
static void __init smdkc100_map_io(void)
static void __init smdkc100_machine_init(void)
MACHINE_START(SMDKC100, "SMDKC100")
.boot_params	= S5P_PA_SDRAM + 0x100,
.init_irq	= s5pc100_init_irq,
.map_io		= smdkc100_map_io,
.init_machine	= smdkc100_machine_init,
.timer		= &s3c24xx_timer,
MACHINE_END

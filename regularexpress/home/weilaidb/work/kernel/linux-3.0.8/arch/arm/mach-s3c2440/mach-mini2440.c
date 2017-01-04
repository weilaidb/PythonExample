#define MACH_MINI2440_DM9K_BASE (S3C2410_CS4 + 0x300)
static struct map_desc mini2440_iodesc[] __initdata = ;
#define UCON S3C2410_UCON_DEFAULT
#define ULCON S3C2410_LCON_CS8 | S3C2410_LCON_PNONE | S3C2410_LCON_STOPB
#define UFCON S3C2410_UFCON_RXTRIG8 | S3C2410_UFCON_FIFOMODE
static struct s3c2410_uartcfg mini2440_uartcfgs[] __initdata = ;
static struct s3c2410_udc_mach_info mini2440_udc_cfg __initdata = ;
#define _LCD_DECLARE(_clock,_xres,margin_left,margin_right,hsync, \
_yres,margin_top,margin_bottom,vsync, refresh) \
.width = _xres, \
.xres = _xres, \
.height = _yres, \
.yres = _yres, \
.left_margin	= margin_left,	\
.right_margin	= margin_right,	\
.upper_margin	= margin_top,	\
.lower_margin	= margin_bottom,	\
.hsync_len	= hsync,	\
.vsync_len	= vsync,	\
.pixclock	= ((_clock*100000000000LL) /	\
((refresh) * \
(hsync + margin_left + _xres + margin_right) * \
(vsync + margin_top + _yres + margin_bottom))), \
.bpp		= 16,\
.type		= (S3C2410_LCDCON1_TFT16BPP |\
S3C2410_LCDCON1_TFT)
static struct s3c2410fb_display mini2440_lcd_cfg[] __initdata = ;
#define S3C2410_GPCCON_MASK(x)	(3 << ((x) * 2))
#define S3C2410_GPDCON_MASK(x)	(3 << ((x) * 2))
static struct s3c2410fb_mach_info mini2440_fb_info __initdata = ;
static struct s3c24xx_mci_pdata mini2440_mmc_cfg __initdata = ;
static struct mtd_partition mini2440_default_nand_part[] __initdata = ;
static struct s3c2410_nand_set mini2440_nand_sets[] __initdata = ;
static struct s3c2410_platform_nand mini2440_nand_info __initdata = ;
static struct resource mini2440_dm9k_resource[] = ;
static struct dm9000_plat_data mini2440_dm9k_pdata = ;
static struct platform_device mini2440_device_eth = ;
static struct gpio_keys_button mini2440_buttons[] = ;
static struct gpio_keys_platform_data mini2440_button_data = ;
static struct platform_device mini2440_button_device = ;
static struct s3c24xx_led_platdata mini2440_led1_pdata = ;
static struct s3c24xx_led_platdata mini2440_led2_pdata = ;
static struct s3c24xx_led_platdata mini2440_led3_pdata = ;
static struct s3c24xx_led_platdata mini2440_led4_pdata = ;
static struct s3c24xx_led_platdata mini2440_led_backlight_pdata = ;
static struct platform_device mini2440_led1 = ;
static struct platform_device mini2440_led2 = ;
static struct platform_device mini2440_led3 = ;
static struct platform_device mini2440_led4 = ;
static struct platform_device mini2440_led_backlight = ;
static struct s3c24xx_uda134x_platform_data mini2440_audio_pins = ;
static struct platform_device mini2440_audio = ;
static struct at24_platform_data at24c08 = ;
static struct i2c_board_info mini2440_i2c_devs[] __initdata = ;
static struct platform_device uda1340_codec = ;
static struct platform_device *mini2440_devices[] __initdata = ;
static void __init mini2440_map_io(void)
static char mini2440_features_str[12] __initdata = "0tb";
static int __init mini2440_features_setup(char *str)
__setup("mini2440=", mini2440_features_setup);
#define FEATURE_SCREEN (1 << 0)
#define FEATURE_BACKLIGHT (1 << 1)
#define FEATURE_TOUCH (1 << 2)
#define FEATURE_CAMERA (1 << 3)
struct mini2440_features_t ;
static void __init mini2440_parse_features(
struct mini2440_features_t * features,
const char * features_str )
static void __init mini2440_init(void)
MACHINE_START(MINI2440, "MINI2440")
.boot_params	= S3C2410_SDRAM_PA + 0x100,
.map_io		= mini2440_map_io,
.init_machine	= mini2440_init,
.init_irq	= s3c24xx_init_irq,
.timer		= &s3c24xx_timer,
MACHINE_END

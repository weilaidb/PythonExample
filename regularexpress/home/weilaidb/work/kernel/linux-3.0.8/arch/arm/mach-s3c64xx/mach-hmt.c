#define UCON S3C2410_UCON_DEFAULT
#define ULCON (S3C2410_LCON_CS8 | S3C2410_LCON_PNONE)
#define UFCON (S3C2410_UFCON_RXTRIG8 | S3C2410_UFCON_FIFOMODE)
static struct s3c2410_uartcfg hmt_uartcfgs[] __initdata = ;
static int hmt_bl_init(struct device *dev)
static int hmt_bl_notify(struct device *dev, int brightness)
static void hmt_bl_exit(struct device *dev)
static struct platform_pwm_backlight_data hmt_backlight_data = ;
static struct platform_device hmt_backlight_device = ;
static struct s3c_fb_pd_win hmt_fb_win0 = ;
static struct s3c_fb_platdata hmt_lcd_pdata __initdata = ;
static struct mtd_partition hmt_nand_part[] = ;
static struct s3c2410_nand_set hmt_nand_sets[] = ;
static struct s3c2410_platform_nand hmt_nand_info = ;
static struct gpio_led hmt_leds[] = ;
static struct gpio_led_platform_data hmt_led_data = ;
static struct platform_device hmt_leds_device = ;
static struct map_desc hmt_iodesc[] = ;
static struct platform_device *hmt_devices[] __initdata = ;
static void __init hmt_map_io(void)
static void __init hmt_machine_init(void)
MACHINE_START(HMT, "Airgoo-HMT")
.boot_params	= S3C64XX_PA_SDRAM + 0x100,
.init_irq	= s3c6410_init_irq,
.map_io		= hmt_map_io,
.init_machine	= hmt_machine_init,
.timer		= &s3c24xx_timer,
MACHINE_END

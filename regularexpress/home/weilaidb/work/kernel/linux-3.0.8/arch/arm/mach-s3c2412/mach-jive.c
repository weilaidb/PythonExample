static struct map_desc jive_iodesc[] __initdata = ;
#define UCON S3C2410_UCON_DEFAULT
#define ULCON S3C2410_LCON_CS8 | S3C2410_LCON_PNONE
#define UFCON S3C2410_UFCON_RXTRIG8 | S3C2410_UFCON_FIFOMODE
static struct s3c2410_uartcfg jive_uartcfgs[] = ;
static struct mtd_partition __initdata jive_imageA_nand_part[] = ;
static struct mtd_partition __initdata jive_imageB_nand_part[] = ;
static struct s3c2410_nand_set __initdata jive_nand_sets[] = ;
static struct s3c2410_platform_nand __initdata jive_nand_info = ;
static int __init jive_mtdset(char *options)
__setup("mtdset=", jive_mtdset);
#define LCD_XRES	 (240)
#define LCD_YRES	 (320)
#define LCD_LEFT_MARGIN  (12)
#define LCD_RIGHT_MARGIN (12)
#define LCD_LOWER_MARGIN (12)
#define LCD_UPPER_MARGIN (12)
#define LCD_VSYNC	 (2)
#define LCD_HSYNC	 (2)
#define LCD_REFRESH	 (60)
#define LCD_HTOT (LCD_HSYNC + LCD_LEFT_MARGIN + LCD_XRES + LCD_RIGHT_MARGIN)
#define LCD_VTOT (LCD_VSYNC + LCD_LOWER_MARGIN + LCD_YRES + LCD_UPPER_MARGIN)
static struct s3c2410fb_display jive_vgg2432a4_display[] = ;
#define S3C2410_GPCCON_MASK(x)	(3 << ((x) * 2))
#define S3C2410_GPDCON_MASK(x)	(3 << ((x) * 2))
static struct s3c2410fb_mach_info jive_lcd_config = ;
static void jive_lcm_reset(unsigned int set)
#undef LCD_UPPER_MARGIN
#define LCD_UPPER_MARGIN 2
static struct ili9320_platdata jive_lcm_config = ;
static void jive_lcd_spi_chipselect(struct s3c2410_spigpio_info *spi, int cs)
static struct s3c2410_spigpio_info jive_lcd_spi = ;
static struct platform_device jive_device_lcdspi = ;
static void jive_wm8750_chipselect(struct s3c2410_spigpio_info *spi, int cs)
static struct s3c2410_spigpio_info jive_wm8750_spi = ;
static struct platform_device jive_device_wm8750 = ;
static struct spi_board_info __initdata jive_spi_devs[] = ;
static struct s3c2410_platform_i2c jive_i2c_cfg __initdata = ;
static struct i2c_board_info jive_i2c_devs[] __initdata = ;
static struct platform_device *jive_devices[] __initdata = ;
static struct s3c2410_udc_mach_info jive_udc_cfg __initdata = ;
static int jive_pm_suspend(void)
static void jive_pm_resume(void)
#define jive_pm_suspend NULL
#define jive_pm_resume NULL
static struct syscore_ops jive_pm_syscore_ops = ;
static void __init jive_map_io(void)
static void jive_power_off(void)
static void __init jive_machine_init(void)
MACHINE_START(JIVE, "JIVE")
.boot_params	= S3C2410_SDRAM_PA + 0x100,
.init_irq	= s3c24xx_init_irq,
.map_io		= jive_map_io,
.init_machine	= jive_machine_init,
.timer		= &s3c24xx_timer,
MACHINE_END

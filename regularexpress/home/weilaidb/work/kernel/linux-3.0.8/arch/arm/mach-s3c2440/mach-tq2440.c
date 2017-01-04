static struct map_desc smdk2440_iodesc[] __initdata = ;
#define UCON S3C2410_UCON_DEFAULT | S3C2410_UCON_UCLK
#define ULCON S3C2410_LCON_CS8 | S3C2410_LCON_PNONE | S3C2410_LCON_STOPB
#define UFCON S3C2410_UFCON_RXTRIG8 | S3C2410_UFCON_FIFOMODE
static struct s3c2410_uartcfg smdk2440_uartcfgs[] __initdata = ;
static struct s3c2410fb_display smdk2440_lcd_cfg __initdata = ;
static struct s3c2410fb_mach_info smdk2440_fb_info __initdata = ;
static struct platform_device *smdk2440_devices[] __initdata = ;
static void __init smdk2440_map_io(void)
static void __init smdk2440_machine_init(void)
MACHINE_START(S3C2440, "SMDK2440")
.boot_params	= S3C2410_SDRAM_PA + 0x100,
.init_irq	= s3c24xx_init_irq,
.map_io		= smdk2440_map_io,
.init_machine	= smdk2440_machine_init,
.timer		= &s3c24xx_timer,
MACHINE_END

#define COPYRIGHT ", Copyright 2004-2008 Simtec Electronics"
#define VA_C5(item) ((unsigned long)(item) + BAST_VAM_CS5)
#define VA_C4(item) ((unsigned long)(item) + BAST_VAM_CS4)
#define VA_C3(item) ((unsigned long)(item) + BAST_VAM_CS3)
#define VA_C2(item) ((unsigned long)(item) + BAST_VAM_CS2)
#define PA_CS2(item) (__phys_to_pfn((item) + S3C2410_CS2))
#define PA_CS3(item) (__phys_to_pfn((item) + S3C2410_CS3))
#define PA_CS4(item) (__phys_to_pfn((item) + S3C2410_CS4))
#define PA_CS5(item) (__phys_to_pfn((item) + S3C2410_CS5))
static struct map_desc bast_iodesc[] __initdata = ;
#define UCON S3C2410_UCON_DEFAULT | S3C2410_UCON_UCLK
#define ULCON S3C2410_LCON_CS8 | S3C2410_LCON_PNONE | S3C2410_LCON_STOPB
#define UFCON S3C2410_UFCON_RXTRIG8 | S3C2410_UFCON_FIFOMODE
static struct s3c24xx_uart_clksrc bast_serial_clocks[] = ;
static struct s3c2410_uartcfg bast_uartcfgs[] __initdata = ;
static int bast_pm_suspend(void)
static void bast_pm_resume(void)
#define bast_pm_suspend NULL
#define bast_pm_resume NULL
static struct syscore_ops bast_pm_syscore_ops = ;
static int smartmedia_map[] = ;
static int chip0_map[] = ;
static int chip1_map[] = ;
static int chip2_map[] = ;
static struct mtd_partition __initdata bast_default_nand_part[] = ;
static struct s3c2410_nand_set __initdata bast_nand_sets[] = ;
static void bast_nand_select(struct s3c2410_nand_set *set, int slot)
static struct s3c2410_platform_nand __initdata bast_nand_info = ;
static struct resource bast_dm9k_resource[] = ;
static struct dm9000_plat_data bast_dm9k_platdata = ;
static struct platform_device bast_device_dm9k = ;
#define SERIAL_BASE  (S3C2410_CS2 + BAST_PA_SUPERIO)
#define SERIAL_FLAGS (UPF_BOOT_AUTOCONF | UPF_IOREMAP | UPF_SHARE_IRQ)
#define SERIAL_CLK   (1843200)
static struct plat_serial8250_port bast_sio_data[] = ;
static struct platform_device bast_sio = ;
static struct s3c2410_platform_i2c __initdata bast_i2c_info = ;
static struct ax_plat_data bast_asix_platdata = ;
static struct resource bast_asix_resource[] = ;
static struct platform_device bast_device_asix = ;
static struct resource bast_asixpp_resource[] = ;
static struct platform_device bast_device_axpp = ;
static struct s3c2410fb_display __initdata bast_lcd_info[] = ;
static struct s3c2410fb_mach_info __initdata bast_fb_info = ;
static struct i2c_board_info bast_i2c_devs[] __initdata = ;
static struct s3c_hwmon_pdata bast_hwmon_info = ;
static struct platform_device *bast_devices[] __initdata = ;
static struct clk *bast_clocks[] __initdata = ;
static struct s3c_cpufreq_board __initdata bast_cpufreq = ;
static struct s3c24xx_audio_simtec_pdata __initdata bast_audio = ;
static void __init bast_map_io(void)
static void __init bast_init(void)
MACHINE_START(BAST, "Simtec-BAST")
.boot_params	= S3C2410_SDRAM_PA + 0x100,
.map_io		= bast_map_io,
.init_irq	= s3c24xx_init_irq,
.init_machine	= bast_init,
.timer		= &s3c24xx_timer,
MACHINE_END

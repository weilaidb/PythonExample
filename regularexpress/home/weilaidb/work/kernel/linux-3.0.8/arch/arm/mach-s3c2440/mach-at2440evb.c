static struct map_desc at2440evb_iodesc[] __initdata = ;
#define UCON S3C2410_UCON_DEFAULT
#define ULCON (S3C2410_LCON_CS8 | S3C2410_LCON_PNONE)
#define UFCON (S3C2410_UFCON_RXTRIG8 | S3C2410_UFCON_FIFOMODE)
static struct s3c24xx_uart_clksrc at2440evb_serial_clocks[] = ;
static struct s3c2410_uartcfg at2440evb_uartcfgs[] __initdata = ;
static struct mtd_partition __initdata at2440evb_default_nand_part[] = ;
static struct s3c2410_nand_set __initdata at2440evb_nand_sets[] = ;
static struct s3c2410_platform_nand __initdata at2440evb_nand_info = ;
static struct resource at2440evb_dm9k_resource[] = ;
static struct dm9000_plat_data at2440evb_dm9k_pdata = ;
static struct platform_device at2440evb_device_eth = ;
static struct s3c24xx_mci_pdata at2440evb_mci_pdata __initdata = ;
static struct s3c2410fb_display at2440evb_lcd_cfg __initdata = ;
static struct s3c2410fb_mach_info at2440evb_fb_info __initdata = ;
static struct platform_device *at2440evb_devices[] __initdata = ;
static void __init at2440evb_map_io(void)
static void __init at2440evb_init(void)
MACHINE_START(AT2440EVB, "AT2440EVB")
.boot_params	= S3C2410_SDRAM_PA + 0x100,
.map_io		= at2440evb_map_io,
.init_machine	= at2440evb_init,
.init_irq	= s3c24xx_init_irq,
.timer		= &s3c24xx_timer,
MACHINE_END

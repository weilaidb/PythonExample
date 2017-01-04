static struct map_desc rx3715_iodesc[] __initdata = ;
static struct s3c24xx_uart_clksrc rx3715_serial_clocks[] = ;
static struct s3c2410_uartcfg rx3715_uartcfgs[] = ;
static struct s3c2410fb_display rx3715_lcdcfg __initdata = ;
static struct s3c2410fb_mach_info rx3715_fb_info __initdata = ;
static struct mtd_partition __initdata rx3715_nand_part[] = ;
static struct s3c2410_nand_set __initdata rx3715_nand_sets[] = ;
static struct s3c2410_platform_nand __initdata rx3715_nand_info = ;
static struct platform_device *rx3715_devices[] __initdata = ;
static void __init rx3715_map_io(void)
static void __init rx3715_reserve(void)
static void __init rx3715_init_irq(void)
static void __init rx3715_init_machine(void)
MACHINE_START(RX3715, "IPAQ-RX3715")
.boot_params	= S3C2410_SDRAM_PA + 0x100,
.map_io		= rx3715_map_io,
.reserve	= rx3715_reserve,
.init_irq	= rx3715_init_irq,
.init_machine	= rx3715_init_machine,
.timer		= &s3c24xx_timer,
MACHINE_END

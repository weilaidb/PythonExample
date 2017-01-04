#define COPYRIGHT ", Copyright 2005-2009 Simtec Electronics"
static struct map_desc anubis_iodesc[] __initdata = ;
#define UCON S3C2410_UCON_DEFAULT | S3C2410_UCON_UCLK
#define ULCON S3C2410_LCON_CS8 | S3C2410_LCON_PNONE | S3C2410_LCON_STOPB
#define UFCON S3C2410_UFCON_RXTRIG8 | S3C2410_UFCON_FIFOMODE
static struct s3c24xx_uart_clksrc anubis_serial_clocks[] = ;
static struct s3c2410_uartcfg anubis_uartcfgs[] __initdata = ;
static int external_map[]   = ;
static int chip0_map[]      = ;
static int chip1_map[]      = ;
static struct mtd_partition __initdata anubis_default_nand_part[] = ;
static struct mtd_partition __initdata anubis_default_nand_part_large[] = ;
static struct s3c2410_nand_set __initdata anubis_nand_sets[] = ;
static void anubis_nand_select(struct s3c2410_nand_set *set, int slot)
static struct s3c2410_platform_nand __initdata anubis_nand_info = ;
static struct pata_platform_info anubis_ide_platdata = ;
static struct resource anubis_ide0_resource[] = ;
static struct platform_device anubis_device_ide0 = ;
static struct resource anubis_ide1_resource[] = ;
static struct platform_device anubis_device_ide1 = ;
static struct ax_plat_data anubis_asix_platdata = ;
static struct resource anubis_asix_resource[] = ;
static struct platform_device anubis_device_asix = ;
static struct resource anubis_sm501_resource[] = ;
static struct sm501_initdata anubis_sm501_initdata = ;
static struct sm501_platdata_gpio_i2c anubis_sm501_gpio_i2c[] = ;
static struct sm501_platdata anubis_sm501_platdata = ;
static struct platform_device anubis_device_sm501 = ;
static struct platform_device *anubis_devices[] __initdata = ;
static struct clk *anubis_clocks[] __initdata = ;
static struct i2c_board_info anubis_i2c_devs[] __initdata = ;
static struct s3c24xx_audio_simtec_pdata __initdata anubis_audio = ;
static void __init anubis_map_io(void)
static void __init anubis_init(void)
MACHINE_START(ANUBIS, "Simtec-Anubis")
.boot_params	= S3C2410_SDRAM_PA + 0x100,
.map_io		= anubis_map_io,
.init_machine	= anubis_init,
.init_irq	= s3c24xx_init_irq,
.timer		= &s3c24xx_timer,
MACHINE_END

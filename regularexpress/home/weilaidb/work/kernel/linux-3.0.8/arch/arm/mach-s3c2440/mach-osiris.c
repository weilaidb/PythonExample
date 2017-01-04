static struct map_desc osiris_iodesc[] __initdata = ;
#define UCON S3C2410_UCON_DEFAULT | S3C2410_UCON_UCLK
#define ULCON S3C2410_LCON_CS8 | S3C2410_LCON_PNONE | S3C2410_LCON_STOPB
#define UFCON S3C2410_UFCON_RXTRIG8 | S3C2410_UFCON_FIFOMODE
static struct s3c24xx_uart_clksrc osiris_serial_clocks[] = ;
static struct s3c2410_uartcfg osiris_uartcfgs[] __initdata = ;
static int external_map[]   = ;
static int chip0_map[]      = ;
static int chip1_map[]      = ;
static struct mtd_partition __initdata osiris_default_nand_part[] = ;
static struct mtd_partition __initdata osiris_default_nand_part_large[] = ;
static struct s3c2410_nand_set __initdata osiris_nand_sets[] = ;
static void osiris_nand_select(struct s3c2410_nand_set *set, int slot)
static struct s3c2410_platform_nand __initdata osiris_nand_info = ;
static struct resource osiris_pcmcia_resource[] = ;
static struct platform_device osiris_pcmcia = ;
static unsigned char pm_osiris_ctrl0;
static int osiris_pm_suspend(void)
static void osiris_pm_resume(void)
#define osiris_pm_suspend NULL
#define osiris_pm_resume NULL
static struct syscore_ops osiris_pm_syscore_ops = ;
static void osiris_tps_release(struct device *dev)
static struct platform_device osiris_tps_device = ;
static int osiris_tps_setup(struct i2c_client *client, void *context)
static int osiris_tps_remove(struct i2c_client *client, void *context)
static struct tps65010_board osiris_tps_board = ;
static struct i2c_board_info osiris_i2c_devs[] __initdata = ;
static struct platform_device *osiris_devices[] __initdata = ;
static struct clk *osiris_clocks[] __initdata = ;
static struct s3c_cpufreq_board __initdata osiris_cpufreq = ;
static void __init osiris_map_io(void)
static void __init osiris_init(void)
;
MACHINE_START(OSIRIS, "Simtec-OSIRIS")
.boot_params	= S3C2410_SDRAM_PA + 0x100,
.map_io		= osiris_map_io,
.init_irq	= s3c24xx_init_irq,
.init_machine	= osiris_init,
.timer		= &s3c24xx_timer,
MACHINE_END

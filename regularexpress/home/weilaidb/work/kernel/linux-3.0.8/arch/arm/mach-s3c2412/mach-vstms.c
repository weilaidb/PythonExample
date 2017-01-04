static struct map_desc vstms_iodesc[] __initdata = ;
static struct s3c2410_uartcfg vstms_uartcfgs[] __initdata = ;
static struct mtd_partition __initdata vstms_nand_part[] = ;
static struct s3c2410_nand_set __initdata vstms_nand_sets[] = ;
static struct s3c2410_platform_nand __initdata vstms_nand_info = ;
static struct platform_device *vstms_devices[] __initdata = ;
static void __init vstms_fixup(struct machine_desc *desc,
struct tag *tags, char **cmdline,
struct meminfo *mi)
static void __init vstms_map_io(void)
static void __init vstms_init(void)
MACHINE_START(VSTMS, "VSTMS")
.boot_params	= S3C2410_SDRAM_PA + 0x100,
.fixup		= vstms_fixup,
.init_irq	= s3c24xx_init_irq,
.init_machine	= vstms_init,
.map_io		= vstms_map_io,
.timer		= &s3c24xx_timer,
MACHINE_END

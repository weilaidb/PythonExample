static struct map_desc smdk2413_iodesc[] __initdata = ;
static struct s3c2410_uartcfg smdk2413_uartcfgs[] __initdata = ;
static struct s3c2410_udc_mach_info smdk2413_udc_cfg __initdata = ;
static struct platform_device *smdk2413_devices[] __initdata = ;
static void __init smdk2413_fixup(struct machine_desc *desc,
struct tag *tags, char **cmdline,
struct meminfo *mi)
static void __init smdk2413_map_io(void)
static void __init smdk2413_machine_init(void)
MACHINE_START(S3C2413, "S3C2413")
.boot_params	= S3C2410_SDRAM_PA + 0x100,
.fixup		= smdk2413_fixup,
.init_irq	= s3c24xx_init_irq,
.map_io		= smdk2413_map_io,
.init_machine	= smdk2413_machine_init,
.timer		= &s3c24xx_timer,
MACHINE_END
MACHINE_START(SMDK2412, "SMDK2412")
.boot_params	= S3C2410_SDRAM_PA + 0x100,
.fixup		= smdk2413_fixup,
.init_irq	= s3c24xx_init_irq,
.map_io		= smdk2413_map_io,
.init_machine	= smdk2413_machine_init,
.timer		= &s3c24xx_timer,
MACHINE_END
MACHINE_START(SMDK2413, "SMDK2413")
.boot_params	= S3C2410_SDRAM_PA + 0x100,
.fixup		= smdk2413_fixup,
.init_irq	= s3c24xx_init_irq,
.map_io		= smdk2413_map_io,
.init_machine	= smdk2413_machine_init,
.timer		= &s3c24xx_timer,
MACHINE_END

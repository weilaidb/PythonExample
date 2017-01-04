static struct plat_sci_port scif0_platform_data = ;
static struct platform_device scif0_device = ;
static struct resource rtc_resources[] = ;
static struct platform_device rtc_device = ;
#define	TMU_BLOCK_OFF	0x01020000
#define TMU_BASE	PHYS_PERIPHERAL_BLOCK + TMU_BLOCK_OFF
#define TMU0_BASE	(TMU_BASE + 0x8 + (0xc * 0x0))
#define TMU1_BASE	(TMU_BASE + 0x8 + (0xc * 0x1))
#define TMU2_BASE	(TMU_BASE + 0x8 + (0xc * 0x2))
static struct sh_timer_config tmu0_platform_data = ;
static struct resource tmu0_resources[] = ;
static struct platform_device tmu0_device = ;
static struct sh_timer_config tmu1_platform_data = ;
static struct resource tmu1_resources[] = ;
static struct platform_device tmu1_device = ;
static struct sh_timer_config tmu2_platform_data = ;
static struct resource tmu2_resources[] = ;
static struct platform_device tmu2_device = ;
static struct platform_device *sh5_early_devices[] __initdata = ;
static struct platform_device *sh5_devices[] __initdata = ;
static int __init sh5_devices_setup(void)
arch_initcall(sh5_devices_setup);
void __init plat_early_device_setup(void)

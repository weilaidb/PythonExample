#define TUCR_VAL	0x20000400
#define SA1111REGSTART	0x40000000
#define SA1111REGLEN	0x00001fff
#define EPSONREGSTART	0x48000000
#define EPSONREGLEN	0x00100000
#define EPSONFBSTART	0x48200000
#define EPSONFBLEN	512*1024
static struct s1d13xxxfb_regval s1d13xxxfb_initregs[] = ;
static struct s1d13xxxfb_pdata s1d13xxxfb_data = ;
static struct resource s1d13xxxfb_resources[] = ;
static struct platform_device s1d13xxxfb_device = ;
static struct resource sa1111_resources[] = ;
static struct sa1111_platform_data sa1111_info = ;
static u64 sa1111_dmamask = 0xffffffffUL;
static struct platform_device sa1111_device = ;
static struct platform_device jornada_ssp_device = ;
static struct platform_device jornada_kbd_device = ;
static struct platform_device jornada_ts_device = ;
static struct platform_device *devices[] __initdata = ;
static int __init jornada720_init(void)
arch_initcall(jornada720_init);
static struct map_desc jornada720_io_desc[] __initdata = ;
static void __init jornada720_map_io(void)
static struct mtd_partition jornada720_partitions[] = ;
static void jornada720_set_vpp(int vpp)
static struct flash_platform_data jornada720_flash_data = ;
static struct resource jornada720_flash_resource = ;
static void __init jornada720_mach_init(void)
MACHINE_START(JORNADA720, "HP Jornada 720")
.boot_params	= 0xc0000100,
.map_io		= jornada720_map_io,
.init_irq	= sa1100_init_irq,
.timer		= &sa1100_timer,
.init_machine	= jornada720_mach_init,
MACHINE_END

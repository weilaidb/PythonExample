#define XI_FREQUENCY	12000000
#define XTI_FREQUENCY	32768
static struct tcc_nand_platform_data tcc8k_sdk_nand_data = ;
static void __init tcc8k_init(void)
static void __init tcc8k_init_timer(void)
static struct sys_timer tcc8k_timer = ;
static void __init tcc8k_map_io(void)
MACHINE_START(TCC8000_SDK, "Telechips TCC8000-SDK Demo Board")
.boot_params	= PLAT_PHYS_OFFSET + 0x00000100,
.map_io		= tcc8k_map_io,
.init_irq	= tcc8k_init_irq,
.init_machine	= tcc8k_init,
.timer		= &tcc8k_timer,
MACHINE_END

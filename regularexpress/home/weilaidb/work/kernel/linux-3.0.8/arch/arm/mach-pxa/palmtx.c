static unsigned long palmtx_pin_config[] __initdata = ;
#if defined(CONFIG_MTD_PHYSMAP) || defined(CONFIG_MTD_PHYSMAP_MODULE)
static struct mtd_partition palmtx_partitions[] = ;
static struct physmap_flash_data palmtx_flash_data[] = ;
static struct resource palmtx_flash_resource = ;
static struct platform_device palmtx_flash = ;
static void __init palmtx_nor_init(void)
static inline void palmtx_nor_init(void)
#if defined(CONFIG_KEYBOARD_PXA27x) || defined(CONFIG_KEYBOARD_PXA27x_MODULE)
static unsigned int palmtx_matrix_keys[] = ;
static struct pxa27x_keypad_platform_data palmtx_keypad_platform_data = ;
static void __init palmtx_kpc_init(void)
static inline void palmtx_kpc_init(void)
#if defined(CONFIG_KEYBOARD_GPIO) || defined(CONFIG_KEYBOARD_GPIO_MODULE)
static struct gpio_keys_button palmtx_pxa_buttons[] = ;
static struct gpio_keys_platform_data palmtx_pxa_keys_data = ;
static struct platform_device palmtx_pxa_keys = ;
static void __init palmtx_keys_init(void)
static inline void palmtx_keys_init(void)
#if defined(CONFIG_MTD_NAND_PLATFORM) || \
defined(CONFIG_MTD_NAND_PLATFORM_MODULE)
static void palmtx_nand_cmd_ctl(struct mtd_info *mtd, int cmd,
unsigned int ctrl)
static struct mtd_partition palmtx_partition_info[] = ;
static const char *palmtx_part_probes[] = ;
struct platform_nand_data palmtx_nand_platdata = ;
static struct resource palmtx_nand_resource[] = ;
static struct platform_device palmtx_nand = ;
static void __init palmtx_nand_init(void)
static inline void palmtx_nand_init(void)
static struct map_desc palmtx_io_desc[] __initdata = ;
static void __init palmtx_map_io(void)
static void __init palmtx_init(void)
MACHINE_START(PALMTX, "Palm T|X")
.boot_params	= 0xa0000100,
.map_io		= palmtx_map_io,
.init_irq	= pxa27x_init_irq,
.timer		= &pxa_timer,
.init_machine	= palmtx_init
MACHINE_END

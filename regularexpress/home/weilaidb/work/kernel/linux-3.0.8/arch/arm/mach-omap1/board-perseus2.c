static const unsigned int p2_keymap[] = ;
static struct smc91x_platdata smc91x_info = ;
static struct resource smc91x_resources[] = ;
static struct mtd_partition nor_partitions[] = ;
static struct physmap_flash_data nor_data = ;
static struct resource nor_resource = ;
static struct platform_device nor_device = ;
static void nand_cmd_ctl(struct mtd_info *mtd, int cmd,	unsigned int ctrl)
#define P2_NAND_RB_GPIO_PIN	62
static int nand_dev_ready(struct mtd_info *mtd)
static const char *part_probes[] = ;
static struct platform_nand_data nand_data = ;
static struct resource nand_resource = ;
static struct platform_device nand_device = ;
static struct platform_device smc91x_device = ;
static struct resource kp_resources[] = ;
static const struct matrix_keymap_data p2_keymap_data = ;
static struct omap_kp_platform_data kp_data = ;
static struct platform_device kp_device = ;
static struct platform_device lcd_device = ;
static struct platform_device *devices[] __initdata = ;
static struct omap_lcd_config perseus2_lcd_config __initdata = ;
static struct omap_board_config_kernel perseus2_config[] __initdata = ;
static void __init perseus2_init_smc91x(void)
static void __init omap_perseus2_init(void)
static void __init omap_perseus2_init_irq(void)
static struct map_desc omap_perseus2_io_desc[] __initdata = ;
static void __init omap_perseus2_map_io(void)
MACHINE_START(OMAP_PERSEUS2, "OMAP730 Perseus2")
.boot_params	= 0x10000100,
.map_io		= omap_perseus2_map_io,
.reserve	= omap_reserve,
.init_irq	= omap_perseus2_init_irq,
.init_machine	= omap_perseus2_init,
.timer		= &omap_timer,
MACHINE_END

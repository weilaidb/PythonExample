#define OMAP1610_ETHR_START		0x04000300
static const unsigned int h2_keymap[] = ;
static struct mtd_partition h2_nor_partitions[] = ;
static struct physmap_flash_data h2_nor_data = ;
static struct resource h2_nor_resource = ;
static struct platform_device h2_nor_device = ;
static struct mtd_partition h2_nand_partitions[] = ;
static void h2_nand_cmd_ctl(struct mtd_info *mtd, int cmd, unsigned int ctrl)
#define H2_NAND_RB_GPIO_PIN	62
static int h2_nand_dev_ready(struct mtd_info *mtd)
static const char *h2_part_probes[] = ;
static struct platform_nand_data h2_nand_platdata = ;
static struct resource h2_nand_resource = ;
static struct platform_device h2_nand_device = ;
static struct smc91x_platdata h2_smc91x_info = ;
static struct resource h2_smc91x_resources[] = ;
static struct platform_device h2_smc91x_device = ;
static struct resource h2_kp_resources[] = ;
static const struct matrix_keymap_data h2_keymap_data = ;
static struct omap_kp_platform_data h2_kp_data = ;
static struct platform_device h2_kp_device = ;
#define H2_IRDA_FIRSEL_GPIO_PIN	17
static struct omap_irda_config h2_irda_data = ;
static struct resource h2_irda_resources[] = ;
static u64 irda_dmamask = 0xffffffff;
static struct platform_device h2_irda_device = ;
static struct platform_device h2_lcd_device = ;
static struct platform_device *h2_devices[] __initdata = ;
static void __init h2_init_smc91x(void)
static int tps_setup(struct i2c_client *client, void *context)
static struct tps65010_board tps_board = ;
static struct i2c_board_info __initdata h2_i2c_board_info[] = ;
static void __init h2_init_irq(void)
static struct omap_usb_config h2_usb_config __initdata = ;
static struct omap_lcd_config h2_lcd_config __initdata = ;
static struct omap_board_config_kernel h2_config[] __initdata = ;
static void __init h2_init(void)
static void __init h2_map_io(void)
MACHINE_START(OMAP_H2, "TI-H2")
.boot_params	= 0x10000100,
.map_io		= h2_map_io,
.reserve	= omap_reserve,
.init_irq	= h2_init_irq,
.init_machine	= h2_init,
.timer		= &omap_timer,
MACHINE_END

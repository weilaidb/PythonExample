#define OMAP1710_ETHR_START		0x04000300
#define H3_TS_GPIO	48
static const unsigned int h3_keymap[] = ;
static struct mtd_partition nor_partitions[] = ;
static struct physmap_flash_data nor_data = ;
static struct resource nor_resource = ;
static struct platform_device nor_device = ;
static struct mtd_partition nand_partitions[] = ;
static void nand_cmd_ctl(struct mtd_info *mtd, int cmd, unsigned int ctrl)
#define H3_NAND_RB_GPIO_PIN	10
static int nand_dev_ready(struct mtd_info *mtd)
static const char *part_probes[] = ;
static struct platform_nand_data nand_platdata = ;
static struct resource nand_resource = ;
static struct platform_device nand_device = ;
static struct smc91x_platdata smc91x_info = ;
static struct resource smc91x_resources[] = ;
static struct platform_device smc91x_device = ;
static void __init h3_init_smc91x(void)
#define GPTIMER_BASE		0xFFFB1400
#define GPTIMER_REGS(x)	(0xFFFB1400 + (x * 0x800))
#define GPTIMER_REGS_SIZE	0x46
static struct resource intlat_resources[] = ;
static struct platform_device intlat_device = ;
static struct resource h3_kp_resources[] = ;
static const struct matrix_keymap_data h3_keymap_data = ;
static struct omap_kp_platform_data h3_kp_data = ;
static struct platform_device h3_kp_device = ;
static struct platform_device h3_lcd_device = ;
static struct spi_board_info h3_spi_board_info[] __initdata = ;
static struct platform_device *devices[] __initdata = ;
static struct omap_usb_config h3_usb_config __initdata = ;
static struct omap_lcd_config h3_lcd_config __initdata = ;
static struct omap_board_config_kernel h3_config[] __initdata = ;
static struct i2c_board_info __initdata h3_i2c_board_info[] = ;
static void __init h3_init(void)
static void __init h3_init_irq(void)
static void __init h3_map_io(void)
MACHINE_START(OMAP_H3, "TI OMAP1710 H3 board")
.boot_params	= 0x10000100,
.map_io		= h3_map_io,
.reserve	= omap_reserve,
.init_irq	= h3_init_irq,
.init_machine	= h3_init,
.timer		= &omap_timer,
MACHINE_END

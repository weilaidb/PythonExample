#define fsample_cpld_read(reg) __raw_readb(reg)
#define fsample_cpld_write(val, reg) __raw_writeb(val, reg)
#define FSAMPLE_CPLD_BASE    0xE8100000
#define FSAMPLE_CPLD_SIZE    SZ_4K
#define FSAMPLE_CPLD_START   0x05080000
#define FSAMPLE_CPLD_REG_A   (FSAMPLE_CPLD_BASE + 0x00)
#define FSAMPLE_CPLD_SWITCH  (FSAMPLE_CPLD_BASE + 0x02)
#define FSAMPLE_CPLD_UART    (FSAMPLE_CPLD_BASE + 0x02)
#define FSAMPLE_CPLD_REG_B   (FSAMPLE_CPLD_BASE + 0x04)
#define FSAMPLE_CPLD_VERSION (FSAMPLE_CPLD_BASE + 0x06)
#define FSAMPLE_CPLD_SET_CLR (FSAMPLE_CPLD_BASE + 0x06)
#define FSAMPLE_CPLD_BIT_BT_RESET         0
#define FSAMPLE_CPLD_BIT_LCD_RESET        1
#define FSAMPLE_CPLD_BIT_CAM_PWDN         2
#define FSAMPLE_CPLD_BIT_CHARGER_ENABLE   3
#define FSAMPLE_CPLD_BIT_SD_MMC_EN        4
#define FSAMPLE_CPLD_BIT_aGPS_PWREN       5
#define FSAMPLE_CPLD_BIT_BACKLIGHT        6
#define FSAMPLE_CPLD_BIT_aGPS_EN_RESET    7
#define FSAMPLE_CPLD_BIT_aGPS_SLEEPx_N    8
#define FSAMPLE_CPLD_BIT_OTG_RESET        9
#define fsample_cpld_set(bit) \
fsample_cpld_write((((bit) & 15) << 4) | 0x0f, FSAMPLE_CPLD_SET_CLR)
#define fsample_cpld_clear(bit) \
fsample_cpld_write(0xf0 | ((bit) & 15), FSAMPLE_CPLD_SET_CLR)
static const unsigned int fsample_keymap[] = ;
static struct smc91x_platdata smc91x_info = ;
static struct resource smc91x_resources[] = ;
static void __init fsample_init_smc91x(void)
static struct mtd_partition nor_partitions[] = ;
static struct physmap_flash_data nor_data = ;
static struct resource nor_resource = ;
static struct platform_device nor_device = ;
static void nand_cmd_ctl(struct mtd_info *mtd, int cmd,	unsigned int ctrl)
#define FSAMPLE_NAND_RB_GPIO_PIN	62
static int nand_dev_ready(struct mtd_info *mtd)
static const char *part_probes[] = ;
static struct platform_nand_data nand_data = ;
static struct resource nand_resource = ;
static struct platform_device nand_device = ;
static struct platform_device smc91x_device = ;
static struct resource kp_resources[] = ;
static const struct matrix_keymap_data fsample_keymap_data = ;
static struct omap_kp_platform_data kp_data = ;
static struct platform_device kp_device = ;
static struct platform_device lcd_device = ;
static struct platform_device *devices[] __initdata = ;
static struct omap_lcd_config fsample_lcd_config = ;
static struct omap_board_config_kernel fsample_config[] __initdata = ;
static void __init omap_fsample_init(void)
static void __init omap_fsample_init_irq(void)
static struct map_desc omap_fsample_io_desc[] __initdata = ;
static void __init omap_fsample_map_io(void)
MACHINE_START(OMAP_FSAMPLE, "OMAP730 F-Sample")
.boot_params	= 0x10000100,
.map_io		= omap_fsample_map_io,
.reserve	= omap_reserve,
.init_irq	= omap_fsample_init_irq,
.init_machine	= omap_fsample_init,
.timer		= &omap_timer,
MACHINE_END

static inline int have_imager(void)
static inline int have_tvp7002(void)
#define DM365_EVM_PHY_ID		"0:01"
#define CPLD_OFFSET(a13a8,a2a1)		(((a13a8) << 10) + ((a2a1) << 3))
#define CPLD_VERSION	CPLD_OFFSET(0,0)
#define CPLD_TEST	CPLD_OFFSET(0,1)
#define CPLD_LEDS	CPLD_OFFSET(0,2)
#define CPLD_MUX	CPLD_OFFSET(0,3)
#define CPLD_SWITCH	CPLD_OFFSET(1,0)
#define CPLD_POWER	CPLD_OFFSET(1,1)
#define CPLD_VIDEO	CPLD_OFFSET(1,2)
#define CPLD_CARDSTAT	CPLD_OFFSET(1,3)
#define CPLD_DILC_OUT	CPLD_OFFSET(2,0)
#define CPLD_DILC_IN	CPLD_OFFSET(2,1)
#define CPLD_IMG_DIR0	CPLD_OFFSET(2,2)
#define CPLD_IMG_MUX0	CPLD_OFFSET(2,3)
#define CPLD_IMG_MUX1	CPLD_OFFSET(3,0)
#define CPLD_IMG_DIR1	CPLD_OFFSET(3,1)
#define CPLD_IMG_MUX2	CPLD_OFFSET(3,2)
#define CPLD_IMG_MUX3	CPLD_OFFSET(3,3)
#define CPLD_IMG_DIR2	CPLD_OFFSET(4,0)
#define CPLD_IMG_MUX4	CPLD_OFFSET(4,1)
#define CPLD_IMG_MUX5	CPLD_OFFSET(4,2)
#define CPLD_RESETS	CPLD_OFFSET(4,3)
#define CPLD_CCD_DIR1	CPLD_OFFSET(0x3e,0)
#define CPLD_CCD_IO1	CPLD_OFFSET(0x3e,1)
#define CPLD_CCD_DIR2	CPLD_OFFSET(0x3e,2)
#define CPLD_CCD_IO2	CPLD_OFFSET(0x3e,3)
#define CPLD_CCD_DIR3	CPLD_OFFSET(0x3f,0)
#define CPLD_CCD_IO3	CPLD_OFFSET(0x3f,1)
static void __iomem *cpld;
#define NAND_BLOCK_SIZE		SZ_128K
static struct mtd_partition davinci_nand_partitions[] = ;
static struct davinci_nand_pdata davinci_nand_data = ;
static struct resource davinci_nand_resources[] = ;
static struct platform_device davinci_nand_device = ;
static struct at24_platform_data eeprom_info = ;
static struct snd_platform_data dm365_evm_snd_data = ;
static struct i2c_board_info i2c_info[] = ;
static struct davinci_i2c_platform_data i2c_pdata = ;
static int dm365evm_keyscan_enable(struct device *dev)
static unsigned short dm365evm_keymap[] = ;
static struct davinci_ks_platform_data dm365evm_ks_data = ;
static int cpld_mmc_get_cd(int module)
static int cpld_mmc_get_ro(int module)
static struct davinci_mmc_config dm365evm_mmc_config = ;
static void dm365evm_emac_configure(void)
static void dm365evm_mmc_configure(void)
static struct tvp514x_platform_data tvp5146_pdata = ;
#define TVP514X_STD_ALL        (V4L2_STD_NTSC | V4L2_STD_PAL)
static struct v4l2_input tvp5146_inputs[] = ;
static struct vpfe_route tvp5146_routes[] = ;
static struct vpfe_subdev_info vpfe_sub_devs[] = ;
static struct vpfe_config vpfe_cfg = ;
static void __init evm_init_i2c(void)
static struct platform_device *dm365_evm_nand_devices[] __initdata = ;
static inline int have_leds(void)
struct cpld_led ;
static const struct  cpld_leds[] = ;
static void cpld_led_set(struct led_classdev *cdev, enum led_brightness b)
static enum led_brightness cpld_led_get(struct led_classdev *cdev)
static int __init cpld_leds_init(void)
fs_initcall(cpld_leds_init);
static void __init evm_init_cpld(void)
static struct davinci_uart_config uart_config __initdata = ;
static void __init dm365_evm_map_io(void)
static struct spi_eeprom at25640 = ;
static struct spi_board_info dm365_evm_spi_info[] __initconst = ;
static __init void dm365_evm_init(void)
MACHINE_START(DAVINCI_DM365_EVM, "DaVinci DM365 EVM")
.boot_params	= (0x80000100),
.map_io		= dm365_evm_map_io,
.init_irq	= davinci_irq_init,
.timer		= &davinci_timer,
.init_machine	= dm365_evm_init,
MACHINE_END

#define NAND_BLOCK_SIZE		SZ_128K
static struct mtd_partition davinci_nand_partitions[] = ;
static struct davinci_nand_pdata davinci_nand_data = ;
static struct resource davinci_nand_resources[] = ;
static struct platform_device davinci_nand_device = ;
static struct davinci_i2c_platform_data i2c_pdata = ;
static struct snd_platform_data dm355_evm_snd_data;
static int dm355evm_mmc_gpios = -EINVAL;
static void dm355evm_mmcsd_gpios(unsigned gpio)
static struct i2c_board_info dm355evm_i2c_info[] = ;
static void __init evm_init_i2c(void)
static struct resource dm355evm_dm9000_rsrc[] = ;
static struct platform_device dm355evm_dm9000 = ;
static struct tvp514x_platform_data tvp5146_pdata = ;
#define TVP514X_STD_ALL	(V4L2_STD_NTSC | V4L2_STD_PAL)
static struct v4l2_input tvp5146_inputs[] = ;
static struct vpfe_route tvp5146_routes[] = ;
static struct vpfe_subdev_info vpfe_sub_devs[] = ;
static struct vpfe_config vpfe_cfg = ;
static struct platform_device *davinci_evm_devices[] __initdata = ;
static struct davinci_uart_config uart_config __initdata = ;
static void __init dm355_evm_map_io(void)
static int dm355evm_mmc_get_cd(int module)
static int dm355evm_mmc_get_ro(int module)
static struct davinci_mmc_config dm355evm_mmc_config = ;
#define USB_ID_VALUE	0
#define USB_ID_VALUE	1
static struct spi_eeprom at25640a = ;
static struct spi_board_info dm355_evm_spi_info[] __initconst = ;
static __init void dm355_evm_init(void)
MACHINE_START(DAVINCI_DM355_EVM, "DaVinci DM355 EVM")
.boot_params  = (0x80000100),
.map_io	      = dm355_evm_map_io,
.init_irq     = davinci_irq_init,
.timer	      = &davinci_timer,
.init_machine = dm355_evm_init,
MACHINE_END

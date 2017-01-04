#define DM644X_EVM_PHY_ID		"0:01"
#define LXT971_PHY_ID	(0x001378e2)
#define LXT971_PHY_MASK	(0xfffffff0)
static struct mtd_partition davinci_evm_norflash_partitions[] = ;
static struct physmap_flash_data davinci_evm_norflash_data = ;
static struct resource davinci_evm_norflash_resource = ;
static struct platform_device davinci_evm_norflash_device = ;
static struct mtd_partition davinci_evm_nandflash_partition[] = ;
static struct davinci_aemif_timing davinci_evm_nandflash_timing = ;
static struct davinci_nand_pdata davinci_evm_nandflash_data = ;
static struct resource davinci_evm_nandflash_resource[] = ;
static struct platform_device davinci_evm_nandflash_device = ;
static u64 davinci_fb_dma_mask = DMA_BIT_MASK(32);
static struct platform_device davinci_fb_device = ;
static struct tvp514x_platform_data tvp5146_pdata = ;
#define TVP514X_STD_ALL	(V4L2_STD_NTSC | V4L2_STD_PAL)
static struct v4l2_input tvp5146_inputs[] = ;
static struct vpfe_route tvp5146_routes[] = ;
static struct vpfe_subdev_info vpfe_sub_devs[] = ;
static struct vpfe_config vpfe_cfg = ;
static struct platform_device rtc_dev = ;
static struct snd_platform_data dm644x_evm_snd_data;
#define PCF_Uxx_BASE(x)	(DAVINCI_N_GPIO + ((x) * 8))
static struct gpio_led evm_leds[] = ;
static const struct gpio_led_platform_data evm_led_data = ;
static struct platform_device *evm_led_dev;
static int
evm_led_setup(struct i2c_client *client, int gpio, unsigned ngpio, void *c)
static int
evm_led_teardown(struct i2c_client *client, int gpio, unsigned ngpio, void *c)
static struct pcf857x_platform_data pcf_data_u2 = ;
static int sw_gpio;
static ssize_t
sw_show(struct device *d, struct device_attribute *a, char *buf)
static DEVICE_ATTR(user_sw, S_IRUGO, sw_show, NULL);
static int
evm_u18_setup(struct i2c_client *client, int gpio, unsigned ngpio, void *c)
static int
evm_u18_teardown(struct i2c_client *client, int gpio, unsigned ngpio, void *c)
static struct pcf857x_platform_data pcf_data_u18 = ;
static int
evm_u35_setup(struct i2c_client *client, int gpio, unsigned ngpio, void *c)
static int
evm_u35_teardown(struct i2c_client *client, int gpio, unsigned ngpio, void *c)
static struct pcf857x_platform_data pcf_data_u35 = ;
static struct at24_platform_data eeprom_info = ;
static struct i2c_client *dm6446evm_msp;
static int dm6446evm_msp_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int dm6446evm_msp_remove(struct i2c_client *client)
static const struct i2c_device_id dm6446evm_msp_ids[] = ;
static struct i2c_driver dm6446evm_msp_driver = ;
static int dm6444evm_msp430_get_pins(void)
static int dm6444evm_mmc_get_cd(int module)
static int dm6444evm_mmc_get_ro(int module)
static struct davinci_mmc_config dm6446evm_mmc_config = ;
static struct i2c_board_info __initdata i2c_info[] =  ;
static struct davinci_i2c_platform_data i2c_pdata = ;
static void __init evm_init_i2c(void)
static struct platform_device *davinci_evm_devices[] __initdata = ;
static struct davinci_uart_config uart_config __initdata = ;
static void __init
davinci_evm_map_io(void)
static int davinci_phy_fixup(struct phy_device *phydev)
#if defined(CONFIG_BLK_DEV_PALMCHIP_BK3710) || \
defined(CONFIG_BLK_DEV_PALMCHIP_BK3710_MODULE)
#define HAS_ATA 1
#define HAS_ATA 0
#if defined(CONFIG_MTD_PHYSMAP) || \
defined(CONFIG_MTD_PHYSMAP_MODULE)
#define HAS_NOR 1
#define HAS_NOR 0
#if defined(CONFIG_MTD_NAND_DAVINCI) || \
defined(CONFIG_MTD_NAND_DAVINCI_MODULE)
#define HAS_NAND 1
#define HAS_NAND 0
static __init void davinci_evm_init(void)
MACHINE_START(DAVINCI_EVM, "DaVinci DM644x EVM")
.boot_params  = (DAVINCI_DDR_BASE + 0x100),
.map_io	      = davinci_evm_map_io,
.init_irq     = davinci_irq_init,
.timer	      = &davinci_timer,
.init_machine = davinci_evm_init,
MACHINE_END

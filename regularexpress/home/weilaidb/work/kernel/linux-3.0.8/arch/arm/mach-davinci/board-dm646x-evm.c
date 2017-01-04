#define NAND_BLOCK_SIZE		SZ_128K
static struct mtd_partition davinci_nand_partitions[] = ;
static struct davinci_aemif_timing dm6467tevm_nandflash_timing = ;
static struct davinci_nand_pdata davinci_nand_data = ;
static struct resource davinci_nand_resources[] = ;
static struct platform_device davinci_nand_device = ;
#if defined(CONFIG_BLK_DEV_PALMCHIP_BK3710) || \
defined(CONFIG_BLK_DEV_PALMCHIP_BK3710_MODULE)
#define HAS_ATA 1
#define HAS_ATA 0
#define DM646X_EVM_ATA_RST		BIT(0)
#define DM646X_EVM_ATA_PWD		BIT(1)
static int cpld_reg0_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static const struct i2c_device_id cpld_reg_ids[] = ;
static struct i2c_driver dm6467evm_cpld_driver = ;
static struct gpio_led evm_leds[] = ;
static const struct gpio_led_platform_data evm_led_data = ;
static struct platform_device *evm_led_dev;
static int evm_led_setup(struct i2c_client *client, int gpio,
unsigned int ngpio, void *c)
static int evm_led_teardown(struct i2c_client *client, int gpio,
unsigned ngpio, void *c)
static int evm_sw_gpio[4] = ;
static int evm_sw_setup(struct i2c_client *client, int gpio,
unsigned ngpio, void *c)
static int evm_sw_teardown(struct i2c_client *client, int gpio,
unsigned ngpio, void *c)
static int evm_pcf_setup(struct i2c_client *client, int gpio,
unsigned int ngpio, void *c)
static int evm_pcf_teardown(struct i2c_client *client, int gpio,
unsigned int ngpio, void *c)
static struct pcf857x_platform_data pcf_data = ;
static struct at24_platform_data eeprom_info = ;
static u8 dm646x_iis_serializer_direction[] = ;
static u8 dm646x_dit_serializer_direction[] = ;
static struct snd_platform_data dm646x_evm_snd_data[] = ;
static struct i2c_client *cpld_client;
static int cpld_video_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int __devexit cpld_video_remove(struct i2c_client *client)
static const struct i2c_device_id cpld_video_id[] = ;
static struct i2c_driver cpld_video_driver = ;
static void evm_init_cpld(void)
static struct i2c_board_info __initdata i2c_info[] =  ;
static struct davinci_i2c_platform_data i2c_pdata = ;
#define VIDCLKCTL_OFFSET	(DAVINCI_SYSTEM_MODULE_BASE + 0x38)
#define VSCLKDIS_OFFSET		(DAVINCI_SYSTEM_MODULE_BASE + 0x6c)
#define VCH2CLK_MASK		(BIT_MASK(10) | BIT_MASK(9) | BIT_MASK(8))
#define VCH2CLK_SYSCLK8		(BIT(9))
#define VCH2CLK_AUXCLK		(BIT(9) | BIT(8))
#define VCH3CLK_MASK		(BIT_MASK(14) | BIT_MASK(13) | BIT_MASK(12))
#define VCH3CLK_SYSCLK8		(BIT(13))
#define VCH3CLK_AUXCLK		(BIT(14) | BIT(13))
#define VIDCH2CLK		(BIT(10))
#define VIDCH3CLK		(BIT(11))
#define VIDCH1CLK		(BIT(4))
#define TVP7002_INPUT		(BIT(4))
#define TVP5147_INPUT		(~BIT(4))
#define VPIF_INPUT_ONE_CHANNEL	(BIT(5))
#define VPIF_INPUT_TWO_CHANNEL	(~BIT(5))
#define TVP5147_CH0		"tvp514x-0"
#define TVP5147_CH1		"tvp514x-1"
static void __iomem *vpif_vidclkctl_reg;
static void __iomem *vpif_vsclkdis_reg;
static spinlock_t vpif_reg_lock;
static int set_vpif_clock(int mux_mode, int hd)
static struct vpif_subdev_info dm646x_vpif_subdev[] = ;
static const char *output[] = ;
static struct vpif_display_config dm646x_vpif_display_config = ;
static int setup_vpif_input_path(int channel, const char *sub_dev_name)
static int setup_vpif_input_channel_mode(int mux_mode)
static struct tvp514x_platform_data tvp5146_pdata = ;
#define TVP514X_STD_ALL (V4L2_STD_NTSC | V4L2_STD_PAL)
static struct vpif_subdev_info vpif_capture_sdev_info[] = ;
static const struct vpif_input dm6467_ch0_inputs[] = ;
static const struct vpif_input dm6467_ch1_inputs[] = ;
static struct vpif_capture_config dm646x_vpif_capture_cfg = ;
static void __init evm_init_video(void)
static void __init evm_init_i2c(void)
#define CDCE949_XIN_RATE	27000000
static struct clk cdce_clk_in = ;
static struct clk_lookup cdce_clks[] = ;
static void __init cdce_clk_init(void)
static void __init davinci_map_io(void)
static struct davinci_uart_config uart_config __initdata = ;
#define DM646X_EVM_PHY_ID		"0:01"
static const s16 dm646x_dma_rsv_chans[][2] = ;
static const s16 dm646x_dma_rsv_slots[][2] = ;
static struct edma_rsv_info dm646x_edma_rsv[] = ;
static __init void evm_init(void)
#define DM646X_EVM_REF_FREQ		27000000
#define DM6467T_EVM_REF_FREQ		33000000
void __init dm646x_board_setup_refclk(struct clk *clk)
MACHINE_START(DAVINCI_DM6467_EVM, "DaVinci DM646x EVM")
.boot_params  = (0x80000100),
.map_io       = davinci_map_io,
.init_irq     = davinci_irq_init,
.timer        = &davinci_timer,
.init_machine = evm_init,
MACHINE_END
MACHINE_START(DAVINCI_DM6467TEVM, "DaVinci DM6467T EVM")
.boot_params  = (0x80000100),
.map_io       = davinci_map_io,
.init_irq     = davinci_irq_init,
.timer        = &davinci_timer,
.init_machine = evm_init,
MACHINE_END

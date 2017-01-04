#define NEUROS_OSD2_PHY_ID		"0:01"
#define LXT971_PHY_ID			0x001378e2
#define LXT971_PHY_MASK			0xfffffff0
#define	NTOSD2_AUDIOSOC_I2C_ADDR	0x18
#define	NTOSD2_MSP430_I2C_ADDR		0x59
#define	NTOSD2_MSP430_IRQ		2
#define NAND_BLOCK_SIZE		SZ_128K
static struct mtd_partition davinci_ntosd2_nandflash_partition[] = ;
static struct davinci_nand_pdata davinci_ntosd2_nandflash_data = ;
static struct resource davinci_ntosd2_nandflash_resource[] = ;
static struct platform_device davinci_ntosd2_nandflash_device = ;
static u64 davinci_fb_dma_mask = DMA_BIT_MASK(32);
static struct platform_device davinci_fb_device = ;
static struct snd_platform_data dm644x_ntosd2_snd_data;
static struct gpio_led ntosd2_leds[] = ;
static struct gpio_led_platform_data ntosd2_leds_data = ;
static struct platform_device ntosd2_leds_dev = ;
static struct platform_device *davinci_ntosd2_devices[] __initdata = ;
static struct davinci_uart_config uart_config __initdata = ;
static void __init davinci_ntosd2_map_io(void)
static struct davinci_i2c_platform_data ntosd2_i2c_pdata = ;
static struct i2c_board_info __initdata ntosd2_i2c_info[] =  ;
static	int ntosd2_init_i2c(void)
static struct davinci_mmc_config davinci_ntosd2_mmc_config = ;
#if defined(CONFIG_BLK_DEV_PALMCHIP_BK3710) || \
defined(CONFIG_BLK_DEV_PALMCHIP_BK3710_MODULE)
#define HAS_ATA 1
#define HAS_ATA 0
#if defined(CONFIG_MTD_NAND_DAVINCI) || \
defined(CONFIG_MTD_NAND_DAVINCI_MODULE)
#define HAS_NAND 1
#define HAS_NAND 0
static __init void davinci_ntosd2_init(void)
MACHINE_START(NEUROS_OSD2, "Neuros OSD2")
.boot_params	= (DAVINCI_DDR_BASE + 0x100),
.map_io		 = davinci_ntosd2_map_io,
.init_irq	= davinci_irq_init,
.timer		= &davinci_timer,
.init_machine = davinci_ntosd2_init,
MACHINE_END

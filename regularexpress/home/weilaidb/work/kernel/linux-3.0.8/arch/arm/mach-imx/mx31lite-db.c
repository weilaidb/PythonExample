static unsigned int litekit_db_board_pins[] __initdata = ;
static const struct imxuart_platform_data uart_pdata __initconst = ;
static int gpio_det, gpio_wp;
#define MMC_PAD_CFG (PAD_CTL_DRV_MAX | PAD_CTL_SRE_FAST | PAD_CTL_HYS_CMOS | \
PAD_CTL_ODE_CMOS)
static int mxc_mmc1_get_ro(struct device *dev)
static int mxc_mmc1_init(struct device *dev,
irq_handler_t detect_irq, void *data)
static void mxc_mmc1_exit(struct device *dev, void *data)
static const struct imxmmc_platform_data mmc_pdata __initconst = ;
static int spi_internal_chipselect[] = ;
static const struct spi_imx_master spi0_pdata __initconst = ;
static struct gpio_led litekit_leds[] = ;
static struct gpio_led_platform_data litekit_led_platform_data = ;
static struct platform_device litekit_led_device = ;
void __init mx31lite_db_init(void)

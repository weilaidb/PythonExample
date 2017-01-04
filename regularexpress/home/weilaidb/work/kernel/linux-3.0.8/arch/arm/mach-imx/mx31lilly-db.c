static unsigned int lilly_db_board_pins[] __initdata = ;
static const struct imxuart_platform_data uart_pdata __initconst = ;
static int mxc_mmc1_get_ro(struct device *dev)
static int gpio_det, gpio_wp;
#define MMC_PAD_CFG (PAD_CTL_DRV_MAX | PAD_CTL_SRE_FAST | PAD_CTL_HYS_CMOS | \
PAD_CTL_ODE_CMOS | PAD_CTL_100K_PU)
static int mxc_mmc1_init(struct device *dev,
irq_handler_t detect_irq, void *data)
static void mxc_mmc1_exit(struct device *dev, void *data)
static const struct imxmmc_platform_data mmc_pdata __initconst = ;
static const struct ipu_platform_data ipu_data __initconst = ;
static const struct fb_videomode fb_modedb = ;
static struct mx3fb_platform_data fb_pdata __initdata = ;
#define LCD_VCC_EN_GPIO	 (7)
static void __init mx31lilly_init_fb(void)
void __init mx31lilly_db_init(void)

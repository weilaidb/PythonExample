static int armadillo5x0_pins[] = ;
#define OTG_RESET IOMUX_TO_GPIO(MX31_PIN_STXD4)
#define USBH2_RESET IOMUX_TO_GPIO(MX31_PIN_SCK6)
#define USBH2_CS IOMUX_TO_GPIO(MX31_PIN_GPIO1_3)
#define USB_PAD_CFG (PAD_CTL_DRV_MAX | PAD_CTL_SRE_FAST | PAD_CTL_HYS_CMOS | \
PAD_CTL_ODE_CMOS | PAD_CTL_100K_PU)
static int usbotg_init(struct platform_device *pdev)
static int usbh2_init(struct platform_device *pdev)
static struct mxc_usbh_platform_data usbotg_pdata __initdata = ;
static struct mxc_usbh_platform_data usbh2_pdata __initdata = ;
#define ARMADILLO5X0_RTC_GPIO	IOMUX_TO_GPIO(MX31_PIN_SRXD4)
static struct i2c_board_info armadillo5x0_i2c_rtc = ;
static struct gpio_keys_button armadillo5x0_buttons[] = ;
static const struct gpio_keys_platform_data
armadillo5x0_button_data __initconst = ;
static const struct mxc_nand_platform_data
armadillo5x0_nand_board_info __initconst = ;
static struct mtd_partition armadillo5x0_nor_flash_partitions[] = ;
static struct physmap_flash_data armadillo5x0_nor_flash_pdata = ;
static struct resource armadillo5x0_nor_flash_resource = ;
static struct platform_device armadillo5x0_nor_flash = ;
static const struct fb_videomode fb_modedb[] = ;
static const struct ipu_platform_data mx3_ipu_data __initconst = ;
static struct mx3fb_platform_data mx3fb_pdata __initdata = ;
static int armadillo5x0_sdhc1_get_ro(struct device *dev)
static int armadillo5x0_sdhc1_init(struct device *dev,
irq_handler_t detect_irq, void *data)
static void armadillo5x0_sdhc1_exit(struct device *dev, void *data)
static const struct imxmmc_platform_data sdhc_pdata __initconst = ;
static struct resource armadillo5x0_smc911x_resources[] = ;
static struct smsc911x_platform_config smsc911x_info = ;
static struct platform_device armadillo5x0_smc911x_device = ;
static const struct imxuart_platform_data uart_pdata __initconst = ;
static struct platform_device *devices[] __initdata = ;
static void __init armadillo5x0_init(void)
static void __init armadillo5x0_timer_init(void)
static struct sys_timer armadillo5x0_timer = ;
MACHINE_START(ARMADILLO5X0, "Armadillo-500")
.boot_params = MX3x_PHYS_OFFSET + 0x100,
.map_io = mx31_map_io,
.init_early = imx31_init_early,
.init_irq = mx31_init_irq,
.timer = &armadillo5x0_timer,
.init_machine = armadillo5x0_init,
MACHINE_END

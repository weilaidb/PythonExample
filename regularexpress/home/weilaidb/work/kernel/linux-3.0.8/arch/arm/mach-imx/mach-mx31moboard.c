static unsigned int moboard_pins[] = ;
static struct physmap_flash_data mx31moboard_flash_data = ;
static struct resource mx31moboard_flash_resource = ;
static struct platform_device mx31moboard_flash = ;
static int moboard_uart0_init(struct platform_device *pdev)
static void moboard_uart0_exit(struct platform_device *pdev)
static const struct imxuart_platform_data uart0_pdata __initconst = ;
static const struct imxuart_platform_data uart4_pdata __initconst = ;
static const struct imxi2c_platform_data moboard_i2c0_data __initconst = ;
static const struct imxi2c_platform_data moboard_i2c1_data __initconst = ;
static int moboard_spi1_cs[] = ;
static const struct spi_imx_master moboard_spi1_pdata __initconst = ;
static struct regulator_consumer_supply sdhc_consumers[] = ;
static struct regulator_init_data sdhc_vreg_data = ;
static struct regulator_consumer_supply cam_consumers[] = ;
static struct regulator_init_data cam_vreg_data = ;
static struct mc13xxx_regulator_init_data moboard_regulators[] = ;
static struct mc13783_led_platform_data moboard_led[] = ;
static struct mc13783_leds_platform_data moboard_leds = ;
static struct mc13xxx_platform_data moboard_pmic = ;
static struct spi_board_info moboard_spi_board_info[] __initdata = ;
static int moboard_spi2_cs[] = ;
static const struct spi_imx_master moboard_spi2_pdata __initconst = ;
#define SDHC1_CD IOMUX_TO_GPIO(MX31_PIN_ATA_CS0)
#define SDHC1_WP IOMUX_TO_GPIO(MX31_PIN_ATA_CS1)
static int moboard_sdhc1_get_ro(struct device *dev)
static int moboard_sdhc1_init(struct device *dev, irq_handler_t detect_irq,
void *data)
static void moboard_sdhc1_exit(struct device *dev, void *data)
static const struct imxmmc_platform_data sdhc1_pdata __initconst = ;
#define USB_RESET_B	IOMUX_TO_GPIO(MX31_PIN_GPIO1_0)
#define USB_PAD_CFG (PAD_CTL_DRV_MAX | PAD_CTL_SRE_FAST | PAD_CTL_HYS_CMOS | \
PAD_CTL_ODE_CMOS)
#define OTG_EN_B IOMUX_TO_GPIO(MX31_PIN_USB_OC)
#define USBH2_EN_B IOMUX_TO_GPIO(MX31_PIN_SCK6)
static void usb_xcvr_reset(void)
static int moboard_usbh2_init_hw(struct platform_device *pdev)
static struct mxc_usbh_platform_data usbh2_pdata __initdata = ;
static int __init moboard_usbh2_init(void)
static struct gpio_led mx31moboard_leds[] = ;
static struct gpio_led_platform_data mx31moboard_led_pdata = ;
static struct platform_device mx31moboard_leds_device = ;
static const struct ipu_platform_data mx3_ipu_data __initconst = ;
static struct platform_device *devices[] __initdata = ;
static struct mx3_camera_pdata camera_pdata __initdata = ;
static phys_addr_t mx3_camera_base __initdata;
#define MX3_CAMERA_BUF_SIZE SZ_4M
static int __init mx31moboard_init_cam(void)
static int mx31moboard_baseboard;
core_param(mx31moboard_baseboard, mx31moboard_baseboard, int, 0444);
static void __init mx31moboard_init(void)
static void __init mx31moboard_timer_init(void)
struct sys_timer mx31moboard_timer = ;
static void __init mx31moboard_reserve(void)
MACHINE_START(MX31MOBOARD, "EPFL Mobots mx31moboard")
.boot_params = MX3x_PHYS_OFFSET + 0x100,
.reserve = mx31moboard_reserve,
.map_io = mx31_map_io,
.init_early = imx31_init_early,
.init_irq = mx31_init_irq,
.timer = &mx31moboard_timer,
.init_machine = mx31moboard_init,
MACHINE_END

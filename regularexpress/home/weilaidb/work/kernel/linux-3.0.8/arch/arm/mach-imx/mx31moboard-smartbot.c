static unsigned int smartbot_pins[] = ;
static const struct imxuart_platform_data uart_pdata __initconst = ;
#define CAM_POWER	IOMUX_TO_GPIO(MX31_PIN_GPIO3_1)
#define CAM_RST_B	IOMUX_TO_GPIO(MX31_PIN_GPIO3_0)
static int smartbot_cam_power(struct device *dev, int on)
static int smartbot_cam_reset(struct device *dev)
static struct i2c_board_info smartbot_i2c_devices[] = ;
static struct soc_camera_link base_iclink = ;
static struct platform_device smartbot_camera[] = ;
static struct platform_device *smartbot_cameras[] __initdata = ;
static int __init smartbot_cam_init(void)
static const struct fsl_usb2_platform_data usb_pdata __initconst = ;
#if defined(CONFIG_USB_ULPI)
static int smartbot_otg_init(struct platform_device *pdev)
static struct mxc_usbh_platform_data otg_host_pdata __initdata = ;
static int __init smartbot_otg_host_init(void)
static inline int smartbot_otg_host_init(void)
#define POWER_EN IOMUX_TO_GPIO(MX31_PIN_DTR_DCE1)
#define DSPIC_RST_B IOMUX_TO_GPIO(MX31_PIN_DSR_DCE1)
#define TRSLAT_RST_B IOMUX_TO_GPIO(MX31_PIN_RI_DCE1)
#define TRSLAT_SRC_CHOICE IOMUX_TO_GPIO(MX31_PIN_DCD_DCE1)
static void smartbot_resets_init(void)
void __init mx31moboard_smartbot_init(int board)

static unsigned int marxbot_pins[] = ;
#define SDHC2_CD IOMUX_TO_GPIO(MX31_PIN_ATA_DIOR)
#define SDHC2_WP IOMUX_TO_GPIO(MX31_PIN_ATA_DIOW)
static int marxbot_sdhc2_get_ro(struct device *dev)
static int marxbot_sdhc2_init(struct device *dev, irq_handler_t detect_irq,
void *data)
static void marxbot_sdhc2_exit(struct device *dev, void *data)
static const struct imxmmc_platform_data sdhc2_pdata __initconst = ;
#define TRSLAT_RST_B	IOMUX_TO_GPIO(MX31_PIN_STXD5)
#define DSPICS_RST_B	IOMUX_TO_GPIO(MX31_PIN_SRXD5)
static void dspics_resets_init(void)
static struct spi_board_info marxbot_spi_board_info[] __initdata = ;
#define TURRETCAM_POWER	IOMUX_TO_GPIO(MX31_PIN_GPIO3_1)
#define BASECAM_POWER	IOMUX_TO_GPIO(MX31_PIN_CSI_D5)
#define TURRETCAM_RST_B	IOMUX_TO_GPIO(MX31_PIN_GPIO3_0)
#define BASECAM_RST_B	IOMUX_TO_GPIO(MX31_PIN_CSI_D4)
#define CAM_CHOICE	IOMUX_TO_GPIO(MX31_PIN_TXD2)
static int marxbot_basecam_power(struct device *dev, int on)
static int marxbot_basecam_reset(struct device *dev)
static struct i2c_board_info marxbot_i2c_devices[] = ;
static struct soc_camera_link base_iclink = ;
static struct platform_device marxbot_camera[] = ;
static struct platform_device *marxbot_cameras[] __initdata = ;
static int __init marxbot_cam_init(void)
#define SEL0 IOMUX_TO_GPIO(MX31_PIN_DTR_DCE1)
#define SEL1 IOMUX_TO_GPIO(MX31_PIN_DSR_DCE1)
#define SEL2 IOMUX_TO_GPIO(MX31_PIN_RI_DCE1)
#define SEL3 IOMUX_TO_GPIO(MX31_PIN_DCD_DCE1)
static void marxbot_init_sel_gpios(void)
#define USB_PAD_CFG (PAD_CTL_DRV_MAX | PAD_CTL_SRE_FAST | PAD_CTL_HYS_CMOS | \
PAD_CTL_ODE_CMOS | PAD_CTL_100K_PU)
static int marxbot_usbh1_hw_init(struct platform_device *pdev)
#define USBH1_VBUSEN_B	IOMUX_TO_GPIO(MX31_PIN_NFRE_B)
#define USBH1_MODE	IOMUX_TO_GPIO(MX31_PIN_NFALE)
static int marxbot_isp1105_init(struct otg_transceiver *otg)
static int marxbot_isp1105_set_vbus(struct otg_transceiver *otg, bool on)
static struct mxc_usbh_platform_data usbh1_pdata __initdata = ;
static int __init marxbot_usbh1_init(void)
static const struct fsl_usb2_platform_data usb_pdata __initconst = ;
void __init mx31moboard_marxbot_init(void)

static unsigned int devboard_pins[] = ;
static const struct imxuart_platform_data uart_pdata __initconst = ;
#define SDHC2_CD IOMUX_TO_GPIO(MX31_PIN_ATA_DIOR)
#define SDHC2_WP IOMUX_TO_GPIO(MX31_PIN_ATA_DIOW)
static int devboard_sdhc2_get_ro(struct device *dev)
static int devboard_sdhc2_init(struct device *dev, irq_handler_t detect_irq,
void *data)
static void devboard_sdhc2_exit(struct device *dev, void *data)
static const struct imxmmc_platform_data sdhc2_pdata __initconst = ;
#define SEL0 IOMUX_TO_GPIO(MX31_PIN_DTR_DCE1)
#define SEL1 IOMUX_TO_GPIO(MX31_PIN_DSR_DCE1)
#define SEL2 IOMUX_TO_GPIO(MX31_PIN_RI_DCE1)
#define SEL3 IOMUX_TO_GPIO(MX31_PIN_DCD_DCE1)
static void devboard_init_sel_gpios(void)
#define USB_PAD_CFG (PAD_CTL_DRV_MAX | PAD_CTL_SRE_FAST | PAD_CTL_HYS_CMOS | \
PAD_CTL_ODE_CMOS | PAD_CTL_100K_PU)
static int devboard_usbh1_hw_init(struct platform_device *pdev)
#define USBH1_VBUSEN_B	IOMUX_TO_GPIO(MX31_PIN_NFRE_B)
#define USBH1_MODE	IOMUX_TO_GPIO(MX31_PIN_NFALE)
static int devboard_isp1105_init(struct otg_transceiver *otg)
static int devboard_isp1105_set_vbus(struct otg_transceiver *otg, bool on)
static struct mxc_usbh_platform_data usbh1_pdata __initdata = ;
static int __init devboard_usbh1_init(void)
static const struct fsl_usb2_platform_data usb_pdata __initconst = ;
void __init mx31moboard_devboard_init(void)

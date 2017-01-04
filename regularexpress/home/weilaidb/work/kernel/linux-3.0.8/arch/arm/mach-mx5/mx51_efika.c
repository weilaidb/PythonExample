#define MX51_USB_CTRL_1_OFFSET          0x10
#define MX51_USB_CTRL_UH1_EXT_CLK_EN    (1 << 25)
#define	MX51_USB_PLL_DIV_19_2_MHZ	0x01
#define EFIKAMX_USB_HUB_RESET	IMX_GPIO_NR(1, 5)
#define EFIKAMX_USBH1_STP	IMX_GPIO_NR(1, 27)
#define EFIKAMX_SPI_CS0		IMX_GPIO_NR(4, 24)
#define EFIKAMX_SPI_CS1		IMX_GPIO_NR(4, 25)
#define EFIKAMX_PMIC		IMX_GPIO_NR(1, 6)
static iomux_v3_cfg_t mx51efika_pads[] = ;
static const struct imxuart_platform_data uart_pdata = ;
static int initialize_otg_port(struct platform_device *pdev)
static struct mxc_usbh_platform_data dr_utmi_config = ;
static int initialize_usbh1_port(struct platform_device *pdev)
static struct mxc_usbh_platform_data usbh1_config = ;
static void mx51_efika_hubreset(void)
static void __init mx51_efika_usb(void)
static struct mtd_partition mx51_efika_spi_nor_partitions[] = ;
static struct flash_platform_data mx51_efika_spi_flash_data = ;
static struct regulator_consumer_supply sw1_consumers[] = ;
static struct regulator_consumer_supply vdig_consumers[] = ;
static struct regulator_consumer_supply vvideo_consumers[] = ;
static struct regulator_consumer_supply vsd_consumers[] = ;
static struct regulator_consumer_supply pwgt1_consumer[] = ;
static struct regulator_consumer_supply pwgt2_consumer[] = ;
static struct regulator_consumer_supply coincell_consumer[] = ;
static struct regulator_init_data sw1_init = ;
static struct regulator_init_data sw2_init = ;
static struct regulator_init_data sw3_init = ;
static struct regulator_init_data sw4_init = ;
static struct regulator_init_data viohi_init = ;
static struct regulator_init_data vusb_init = ;
static struct regulator_init_data swbst_init = ;
static struct regulator_init_data vdig_init = ;
static struct regulator_init_data vpll_init = ;
static struct regulator_init_data vusb2_init = ;
static struct regulator_init_data vvideo_init = ;
static struct regulator_init_data vaudio_init = ;
static struct regulator_init_data vsd_init = ;
static struct regulator_init_data vcam_init = ;
static struct regulator_init_data vgen1_init = ;
static struct regulator_init_data vgen2_init = ;
static struct regulator_init_data vgen3_init = ;
static struct regulator_init_data gpo1_init = ;
static struct regulator_init_data gpo2_init = ;
static struct regulator_init_data gpo3_init = ;
static struct regulator_init_data gpo4_init = ;
static struct regulator_init_data pwgt1_init = ;
static struct regulator_init_data pwgt2_init = ;
static struct regulator_init_data vcoincell_init = ;
static struct mc13xxx_regulator_init_data mx51_efika_regulators[] = ;
static struct mc13xxx_platform_data mx51_efika_mc13892_data = ;
static struct spi_board_info mx51_efika_spi_board_info[] __initdata = ;
static int mx51_efika_spi_cs[] = ;
static const struct spi_imx_master mx51_efika_spi_pdata __initconst = ;
void __init efika_board_common_init(void)

#define BABBAGE_USB_HUB_RESET	IMX_GPIO_NR(1, 7)
#define BABBAGE_USBH1_STP	IMX_GPIO_NR(1, 27)
#define BABBAGE_PHY_RESET	IMX_GPIO_NR(2, 5)
#define BABBAGE_FEC_PHY_RESET	IMX_GPIO_NR(2, 14)
#define BABBAGE_POWER_KEY	IMX_GPIO_NR(2, 21)
#define BABBAGE_ECSPI1_CS0	IMX_GPIO_NR(4, 24)
#define BABBAGE_ECSPI1_CS1	IMX_GPIO_NR(4, 25)
#define MX51_USB_CTRL_1_OFFSET			0x10
#define MX51_USB_CTRL_UH1_EXT_CLK_EN		(1 << 25)
#define	MX51_USB_PLLDIV_12_MHZ		0x00
#define	MX51_USB_PLL_DIV_19_2_MHZ	0x01
#define	MX51_USB_PLL_DIV_24_MHZ	0x02
static struct gpio_keys_button babbage_buttons[] = ;
static const struct gpio_keys_platform_data imx_button_data __initconst = ;
static iomux_v3_cfg_t mx51babbage_pads[] = ;
static const struct imxuart_platform_data uart_pdata __initconst = ;
static const struct imxi2c_platform_data babbage_i2c_data __initconst = ;
static struct imxi2c_platform_data babbage_hsi2c_data = ;
static int gpio_usbh1_active(void)
static inline void babbage_usbhub_reset(void)
static inline void babbage_fec_reset(void)
static int initialize_otg_port(struct platform_device *pdev)
static int initialize_usbh1_port(struct platform_device *pdev)
static struct mxc_usbh_platform_data dr_utmi_config = ;
static struct fsl_usb2_platform_data usb_pdata = ;
static struct mxc_usbh_platform_data usbh1_config = ;
static int otg_mode_host;
static int __init babbage_otg_mode(char *options)
__setup("otg_mode=", babbage_otg_mode);
static struct spi_board_info mx51_babbage_spi_board_info[] __initdata = ;
static int mx51_babbage_spi_cs[] = ;
static const struct spi_imx_master mx51_babbage_spi_pdata __initconst = ;
static void __init mx51_babbage_init(void)
static void __init mx51_babbage_timer_init(void)
static struct sys_timer mx51_babbage_timer = ;
MACHINE_START(MX51_BABBAGE, "Freescale MX51 Babbage Board")
.boot_params = MX51_PHYS_OFFSET + 0x100,
.map_io = mx51_map_io,
.init_early = imx51_init_early,
.init_irq = mx51_init_irq,
.timer = &mx51_babbage_timer,
.init_machine = mx51_babbage_init,
MACHINE_END

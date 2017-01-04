#define USBH1_RST		IMX_GPIO_NR(2, 28)
#define ETH_RST			IMX_GPIO_NR(2, 31)
#define TSC2007_IRQGPIO		IMX_GPIO_NR(3, 12)
#define CAN_IRQGPIO		IMX_GPIO_NR(1, 1)
#define CAN_RST			IMX_GPIO_NR(4, 15)
#define CAN_NCS			IMX_GPIO_NR(4, 24)
#define CAN_RXOBF		IMX_GPIO_NR(1, 4)
#define CAN_RX1BF		IMX_GPIO_NR(1, 6)
#define CAN_TXORTS		IMX_GPIO_NR(1, 7)
#define CAN_TX1RTS		IMX_GPIO_NR(1, 8)
#define CAN_TX2RTS		IMX_GPIO_NR(1, 9)
#define I2C_SCL			IMX_GPIO_NR(4, 16)
#define I2C_SDA			IMX_GPIO_NR(4, 17)
#define MX51_USB_CTRL_1_OFFSET		0x10
#define MX51_USB_CTRL_UH1_EXT_CLK_EN	(1 << 25)
#define	MX51_USB_PLLDIV_12_MHZ		0x00
#define	MX51_USB_PLL_DIV_19_2_MHZ	0x01
#define	MX51_USB_PLL_DIV_24_MHZ		0x02
static iomux_v3_cfg_t eukrea_cpuimx51sd_pads[] = ;
static const struct imxuart_platform_data uart_pdata __initconst = ;
static struct tsc2007_platform_data tsc2007_info = ;
static struct i2c_board_info eukrea_cpuimx51sd_i2c_devices[] = ;
static const struct mxc_nand_platform_data
eukrea_cpuimx51sd_nand_board_info __initconst = ;
static int initialize_otg_port(struct platform_device *pdev)
static int initialize_usbh1_port(struct platform_device *pdev)
static struct mxc_usbh_platform_data dr_utmi_config = ;
static struct fsl_usb2_platform_data usb_pdata = ;
static struct mxc_usbh_platform_data usbh1_config = ;
static int otg_mode_host;
static int __init eukrea_cpuimx51sd_otg_mode(char *options)
__setup("otg_mode=", eukrea_cpuimx51sd_otg_mode);
static struct i2c_gpio_platform_data pdata = ;
static struct platform_device hsi2c_gpio_device = ;
static struct mcp251x_platform_data mcp251x_info = ;
static struct spi_board_info cpuimx51sd_spi_device[] = ;
static int cpuimx51sd_spi1_cs[] = ;
static const struct spi_imx_master cpuimx51sd_ecspi1_pdata __initconst = ;
static struct platform_device *platform_devices[] __initdata = ;
static void __init eukrea_cpuimx51sd_init(void)
static void __init eukrea_cpuimx51sd_timer_init(void)
static struct sys_timer mxc_timer = ;
MACHINE_START(EUKREA_CPUIMX51SD, "Eukrea CPUIMX51SD")
.boot_params = MX51_PHYS_OFFSET + 0x100,
.map_io = mx51_map_io,
.init_early = imx51_init_early,
.init_irq = mx51_init_irq,
.timer = &mxc_timer,
.init_machine = eukrea_cpuimx51sd_init,
MACHINE_END

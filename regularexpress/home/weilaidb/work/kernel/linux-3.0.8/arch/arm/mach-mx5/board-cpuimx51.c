#define CPUIMX51_USBH1_STP	IMX_GPIO_NR(1, 27)
#define CPUIMX51_QUARTA_GPIO	IMX_GPIO_NR(3, 28)
#define CPUIMX51_QUARTB_GPIO	IMX_GPIO_NR(3, 25)
#define CPUIMX51_QUARTC_GPIO	IMX_GPIO_NR(3, 26)
#define CPUIMX51_QUARTD_GPIO	IMX_GPIO_NR(3, 27)
#define CPUIMX51_QUARTA_IRQ	(MXC_INTERNAL_IRQS + CPUIMX51_QUARTA_GPIO)
#define CPUIMX51_QUARTB_IRQ	(MXC_INTERNAL_IRQS + CPUIMX51_QUARTB_GPIO)
#define CPUIMX51_QUARTC_IRQ	(MXC_INTERNAL_IRQS + CPUIMX51_QUARTC_GPIO)
#define CPUIMX51_QUARTD_IRQ	(MXC_INTERNAL_IRQS + CPUIMX51_QUARTD_GPIO)
#define CPUIMX51_QUART_XTAL	14745600
#define CPUIMX51_QUART_REGSHIFT	17
#define MX51_USB_CTRL_1_OFFSET		0x10
#define MX51_USB_CTRL_UH1_EXT_CLK_EN	(1 << 25)
#define	MX51_USB_PLLDIV_12_MHZ		0x00
#define	MX51_USB_PLL_DIV_19_2_MHZ	0x01
#define	MX51_USB_PLL_DIV_24_MHZ		0x02
static struct plat_serial8250_port serial_platform_data[] = ;
static struct platform_device serial_device = ;
static struct platform_device *devices[] __initdata = ;
static iomux_v3_cfg_t eukrea_cpuimx51_pads[] = ;
static const struct mxc_nand_platform_data
eukrea_cpuimx51_nand_board_info __initconst = ;
static const struct imxuart_platform_data uart_pdata __initconst = ;
static const
struct imxi2c_platform_data eukrea_cpuimx51_i2c_data __initconst = ;
static struct i2c_board_info eukrea_cpuimx51_i2c_devices[] = ;
static int initialize_otg_port(struct platform_device *pdev)
static int initialize_usbh1_port(struct platform_device *pdev)
static struct mxc_usbh_platform_data dr_utmi_config = ;
static struct fsl_usb2_platform_data usb_pdata = ;
static struct mxc_usbh_platform_data usbh1_config = ;
static int otg_mode_host;
static int __init eukrea_cpuimx51_otg_mode(char *options)
__setup("otg_mode=", eukrea_cpuimx51_otg_mode);
static void __init eukrea_cpuimx51_init(void)
static void __init eukrea_cpuimx51_timer_init(void)
static struct sys_timer mxc_timer = ;
MACHINE_START(EUKREA_CPUIMX51, "Eukrea CPUIMX51 Module")
.boot_params = MX51_PHYS_OFFSET + 0x100,
.map_io = mx51_map_io,
.init_early = imx51_init_early,
.init_irq = mx51_init_irq,
.timer = &mxc_timer,
.init_machine = eukrea_cpuimx51_init,
MACHINE_END

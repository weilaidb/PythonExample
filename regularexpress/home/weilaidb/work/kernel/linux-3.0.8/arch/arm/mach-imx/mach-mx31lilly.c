static struct resource smsc91x_resources[] = ;
static struct smsc911x_platform_config smsc911x_config = ;
static struct platform_device smsc91x_device = ;
static struct physmap_flash_data nor_flash_data = ;
static struct resource nor_flash_resource = ;
static struct platform_device physmap_flash_device = ;
#define USB_PAD_CFG (PAD_CTL_DRV_MAX | PAD_CTL_SRE_FAST | PAD_CTL_HYS_CMOS | \
PAD_CTL_ODE_CMOS | PAD_CTL_100K_PU)
static int usbh1_init(struct platform_device *pdev)
static int usbh2_init(struct platform_device *pdev)
static const struct mxc_usbh_platform_data usbh1_pdata __initconst = ;
static struct mxc_usbh_platform_data usbh2_pdata __initdata = ;
static void lilly1131_usb_init(void)
static int spi_internal_chipselect[] = ;
static const struct spi_imx_master spi0_pdata __initconst = ;
static const struct spi_imx_master spi1_pdata __initconst = ;
static struct mc13xxx_platform_data mc13783_pdata __initdata = ;
static struct spi_board_info mc13783_dev __initdata = ;
static struct platform_device *devices[] __initdata = ;
static int mx31lilly_baseboard;
core_param(mx31lilly_baseboard, mx31lilly_baseboard, int, 0444);
static void __init mx31lilly_board_init(void)
static void __init mx31lilly_timer_init(void)
static struct sys_timer mx31lilly_timer = ;
MACHINE_START(LILLY1131, "INCO startec LILLY-1131")
.boot_params = MX3x_PHYS_OFFSET + 0x100,
.map_io = mx31_map_io,
.init_early = imx31_init_early,
.init_irq = mx31_init_irq,
.timer = &mx31lilly_timer,
.init_machine = mx31lilly_board_init,
MACHINE_END

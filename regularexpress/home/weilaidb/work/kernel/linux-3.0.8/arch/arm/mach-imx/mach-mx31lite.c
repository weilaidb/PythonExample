static unsigned int mx31lite_pins[] = ;
static const struct mxc_nand_platform_data
mx31lite_nand_board_info __initconst  = ;
static struct smsc911x_platform_config smsc911x_config = ;
static struct resource smsc911x_resources[] = ;
static struct platform_device smsc911x_device = ;
static int spi_internal_chipselect[] = ;
static const struct spi_imx_master spi1_pdata __initconst = ;
static struct mc13xxx_platform_data mc13783_pdata __initdata = ;
static struct spi_board_info mc13783_spi_dev __initdata = ;
#define USB_PAD_CFG (PAD_CTL_DRV_MAX | PAD_CTL_SRE_FAST | PAD_CTL_HYS_CMOS | \
PAD_CTL_ODE_CMOS | PAD_CTL_100K_PU)
static int usbh2_init(struct platform_device *pdev)
static struct mxc_usbh_platform_data usbh2_pdata __initdata = ;
static struct physmap_flash_data nor_flash_data = ;
static struct resource nor_flash_resource = ;
static struct platform_device physmap_flash_device = ;
static struct map_desc mx31lite_io_desc[] __initdata = ;
void __init mx31lite_map_io(void)
static int mx31lite_baseboard;
core_param(mx31lite_baseboard, mx31lite_baseboard, int, 0444);
static void __init mx31lite_init(void)
static void __init mx31lite_timer_init(void)
struct sys_timer mx31lite_timer = ;
MACHINE_START(MX31LITE, "LogicPD i.MX31 SOM")
.boot_params = MX3x_PHYS_OFFSET + 0x100,
.map_io = mx31lite_map_io,
.init_early = imx31_init_early,
.init_irq = mx31_init_irq,
.timer = &mx31lite_timer,
.init_machine = mx31lite_init,
MACHINE_END

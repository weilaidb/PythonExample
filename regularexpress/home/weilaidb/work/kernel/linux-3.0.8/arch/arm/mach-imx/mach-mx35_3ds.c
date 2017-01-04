#define EXPIO_PARENT_INT	(MXC_INTERNAL_IRQS + GPIO_PORTA + 1)
static const struct imxuart_platform_data uart_pdata __initconst = ;
static struct physmap_flash_data mx35pdk_flash_data = ;
static struct resource mx35pdk_flash_resource = ;
static struct platform_device mx35pdk_flash = ;
static const struct mxc_nand_platform_data mx35pdk_nand_board_info __initconst = ;
static struct platform_device *devices[] __initdata = ;
static iomux_v3_cfg_t mx35pdk_pads[] = ;
static int mx35_3ds_otg_init(struct platform_device *pdev)
static const struct fsl_usb2_platform_data usb_otg_pdata __initconst = ;
static struct mxc_usbh_platform_data otg_pdata __initdata = ;
static int mx35_3ds_usbh_init(struct platform_device *pdev)
static const struct mxc_usbh_platform_data usb_host_pdata __initconst = ;
static int otg_mode_host;
static int __init mx35_3ds_otg_mode(char *options)
__setup("otg_mode=", mx35_3ds_otg_mode);
static const struct imxi2c_platform_data mx35_3ds_i2c0_data __initconst = ;
static void __init mx35_3ds_init(void)
static void __init mx35pdk_timer_init(void)
struct sys_timer mx35pdk_timer = ;
MACHINE_START(MX35_3DS, "Freescale MX35PDK")
.boot_params = MX3x_PHYS_OFFSET + 0x100,
.map_io = mx35_map_io,
.init_early = imx35_init_early,
.init_irq = mx35_init_irq,
.timer = &mx35pdk_timer,
.init_machine = mx35_3ds_init,
MACHINE_END

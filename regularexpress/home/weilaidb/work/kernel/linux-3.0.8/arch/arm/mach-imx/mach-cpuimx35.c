static const struct imxuart_platform_data uart_pdata __initconst = ;
static const struct imxi2c_platform_data
eukrea_cpuimx35_i2c0_data __initconst = ;
static struct tsc2007_platform_data tsc2007_info = ;
#define TSC2007_IRQGPIO		IMX_GPIO_NR(3, 2)
static struct i2c_board_info eukrea_cpuimx35_i2c_devices[] = ;
static iomux_v3_cfg_t eukrea_cpuimx35_pads[] = ;
static const struct mxc_nand_platform_data
eukrea_cpuimx35_nand_board_info __initconst = ;
static int eukrea_cpuimx35_otg_init(struct platform_device *pdev)
static const struct mxc_usbh_platform_data otg_pdata __initconst = ;
static int eukrea_cpuimx35_usbh1_init(struct platform_device *pdev)
static const struct mxc_usbh_platform_data usbh1_pdata __initconst = ;
static const struct fsl_usb2_platform_data otg_device_pdata __initconst = ;
static int otg_mode_host;
static int __init eukrea_cpuimx35_otg_mode(char *options)
__setup("otg_mode=", eukrea_cpuimx35_otg_mode);
static void __init eukrea_cpuimx35_init(void)
static void __init eukrea_cpuimx35_timer_init(void)
struct sys_timer eukrea_cpuimx35_timer = ;
MACHINE_START(EUKREA_CPUIMX35, "Eukrea CPUIMX35")
.boot_params = MX3x_PHYS_OFFSET + 0x100,
.map_io = mx35_map_io,
.init_early = imx35_init_early,
.init_irq = mx35_init_irq,
.timer = &eukrea_cpuimx35_timer,
.init_machine = eukrea_cpuimx35_init,
MACHINE_END

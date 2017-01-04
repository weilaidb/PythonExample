static const int eukrea_cpuimx27_pins[] __initconst = ;
static struct physmap_flash_data eukrea_cpuimx27_flash_data = ;
static struct resource eukrea_cpuimx27_flash_resource = ;
static struct platform_device eukrea_cpuimx27_nor_mtd_device = ;
static const struct imxuart_platform_data uart_pdata __initconst = ;
static const struct mxc_nand_platform_data
cpuimx27_nand_board_info __initconst = ;
static struct platform_device *platform_devices[] __initdata = ;
static const struct imxi2c_platform_data cpuimx27_i2c1_data __initconst = ;
static struct i2c_board_info eukrea_cpuimx27_i2c_devices[] = ;
#if defined(CONFIG_SERIAL_8250) || defined(CONFIG_SERIAL_8250_MODULE)
static struct plat_serial8250_port serial_platform_data[] = ;
static struct platform_device serial_device = ;
static int eukrea_cpuimx27_otg_init(struct platform_device *pdev)
static struct mxc_usbh_platform_data otg_pdata __initdata = ;
static int eukrea_cpuimx27_usbh2_init(struct platform_device *pdev)
static struct mxc_usbh_platform_data usbh2_pdata __initdata = ;
static const struct fsl_usb2_platform_data otg_device_pdata __initconst = ;
static int otg_mode_host;
static int __init eukrea_cpuimx27_otg_mode(char *options)
__setup("otg_mode=", eukrea_cpuimx27_otg_mode);
static void __init eukrea_cpuimx27_init(void)
static void __init eukrea_cpuimx27_timer_init(void)
static struct sys_timer eukrea_cpuimx27_timer = ;
MACHINE_START(CPUIMX27, "EUKREA CPUIMX27")
.boot_params = MX27_PHYS_OFFSET + 0x100,
.map_io = mx27_map_io,
.init_early = imx27_init_early,
.init_irq = mx27_init_irq,
.timer = &eukrea_cpuimx27_timer,
.init_machine = eukrea_cpuimx27_init,
MACHINE_END

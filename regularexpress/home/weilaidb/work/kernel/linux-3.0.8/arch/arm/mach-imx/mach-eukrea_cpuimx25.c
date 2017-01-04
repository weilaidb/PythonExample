static const struct imxuart_platform_data uart_pdata __initconst = ;
static iomux_v3_cfg_t eukrea_cpuimx25_pads[] = ;
static const struct fec_platform_data mx25_fec_pdata __initconst = ;
static const struct mxc_nand_platform_data
eukrea_cpuimx25_nand_board_info __initconst = ;
static const struct imxi2c_platform_data
eukrea_cpuimx25_i2c0_data __initconst = ;
static struct i2c_board_info eukrea_cpuimx25_i2c_devices[] = ;
static int eukrea_cpuimx25_otg_init(struct platform_device *pdev)
static const struct mxc_usbh_platform_data otg_pdata __initconst = ;
static int eukrea_cpuimx25_usbh2_init(struct platform_device *pdev)
static const struct mxc_usbh_platform_data usbh2_pdata __initconst = ;
static const struct fsl_usb2_platform_data otg_device_pdata __initconst = ;
static int otg_mode_host;
static int __init eukrea_cpuimx25_otg_mode(char *options)
__setup("otg_mode=", eukrea_cpuimx25_otg_mode);
static void __init eukrea_cpuimx25_init(void)
static void __init eukrea_cpuimx25_timer_init(void)
static struct sys_timer eukrea_cpuimx25_timer = ;
MACHINE_START(EUKREA_CPUIMX25, "Eukrea CPUIMX25")
.boot_params = MX25_PHYS_OFFSET + 0x100,
.map_io = mx25_map_io,
.init_early = imx25_init_early,
.init_irq = mx25_init_irq,
.timer = &eukrea_cpuimx25_timer,
.init_machine = eukrea_cpuimx25_init,
MACHINE_END

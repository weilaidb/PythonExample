#define EXPIO_PARENT_INT	IOMUX_TO_IRQ(MX31_PIN_GPIO1_1)
static int mx31_3ds_pins[] = ;
static phys_addr_t mx3_camera_base __initdata;
#define MX31_3DS_CAMERA_BUF_SIZE SZ_8M
#define MX31_3DS_GPIO_CAMERA_PW IOMUX_TO_GPIO(MX31_PIN_CSI_D5)
#define MX31_3DS_GPIO_CAMERA_RST IOMUX_TO_GPIO(MX31_PIN_RI_DTE1)
static struct gpio mx31_3ds_camera_gpios[] = ;
static const struct mx3_camera_pdata mx31_3ds_camera_pdata __initconst = ;
static int __init mx31_3ds_init_camera(void)
static int mx31_3ds_camera_power(struct device *dev, int on)
static struct i2c_board_info mx31_3ds_i2c_camera = ;
static struct regulator_bulk_data mx31_3ds_camera_regs[] = ;
static struct soc_camera_link iclink_ov2640 = ;
static struct platform_device mx31_3ds_ov2640 = ;
static const struct fb_videomode fb_modedb[] = ;
static struct ipu_platform_data mx3_ipu_data = ;
static struct mx3fb_platform_data mx3fb_pdata __initdata = ;
static struct l4f00242t03_pdata mx31_3ds_l4f00242t03_pdata = ;
#define MX31_3DS_GPIO_SDHC1_CD IOMUX_TO_GPIO(MX31_PIN_GPIO3_1)
#define MX31_3DS_GPIO_SDHC1_BE IOMUX_TO_GPIO(MX31_PIN_GPIO3_0)
static struct gpio mx31_3ds_sdhc1_gpios[] = ;
static int mx31_3ds_sdhc1_init(struct device *dev,
irq_handler_t detect_irq,
void *data)
static void mx31_3ds_sdhc1_exit(struct device *dev, void *data)
static void mx31_3ds_sdhc1_setpower(struct device *dev, unsigned int vdd)
static struct imxmmc_platform_data sdhc1_pdata = ;
static const uint32_t mx31_3ds_keymap[] = ;
static const struct matrix_keymap_data mx31_3ds_keymap_data __initconst = ;
static struct regulator_init_data pwgtx_init = ;
static struct regulator_init_data gpo_init = ;
static struct regulator_consumer_supply vmmc2_consumers[] = ;
static struct regulator_init_data vmmc2_init = ;
static struct regulator_consumer_supply vmmc1_consumers[] = ;
static struct regulator_init_data vmmc1_init = ;
static struct regulator_consumer_supply vgen_consumers[] = ;
static struct regulator_init_data vgen_init = ;
static struct regulator_consumer_supply vvib_consumers[] = ;
static struct regulator_init_data vvib_init = ;
static struct mc13xxx_regulator_init_data mx31_3ds_regulators[] = ;
static struct mc13xxx_platform_data mc13783_pdata = ;
static int spi0_internal_chipselect[] = ;
static const struct spi_imx_master spi0_pdata __initconst = ;
static int spi1_internal_chipselect[] = ;
static const struct spi_imx_master spi1_pdata __initconst = ;
static struct spi_board_info mx31_3ds_spi_devs[] __initdata = ;
static const struct mxc_nand_platform_data
mx31_3ds_nand_board_info __initconst = ;
#define USB_PAD_CFG (PAD_CTL_DRV_MAX | PAD_CTL_SRE_FAST | PAD_CTL_HYS_CMOS | \
PAD_CTL_ODE_CMOS | PAD_CTL_100K_PU)
#define USBOTG_RST_B IOMUX_TO_GPIO(MX31_PIN_USB_PWR)
#define USBH2_RST_B IOMUX_TO_GPIO(MX31_PIN_USB_BYP)
static int mx31_3ds_usbotg_init(void)
static int mx31_3ds_otg_init(struct platform_device *pdev)
static int mx31_3ds_host2_init(struct platform_device *pdev)
static struct mxc_usbh_platform_data otg_pdata __initdata = ;
static struct mxc_usbh_platform_data usbh2_pdata __initdata = ;
static const struct fsl_usb2_platform_data usbotg_pdata __initconst = ;
static int otg_mode_host;
static int __init mx31_3ds_otg_mode(char *options)
__setup("otg_mode=", mx31_3ds_otg_mode);
static const struct imxuart_platform_data uart_pdata __initconst = ;
static const struct imxi2c_platform_data mx31_3ds_i2c0_data __initconst = ;
static struct platform_device *devices[] __initdata = ;
static void __init mx31_3ds_init(void)
static void __init mx31_3ds_timer_init(void)
static struct sys_timer mx31_3ds_timer = ;
static void __init mx31_3ds_reserve(void)
MACHINE_START(MX31_3DS, "Freescale MX31PDK (3DS)")
.boot_params = MX3x_PHYS_OFFSET + 0x100,
.map_io = mx31_map_io,
.init_early = imx31_init_early,
.init_irq = mx31_init_irq,
.timer = &mx31_3ds_timer,
.init_machine = mx31_3ds_init,
.reserve = mx31_3ds_reserve,
MACHINE_END

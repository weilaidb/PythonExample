#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
#define OTG_PHY_CS_GPIO (GPIO_PORTF + 17)
#define SDHC1_IRQ IRQ_GPIOB(25)
static const int visstrim_m10_pins[] __initconst = ;
static struct gpio_keys_button visstrim_gpio_keys[] = ;
static const struct gpio_keys_platform_data
visstrim_gpio_keys_platform_data __initconst = ;
static int visstrim_m10_sdhc1_init(struct device *dev,
irq_handler_t detect_irq, void *data)
static void visstrim_m10_sdhc1_exit(struct device *dev, void *data)
static const struct imxmmc_platform_data visstrim_m10_sdhc_pdata __initconst = ;
static struct physmap_flash_data visstrim_m10_flash_data = ;
static struct resource visstrim_m10_flash_resource = ;
static struct platform_device visstrim_m10_nor_mtd_device = ;
static struct platform_device *platform_devices[] __initdata = ;
static const struct imxuart_platform_data uart_pdata __initconst = ;
static const struct imxi2c_platform_data visstrim_m10_i2c_data __initconst = ;
static struct pca953x_platform_data visstrim_m10_pca9555_pdata = ;
static struct i2c_board_info visstrim_m10_i2c_devices[] = ;
static int otg_phy_init(struct platform_device *pdev)
static const struct mxc_usbh_platform_data
visstrim_m10_usbotg_pdata __initconst = ;
static const struct imx_ssi_platform_data visstrim_m10_ssi_pdata __initconst = ;
static void __init visstrim_m10_board_init(void)
static void __init visstrim_m10_timer_init(void)
static struct sys_timer visstrim_m10_timer = ;
MACHINE_START(IMX27_VISSTRIM_M10, "Vista Silicon Visstrim_M10")
.boot_params = MX27_PHYS_OFFSET + 0x100,
.map_io = mx27_map_io,
.init_early = imx27_init_early,
.init_irq = mx27_init_irq,
.timer = &visstrim_m10_timer,
.init_machine = visstrim_m10_board_init,
MACHINE_END

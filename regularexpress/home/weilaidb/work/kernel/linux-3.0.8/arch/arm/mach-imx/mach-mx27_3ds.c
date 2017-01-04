#define SD1_EN_GPIO (GPIO_PORTB + 25)
#define OTG_PHY_RESET_GPIO (GPIO_PORTB + 23)
#define SPI2_SS0 (GPIO_PORTD + 21)
#define EXPIO_PARENT_INT	(MXC_INTERNAL_IRQS + GPIO_PORTC + 28)
static const int mx27pdk_pins[] __initconst = ;
static const struct imxuart_platform_data uart_pdata __initconst = ;
static const uint32_t mx27_3ds_keymap[] = ;
static const struct matrix_keymap_data mx27_3ds_keymap_data __initconst = ;
static int mx27_3ds_sdhc1_init(struct device *dev, irq_handler_t detect_irq,
void *data)
static void mx27_3ds_sdhc1_exit(struct device *dev, void *data)
static const struct imxmmc_platform_data sdhc1_pdata __initconst = ;
static void mx27_3ds_sdhc1_enable_level_translator(void)
static int otg_phy_init(void)
static int mx27_3ds_otg_init(struct platform_device *pdev)
static struct mxc_usbh_platform_data otg_pdata __initdata = ;
static const struct fsl_usb2_platform_data otg_device_pdata __initconst = ;
static int otg_mode_host;
static int __init mx27_3ds_otg_mode(char *options)
__setup("otg_mode=", mx27_3ds_otg_mode);
static struct regulator_consumer_supply vmmc1_consumers[] = ;
static struct regulator_init_data vmmc1_init = ;
static struct regulator_consumer_supply vgen_consumers[] = ;
static struct regulator_init_data vgen_init = ;
static struct mc13xxx_regulator_init_data mx27_3ds_regulators[] = ;
static struct mc13xxx_platform_data mc13783_pdata = ;
static int spi2_internal_chipselect[] = ;
static const struct spi_imx_master spi2_pdata __initconst = ;
static struct spi_board_info mx27_3ds_spi_devs[] __initdata = ;
static const struct imxi2c_platform_data mx27_3ds_i2c0_data __initconst = ;
static void __init mx27pdk_init(void)
static void __init mx27pdk_timer_init(void)
static struct sys_timer mx27pdk_timer = ;
MACHINE_START(MX27_3DS, "Freescale MX27PDK")
.boot_params = MX27_PHYS_OFFSET + 0x100,
.map_io = mx27_map_io,
.init_early = imx27_init_early,
.init_irq = mx27_init_irq,
.timer = &mx27pdk_timer,
.init_machine = mx27pdk_init,
MACHINE_END

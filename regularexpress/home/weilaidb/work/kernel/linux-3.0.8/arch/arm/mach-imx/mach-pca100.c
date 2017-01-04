#define OTG_PHY_CS_GPIO (GPIO_PORTB + 23)
#define USBH2_PHY_CS_GPIO (GPIO_PORTB + 24)
#define SPI1_SS0 (GPIO_PORTD + 28)
#define SPI1_SS1 (GPIO_PORTD + 27)
#define SD2_CD (GPIO_PORTC + 29)
static const int pca100_pins[] __initconst = ;
static const struct imxuart_platform_data uart_pdata __initconst = ;
static const struct mxc_nand_platform_data
pca100_nand_board_info __initconst = ;
static const struct imxi2c_platform_data pca100_i2c1_data __initconst = ;
static struct at24_platform_data board_eeprom = ;
static struct i2c_board_info pca100_i2c_devices[] = ;
static struct spi_eeprom at25320 = ;
static struct spi_board_info pca100_spi_board_info[] __initdata = ;
static int pca100_spi_cs[] = ;
static const struct spi_imx_master pca100_spi0_data __initconst = ;
static void pca100_ac97_warm_reset(struct snd_ac97 *ac97)
static void pca100_ac97_cold_reset(struct snd_ac97 *ac97)
static const struct imx_ssi_platform_data pca100_ssi_pdata __initconst = ;
static int pca100_sdhc2_init(struct device *dev, irq_handler_t detect_irq,
void *data)
static void pca100_sdhc2_exit(struct device *dev, void *data)
static const struct imxmmc_platform_data sdhc_pdata __initconst = ;
static int otg_phy_init(struct platform_device *pdev)
static struct mxc_usbh_platform_data otg_pdata __initdata = ;
static int usbh2_phy_init(struct platform_device *pdev)
static struct mxc_usbh_platform_data usbh2_pdata __initdata = ;
static const struct fsl_usb2_platform_data otg_device_pdata __initconst = ;
static int otg_mode_host;
static int __init pca100_otg_mode(char *options)
__setup("otg_mode=", pca100_otg_mode);
static struct imx_fb_videomode pca100_fb_modes[] = ;
static const struct imx_fb_platform_data pca100_fb_data __initconst = ;
static void __init pca100_init(void)
static void __init pca100_timer_init(void)
static struct sys_timer pca100_timer = ;
MACHINE_START(PCA100, "phyCARD-i.MX27")
.boot_params = MX27_PHYS_OFFSET + 0x100,
.map_io = mx27_map_io,
.init_early = imx27_init_early,
.init_irq = mx27_init_irq,
.init_machine = pca100_init,
.timer = &pca100_timer,
MACHINE_END

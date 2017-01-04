static enum pcm037_board_variant pcm037_instance = PCM037_PCM970;
static int __init pcm037_variant_setup(char *str)
__setup("pcm037_variant=", pcm037_variant_setup);
enum pcm037_board_variant pcm037_variant(void)
static unsigned int pcm037_uart1_handshake_pins[] = ;
static unsigned int pcm037_uart1_pins[] = ;
static unsigned int pcm037_pins[] = ;
static struct physmap_flash_data pcm037_flash_data = ;
static struct resource pcm037_flash_resource = ;
static struct platform_device pcm037_flash = ;
static const struct imxuart_platform_data uart_pdata __initconst = ;
static struct resource smsc911x_resources[] = ;
static struct smsc911x_platform_config smsc911x_info = ;
static struct platform_device pcm037_eth = ;
static struct platdata_mtd_ram pcm038_sram_data = ;
static struct resource pcm038_sram_resource = ;
static struct platform_device pcm037_sram_device = ;
static const struct mxc_nand_platform_data
pcm037_nand_board_info __initconst = ;
static const struct imxi2c_platform_data pcm037_i2c1_data __initconst = ;
static const struct imxi2c_platform_data pcm037_i2c2_data __initconst = ;
static struct at24_platform_data board_eeprom = ;
static int pcm037_camera_power(struct device *dev, int on)
static struct i2c_board_info pcm037_i2c_camera[] = ;
static struct soc_camera_link iclink_mt9v022 = ;
static struct soc_camera_link iclink_mt9t031 = ;
static struct i2c_board_info pcm037_i2c_devices[] = ;
static struct platform_device pcm037_mt9t031 = ;
static struct platform_device pcm037_mt9v022 = ;
static int pcm970_sdhc1_get_ro(struct device *dev)
#define SDHC1_GPIO_WP	IOMUX_TO_GPIO(MX31_PIN_SFS6)
#define SDHC1_GPIO_DET	IOMUX_TO_GPIO(MX31_PIN_SCK6)
static int pcm970_sdhc1_init(struct device *dev, irq_handler_t detect_irq,
void *data)
static void pcm970_sdhc1_exit(struct device *dev, void *data)
static const struct imxmmc_platform_data sdhc_pdata __initconst = ;
struct mx3_camera_pdata camera_pdata __initdata = ;
static phys_addr_t mx3_camera_base __initdata;
#define MX3_CAMERA_BUF_SIZE SZ_4M
static int __init pcm037_init_camera(void)
static struct platform_device *devices[] __initdata = ;
static const struct ipu_platform_data mx3_ipu_data __initconst = ;
static const struct fb_videomode fb_modedb[] = ;
static struct mx3fb_platform_data mx3fb_pdata = ;
static struct resource pcm970_sja1000_resources[] = ;
struct sja1000_platform_data pcm970_sja1000_platform_data = ;
static struct platform_device pcm970_sja1000 = ;
static int pcm037_otg_init(struct platform_device *pdev)
static struct mxc_usbh_platform_data otg_pdata __initdata = ;
static int pcm037_usbh2_init(struct platform_device *pdev)
static struct mxc_usbh_platform_data usbh2_pdata __initdata = ;
static const struct fsl_usb2_platform_data otg_device_pdata __initconst = ;
static int otg_mode_host;
static int __init pcm037_otg_mode(char *options)
__setup("otg_mode=", pcm037_otg_mode);
static void __init pcm037_init(void)
static void __init pcm037_timer_init(void)
struct sys_timer pcm037_timer = ;
static void __init pcm037_reserve(void)
MACHINE_START(PCM037, "Phytec Phycore pcm037")
.boot_params = MX3x_PHYS_OFFSET + 0x100,
.reserve = pcm037_reserve,
.map_io = mx31_map_io,
.init_early = imx31_init_early,
.init_irq = mx31_init_irq,
.timer = &pcm037_timer,
.init_machine = pcm037_init,
MACHINE_END

static const struct fb_videomode fb_modedb[] = ;
static const struct ipu_platform_data mx3_ipu_data __initconst = ;
static struct mx3fb_platform_data mx3fb_pdata __initdata = ;
static struct physmap_flash_data pcm043_flash_data = ;
static struct resource pcm043_flash_resource = ;
static struct platform_device pcm043_flash = ;
static const struct imxuart_platform_data uart_pdata __initconst = ;
static const struct imxi2c_platform_data pcm043_i2c0_data __initconst = ;
static struct at24_platform_data board_eeprom = ;
static struct i2c_board_info pcm043_i2c_devices[] = ;
static struct platform_device *devices[] __initdata = ;
static iomux_v3_cfg_t pcm043_pads[] = ;
#define AC97_GPIO_TXFS	IMX_GPIO_NR(2, 31)
#define AC97_GPIO_TXD	IMX_GPIO_NR(2, 28)
#define AC97_GPIO_RESET	IMX_GPIO_NR(2, 0)
#define SD1_GPIO_WP	IMX_GPIO_NR(2, 23)
#define SD1_GPIO_CD	IMX_GPIO_NR(2, 24)
static void pcm043_ac97_warm_reset(struct snd_ac97 *ac97)
static void pcm043_ac97_cold_reset(struct snd_ac97 *ac97)
static const struct imx_ssi_platform_data pcm043_ssi_pdata __initconst = ;
static const struct mxc_nand_platform_data
pcm037_nand_board_info __initconst = ;
static int pcm043_otg_init(struct platform_device *pdev)
static struct mxc_usbh_platform_data otg_pdata __initdata = ;
static int pcm043_usbh1_init(struct platform_device *pdev)
static const struct mxc_usbh_platform_data usbh1_pdata __initconst = ;
static const struct fsl_usb2_platform_data otg_device_pdata __initconst = ;
static int otg_mode_host;
static int __init pcm043_otg_mode(char *options)
__setup("otg_mode=", pcm043_otg_mode);
static struct esdhc_platform_data sd1_pdata = ;
static void __init pcm043_init(void)
static void __init pcm043_timer_init(void)
struct sys_timer pcm043_timer = ;
MACHINE_START(PCM043, "Phytec Phycore pcm043")
.boot_params = MX3x_PHYS_OFFSET + 0x100,
.map_io = mx35_map_io,
.init_early = imx35_init_early,
.init_irq = mx35_init_irq,
.timer = &pcm043_timer,
.init_machine = pcm043_init,
MACHINE_END

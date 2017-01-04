static unsigned char led_pos[] = ;
static struct heartbeat_data heartbeat_data = ;
static struct resource heartbeat_resource = ;
static struct platform_device heartbeat_device = ;
static struct mtd_partition nor_flash_partitions[] = ;
static struct physmap_flash_data nor_flash_data = ;
static struct resource nor_flash_resources[] = ;
static struct platform_device nor_flash_device = ;
#define SH_ETH_ADDR	(0xA4600000)
static struct resource sh_eth_resources[] = ;
static struct sh_eth_plat_data sh_eth_plat = ;
static struct platform_device sh_eth_device = ;
static void usb0_port_power(int port, int power)
static struct r8a66597_platdata usb0_host_data = ;
static struct resource usb0_host_resources[] = ;
static struct platform_device usb0_host_device = ;
static void usb1_port_power(int port, int power)
static struct r8a66597_platdata usb1_common_data = ;
static struct resource usb1_common_resources[] = ;
static struct platform_device usb1_common_device = ;
static int usbhs_get_id(struct platform_device *pdev)
static struct renesas_usbhs_platform_info usbhs_info = ;
static struct resource usbhs_resources[] = ;
static struct platform_device usbhs_device = ;
const static struct fb_videomode ecovec_lcd_modes[] = ;
const static struct fb_videomode ecovec_dvi_modes[] = ;
static int ecovec24_set_brightness(void *board_data, int brightness)
static int ecovec24_get_brightness(void *board_data)
static struct sh_mobile_lcdc_info lcdc_info = ;
static struct resource lcdc_resources[] = ;
static struct platform_device lcdc_device = ;
static struct sh_mobile_ceu_info sh_mobile_ceu0_info = ;
static struct resource ceu0_resources[] = ;
static struct platform_device ceu0_device = ;
static struct sh_mobile_ceu_info sh_mobile_ceu1_info = ;
static struct resource ceu1_resources[] = ;
static struct platform_device ceu1_device = ;
static struct i2c_board_info i2c0_devices[] = ;
static struct i2c_board_info i2c1_devices[] = ;
static struct sh_keysc_info keysc_info = ;
static struct resource keysc_resources[] = ;
static struct platform_device keysc_device = ;
#define IRQ0 32
static int ts_get_pendown_state(void)
static int ts_init(void)
static struct tsc2007_platform_data tsc2007_info = ;
static struct i2c_board_info ts_i2c_clients = ;
#if defined(CONFIG_MMC_SDHI) || defined(CONFIG_MMC_SDHI_MODULE)
static void sdhi0_set_pwr(struct platform_device *pdev, int state)
static struct sh_mobile_sdhi_info sdhi0_info = ;
static struct resource sdhi0_resources[] = ;
static struct platform_device sdhi0_device = ;
#if !defined(CONFIG_MMC_SH_MMCIF) && !defined(CONFIG_MMC_SH_MMCIF_MODULE)
static void sdhi1_set_pwr(struct platform_device *pdev, int state)
static struct sh_mobile_sdhi_info sdhi1_info = ;
static struct resource sdhi1_resources[] = ;
static struct platform_device sdhi1_device = ;
static int mmc_spi_get_ro(struct device *dev)
static int mmc_spi_get_cd(struct device *dev)
static void mmc_spi_setpower(struct device *dev, unsigned int maskval)
static struct mmc_spi_platform_data mmc_spi_info = ;
static struct spi_board_info spi_bus[] = ;
static struct sh_msiof_spi_info msiof0_data = ;
static struct resource msiof0_resources[] = ;
static struct platform_device msiof0_device = ;
static struct i2c_board_info i2c_camera[] = ;
static int tw9910_power(struct device *dev, int mode)
static struct tw9910_video_info tw9910_info = ;
static struct soc_camera_link tw9910_link = ;
static int mt9t112_power1(struct device *dev, int mode)
static struct mt9t112_camera_info mt9t112_info1 = ;
static struct soc_camera_link mt9t112_link1 = ;
static int mt9t112_power2(struct device *dev, int mode)
static struct mt9t112_camera_info mt9t112_info2 = ;
static struct soc_camera_link mt9t112_link2 = ;
static struct platform_device camera_devices[] = ;
static struct sh_fsi_platform_info fsi_info = ;
static struct resource fsi_resources[] = ;
static struct platform_device fsi_device = ;
static struct resource irda_resources[] = ;
static struct platform_device irda_device = ;
static struct ak881x_pdata ak881x_pdata = ;
static struct i2c_board_info ak8813 = ;
static struct sh_vou_pdata sh_vou_pdata = ;
static struct resource sh_vou_resources[] = ;
static struct platform_device vou_device = ;
#if defined(CONFIG_MMC_SH_MMCIF) || defined(CONFIG_MMC_SH_MMCIF_MODULE)
static void mmcif_set_pwr(struct platform_device *pdev, int state)
static void mmcif_down_pwr(struct platform_device *pdev)
static struct resource sh_mmcif_resources[] = ;
static struct sh_mmcif_plat_data sh_mmcif_plat = ;
static struct platform_device sh_mmcif_device = ;
static struct platform_device *ecovec_devices[] __initdata = ;
#define EEPROM_ADDR 0x50
static u8 mac_read(struct i2c_adapter *a, u8 command)
static void __init sh_eth_init(struct sh_eth_plat_data *pd)
static void __init sh_eth_init(struct sh_eth_plat_data *pd)
#define PORT_HIZA 0xA4050158
#define IODRIVEA  0xA405018A
extern char ecovec24_sdram_enter_start;
extern char ecovec24_sdram_enter_end;
extern char ecovec24_sdram_leave_start;
extern char ecovec24_sdram_leave_end;
static int __init arch_setup(void)
arch_initcall(arch_setup);
static int __init devices_setup(void)
device_initcall(devices_setup);
static struct sh_machine_vector mv_ecovec __initmv = ;

static struct smsc911x_platform_config smsc911x_config = ;
static struct resource smsc9118_resources[] = ;
static struct platform_device smsc9118_device = ;
static struct mtd_partition ap325rxa_nor_flash_partitions[] = ;
static struct physmap_flash_data ap325rxa_nor_flash_data = ;
static struct resource ap325rxa_nor_flash_resources[] = ;
static struct platform_device ap325rxa_nor_flash_device = ;
static struct mtd_partition nand_partition_info[] = ;
static struct resource nand_flash_resources[] = ;
static struct sh_flctl_platform_data nand_flash_data = ;
static struct platform_device nand_flash_device = ;
#define FPGA_LCDREG	0xB4100180
#define FPGA_BKLREG	0xB4100212
#define FPGA_LCDREG_VAL	0x0018
#define PORT_MSELCRB	0xA4050182
#define PORT_HIZCRC	0xA405015C
#define PORT_DRVCRA	0xA405018A
#define PORT_DRVCRB	0xA405018C
static int ap320_wvga_set_brightness(void *board_data, int brightness)
static int ap320_wvga_get_brightness(void *board_data)
static void ap320_wvga_power_on(void *board_data, struct fb_info *info)
static void ap320_wvga_power_off(void *board_data)
const static struct fb_videomode ap325rxa_lcdc_modes[] = ;
static struct sh_mobile_lcdc_info lcdc_info = ;
static struct resource lcdc_resources[] = ;
static struct platform_device lcdc_device = ;
static void camera_power(int val)
static unsigned char camera_ncm03j_magic[] =
;
static int camera_probe(void)
static int camera_set_capture(struct soc_camera_platform_info *info,
int enable)
static int ap325rxa_camera_add(struct soc_camera_link *icl, struct device *dev);
static void ap325rxa_camera_del(struct soc_camera_link *icl);
static struct soc_camera_platform_info camera_info = ;
static struct soc_camera_link camera_link = ;
static struct platform_device *camera_device;
static void ap325rxa_camera_release(struct device *dev)
static int ap325rxa_camera_add(struct soc_camera_link *icl,
struct device *dev)
static void ap325rxa_camera_del(struct soc_camera_link *icl)
static int ov7725_power(struct device *dev, int mode)
static struct sh_mobile_ceu_info sh_mobile_ceu_info = ;
static struct resource ceu_resources[] = ;
static struct platform_device ceu_device = ;
static struct resource sdhi0_cn3_resources[] = ;
static struct sh_mobile_sdhi_info sdhi0_cn3_data = ;
static struct platform_device sdhi0_cn3_device = ;
static struct resource sdhi1_cn7_resources[] = ;
static struct sh_mobile_sdhi_info sdhi1_cn7_data = ;
static struct platform_device sdhi1_cn7_device = ;
static struct i2c_board_info __initdata ap325rxa_i2c_devices[] = ;
static struct i2c_board_info ap325rxa_i2c_camera[] = ;
static struct ov772x_camera_info ov7725_info = ;
static struct soc_camera_link ov7725_link = ;
static struct platform_device ap325rxa_camera[] = ;
static struct platform_device *ap325rxa_devices[] __initdata = ;
extern char ap325rxa_sdram_enter_start;
extern char ap325rxa_sdram_enter_end;
extern char ap325rxa_sdram_leave_start;
extern char ap325rxa_sdram_leave_end;
static int __init ap325rxa_devices_setup(void)
arch_initcall(ap325rxa_devices_setup);
static int ap325rxa_mode_pins(void)
static struct sh_machine_vector mv_ap325rxa __initmv = ;

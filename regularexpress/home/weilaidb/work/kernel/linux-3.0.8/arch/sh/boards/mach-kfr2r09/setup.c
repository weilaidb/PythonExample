static struct mtd_partition kfr2r09_nor_flash_partitions[] =
;
static struct physmap_flash_data kfr2r09_nor_flash_data = ;
static struct resource kfr2r09_nor_flash_resources[] = ;
static struct platform_device kfr2r09_nor_flash_device = ;
static struct resource kfr2r09_nand_flash_resources[] = ;
static struct platform_device kfr2r09_nand_flash_device = ;
static struct sh_keysc_info kfr2r09_sh_keysc_info = ;
static struct resource kfr2r09_sh_keysc_resources[] = ;
static struct platform_device kfr2r09_sh_keysc_device = ;
const static struct fb_videomode kfr2r09_lcdc_modes[] = ;
static struct sh_mobile_lcdc_info kfr2r09_sh_lcdc_info = ;
static struct resource kfr2r09_sh_lcdc_resources[] = ;
static struct platform_device kfr2r09_sh_lcdc_device = ;
static struct r8a66597_platdata kfr2r09_usb0_gadget_data = ;
static struct resource kfr2r09_usb0_gadget_resources[] = ;
static struct platform_device kfr2r09_usb0_gadget_device = ;
static struct sh_mobile_ceu_info sh_mobile_ceu_info = ;
static struct resource kfr2r09_ceu_resources[] = ;
static struct platform_device kfr2r09_ceu_device = ;
static struct i2c_board_info kfr2r09_i2c_camera = ;
static struct clk *camera_clk;
#define CEU_MCLK_FREQ 25000000
#define DRVCRB 0xA405018C
static int camera_power(struct device *dev, int mode)
static struct rj54n1_pdata rj54n1_priv = ;
static struct soc_camera_link rj54n1_link = ;
static struct platform_device kfr2r09_camera = ;
static struct resource kfr2r09_sh_sdhi0_resources[] = ;
static struct sh_mobile_sdhi_info sh7724_sdhi0_data = ;
static struct platform_device kfr2r09_sh_sdhi0_device = ;
static struct platform_device *kfr2r09_devices[] __initdata = ;
#define BSC_CS0BCR 0xfec10004
#define BSC_CS0WCR 0xfec10024
#define BSC_CS4BCR 0xfec10010
#define BSC_CS4WCR 0xfec10030
#define PORT_MSELCRB 0xa4050182
static int kfr2r09_usb0_gadget_i2c_setup(void)
static int kfr2r09_serial_i2c_setup(void)
static int kfr2r09_usb0_gadget_i2c_setup(void)
static int kfr2r09_serial_i2c_setup(void)
static int kfr2r09_usb0_gadget_setup(void)
extern char kfr2r09_sdram_enter_start;
extern char kfr2r09_sdram_enter_end;
extern char kfr2r09_sdram_leave_start;
extern char kfr2r09_sdram_leave_end;
static int __init kfr2r09_devices_setup(void)
device_initcall(kfr2r09_devices_setup);
static int kfr2r09_mode_pins(void)
static struct sh_machine_vector mv_kfr2r09 __initmv = ;

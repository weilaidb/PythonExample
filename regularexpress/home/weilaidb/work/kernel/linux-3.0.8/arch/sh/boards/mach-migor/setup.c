static struct smc91x_platdata smc91x_info = ;
static struct resource smc91x_eth_resources[] = ;
static struct platform_device smc91x_eth_device = ;
static struct sh_keysc_info sh_keysc_info = ;
static struct resource sh_keysc_resources[] = ;
static struct platform_device sh_keysc_device = ;
static struct mtd_partition migor_nor_flash_partitions[] =
;
static struct physmap_flash_data migor_nor_flash_data = ;
static struct resource migor_nor_flash_resources[] = ;
static struct platform_device migor_nor_flash_device = ;
static struct mtd_partition migor_nand_flash_partitions[] = ;
static void migor_nand_flash_cmd_ctl(struct mtd_info *mtd, int cmd,
unsigned int ctrl)
static int migor_nand_flash_ready(struct mtd_info *mtd)
static struct platform_nand_data migor_nand_flash_data = ;
static struct resource migor_nand_flash_resources[] = ;
static struct platform_device migor_nand_flash_device = ;
const static struct fb_videomode migor_lcd_modes[] = ;
static struct sh_mobile_lcdc_info sh_mobile_lcdc_info = ;
static struct resource migor_lcdc_resources[] = ;
static struct platform_device migor_lcdc_device = ;
static struct clk *camera_clk;
static DEFINE_MUTEX(camera_lock);
static void camera_power_on(int is_tw)
static void camera_power_off(void)
static int ov7725_power(struct device *dev, int mode)
static int tw9910_power(struct device *dev, int mode)
static struct sh_mobile_ceu_info sh_mobile_ceu_info = ;
static struct resource migor_ceu_resources[] = ;
static struct platform_device migor_ceu_device = ;
static struct resource sdhi_cn9_resources[] = ;
static struct sh_mobile_sdhi_info sh7724_sdhi_data = ;
static struct platform_device sdhi_cn9_device = ;
static struct i2c_board_info migor_i2c_devices[] = ;
static struct i2c_board_info migor_i2c_camera[] = ;
static struct ov772x_camera_info ov7725_info = ;
static struct soc_camera_link ov7725_link = ;
static struct tw9910_video_info tw9910_info = ;
static struct soc_camera_link tw9910_link = ;
static struct platform_device migor_camera[] = ;
static struct platform_device *migor_devices[] __initdata = ;
extern char migor_sdram_enter_start;
extern char migor_sdram_enter_end;
extern char migor_sdram_leave_start;
extern char migor_sdram_leave_end;
static int __init migor_devices_setup(void)
arch_initcall(migor_devices_setup);
static int migor_mode_pins(void)
static struct sh_machine_vector mv_migor __initmv = ;

static struct resource heartbeat_resource = ;
static struct platform_device heartbeat_device = ;
static struct smc91x_platdata smc91x_info = ;
static struct resource smc91x_eth_resources[] = ;
static struct platform_device smc91x_eth_device = ;
static struct mtd_partition nor_flash_partitions[] = ;
static struct physmap_flash_data nor_flash_data = ;
static struct resource nor_flash_resources[] = ;
static struct platform_device nor_flash_device = ;
const static struct fb_videomode lcdc_720p_modes[] = ;
const static struct fb_videomode lcdc_vga_modes[] = ;
static struct sh_mobile_lcdc_info lcdc_info = ;
static struct resource lcdc_resources[] = ;
static struct platform_device lcdc_device = ;
static struct sh_mobile_ceu_info sh_mobile_ceu0_info = ;
static struct resource ceu0_resources[] = ;
static struct platform_device ceu0_device = ;
static struct sh_mobile_ceu_info sh_mobile_ceu1_info = ;
static struct resource ceu1_resources[] = ;
static struct platform_device ceu1_device = ;
static struct sh_fsi_platform_info fsi_info = ;
static struct resource fsi_resources[] = ;
static struct platform_device fsi_device = ;
static struct platform_device fsi_ak4642_device = ;
static struct sh_keysc_info keysc_info = ;
static struct resource keysc_resources[] = ;
static struct platform_device keysc_device = ;
static struct resource sh_eth_resources[] = ;
static struct sh_eth_plat_data sh_eth_plat = ;
static struct platform_device sh_eth_device = ;
static struct r8a66597_platdata sh7724_usb0_host_data = ;
static struct resource sh7724_usb0_host_resources[] = ;
static struct platform_device sh7724_usb0_host_device = ;
static struct r8a66597_platdata sh7724_usb1_gadget_data = ;
static struct resource sh7724_usb1_gadget_resources[] = ;
static struct platform_device sh7724_usb1_gadget_device = ;
static struct resource sdhi0_cn7_resources[] = ;
static struct sh_mobile_sdhi_info sh7724_sdhi0_data = ;
static struct platform_device sdhi0_cn7_device = ;
static struct resource sdhi1_cn8_resources[] = ;
static struct sh_mobile_sdhi_info sh7724_sdhi1_data = ;
static struct platform_device sdhi1_cn8_device = ;
static struct resource irda_resources[] = ;
static struct platform_device irda_device = ;
static struct ak881x_pdata ak881x_pdata = ;
static struct i2c_board_info ak8813 = ;
static struct sh_vou_pdata sh_vou_pdata = ;
static struct resource sh_vou_resources[] = ;
static struct platform_device vou_device = ;
static struct platform_device *ms7724se_devices[] __initdata = ;
static struct i2c_board_info i2c0_devices[] = ;
#define EEPROM_OP   0xBA206000
#define EEPROM_ADR  0xBA206004
#define EEPROM_DATA 0xBA20600C
#define EEPROM_STAT 0xBA206010
#define EEPROM_STRT 0xBA206014
static int __init sh_eth_is_eeprom_ready(void)
static void __init sh_eth_init(void)
#define SW4140    0xBA201000
#define FPGA_OUT  0xBA200400
#define PORT_HIZA 0xA4050158
#define PORT_MSELCRB 0xA4050182
#define SW41_A    0x0100
#define SW41_B    0x0200
#define SW41_C    0x0400
#define SW41_D    0x0800
#define SW41_E    0x1000
#define SW41_F    0x2000
#define SW41_G    0x4000
#define SW41_H    0x8000
extern char ms7724se_sdram_enter_start;
extern char ms7724se_sdram_enter_end;
extern char ms7724se_sdram_leave_start;
extern char ms7724se_sdram_leave_end;
static int __init arch_setup(void)
arch_initcall(arch_setup);
static int __init devices_setup(void)
device_initcall(devices_setup);
static struct sh_machine_vector mv_ms7724se __initmv = ;

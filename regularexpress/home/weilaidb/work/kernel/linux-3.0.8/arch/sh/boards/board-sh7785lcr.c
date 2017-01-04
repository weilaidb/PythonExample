static struct resource heartbeat_resource = ;
static struct platform_device heartbeat_device = ;
static struct mtd_partition nor_flash_partitions[] = ;
static struct physmap_flash_data nor_flash_data = ;
static struct resource nor_flash_resources[] = ;
static struct platform_device nor_flash_device = ;
static struct r8a66597_platdata r8a66597_data = ;
static struct resource r8a66597_usb_host_resources[] = ;
static struct platform_device r8a66597_usb_host_device = ;
static struct resource sm501_resources[] = ;
static struct fb_videomode sm501_default_mode_crt = ;
static struct fb_videomode sm501_default_mode_pnl = ;
static struct sm501_platdata_fbsub sm501_pdata_fbsub_pnl = ;
static struct sm501_platdata_fbsub sm501_pdata_fbsub_crt = ;
static struct sm501_platdata_fb sm501_fb_pdata = ;
static struct sm501_initdata sm501_initdata = ;
static struct sm501_platdata sm501_platform_data = ;
static struct platform_device sm501_device = ;
static struct resource i2c_proto_resources[] = ;
static struct resource i2c_resources[] = ;
static struct i2c_pca9564_pf_platform_data i2c_platform_data = ;
static struct platform_device i2c_device = ;
static struct platform_device *sh7785lcr_devices[] __initdata = ;
static struct i2c_board_info __initdata sh7785lcr_i2c_devices[] = ;
static int __init sh7785lcr_devices_setup(void)
device_initcall(sh7785lcr_devices_setup);
void __init init_sh7785lcr_IRQ(void)
static int sh7785lcr_clk_init(void)
static void sh7785lcr_power_off(void)
static void __init sh7785lcr_setup(char **cmdline_p)
static int sh7785lcr_mode_pins(void)
static struct sh_machine_vector mv_sh7785lcr __initmv = ;

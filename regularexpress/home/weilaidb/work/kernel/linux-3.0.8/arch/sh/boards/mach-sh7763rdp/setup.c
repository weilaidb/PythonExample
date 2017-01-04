static struct mtd_partition sh7763rdp_nor_flash_partitions[] = ;
static struct physmap_flash_data sh7763rdp_nor_flash_data = ;
static struct resource sh7763rdp_nor_flash_resources[] = ;
static struct platform_device sh7763rdp_nor_flash_device = ;
static struct resource sh_eth_resources[] = ;
static struct sh_eth_plat_data sh7763_eth_pdata = ;
static struct platform_device sh7763rdp_eth_device = ;
static struct resource sh7763rdp_fb_resources[] = ;
static struct fb_videomode sh7763fb_videomode = ;
static struct sh7760fb_platdata sh7763fb_def_pdata = ;
static struct platform_device sh7763rdp_fb_device = ;
static struct platform_device *sh7763rdp_devices[] __initdata = ;
static int __init sh7763rdp_devices_setup(void)
device_initcall(sh7763rdp_devices_setup);
static void __init sh7763rdp_setup(char **cmdline_p)
static struct sh_machine_vector mv_sh7763rdp __initmv = ;

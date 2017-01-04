static struct resource cf_ide_resources[] = ;
static struct pata_platform_info pata_info = ;
static struct platform_device cf_ide_device  = ;
static struct spi_board_info spi_bus[] = ;
static void r2d_chip_select(struct sh_spi_info *spi, int cs, int state)
static struct sh_spi_info spi_info = ;
static struct resource spi_sh_sci_resources[] = ;
static struct platform_device spi_sh_sci_device  = ;
static struct resource heartbeat_resources[] = ;
static struct platform_device heartbeat_device = ;
static struct resource sm501_resources[] = ;
static struct fb_videomode sm501_default_mode = ;
static struct sm501_platdata_fbsub sm501_pdata_fbsub_pnl = ;
static struct sm501_platdata_fbsub sm501_pdata_fbsub_crt = ;
static struct sm501_platdata_fb sm501_fb_pdata = ;
static struct sm501_initdata sm501_initdata = ;
static struct sm501_platdata sm501_platform_data = ;
static struct platform_device sm501_device = ;
static struct mtd_partition r2d_partitions[] = ;
static struct physmap_flash_data flash_data = ;
static struct resource flash_resource = ;
static struct platform_device flash_device = ;
static struct platform_device *rts7751r2d_devices[] __initdata = ;
static struct trapped_io cf_trapped_io = ;
static int __init rts7751r2d_devices_setup(void)
device_initcall(rts7751r2d_devices_setup);
static void rts7751r2d_power_off(void)
static void __init rts7751r2d_setup(char **cmdline_p)
static struct sh_machine_vector mv_rts7751r2d __initmv = ;

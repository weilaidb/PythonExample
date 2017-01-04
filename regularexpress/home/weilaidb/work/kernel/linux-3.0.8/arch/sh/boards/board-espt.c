static struct mtd_partition espt_nor_flash_partitions[] = ;
static struct physmap_flash_data espt_nor_flash_data = ;
static struct resource espt_nor_flash_resources[] = ;
static struct platform_device espt_nor_flash_device = ;
static struct resource sh_eth_resources[] = ;
static struct sh_eth_plat_data sh7763_eth_pdata = ;
static struct platform_device espt_eth_device = ;
static struct platform_device *espt_devices[] __initdata = ;
static int __init espt_devices_setup(void)
device_initcall(espt_devices_setup);
static struct sh_machine_vector mv_espt __initmv = ;

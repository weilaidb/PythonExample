static struct smc_timing flash_timing __initdata = ;
static struct smc_config flash_config __initdata = ;
static struct mtd_partition flash_parts[] = ;
static struct physmap_flash_data flash_data = ;
static struct resource flash_resource = ;
static struct platform_device flash_device = ;
static int __init atngw100_flash_init(void)
device_initcall(atngw100_flash_init);

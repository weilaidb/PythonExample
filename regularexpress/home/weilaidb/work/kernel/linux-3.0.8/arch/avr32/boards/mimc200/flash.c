static struct smc_timing flash_timing __initdata = ;
static struct smc_config flash_config __initdata = ;
static struct mtd_partition flash_parts_system[] = ;
static struct physmap_flash_data flash_system = ;
static struct resource flash_resource_system = ;
static struct platform_device flash_device_system = ;
static struct mtd_partition flash_parts_data[] = ;
static struct physmap_flash_data flash_data = ;
static struct resource flash_resource_data = ;
static struct platform_device flash_device_data = ;
static int __init mimc200_flash_init(void)
device_initcall(mimc200_flash_init);

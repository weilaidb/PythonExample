static struct smc_timing flash_timing __initdata = ;
static struct smc_config flash_config __initdata = ;
static struct mtd_partition flash_0_parts[] = ;
static struct mtd_partition flash_1_parts[] = ;
static struct physmap_flash_data flash_data[] = ;
static struct resource flash_resource[] = ;
static struct platform_device flash_device[] = ;
static int __init merisc_flash_init(void)
device_initcall(merisc_flash_init);

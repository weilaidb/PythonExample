static struct mtd_partition rsk_partitions[] = ;
static struct physmap_flash_data flash_data = ;
static struct resource flash_resource = ;
static struct platform_device flash_device = ;
static const char *probes[] = ;
static struct map_info rsk_flash_map = ;
static struct mtd_info *flash_mtd;
static struct mtd_partition *parsed_partitions;
static void __init set_mtd_partitions(void)
static inline void set_mtd_partitions(void)
static struct platform_device *rsk_devices[] __initdata = ;
static int __init rsk_devices_setup(void)
device_initcall(rsk_devices_setup);
static struct sh_machine_vector mv_rsk __initmv = ;

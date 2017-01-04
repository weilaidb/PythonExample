#define LAN9115_READY	(__raw_readl(0xA8000084UL) & 0x00000001UL)
static const char *probes[] = ;
static int __init ethernet_reset_finished(void)
static void __init reset_ethernet(void)
static void __init setup_chip_select(void)
static void __init setup_port_multiplexing(void)
static void __init mpr2_setup(char **cmdline_p)
static struct resource smsc911x_resources[] = ;
static struct smsc911x_platform_config smsc911x_config = ;
static struct platform_device smsc911x_device = ;
static struct resource heartbeat_resources[] = ;
static struct heartbeat_data heartbeat_data = ;
static struct platform_device heartbeat_device = ;
static struct mtd_partition *parsed_partitions;
static struct mtd_partition mpr2_partitions[] = ;
static struct physmap_flash_data flash_data = ;
static struct resource flash_resource = ;
static struct platform_device flash_device = ;
static struct mtd_info *flash_mtd;
static struct map_info mpr2_flash_map = ;
static void __init set_mtd_partitions(void)
static struct platform_device *mpr2_devices[] __initdata = ;
static int __init mpr2_devices_setup(void)
device_initcall(mpr2_devices_setup);
static void __init init_mpr2_IRQ(void)
static struct sh_machine_vector mv_mpr2 __initmv = ;

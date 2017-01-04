static struct resource heartbeat_resource = ;
static struct platform_device heartbeat_device = ;
static struct mtd_partition nor_flash_partitions[] = ;
static struct physmap_flash_data nor_flash_data = ;
static struct resource nor_flash_resources[] = ;
static struct platform_device nor_flash_device = ;
#define ST16C2550C_FLAGS (UPF_BOOT_AUTOCONF | UPF_IOREMAP)
static struct plat_serial8250_port serial_platform_data[] = ;
static struct platform_device uart_device = ;
static void isp116x_delay(struct device *dev, int delay)
static struct resource usb_resources[] = ;
static struct isp116x_platform_data usb_platform_data = ;
static struct platform_device usb_device = ;
static struct platform_device *sh7343se_platform_devices[] __initdata = ;
static int __init sh7343se_devices_setup(void)
device_initcall(sh7343se_devices_setup);
static void __init sh7343se_setup(char **cmdline_p)
static struct sh_machine_vector mv_7343se __initmv = ;

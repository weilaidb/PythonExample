#define I2C_EMMA2RH "emma2rh-iic"
static struct resource i2c_emma_resources_0[] = ;
struct resource i2c_emma_resources_1[] = ;
struct resource i2c_emma_resources_2[] = ;
struct platform_device i2c_emma_devices[] = ;
#define EMMA2RH_SERIAL_CLOCK 18544000
#define EMMA2RH_SERIAL_FLAGS UPF_BOOT_AUTOCONF | UPF_SKIP_TEST
static struct  plat_serial8250_port platform_serial_ports[] = ;
static struct  platform_device serial_emma = ;
static struct mtd_partition markeins_parts[] = ;
static struct physmap_flash_data markeins_flash_data = ;
static struct resource markeins_flash_resource = ;
static struct platform_device markeins_flash_device = ;
static struct platform_device *devices[] = ;
static int __init platform_devices_setup(void)
arch_initcall(platform_devices_setup);

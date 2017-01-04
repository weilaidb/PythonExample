#define SMC_PORT(base, int)						\
#define CBUS_UART_FLAGS (UPF_BOOT_AUTOCONF | UPF_SKIP_TEST | UPF_IOREMAP)
static struct plat_serial8250_port uart8250_data[] = ;
static struct platform_device malta_uart8250_device = ;
struct resource malta_rtc_resources[] = ;
static struct platform_device malta_rtc_device = ;
static struct mtd_partition malta_mtd_partitions[] = ;
static struct physmap_flash_data malta_flash_data = ;
static struct resource malta_flash_resource = ;
static struct platform_device malta_flash_device = ;
static struct platform_device *malta_devices[] __initdata = ;
static int __init malta_add_devices(void)
device_initcall(malta_add_devices);

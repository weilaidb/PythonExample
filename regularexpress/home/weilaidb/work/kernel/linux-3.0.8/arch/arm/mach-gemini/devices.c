static struct plat_serial8250_port serial_platform_data[] = ;
static struct platform_device serial_device = ;
int platform_register_uart(void)
static struct resource flash_resource = ;
static struct physmap_flash_data pflash_platform_data = ;
static struct platform_device pflash_device = ;
int platform_register_pflash(unsigned int size, struct mtd_partition *parts,
unsigned int nr_parts)
static struct resource gemini_rtc_resources[] = ;
static struct platform_device gemini_rtc_device = ;
int __init platform_register_rtc(void)

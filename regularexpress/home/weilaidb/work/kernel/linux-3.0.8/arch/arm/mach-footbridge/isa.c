static struct resource rtc_resources[] = ;
static struct platform_device rtc_device = ;
static struct resource serial_resources[] = ;
static struct plat_serial8250_port serial_platform_data[] = ;
static struct platform_device serial_device = ;
static int __init footbridge_isa_init(void)
arch_initcall(footbridge_isa_init);

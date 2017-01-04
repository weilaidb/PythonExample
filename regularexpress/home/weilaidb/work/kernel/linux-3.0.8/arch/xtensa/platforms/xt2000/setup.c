static void led_print (int f, char *s)
void platform_halt(void)
void platform_power_off(void)
void platform_restart(void)
void __init platform_setup(char** cmdline)
extern sysmem_info_t __initdata sysmem;
void platform_init(bp_tag_t* first)
void platform_heartbeat(void)
#define _SERIAL_PORT(_base,_irq)					\
static struct plat_serial8250_port xt2000_serial_data[] = ;
static struct platform_device xt2000_serial8250_device = ;
static struct resource xt2000_sonic_res[] = ;
static struct platform_device xt2000_sonic_device = ;
static int __init xt2000_setup_devinit(void)
device_initcall(xt2000_setup_devinit);

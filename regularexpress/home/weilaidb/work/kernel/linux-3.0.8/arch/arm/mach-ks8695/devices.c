static u64 eth_dmamask = 0xffffffffUL;
static struct resource ks8695_wan_resources[] = ;
static struct platform_device ks8695_wan_device = ;
static struct resource ks8695_lan_resources[] = ;
static struct platform_device ks8695_lan_device = ;
static struct resource ks8695_hpna_resources[] = ;
static struct platform_device ks8695_hpna_device = ;
void __init ks8695_add_device_wan(void)
void __init ks8695_add_device_lan(void)
void __init ks8696_add_device_hpna(void)
static struct platform_device ks8695_wdt_device = ;
static void __init ks8695_add_device_watchdog(void)
#if defined(CONFIG_LEDS)
short ks8695_leds_cpu = -1;
short ks8695_leds_timer = -1;
void __init ks8695_init_leds(u8 cpu_led, u8 timer_led)
void __init ks8695_init_leds(u8 cpu_led, u8 timer_led)
static int __init ks8695_add_standard_devices(void)
arch_initcall(ks8695_add_standard_devices);

static struct plat_serial8250_port voiceblue_ports[] = ;
static struct platform_device serial_device = ;
static int __init ext_uart_init(void)
arch_initcall(ext_uart_init);
static struct physmap_flash_data voiceblue_flash_data = ;
static struct resource voiceblue_flash_resource = ;
static struct platform_device voiceblue_flash_device = ;
static struct smc91x_platdata voiceblue_smc91x_info = ;
static struct resource voiceblue_smc91x_resources[] = ;
static struct platform_device voiceblue_smc91x_device = ;
static struct platform_device *voiceblue_devices[] __initdata = ;
static struct omap_usb_config voiceblue_usb_config __initdata = ;
static struct omap_board_config_kernel voiceblue_config[] = ;
static void __init voiceblue_init_irq(void)
static void __init voiceblue_map_io(void)
#define MACHINE_PANICED		1
#define MACHINE_REBOOTING	2
#define MACHINE_REBOOT		4
static unsigned long machine_state;
static int panic_event(struct notifier_block *this, unsigned long event,
void *ptr)
static struct notifier_block panic_block = ;
static int __init voiceblue_setup(void)
postcore_initcall(voiceblue_setup);
static int wdt_gpio_state;
void voiceblue_wdt_enable(void)
void voiceblue_wdt_disable(void)
void voiceblue_wdt_ping(void)
static void voiceblue_reset(char mode, const char *cmd)
EXPORT_SYMBOL(voiceblue_wdt_enable);
EXPORT_SYMBOL(voiceblue_wdt_disable);
EXPORT_SYMBOL(voiceblue_wdt_ping);
static void __init voiceblue_init(void)
MACHINE_START(VOICEBLUE, "VoiceBlue OMAP5910")
.boot_params	= 0x10000100,
.map_io		= voiceblue_map_io,
.reserve	= omap_reserve,
.init_irq	= voiceblue_init_irq,
.init_machine	= voiceblue_init,
.timer		= &omap_timer,
MACHINE_END

#define RESET_PORT	((void __iomem *)CKSEG1ADDR(0x1c000000))
#define RESET		0x0f
DEFINE_LED_TRIGGER(power_off_led_trigger);
static int __init ledtrig_power_off_init(void)
device_initcall(ledtrig_power_off_init);
void cobalt_machine_halt(void)
void cobalt_machine_restart(char *command)

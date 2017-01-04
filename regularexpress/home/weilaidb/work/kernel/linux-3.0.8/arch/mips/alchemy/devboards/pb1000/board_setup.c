const char *get_system_type(void)
static void board_reset(char *c)
static void board_power_off(void)
void __init board_setup(void)
static int __init pb1000_init_irq(void)
arch_initcall(pb1000_init_irq);
static int __init pb1000_device_init(void)
device_initcall(pb1000_device_init);

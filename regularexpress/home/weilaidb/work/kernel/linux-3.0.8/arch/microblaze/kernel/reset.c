static int handle;
static unsigned int reset_val;
static int of_reset_gpio_handle(void)
void of_platform_reset_gpio_probe(void)
static void gpio_system_reset(void)
#define gpio_system_reset() do  while (0)
void of_platform_reset_gpio_probe(void)
void machine_restart(char *cmd)
void machine_shutdown(void)
void machine_halt(void)
void machine_power_off(void)

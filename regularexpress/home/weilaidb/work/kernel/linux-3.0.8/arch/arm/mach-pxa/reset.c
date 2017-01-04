unsigned int reset_status;
EXPORT_SYMBOL(reset_status);
static void do_hw_reset(void);
static int reset_gpio = -1;
int init_gpio_reset(int gpio, int output, int level)
static void do_gpio_reset(void)
static void do_hw_reset(void)
void arch_reset(char mode, const char *cmd)

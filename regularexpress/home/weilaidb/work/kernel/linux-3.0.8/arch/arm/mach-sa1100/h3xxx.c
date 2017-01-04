void h3xxx_init_gpio(struct gpio_default_state *s, size_t n)
static struct mtd_partition h3xxx_partitions[] = ;
static void h3xxx_set_vpp(int vpp)
static int h3xxx_flash_init(void)
static void h3xxx_flash_exit(void)
static struct flash_platform_data h3xxx_flash_data = ;
static struct resource h3xxx_flash_resource = ;
static void h3xxx_uart_set_mctrl(struct uart_port *port, u_int mctrl)
static u_int h3xxx_uart_get_mctrl(struct uart_port *port)
static void h3xxx_uart_pm(struct uart_port *port, u_int state, u_int oldstate)
static int h3xxx_uart_set_wake(struct uart_port *port, u_int enable)
static struct sa1100_port_fns h3xxx_port_fns __initdata = ;
static struct resource egpio_resources[] = ;
static struct htc_egpio_chip egpio_chips[] = ;
static struct htc_egpio_platform_data egpio_info = ;
static struct platform_device h3xxx_egpio = ;
static struct gpio_keys_button h3xxx_button_table[] = ;
static struct gpio_keys_platform_data h3xxx_keys_data = ;
static struct platform_device h3xxx_keys = ;
static struct platform_device *h3xxx_devices[] = ;
void __init h3xxx_mach_init(void)
static struct map_desc h3600_io_desc[] __initdata = ;
void __init h3xxx_map_io(void)

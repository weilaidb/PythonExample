#define DEBUG_UART 1
unsigned int octeon_serial_in(struct uart_port *up, int offset)
void octeon_serial_out(struct uart_port *up, int offset, int value)
#define OCTEON_MAX_UARTS 3
static struct plat_serial8250_port octeon_uart8250_data[OCTEON_MAX_UARTS + 1];
static struct platform_device octeon_uart8250_device = ;
static void __init octeon_uart_set_common(struct plat_serial8250_port *p)
static int __init octeon_serial_init(void)
device_initcall(octeon_serial_init);

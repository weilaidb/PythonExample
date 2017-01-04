struct early_serial8250_device ;
static struct early_serial8250_device early_device;
static unsigned int __init serial_in(struct uart_port *port, int offset)
static void __init serial_out(struct uart_port *port, int offset, int value)
#define BOTH_EMPTY (UART_LSR_TEMT | UART_LSR_THRE)
static void __init wait_for_xmitr(struct uart_port *port)
static void __init serial_putc(struct uart_port *port, int c)
static void __init early_serial8250_write(struct console *console,
const char *s, unsigned int count)
static unsigned int __init probe_baud(struct uart_port *port)
static void __init init_port(struct early_serial8250_device *device)
static int __init parse_options(struct early_serial8250_device *device,
char *options)
static struct console early_serial8250_console __initdata = ;
static int __init early_serial8250_setup(char *options)
int __init setup_early_serial8250_console(char *cmdline)
int serial8250_find_port_for_earlycon(void)
early_param("earlycon", setup_early_serial8250_console);

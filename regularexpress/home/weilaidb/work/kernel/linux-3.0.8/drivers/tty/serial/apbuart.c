#if defined(CONFIG_SERIAL_GRLIB_GAISLER_APBUART_CONSOLE) && defined(CONFIG_MAGIC_SYSRQ)
#define SUPPORT_SYSRQ
#define SERIAL_APBUART_MAJOR	TTY_MAJOR
#define SERIAL_APBUART_MINOR	64
#define UART_DUMMY_RSR_RX	0x8000
static void apbuart_tx_chars(struct uart_port *port);
static void apbuart_stop_tx(struct uart_port *port)
static void apbuart_start_tx(struct uart_port *port)
static void apbuart_stop_rx(struct uart_port *port)
static void apbuart_enable_ms(struct uart_port *port)
static void apbuart_rx_chars(struct uart_port *port)
static void apbuart_tx_chars(struct uart_port *port)
static irqreturn_t apbuart_int(int irq, void *dev_id)
static unsigned int apbuart_tx_empty(struct uart_port *port)
static unsigned int apbuart_get_mctrl(struct uart_port *port)
static void apbuart_set_mctrl(struct uart_port *port, unsigned int mctrl)
static void apbuart_break_ctl(struct uart_port *port, int break_state)
static int apbuart_startup(struct uart_port *port)
static void apbuart_shutdown(struct uart_port *port)
static void apbuart_set_termios(struct uart_port *port,
struct ktermios *termios, struct ktermios *old)
static const char *apbuart_type(struct uart_port *port)
static void apbuart_release_port(struct uart_port *port)
static int apbuart_request_port(struct uart_port *port)
static void apbuart_config_port(struct uart_port *port, int flags)
static int apbuart_verify_port(struct uart_port *port,
struct serial_struct *ser)
static struct uart_ops grlib_apbuart_ops = ;
static struct uart_port grlib_apbuart_ports[UART_NR];
static struct device_node *grlib_apbuart_nodes[UART_NR];
static int apbuart_scan_fifo_size(struct uart_port *port, int portnumber)
static void apbuart_flush_fifo(struct uart_port *port)
static void apbuart_console_putchar(struct uart_port *port, int ch)
static void
apbuart_console_write(struct console *co, const char *s, unsigned int count)
static void __init
apbuart_console_get_options(struct uart_port *port, int *baud,
int *parity, int *bits)
static int __init apbuart_console_setup(struct console *co, char *options)
static struct uart_driver grlib_apbuart_driver;
static struct console grlib_apbuart_console = ;
static int grlib_apbuart_configure(void);
static int __init apbuart_console_init(void)
console_initcall(apbuart_console_init);
#define APBUART_CONSOLE	(&grlib_apbuart_console)
#define APBUART_CONSOLE	NULL
static struct uart_driver grlib_apbuart_driver = ;
static int __devinit apbuart_probe(struct platform_device *op)
static struct of_device_id __initdata apbuart_match[] = ;
static struct platform_driver grlib_apbuart_of_driver = ;
static int grlib_apbuart_configure(void)
static int __init grlib_apbuart_init(void)
static void __exit grlib_apbuart_exit(void)
module_init(grlib_apbuart_init);
module_exit(grlib_apbuart_exit);
MODULE_AUTHOR("Aeroflex Gaisler AB");
MODULE_DESCRIPTION("GRLIB APBUART serial driver");
MODULE_VERSION("2.1");
MODULE_LICENSE("GPL");

#define ULITE_NAME		"ttyUL"
#define ULITE_MAJOR		204
#define ULITE_MINOR		187
#define ULITE_NR_UARTS		4
#define ULITE_RX		0x00
#define ULITE_TX		0x04
#define ULITE_STATUS		0x08
#define ULITE_CONTROL		0x0c
#define ULITE_REGION		16
#define ULITE_STATUS_RXVALID	0x01
#define ULITE_STATUS_RXFULL	0x02
#define ULITE_STATUS_TXEMPTY	0x04
#define ULITE_STATUS_TXFULL	0x08
#define ULITE_STATUS_IE		0x10
#define ULITE_STATUS_OVERRUN	0x20
#define ULITE_STATUS_FRAME	0x40
#define ULITE_STATUS_PARITY	0x80
#define ULITE_CONTROL_RST_TX	0x01
#define ULITE_CONTROL_RST_RX	0x02
#define ULITE_CONTROL_IE	0x10
static struct uart_port ulite_ports[ULITE_NR_UARTS];
static int ulite_receive(struct uart_port *port, int stat)
static int ulite_transmit(struct uart_port *port, int stat)
static irqreturn_t ulite_isr(int irq, void *dev_id)
static unsigned int ulite_tx_empty(struct uart_port *port)
static unsigned int ulite_get_mctrl(struct uart_port *port)
static void ulite_set_mctrl(struct uart_port *port, unsigned int mctrl)
static void ulite_stop_tx(struct uart_port *port)
static void ulite_start_tx(struct uart_port *port)
static void ulite_stop_rx(struct uart_port *port)
static void ulite_enable_ms(struct uart_port *port)
static void ulite_break_ctl(struct uart_port *port, int ctl)
static int ulite_startup(struct uart_port *port)
static void ulite_shutdown(struct uart_port *port)
static void ulite_set_termios(struct uart_port *port, struct ktermios *termios,
struct ktermios *old)
static const char *ulite_type(struct uart_port *port)
static void ulite_release_port(struct uart_port *port)
static int ulite_request_port(struct uart_port *port)
static void ulite_config_port(struct uart_port *port, int flags)
static int ulite_verify_port(struct uart_port *port, struct serial_struct *ser)
static int ulite_get_poll_char(struct uart_port *port)
static void ulite_put_poll_char(struct uart_port *port, unsigned char ch)
static struct uart_ops ulite_ops = ;
static void ulite_console_wait_tx(struct uart_port *port)
static void ulite_console_putchar(struct uart_port *port, int ch)
static void ulite_console_write(struct console *co, const char *s,
unsigned int count)
static int __devinit ulite_console_setup(struct console *co, char *options)
static struct uart_driver ulite_uart_driver;
static struct console ulite_console = ;
static int __init ulite_console_init(void)
console_initcall(ulite_console_init);
static struct uart_driver ulite_uart_driver = ;
static int __devinit ulite_assign(struct device *dev, int id, u32 base, int irq)
static int __devexit ulite_release(struct device *dev)
#if defined(CONFIG_OF)
static struct of_device_id ulite_of_match[] __devinitdata = ;
MODULE_DEVICE_TABLE(of, ulite_of_match);
#define ulite_of_match NULL
static int __devinit ulite_probe(struct platform_device *pdev)
static int __devexit ulite_remove(struct platform_device *pdev)
MODULE_ALIAS("platform:uartlite");
static struct platform_driver ulite_platform_driver = ;
int __init ulite_init(void)
void __exit ulite_exit(void)
module_init(ulite_init);
module_exit(ulite_exit);
MODULE_AUTHOR("Peter Korsgaard <jacmet@sunsite.dk>");
MODULE_DESCRIPTION("Xilinx uartlite serial driver");
MODULE_LICENSE("GPL");

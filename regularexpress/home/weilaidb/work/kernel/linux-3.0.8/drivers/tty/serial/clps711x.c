#if defined(CONFIG_SERIAL_CLPS711X_CONSOLE) && defined(CONFIG_MAGIC_SYSRQ)
#define SUPPORT_SYSRQ
#define UART_NR		2
#define SERIAL_CLPS711X_MAJOR	204
#define SERIAL_CLPS711X_MINOR	40
#define SERIAL_CLPS711X_NR	UART_NR
#define UBRLCR(port)		((port)->iobase + UBRLCR1 - SYSCON1)
#define UARTDR(port)		((port)->iobase + UARTDR1 - SYSCON1)
#define SYSFLG(port)		((port)->iobase + SYSFLG1 - SYSCON1)
#define SYSCON(port)		((port)->iobase + SYSCON1 - SYSCON1)
#define TX_IRQ(port)		((port)->irq)
#define RX_IRQ(port)		((port)->irq + 1)
#define UART_ANY_ERR		(UARTDR_FRMERR | UARTDR_PARERR | UARTDR_OVERR)
#define tx_enabled(port)	((port)->unused[0])
static void clps711xuart_stop_tx(struct uart_port *port)
static void clps711xuart_start_tx(struct uart_port *port)
static void clps711xuart_stop_rx(struct uart_port *port)
static void clps711xuart_enable_ms(struct uart_port *port)
static irqreturn_t clps711xuart_int_rx(int irq, void *dev_id)
static irqreturn_t clps711xuart_int_tx(int irq, void *dev_id)
static unsigned int clps711xuart_tx_empty(struct uart_port *port)
static unsigned int clps711xuart_get_mctrl(struct uart_port *port)
static void
clps711xuart_set_mctrl_null(struct uart_port *port, unsigned int mctrl)
static void clps711xuart_break_ctl(struct uart_port *port, int break_state)
static int clps711xuart_startup(struct uart_port *port)
static void clps711xuart_shutdown(struct uart_port *port)
static void
clps711xuart_set_termios(struct uart_port *port, struct ktermios *termios,
struct ktermios *old)
static const char *clps711xuart_type(struct uart_port *port)
static void clps711xuart_config_port(struct uart_port *port, int flags)
static void clps711xuart_release_port(struct uart_port *port)
static int clps711xuart_request_port(struct uart_port *port)
static struct uart_ops clps711x_pops = ;
static struct uart_port clps711x_ports[UART_NR] = ;
static void clps711xuart_console_putchar(struct uart_port *port, int ch)
static void
clps711xuart_console_write(struct console *co, const char *s,
unsigned int count)
static void __init
clps711xuart_console_get_options(struct uart_port *port, int *baud,
int *parity, int *bits)
static int __init clps711xuart_console_setup(struct console *co, char *options)
static struct uart_driver clps711x_reg;
static struct console clps711x_console = ;
static int __init clps711xuart_console_init(void)
console_initcall(clps711xuart_console_init);
#define CLPS711X_CONSOLE	&clps711x_console
#define CLPS711X_CONSOLE	NULL
static struct uart_driver clps711x_reg = ;
static int __init clps711xuart_init(void)
static void __exit clps711xuart_exit(void)
module_init(clps711xuart_init);
module_exit(clps711xuart_exit);
MODULE_AUTHOR("Deep Blue Solutions Ltd");
MODULE_DESCRIPTION("CLPS-711x generic serial driver");
MODULE_LICENSE("GPL");
MODULE_ALIAS_CHARDEV(SERIAL_CLPS711X_MAJOR, SERIAL_CLPS711X_MINOR);

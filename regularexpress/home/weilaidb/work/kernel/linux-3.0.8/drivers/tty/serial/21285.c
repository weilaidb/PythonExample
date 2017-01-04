#define BAUD_BASE		(mem_fclk_21285/64)
#define SERIAL_21285_NAME	"ttyFB"
#define SERIAL_21285_MAJOR	204
#define SERIAL_21285_MINOR	4
#define RXSTAT_DUMMY_READ	0x80000000
#define RXSTAT_FRAME		(1 << 0)
#define RXSTAT_PARITY		(1 << 1)
#define RXSTAT_OVERRUN		(1 << 2)
#define RXSTAT_ANYERR		(RXSTAT_FRAME|RXSTAT_PARITY|RXSTAT_OVERRUN)
#define H_UBRLCR_BREAK		(1 << 0)
#define H_UBRLCR_PARENB		(1 << 1)
#define H_UBRLCR_PAREVN		(1 << 2)
#define H_UBRLCR_STOPB		(1 << 3)
#define H_UBRLCR_FIFO		(1 << 4)
static const char serial21285_name[] = "Footbridge UART";
#define tx_enabled(port)	((port)->unused[0])
#define rx_enabled(port)	((port)->unused[1])
static void serial21285_stop_tx(struct uart_port *port)
static void serial21285_start_tx(struct uart_port *port)
static void serial21285_stop_rx(struct uart_port *port)
static void serial21285_enable_ms(struct uart_port *port)
static irqreturn_t serial21285_rx_chars(int irq, void *dev_id)
static irqreturn_t serial21285_tx_chars(int irq, void *dev_id)
static unsigned int serial21285_tx_empty(struct uart_port *port)
static unsigned int serial21285_get_mctrl(struct uart_port *port)
static void serial21285_set_mctrl(struct uart_port *port, unsigned int mctrl)
static void serial21285_break_ctl(struct uart_port *port, int break_state)
static int serial21285_startup(struct uart_port *port)
static void serial21285_shutdown(struct uart_port *port)
static void
serial21285_set_termios(struct uart_port *port, struct ktermios *termios,
struct ktermios *old)
static const char *serial21285_type(struct uart_port *port)
static void serial21285_release_port(struct uart_port *port)
static int serial21285_request_port(struct uart_port *port)
static void serial21285_config_port(struct uart_port *port, int flags)
static int serial21285_verify_port(struct uart_port *port, struct serial_struct *ser)
static struct uart_ops serial21285_ops = ;
static struct uart_port serial21285_port = ;
static void serial21285_setup_ports(void)
static void serial21285_console_putchar(struct uart_port *port, int ch)
static void
serial21285_console_write(struct console *co, const char *s,
unsigned int count)
static void __init
serial21285_get_options(struct uart_port *port, int *baud,
int *parity, int *bits)
static int __init serial21285_console_setup(struct console *co, char *options)
static struct uart_driver serial21285_reg;
static struct console serial21285_console =
;
static int __init rs285_console_init(void)
console_initcall(rs285_console_init);
#define SERIAL_21285_CONSOLE	&serial21285_console
#define SERIAL_21285_CONSOLE	NULL
static struct uart_driver serial21285_reg = ;
static int __init serial21285_init(void)
static void __exit serial21285_exit(void)
module_init(serial21285_init);
module_exit(serial21285_exit);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Intel Footbridge (21285) serial driver");
MODULE_ALIAS_CHARDEV(SERIAL_21285_MAJOR, SERIAL_21285_MINOR);

#if defined(CONFIG_SERIAL_AMBA_PL010_CONSOLE) && defined(CONFIG_MAGIC_SYSRQ)
#define SUPPORT_SYSRQ
#define UART_NR		8
#define SERIAL_AMBA_MAJOR	204
#define SERIAL_AMBA_MINOR	16
#define SERIAL_AMBA_NR		UART_NR
#define AMBA_ISR_PASS_LIMIT	256
#define UART_RX_DATA(s)		(((s) & UART01x_FR_RXFE) == 0)
#define UART_TX_READY(s)	(((s) & UART01x_FR_TXFF) == 0)
#define UART_DUMMY_RSR_RX	256
#define UART_PORT_SIZE		64
struct uart_amba_port ;
static void pl010_stop_tx(struct uart_port *port)
static void pl010_start_tx(struct uart_port *port)
static void pl010_stop_rx(struct uart_port *port)
static void pl010_enable_ms(struct uart_port *port)
static void pl010_rx_chars(struct uart_amba_port *uap)
static void pl010_tx_chars(struct uart_amba_port *uap)
static void pl010_modem_status(struct uart_amba_port *uap)
static irqreturn_t pl010_int(int irq, void *dev_id)
static unsigned int pl010_tx_empty(struct uart_port *port)
static unsigned int pl010_get_mctrl(struct uart_port *port)
static void pl010_set_mctrl(struct uart_port *port, unsigned int mctrl)
static void pl010_break_ctl(struct uart_port *port, int break_state)
static int pl010_startup(struct uart_port *port)
static void pl010_shutdown(struct uart_port *port)
static void
pl010_set_termios(struct uart_port *port, struct ktermios *termios,
struct ktermios *old)
static void pl010_set_ldisc(struct uart_port *port, int new)
static const char *pl010_type(struct uart_port *port)
static void pl010_release_port(struct uart_port *port)
static int pl010_request_port(struct uart_port *port)
static void pl010_config_port(struct uart_port *port, int flags)
static int pl010_verify_port(struct uart_port *port, struct serial_struct *ser)
static struct uart_ops amba_pl010_pops = ;
static struct uart_amba_port *amba_ports[UART_NR];
static void pl010_console_putchar(struct uart_port *port, int ch)
static void
pl010_console_write(struct console *co, const char *s, unsigned int count)
static void __init
pl010_console_get_options(struct uart_amba_port *uap, int *baud,
int *parity, int *bits)
static int __init pl010_console_setup(struct console *co, char *options)
static struct uart_driver amba_reg;
static struct console amba_console = ;
#define AMBA_CONSOLE	&amba_console
#define AMBA_CONSOLE	NULL
static struct uart_driver amba_reg = ;
static int pl010_probe(struct amba_device *dev, const struct amba_id *id)
static int pl010_remove(struct amba_device *dev)
static int pl010_suspend(struct amba_device *dev, pm_message_t state)
static int pl010_resume(struct amba_device *dev)
static struct amba_id pl010_ids[] = ;
static struct amba_driver pl010_driver = ;
static int __init pl010_init(void)
static void __exit pl010_exit(void)
module_init(pl010_init);
module_exit(pl010_exit);
MODULE_AUTHOR("ARM Ltd/Deep Blue Solutions Ltd");
MODULE_DESCRIPTION("ARM AMBA serial port driver");
MODULE_LICENSE("GPL");

#if defined(CONFIG_SERIAL_PXA_CONSOLE) && defined(CONFIG_MAGIC_SYSRQ)
#define SUPPORT_SYSRQ
struct uart_pxa_port ;
static inline unsigned int serial_in(struct uart_pxa_port *up, int offset)
static inline void serial_out(struct uart_pxa_port *up, int offset, int value)
static void serial_pxa_enable_ms(struct uart_port *port)
static void serial_pxa_stop_tx(struct uart_port *port)
static void serial_pxa_stop_rx(struct uart_port *port)
static inline void receive_chars(struct uart_pxa_port *up, int *status)
static void transmit_chars(struct uart_pxa_port *up)
static void serial_pxa_start_tx(struct uart_port *port)
static inline void check_modem_status(struct uart_pxa_port *up)
static inline irqreturn_t serial_pxa_irq(int irq, void *dev_id)
static unsigned int serial_pxa_tx_empty(struct uart_port *port)
static unsigned int serial_pxa_get_mctrl(struct uart_port *port)
static void serial_pxa_set_mctrl(struct uart_port *port, unsigned int mctrl)
static void serial_pxa_break_ctl(struct uart_port *port, int break_state)
static int serial_pxa_startup(struct uart_port *port)
static void serial_pxa_shutdown(struct uart_port *port)
static void
serial_pxa_set_termios(struct uart_port *port, struct ktermios *termios,
struct ktermios *old)
static void
serial_pxa_pm(struct uart_port *port, unsigned int state,
unsigned int oldstate)
static void serial_pxa_release_port(struct uart_port *port)
static int serial_pxa_request_port(struct uart_port *port)
static void serial_pxa_config_port(struct uart_port *port, int flags)
static int
serial_pxa_verify_port(struct uart_port *port, struct serial_struct *ser)
static const char *
serial_pxa_type(struct uart_port *port)
static struct uart_pxa_port *serial_pxa_ports[4];
static struct uart_driver serial_pxa_reg;
#define BOTH_EMPTY (UART_LSR_TEMT | UART_LSR_THRE)
static inline void wait_for_xmitr(struct uart_pxa_port *up)
static void serial_pxa_console_putchar(struct uart_port *port, int ch)
static void
serial_pxa_console_write(struct console *co, const char *s, unsigned int count)
static int __init
serial_pxa_console_setup(struct console *co, char *options)
static struct console serial_pxa_console = ;
#define PXA_CONSOLE	&serial_pxa_console
#define PXA_CONSOLE	NULL
struct uart_ops serial_pxa_pops = ;
static struct uart_driver serial_pxa_reg = ;
static int serial_pxa_suspend(struct device *dev)
static int serial_pxa_resume(struct device *dev)
static const struct dev_pm_ops serial_pxa_pm_ops = ;
static int serial_pxa_probe(struct platform_device *dev)
static int serial_pxa_remove(struct platform_device *dev)
static struct platform_driver serial_pxa_driver = ;
int __init serial_pxa_init(void)
void __exit serial_pxa_exit(void)
module_init(serial_pxa_init);
module_exit(serial_pxa_exit);
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:pxa2xx-uart");

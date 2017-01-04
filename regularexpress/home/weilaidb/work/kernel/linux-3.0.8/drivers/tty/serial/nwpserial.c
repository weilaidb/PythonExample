#define NWPSERIAL_NR               2
#define NWPSERIAL_STATUS_RXVALID 0x1
#define NWPSERIAL_STATUS_TXFULL  0x2
struct nwpserial_port ;
static DEFINE_MUTEX(nwpserial_mutex);
static struct nwpserial_port nwpserial_ports[NWPSERIAL_NR];
static void wait_for_bits(struct nwpserial_port *up, int bits)
static void nwpserial_console_putchar(struct uart_port *port, int c)
static void
nwpserial_console_write(struct console *co, const char *s, unsigned int count)
static struct uart_driver nwpserial_reg;
static struct console nwpserial_console = ;
#define NWPSERIAL_CONSOLE	(&nwpserial_console)
#define NWPSERIAL_CONSOLE	NULL
static int nwpserial_request_port(struct uart_port *port)
static void nwpserial_release_port(struct uart_port *port)
static void nwpserial_config_port(struct uart_port *port, int flags)
static irqreturn_t nwpserial_interrupt(int irq, void *dev_id)
static int nwpserial_startup(struct uart_port *port)
static void nwpserial_shutdown(struct uart_port *port)
static int nwpserial_verify_port(struct uart_port *port,
struct serial_struct *ser)
static const char *nwpserial_type(struct uart_port *port)
static void nwpserial_set_termios(struct uart_port *port,
struct ktermios *termios, struct ktermios *old)
static void nwpserial_break_ctl(struct uart_port *port, int ctl)
static void nwpserial_enable_ms(struct uart_port *port)
static void nwpserial_stop_rx(struct uart_port *port)
static void nwpserial_putchar(struct nwpserial_port *up, unsigned char c)
static void nwpserial_start_tx(struct uart_port *port)
static unsigned int nwpserial_get_mctrl(struct uart_port *port)
static void nwpserial_set_mctrl(struct uart_port *port, unsigned int mctrl)
static void nwpserial_stop_tx(struct uart_port *port)
static unsigned int nwpserial_tx_empty(struct uart_port *port)
static struct uart_ops nwpserial_pops = ;
static struct uart_driver nwpserial_reg = ;
int nwpserial_register_port(struct uart_port *port)
EXPORT_SYMBOL(nwpserial_register_port);
void nwpserial_unregister_port(int line)
EXPORT_SYMBOL(nwpserial_unregister_port);
static int __init nwpserial_console_init(void)
console_initcall(nwpserial_console_init);

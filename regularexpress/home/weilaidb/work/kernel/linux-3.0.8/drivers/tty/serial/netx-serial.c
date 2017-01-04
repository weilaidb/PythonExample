#if defined(CONFIG_SERIAL_NETX_CONSOLE) && defined(CONFIG_MAGIC_SYSRQ)
#define SUPPORT_SYSRQ
#define SERIAL_NX_MAJOR	204
#define MINOR_START	170
enum uart_regs ;
#define SR_FE (1<<0)
#define SR_PE (1<<1)
#define SR_BE (1<<2)
#define SR_OE (1<<3)
#define LINE_CR_BRK       (1<<0)
#define LINE_CR_PEN       (1<<1)
#define LINE_CR_EPS       (1<<2)
#define LINE_CR_STP2      (1<<3)
#define LINE_CR_FEN       (1<<4)
#define LINE_CR_5BIT      (0<<5)
#define LINE_CR_6BIT      (1<<5)
#define LINE_CR_7BIT      (2<<5)
#define LINE_CR_8BIT      (3<<5)
#define LINE_CR_BITS_MASK (3<<5)
#define CR_UART_EN (1<<0)
#define CR_SIREN   (1<<1)
#define CR_SIRLP   (1<<2)
#define CR_MSIE    (1<<3)
#define CR_RIE     (1<<4)
#define CR_TIE     (1<<5)
#define CR_RTIE    (1<<6)
#define CR_LBE     (1<<7)
#define FR_CTS  (1<<0)
#define FR_DSR  (1<<1)
#define FR_DCD  (1<<2)
#define FR_BUSY (1<<3)
#define FR_RXFE (1<<4)
#define FR_TXFF (1<<5)
#define FR_RXFF (1<<6)
#define FR_TXFE (1<<7)
#define IIR_MIS (1<<0)
#define IIR_RIS (1<<1)
#define IIR_TIS (1<<2)
#define IIR_RTIS (1<<3)
#define IIR_MASK 0xf
#define RTS_CR_AUTO (1<<0)
#define RTS_CR_RTS  (1<<1)
#define RTS_CR_COUNT (1<<2)
#define RTS_CR_MOD2  (1<<3)
#define RTS_CR_RTS_POL (1<<4)
#define RTS_CR_CTS_CTR (1<<5)
#define RTS_CR_CTS_POL (1<<6)
#define RTS_CR_STICK   (1<<7)
#define UART_PORT_SIZE 0x40
#define DRIVER_NAME "netx-uart"
struct netx_port ;
static void netx_stop_tx(struct uart_port *port)
static void netx_stop_rx(struct uart_port *port)
static void netx_enable_ms(struct uart_port *port)
static inline void netx_transmit_buffer(struct uart_port *port)
static void netx_start_tx(struct uart_port *port)
static unsigned int netx_tx_empty(struct uart_port *port)
static void netx_txint(struct uart_port *port)
static void netx_rxint(struct uart_port *port)
static irqreturn_t netx_int(int irq, void *dev_id)
static unsigned int netx_get_mctrl(struct uart_port *port)
static void netx_set_mctrl(struct uart_port *port, unsigned int mctrl)
static void netx_break_ctl(struct uart_port *port, int break_state)
static int netx_startup(struct uart_port *port)
static void netx_shutdown(struct uart_port *port)
static void
netx_set_termios(struct uart_port *port, struct ktermios *termios,
struct ktermios *old)
static const char *netx_type(struct uart_port *port)
static void netx_release_port(struct uart_port *port)
static int netx_request_port(struct uart_port *port)
static void netx_config_port(struct uart_port *port, int flags)
static int
netx_verify_port(struct uart_port *port, struct serial_struct *ser)
static struct uart_ops netx_pops = ;
static struct netx_port netx_ports[] = ;
static void netx_console_putchar(struct uart_port *port, int ch)
static void
netx_console_write(struct console *co, const char *s, unsigned int count)
static void __init
netx_console_get_options(struct uart_port *port, int *baud,
int *parity, int *bits, int *flow)
static int __init
netx_console_setup(struct console *co, char *options)
static struct uart_driver netx_reg;
static struct console netx_console = ;
static int __init netx_console_init(void)
console_initcall(netx_console_init);
#define NETX_CONSOLE	&netx_console
#define NETX_CONSOLE	NULL
static struct uart_driver netx_reg = ;
static int serial_netx_suspend(struct platform_device *pdev, pm_message_t state)
static int serial_netx_resume(struct platform_device *pdev)
static int serial_netx_probe(struct platform_device *pdev)
static int serial_netx_remove(struct platform_device *pdev)
static struct platform_driver serial_netx_driver = ;
static int __init netx_serial_init(void)
static void __exit netx_serial_exit(void)
module_init(netx_serial_init);
module_exit(netx_serial_exit);
MODULE_AUTHOR("Sascha Hauer");
MODULE_DESCRIPTION("NetX serial port driver");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:" DRIVER_NAME);

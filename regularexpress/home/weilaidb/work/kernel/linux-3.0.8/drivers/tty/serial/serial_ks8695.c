#if defined(CONFIG_SERIAL_KS8695_CONSOLE) && defined(CONFIG_MAGIC_SYSRQ)
#define SUPPORT_SYSRQ
#define SERIAL_KS8695_MAJOR	204
#define SERIAL_KS8695_MINOR	16
#define SERIAL_KS8695_DEVNAME	"ttyAM"
#define SERIAL_KS8695_NR	1
#define UART_GET_CHAR(p)	(__raw_readl((p)->membase + KS8695_URRB) & 0xFF)
#define UART_PUT_CHAR(p, c)	__raw_writel((c), (p)->membase + KS8695_URTH)
#define UART_GET_FCR(p)		__raw_readl((p)->membase + KS8695_URFC)
#define UART_PUT_FCR(p, c)	__raw_writel((c), (p)->membase + KS8695_URFC)
#define UART_GET_MSR(p)		__raw_readl((p)->membase + KS8695_URMS)
#define UART_GET_LSR(p)		__raw_readl((p)->membase + KS8695_URLS)
#define UART_GET_LCR(p)		__raw_readl((p)->membase + KS8695_URLC)
#define UART_PUT_LCR(p, c)	__raw_writel((c), (p)->membase + KS8695_URLC)
#define UART_GET_MCR(p)		__raw_readl((p)->membase + KS8695_URMC)
#define UART_PUT_MCR(p, c)	__raw_writel((c), (p)->membase + KS8695_URMC)
#define UART_GET_BRDR(p)	__raw_readl((p)->membase + KS8695_URBD)
#define UART_PUT_BRDR(p, c)	__raw_writel((c), (p)->membase + KS8695_URBD)
#define KS8695_CLR_TX_INT()	__raw_writel(1 << KS8695_IRQ_UART_TX, KS8695_IRQ_VA + KS8695_INTST)
#define UART_DUMMY_LSR_RX	0x100
#define UART_PORT_SIZE		(KS8695_USR - KS8695_URRB + 4)
static inline int tx_enabled(struct uart_port *port)
static inline int rx_enabled(struct uart_port *port)
static inline int ms_enabled(struct uart_port *port)
static inline void ms_enable(struct uart_port *port, int enabled)
static inline void rx_enable(struct uart_port *port, int enabled)
static inline void tx_enable(struct uart_port *port, int enabled)
static struct console ks8695_console;
static void ks8695uart_stop_tx(struct uart_port *port)
static void ks8695uart_start_tx(struct uart_port *port)
static void ks8695uart_stop_rx(struct uart_port *port)
static void ks8695uart_enable_ms(struct uart_port *port)
static void ks8695uart_disable_ms(struct uart_port *port)
static irqreturn_t ks8695uart_rx_chars(int irq, void *dev_id)
static irqreturn_t ks8695uart_tx_chars(int irq, void *dev_id)
static irqreturn_t ks8695uart_modem_status(int irq, void *dev_id)
static unsigned int ks8695uart_tx_empty(struct uart_port *port)
static unsigned int ks8695uart_get_mctrl(struct uart_port *port)
static void ks8695uart_set_mctrl(struct uart_port *port, u_int mctrl)
static void ks8695uart_break_ctl(struct uart_port *port, int break_state)
static int ks8695uart_startup(struct uart_port *port)
static void ks8695uart_shutdown(struct uart_port *port)
static void ks8695uart_set_termios(struct uart_port *port, struct ktermios *termios, struct ktermios *old)
static const char *ks8695uart_type(struct uart_port *port)
static void ks8695uart_release_port(struct uart_port *port)
static int ks8695uart_request_port(struct uart_port *port)
static void ks8695uart_config_port(struct uart_port *port, int flags)
static int ks8695uart_verify_port(struct uart_port *port, struct serial_struct *ser)
static struct uart_ops ks8695uart_pops = ;
static struct uart_port ks8695uart_ports[SERIAL_KS8695_NR] = ;
static void ks8695_console_putchar(struct uart_port *port, int ch)
static void ks8695_console_write(struct console *co, const char *s, u_int count)
static void __init ks8695_console_get_options(struct uart_port *port, int *baud, int *parity, int *bits)
static int __init ks8695_console_setup(struct console *co, char *options)
static struct uart_driver ks8695_reg;
static struct console ks8695_console = ;
static int __init ks8695_console_init(void)
console_initcall(ks8695_console_init);
#define KS8695_CONSOLE	&ks8695_console
#define KS8695_CONSOLE	NULL
static struct uart_driver ks8695_reg = ;
static int __init ks8695uart_init(void)
static void __exit ks8695uart_exit(void)
module_init(ks8695uart_init);
module_exit(ks8695uart_exit);
MODULE_DESCRIPTION("KS8695 serial port driver");
MODULE_AUTHOR("Micrel Inc.");
MODULE_LICENSE("GPL");

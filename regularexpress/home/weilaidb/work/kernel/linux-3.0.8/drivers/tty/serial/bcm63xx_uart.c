#if defined(CONFIG_SERIAL_BCM63XX_CONSOLE) && defined(CONFIG_MAGIC_SYSRQ)
#define SUPPORT_SYSRQ
#define BCM63XX_NR_UARTS	2
static struct uart_port ports[BCM63XX_NR_UARTS];
#define UART_RX_INT_MASK	(UART_IR_MASK(UART_IR_RXOVER) |		\
UART_IR_MASK(UART_IR_RXTHRESH) |	\
UART_IR_MASK(UART_IR_RXTIMEOUT))
#define UART_RX_INT_STAT	(UART_IR_STAT(UART_IR_RXOVER) |		\
UART_IR_STAT(UART_IR_RXTHRESH) |	\
UART_IR_STAT(UART_IR_RXTIMEOUT))
#define UART_TX_INT_MASK	(UART_IR_MASK(UART_IR_TXEMPTY) |	\
UART_IR_MASK(UART_IR_TXTRESH))
#define UART_TX_INT_STAT	(UART_IR_STAT(UART_IR_TXEMPTY) |	\
UART_IR_STAT(UART_IR_TXTRESH))
#define UART_EXTINP_INT_MASK	(UART_EXTINP_IRMASK(UART_EXTINP_IR_CTS) | \
UART_EXTINP_IRMASK(UART_EXTINP_IR_DCD))
static inline unsigned int bcm_uart_readl(struct uart_port *port,
unsigned int offset)
static inline void bcm_uart_writel(struct uart_port *port,
unsigned int value, unsigned int offset)
static unsigned int bcm_uart_tx_empty(struct uart_port *port)
static void bcm_uart_set_mctrl(struct uart_port *port, unsigned int mctrl)
static unsigned int bcm_uart_get_mctrl(struct uart_port *port)
static void bcm_uart_stop_tx(struct uart_port *port)
static void bcm_uart_start_tx(struct uart_port *port)
static void bcm_uart_stop_rx(struct uart_port *port)
static void bcm_uart_enable_ms(struct uart_port *port)
static void bcm_uart_break_ctl(struct uart_port *port, int ctl)
static const char *bcm_uart_type(struct uart_port *port)
static void bcm_uart_do_rx(struct uart_port *port)
static void bcm_uart_do_tx(struct uart_port *port)
static irqreturn_t bcm_uart_interrupt(int irq, void *dev_id)
static void bcm_uart_enable(struct uart_port *port)
static void bcm_uart_disable(struct uart_port *port)
static void bcm_uart_flush(struct uart_port *port)
static int bcm_uart_startup(struct uart_port *port)
static void bcm_uart_shutdown(struct uart_port *port)
static void bcm_uart_set_termios(struct uart_port *port,
struct ktermios *new,
struct ktermios *old)
static int bcm_uart_request_port(struct uart_port *port)
static void bcm_uart_release_port(struct uart_port *port)
static void bcm_uart_config_port(struct uart_port *port, int flags)
static int bcm_uart_verify_port(struct uart_port *port,
struct serial_struct *serinfo)
static struct uart_ops bcm_uart_ops = ;
static inline void wait_for_xmitr(struct uart_port *port)
static void bcm_console_putchar(struct uart_port *port, int ch)
static void bcm_console_write(struct console *co, const char *s,
unsigned int count)
static int bcm_console_setup(struct console *co, char *options)
static struct uart_driver bcm_uart_driver;
static struct console bcm63xx_console = ;
static int __init bcm63xx_console_init(void)
console_initcall(bcm63xx_console_init);
#define BCM63XX_CONSOLE	(&bcm63xx_console)
#define BCM63XX_CONSOLE	NULL
static struct uart_driver bcm_uart_driver = ;
static int __devinit bcm_uart_probe(struct platform_device *pdev)
static int __devexit bcm_uart_remove(struct platform_device *pdev)
static struct platform_driver bcm_uart_platform_driver = ;
static int __init bcm_uart_init(void)
static void __exit bcm_uart_exit(void)
module_init(bcm_uart_init);
module_exit(bcm_uart_exit);
MODULE_AUTHOR("Maxime Bizon <mbizon@freebox.fr>");
MODULE_DESCRIPTION("Broadcom 63<xx integrated uart driver");
MODULE_LICENSE("GPL");

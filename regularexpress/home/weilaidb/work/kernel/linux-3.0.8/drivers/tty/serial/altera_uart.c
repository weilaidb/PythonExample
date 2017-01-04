#define DRV_NAME "altera_uart"
#define SERIAL_ALTERA_MAJOR 204
#define SERIAL_ALTERA_MINOR 213
#define ALTERA_UART_SIZE		32
#define ALTERA_UART_RXDATA_REG		0
#define ALTERA_UART_TXDATA_REG		4
#define ALTERA_UART_STATUS_REG		8
#define ALTERA_UART_CONTROL_REG		12
#define ALTERA_UART_DIVISOR_REG		16
#define ALTERA_UART_EOP_REG		20
#define ALTERA_UART_STATUS_PE_MSK	0x0001
#define ALTERA_UART_STATUS_FE_MSK	0x0002
#define ALTERA_UART_STATUS_BRK_MSK	0x0004
#define ALTERA_UART_STATUS_ROE_MSK	0x0008
#define ALTERA_UART_STATUS_TOE_MSK	0x0010
#define ALTERA_UART_STATUS_TMT_MSK	0x0020
#define ALTERA_UART_STATUS_TRDY_MSK	0x0040
#define ALTERA_UART_STATUS_RRDY_MSK	0x0080
#define ALTERA_UART_STATUS_E_MSK	0x0100
#define ALTERA_UART_STATUS_DCTS_MSK	0x0400
#define ALTERA_UART_STATUS_CTS_MSK	0x0800
#define ALTERA_UART_STATUS_EOP_MSK	0x1000
#define ALTERA_UART_CONTROL_PE_MSK	0x0001
#define ALTERA_UART_CONTROL_FE_MSK	0x0002
#define ALTERA_UART_CONTROL_BRK_MSK	0x0004
#define ALTERA_UART_CONTROL_ROE_MSK	0x0008
#define ALTERA_UART_CONTROL_TOE_MSK	0x0010
#define ALTERA_UART_CONTROL_TMT_MSK	0x0020
#define ALTERA_UART_CONTROL_TRDY_MSK	0x0040
#define ALTERA_UART_CONTROL_RRDY_MSK	0x0080
#define ALTERA_UART_CONTROL_E_MSK	0x0100
#define ALTERA_UART_CONTROL_TRBK_MSK	0x0200
#define ALTERA_UART_CONTROL_DCTS_MSK	0x0400
#define ALTERA_UART_CONTROL_RTS_MSK	0x0800
#define ALTERA_UART_CONTROL_EOP_MSK	0x1000
struct altera_uart ;
static u32 altera_uart_readl(struct uart_port *port, int reg)
static void altera_uart_writel(struct uart_port *port, u32 dat, int reg)
static unsigned int altera_uart_tx_empty(struct uart_port *port)
static unsigned int altera_uart_get_mctrl(struct uart_port *port)
static void altera_uart_set_mctrl(struct uart_port *port, unsigned int sigs)
static void altera_uart_start_tx(struct uart_port *port)
static void altera_uart_stop_tx(struct uart_port *port)
static void altera_uart_stop_rx(struct uart_port *port)
static void altera_uart_break_ctl(struct uart_port *port, int break_state)
static void altera_uart_enable_ms(struct uart_port *port)
static void altera_uart_set_termios(struct uart_port *port,
struct ktermios *termios,
struct ktermios *old)
static void altera_uart_rx_chars(struct altera_uart *pp)
static void altera_uart_tx_chars(struct altera_uart *pp)
static irqreturn_t altera_uart_interrupt(int irq, void *data)
static void altera_uart_timer(unsigned long data)
static void altera_uart_config_port(struct uart_port *port, int flags)
static int altera_uart_startup(struct uart_port *port)
static void altera_uart_shutdown(struct uart_port *port)
static const char *altera_uart_type(struct uart_port *port)
static int altera_uart_request_port(struct uart_port *port)
static void altera_uart_release_port(struct uart_port *port)
static int altera_uart_verify_port(struct uart_port *port,
struct serial_struct *ser)
static struct uart_ops altera_uart_ops = ;
static struct altera_uart altera_uart_ports[CONFIG_SERIAL_ALTERA_UART_MAXPORTS];
#if defined(CONFIG_SERIAL_ALTERA_UART_CONSOLE)
int __init early_altera_uart_setup(struct altera_uart_platform_uart *platp)
static void altera_uart_console_putc(struct uart_port *port, const char c)
static void altera_uart_console_write(struct console *co, const char *s,
unsigned int count)
static int __init altera_uart_console_setup(struct console *co, char *options)
static struct uart_driver altera_uart_driver;
static struct console altera_uart_console = ;
static int __init altera_uart_console_init(void)
console_initcall(altera_uart_console_init);
#define	ALTERA_UART_CONSOLE	(&altera_uart_console)
#define	ALTERA_UART_CONSOLE	NULL
static struct uart_driver altera_uart_driver = ;
static int altera_uart_get_of_uartclk(struct platform_device *pdev,
struct uart_port *port)
static int altera_uart_get_of_uartclk(struct platform_device *pdev,
struct uart_port *port)
static int __devinit altera_uart_probe(struct platform_device *pdev)
static int __devexit altera_uart_remove(struct platform_device *pdev)
static struct of_device_id altera_uart_match[] = ;
MODULE_DEVICE_TABLE(of, altera_uart_match);
#define altera_uart_match NULL
static struct platform_driver altera_uart_platform_driver = ;
static int __init altera_uart_init(void)
static void __exit altera_uart_exit(void)
module_init(altera_uart_init);
module_exit(altera_uart_exit);
MODULE_DESCRIPTION("Altera UART driver");
MODULE_AUTHOR("Thomas Chou <thomas@wytron.com.tw>");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:" DRV_NAME);
MODULE_ALIAS_CHARDEV_MAJOR(SERIAL_ALTERA_MAJOR);

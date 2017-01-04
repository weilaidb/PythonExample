#if defined(CONFIG_SERIAL_SA1100_CONSOLE) && defined(CONFIG_MAGIC_SYSRQ)
#define SUPPORT_SYSRQ
#define SERIAL_SA1100_MAJOR	204
#define MINOR_START		5
#define NR_PORTS		3
#define SA1100_ISR_PASS_LIMIT	256
#define SM_TO_UTSR0(x)	((x) & 0xff)
#define SM_TO_UTSR1(x)	((x) >> 8)
#define UTSR0_TO_SM(x)	((x))
#define UTSR1_TO_SM(x)	((x) << 8)
#define UART_GET_UTCR0(sport)	__raw_readl((sport)->port.membase + UTCR0)
#define UART_GET_UTCR1(sport)	__raw_readl((sport)->port.membase + UTCR1)
#define UART_GET_UTCR2(sport)	__raw_readl((sport)->port.membase + UTCR2)
#define UART_GET_UTCR3(sport)	__raw_readl((sport)->port.membase + UTCR3)
#define UART_GET_UTSR0(sport)	__raw_readl((sport)->port.membase + UTSR0)
#define UART_GET_UTSR1(sport)	__raw_readl((sport)->port.membase + UTSR1)
#define UART_GET_CHAR(sport)	__raw_readl((sport)->port.membase + UTDR)
#define UART_PUT_UTCR0(sport,v)	__raw_writel((v),(sport)->port.membase + UTCR0)
#define UART_PUT_UTCR1(sport,v)	__raw_writel((v),(sport)->port.membase + UTCR1)
#define UART_PUT_UTCR2(sport,v)	__raw_writel((v),(sport)->port.membase + UTCR2)
#define UART_PUT_UTCR3(sport,v)	__raw_writel((v),(sport)->port.membase + UTCR3)
#define UART_PUT_UTSR0(sport,v)	__raw_writel((v),(sport)->port.membase + UTSR0)
#define UART_PUT_UTSR1(sport,v)	__raw_writel((v),(sport)->port.membase + UTSR1)
#define UART_PUT_CHAR(sport,v)	__raw_writel((v),(sport)->port.membase + UTDR)
#define UART_PORT_SIZE	0x24
#define MCTRL_TIMEOUT	(250*HZ/1000)
struct sa1100_port ;
static void sa1100_mctrl_check(struct sa1100_port *sport)
static void sa1100_timeout(unsigned long data)
static void sa1100_stop_tx(struct uart_port *port)
static void sa1100_start_tx(struct uart_port *port)
static void sa1100_stop_rx(struct uart_port *port)
static void sa1100_enable_ms(struct uart_port *port)
static void
sa1100_rx_chars(struct sa1100_port *sport)
static void sa1100_tx_chars(struct sa1100_port *sport)
static irqreturn_t sa1100_int(int irq, void *dev_id)
static unsigned int sa1100_tx_empty(struct uart_port *port)
static unsigned int sa1100_get_mctrl(struct uart_port *port)
static void sa1100_set_mctrl(struct uart_port *port, unsigned int mctrl)
static void sa1100_break_ctl(struct uart_port *port, int break_state)
static int sa1100_startup(struct uart_port *port)
static void sa1100_shutdown(struct uart_port *port)
static void
sa1100_set_termios(struct uart_port *port, struct ktermios *termios,
struct ktermios *old)
static const char *sa1100_type(struct uart_port *port)
static void sa1100_release_port(struct uart_port *port)
static int sa1100_request_port(struct uart_port *port)
static void sa1100_config_port(struct uart_port *port, int flags)
static int
sa1100_verify_port(struct uart_port *port, struct serial_struct *ser)
static struct uart_ops sa1100_pops = ;
static struct sa1100_port sa1100_ports[NR_PORTS];
static void __init sa1100_init_ports(void)
void __devinit sa1100_register_uart_fns(struct sa1100_port_fns *fns)
void __init sa1100_register_uart(int idx, int port)
static void sa1100_console_putchar(struct uart_port *port, int ch)
static void
sa1100_console_write(struct console *co, const char *s, unsigned int count)
static void __init
sa1100_console_get_options(struct sa1100_port *sport, int *baud,
int *parity, int *bits)
static int __init
sa1100_console_setup(struct console *co, char *options)
static struct uart_driver sa1100_reg;
static struct console sa1100_console = ;
static int __init sa1100_rs_console_init(void)
console_initcall(sa1100_rs_console_init);
#define SA1100_CONSOLE	&sa1100_console
#define SA1100_CONSOLE	NULL
static struct uart_driver sa1100_reg = ;
static int sa1100_serial_suspend(struct platform_device *dev, pm_message_t state)
static int sa1100_serial_resume(struct platform_device *dev)
static int sa1100_serial_probe(struct platform_device *dev)
static int sa1100_serial_remove(struct platform_device *pdev)
static struct platform_driver sa11x0_serial_driver = ;
static int __init sa1100_serial_init(void)
static void __exit sa1100_serial_exit(void)
module_init(sa1100_serial_init);
module_exit(sa1100_serial_exit);
MODULE_AUTHOR("Deep Blue Solutions Ltd");
MODULE_DESCRIPTION("SA1100 generic serial port driver");
MODULE_LICENSE("GPL");
MODULE_ALIAS_CHARDEV_MAJOR(SERIAL_SA1100_MAJOR);
MODULE_ALIAS("platform:sa11x0-uart");

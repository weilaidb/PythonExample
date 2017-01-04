#if defined(CONFIG_SERIAL_PNX8XXX_CONSOLE) && defined(CONFIG_MAGIC_SYSRQ)
#define SUPPORT_SYSRQ
#define SERIAL_PNX8XXX_MAJOR	204
#define MINOR_START		5
#define NR_PORTS		2
#define PNX8XXX_ISR_PASS_LIMIT	256
#define SM_TO_FIFO(x)	((x) >> 10)
#define SM_TO_ISTAT(x)	((x) & 0x000001ff)
#define FIFO_TO_SM(x)	((x) << 10)
#define ISTAT_TO_SM(x)	((x) & 0x000001ff)
#define UART_PORT_SIZE	0x1000
#define MCTRL_TIMEOUT	(250*HZ/1000)
extern struct pnx8xxx_port pnx8xxx_ports[];
static inline int serial_in(struct pnx8xxx_port *sport, int offset)
static inline void serial_out(struct pnx8xxx_port *sport, int offset, int value)
static void pnx8xxx_mctrl_check(struct pnx8xxx_port *sport)
static void pnx8xxx_timeout(unsigned long data)
static void pnx8xxx_stop_tx(struct uart_port *port)
static void pnx8xxx_start_tx(struct uart_port *port)
static void pnx8xxx_stop_rx(struct uart_port *port)
static void pnx8xxx_enable_ms(struct uart_port *port)
static void pnx8xxx_rx_chars(struct pnx8xxx_port *sport)
static void pnx8xxx_tx_chars(struct pnx8xxx_port *sport)
static irqreturn_t pnx8xxx_int(int irq, void *dev_id)
static unsigned int pnx8xxx_tx_empty(struct uart_port *port)
static unsigned int pnx8xxx_get_mctrl(struct uart_port *port)
static void pnx8xxx_set_mctrl(struct uart_port *port, unsigned int mctrl)
static void pnx8xxx_break_ctl(struct uart_port *port, int break_state)
static int pnx8xxx_startup(struct uart_port *port)
static void pnx8xxx_shutdown(struct uart_port *port)
static void
pnx8xxx_set_termios(struct uart_port *port, struct ktermios *termios,
struct ktermios *old)
static const char *pnx8xxx_type(struct uart_port *port)
static void pnx8xxx_release_port(struct uart_port *port)
static int pnx8xxx_request_port(struct uart_port *port)
static void pnx8xxx_config_port(struct uart_port *port, int flags)
static int
pnx8xxx_verify_port(struct uart_port *port, struct serial_struct *ser)
static struct uart_ops pnx8xxx_pops = ;
static void __init pnx8xxx_init_ports(void)
static void pnx8xxx_console_putchar(struct uart_port *port, int ch)
static void
pnx8xxx_console_write(struct console *co, const char *s, unsigned int count)
static int __init
pnx8xxx_console_setup(struct console *co, char *options)
static struct uart_driver pnx8xxx_reg;
static struct console pnx8xxx_console = ;
static int __init pnx8xxx_rs_console_init(void)
console_initcall(pnx8xxx_rs_console_init);
#define PNX8XXX_CONSOLE	&pnx8xxx_console
#define PNX8XXX_CONSOLE	NULL
static struct uart_driver pnx8xxx_reg = ;
static int pnx8xxx_serial_suspend(struct platform_device *pdev, pm_message_t state)
static int pnx8xxx_serial_resume(struct platform_device *pdev)
static int pnx8xxx_serial_probe(struct platform_device *pdev)
static int pnx8xxx_serial_remove(struct platform_device *pdev)
static struct platform_driver pnx8xxx_serial_driver = ;
static int __init pnx8xxx_serial_init(void)
static void __exit pnx8xxx_serial_exit(void)
module_init(pnx8xxx_serial_init);
module_exit(pnx8xxx_serial_exit);
MODULE_AUTHOR("Embedded Alley Solutions, Inc.");
MODULE_DESCRIPTION("PNX8XXX SoCs serial port driver");
MODULE_LICENSE("GPL");
MODULE_ALIAS_CHARDEV_MAJOR(SERIAL_PNX8XXX_MAJOR);
MODULE_ALIAS("platform:pnx8xxx-uart");

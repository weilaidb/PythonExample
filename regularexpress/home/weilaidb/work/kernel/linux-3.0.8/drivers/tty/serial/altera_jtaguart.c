#define DRV_NAME "altera_jtaguart"
#define ALTERA_JTAGUART_SIZE			8
#define ALTERA_JTAGUART_DATA_REG		0
#define ALTERA_JTAGUART_DATA_DATA_MSK		0x000000FF
#define ALTERA_JTAGUART_DATA_RVALID_MSK		0x00008000
#define ALTERA_JTAGUART_DATA_RAVAIL_MSK		0xFFFF0000
#define ALTERA_JTAGUART_DATA_RAVAIL_OFF		16
#define ALTERA_JTAGUART_CONTROL_REG		4
#define ALTERA_JTAGUART_CONTROL_RE_MSK		0x00000001
#define ALTERA_JTAGUART_CONTROL_WE_MSK		0x00000002
#define ALTERA_JTAGUART_CONTROL_RI_MSK		0x00000100
#define ALTERA_JTAGUART_CONTROL_RI_OFF		8
#define ALTERA_JTAGUART_CONTROL_WI_MSK		0x00000200
#define ALTERA_JTAGUART_CONTROL_AC_MSK		0x00000400
#define ALTERA_JTAGUART_CONTROL_WSPACE_MSK	0xFFFF0000
#define ALTERA_JTAGUART_CONTROL_WSPACE_OFF	16
struct altera_jtaguart ;
static unsigned int altera_jtaguart_tx_empty(struct uart_port *port)
static unsigned int altera_jtaguart_get_mctrl(struct uart_port *port)
static void altera_jtaguart_set_mctrl(struct uart_port *port, unsigned int sigs)
static void altera_jtaguart_start_tx(struct uart_port *port)
static void altera_jtaguart_stop_tx(struct uart_port *port)
static void altera_jtaguart_stop_rx(struct uart_port *port)
static void altera_jtaguart_break_ctl(struct uart_port *port, int break_state)
static void altera_jtaguart_enable_ms(struct uart_port *port)
static void altera_jtaguart_set_termios(struct uart_port *port,
struct ktermios *termios,
struct ktermios *old)
static void altera_jtaguart_rx_chars(struct altera_jtaguart *pp)
static void altera_jtaguart_tx_chars(struct altera_jtaguart *pp)
static irqreturn_t altera_jtaguart_interrupt(int irq, void *data)
static void altera_jtaguart_config_port(struct uart_port *port, int flags)
static int altera_jtaguart_startup(struct uart_port *port)
static void altera_jtaguart_shutdown(struct uart_port *port)
static const char *altera_jtaguart_type(struct uart_port *port)
static int altera_jtaguart_request_port(struct uart_port *port)
static void altera_jtaguart_release_port(struct uart_port *port)
static int altera_jtaguart_verify_port(struct uart_port *port,
struct serial_struct *ser)
static struct uart_ops altera_jtaguart_ops = ;
#define ALTERA_JTAGUART_MAXPORTS 1
static struct altera_jtaguart altera_jtaguart_ports[ALTERA_JTAGUART_MAXPORTS];
#if defined(CONFIG_SERIAL_ALTERA_JTAGUART_CONSOLE)
#if defined(CONFIG_SERIAL_ALTERA_JTAGUART_CONSOLE_BYPASS)
static void altera_jtaguart_console_putc(struct console *co, const char c)
static void altera_jtaguart_console_putc(struct console *co, const char c)
static void altera_jtaguart_console_write(struct console *co, const char *s,
unsigned int count)
static int __init altera_jtaguart_console_setup(struct console *co,
char *options)
static struct uart_driver altera_jtaguart_driver;
static struct console altera_jtaguart_console = ;
static int __init altera_jtaguart_console_init(void)
console_initcall(altera_jtaguart_console_init);
#define	ALTERA_JTAGUART_CONSOLE	(&altera_jtaguart_console)
#define	ALTERA_JTAGUART_CONSOLE	NULL
static struct uart_driver altera_jtaguart_driver = ;
static int __devinit altera_jtaguart_probe(struct platform_device *pdev)
static int __devexit altera_jtaguart_remove(struct platform_device *pdev)
static struct of_device_id altera_jtaguart_match[] = ;
MODULE_DEVICE_TABLE(of, altera_jtaguart_match);
#define altera_jtaguart_match NULL
static struct platform_driver altera_jtaguart_platform_driver = ;
static int __init altera_jtaguart_init(void)
static void __exit altera_jtaguart_exit(void)
module_init(altera_jtaguart_init);
module_exit(altera_jtaguart_exit);
MODULE_DESCRIPTION("Altera JTAG UART driver");
MODULE_AUTHOR("Thomas Chou <thomas@wytron.com.tw>");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:" DRV_NAME);

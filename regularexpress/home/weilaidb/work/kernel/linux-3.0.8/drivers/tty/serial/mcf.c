#if !defined(mcf_getppdcd)
#define	mcf_getppdcd(p)		(1)
#if !defined(mcf_getppdtr)
#define	mcf_getppdtr(p)		(1)
#if !defined(mcf_setppdtr)
#define	mcf_setppdtr(p, v)	do  while (0)
struct mcf_uart ;
static unsigned int mcf_tx_empty(struct uart_port *port)
static unsigned int mcf_get_mctrl(struct uart_port *port)
static void mcf_set_mctrl(struct uart_port *port, unsigned int sigs)
static void mcf_start_tx(struct uart_port *port)
static void mcf_stop_tx(struct uart_port *port)
static void mcf_stop_rx(struct uart_port *port)
static void mcf_break_ctl(struct uart_port *port, int break_state)
static void mcf_enable_ms(struct uart_port *port)
static int mcf_startup(struct uart_port *port)
static void mcf_shutdown(struct uart_port *port)
static void mcf_set_termios(struct uart_port *port, struct ktermios *termios,
struct ktermios *old)
static void mcf_rx_chars(struct mcf_uart *pp)
static void mcf_tx_chars(struct mcf_uart *pp)
static irqreturn_t mcf_interrupt(int irq, void *data)
static void mcf_config_port(struct uart_port *port, int flags)
static const char *mcf_type(struct uart_port *port)
static int mcf_request_port(struct uart_port *port)
static void mcf_release_port(struct uart_port *port)
static int mcf_verify_port(struct uart_port *port, struct serial_struct *ser)
static const struct uart_ops mcf_uart_ops = ;
static struct mcf_uart mcf_ports[4];
#define	MCF_MAXPORTS	ARRAY_SIZE(mcf_ports)
#if defined(CONFIG_SERIAL_MCF_CONSOLE)
int __init early_mcf_setup(struct mcf_platform_uart *platp)
static void mcf_console_putc(struct console *co, const char c)
static void mcf_console_write(struct console *co, const char *s, unsigned int count)
static int __init mcf_console_setup(struct console *co, char *options)
static struct uart_driver mcf_driver;
static struct console mcf_console = ;
static int __init mcf_console_init(void)
console_initcall(mcf_console_init);
#define	MCF_CONSOLE	&mcf_console
#define	MCF_CONSOLE	NULL
static struct uart_driver mcf_driver = ;
static int __devinit mcf_probe(struct platform_device *pdev)
static int __devexit mcf_remove(struct platform_device *pdev)
static struct platform_driver mcf_platform_driver = ;
static int __init mcf_init(void)
static void __exit mcf_exit(void)
module_init(mcf_init);
module_exit(mcf_exit);
MODULE_AUTHOR("Greg Ungerer <gerg@snapgear.com>");
MODULE_DESCRIPTION("Freescale ColdFire UART driver");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:mcfuart");

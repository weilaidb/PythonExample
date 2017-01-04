#define DRV_NAME "bfin-sport-uart"
#define DEVICE_NAME	"ttySS"
#define pr_fmt(fmt) DRV_NAME ": " fmt
struct sport_uart_port ;
static int sport_uart_tx_chars(struct sport_uart_port *up);
static void sport_stop_tx(struct uart_port *port);
static inline void tx_one_byte(struct sport_uart_port *up, unsigned int value)
static inline unsigned char rx_one_byte(struct sport_uart_port *up)
static int sport_uart_setup(struct sport_uart_port *up, int size, int baud_rate)
static irqreturn_t sport_uart_rx_irq(int irq, void *dev_id)
static irqreturn_t sport_uart_tx_irq(int irq, void *dev_id)
static irqreturn_t sport_uart_err_irq(int irq, void *dev_id)
static unsigned int sport_get_mctrl(struct uart_port *port)
static void sport_set_mctrl(struct uart_port *port, unsigned int mctrl)
static irqreturn_t sport_mctrl_cts_int(int irq, void *dev_id)
static unsigned int sport_get_mctrl(struct uart_port *port)
static void sport_set_mctrl(struct uart_port *port, unsigned int mctrl)
static int sport_startup(struct uart_port *port)
static int sport_uart_tx_chars(struct sport_uart_port *up)
static unsigned int sport_tx_empty(struct uart_port *port)
static void sport_stop_tx(struct uart_port *port)
static void sport_start_tx(struct uart_port *port)
static void sport_stop_rx(struct uart_port *port)
static void sport_enable_ms(struct uart_port *port)
static void sport_break_ctl(struct uart_port *port, int break_state)
static void sport_shutdown(struct uart_port *port)
static const char *sport_type(struct uart_port *port)
static void sport_release_port(struct uart_port *port)
static int sport_request_port(struct uart_port *port)
static void sport_config_port(struct uart_port *port, int flags)
static int sport_verify_port(struct uart_port *port, struct serial_struct *ser)
static void sport_set_termios(struct uart_port *port,
struct ktermios *termios, struct ktermios *old)
struct uart_ops sport_uart_ops = ;
#define BFIN_SPORT_UART_MAX_PORTS 4
static struct sport_uart_port *bfin_sport_uart_ports[BFIN_SPORT_UART_MAX_PORTS];
#define CLASS_BFIN_SPORT_CONSOLE	"bfin-sport-console"
static int __init
sport_uart_console_setup(struct console *co, char *options)
static void sport_uart_console_putchar(struct uart_port *port, int ch)
static void
sport_uart_console_write(struct console *co, const char *s, unsigned int count)
static struct uart_driver sport_uart_reg;
static struct console sport_uart_console = ;
#define SPORT_UART_CONSOLE	(&sport_uart_console)
#define SPORT_UART_CONSOLE	NULL
static struct uart_driver sport_uart_reg = ;
static int sport_uart_suspend(struct device *dev)
static int sport_uart_resume(struct device *dev)
static struct dev_pm_ops bfin_sport_uart_dev_pm_ops = ;
static int __devinit sport_uart_probe(struct platform_device *pdev)
static int __devexit sport_uart_remove(struct platform_device *pdev)
static struct platform_driver sport_uart_driver = ;
static __initdata struct early_platform_driver early_sport_uart_driver = ;
static int __init sport_uart_rs_console_init(void)
console_initcall(sport_uart_rs_console_init);
static int __init sport_uart_init(void)
module_init(sport_uart_init);
static void __exit sport_uart_exit(void)
module_exit(sport_uart_exit);
MODULE_AUTHOR("Sonic Zhang, Roy Huang");
MODULE_DESCRIPTION("Blackfin serial over SPORT driver");
MODULE_LICENSE("GPL");

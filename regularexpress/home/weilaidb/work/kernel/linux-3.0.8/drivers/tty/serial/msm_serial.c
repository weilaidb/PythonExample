#if defined(CONFIG_SERIAL_MSM_CONSOLE) && defined(CONFIG_MAGIC_SYSRQ)
# define SUPPORT_SYSRQ
struct msm_port ;
static inline void wait_for_xmitr(struct uart_port *port, int bits)
static void msm_stop_tx(struct uart_port *port)
static void msm_start_tx(struct uart_port *port)
static void msm_stop_rx(struct uart_port *port)
static void msm_enable_ms(struct uart_port *port)
static void handle_rx_dm(struct uart_port *port, unsigned int misr)
static void handle_rx(struct uart_port *port)
static void reset_dm_count(struct uart_port *port)
static void handle_tx(struct uart_port *port)
static void handle_delta_cts(struct uart_port *port)
static irqreturn_t msm_irq(int irq, void *dev_id)
static unsigned int msm_tx_empty(struct uart_port *port)
static unsigned int msm_get_mctrl(struct uart_port *port)
static void msm_reset(struct uart_port *port)
void msm_set_mctrl(struct uart_port *port, unsigned int mctrl)
static void msm_break_ctl(struct uart_port *port, int break_ctl)
static int msm_set_baud_rate(struct uart_port *port, unsigned int baud)
static void msm_init_clock(struct uart_port *port)
static int msm_startup(struct uart_port *port)
static void msm_shutdown(struct uart_port *port)
static void msm_set_termios(struct uart_port *port, struct ktermios *termios,
struct ktermios *old)
static const char *msm_type(struct uart_port *port)
static void msm_release_port(struct uart_port *port)
static int msm_request_port(struct uart_port *port)
static void msm_config_port(struct uart_port *port, int flags)
static int msm_verify_port(struct uart_port *port, struct serial_struct *ser)
static void msm_power(struct uart_port *port, unsigned int state,
unsigned int oldstate)
static struct uart_ops msm_uart_pops = ;
static struct msm_port msm_uart_ports[] = ;
#define UART_NR	ARRAY_SIZE(msm_uart_ports)
static inline struct uart_port *get_port_from_line(unsigned int line)
static void msm_console_putchar(struct uart_port *port, int c)
static void msm_console_write(struct console *co, const char *s,
unsigned int count)
static int __init msm_console_setup(struct console *co, char *options)
static struct uart_driver msm_uart_driver;
static struct console msm_console = ;
#define MSM_CONSOLE	(&msm_console)
#define MSM_CONSOLE	NULL
static struct uart_driver msm_uart_driver = ;
static int __init msm_serial_probe(struct platform_device *pdev)
static int __devexit msm_serial_remove(struct platform_device *pdev)
static struct platform_driver msm_platform_driver = ;
static int __init msm_serial_init(void)
static void __exit msm_serial_exit(void)
module_init(msm_serial_init);
module_exit(msm_serial_exit);
MODULE_AUTHOR("Robert Love <rlove@google.com>");
MODULE_DESCRIPTION("Driver for msm7x serial device");
MODULE_LICENSE("GPL");

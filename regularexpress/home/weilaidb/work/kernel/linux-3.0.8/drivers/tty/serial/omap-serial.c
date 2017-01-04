#if defined(CONFIG_SERIAL_OMAP_CONSOLE) && defined(CONFIG_MAGIC_SYSRQ)
#define SUPPORT_SYSRQ
static struct uart_omap_port *ui[OMAP_MAX_HSUART_PORTS];
static void uart_tx_dma_callback(int lch, u16 ch_status, void *data);
static void serial_omap_rx_timeout(unsigned long uart_no);
static int serial_omap_start_rxdma(struct uart_omap_port *up);
static inline unsigned int serial_in(struct uart_omap_port *up, int offset)
static inline void serial_out(struct uart_omap_port *up, int offset, int value)
static inline void serial_omap_clear_fifos(struct uart_omap_port *up)
static unsigned int
serial_omap_get_divisor(struct uart_port *port, unsigned int baud)
static void serial_omap_stop_rxdma(struct uart_omap_port *up)
static void serial_omap_enable_ms(struct uart_port *port)
static void serial_omap_stop_tx(struct uart_port *port)
static void serial_omap_stop_rx(struct uart_port *port)
static inline void receive_chars(struct uart_omap_port *up, int *status)
static void transmit_chars(struct uart_omap_port *up)
static inline void serial_omap_enable_ier_thri(struct uart_omap_port *up)
static void serial_omap_start_tx(struct uart_port *port)
static unsigned int check_modem_status(struct uart_omap_port *up)
static inline irqreturn_t serial_omap_irq(int irq, void *dev_id)
static unsigned int serial_omap_tx_empty(struct uart_port *port)
static unsigned int serial_omap_get_mctrl(struct uart_port *port)
static void serial_omap_set_mctrl(struct uart_port *port, unsigned int mctrl)
static void serial_omap_break_ctl(struct uart_port *port, int break_state)
static int serial_omap_startup(struct uart_port *port)
static void serial_omap_shutdown(struct uart_port *port)
static inline void
serial_omap_configure_xonxoff
(struct uart_omap_port *up, struct ktermios *termios)
static void
serial_omap_set_termios(struct uart_port *port, struct ktermios *termios,
struct ktermios *old)
static void
serial_omap_pm(struct uart_port *port, unsigned int state,
unsigned int oldstate)
static void serial_omap_release_port(struct uart_port *port)
static int serial_omap_request_port(struct uart_port *port)
static void serial_omap_config_port(struct uart_port *port, int flags)
static int
serial_omap_verify_port(struct uart_port *port, struct serial_struct *ser)
static const char *
serial_omap_type(struct uart_port *port)
#define BOTH_EMPTY (UART_LSR_TEMT | UART_LSR_THRE)
static inline void wait_for_xmitr(struct uart_omap_port *up)
static void serial_omap_poll_put_char(struct uart_port *port, unsigned char ch)
static int serial_omap_poll_get_char(struct uart_port *port)
static struct uart_omap_port *serial_omap_console_ports[4];
static struct uart_driver serial_omap_reg;
static void serial_omap_console_putchar(struct uart_port *port, int ch)
static void
serial_omap_console_write(struct console *co, const char *s,
unsigned int count)
static int __init
serial_omap_console_setup(struct console *co, char *options)
static struct console serial_omap_console = ;
static void serial_omap_add_console_port(struct uart_omap_port *up)
#define OMAP_CONSOLE	(&serial_omap_console)
#define OMAP_CONSOLE	NULL
static inline void serial_omap_add_console_port(struct uart_omap_port *up)
static struct uart_ops serial_omap_pops = ;
static struct uart_driver serial_omap_reg = ;
static int
serial_omap_suspend(struct platform_device *pdev, pm_message_t state)
static int serial_omap_resume(struct platform_device *dev)
static void serial_omap_rx_timeout(unsigned long uart_no)
static void uart_rx_dma_callback(int lch, u16 ch_status, void *data)
static int serial_omap_start_rxdma(struct uart_omap_port *up)
static void serial_omap_continue_tx(struct uart_omap_port *up)
static void uart_tx_dma_callback(int lch, u16 ch_status, void *data)
static int serial_omap_probe(struct platform_device *pdev)
static int serial_omap_remove(struct platform_device *dev)
static struct platform_driver serial_omap_driver = ;
static int __init serial_omap_init(void)
static void __exit serial_omap_exit(void)
module_init(serial_omap_init);
module_exit(serial_omap_exit);
MODULE_DESCRIPTION("OMAP High Speed UART driver");
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Texas Instruments Inc");

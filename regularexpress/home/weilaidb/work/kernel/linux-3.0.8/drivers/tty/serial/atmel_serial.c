#define PDC_BUFFER_SIZE		512
#define PDC_RX_TIMEOUT		(3 * 10)
#if defined(CONFIG_SERIAL_ATMEL_CONSOLE) && defined(CONFIG_MAGIC_SYSRQ)
#define SUPPORT_SYSRQ
static void atmel_start_rx(struct uart_port *port);
static void atmel_stop_rx(struct uart_port *port);
#define SERIAL_ATMEL_MAJOR	204
#define MINOR_START		154
#define ATMEL_DEVICENAME	"ttyAT"
#define SERIAL_ATMEL_MAJOR	TTY_MAJOR
#define MINOR_START		64
#define ATMEL_DEVICENAME	"ttyS"
#define ATMEL_ISR_PASS_LIMIT	256
#define UART_PUT_CR(port,v)	__raw_writel(v, (port)->membase + ATMEL_US_CR)
#define UART_GET_MR(port)	__raw_readl((port)->membase + ATMEL_US_MR)
#define UART_PUT_MR(port,v)	__raw_writel(v, (port)->membase + ATMEL_US_MR)
#define UART_PUT_IER(port,v)	__raw_writel(v, (port)->membase + ATMEL_US_IER)
#define UART_PUT_IDR(port,v)	__raw_writel(v, (port)->membase + ATMEL_US_IDR)
#define UART_GET_IMR(port)	__raw_readl((port)->membase + ATMEL_US_IMR)
#define UART_GET_CSR(port)	__raw_readl((port)->membase + ATMEL_US_CSR)
#define UART_GET_CHAR(port)	__raw_readl((port)->membase + ATMEL_US_RHR)
#define UART_PUT_CHAR(port,v)	__raw_writel(v, (port)->membase + ATMEL_US_THR)
#define UART_GET_BRGR(port)	__raw_readl((port)->membase + ATMEL_US_BRGR)
#define UART_PUT_BRGR(port,v)	__raw_writel(v, (port)->membase + ATMEL_US_BRGR)
#define UART_PUT_RTOR(port,v)	__raw_writel(v, (port)->membase + ATMEL_US_RTOR)
#define UART_PUT_TTGR(port, v)	__raw_writel(v, (port)->membase + ATMEL_US_TTGR)
#define UART_PUT_PTCR(port,v)	__raw_writel(v, (port)->membase + ATMEL_PDC_PTCR)
#define UART_GET_PTSR(port)	__raw_readl((port)->membase + ATMEL_PDC_PTSR)
#define UART_PUT_RPR(port,v)	__raw_writel(v, (port)->membase + ATMEL_PDC_RPR)
#define UART_GET_RPR(port)	__raw_readl((port)->membase + ATMEL_PDC_RPR)
#define UART_PUT_RCR(port,v)	__raw_writel(v, (port)->membase + ATMEL_PDC_RCR)
#define UART_PUT_RNPR(port,v)	__raw_writel(v, (port)->membase + ATMEL_PDC_RNPR)
#define UART_PUT_RNCR(port,v)	__raw_writel(v, (port)->membase + ATMEL_PDC_RNCR)
#define UART_PUT_TPR(port,v)	__raw_writel(v, (port)->membase + ATMEL_PDC_TPR)
#define UART_PUT_TCR(port,v)	__raw_writel(v, (port)->membase + ATMEL_PDC_TCR)
#define UART_GET_TCR(port)	__raw_readl((port)->membase + ATMEL_PDC_TCR)
static int (*atmel_open_hook)(struct uart_port *);
static void (*atmel_close_hook)(struct uart_port *);
struct atmel_dma_buffer ;
struct atmel_uart_char ;
#define ATMEL_SERIAL_RINGSIZE 1024
struct atmel_uart_port ;
static struct atmel_uart_port atmel_ports[ATMEL_MAX_UART];
static struct console atmel_console;
static inline struct atmel_uart_port *
to_atmel_uart_port(struct uart_port *uart)
static bool atmel_use_dma_rx(struct uart_port *port)
static bool atmel_use_dma_tx(struct uart_port *port)
static bool atmel_use_dma_rx(struct uart_port *port)
static bool atmel_use_dma_tx(struct uart_port *port)
void atmel_config_rs485(struct uart_port *port, struct serial_rs485 *rs485conf)
static u_int atmel_tx_empty(struct uart_port *port)
static void atmel_set_mctrl(struct uart_port *port, u_int mctrl)
static u_int atmel_get_mctrl(struct uart_port *port)
static void atmel_stop_tx(struct uart_port *port)
static void atmel_start_tx(struct uart_port *port)
static void atmel_start_rx(struct uart_port *port)
static void atmel_stop_rx(struct uart_port *port)
static void atmel_enable_ms(struct uart_port *port)
static void atmel_break_ctl(struct uart_port *port, int break_state)
static void
atmel_buffer_rx_char(struct uart_port *port, unsigned int status,
unsigned int ch)
static void atmel_pdc_rxerr(struct uart_port *port, unsigned int status)
static void atmel_rx_chars(struct uart_port *port)
static void atmel_tx_chars(struct uart_port *port)
static void
atmel_handle_receive(struct uart_port *port, unsigned int pending)
static void
atmel_handle_transmit(struct uart_port *port, unsigned int pending)
static void
atmel_handle_status(struct uart_port *port, unsigned int pending,
unsigned int status)
static irqreturn_t atmel_interrupt(int irq, void *dev_id)
static void atmel_tx_dma(struct uart_port *port)
static void atmel_rx_from_ring(struct uart_port *port)
static void atmel_rx_from_dma(struct uart_port *port)
static void atmel_tasklet_func(unsigned long data)
static int atmel_startup(struct uart_port *port)
static void atmel_shutdown(struct uart_port *port)
static void atmel_flush_buffer(struct uart_port *port)
static void atmel_serial_pm(struct uart_port *port, unsigned int state,
unsigned int oldstate)
static void atmel_set_termios(struct uart_port *port, struct ktermios *termios,
struct ktermios *old)
static void atmel_set_ldisc(struct uart_port *port, int new)
static const char *atmel_type(struct uart_port *port)
static void atmel_release_port(struct uart_port *port)
static int atmel_request_port(struct uart_port *port)
static void atmel_config_port(struct uart_port *port, int flags)
static int atmel_verify_port(struct uart_port *port, struct serial_struct *ser)
static int atmel_poll_get_char(struct uart_port *port)
static void atmel_poll_put_char(struct uart_port *port, unsigned char ch)
static int
atmel_ioctl(struct uart_port *port, unsigned int cmd, unsigned long arg)
static struct uart_ops atmel_pops = ;
static void __devinit atmel_init_port(struct atmel_uart_port *atmel_port,
struct platform_device *pdev)
void __init atmel_register_uart_fns(struct atmel_port_fns *fns)
static void atmel_console_putchar(struct uart_port *port, int ch)
static void atmel_console_write(struct console *co, const char *s, u_int count)
static void __init atmel_console_get_options(struct uart_port *port, int *baud,
int *parity, int *bits)
static int __init atmel_console_setup(struct console *co, char *options)
static struct uart_driver atmel_uart;
static struct console atmel_console = ;
#define ATMEL_CONSOLE_DEVICE	(&atmel_console)
static int __init atmel_console_init(void)
console_initcall(atmel_console_init);
static int __init atmel_late_console_init(void)
core_initcall(atmel_late_console_init);
static inline bool atmel_is_console_port(struct uart_port *port)
#define ATMEL_CONSOLE_DEVICE	NULL
static inline bool atmel_is_console_port(struct uart_port *port)
static struct uart_driver atmel_uart = ;
static bool atmel_serial_clk_will_stop(void)
static int atmel_serial_suspend(struct platform_device *pdev,
pm_message_t state)
static int atmel_serial_resume(struct platform_device *pdev)
#define atmel_serial_suspend NULL
#define atmel_serial_resume NULL
static int __devinit atmel_serial_probe(struct platform_device *pdev)
static int __devexit atmel_serial_remove(struct platform_device *pdev)
static struct platform_driver atmel_serial_driver = ;
static int __init atmel_serial_init(void)
static void __exit atmel_serial_exit(void)
module_init(atmel_serial_init);
module_exit(atmel_serial_exit);
MODULE_AUTHOR("Rick Bronson");
MODULE_DESCRIPTION("Atmel AT91 / AT32 serial port driver");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:atmel_usart");

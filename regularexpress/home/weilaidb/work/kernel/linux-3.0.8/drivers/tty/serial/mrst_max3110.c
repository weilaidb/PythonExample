#define PR_FMT	"mrst_max3110: "
#define UART_TX_NEEDED 1
#define CON_TX_NEEDED  2
#define BIT_IRQ_PENDING    3
struct uart_max3110 ;
static struct uart_max3110 *pmax;
static void receive_chars(struct uart_max3110 *max,
unsigned char *str, int len);
static int max3110_read_multi(struct uart_max3110 *max, u8 *buf);
static void max3110_con_receive(struct uart_max3110 *max);
static int max3110_write_then_read(struct uart_max3110 *max,
const void *txbuf, void *rxbuf, unsigned len, int always_fast)
static int max3110_out(struct uart_max3110 *max, const u16 out)
static int max3110_read_multi(struct uart_max3110 *max, u8 *rxbuf)
static void serial_m3110_con_putchar(struct uart_port *port, int ch)
static void serial_m3110_con_write(struct console *co,
const char *s, unsigned int count)
static int __init
serial_m3110_con_setup(struct console *co, char *options)
static struct tty_driver *serial_m3110_con_device(struct console *co,
int *index)
static struct uart_driver serial_m3110_reg;
static struct console serial_m3110_console = ;
static unsigned int serial_m3110_tx_empty(struct uart_port *port)
static void serial_m3110_stop_tx(struct uart_port *port)
static void serial_m3110_stop_rx(struct uart_port *port)
#define WORDS_PER_XFER	128
static void send_circ_buf(struct uart_max3110 *max,
struct circ_buf *xmit)
static void transmit_char(struct uart_max3110 *max)
static void serial_m3110_start_tx(struct uart_port *port)
static void receive_chars(struct uart_max3110 *max, unsigned char *str, int len)
static void max3110_con_receive(struct uart_max3110 *max)
static int max3110_main_thread(void *_max)
static irqreturn_t serial_m3110_irq(int irq, void *dev_id)
static int max3110_read_thread(void *_max)
static int serial_m3110_startup(struct uart_port *port)
static void serial_m3110_shutdown(struct uart_port *port)
static void serial_m3110_release_port(struct uart_port *port)
static int serial_m3110_request_port(struct uart_port *port)
static void serial_m3110_config_port(struct uart_port *port, int flags)
static int
serial_m3110_verify_port(struct uart_port *port, struct serial_struct *ser)
static const char *serial_m3110_type(struct uart_port *port)
static void
serial_m3110_set_termios(struct uart_port *port, struct ktermios *termios,
struct ktermios *old)
static unsigned int serial_m3110_get_mctrl(struct uart_port *port)
static void serial_m3110_set_mctrl(struct uart_port *port, unsigned int mctrl)
static void serial_m3110_break_ctl(struct uart_port *port, int break_state)
static void serial_m3110_pm(struct uart_port *port, unsigned int state,
unsigned int oldstate)
static void serial_m3110_enable_ms(struct uart_port *port)
struct uart_ops serial_m3110_ops = ;
static struct uart_driver serial_m3110_reg = ;
static int serial_m3110_suspend(struct spi_device *spi, pm_message_t state)
static int serial_m3110_resume(struct spi_device *spi)
#define serial_m3110_suspend	NULL
#define serial_m3110_resume	NULL
static int __devinit serial_m3110_probe(struct spi_device *spi)
static int __devexit serial_m3110_remove(struct spi_device *dev)
static struct spi_driver uart_max3110_driver = ;
static int __init serial_m3110_init(void)
static void __exit serial_m3110_exit(void)
module_init(serial_m3110_init);
module_exit(serial_m3110_exit);
MODULE_LICENSE("GPL v2");
MODULE_ALIAS("spi:max3110-uart");

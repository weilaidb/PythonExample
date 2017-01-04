#define MAX3100_MAJOR 204
#define MAX3100_MINOR 209
#define MAX_MAX3100 4
#define MAX3100_C    (1<<14)
#define MAX3100_D    (0<<14)
#define MAX3100_W    (1<<15)
#define MAX3100_RX   (0<<15)
#define MAX3100_WC   (MAX3100_W  | MAX3100_C)
#define MAX3100_RC   (MAX3100_RX | MAX3100_C)
#define MAX3100_WD   (MAX3100_W  | MAX3100_D)
#define MAX3100_RD   (MAX3100_RX | MAX3100_D)
#define MAX3100_CMD  (3 << 14)
#define MAX3100_T    (1<<14)
#define MAX3100_R    (1<<15)
#define MAX3100_FEN  (1<<13)
#define MAX3100_SHDN (1<<12)
#define MAX3100_TM   (1<<11)
#define MAX3100_RM   (1<<10)
#define MAX3100_PM   (1<<9)
#define MAX3100_RAM  (1<<8)
#define MAX3100_IR   (1<<7)
#define MAX3100_ST   (1<<6)
#define MAX3100_PE   (1<<5)
#define MAX3100_L    (1<<4)
#define MAX3100_BAUD (0xf)
#define MAX3100_TE   (1<<10)
#define MAX3100_RAFE (1<<10)
#define MAX3100_RTS  (1<<9)
#define MAX3100_CTS  (1<<9)
#define MAX3100_PT   (1<<8)
#define MAX3100_DATA (0xff)
#define MAX3100_RT   (MAX3100_R | MAX3100_T)
#define MAX3100_RTC  (MAX3100_RT | MAX3100_CTS | MAX3100_RAFE)
#define MAX3100_STATUS_PE 1
#define MAX3100_STATUS_FE 2
#define MAX3100_STATUS_OE 4
struct max3100_port ;
static struct max3100_port *max3100s[MAX_MAX3100];
static DEFINE_MUTEX(max3100s_lock);
static int max3100_do_parity(struct max3100_port *s, u16 c)
static int max3100_check_parity(struct max3100_port *s, u16 c)
static void max3100_calc_parity(struct max3100_port *s, u16 *c)
static void max3100_work(struct work_struct *w);
static void max3100_dowork(struct max3100_port *s)
static void max3100_timeout(unsigned long data)
static int max3100_sr(struct max3100_port *s, u16 tx, u16 *rx)
static int max3100_handlerx(struct max3100_port *s, u16 rx)
static void max3100_work(struct work_struct *w)
static irqreturn_t max3100_irq(int irqno, void *dev_id)
static void max3100_enable_ms(struct uart_port *port)
static void max3100_start_tx(struct uart_port *port)
static void max3100_stop_rx(struct uart_port *port)
static unsigned int max3100_tx_empty(struct uart_port *port)
static unsigned int max3100_get_mctrl(struct uart_port *port)
static void max3100_set_mctrl(struct uart_port *port, unsigned int mctrl)
static void
max3100_set_termios(struct uart_port *port, struct ktermios *termios,
struct ktermios *old)
static void max3100_shutdown(struct uart_port *port)
static int max3100_startup(struct uart_port *port)
static const char *max3100_type(struct uart_port *port)
static void max3100_release_port(struct uart_port *port)
static void max3100_config_port(struct uart_port *port, int flags)
static int max3100_verify_port(struct uart_port *port,
struct serial_struct *ser)
static void max3100_stop_tx(struct uart_port *port)
static int max3100_request_port(struct uart_port *port)
static void max3100_break_ctl(struct uart_port *port, int break_state)
static struct uart_ops max3100_ops = ;
static struct uart_driver max3100_uart_driver = ;
static int uart_driver_registered;
static int __devinit max3100_probe(struct spi_device *spi)
static int __devexit max3100_remove(struct spi_device *spi)
static int max3100_suspend(struct spi_device *spi, pm_message_t state)
static int max3100_resume(struct spi_device *spi)
#define max3100_suspend NULL
#define max3100_resume  NULL
static struct spi_driver max3100_driver = ;
static int __init max3100_init(void)
module_init(max3100_init);
static void __exit max3100_exit(void)
module_exit(max3100_exit);
MODULE_DESCRIPTION("MAX3100 driver");
MODULE_AUTHOR("Christian Pellegrin <chripell@evolware.org>");
MODULE_LICENSE("GPL");
MODULE_ALIAS("spi:max3100");

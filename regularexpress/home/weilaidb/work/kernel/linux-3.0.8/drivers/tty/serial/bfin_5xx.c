#if defined(CONFIG_SERIAL_BFIN_CONSOLE) && defined(CONFIG_MAGIC_SYSRQ)
#define SUPPORT_SYSRQ
#define DRIVER_NAME "bfin-uart"
#define pr_fmt(fmt) DRIVER_NAME ": " fmt
#define port_membase(uart)     (((struct bfin_serial_port *)(uart))->port.membase)
#define get_lsr_cache(uart)    (((struct bfin_serial_port *)(uart))->lsr)
#define put_lsr_cache(uart, v) (((struct bfin_serial_port *)(uart))->lsr = (v))
# undef CONFIG_EARLY_PRINTK
# undef CONFIG_EARLY_PRINTK
#define BFIN_SERIAL_DEV_NAME	"ttyBF"
#define BFIN_SERIAL_MAJOR	204
#define BFIN_SERIAL_MINOR	64
static struct bfin_serial_port *bfin_serial_ports[BFIN_UART_NR_PORTS];
#if defined(CONFIG_KGDB_SERIAL_CONSOLE) || \
defined(CONFIG_KGDB_SERIAL_CONSOLE_MODULE)
# ifndef CONFIG_SERIAL_BFIN_PIO
#  error KGDB only support UART in PIO mode.
# endif
static int kgdboc_port_line;
static int kgdboc_break_enabled;
#define DMA_RX_XCOUNT		512
#define DMA_RX_YCOUNT		(PAGE_SIZE / DMA_RX_XCOUNT)
#define DMA_RX_FLUSH_JIFFIES	(HZ / 50)
static void bfin_serial_dma_tx_chars(struct bfin_serial_port *uart);
static void bfin_serial_tx_chars(struct bfin_serial_port *uart);
static void bfin_serial_reset_irda(struct uart_port *port);
#if defined(CONFIG_SERIAL_BFIN_CTSRTS) || \
defined(CONFIG_SERIAL_BFIN_HARD_CTSRTS)
static unsigned int bfin_serial_get_mctrl(struct uart_port *port)
static void bfin_serial_set_mctrl(struct uart_port *port, unsigned int mctrl)
static irqreturn_t bfin_serial_mctrl_cts_int(int irq, void *dev_id)
static unsigned int bfin_serial_get_mctrl(struct uart_port *port)
static void bfin_serial_set_mctrl(struct uart_port *port, unsigned int mctrl)
static void bfin_serial_stop_tx(struct uart_port *port)
static void bfin_serial_start_tx(struct uart_port *port)
static void bfin_serial_stop_rx(struct uart_port *port)
static void bfin_serial_enable_ms(struct uart_port *port)
#if ANOMALY_05000363 && defined(CONFIG_SERIAL_BFIN_PIO)
# define UART_GET_ANOMALY_THRESHOLD(uart)    ((uart)->anomaly_threshold)
# define UART_SET_ANOMALY_THRESHOLD(uart, v) ((uart)->anomaly_threshold = (v))
# define UART_GET_ANOMALY_THRESHOLD(uart)    0
# define UART_SET_ANOMALY_THRESHOLD(uart, v)
static void bfin_serial_rx_chars(struct bfin_serial_port *uart)
static void bfin_serial_tx_chars(struct bfin_serial_port *uart)
static irqreturn_t bfin_serial_rx_int(int irq, void *dev_id)
static irqreturn_t bfin_serial_tx_int(int irq, void *dev_id)
static void bfin_serial_dma_tx_chars(struct bfin_serial_port *uart)
static void bfin_serial_dma_rx_chars(struct bfin_serial_port *uart)
void bfin_serial_rx_dma_timeout(struct bfin_serial_port *uart)
static irqreturn_t bfin_serial_dma_tx_int(int irq, void *dev_id)
static irqreturn_t bfin_serial_dma_rx_int(int irq, void *dev_id)
static unsigned int bfin_serial_tx_empty(struct uart_port *port)
static void bfin_serial_break_ctl(struct uart_port *port, int break_state)
static int bfin_serial_startup(struct uart_port *port)
static void bfin_serial_shutdown(struct uart_port *port)
static void
bfin_serial_set_termios(struct uart_port *port, struct ktermios *termios,
struct ktermios *old)
static const char *bfin_serial_type(struct uart_port *port)
static void bfin_serial_release_port(struct uart_port *port)
static int bfin_serial_request_port(struct uart_port *port)
static void bfin_serial_config_port(struct uart_port *port, int flags)
static int
bfin_serial_verify_port(struct uart_port *port, struct serial_struct *ser)
static void bfin_serial_set_ldisc(struct uart_port *port, int ld)
static void bfin_serial_reset_irda(struct uart_port *port)
static void bfin_serial_poll_put_char(struct uart_port *port, unsigned char chr)
static int bfin_serial_poll_get_char(struct uart_port *port)
#if defined(CONFIG_KGDB_SERIAL_CONSOLE) || \
defined(CONFIG_KGDB_SERIAL_CONSOLE_MODULE)
static void bfin_kgdboc_port_shutdown(struct uart_port *port)
static int bfin_kgdboc_port_startup(struct uart_port *port)
static struct uart_ops bfin_serial_pops = ;
#if defined(CONFIG_SERIAL_BFIN_CONSOLE) || defined(CONFIG_EARLY_PRINTK)
static void __init
bfin_serial_console_get_options(struct bfin_serial_port *uart, int *baud,
int *parity, int *bits)
static struct uart_driver bfin_serial_reg;
static void bfin_serial_console_putchar(struct uart_port *port, int ch)
#define CLASS_BFIN_CONSOLE	"bfin-console"
static void
bfin_serial_console_write(struct console *co, const char *s, unsigned int count)
static int __init
bfin_serial_console_setup(struct console *co, char *options)
static struct console bfin_serial_console = ;
#define BFIN_SERIAL_CONSOLE	&bfin_serial_console
#define BFIN_SERIAL_CONSOLE	NULL
static struct bfin_serial_port bfin_earlyprintk_port;
#define CLASS_BFIN_EARLYPRINTK	"bfin-earlyprintk"
static void
bfin_earlyprintk_console_write(struct console *co, const char *s, unsigned int count)
static struct __initdata console bfin_early_serial_console = ;
static struct uart_driver bfin_serial_reg = ;
static int bfin_serial_suspend(struct platform_device *pdev, pm_message_t state)
static int bfin_serial_resume(struct platform_device *pdev)
static int bfin_serial_probe(struct platform_device *pdev)
static int __devexit bfin_serial_remove(struct platform_device *pdev)
static struct platform_driver bfin_serial_driver = ;
#if defined(CONFIG_SERIAL_BFIN_CONSOLE)
static __initdata struct early_platform_driver early_bfin_serial_driver = ;
static int __init bfin_serial_rs_console_init(void)
console_initcall(bfin_serial_rs_console_init);
static int bfin_earlyprintk_probe(struct platform_device *pdev)
static struct platform_driver bfin_earlyprintk_driver = ;
static __initdata struct early_platform_driver early_bfin_earlyprintk_driver = ;
struct console __init *bfin_earlyserial_init(unsigned int port,
unsigned int cflag)
static int __init bfin_serial_init(void)
static void __exit bfin_serial_exit(void)
module_init(bfin_serial_init);
module_exit(bfin_serial_exit);
MODULE_AUTHOR("Sonic Zhang, Aubrey Li");
MODULE_DESCRIPTION("Blackfin generic serial port driver");
MODULE_LICENSE("GPL");
MODULE_ALIAS_CHARDEV_MAJOR(BFIN_SERIAL_MAJOR);
MODULE_ALIAS("platform:bfin-uart");

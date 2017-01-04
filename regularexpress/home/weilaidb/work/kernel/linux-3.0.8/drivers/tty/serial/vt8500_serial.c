#if defined(CONFIG_SERIAL_VT8500_CONSOLE) && defined(CONFIG_MAGIC_SYSRQ)
# define SUPPORT_SYSRQ
#define VT8500_URTDR		0x0000
#define VT8500_URRDR		0x0004
#define VT8500_URDIV		0x0008
#define VT8500_URLCR		0x000C
#define VT8500_URICR		0x0010
#define VT8500_URIER		0x0014
#define VT8500_URISR		0x0018
#define VT8500_URUSR		0x001c
#define VT8500_URFCR		0x0020
#define VT8500_URFIDX		0x0024
#define VT8500_URBKR		0x0028
#define VT8500_URTOD		0x002c
#define VT8500_TXFIFO		0x1000
#define VT8500_RXFIFO		0x1020
#define TXDE	(1 << 0)
#define RXDF	(1 << 1)
#define TXFAE	(1 << 2)
#define TXFE	(1 << 3)
#define RXFAF	(1 << 4)
#define RXFF	(1 << 5)
#define TXUDR	(1 << 6)
#define RXOVER	(1 << 7)
#define PER	(1 << 8)
#define FER	(1 << 9)
#define TCTS	(1 << 10)
#define RXTOUT	(1 << 11)
#define BKDONE	(1 << 12)
#define ERR	(1 << 13)
#define RX_FIFO_INTS	(RXFAF | RXFF | RXOVER | PER | FER | RXTOUT)
#define TX_FIFO_INTS	(TXFAE | TXFE | TXUDR)
struct vt8500_port ;
static inline void vt8500_write(struct uart_port *port, unsigned int val,
unsigned int off)
static inline unsigned int vt8500_read(struct uart_port *port, unsigned int off)
static void vt8500_stop_tx(struct uart_port *port)
static void vt8500_stop_rx(struct uart_port *port)
static void vt8500_enable_ms(struct uart_port *port)
static void handle_rx(struct uart_port *port)
static void handle_tx(struct uart_port *port)
static void vt8500_start_tx(struct uart_port *port)
static void handle_delta_cts(struct uart_port *port)
static irqreturn_t vt8500_irq(int irq, void *dev_id)
static unsigned int vt8500_tx_empty(struct uart_port *port)
static unsigned int vt8500_get_mctrl(struct uart_port *port)
static void vt8500_set_mctrl(struct uart_port *port, unsigned int mctrl)
static void vt8500_break_ctl(struct uart_port *port, int break_ctl)
static int vt8500_set_baud_rate(struct uart_port *port, unsigned int baud)
static int vt8500_startup(struct uart_port *port)
static void vt8500_shutdown(struct uart_port *port)
static void vt8500_set_termios(struct uart_port *port,
struct ktermios *termios,
struct ktermios *old)
static const char *vt8500_type(struct uart_port *port)
static void vt8500_release_port(struct uart_port *port)
static int vt8500_request_port(struct uart_port *port)
static void vt8500_config_port(struct uart_port *port, int flags)
static int vt8500_verify_port(struct uart_port *port,
struct serial_struct *ser)
static struct vt8500_port *vt8500_uart_ports[4];
static struct uart_driver vt8500_uart_driver;
static inline void wait_for_xmitr(struct uart_port *port)
static void vt8500_console_putchar(struct uart_port *port, int c)
static void vt8500_console_write(struct console *co, const char *s,
unsigned int count)
static int __init vt8500_console_setup(struct console *co, char *options)
static struct console vt8500_console = ;
#define VT8500_CONSOLE	(&vt8500_console)
#define VT8500_CONSOLE	NULL
static struct uart_ops vt8500_uart_pops = ;
static struct uart_driver vt8500_uart_driver = ;
static int __init vt8500_serial_probe(struct platform_device *pdev)
static int __devexit vt8500_serial_remove(struct platform_device *pdev)
static struct platform_driver vt8500_platform_driver = ;
static int __init vt8500_serial_init(void)
static void __exit vt8500_serial_exit(void)
module_init(vt8500_serial_init);
module_exit(vt8500_serial_exit);
MODULE_AUTHOR("Alexey Charkov <alchark@gmail.com>");
MODULE_DESCRIPTION("Driver for vt8500 serial device");
MODULE_LICENSE("GPL");

#if defined(CONFIG_MAGIC_SYSRQ)
#define SUPPORT_SYSRQ
#define CON_BREAK	((long)-1)
#define CON_HUP		((long)-2)
#define IGNORE_BREAK	0x1
#define IGNORE_ALL	0x2
static char *con_write_page;
static char *con_read_page;
static int hung_up = 0;
static void transmit_chars_putchar(struct uart_port *port, struct circ_buf *xmit)
static void transmit_chars_write(struct uart_port *port, struct circ_buf *xmit)
static int receive_chars_getchar(struct uart_port *port, struct tty_struct *tty)
static int receive_chars_read(struct uart_port *port, struct tty_struct *tty)
struct sunhv_ops ;
static struct sunhv_ops bychar_ops = ;
static struct sunhv_ops bywrite_ops = ;
static struct sunhv_ops *sunhv_ops = &bychar_ops;
static struct tty_struct *receive_chars(struct uart_port *port)
static void transmit_chars(struct uart_port *port)
static irqreturn_t sunhv_interrupt(int irq, void *dev_id)
static unsigned int sunhv_tx_empty(struct uart_port *port)
static void sunhv_set_mctrl(struct uart_port *port, unsigned int mctrl)
static unsigned int sunhv_get_mctrl(struct uart_port *port)
static void sunhv_stop_tx(struct uart_port *port)
static void sunhv_start_tx(struct uart_port *port)
static void sunhv_send_xchar(struct uart_port *port, char ch)
static void sunhv_stop_rx(struct uart_port *port)
static void sunhv_enable_ms(struct uart_port *port)
static void sunhv_break_ctl(struct uart_port *port, int break_state)
static int sunhv_startup(struct uart_port *port)
static void sunhv_shutdown(struct uart_port *port)
static void sunhv_set_termios(struct uart_port *port, struct ktermios *termios,
struct ktermios *old)
static const char *sunhv_type(struct uart_port *port)
static void sunhv_release_port(struct uart_port *port)
static int sunhv_request_port(struct uart_port *port)
static void sunhv_config_port(struct uart_port *port, int flags)
static int sunhv_verify_port(struct uart_port *port, struct serial_struct *ser)
static struct uart_ops sunhv_pops = ;
static struct uart_driver sunhv_reg = ;
static struct uart_port *sunhv_port;
static int fill_con_write_page(const char *s, unsigned int n,
unsigned long *page_bytes)
static void sunhv_console_write_paged(struct console *con, const char *s, unsigned n)
static inline void sunhv_console_putchar(struct uart_port *port, char c)
static void sunhv_console_write_bychar(struct console *con, const char *s, unsigned n)
static struct console sunhv_console = ;
static int __devinit hv_probe(struct platform_device *op)
static int __devexit hv_remove(struct platform_device *dev)
static const struct of_device_id hv_match[] = ;
MODULE_DEVICE_TABLE(of, hv_match);
static struct platform_driver hv_driver = ;
static int __init sunhv_init(void)
static void __exit sunhv_exit(void)
module_init(sunhv_init);
module_exit(sunhv_exit);
MODULE_AUTHOR("David S. Miller");
MODULE_DESCRIPTION("SUN4V Hypervisor console driver");
MODULE_VERSION("2.0");
MODULE_LICENSE("GPL");

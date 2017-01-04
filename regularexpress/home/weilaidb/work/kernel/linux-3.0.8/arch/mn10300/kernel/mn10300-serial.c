static const char serial_name[] = "MN10300 Serial driver";
static const char serial_version[] = "mn10300_serial-1.0";
static const char serial_revdate[] = "2007-11-06";
#if defined(CONFIG_MN10300_TTYSM_CONSOLE) && defined(CONFIG_MAGIC_SYSRQ)
#define SUPPORT_SYSRQ
#undef  GxICR
#define GxICR(X) CROSS_GxICR(X, 0)
#define kenter(FMT, ...) \
printk(KERN_DEBUG "-->%s(" FMT ")\n", __func__, ##__VA_ARGS__)
#define _enter(FMT, ...) \
no_printk(KERN_DEBUG "-->%s(" FMT ")\n", __func__, ##__VA_ARGS__)
#define kdebug(FMT, ...) \
printk(KERN_DEBUG "--- " FMT "\n", ##__VA_ARGS__)
#define _debug(FMT, ...) \
no_printk(KERN_DEBUG "--- " FMT "\n", ##__VA_ARGS__)
#define kproto(FMT, ...) \
printk(KERN_DEBUG "### MNSERIAL " FMT " ###\n", ##__VA_ARGS__)
#define _proto(FMT, ...) \
no_printk(KERN_DEBUG "### MNSERIAL " FMT " ###\n", ##__VA_ARGS__)
#define CODMSB	004000000000
#define NR_UARTS 3
static void mn10300_serial_console_write(struct console *co,
const char *s, unsigned count);
static int __init mn10300_serial_console_setup(struct console *co,
char *options);
static struct uart_driver mn10300_serial_driver;
static struct console mn10300_serial_console = ;
static struct uart_driver mn10300_serial_driver = ;
static unsigned int mn10300_serial_tx_empty(struct uart_port *);
static void mn10300_serial_set_mctrl(struct uart_port *, unsigned int mctrl);
static unsigned int mn10300_serial_get_mctrl(struct uart_port *);
static void mn10300_serial_stop_tx(struct uart_port *);
static void mn10300_serial_start_tx(struct uart_port *);
static void mn10300_serial_send_xchar(struct uart_port *, char ch);
static void mn10300_serial_stop_rx(struct uart_port *);
static void mn10300_serial_enable_ms(struct uart_port *);
static void mn10300_serial_break_ctl(struct uart_port *, int ctl);
static int mn10300_serial_startup(struct uart_port *);
static void mn10300_serial_shutdown(struct uart_port *);
static void mn10300_serial_set_termios(struct uart_port *,
struct ktermios *new,
struct ktermios *old);
static const char *mn10300_serial_type(struct uart_port *);
static void mn10300_serial_release_port(struct uart_port *);
static int mn10300_serial_request_port(struct uart_port *);
static void mn10300_serial_config_port(struct uart_port *, int);
static int mn10300_serial_verify_port(struct uart_port *,
struct serial_struct *);
static void mn10300_serial_poll_put_char(struct uart_port *, unsigned char);
static int mn10300_serial_poll_get_char(struct uart_port *);
static const struct uart_ops mn10300_serial_ops = ;
static irqreturn_t mn10300_serial_interrupt(int irq, void *dev_id);
struct mn10300_serial_port mn10300_serial_port_sif0 = ;
struct mn10300_serial_port mn10300_serial_port_sif1 = ;
struct mn10300_serial_port mn10300_serial_port_sif2 = ;
struct mn10300_serial_port *mn10300_serial_ports[NR_UARTS + 1] = ;
static void mn10300_serial_mask_ack(unsigned int irq)
static void mn10300_serial_chip_mask_ack(struct irq_data *d)
static void mn10300_serial_nop(struct irq_data *d)
static struct irq_chip mn10300_serial_pic = ;
struct mn10300_serial_int mn10300_serial_int_tbl[NR_IRQS];
static void mn10300_serial_dis_tx_intr(struct mn10300_serial_port *port)
static void mn10300_serial_en_tx_intr(struct mn10300_serial_port *port)
static void mn10300_serial_dis_rx_intr(struct mn10300_serial_port *port)
static int mask_test_and_clear(volatile u8 *ptr, u8 mask)
static void mn10300_serial_receive_interrupt(struct mn10300_serial_port *port)
static void mn10300_serial_transmit_interrupt(struct mn10300_serial_port *port)
static void mn10300_serial_cts_changed(struct mn10300_serial_port *port, u8 st)
static irqreturn_t mn10300_serial_interrupt(int irq, void *dev_id)
static unsigned int mn10300_serial_tx_empty(struct uart_port *_port)
static void mn10300_serial_set_mctrl(struct uart_port *_port,
unsigned int mctrl)
static unsigned int mn10300_serial_get_mctrl(struct uart_port *_port)
static void mn10300_serial_stop_tx(struct uart_port *_port)
static void mn10300_serial_start_tx(struct uart_port *_port)
static void mn10300_serial_send_xchar(struct uart_port *_port, char ch)
static void mn10300_serial_stop_rx(struct uart_port *_port)
static void mn10300_serial_enable_ms(struct uart_port *_port)
static void mn10300_serial_break_ctl(struct uart_port *_port, int ctl)
static int mn10300_serial_startup(struct uart_port *_port)
static void mn10300_serial_shutdown(struct uart_port *_port)
static void mn10300_serial_change_speed(struct mn10300_serial_port *port,
struct ktermios *new,
struct ktermios *old)
static void mn10300_serial_set_termios(struct uart_port *_port,
struct ktermios *new,
struct ktermios *old)
static const char *mn10300_serial_type(struct uart_port *_port)
static void mn10300_serial_release_port(struct uart_port *_port)
static int mn10300_serial_request_port(struct uart_port *_port)
static void mn10300_serial_config_port(struct uart_port *_port, int type)
static int mn10300_serial_verify_port(struct uart_port *_port,
struct serial_struct *ss)
static int __init mn10300_serial_init(void)
__initcall(mn10300_serial_init);
static void mn10300_serial_console_write(struct console *co,
const char *s, unsigned count)
static int __init mn10300_serial_console_setup(struct console *co,
char *options)
static int __init mn10300_serial_console_init(void)
console_initcall(mn10300_serial_console_init);
static int mn10300_serial_poll_get_char(struct uart_port *_port)
static void mn10300_serial_poll_put_char(struct uart_port *_port,
unsigned char ch)

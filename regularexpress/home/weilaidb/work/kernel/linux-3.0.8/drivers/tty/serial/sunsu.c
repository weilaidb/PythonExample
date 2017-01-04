#if defined(CONFIG_SERIAL_SUNSU_CONSOLE) && defined(CONFIG_MAGIC_SYSRQ)
#define SUPPORT_SYSRQ
#define SU_BASE_BAUD	(1846200 / 16)
enum su_type ;
static char *su_typev[] = ;
static const struct serial_uart_config uart_config[PORT_MAX_8250+1] = ;
struct uart_sunsu_port ;
static unsigned int serial_in(struct uart_sunsu_port *up, int offset)
static void serial_out(struct uart_sunsu_port *up, int offset, int value)
#define serial_inp(up, offset)		serial_in(up, offset)
#define serial_outp(up, offset, value)	serial_out(up, offset, value)
static void serial_icr_write(struct uart_sunsu_port *up, int offset, int value)
static int __enable_rsa(struct uart_sunsu_port *up)
static void enable_rsa(struct uart_sunsu_port *up)
static void disable_rsa(struct uart_sunsu_port *up)
static inline void __stop_tx(struct uart_sunsu_port *p)
static void sunsu_stop_tx(struct uart_port *port)
static void sunsu_start_tx(struct uart_port *port)
static void sunsu_stop_rx(struct uart_port *port)
static void sunsu_enable_ms(struct uart_port *port)
static struct tty_struct *
receive_chars(struct uart_sunsu_port *up, unsigned char *status)
static void transmit_chars(struct uart_sunsu_port *up)
static void check_modem_status(struct uart_sunsu_port *up)
static irqreturn_t sunsu_serial_interrupt(int irq, void *dev_id)
static void
sunsu_change_speed(struct uart_port *port, unsigned int cflag,
unsigned int iflag, unsigned int quot);
static void sunsu_change_mouse_baud(struct uart_sunsu_port *up)
static void receive_kbd_ms_chars(struct uart_sunsu_port *up, int is_break)
static irqreturn_t sunsu_kbd_ms_interrupt(int irq, void *dev_id)
static unsigned int sunsu_tx_empty(struct uart_port *port)
static unsigned int sunsu_get_mctrl(struct uart_port *port)
static void sunsu_set_mctrl(struct uart_port *port, unsigned int mctrl)
static void sunsu_break_ctl(struct uart_port *port, int break_state)
static int sunsu_startup(struct uart_port *port)
static void sunsu_shutdown(struct uart_port *port)
static void
sunsu_change_speed(struct uart_port *port, unsigned int cflag,
unsigned int iflag, unsigned int quot)
static void
sunsu_set_termios(struct uart_port *port, struct ktermios *termios,
struct ktermios *old)
static void sunsu_release_port(struct uart_port *port)
static int sunsu_request_port(struct uart_port *port)
static void sunsu_config_port(struct uart_port *port, int flags)
static int
sunsu_verify_port(struct uart_port *port, struct serial_struct *ser)
static const char *
sunsu_type(struct uart_port *port)
static struct uart_ops sunsu_pops = ;
#define UART_NR	4
static struct uart_sunsu_port sunsu_ports[UART_NR];
static DEFINE_SPINLOCK(sunsu_serio_lock);
static int sunsu_serio_write(struct serio *serio, unsigned char ch)
static int sunsu_serio_open(struct serio *serio)
static void sunsu_serio_close(struct serio *serio)
static void sunsu_autoconfig(struct uart_sunsu_port *up)
static struct uart_driver sunsu_reg = ;
static int __devinit sunsu_kbd_ms_init(struct uart_sunsu_port *up)
#define BOTH_EMPTY (UART_LSR_TEMT | UART_LSR_THRE)
static __inline__ void wait_for_xmitr(struct uart_sunsu_port *up)
static void sunsu_console_putchar(struct uart_port *port, int ch)
static void sunsu_console_write(struct console *co, const char *s,
unsigned int count)
static int __init sunsu_console_setup(struct console *co, char *options)
static struct console sunsu_console = ;
static inline struct console *SUNSU_CONSOLE(void)
#define SUNSU_CONSOLE()			(NULL)
#define sunsu_serial_console_init()	do  while (0)
static enum su_type __devinit su_get_type(struct device_node *dp)
static int __devinit su_probe(struct platform_device *op)
static int __devexit su_remove(struct platform_device *op)
static const struct of_device_id su_match[] = ;
MODULE_DEVICE_TABLE(of, su_match);
static struct platform_driver su_driver = ;
static int __init sunsu_init(void)
static void __exit sunsu_exit(void)
module_init(sunsu_init);
module_exit(sunsu_exit);
MODULE_AUTHOR("Eddie C. Dost, Peter Zaitcev, and David S. Miller");
MODULE_DESCRIPTION("Sun SU serial port driver");
MODULE_VERSION("2.0");
MODULE_LICENSE("GPL");

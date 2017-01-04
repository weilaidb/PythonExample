#if defined(CONFIG_SERIAL_SUNZILOG_CONSOLE) && defined(CONFIG_MAGIC_SYSRQ)
#define SUPPORT_SYSRQ
#define ZSDELAY()		udelay(5)
#define ZSDELAY_LONG()		udelay(20)
#define ZS_WSYNC(channel)	do  while (0)
#define ZSDELAY()
#define ZSDELAY_LONG()
#define ZS_WSYNC(__channel) \
readb(&((__channel)->control))
#define ZS_CLOCK		4915200
#define ZS_CLOCK_DIVISOR	16
struct uart_sunzilog_port ;
static void sunzilog_putchar(struct uart_port *port, int ch);
#define ZILOG_CHANNEL_FROM_PORT(PORT)	((struct zilog_channel __iomem *)((PORT)->membase))
#define UART_ZILOG(PORT)		((struct uart_sunzilog_port *)(PORT))
#define ZS_IS_KEYB(UP)	((UP)->flags & SUNZILOG_FLAG_CONS_KEYB)
#define ZS_IS_MOUSE(UP)	((UP)->flags & SUNZILOG_FLAG_CONS_MOUSE)
#define ZS_IS_CONS(UP)	((UP)->flags & SUNZILOG_FLAG_IS_CONS)
#define ZS_IS_KGDB(UP)	((UP)->flags & SUNZILOG_FLAG_IS_KGDB)
#define ZS_WANTS_MODEM_STATUS(UP)	((UP)->flags & SUNZILOG_FLAG_MODEM_STATUS)
#define ZS_IS_CHANNEL_A(UP)	((UP)->flags & SUNZILOG_FLAG_IS_CHANNEL_A)
#define ZS_REGS_HELD(UP)	((UP)->flags & SUNZILOG_FLAG_REGS_HELD)
#define ZS_TX_STOPPED(UP)	((UP)->flags & SUNZILOG_FLAG_TX_STOPPED)
#define ZS_TX_ACTIVE(UP)	((UP)->flags & SUNZILOG_FLAG_TX_ACTIVE)
static unsigned char read_zsreg(struct zilog_channel __iomem *channel,
unsigned char reg)
static void write_zsreg(struct zilog_channel __iomem *channel,
unsigned char reg, unsigned char value)
static void sunzilog_clear_fifo(struct zilog_channel __iomem *channel)
static int __load_zsregs(struct zilog_channel __iomem *channel, unsigned char *regs)
static void sunzilog_maybe_update_regs(struct uart_sunzilog_port *up,
struct zilog_channel __iomem *channel)
static void sunzilog_change_mouse_baud(struct uart_sunzilog_port *up)
static void sunzilog_kbdms_receive_chars(struct uart_sunzilog_port *up,
unsigned char ch, int is_break)
static struct tty_struct *
sunzilog_receive_chars(struct uart_sunzilog_port *up,
struct zilog_channel __iomem *channel)
static void sunzilog_status_handle(struct uart_sunzilog_port *up,
struct zilog_channel __iomem *channel)
static void sunzilog_transmit_chars(struct uart_sunzilog_port *up,
struct zilog_channel __iomem *channel)
static irqreturn_t sunzilog_interrupt(int irq, void *dev_id)
static __inline__ unsigned char sunzilog_read_channel_status(struct uart_port *port)
static unsigned int sunzilog_tx_empty(struct uart_port *port)
static unsigned int sunzilog_get_mctrl(struct uart_port *port)
static void sunzilog_set_mctrl(struct uart_port *port, unsigned int mctrl)
static void sunzilog_stop_tx(struct uart_port *port)
static void sunzilog_start_tx(struct uart_port *port)
static void sunzilog_stop_rx(struct uart_port *port)
static void sunzilog_enable_ms(struct uart_port *port)
static void sunzilog_break_ctl(struct uart_port *port, int break_state)
static void __sunzilog_startup(struct uart_sunzilog_port *up)
static int sunzilog_startup(struct uart_port *port)
static void sunzilog_shutdown(struct uart_port *port)
static void
sunzilog_convert_to_zs(struct uart_sunzilog_port *up, unsigned int cflag,
unsigned int iflag, int brg)
static void
sunzilog_set_termios(struct uart_port *port, struct ktermios *termios,
struct ktermios *old)
static const char *sunzilog_type(struct uart_port *port)
static void sunzilog_release_port(struct uart_port *port)
static int sunzilog_request_port(struct uart_port *port)
static void sunzilog_config_port(struct uart_port *port, int flags)
static int sunzilog_verify_port(struct uart_port *port, struct serial_struct *ser)
static int sunzilog_get_poll_char(struct uart_port *port)
static void sunzilog_put_poll_char(struct uart_port *port,
unsigned char ch)
static struct uart_ops sunzilog_pops = ;
static int uart_chip_count;
static struct uart_sunzilog_port *sunzilog_port_table;
static struct zilog_layout __iomem **sunzilog_chip_regs;
static struct uart_sunzilog_port *sunzilog_irq_chain;
static struct uart_driver sunzilog_reg = ;
static int __init sunzilog_alloc_tables(int num_sunzilog)
static void sunzilog_free_tables(void)
#define ZS_PUT_CHAR_MAX_DELAY	2000
static void sunzilog_putchar(struct uart_port *port, int ch)
static DEFINE_SPINLOCK(sunzilog_serio_lock);
static int sunzilog_serio_write(struct serio *serio, unsigned char ch)
static int sunzilog_serio_open(struct serio *serio)
static void sunzilog_serio_close(struct serio *serio)
static void
sunzilog_console_write(struct console *con, const char *s, unsigned int count)
static int __init sunzilog_console_setup(struct console *con, char *options)
static struct console sunzilog_console_ops = ;
static inline struct console *SUNZILOG_CONSOLE(void)
#define SUNZILOG_CONSOLE()	(NULL)
static void __devinit sunzilog_init_kbdms(struct uart_sunzilog_port *up)
static void __devinit sunzilog_register_serio(struct uart_sunzilog_port *up)
static void __devinit sunzilog_init_hw(struct uart_sunzilog_port *up)
static int zilog_irq = -1;
static int __devinit zs_probe(struct platform_device *op)
static void __devexit zs_remove_one(struct uart_sunzilog_port *up)
static int __devexit zs_remove(struct platform_device *op)
static const struct of_device_id zs_match[] = ;
MODULE_DEVICE_TABLE(of, zs_match);
static struct platform_driver zs_driver = ;
static int __init sunzilog_init(void)
static void __exit sunzilog_exit(void)
module_init(sunzilog_init);
module_exit(sunzilog_exit);
MODULE_AUTHOR("David S. Miller");
MODULE_DESCRIPTION("Sun Zilog serial port driver");
MODULE_VERSION("2.0");
MODULE_LICENSE("GPL");

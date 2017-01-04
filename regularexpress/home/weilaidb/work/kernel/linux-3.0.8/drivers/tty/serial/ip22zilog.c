#if defined(CONFIG_SERIAL_IP22_ZILOG_CONSOLE) && defined(CONFIG_MAGIC_SYSRQ)
#define SUPPORT_SYSRQ
#define ZSDELAY()		udelay(5)
#define ZSDELAY_LONG()		udelay(20)
#define ZS_WSYNC(channel)	do  while (0)
#define NUM_IP22ZILOG		1
#define NUM_CHANNELS		(NUM_IP22ZILOG * 2)
#define ZS_CLOCK		3672000
#define ZS_CLOCK_DIVISOR	16
struct uart_ip22zilog_port ;
#define ZILOG_CHANNEL_FROM_PORT(PORT)	((struct zilog_channel *)((PORT)->membase))
#define UART_ZILOG(PORT)		((struct uart_ip22zilog_port *)(PORT))
#define IP22ZILOG_GET_CURR_REG(PORT, REGNUM)		\
(UART_ZILOG(PORT)->curregs[REGNUM])
#define IP22ZILOG_SET_CURR_REG(PORT, REGNUM, REGVAL)	\
((UART_ZILOG(PORT)->curregs[REGNUM]) = (REGVAL))
#define ZS_IS_CONS(UP)	((UP)->flags & IP22ZILOG_FLAG_IS_CONS)
#define ZS_IS_KGDB(UP)	((UP)->flags & IP22ZILOG_FLAG_IS_KGDB)
#define ZS_WANTS_MODEM_STATUS(UP)	((UP)->flags & IP22ZILOG_FLAG_MODEM_STATUS)
#define ZS_IS_CHANNEL_A(UP)	((UP)->flags & IP22ZILOG_FLAG_IS_CHANNEL_A)
#define ZS_REGS_HELD(UP)	((UP)->flags & IP22ZILOG_FLAG_REGS_HELD)
#define ZS_TX_STOPPED(UP)	((UP)->flags & IP22ZILOG_FLAG_TX_STOPPED)
#define ZS_TX_ACTIVE(UP)	((UP)->flags & IP22ZILOG_FLAG_TX_ACTIVE)
static unsigned char read_zsreg(struct zilog_channel *channel,
unsigned char reg)
static void write_zsreg(struct zilog_channel *channel,
unsigned char reg, unsigned char value)
static void ip22zilog_clear_fifo(struct zilog_channel *channel)
static void __load_zsregs(struct zilog_channel *channel, unsigned char *regs)
static void ip22zilog_maybe_update_regs(struct uart_ip22zilog_port *up,
struct zilog_channel *channel)
#define Rx_BRK 0x0100
#define Rx_SYS 0x0200
static struct tty_struct *ip22zilog_receive_chars(struct uart_ip22zilog_port *up,
struct zilog_channel *channel)
static void ip22zilog_status_handle(struct uart_ip22zilog_port *up,
struct zilog_channel *channel)
static void ip22zilog_transmit_chars(struct uart_ip22zilog_port *up,
struct zilog_channel *channel)
static irqreturn_t ip22zilog_interrupt(int irq, void *dev_id)
static __inline__ unsigned char ip22zilog_read_channel_status(struct uart_port *port)
static unsigned int ip22zilog_tx_empty(struct uart_port *port)
static unsigned int ip22zilog_get_mctrl(struct uart_port *port)
static void ip22zilog_set_mctrl(struct uart_port *port, unsigned int mctrl)
static void ip22zilog_stop_tx(struct uart_port *port)
static void ip22zilog_start_tx(struct uart_port *port)
static void ip22zilog_stop_rx(struct uart_port *port)
static void ip22zilog_enable_ms(struct uart_port *port)
static void ip22zilog_break_ctl(struct uart_port *port, int break_state)
static void __ip22zilog_reset(struct uart_ip22zilog_port *up)
static void __ip22zilog_startup(struct uart_ip22zilog_port *up)
static int ip22zilog_startup(struct uart_port *port)
static void ip22zilog_shutdown(struct uart_port *port)
static void
ip22zilog_convert_to_zs(struct uart_ip22zilog_port *up, unsigned int cflag,
unsigned int iflag, int brg)
static void
ip22zilog_set_termios(struct uart_port *port, struct ktermios *termios,
struct ktermios *old)
static const char *ip22zilog_type(struct uart_port *port)
static void ip22zilog_release_port(struct uart_port *port)
static int ip22zilog_request_port(struct uart_port *port)
static void ip22zilog_config_port(struct uart_port *port, int flags)
static int ip22zilog_verify_port(struct uart_port *port, struct serial_struct *ser)
static struct uart_ops ip22zilog_pops = ;
static struct uart_ip22zilog_port *ip22zilog_port_table;
static struct zilog_layout **ip22zilog_chip_regs;
static struct uart_ip22zilog_port *ip22zilog_irq_chain;
static int zilog_irq = -1;
static void * __init alloc_one_table(unsigned long size)
static void __init ip22zilog_alloc_tables(void)
static struct zilog_layout * __init get_zs(int chip)
#define ZS_PUT_CHAR_MAX_DELAY	2000
static void ip22zilog_put_char(struct uart_port *port, int ch)
static void
ip22zilog_console_write(struct console *con, const char *s, unsigned int count)
static int __init ip22zilog_console_setup(struct console *con, char *options)
static struct uart_driver ip22zilog_reg;
static struct console ip22zilog_console = ;
static struct uart_driver ip22zilog_reg = ;
static void __init ip22zilog_prepare(void)
static int __init ip22zilog_ports_init(void)
static int __init ip22zilog_init(void)
static void __exit ip22zilog_exit(void)
module_init(ip22zilog_init);
module_exit(ip22zilog_exit);
MODULE_AUTHOR("Ralf Baechle <ralf@linux-mips.org>");
MODULE_DESCRIPTION("SGI Zilog serial port driver");
MODULE_LICENSE("GPL");

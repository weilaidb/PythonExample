#define SUPPORT_SYSRQ
#define MUX_OFFSET 0x800
#define MUX_LINE_OFFSET 0x80
#define MUX_FIFO_SIZE 255
#define MUX_POLL_DELAY (30 * HZ / 1000)
#define IO_DATA_REG_OFFSET 0x3c
#define IO_DCOUNT_REG_OFFSET 0x40
#define MUX_EOFIFO(status) ((status & 0xF000) == 0xF000)
#define MUX_STATUS(status) ((status & 0xF000) == 0x8000)
#define MUX_BREAK(status) ((status & 0xF000) == 0x2000)
#define MUX_NR 256
static unsigned int port_cnt __read_mostly;
struct mux_port ;
static struct mux_port mux_ports[MUX_NR];
static struct uart_driver mux_driver = ;
static struct timer_list mux_timer;
#define UART_PUT_CHAR(p, c) __raw_writel((c), (p)->membase + IO_DATA_REG_OFFSET)
#define UART_GET_FIFO_CNT(p) __raw_readl((p)->membase + IO_DCOUNT_REG_OFFSET)
static int __init get_mux_port_count(struct parisc_device *dev)
static unsigned int mux_tx_empty(struct uart_port *port)
static void mux_set_mctrl(struct uart_port *port, unsigned int mctrl)
static unsigned int mux_get_mctrl(struct uart_port *port)
static void mux_stop_tx(struct uart_port *port)
static void mux_start_tx(struct uart_port *port)
static void mux_stop_rx(struct uart_port *port)
static void mux_enable_ms(struct uart_port *port)
static void mux_break_ctl(struct uart_port *port, int break_state)
static void mux_write(struct uart_port *port)
static void mux_read(struct uart_port *port)
static int mux_startup(struct uart_port *port)
static void mux_shutdown(struct uart_port *port)
static void
mux_set_termios(struct uart_port *port, struct ktermios *termios,
struct ktermios *old)
static const char *mux_type(struct uart_port *port)
static void mux_release_port(struct uart_port *port)
static int mux_request_port(struct uart_port *port)
static void mux_config_port(struct uart_port *port, int type)
static int mux_verify_port(struct uart_port *port, struct serial_struct *ser)
static void mux_poll(unsigned long unused)
static void mux_console_write(struct console *co, const char *s, unsigned count)
static int mux_console_setup(struct console *co, char *options)
struct tty_driver *mux_console_device(struct console *co, int *index)
static struct console mux_console = ;
#define MUX_CONSOLE	&mux_console
#define MUX_CONSOLE	NULL
static struct uart_ops mux_pops = ;
static int __init mux_probe(struct parisc_device *dev)
static int __devexit mux_remove(struct parisc_device *dev)
static struct parisc_device_id builtin_mux_tbl[] = ;
static struct parisc_device_id mux_tbl[] = ;
MODULE_DEVICE_TABLE(parisc, builtin_mux_tbl);
MODULE_DEVICE_TABLE(parisc, mux_tbl);
static struct parisc_driver builtin_serial_mux_driver = ;
static struct parisc_driver serial_mux_driver = ;
static int __init mux_init(void)
static void __exit mux_exit(void)
module_init(mux_init);
module_exit(mux_exit);
MODULE_AUTHOR("Ryan Bradetich");
MODULE_DESCRIPTION("Serial MUX driver");
MODULE_LICENSE("GPL");
MODULE_ALIAS_CHARDEV_MAJOR(MUX_MAJOR);

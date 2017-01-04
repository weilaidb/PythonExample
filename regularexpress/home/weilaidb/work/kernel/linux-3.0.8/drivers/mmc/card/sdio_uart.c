#define UART_NR		8
#define FIFO_SIZE	PAGE_SIZE
#define WAKEUP_CHARS	256
struct uart_icount ;
struct sdio_uart_port ;
static struct sdio_uart_port *sdio_uart_table[UART_NR];
static DEFINE_SPINLOCK(sdio_uart_table_lock);
static int sdio_uart_add_port(struct sdio_uart_port *port)
static struct sdio_uart_port *sdio_uart_port_get(unsigned index)
static void sdio_uart_port_destroy(struct kref *kref)
static void sdio_uart_port_put(struct sdio_uart_port *port)
static void sdio_uart_port_remove(struct sdio_uart_port *port)
static int sdio_uart_claim_func(struct sdio_uart_port *port)
static inline void sdio_uart_release_func(struct sdio_uart_port *port)
static inline unsigned int sdio_in(struct sdio_uart_port *port, int offset)
static inline void sdio_out(struct sdio_uart_port *port, int offset, int value)
static unsigned int sdio_uart_get_mctrl(struct sdio_uart_port *port)
static void sdio_uart_write_mctrl(struct sdio_uart_port *port,
unsigned int mctrl)
static inline void sdio_uart_update_mctrl(struct sdio_uart_port *port,
unsigned int set, unsigned int clear)
#define sdio_uart_set_mctrl(port, x)	sdio_uart_update_mctrl(port, x, 0)
#define sdio_uart_clear_mctrl(port, x)	sdio_uart_update_mctrl(port, 0, x)
static void sdio_uart_change_speed(struct sdio_uart_port *port,
struct ktermios *termios,
struct ktermios *old)
static void sdio_uart_start_tx(struct sdio_uart_port *port)
static void sdio_uart_stop_tx(struct sdio_uart_port *port)
static void sdio_uart_stop_rx(struct sdio_uart_port *port)
static void sdio_uart_receive_chars(struct sdio_uart_port *port,
unsigned int *status)
static void sdio_uart_transmit_chars(struct sdio_uart_port *port)
static void sdio_uart_check_modem_status(struct sdio_uart_port *port)
static void sdio_uart_irq(struct sdio_func *func)
static int uart_carrier_raised(struct tty_port *tport)
static void uart_dtr_rts(struct tty_port *tport, int onoff)
static int sdio_uart_activate(struct tty_port *tport, struct tty_struct *tty)
static void sdio_uart_shutdown(struct tty_port *tport)
static int sdio_uart_install(struct tty_driver *driver, struct tty_struct *tty)
static void sdio_uart_cleanup(struct tty_struct *tty)
static int sdio_uart_open(struct tty_struct *tty, struct file *filp)
static void sdio_uart_close(struct tty_struct *tty, struct file * filp)
static void sdio_uart_hangup(struct tty_struct *tty)
static int sdio_uart_write(struct tty_struct *tty, const unsigned char *buf,
int count)
static int sdio_uart_write_room(struct tty_struct *tty)
static int sdio_uart_chars_in_buffer(struct tty_struct *tty)
static void sdio_uart_send_xchar(struct tty_struct *tty, char ch)
static void sdio_uart_throttle(struct tty_struct *tty)
static void sdio_uart_unthrottle(struct tty_struct *tty)
static void sdio_uart_set_termios(struct tty_struct *tty,
struct ktermios *old_termios)
static int sdio_uart_break_ctl(struct tty_struct *tty, int break_state)
static int sdio_uart_tiocmget(struct tty_struct *tty)
static int sdio_uart_tiocmset(struct tty_struct *tty,
unsigned int set, unsigned int clear)
static int sdio_uart_proc_show(struct seq_file *m, void *v)
static int sdio_uart_proc_open(struct inode *inode, struct file *file)
static const struct file_operations sdio_uart_proc_fops = ;
static const struct tty_port_operations sdio_uart_port_ops = ;
static const struct tty_operations sdio_uart_ops = ;
static struct tty_driver *sdio_uart_tty_driver;
static int sdio_uart_probe(struct sdio_func *func,
const struct sdio_device_id *id)
static void sdio_uart_remove(struct sdio_func *func)
static const struct sdio_device_id sdio_uart_ids[] = ;
MODULE_DEVICE_TABLE(sdio, sdio_uart_ids);
static struct sdio_driver sdio_uart_driver = ;
static int __init sdio_uart_init(void)
static void __exit sdio_uart_exit(void)
module_init(sdio_uart_init);
module_exit(sdio_uart_exit);
MODULE_AUTHOR("Nicolas Pitre");
MODULE_LICENSE("GPL");

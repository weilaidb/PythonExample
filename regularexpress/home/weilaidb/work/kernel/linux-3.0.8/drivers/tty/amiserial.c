#undef SERIAL_PARANOIA_CHECK
#define SERIAL_DO_RESTART
#undef SERIAL_DEBUG_INTR
#undef SERIAL_DEBUG_OPEN
#undef SERIAL_DEBUG_FLOW
#undef SERIAL_DEBUG_RS_WAIT_UNTIL_SENT
#if defined(MODULE) && defined(SERIAL_DEBUG_MCOUNT)
#define DBG_CNT(s) printk("(%s): [%x] refc=%d, serc=%d, ttyc=%d -> %s\n", \
tty->name, (info->flags), serial_driver->refcount,info->count,tty->count,s)
#define DBG_CNT(s)
static char *serial_version = "4.30";
#define custom amiga_custom
static char *serial_name = "Amiga-builtin serial driver";
static struct tty_driver *serial_driver;
#define WAKEUP_CHARS 256
static struct async_struct *IRQ_ports;
static unsigned char current_ctl_bits;
static void change_speed(struct async_struct *info, struct ktermios *old);
static void rs_wait_until_sent(struct tty_struct *tty, int timeout);
static struct serial_state rs_table[1];
#define NR_PORTS ARRAY_SIZE(rs_table)
#define serial_isroot()	(capable(CAP_SYS_ADMIN))
static inline int serial_paranoia_check(struct async_struct *info,
char *name, const char *routine)
#define SDR_OVRUN   (1<<15)
#define SDR_RBF     (1<<14)
#define SDR_TBE     (1<<13)
#define SDR_TSRE    (1<<12)
#define SERPER_PARENB    (1<<15)
#define AC_SETCLR   (1<<15)
#define AC_UARTBRK  (1<<11)
#define SER_DTR     (1<<7)
#define SER_RTS     (1<<6)
#define SER_DCD     (1<<5)
#define SER_CTS     (1<<4)
#define SER_DSR     (1<<3)
static __inline__ void rtsdtr_ctrl(int bits)
static void rs_stop(struct tty_struct *tty)
static void rs_start(struct tty_struct *tty)
static void rs_sched_event(struct async_struct *info,
int event)
static void receive_chars(struct async_struct *info)
static void transmit_chars(struct async_struct *info)
static void check_modem_status(struct async_struct *info)
static irqreturn_t ser_vbl_int( int irq, void *data)
static irqreturn_t ser_rx_int(int irq, void *dev_id)
static irqreturn_t ser_tx_int(int irq, void *dev_id)
static void do_softint(unsigned long private_)
static int startup(struct async_struct * info)
static void shutdown(struct async_struct * info)
static void change_speed(struct async_struct *info,
struct ktermios *old_termios)
static int rs_put_char(struct tty_struct *tty, unsigned char ch)
static void rs_flush_chars(struct tty_struct *tty)
static int rs_write(struct tty_struct * tty, const unsigned char *buf, int count)
static int rs_write_room(struct tty_struct *tty)
static int rs_chars_in_buffer(struct tty_struct *tty)
static void rs_flush_buffer(struct tty_struct *tty)
static void rs_send_xchar(struct tty_struct *tty, char ch)
static void rs_throttle(struct tty_struct * tty)
static void rs_unthrottle(struct tty_struct * tty)
static int get_serial_info(struct async_struct * info,
struct serial_struct __user * retinfo)
static int set_serial_info(struct async_struct * info,
struct serial_struct __user * new_info)
static int get_lsr_info(struct async_struct * info, unsigned int __user *value)
static int rs_tiocmget(struct tty_struct *tty)
static int rs_tiocmset(struct tty_struct *tty, unsigned int set,
unsigned int clear)
static int rs_break(struct tty_struct *tty, int break_state)
static int rs_get_icount(struct tty_struct *tty,
struct serial_icounter_struct *icount)
static int rs_ioctl(struct tty_struct *tty,
unsigned int cmd, unsigned long arg)
static void rs_set_termios(struct tty_struct *tty, struct ktermios *old_termios)
static void rs_close(struct tty_struct *tty, struct file * filp)
static void rs_wait_until_sent(struct tty_struct *tty, int timeout)
static void rs_hangup(struct tty_struct *tty)
static int block_til_ready(struct tty_struct *tty, struct file * filp,
struct async_struct *info)
static int get_async_struct(int line, struct async_struct **ret_info)
static int rs_open(struct tty_struct *tty, struct file * filp)
static inline void line_info(struct seq_file *m, struct serial_state *state)
static int rs_proc_show(struct seq_file *m, void *v)
static int rs_proc_open(struct inode *inode, struct file *file)
static const struct file_operations rs_proc_fops = ;
static void show_serial_version(void)
static const struct tty_operations serial_ops = ;
static int __init amiga_serial_probe(struct platform_device *pdev)
static int __exit amiga_serial_remove(struct platform_device *pdev)
static struct platform_driver amiga_serial_driver = ;
static int __init amiga_serial_init(void)
module_init(amiga_serial_init);
static void __exit amiga_serial_exit(void)
module_exit(amiga_serial_exit);
#if defined(CONFIG_SERIAL_CONSOLE) && !defined(MODULE)
static void amiga_serial_putc(char c)
static void serial_console_write(struct console *co, const char *s,
unsigned count)
static struct tty_driver *serial_console_device(struct console *c, int *index)
static struct console sercons = ;
static int __init amiserial_console_init(void)
console_initcall(amiserial_console_init);
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:amiga-serial");

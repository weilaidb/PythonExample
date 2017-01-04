#define RISCOM_PARANOIA_CHECK
#define RISCOM_BRAIN_DAMAGED_CTS
#undef RC_REPORT_FIFO
#undef RC_REPORT_OVERRUN
#define RISCOM_LEGAL_FLAGS \
(ASYNC_HUP_NOTIFY   | ASYNC_SAK          | ASYNC_SPLIT_TERMIOS   | \
ASYNC_SPD_HI       | ASYNC_SPEED_VHI    | ASYNC_SESSION_LOCKOUT | \
ASYNC_PGRP_LOCKOUT | ASYNC_CALLOUT_NOHUP)
static struct tty_driver *riscom_driver;
static DEFINE_SPINLOCK(riscom_lock);
static struct riscom_board rc_board[RC_NBOARD] =  ;
static struct riscom_port rc_port[RC_NBOARD * RC_NPORT];
static unsigned short rc_ioport[] =  ;
#define RC_NIOPORT	ARRAY_SIZE(rc_ioport)
static int rc_paranoia_check(struct riscom_port const *port,
char *name, const char *routine)
static inline int board_No(struct riscom_board const *bp)
static inline int port_No(struct riscom_port const *port)
static inline struct riscom_board *port_Board(struct riscom_port const *port)
static inline unsigned char rc_in(struct riscom_board const *bp,
unsigned short reg)
static inline void rc_out(struct riscom_board const *bp, unsigned short reg,
unsigned char val)
static void rc_wait_CCR(struct riscom_board const *bp)
static int rc_request_io_range(struct riscom_board * const bp)
static void rc_release_io_range(struct riscom_board * const bp)
static void __init rc_init_CD180(struct riscom_board const *bp)
static int __init rc_probe(struct riscom_board *bp)
static struct riscom_port *rc_get_port(struct riscom_board const *bp,
unsigned char const *what)
static void rc_receive_exc(struct riscom_board const *bp)
static void rc_receive(struct riscom_board const *bp)
static void rc_transmit(struct riscom_board const *bp)
static void rc_check_modem(struct riscom_board const *bp)
static irqreturn_t rc_interrupt(int dummy, void *dev_id)
static int rc_setup_board(struct riscom_board *bp)
static void rc_shutdown_board(struct riscom_board *bp)
static void rc_change_speed(struct tty_struct *tty, struct riscom_board *bp,
struct riscom_port *port)
static int rc_activate_port(struct tty_port *port, struct tty_struct *tty)
static void rc_shutdown_port(struct tty_struct *tty,
struct riscom_board *bp, struct riscom_port *port)
static int carrier_raised(struct tty_port *port)
static void dtr_rts(struct tty_port *port, int onoff)
static int rc_open(struct tty_struct *tty, struct file *filp)
static void rc_flush_buffer(struct tty_struct *tty)
static void rc_close_port(struct tty_port *port)
static void rc_close(struct tty_struct *tty, struct file *filp)
static int rc_write(struct tty_struct *tty,
const unsigned char *buf, int count)
static int rc_put_char(struct tty_struct *tty, unsigned char ch)
static void rc_flush_chars(struct tty_struct *tty)
static int rc_write_room(struct tty_struct *tty)
static int rc_chars_in_buffer(struct tty_struct *tty)
static int rc_tiocmget(struct tty_struct *tty)
static int rc_tiocmset(struct tty_struct *tty,
unsigned int set, unsigned int clear)
static int rc_send_break(struct tty_struct *tty, int length)
static int rc_set_serial_info(struct tty_struct *tty, struct riscom_port *port,
struct serial_struct __user *newinfo)
static int rc_get_serial_info(struct riscom_port *port,
struct serial_struct __user *retinfo)
static int rc_ioctl(struct tty_struct *tty,
unsigned int cmd, unsigned long arg)
static void rc_throttle(struct tty_struct *tty)
static void rc_unthrottle(struct tty_struct *tty)
static void rc_stop(struct tty_struct *tty)
static void rc_start(struct tty_struct *tty)
static void rc_hangup(struct tty_struct *tty)
static void rc_set_termios(struct tty_struct *tty,
struct ktermios *old_termios)
static const struct tty_operations riscom_ops = ;
static const struct tty_port_operations riscom_port_ops = ;
static int __init rc_init_drivers(void)
static void rc_release_drivers(void)
static int __init riscom8_setup(char *str)
__setup("riscom8=", riscom8_setup);
static char banner[] __initdata =
KERN_INFO "rc: SDL RISCom/8 card driver v1.1, (c) D.Gorodchanin "
"1994-1996.\n";
static char no_boards_msg[] __initdata =
KERN_INFO "rc: No RISCom/8 boards detected.\n";
static int __init riscom8_init(void)
static int iobase;
static int iobase1;
static int iobase2;
static int iobase3;
module_param(iobase, int, 0);
module_param(iobase1, int, 0);
module_param(iobase2, int, 0);
module_param(iobase3, int, 0);
MODULE_LICENSE("GPL");
MODULE_ALIAS_CHARDEV_MAJOR(RISCOM8_NORMAL_MAJOR);
static int __init riscom8_init_module(void)
static void __exit riscom8_exit_module(void)
module_init(riscom8_init_module);
module_exit(riscom8_exit_module);

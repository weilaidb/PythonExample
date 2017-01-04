#define VERSION "1.11"
#define DEBUG
static int sx_debug;
static int sx_rxfifo = SPECIALIX_RXFIFO;
static int sx_rtscts;
#define dprintk(f, str...) if (sx_debug & f) printk(str)
#define dprintk(f, str...)
#define SX_DEBUG_FLOW    0x0001
#define SX_DEBUG_DATA    0x0002
#define SX_DEBUG_PROBE   0x0004
#define SX_DEBUG_CHAN    0x0008
#define SX_DEBUG_INIT    0x0010
#define SX_DEBUG_RX      0x0020
#define SX_DEBUG_TX      0x0040
#define SX_DEBUG_IRQ     0x0080
#define SX_DEBUG_OPEN    0x0100
#define SX_DEBUG_TERMIOS 0x0200
#define SX_DEBUG_SIGNALS 0x0400
#define SX_DEBUG_FIFO    0x0800
#define func_enter() dprintk(SX_DEBUG_FLOW, "io8: enter %s\n", __func__)
#define func_exit()  dprintk(SX_DEBUG_FLOW, "io8: exit  %s\n", __func__)
#define SPECIALIX_PARANOIA_CHECK
#undef SX_REPORT_FIFO
#undef SX_REPORT_OVERRUN
#define SPECIALIX_LEGAL_FLAGS \
(ASYNC_HUP_NOTIFY   | ASYNC_SAK          | ASYNC_SPLIT_TERMIOS   | \
ASYNC_SPD_HI       | ASYNC_SPEED_VHI    | ASYNC_SESSION_LOCKOUT | \
ASYNC_PGRP_LOCKOUT | ASYNC_CALLOUT_NOHUP)
static struct tty_driver *specialix_driver;
static struct specialix_board sx_board[SX_NBOARD] =  ;
static struct specialix_port sx_port[SX_NBOARD * SX_NPORT];
static int sx_paranoia_check(struct specialix_port const *port,
char *name, const char *routine)
static inline int board_No(struct specialix_board *bp)
static inline int port_No(struct specialix_port const *port)
static inline struct specialix_board *port_Board(
struct specialix_port const *port)
static inline unsigned char sx_in(struct specialix_board *bp,
unsigned short reg)
static inline void sx_out(struct specialix_board *bp, unsigned short reg,
unsigned char val)
static inline unsigned char sx_in_off(struct specialix_board *bp,
unsigned short reg)
static inline void sx_out_off(struct specialix_board  *bp,
unsigned short reg, unsigned char val)
static void sx_wait_CCR(struct specialix_board  *bp)
static void sx_wait_CCR_off(struct specialix_board  *bp)
static int sx_request_io_range(struct specialix_board *bp)
static void sx_release_io_range(struct specialix_board *bp)
static int sx_set_irq(struct specialix_board *bp)
static int sx_init_CD186x(struct specialix_board  *bp)
static int read_cross_byte(struct specialix_board *bp, int reg, int bit)
static int sx_probe(struct specialix_board *bp)
static struct specialix_port *sx_get_port(struct specialix_board *bp,
unsigned char const *what)
static void sx_receive_exc(struct specialix_board *bp)
static void sx_receive(struct specialix_board *bp)
static void sx_transmit(struct specialix_board *bp)
static void sx_check_modem(struct specialix_board *bp)
static irqreturn_t sx_interrupt(int dummy, void *dev_id)
static void turn_ints_off(struct specialix_board *bp)
static void turn_ints_on(struct specialix_board *bp)
static int sx_setup_board(struct specialix_board *bp)
static void sx_shutdown_board(struct specialix_board *bp)
static unsigned int sx_crtscts(struct tty_struct *tty)
static void sx_change_speed(struct specialix_board *bp,
struct specialix_port *port)
static int sx_setup_port(struct specialix_board *bp,
struct specialix_port *port)
static void sx_shutdown_port(struct specialix_board *bp,
struct specialix_port *port)
static int block_til_ready(struct tty_struct *tty, struct file *filp,
struct specialix_port *port)
static int sx_open(struct tty_struct *tty, struct file *filp)
static void sx_flush_buffer(struct tty_struct *tty)
static void sx_close(struct tty_struct *tty, struct file *filp)
static int sx_write(struct tty_struct *tty,
const unsigned char *buf, int count)
static int sx_put_char(struct tty_struct *tty, unsigned char ch)
static void sx_flush_chars(struct tty_struct *tty)
static int sx_write_room(struct tty_struct *tty)
static int sx_chars_in_buffer(struct tty_struct *tty)
static int sx_tiocmget(struct tty_struct *tty)
static int sx_tiocmset(struct tty_struct *tty,
unsigned int set, unsigned int clear)
static int sx_send_break(struct tty_struct *tty, int length)
static int sx_set_serial_info(struct specialix_port *port,
struct serial_struct __user *newinfo)
static int sx_get_serial_info(struct specialix_port *port,
struct serial_struct __user *retinfo)
static int sx_ioctl(struct tty_struct *tty,
unsigned int cmd, unsigned long arg)
static void sx_throttle(struct tty_struct *tty)
static void sx_unthrottle(struct tty_struct *tty)
static void sx_stop(struct tty_struct *tty)
static void sx_start(struct tty_struct *tty)
static void sx_hangup(struct tty_struct *tty)
static void sx_set_termios(struct tty_struct *tty,
struct ktermios *old_termios)
static const struct tty_operations sx_ops = ;
static int sx_init_drivers(void)
static void sx_release_drivers(void)
static int __init specialix_init(void)
static int iobase[SX_NBOARD]  = ;
static int irq[SX_NBOARD] = ;
module_param_array(iobase, int, NULL, 0);
module_param_array(irq, int, NULL, 0);
module_param(sx_debug, int, 0);
module_param(sx_rtscts, int, 0);
module_param(sx_rxfifo, int, 0);
static int __init specialix_init_module(void)
static void __exit specialix_exit_module(void)
static struct pci_device_id specialx_pci_tbl[] __devinitdata __used = ;
MODULE_DEVICE_TABLE(pci, specialx_pci_tbl);
module_init(specialix_init_module);
module_exit(specialix_exit_module);
MODULE_LICENSE("GPL");
MODULE_ALIAS_CHARDEV_MAJOR(SPECIALIX_NORMAL_MAJOR);

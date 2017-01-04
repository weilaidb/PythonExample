#define DRIVER_AUTHOR "Tilman Schmidt"
#define DRIVER_DESC "Serial Driver for Gigaset 307x using Siemens M101"
#define GIGASET_MINORS     1
#define GIGASET_MINOR      0
#define GIGASET_MODULENAME "ser_gigaset"
#define GIGASET_DEVNAME    "ttyGS"
#define IF_WRITEBUF 264
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE("GPL");
MODULE_ALIAS_LDISC(N_GIGASET_M101);
static int startmode = SM_ISDN;
module_param(startmode, int, S_IRUGO);
MODULE_PARM_DESC(startmode, "initial operation mode");
static int cidmode = 1;
module_param(cidmode, int, S_IRUGO);
MODULE_PARM_DESC(cidmode, "stay in CID mode when idle");
static struct gigaset_driver *driver;
struct ser_cardstate ;
static struct platform_driver device_driver = ;
static void flush_send_queue(struct cardstate *);
static int write_modem(struct cardstate *cs)
static int send_cb(struct cardstate *cs)
static void gigaset_modem_fill(unsigned long data)
static void flush_send_queue(struct cardstate *cs)
static int gigaset_write_cmd(struct cardstate *cs, struct cmdbuf_t *cb)
static int gigaset_write_room(struct cardstate *cs)
static int gigaset_chars_in_buffer(struct cardstate *cs)
static int gigaset_brkchars(struct cardstate *cs, const unsigned char buf[6])
static int gigaset_init_bchannel(struct bc_state *bcs)
static int gigaset_close_bchannel(struct bc_state *bcs)
static int gigaset_initbcshw(struct bc_state *bcs)
static int gigaset_freebcshw(struct bc_state *bcs)
static void gigaset_reinitbcshw(struct bc_state *bcs)
static void gigaset_freecshw(struct cardstate *cs)
static void gigaset_device_release(struct device *dev)
static int gigaset_initcshw(struct cardstate *cs)
static int gigaset_set_modem_ctrl(struct cardstate *cs, unsigned old_state,
unsigned new_state)
static int gigaset_baud_rate(struct cardstate *cs, unsigned cflag)
static int gigaset_set_line_ctrl(struct cardstate *cs, unsigned cflag)
static const struct gigaset_ops ops = ;
static struct cardstate *cs_get(struct tty_struct *tty)
static void cs_put(struct cardstate *cs)
static int
gigaset_tty_open(struct tty_struct *tty)
static void
gigaset_tty_close(struct tty_struct *tty)
static int gigaset_tty_hangup(struct tty_struct *tty)
static ssize_t
gigaset_tty_read(struct tty_struct *tty, struct file *file,
unsigned char __user *buf, size_t count)
static ssize_t
gigaset_tty_write(struct tty_struct *tty, struct file *file,
const unsigned char *buf, size_t count)
static int
gigaset_tty_ioctl(struct tty_struct *tty, struct file *file,
unsigned int cmd, unsigned long arg)
static void
gigaset_tty_receive(struct tty_struct *tty, const unsigned char *buf,
char *cflags, int count)
static void
gigaset_tty_wakeup(struct tty_struct *tty)
static struct tty_ldisc_ops gigaset_ldisc = ;
static int __init ser_gigaset_init(void)
static void __exit ser_gigaset_exit(void)
module_init(ser_gigaset_init);
module_exit(ser_gigaset_exit);

struct ttyprintk_port ;
static struct ttyprintk_port tpk_port;
#define TPK_STR_SIZE 508
#define TPK_MAX_ROOM 4096
static const char *tpk_tag = "[U] ";
static int tpk_curr;
static int tpk_printk(const unsigned char *buf, int count)
static int tpk_open(struct tty_struct *tty, struct file *filp)
static void tpk_close(struct tty_struct *tty, struct file *filp)
static int tpk_write(struct tty_struct *tty,
const unsigned char *buf, int count)
static int tpk_write_room(struct tty_struct *tty)
static int tpk_ioctl(struct tty_struct *tty,
unsigned int cmd, unsigned long arg)
static const struct tty_operations ttyprintk_ops = ;
struct tty_port_operations null_ops = ;
static struct tty_driver *ttyprintk_driver;
static int __init ttyprintk_init(void)
module_init(ttyprintk_init);

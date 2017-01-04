MODULE_AUTHOR("Vojtech Pavlik <vojtech@ucw.cz>");
MODULE_DESCRIPTION("Input device TTY line discipline");
MODULE_LICENSE("GPL");
MODULE_ALIAS_LDISC(N_MOUSE);
#define SERPORT_BUSY	1
#define SERPORT_ACTIVE	2
#define SERPORT_DEAD	3
struct serport ;
static int serport_serio_write(struct serio *serio, unsigned char data)
static int serport_serio_open(struct serio *serio)
static void serport_serio_close(struct serio *serio)
static int serport_ldisc_open(struct tty_struct *tty)
static void serport_ldisc_close(struct tty_struct *tty)
static void serport_ldisc_receive(struct tty_struct *tty, const unsigned char *cp, char *fp, int count)
static ssize_t serport_ldisc_read(struct tty_struct * tty, struct file * file, unsigned char __user * buf, size_t nr)
static int serport_ldisc_ioctl(struct tty_struct * tty, struct file * file, unsigned int cmd, unsigned long arg)
static void serport_ldisc_write_wakeup(struct tty_struct * tty)
static struct tty_ldisc_ops serport_ldisc = ;
static int __init serport_init(void)
static void __exit serport_exit(void)
module_init(serport_init);
module_exit(serport_exit);

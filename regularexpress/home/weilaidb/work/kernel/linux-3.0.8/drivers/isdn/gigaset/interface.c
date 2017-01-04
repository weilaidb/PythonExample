static int if_lock(struct cardstate *cs, int *arg)
static int if_version(struct cardstate *cs, unsigned arg[4])
static int if_config(struct cardstate *cs, int *arg)
static int  if_open(struct tty_struct *tty, struct file *filp);
static void if_close(struct tty_struct *tty, struct file *filp);
static int  if_ioctl(struct tty_struct *tty,
unsigned int cmd, unsigned long arg);
static int  if_write_room(struct tty_struct *tty);
static int  if_chars_in_buffer(struct tty_struct *tty);
static void if_throttle(struct tty_struct *tty);
static void if_unthrottle(struct tty_struct *tty);
static void if_set_termios(struct tty_struct *tty, struct ktermios *old);
static int  if_tiocmget(struct tty_struct *tty);
static int  if_tiocmset(struct tty_struct *tty,
unsigned int set, unsigned int clear);
static int  if_write(struct tty_struct *tty,
const unsigned char *buf, int count);
static const struct tty_operations if_ops = ;
static int if_open(struct tty_struct *tty, struct file *filp)
static void if_close(struct tty_struct *tty, struct file *filp)
static int if_ioctl(struct tty_struct *tty,
unsigned int cmd, unsigned long arg)
static int if_tiocmget(struct tty_struct *tty)
static int if_tiocmset(struct tty_struct *tty,
unsigned int set, unsigned int clear)
static int if_write(struct tty_struct *tty, const unsigned char *buf, int count)
static int if_write_room(struct tty_struct *tty)
static int if_chars_in_buffer(struct tty_struct *tty)
static void if_throttle(struct tty_struct *tty)
static void if_unthrottle(struct tty_struct *tty)
static void if_set_termios(struct tty_struct *tty, struct ktermios *old)
static void if_wake(unsigned long data)
void gigaset_if_init(struct cardstate *cs)
void gigaset_if_free(struct cardstate *cs)
void gigaset_if_receive(struct cardstate *cs,
unsigned char *buffer, size_t len)
EXPORT_SYMBOL_GPL(gigaset_if_receive);
void gigaset_if_initdriver(struct gigaset_driver *drv, const char *procname,
const char *devname)
void gigaset_if_freedriver(struct gigaset_driver *drv)

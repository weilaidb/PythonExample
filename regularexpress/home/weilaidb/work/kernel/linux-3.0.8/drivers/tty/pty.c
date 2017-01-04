static struct tty_driver *ptm_driver;
static struct tty_driver *pts_driver;
static void pty_close(struct tty_struct *tty, struct file *filp)
static void pty_unthrottle(struct tty_struct *tty)
static int pty_space(struct tty_struct *to)
static int pty_write(struct tty_struct *tty, const unsigned char *buf, int c)
static int pty_write_room(struct tty_struct *tty)
static int pty_chars_in_buffer(struct tty_struct *tty)
static int pty_set_lock(struct tty_struct *tty, int __user *arg)
static int pty_signal(struct tty_struct *tty, int sig)
static void pty_flush_buffer(struct tty_struct *tty)
static int pty_open(struct tty_struct *tty, struct file *filp)
static void pty_set_termios(struct tty_struct *tty,
struct ktermios *old_termios)
int pty_resize(struct tty_struct *tty,  struct winsize *ws)
static int pty_install(struct tty_driver *driver, struct tty_struct *tty)
static int pty_bsd_ioctl(struct tty_struct *tty,
unsigned int cmd, unsigned long arg)
static int legacy_count = CONFIG_LEGACY_PTY_COUNT;
module_param(legacy_count, int, 0);
static const struct tty_operations master_pty_ops_bsd = ;
static const struct tty_operations slave_pty_ops_bsd = ;
static void __init legacy_pty_init(void)
static inline void legacy_pty_init(void)
int pty_limit = NR_UNIX98_PTY_DEFAULT;
static int pty_limit_min;
static int pty_limit_max = NR_UNIX98_PTY_MAX;
static int tty_count;
static int pty_count;
static inline void pty_inc_count(void)
static inline void pty_dec_count(void)
static struct cdev ptmx_cdev;
static struct ctl_table pty_table[] = ;
static struct ctl_table pty_kern_table[] = ;
static struct ctl_table pty_root_table[] = ;
static int pty_unix98_ioctl(struct tty_struct *tty,
unsigned int cmd, unsigned long arg)
static struct tty_struct *ptm_unix98_lookup(struct tty_driver *driver,
struct inode *ptm_inode, int idx)
static struct tty_struct *pts_unix98_lookup(struct tty_driver *driver,
struct inode *pts_inode, int idx)
static void pty_unix98_shutdown(struct tty_struct *tty)
static int pty_unix98_install(struct tty_driver *driver, struct tty_struct *tty)
static void pty_unix98_remove(struct tty_driver *driver, struct tty_struct *tty)
static const struct tty_operations ptm_unix98_ops = ;
static const struct tty_operations pty_unix98_ops = ;
static int ptmx_open(struct inode *inode, struct file *filp)
static struct file_operations ptmx_fops;
static void __init unix98_pty_init(void)
static inline void unix98_pty_init(void)
static int __init pty_init(void)
module_init(pty_init);

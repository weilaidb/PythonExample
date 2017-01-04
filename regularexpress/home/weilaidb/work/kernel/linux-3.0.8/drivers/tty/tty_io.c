#undef TTY_DEBUG_HANGUP
#define TTY_PARANOIA_CHECK 1
#define CHECK_TTY_COUNT 1
struct ktermios tty_std_termios = ;
EXPORT_SYMBOL(tty_std_termios);
LIST_HEAD(tty_drivers);
DEFINE_MUTEX(tty_mutex);
EXPORT_SYMBOL(tty_mutex);
DEFINE_SPINLOCK(tty_files_lock);
static ssize_t tty_read(struct file *, char __user *, size_t, loff_t *);
static ssize_t tty_write(struct file *, const char __user *, size_t, loff_t *);
ssize_t redirected_tty_write(struct file *, const char __user *,
size_t, loff_t *);
static unsigned int tty_poll(struct file *, poll_table *);
static int tty_open(struct inode *, struct file *);
long tty_ioctl(struct file *file, unsigned int cmd, unsigned long arg);
static long tty_compat_ioctl(struct file *file, unsigned int cmd,
unsigned long arg);
#define tty_compat_ioctl NULL
static int __tty_fasync(int fd, struct file *filp, int on);
static int tty_fasync(int fd, struct file *filp, int on);
static void release_tty(struct tty_struct *tty, int idx);
static void __proc_set_tty(struct task_struct *tsk, struct tty_struct *tty);
static void proc_set_tty(struct task_struct *tsk, struct tty_struct *tty);
struct tty_struct *alloc_tty_struct(void)
void free_tty_struct(struct tty_struct *tty)
static inline struct tty_struct *file_tty(struct file *file)
int tty_add_file(struct tty_struct *tty, struct file *file)
void tty_del_file(struct file *file)
#define TTY_NUMBER(tty) ((tty)->index + (tty)->driver->name_base)
char *tty_name(struct tty_struct *tty, char *buf)
EXPORT_SYMBOL(tty_name);
int tty_paranoia_check(struct tty_struct *tty, struct inode *inode,
const char *routine)
static int check_tty_count(struct tty_struct *tty, const char *routine)
static struct tty_driver *get_tty_driver(dev_t device, int *index)
struct tty_driver *tty_find_polling_driver(char *name, int *line)
EXPORT_SYMBOL_GPL(tty_find_polling_driver);
int tty_check_change(struct tty_struct *tty)
EXPORT_SYMBOL(tty_check_change);
static ssize_t hung_up_tty_read(struct file *file, char __user *buf,
size_t count, loff_t *ppos)
static ssize_t hung_up_tty_write(struct file *file, const char __user *buf,
size_t count, loff_t *ppos)
static unsigned int hung_up_tty_poll(struct file *filp, poll_table *wait)
static long hung_up_tty_ioctl(struct file *file, unsigned int cmd,
unsigned long arg)
static long hung_up_tty_compat_ioctl(struct file *file,
unsigned int cmd, unsigned long arg)
static const struct file_operations tty_fops = ;
static const struct file_operations console_fops = ;
static const struct file_operations hung_up_tty_fops = ;
static DEFINE_SPINLOCK(redirect_lock);
static struct file *redirect;
void tty_wakeup(struct tty_struct *tty)
EXPORT_SYMBOL_GPL(tty_wakeup);
void __tty_hangup(struct tty_struct *tty)
static void do_tty_hangup(struct work_struct *work)
void tty_hangup(struct tty_struct *tty)
EXPORT_SYMBOL(tty_hangup);
void tty_vhangup(struct tty_struct *tty)
EXPORT_SYMBOL(tty_vhangup);
void tty_vhangup_self(void)
int tty_hung_up_p(struct file *filp)
EXPORT_SYMBOL(tty_hung_up_p);
static void session_clear_tty(struct pid *session)
void disassociate_ctty(int on_exit)
void no_tty(void)
void stop_tty(struct tty_struct *tty)
EXPORT_SYMBOL(stop_tty);
void start_tty(struct tty_struct *tty)
EXPORT_SYMBOL(start_tty);
static ssize_t tty_read(struct file *file, char __user *buf, size_t count,
loff_t *ppos)
void tty_write_unlock(struct tty_struct *tty)
__releases(&tty->atomic_write_lock)
int tty_write_lock(struct tty_struct *tty, int ndelay)
__acquires(&tty->atomic_write_lock)
static inline ssize_t do_tty_write(
ssize_t (*write)(struct tty_struct *, struct file *, const unsigned char *, size_t),
struct tty_struct *tty,
struct file *file,
const char __user *buf,
size_t count)
void tty_write_message(struct tty_struct *tty, char *msg)
static ssize_t tty_write(struct file *file, const char __user *buf,
size_t count, loff_t *ppos)
ssize_t redirected_tty_write(struct file *file, const char __user *buf,
size_t count, loff_t *ppos)
static char ptychar[] = "pqrstuvwxyzabcde";
static void pty_line_name(struct tty_driver *driver, int index, char *p)
static void tty_line_name(struct tty_driver *driver, int index, char *p)
static struct tty_struct *tty_driver_lookup_tty(struct tty_driver *driver,
struct inode *inode, int idx)
int tty_init_termios(struct tty_struct *tty)
EXPORT_SYMBOL_GPL(tty_init_termios);
static int tty_driver_install_tty(struct tty_driver *driver,
struct tty_struct *tty)
void tty_driver_remove_tty(struct tty_driver *driver, struct tty_struct *tty)
static int tty_reopen(struct tty_struct *tty)
struct tty_struct *tty_init_dev(struct tty_driver *driver, int idx,
int first_ok)
void tty_free_termios(struct tty_struct *tty)
EXPORT_SYMBOL(tty_free_termios);
void tty_shutdown(struct tty_struct *tty)
EXPORT_SYMBOL(tty_shutdown);
static void release_one_tty(struct work_struct *work)
static void queue_release_one_tty(struct kref *kref)
void tty_kref_put(struct tty_struct *tty)
EXPORT_SYMBOL(tty_kref_put);
static void release_tty(struct tty_struct *tty, int idx)
int tty_release(struct inode *inode, struct file *filp)
static int tty_open(struct inode *inode, struct file *filp)
static unsigned int tty_poll(struct file *filp, poll_table *wait)
static int __tty_fasync(int fd, struct file *filp, int on)
static int tty_fasync(int fd, struct file *filp, int on)
static int tiocsti(struct tty_struct *tty, char __user *p)
static int tiocgwinsz(struct tty_struct *tty, struct winsize __user *arg)
int tty_do_resize(struct tty_struct *tty, struct winsize *ws)
static int tiocswinsz(struct tty_struct *tty, struct winsize __user *arg)
static int tioccons(struct file *file)
static int fionbio(struct file *file, int __user *p)
static int tiocsctty(struct tty_struct *tty, int arg)
struct pid *tty_get_pgrp(struct tty_struct *tty)
EXPORT_SYMBOL_GPL(tty_get_pgrp);
static int tiocgpgrp(struct tty_struct *tty, struct tty_struct *real_tty, pid_t __user *p)
static int tiocspgrp(struct tty_struct *tty, struct tty_struct *real_tty, pid_t __user *p)
static int tiocgsid(struct tty_struct *tty, struct tty_struct *real_tty, pid_t __user *p)
static int tiocsetd(struct tty_struct *tty, int __user *p)
static int send_break(struct tty_struct *tty, unsigned int duration)
static int tty_tiocmget(struct tty_struct *tty, int __user *p)
static int tty_tiocmset(struct tty_struct *tty, unsigned int cmd,
unsigned __user *p)
static int tty_tiocgicount(struct tty_struct *tty, void __user *arg)
struct tty_struct *tty_pair_get_tty(struct tty_struct *tty)
EXPORT_SYMBOL(tty_pair_get_tty);
struct tty_struct *tty_pair_get_pty(struct tty_struct *tty)
EXPORT_SYMBOL(tty_pair_get_pty);
long tty_ioctl(struct file *file, unsigned int cmd, unsigned long arg)
static long tty_compat_ioctl(struct file *file, unsigned int cmd,
unsigned long arg)
void __do_SAK(struct tty_struct *tty)
static void do_SAK_work(struct work_struct *work)
void do_SAK(struct tty_struct *tty)
EXPORT_SYMBOL(do_SAK);
static int dev_match_devt(struct device *dev, void *data)
static struct device *tty_get_device(struct tty_struct *tty)
void initialize_tty_struct(struct tty_struct *tty,
struct tty_driver *driver, int idx)
void deinitialize_tty_struct(struct tty_struct *tty)
int tty_put_char(struct tty_struct *tty, unsigned char ch)
EXPORT_SYMBOL_GPL(tty_put_char);
struct class *tty_class;
struct device *tty_register_device(struct tty_driver *driver, unsigned index,
struct device *device)
EXPORT_SYMBOL(tty_register_device);
void tty_unregister_device(struct tty_driver *driver, unsigned index)
EXPORT_SYMBOL(tty_unregister_device);
struct tty_driver *alloc_tty_driver(int lines)
EXPORT_SYMBOL(alloc_tty_driver);
static void destruct_tty_driver(struct kref *kref)
void tty_driver_kref_put(struct tty_driver *driver)
EXPORT_SYMBOL(tty_driver_kref_put);
void tty_set_operations(struct tty_driver *driver,
const struct tty_operations *op)
;
EXPORT_SYMBOL(tty_set_operations);
void put_tty_driver(struct tty_driver *d)
EXPORT_SYMBOL(put_tty_driver);
int tty_register_driver(struct tty_driver *driver)
EXPORT_SYMBOL(tty_register_driver);
int tty_unregister_driver(struct tty_driver *driver)
EXPORT_SYMBOL(tty_unregister_driver);
dev_t tty_devnum(struct tty_struct *tty)
EXPORT_SYMBOL(tty_devnum);
void proc_clear_tty(struct task_struct *p)
static void __proc_set_tty(struct task_struct *tsk, struct tty_struct *tty)
static void proc_set_tty(struct task_struct *tsk, struct tty_struct *tty)
struct tty_struct *get_current_tty(void)
EXPORT_SYMBOL_GPL(get_current_tty);
void tty_default_fops(struct file_operations *fops)
void __init console_init(void)
static char *tty_devnode(struct device *dev, mode_t *mode)
static int __init tty_class_init(void)
postcore_initcall(tty_class_init);
static struct cdev tty_cdev, console_cdev;
static ssize_t show_cons_active(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(active, S_IRUGO, show_cons_active, NULL);
static struct device *consdev;
void console_sysfs_notify(void)
int __init tty_init(void)

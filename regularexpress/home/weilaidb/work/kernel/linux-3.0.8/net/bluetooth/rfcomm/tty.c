#define RFCOMM_TTY_MAGIC 0x6d02
#define RFCOMM_TTY_PORTS RFCOMM_MAX_DEV
#define RFCOMM_TTY_MAJOR 216
#define RFCOMM_TTY_MINOR 0
static struct tty_driver *rfcomm_tty_driver;
struct rfcomm_dev ;
static LIST_HEAD(rfcomm_dev_list);
static DEFINE_RWLOCK(rfcomm_dev_lock);
static void rfcomm_dev_data_ready(struct rfcomm_dlc *dlc, struct sk_buff *skb);
static void rfcomm_dev_state_change(struct rfcomm_dlc *dlc, int err);
static void rfcomm_dev_modem_status(struct rfcomm_dlc *dlc, u8 v24_sig);
static void rfcomm_tty_wakeup(unsigned long arg);
static void rfcomm_dev_destruct(struct rfcomm_dev *dev)
static inline void rfcomm_dev_hold(struct rfcomm_dev *dev)
static inline void rfcomm_dev_put(struct rfcomm_dev *dev)
static struct rfcomm_dev *__rfcomm_dev_get(int id)
static inline struct rfcomm_dev *rfcomm_dev_get(int id)
static struct device *rfcomm_get_device(struct rfcomm_dev *dev)
static ssize_t show_address(struct device *tty_dev, struct device_attribute *attr, char *buf)
static ssize_t show_channel(struct device *tty_dev, struct device_attribute *attr, char *buf)
static DEVICE_ATTR(address, S_IRUGO, show_address, NULL);
static DEVICE_ATTR(channel, S_IRUGO, show_channel, NULL);
static int rfcomm_dev_add(struct rfcomm_dev_req *req, struct rfcomm_dlc *dlc)
static void rfcomm_dev_del(struct rfcomm_dev *dev)
static inline unsigned int rfcomm_room(struct rfcomm_dlc *dlc)
static void rfcomm_wfree(struct sk_buff *skb)
static inline void rfcomm_set_owner_w(struct sk_buff *skb, struct rfcomm_dev *dev)
static struct sk_buff *rfcomm_wmalloc(struct rfcomm_dev *dev, unsigned long size, gfp_t priority)
#define NOCAP_FLAGS ((1 << RFCOMM_REUSE_DLC) | (1 << RFCOMM_RELEASE_ONHUP))
static int rfcomm_create_dev(struct sock *sk, void __user *arg)
static int rfcomm_release_dev(void __user *arg)
static int rfcomm_get_dev_list(void __user *arg)
static int rfcomm_get_dev_info(void __user *arg)
int rfcomm_dev_ioctl(struct sock *sk, unsigned int cmd, void __user *arg)
static void rfcomm_dev_data_ready(struct rfcomm_dlc *dlc, struct sk_buff *skb)
static void rfcomm_dev_state_change(struct rfcomm_dlc *dlc, int err)
static void rfcomm_dev_modem_status(struct rfcomm_dlc *dlc, u8 v24_sig)
static void rfcomm_tty_wakeup(unsigned long arg)
static void rfcomm_tty_copy_pending(struct rfcomm_dev *dev)
static int rfcomm_tty_open(struct tty_struct *tty, struct file *filp)
static void rfcomm_tty_close(struct tty_struct *tty, struct file *filp)
static int rfcomm_tty_write(struct tty_struct *tty, const unsigned char *buf, int count)
static int rfcomm_tty_write_room(struct tty_struct *tty)
static int rfcomm_tty_ioctl(struct tty_struct *tty, unsigned int cmd, unsigned long arg)
static void rfcomm_tty_set_termios(struct tty_struct *tty, struct ktermios *old)
static void rfcomm_tty_throttle(struct tty_struct *tty)
static void rfcomm_tty_unthrottle(struct tty_struct *tty)
static int rfcomm_tty_chars_in_buffer(struct tty_struct *tty)
static void rfcomm_tty_flush_buffer(struct tty_struct *tty)
static void rfcomm_tty_send_xchar(struct tty_struct *tty, char ch)
static void rfcomm_tty_wait_until_sent(struct tty_struct *tty, int timeout)
static void rfcomm_tty_hangup(struct tty_struct *tty)
static int rfcomm_tty_tiocmget(struct tty_struct *tty)
static int rfcomm_tty_tiocmset(struct tty_struct *tty, unsigned int set, unsigned int clear)
static const struct tty_operations rfcomm_ops = ;
int __init rfcomm_init_ttys(void)
void rfcomm_cleanup_ttys(void)

MODULE_DESCRIPTION("CAPI4Linux: Userspace /dev/capi20 interface");
MODULE_AUTHOR("Carsten Paeth");
MODULE_LICENSE("GPL");
static DEFINE_MUTEX(capi_mutex);
static struct class *capi_class;
static int capi_major = 68;
module_param_named(major, capi_major, uint, 0);
#define CAPINC_NR_PORTS		32
#define CAPINC_MAX_PORTS	256
static int capi_ttyminors = CAPINC_NR_PORTS;
module_param_named(ttyminors, capi_ttyminors, uint, 0);
#define CAPINC_MAX_RECVQUEUE	10
#define CAPINC_MAX_SENDQUEUE	10
#define CAPI_MAX_BLKSIZE	2048
struct capidev;
struct capincci;
struct capiminor;
struct ackqueue_entry ;
struct capiminor ;
struct capincci ;
struct capidev ;
static DEFINE_MUTEX(capidev_list_lock);
static LIST_HEAD(capidev_list);
static DEFINE_SPINLOCK(capiminors_lock);
static struct capiminor **capiminors;
static struct tty_driver *capinc_tty_driver;
static int capiminor_add_ack(struct capiminor *mp, u16 datahandle)
static int capiminor_del_ack(struct capiminor *mp, u16 datahandle)
static void capiminor_del_all_ack(struct capiminor *mp)
static const struct tty_port_operations capiminor_port_ops;
static struct capiminor *capiminor_alloc(struct capi20_appl *ap, u32 ncci)
static void capiminor_destroy(struct kref *kref)
static struct capiminor *capiminor_get(unsigned int minor)
static inline void capiminor_put(struct capiminor *mp)
static void capiminor_free(struct capiminor *mp)
static void capincci_alloc_minor(struct capidev *cdev, struct capincci *np)
static void capincci_free_minor(struct capincci *np)
static inline unsigned int capincci_minor_opencount(struct capincci *np)
static inline void
capincci_alloc_minor(struct capidev *cdev, struct capincci *np)
static inline void capincci_free_minor(struct capincci *np)
static inline unsigned int capincci_minor_opencount(struct capincci *np)
static struct capincci *capincci_alloc(struct capidev *cdev, u32 ncci)
static void capincci_free(struct capidev *cdev, u32 ncci)
static struct capincci *capincci_find(struct capidev *cdev, u32 ncci)
static struct sk_buff *
gen_data_b3_resp_for(struct capiminor *mp, struct sk_buff *skb)
static int handle_recv_skb(struct capiminor *mp, struct sk_buff *skb)
static void handle_minor_recv(struct capiminor *mp)
static void handle_minor_send(struct capiminor *mp)
static void capi_recv_message(struct capi20_appl *ap, struct sk_buff *skb)
static ssize_t
capi_read(struct file *file, char __user *buf, size_t count, loff_t *ppos)
static ssize_t
capi_write(struct file *file, const char __user *buf, size_t count, loff_t *ppos)
static unsigned int
capi_poll(struct file *file, poll_table * wait)
static int
capi_ioctl(struct file *file, unsigned int cmd, unsigned long arg)
static long
capi_unlocked_ioctl(struct file *file, unsigned int cmd, unsigned long arg)
static int capi_open(struct inode *inode, struct file *file)
static int capi_release(struct inode *inode, struct file *file)
static const struct file_operations capi_fops =
;
static int
capinc_tty_install(struct tty_driver *driver, struct tty_struct *tty)
static void capinc_tty_cleanup(struct tty_struct *tty)
static int capinc_tty_open(struct tty_struct *tty, struct file *filp)
static void capinc_tty_close(struct tty_struct *tty, struct file *filp)
static int capinc_tty_write(struct tty_struct *tty,
const unsigned char *buf, int count)
static int capinc_tty_put_char(struct tty_struct *tty, unsigned char ch)
static void capinc_tty_flush_chars(struct tty_struct *tty)
static int capinc_tty_write_room(struct tty_struct *tty)
static int capinc_tty_chars_in_buffer(struct tty_struct *tty)
static int capinc_tty_ioctl(struct tty_struct *tty,
unsigned int cmd, unsigned long arg)
static void capinc_tty_set_termios(struct tty_struct *tty, struct ktermios * old)
static void capinc_tty_throttle(struct tty_struct *tty)
static void capinc_tty_unthrottle(struct tty_struct *tty)
static void capinc_tty_stop(struct tty_struct *tty)
static void capinc_tty_start(struct tty_struct *tty)
static void capinc_tty_hangup(struct tty_struct *tty)
static int capinc_tty_break_ctl(struct tty_struct *tty, int state)
static void capinc_tty_flush_buffer(struct tty_struct *tty)
static void capinc_tty_set_ldisc(struct tty_struct *tty)
static void capinc_tty_send_xchar(struct tty_struct *tty, char ch)
static const struct tty_operations capinc_ops = ;
static int __init capinc_tty_init(void)
static void __exit capinc_tty_exit(void)
static inline int capinc_tty_init(void)
static inline void capinc_tty_exit(void)
static int capi20_proc_show(struct seq_file *m, void *v)
static int capi20_proc_open(struct inode *inode, struct file *file)
static const struct file_operations capi20_proc_fops = ;
static int capi20ncci_proc_show(struct seq_file *m, void *v)
static int capi20ncci_proc_open(struct inode *inode, struct file *file)
static const struct file_operations capi20ncci_proc_fops = ;
static void __init proc_init(void)
static void __exit proc_exit(void)
static int __init capi_init(void)
static void __exit capi_exit(void)
module_init(capi_init);
module_exit(capi_exit);

#define NR_3215		    1
#define NR_3215_REQ	    (4*NR_3215)
#define RAW3215_BUFFER_SIZE 65536
#define RAW3215_INBUF_SIZE  256
#define RAW3215_MIN_SPACE   128
#define RAW3215_MIN_WRITE   1024
#define RAW3215_MAX_BYTES   3968
#define RAW3215_MAX_NEWLINE 50
#define RAW3215_NR_CCWS	    3
#define RAW3215_TIMEOUT	    HZ/10
#define RAW3215_FIXED	    1
#define RAW3215_ACTIVE	    2
#define RAW3215_WORKING	    4
#define RAW3215_THROTTLED   8
#define RAW3215_STOPPED	    16
#define RAW3215_CLOSING	    32
#define RAW3215_TIMER_RUNS  64
#define RAW3215_FLUSHING    128
#define RAW3215_FROZEN	    256
#define TAB_STOP_SIZE	    8
enum raw3215_type ;
struct raw3215_req  __attribute__ ((aligned(8)));
struct raw3215_info ;
static struct raw3215_info *raw3215[NR_3215];
static DEFINE_SPINLOCK(raw3215_device_lock);
static struct raw3215_req *raw3215_freelist;
static spinlock_t raw3215_freelist_lock;
static struct tty_driver *tty3215_driver;
static inline struct raw3215_req *raw3215_alloc_req(void)
static inline void raw3215_free_req(struct raw3215_req *req)
static void raw3215_mk_read_req(struct raw3215_info *raw)
static void raw3215_mk_write_req(struct raw3215_info *raw)
static void raw3215_start_io(struct raw3215_info *raw)
static void raw3215_timeout(unsigned long __data)
static inline void raw3215_try_io(struct raw3215_info *raw)
static void raw3215_next_io(struct raw3215_info *raw)
static void raw3215_irq(struct ccw_device *cdev, unsigned long intparm,
struct irb *irb)
static void raw3215_drop_line(struct raw3215_info *raw)
static void raw3215_make_room(struct raw3215_info *raw, unsigned int length)
static void raw3215_write(struct raw3215_info *raw, const char *str,
unsigned int length)
static void raw3215_putchar(struct raw3215_info *raw, unsigned char ch)
static void raw3215_flush_buffer(struct raw3215_info *raw)
static int raw3215_startup(struct raw3215_info *raw)
static void raw3215_shutdown(struct raw3215_info *raw)
static int raw3215_probe (struct ccw_device *cdev)
static void raw3215_remove (struct ccw_device *cdev)
static int raw3215_set_online (struct ccw_device *cdev)
static int raw3215_set_offline (struct ccw_device *cdev)
static int raw3215_pm_stop(struct ccw_device *cdev)
static int raw3215_pm_start(struct ccw_device *cdev)
static struct ccw_device_id raw3215_id[] = ;
static struct ccw_driver raw3215_ccw_driver = ;
static void con3215_write(struct console *co, const char *str,
unsigned int count)
static struct tty_driver *con3215_device(struct console *c, int *index)
static void con3215_flush(void)
static int con3215_notify(struct notifier_block *self,
unsigned long event, void *data)
static struct notifier_block on_panic_nb = ;
static struct notifier_block on_reboot_nb = ;
static struct console con3215 = ;
static int __init con3215_init(void)
console_initcall(con3215_init);
static int tty3215_open(struct tty_struct *tty, struct file * filp)
static void tty3215_close(struct tty_struct *tty, struct file * filp)
static int tty3215_write_room(struct tty_struct *tty)
static int tty3215_write(struct tty_struct * tty,
const unsigned char *buf, int count)
static int tty3215_put_char(struct tty_struct *tty, unsigned char ch)
static void tty3215_flush_chars(struct tty_struct *tty)
static int tty3215_chars_in_buffer(struct tty_struct *tty)
static void tty3215_flush_buffer(struct tty_struct *tty)
static void tty3215_throttle(struct tty_struct * tty)
static void tty3215_unthrottle(struct tty_struct * tty)
static void tty3215_stop(struct tty_struct *tty)
static void tty3215_start(struct tty_struct *tty)
static const struct tty_operations tty3215_ops = ;
static int __init tty3215_init(void)
static void __exit tty3215_exit(void)
module_init(tty3215_init);
module_exit(tty3215_exit);

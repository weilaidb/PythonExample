#define SCLP_VT220_MAJOR		TTY_MAJOR
#define SCLP_VT220_MINOR		65
#define SCLP_VT220_DRIVER_NAME		"sclp_vt220"
#define SCLP_VT220_DEVICE_NAME		"ttysclp"
#define SCLP_VT220_CONSOLE_NAME		"ttyS"
#define SCLP_VT220_CONSOLE_INDEX	1
#define SCLP_VT220_BUF_SIZE		80
struct sclp_vt220_request ;
struct sclp_vt220_sccb ;
#define SCLP_VT220_MAX_CHARS_PER_BUFFER	(PAGE_SIZE - \
sizeof(struct sclp_vt220_request) - \
sizeof(struct sclp_vt220_sccb))
static struct tty_driver *sclp_vt220_driver;
static struct tty_struct *sclp_vt220_tty;
static spinlock_t sclp_vt220_lock;
static struct list_head sclp_vt220_empty;
static struct list_head sclp_vt220_outqueue;
static int sclp_vt220_suspended;
static int sclp_vt220_queue_running;
static struct timer_list sclp_vt220_timer;
static struct sclp_vt220_request *sclp_vt220_current_request;
static int sclp_vt220_buffered_chars;
static int __initdata sclp_vt220_init_count;
static int sclp_vt220_flush_later;
static void sclp_vt220_receiver_fn(struct evbuf_header *evbuf);
static void sclp_vt220_pm_event_fn(struct sclp_register *reg,
enum sclp_pm_event sclp_pm_event);
static int __sclp_vt220_emit(struct sclp_vt220_request *request);
static void sclp_vt220_emit_current(void);
static struct sclp_register sclp_vt220_register = ;
static void
sclp_vt220_process_queue(struct sclp_vt220_request *request)
#define SCLP_BUFFER_MAX_RETRY		1
static void
sclp_vt220_callback(struct sclp_req *request, void *data)
static int
__sclp_vt220_emit(struct sclp_vt220_request *request)
static void
sclp_vt220_emit_current(void)
#define SCLP_NORMAL_WRITE	0x00
static struct sclp_vt220_request *
sclp_vt220_initialize_page(void *page)
static inline unsigned int
sclp_vt220_space_left(struct sclp_vt220_request *request)
static inline unsigned int
sclp_vt220_chars_stored(struct sclp_vt220_request *request)
static int
sclp_vt220_add_msg(struct sclp_vt220_request *request,
const unsigned char *msg, int count, int convertlf)
static void
sclp_vt220_timeout(unsigned long data)
#define BUFFER_MAX_DELAY	HZ/20
static int
__sclp_vt220_write(const unsigned char *buf, int count, int do_schedule,
int convertlf, int may_fail)
static int
sclp_vt220_write(struct tty_struct *tty, const unsigned char *buf, int count)
#define SCLP_VT220_SESSION_ENDED	0x01
#define	SCLP_VT220_SESSION_STARTED	0x80
#define SCLP_VT220_SESSION_DATA		0x00
static void
sclp_vt220_receiver_fn(struct evbuf_header *evbuf)
static int
sclp_vt220_open(struct tty_struct *tty, struct file *filp)
static void
sclp_vt220_close(struct tty_struct *tty, struct file *filp)
static int
sclp_vt220_put_char(struct tty_struct *tty, unsigned char ch)
static void
sclp_vt220_flush_chars(struct tty_struct *tty)
static int
sclp_vt220_write_room(struct tty_struct *tty)
static int
sclp_vt220_chars_in_buffer(struct tty_struct *tty)
static void
sclp_vt220_flush_buffer(struct tty_struct *tty)
static void __init __sclp_vt220_free_pages(void)
static void __init __sclp_vt220_cleanup(void)
static int __init __sclp_vt220_init(int num_pages)
static const struct tty_operations sclp_vt220_ops = ;
static int __init sclp_vt220_tty_init(void)
__initcall(sclp_vt220_tty_init);
static void __sclp_vt220_flush_buffer(void)
static void sclp_vt220_resume(void)
static void sclp_vt220_suspend(void)
static void sclp_vt220_pm_event_fn(struct sclp_register *reg,
enum sclp_pm_event sclp_pm_event)
static void
sclp_vt220_con_write(struct console *con, const char *buf, unsigned int count)
static struct tty_driver *
sclp_vt220_con_device(struct console *c, int *index)
static int
sclp_vt220_notify(struct notifier_block *self,
unsigned long event, void *data)
static struct notifier_block on_panic_nb = ;
static struct notifier_block on_reboot_nb = ;
static struct console sclp_vt220_console =
;
static int __init
sclp_vt220_con_init(void)
console_initcall(sclp_vt220_con_init);

#define HVC_MAJOR	229
#define HVC_MINOR	0
#define HVC_CLOSE_WAIT (HZ/100)
#define N_OUTBUF	16
#define N_INBUF		16
#define __ALIGNED__ __attribute__((__aligned__(sizeof(long))))
static struct tty_driver *hvc_driver;
static struct task_struct *hvc_task;
static int hvc_kicked;
static int hvc_init(void);
static int sysrq_pressed;
static LIST_HEAD(hvc_structs);
static DEFINE_SPINLOCK(hvc_structs_lock);
static int last_hvc = -1;
static struct hvc_struct *hvc_get_by_index(int index)
static const struct hv_ops *cons_ops[MAX_NR_HVC_CONSOLES];
static uint32_t vtermnos[MAX_NR_HVC_CONSOLES] =
;
static void hvc_console_print(struct console *co, const char *b,
unsigned count)
static struct tty_driver *hvc_console_device(struct console *c, int *index)
static int __init hvc_console_setup(struct console *co, char *options)
static struct console hvc_console = ;
static int __init hvc_console_init(void)
console_initcall(hvc_console_init);
static void destroy_hvc_struct(struct kref *kref)
int hvc_instantiate(uint32_t vtermno, int index, const struct hv_ops *ops)
EXPORT_SYMBOL_GPL(hvc_instantiate);
void hvc_kick(void)
EXPORT_SYMBOL_GPL(hvc_kick);
static void hvc_unthrottle(struct tty_struct *tty)
static int hvc_open(struct tty_struct *tty, struct file * filp)
static void hvc_close(struct tty_struct *tty, struct file * filp)
static void hvc_hangup(struct tty_struct *tty)
static int hvc_push(struct hvc_struct *hp)
static int hvc_write(struct tty_struct *tty, const unsigned char *buf, int count)
static void hvc_set_winsz(struct work_struct *work)
static int hvc_write_room(struct tty_struct *tty)
static int hvc_chars_in_buffer(struct tty_struct *tty)
#define MIN_TIMEOUT		(10)
#define MAX_TIMEOUT		(2000)
static u32 timeout = MIN_TIMEOUT;
#define HVC_POLL_READ	0x00000001
#define HVC_POLL_WRITE	0x00000002
int hvc_poll(struct hvc_struct *hp)
EXPORT_SYMBOL_GPL(hvc_poll);
void __hvc_resize(struct hvc_struct *hp, struct winsize ws)
EXPORT_SYMBOL_GPL(__hvc_resize);
static int khvcd(void *unused)
static const struct tty_operations hvc_ops = ;
struct hvc_struct *hvc_alloc(uint32_t vtermno, int data,
const struct hv_ops *ops,
int outbuf_size)
EXPORT_SYMBOL_GPL(hvc_alloc);
int hvc_remove(struct hvc_struct *hp)
EXPORT_SYMBOL_GPL(hvc_remove);
static int hvc_init(void)
static void __exit hvc_exit(void)
module_exit(hvc_exit);

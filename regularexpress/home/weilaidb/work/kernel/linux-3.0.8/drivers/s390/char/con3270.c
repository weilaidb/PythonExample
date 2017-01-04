#define CON3270_OUTPUT_BUFFER_SIZE 1024
#define CON3270_STRING_PAGES 4
static struct raw3270_fn con3270_fn;
struct con3270 ;
static struct con3270 *condev;
#define CON_UPDATE_ERASE	1
#define CON_UPDATE_LIST		2
#define CON_UPDATE_STATUS	4
#define CON_UPDATE_ALL		8
static void con3270_update(struct con3270 *);
static void con3270_set_timer(struct con3270 *cp, int expires)
static void
con3270_update_status(struct con3270 *cp)
static void
con3270_create_status(struct con3270 *cp)
static void
con3270_update_string(struct con3270 *cp, struct string *s, int nr)
static void
con3270_rebuild_update(struct con3270 *cp)
static struct string *
con3270_alloc_string(struct con3270 *cp, size_t size)
static void
con3270_write_callback(struct raw3270_request *rq, void *data)
static void
con3270_update(struct con3270 *cp)
static void
con3270_read_tasklet(struct raw3270_request *rrq)
static void
con3270_read_callback(struct raw3270_request *rq, void *data)
static void
con3270_issue_read(struct con3270 *cp)
static int
con3270_activate(struct raw3270_view *view)
static void
con3270_deactivate(struct raw3270_view *view)
static int
con3270_irq(struct con3270 *cp, struct raw3270_request *rq, struct irb *irb)
static struct raw3270_fn con3270_fn = ;
static inline void
con3270_cline_add(struct con3270 *cp)
static inline void
con3270_cline_insert(struct con3270 *cp, unsigned char c)
static inline void
con3270_cline_end(struct con3270 *cp)
static void
con3270_write(struct console *co, const char *str, unsigned int count)
static struct tty_driver *
con3270_device(struct console *c, int *index)
static void
con3270_wait_write(struct con3270 *cp)
static void
con3270_flush(void)
static int con3270_notify(struct notifier_block *self,
unsigned long event, void *data)
static struct notifier_block on_panic_nb = ;
static struct notifier_block on_reboot_nb = ;
static struct console con3270 = ;
static int __init
con3270_init(void)
console_initcall(con3270_init);

struct xs_stored_msg ;
struct xs_handle ;
static struct xs_handle xs_state;
static LIST_HEAD(watches);
static DEFINE_SPINLOCK(watches_lock);
static LIST_HEAD(watch_events);
static DEFINE_SPINLOCK(watch_events_lock);
static pid_t xenwatch_pid;
static DEFINE_MUTEX(xenwatch_mutex);
static DECLARE_WAIT_QUEUE_HEAD(watch_events_waitq);
static int get_error(const char *errorstring)
static void *read_reply(enum xsd_sockmsg_type *type, unsigned int *len)
static void transaction_start(void)
static void transaction_end(void)
static void transaction_suspend(void)
static void transaction_resume(void)
void *xenbus_dev_request_and_reply(struct xsd_sockmsg *msg)
EXPORT_SYMBOL(xenbus_dev_request_and_reply);
static void *xs_talkv(struct xenbus_transaction t,
enum xsd_sockmsg_type type,
const struct kvec *iovec,
unsigned int num_vecs,
unsigned int *len)
static void *xs_single(struct xenbus_transaction t,
enum xsd_sockmsg_type type,
const char *string,
unsigned int *len)
static int xs_error(char *reply)
static unsigned int count_strings(const char *strings, unsigned int len)
static char *join(const char *dir, const char *name)
static char **split(char *strings, unsigned int len, unsigned int *num)
char **xenbus_directory(struct xenbus_transaction t,
const char *dir, const char *node, unsigned int *num)
EXPORT_SYMBOL_GPL(xenbus_directory);
int xenbus_exists(struct xenbus_transaction t,
const char *dir, const char *node)
EXPORT_SYMBOL_GPL(xenbus_exists);
void *xenbus_read(struct xenbus_transaction t,
const char *dir, const char *node, unsigned int *len)
EXPORT_SYMBOL_GPL(xenbus_read);
int xenbus_write(struct xenbus_transaction t,
const char *dir, const char *node, const char *string)
EXPORT_SYMBOL_GPL(xenbus_write);
int xenbus_mkdir(struct xenbus_transaction t,
const char *dir, const char *node)
EXPORT_SYMBOL_GPL(xenbus_mkdir);
int xenbus_rm(struct xenbus_transaction t, const char *dir, const char *node)
EXPORT_SYMBOL_GPL(xenbus_rm);
int xenbus_transaction_start(struct xenbus_transaction *t)
EXPORT_SYMBOL_GPL(xenbus_transaction_start);
int xenbus_transaction_end(struct xenbus_transaction t, int abort)
EXPORT_SYMBOL_GPL(xenbus_transaction_end);
int xenbus_scanf(struct xenbus_transaction t,
const char *dir, const char *node, const char *fmt, ...)
EXPORT_SYMBOL_GPL(xenbus_scanf);
int xenbus_printf(struct xenbus_transaction t,
const char *dir, const char *node, const char *fmt, ...)
EXPORT_SYMBOL_GPL(xenbus_printf);
int xenbus_gather(struct xenbus_transaction t, const char *dir, ...)
EXPORT_SYMBOL_GPL(xenbus_gather);
static int xs_watch(const char *path, const char *token)
static int xs_unwatch(const char *path, const char *token)
static struct xenbus_watch *find_watch(const char *token)
int register_xenbus_watch(struct xenbus_watch *watch)
EXPORT_SYMBOL_GPL(register_xenbus_watch);
void unregister_xenbus_watch(struct xenbus_watch *watch)
EXPORT_SYMBOL_GPL(unregister_xenbus_watch);
void xs_suspend(void)
void xs_resume(void)
void xs_suspend_cancel(void)
static int xenwatch_thread(void *unused)
static int process_msg(void)
static int xenbus_thread(void *unused)
int xs_init(void)

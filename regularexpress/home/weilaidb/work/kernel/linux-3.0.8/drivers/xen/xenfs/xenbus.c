struct xenbus_transaction_holder ;
struct read_buffer ;
struct xenbus_file_priv ;
static ssize_t xenbus_file_read(struct file *filp,
char __user *ubuf,
size_t len, loff_t *ppos)
static int queue_reply(struct list_head *queue, const void *data, size_t len)
static void queue_cleanup(struct list_head *list)
struct watch_adapter ;
static void free_watch_adapter(struct watch_adapter *watch)
static struct watch_adapter *alloc_watch_adapter(const char *path,
const char *token)
static void watch_fired(struct xenbus_watch *watch,
const char **vec,
unsigned int len)
static int xenbus_write_transaction(unsigned msg_type,
struct xenbus_file_priv *u)
static int xenbus_write_watch(unsigned msg_type, struct xenbus_file_priv *u)
static ssize_t xenbus_file_write(struct file *filp,
const char __user *ubuf,
size_t len, loff_t *ppos)
static int xenbus_file_open(struct inode *inode, struct file *filp)
static int xenbus_file_release(struct inode *inode, struct file *filp)
static unsigned int xenbus_file_poll(struct file *file, poll_table *wait)
const struct file_operations xenbus_file_ops = ;

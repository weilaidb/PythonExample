extern struct proc_dir_entry *hysdn_proc_entry;
static DEFINE_MUTEX(hysdn_log_mutex);
static void put_log_buffer(hysdn_card * card, char *cp);
struct log_data ;
struct procdata ;
void
hysdn_card_errlog(hysdn_card * card, tErrLogEntry * logp, int maxsize)
void
hysdn_addlog(hysdn_card * card, char *fmt,...)
static void
put_log_buffer(hysdn_card * card, char *cp)
static ssize_t
hysdn_log_write(struct file *file, const char __user *buf, size_t count, loff_t * off)
static ssize_t
hysdn_log_read(struct file *file, char __user *buf, size_t count, loff_t * off)
static int
hysdn_log_open(struct inode *ino, struct file *filep)
static int
hysdn_log_close(struct inode *ino, struct file *filep)
static unsigned int
hysdn_log_poll(struct file *file, poll_table * wait)
static const struct file_operations log_fops =
;
int
hysdn_proclog_init(hysdn_card * card)
void
hysdn_proclog_release(hysdn_card * card)

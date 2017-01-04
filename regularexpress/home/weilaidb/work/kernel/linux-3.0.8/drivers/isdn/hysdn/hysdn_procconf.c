static DEFINE_MUTEX(hysdn_conf_mutex);
#define INFO_OUT_LEN 80
#define CONF_STATE_DETECT 0
#define CONF_STATE_CONF   1
#define CONF_STATE_POF    2
#define CONF_LINE_LEN   255
struct conf_writedata ;
static int
process_line(struct conf_writedata *cnf)
static ssize_t
hysdn_conf_write(struct file *file, const char __user *buf, size_t count, loff_t * off)
static ssize_t
hysdn_conf_read(struct file *file, char __user *buf, size_t count, loff_t *off)
static int
hysdn_conf_open(struct inode *ino, struct file *filep)
static int
hysdn_conf_close(struct inode *ino, struct file *filep)
static const struct file_operations conf_fops =
;
struct proc_dir_entry *hysdn_proc_entry = NULL;
int
hysdn_procconf_init(void)
void
hysdn_procconf_release(void)

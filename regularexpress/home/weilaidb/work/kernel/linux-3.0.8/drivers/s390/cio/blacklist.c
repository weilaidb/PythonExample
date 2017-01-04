#define KMSG_COMPONENT "cio"
#define pr_fmt(fmt) KMSG_COMPONENT ": " fmt
#define __BL_DEV_WORDS ((__MAX_SUBCHANNEL + (8*sizeof(long) - 1)) / \
(8*sizeof(long)))
static unsigned long bl_dev[__MAX_SSID + 1][__BL_DEV_WORDS];
typedef enum  range_action;
static int blacklist_range(range_action action, unsigned int from_ssid,
unsigned int to_ssid, unsigned int from,
unsigned int to, int msgtrigger)
static int pure_hex(char **cp, unsigned int *val, int min_digit,
int max_digit, int max_val)
static int parse_busid(char *str, unsigned int *cssid, unsigned int *ssid,
unsigned int *devno, int msgtrigger)
static int blacklist_parse_parameters(char *str, range_action action,
int msgtrigger)
static int __init
blacklist_setup (char *str)
__setup ("cio_ignore=", blacklist_setup);
int
is_blacklisted (int ssid, int devno)
static int blacklist_parse_proc_parameters(char *buf)
struct ccwdev_iter ;
static void *
cio_ignore_proc_seq_start(struct seq_file *s, loff_t *offset)
static void
cio_ignore_proc_seq_stop(struct seq_file *s, void *it)
static void *
cio_ignore_proc_seq_next(struct seq_file *s, void *it, loff_t *offset)
static int
cio_ignore_proc_seq_show(struct seq_file *s, void *it)
static ssize_t
cio_ignore_write(struct file *file, const char __user *user_buf,
size_t user_len, loff_t *offset)
static const struct seq_operations cio_ignore_proc_seq_ops = ;
static int
cio_ignore_proc_open(struct inode *inode, struct file *file)
static const struct file_operations cio_ignore_proc_fops = ;
static int
cio_ignore_proc_init (void)
__initcall (cio_ignore_proc_init);

#define SYSCTL_BASENAME	"snsc"
#define SCDRV_BUFSZ	2048
#define SCDRV_TIMEOUT	1000
static DEFINE_MUTEX(scdrv_mutex);
static irqreturn_t
scdrv_interrupt(int irq, void *subch_data)
static int
scdrv_open(struct inode *inode, struct file *file)
static int
scdrv_release(struct inode *inode, struct file *file)
static inline int
read_status_check(struct subch_data_s *sd, int *len)
static ssize_t
scdrv_read(struct file *file, char __user *buf, size_t count, loff_t *f_pos)
static inline int
write_status_check(struct subch_data_s *sd, int count)
static ssize_t
scdrv_write(struct file *file, const char __user *buf,
size_t count, loff_t *f_pos)
static unsigned int
scdrv_poll(struct file *file, struct poll_table_struct *wait)
static const struct file_operations scdrv_fops = ;
static struct class *snsc_class;
int __init
scdrv_init(void)
module_init(scdrv_init);

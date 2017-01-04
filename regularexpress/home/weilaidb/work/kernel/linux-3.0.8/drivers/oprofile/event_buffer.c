DEFINE_MUTEX(buffer_mutex);
static unsigned long buffer_opened;
static DECLARE_WAIT_QUEUE_HEAD(buffer_wait);
static unsigned long *event_buffer;
static unsigned long buffer_size;
static unsigned long buffer_watershed;
static size_t buffer_pos;
static atomic_t buffer_ready = ATOMIC_INIT(0);
void add_event_entry(unsigned long value)
void wake_up_buffer_waiter(void)
int alloc_event_buffer(void)
void free_event_buffer(void)
static int event_buffer_open(struct inode *inode, struct file *file)
static int event_buffer_release(struct inode *inode, struct file *file)
static ssize_t event_buffer_read(struct file *file, char __user *buf,
size_t count, loff_t *offset)
const struct file_operations event_buffer_fops = ;

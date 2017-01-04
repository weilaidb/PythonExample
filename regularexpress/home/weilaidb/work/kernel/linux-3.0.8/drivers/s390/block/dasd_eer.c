#define KMSG_COMPONENT "dasd-eckd"
#undef PRINTK_HEADER
#define PRINTK_HEADER "dasd(eer):"
static int eer_pages = 5;
module_param(eer_pages, int, S_IRUGO|S_IWUSR);
struct eerbuffer ;
static LIST_HEAD(bufferlist);
static DEFINE_SPINLOCK(bufferlock);
static DECLARE_WAIT_QUEUE_HEAD(dasd_eer_read_wait_queue);
static int dasd_eer_get_free_bytes(struct eerbuffer *eerb)
static int dasd_eer_get_filled_bytes(struct eerbuffer *eerb)
static void dasd_eer_write_buffer(struct eerbuffer *eerb,
char *data, int count)
static int dasd_eer_read_buffer(struct eerbuffer *eerb, char *data, int count)
static int dasd_eer_start_record(struct eerbuffer *eerb, int count)
;
static void dasd_eer_free_buffer_pages(char **buf, int no_pages)
static int dasd_eer_allocate_buffer_pages(char **buf, int no_pages)
#define SNSS_DATA_SIZE 44
#define DASD_EER_BUSID_SIZE 10
struct dasd_eer_header  __attribute__ ((packed));
static void dasd_eer_write_standard_trigger(struct dasd_device *device,
struct dasd_ccw_req *cqr,
int trigger)
static void dasd_eer_write_snss_trigger(struct dasd_device *device,
struct dasd_ccw_req *cqr,
int trigger)
void dasd_eer_write(struct dasd_device *device, struct dasd_ccw_req *cqr,
unsigned int id)
EXPORT_SYMBOL(dasd_eer_write);
void dasd_eer_snss(struct dasd_device *device)
static void dasd_eer_snss_cb(struct dasd_ccw_req *cqr, void *data)
int dasd_eer_enable(struct dasd_device *device)
void dasd_eer_disable(struct dasd_device *device)
static char readbuffer[PAGE_SIZE];
static DEFINE_MUTEX(readbuffer_mutex);
static int dasd_eer_open(struct inode *inp, struct file *filp)
static int dasd_eer_close(struct inode *inp, struct file *filp)
static ssize_t dasd_eer_read(struct file *filp, char __user *buf,
size_t count, loff_t *ppos)
static unsigned int dasd_eer_poll(struct file *filp, poll_table *ptable)
static const struct file_operations dasd_eer_fops = ;
static struct miscdevice *dasd_eer_dev = NULL;
int __init dasd_eer_init(void)
void dasd_eer_exit(void)

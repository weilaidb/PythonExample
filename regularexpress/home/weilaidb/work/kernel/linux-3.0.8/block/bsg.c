#define BSG_DESCRIPTION	"Block layer SCSI generic (bsg) driver"
#define BSG_VERSION	"0.4"
struct bsg_device ;
enum ;
#define BSG_DEFAULT_CMDS	64
#define BSG_MAX_DEVS		32768
#undef BSG_DEBUG
#define dprintk(fmt, args...) printk(KERN_ERR "%s: " fmt, __func__, ##args)
#define dprintk(fmt, args...)
static DEFINE_MUTEX(bsg_mutex);
static DEFINE_IDR(bsg_minor_idr);
#define BSG_LIST_ARRAY_SIZE	8
static struct hlist_head bsg_device_list[BSG_LIST_ARRAY_SIZE];
static struct class *bsg_class;
static int bsg_major;
static struct kmem_cache *bsg_cmd_cachep;
struct bsg_command ;
static void bsg_free_command(struct bsg_command *bc)
static struct bsg_command *bsg_alloc_command(struct bsg_device *bd)
static inline struct hlist_head *bsg_dev_idx_hash(int index)
static int bsg_io_schedule(struct bsg_device *bd)
static int blk_fill_sgv4_hdr_rq(struct request_queue *q, struct request *rq,
struct sg_io_v4 *hdr, struct bsg_device *bd,
fmode_t has_write_perm)
static int
bsg_validate_sgv4_hdr(struct request_queue *q, struct sg_io_v4 *hdr, int *rw)
static struct request *
bsg_map_hdr(struct bsg_device *bd, struct sg_io_v4 *hdr, fmode_t has_write_perm,
u8 *sense)
static void bsg_rq_end_io(struct request *rq, int uptodate)
static void bsg_add_command(struct bsg_device *bd, struct request_queue *q,
struct bsg_command *bc, struct request *rq)
static struct bsg_command *bsg_next_done_cmd(struct bsg_device *bd)
static struct bsg_command *bsg_get_done_cmd(struct bsg_device *bd)
static int blk_complete_sgv4_hdr_rq(struct request *rq, struct sg_io_v4 *hdr,
struct bio *bio, struct bio *bidi_bio)
static int bsg_complete_all_commands(struct bsg_device *bd)
static int
__bsg_read(char __user *buf, size_t count, struct bsg_device *bd,
const struct iovec *iov, ssize_t *bytes_read)
static inline void bsg_set_block(struct bsg_device *bd, struct file *file)
static inline int err_block_err(int ret)
static ssize_t
bsg_read(struct file *file, char __user *buf, size_t count, loff_t *ppos)
static int __bsg_write(struct bsg_device *bd, const char __user *buf,
size_t count, ssize_t *bytes_written,
fmode_t has_write_perm)
static ssize_t
bsg_write(struct file *file, const char __user *buf, size_t count, loff_t *ppos)
static struct bsg_device *bsg_alloc_device(void)
static void bsg_kref_release_function(struct kref *kref)
static int bsg_put_device(struct bsg_device *bd)
static struct bsg_device *bsg_add_device(struct inode *inode,
struct request_queue *rq,
struct file *file)
static struct bsg_device *__bsg_get_device(int minor, struct request_queue *q)
static struct bsg_device *bsg_get_device(struct inode *inode, struct file *file)
static int bsg_open(struct inode *inode, struct file *file)
static int bsg_release(struct inode *inode, struct file *file)
static unsigned int bsg_poll(struct file *file, poll_table *wait)
static long bsg_ioctl(struct file *file, unsigned int cmd, unsigned long arg)
static const struct file_operations bsg_fops = ;
void bsg_unregister_queue(struct request_queue *q)
EXPORT_SYMBOL_GPL(bsg_unregister_queue);
int bsg_register_queue(struct request_queue *q, struct device *parent,
const char *name, void (*release)(struct device *))
EXPORT_SYMBOL_GPL(bsg_register_queue);
static struct cdev bsg_cdev;
static char *bsg_devnode(struct device *dev, mode_t *mode)
static int __init bsg_init(void)
MODULE_AUTHOR("Jens Axboe");
MODULE_DESCRIPTION(BSG_DESCRIPTION);
MODULE_LICENSE("GPL");
device_initcall(bsg_init);

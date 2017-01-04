static LIST_HEAD(loop_devices);
static DEFINE_MUTEX(loop_devices_mutex);
static int max_part;
static int part_shift;
static int transfer_none(struct loop_device *lo, int cmd,
struct page *raw_page, unsigned raw_off,
struct page *loop_page, unsigned loop_off,
int size, sector_t real_block)
static int transfer_xor(struct loop_device *lo, int cmd,
struct page *raw_page, unsigned raw_off,
struct page *loop_page, unsigned loop_off,
int size, sector_t real_block)
static int xor_init(struct loop_device *lo, const struct loop_info64 *info)
static struct loop_func_table none_funcs = ;
static struct loop_func_table xor_funcs = ;
static struct loop_func_table *xfer_funcs[MAX_LO_CRYPT] = ;
static loff_t get_loop_size(struct loop_device *lo, struct file *file)
static int
figure_loop_size(struct loop_device *lo)
static inline int
lo_do_transfer(struct loop_device *lo, int cmd,
struct page *rpage, unsigned roffs,
struct page *lpage, unsigned loffs,
int size, sector_t rblock)
static int do_lo_send_aops(struct loop_device *lo, struct bio_vec *bvec,
loff_t pos, struct page *unused)
static int __do_lo_send_write(struct file *file,
u8 *buf, const int len, loff_t pos)
static int do_lo_send_direct_write(struct loop_device *lo,
struct bio_vec *bvec, loff_t pos, struct page *page)
static int do_lo_send_write(struct loop_device *lo, struct bio_vec *bvec,
loff_t pos, struct page *page)
static int lo_send(struct loop_device *lo, struct bio *bio, loff_t pos)
struct lo_read_data ;
static int
lo_splice_actor(struct pipe_inode_info *pipe, struct pipe_buffer *buf,
struct splice_desc *sd)
static int
lo_direct_splice_actor(struct pipe_inode_info *pipe, struct splice_desc *sd)
static int
do_lo_receive(struct loop_device *lo,
struct bio_vec *bvec, int bsize, loff_t pos)
static int
lo_receive(struct loop_device *lo, struct bio *bio, int bsize, loff_t pos)
static int do_bio_filebacked(struct loop_device *lo, struct bio *bio)
static void loop_add_bio(struct loop_device *lo, struct bio *bio)
static struct bio *loop_get_bio(struct loop_device *lo)
static int loop_make_request(struct request_queue *q, struct bio *old_bio)
struct switch_request ;
static void do_loop_switch(struct loop_device *, struct switch_request *);
static inline void loop_handle_bio(struct loop_device *lo, struct bio *bio)
static int loop_thread(void *data)
static int loop_switch(struct loop_device *lo, struct file *file)
static int loop_flush(struct loop_device *lo)
static void do_loop_switch(struct loop_device *lo, struct switch_request *p)
static int loop_change_fd(struct loop_device *lo, struct block_device *bdev,
unsigned int arg)
static inline int is_loop_device(struct file *file)
static ssize_t loop_attr_show(struct device *dev, char *page,
ssize_t (*callback)(struct loop_device *, char *))
#define LOOP_ATTR_RO(_name)						\
static ssize_t loop_attr_##_name##_show(struct loop_device *, char *);	\
static ssize_t loop_attr_do_show_##_name(struct device *d,		\
struct device_attribute *attr, char *b)	\
\
static struct device_attribute loop_attr_##_name =			\
__ATTR(_name, S_IRUGO, loop_attr_do_show_##_name, NULL);
static ssize_t loop_attr_backing_file_show(struct loop_device *lo, char *buf)
static ssize_t loop_attr_offset_show(struct loop_device *lo, char *buf)
static ssize_t loop_attr_sizelimit_show(struct loop_device *lo, char *buf)
static ssize_t loop_attr_autoclear_show(struct loop_device *lo, char *buf)
LOOP_ATTR_RO(backing_file);
LOOP_ATTR_RO(offset);
LOOP_ATTR_RO(sizelimit);
LOOP_ATTR_RO(autoclear);
static struct attribute *loop_attrs[] = ;
static struct attribute_group loop_attribute_group = ;
static int loop_sysfs_init(struct loop_device *lo)
static void loop_sysfs_exit(struct loop_device *lo)
static int loop_set_fd(struct loop_device *lo, fmode_t mode,
struct block_device *bdev, unsigned int arg)
static int
loop_release_xfer(struct loop_device *lo)
static int
loop_init_xfer(struct loop_device *lo, struct loop_func_table *xfer,
const struct loop_info64 *i)
static int loop_clr_fd(struct loop_device *lo, struct block_device *bdev)
static int
loop_set_status(struct loop_device *lo, const struct loop_info64 *info)
static int
loop_get_status(struct loop_device *lo, struct loop_info64 *info)
static void
loop_info64_from_old(const struct loop_info *info, struct loop_info64 *info64)
static int
loop_info64_to_old(const struct loop_info64 *info64, struct loop_info *info)
static int
loop_set_status_old(struct loop_device *lo, const struct loop_info __user *arg)
static int
loop_set_status64(struct loop_device *lo, const struct loop_info64 __user *arg)
static int
loop_get_status_old(struct loop_device *lo, struct loop_info __user *arg)
static int
loop_get_status64(struct loop_device *lo, struct loop_info64 __user *arg)
static int loop_set_capacity(struct loop_device *lo, struct block_device *bdev)
static int lo_ioctl(struct block_device *bdev, fmode_t mode,
unsigned int cmd, unsigned long arg)
struct compat_loop_info ;
static noinline int
loop_info64_from_compat(const struct compat_loop_info __user *arg,
struct loop_info64 *info64)
static noinline int
loop_info64_to_compat(const struct loop_info64 *info64,
struct compat_loop_info __user *arg)
static int
loop_set_status_compat(struct loop_device *lo,
const struct compat_loop_info __user *arg)
static int
loop_get_status_compat(struct loop_device *lo,
struct compat_loop_info __user *arg)
static int lo_compat_ioctl(struct block_device *bdev, fmode_t mode,
unsigned int cmd, unsigned long arg)
static int lo_open(struct block_device *bdev, fmode_t mode)
static int lo_release(struct gendisk *disk, fmode_t mode)
static const struct block_device_operations lo_fops = ;
static int max_loop;
module_param(max_loop, int, S_IRUGO);
MODULE_PARM_DESC(max_loop, "Maximum number of loop devices");
module_param(max_part, int, S_IRUGO);
MODULE_PARM_DESC(max_part, "Maximum number of partitions per loop device");
MODULE_LICENSE("GPL");
MODULE_ALIAS_BLOCKDEV_MAJOR(LOOP_MAJOR);
int loop_register_transfer(struct loop_func_table *funcs)
int loop_unregister_transfer(int number)
EXPORT_SYMBOL(loop_register_transfer);
EXPORT_SYMBOL(loop_unregister_transfer);
static struct loop_device *loop_alloc(int i)
static void loop_free(struct loop_device *lo)
static struct loop_device *loop_init_one(int i)
static void loop_del_one(struct loop_device *lo)
static struct kobject *loop_probe(dev_t dev, int *part, void *data)
static int __init loop_init(void)
static void __exit loop_exit(void)
module_init(loop_init);
module_exit(loop_exit);
static int __init max_loop_setup(char *str)
__setup("max_loop=", max_loop_setup);

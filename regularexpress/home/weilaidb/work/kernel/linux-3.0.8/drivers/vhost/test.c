#define VHOST_TEST_WEIGHT 0x80000
enum ;
struct vhost_test ;
static void handle_vq(struct vhost_test *n)
static void handle_vq_kick(struct vhost_work *work)
static int vhost_test_open(struct inode *inode, struct file *f)
static void *vhost_test_stop_vq(struct vhost_test *n,
struct vhost_virtqueue *vq)
static void vhost_test_stop(struct vhost_test *n, void **privatep)
static void vhost_test_flush_vq(struct vhost_test *n, int index)
static void vhost_test_flush(struct vhost_test *n)
static int vhost_test_release(struct inode *inode, struct file *f)
static long vhost_test_run(struct vhost_test *n, int test)
static long vhost_test_reset_owner(struct vhost_test *n)
static int vhost_test_set_features(struct vhost_test *n, u64 features)
static long vhost_test_ioctl(struct file *f, unsigned int ioctl,
unsigned long arg)
static long vhost_test_compat_ioctl(struct file *f, unsigned int ioctl,
unsigned long arg)
static const struct file_operations vhost_test_fops = ;
static struct miscdevice vhost_test_misc = ;
static int vhost_test_init(void)
module_init(vhost_test_init);
static void vhost_test_exit(void)
module_exit(vhost_test_exit);
MODULE_VERSION("0.0.1");
MODULE_LICENSE("GPL v2");
MODULE_AUTHOR("Michael S. Tsirkin");
MODULE_DESCRIPTION("Host kernel side for virtio simulator");

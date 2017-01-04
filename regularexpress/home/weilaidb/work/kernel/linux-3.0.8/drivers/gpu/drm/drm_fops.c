DEFINE_MUTEX(drm_global_mutex);
EXPORT_SYMBOL(drm_global_mutex);
static int drm_open_helper(struct inode *inode, struct file *filp,
struct drm_device * dev);
static int drm_setup(struct drm_device * dev)
int drm_open(struct inode *inode, struct file *filp)
EXPORT_SYMBOL(drm_open);
int drm_stub_open(struct inode *inode, struct file *filp)
static int drm_cpu_valid(void)
static int drm_open_helper(struct inode *inode, struct file *filp,
struct drm_device * dev)
int drm_fasync(int fd, struct file *filp, int on)
EXPORT_SYMBOL(drm_fasync);
static void drm_reclaim_locked_buffers(struct drm_device *dev, struct file *f)
static void drm_master_release(struct drm_device *dev, struct file *filp)
static void drm_events_release(struct drm_file *file_priv)
int drm_release(struct inode *inode, struct file *filp)
EXPORT_SYMBOL(drm_release);
static bool
drm_dequeue_event(struct drm_file *file_priv,
size_t total, size_t max, struct drm_pending_event **out)
ssize_t drm_read(struct file *filp, char __user *buffer,
size_t count, loff_t *offset)
EXPORT_SYMBOL(drm_read);
unsigned int drm_poll(struct file *filp, struct poll_table_struct *wait)
EXPORT_SYMBOL(drm_poll);

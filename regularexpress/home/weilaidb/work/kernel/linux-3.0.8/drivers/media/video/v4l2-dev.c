#define VIDEO_NUM_DEVICES	256
#define VIDEO_NAME              "video4linux"
static ssize_t show_index(struct device *cd,
struct device_attribute *attr, char *buf)
static ssize_t show_name(struct device *cd,
struct device_attribute *attr, char *buf)
static struct device_attribute video_device_attrs[] = ;
static struct video_device *video_device[VIDEO_NUM_DEVICES];
static DEFINE_MUTEX(videodev_lock);
static DECLARE_BITMAP(devnode_nums[VFL_TYPE_MAX], VIDEO_NUM_DEVICES);
static inline unsigned long *devnode_bits(int vfl_type)
static inline unsigned long *devnode_bits(int vfl_type)
static inline void devnode_set(struct video_device *vdev)
static inline void devnode_clear(struct video_device *vdev)
static inline int devnode_find(struct video_device *vdev, int from, int to)
struct video_device *video_device_alloc(void)
EXPORT_SYMBOL(video_device_alloc);
void video_device_release(struct video_device *vdev)
EXPORT_SYMBOL(video_device_release);
void video_device_release_empty(struct video_device *vdev)
EXPORT_SYMBOL(video_device_release_empty);
static inline void video_get(struct video_device *vdev)
static inline void video_put(struct video_device *vdev)
static void v4l2_device_release(struct device *cd)
static struct class video_class = ;
struct video_device *video_devdata(struct file *file)
EXPORT_SYMBOL(video_devdata);
static inline bool prio_is_valid(enum v4l2_priority prio)
void v4l2_prio_init(struct v4l2_prio_state *global)
EXPORT_SYMBOL(v4l2_prio_init);
int v4l2_prio_change(struct v4l2_prio_state *global, enum v4l2_priority *local,
enum v4l2_priority new)
EXPORT_SYMBOL(v4l2_prio_change);
void v4l2_prio_open(struct v4l2_prio_state *global, enum v4l2_priority *local)
EXPORT_SYMBOL(v4l2_prio_open);
void v4l2_prio_close(struct v4l2_prio_state *global, enum v4l2_priority local)
EXPORT_SYMBOL(v4l2_prio_close);
enum v4l2_priority v4l2_prio_max(struct v4l2_prio_state *global)
EXPORT_SYMBOL(v4l2_prio_max);
int v4l2_prio_check(struct v4l2_prio_state *global, enum v4l2_priority local)
EXPORT_SYMBOL(v4l2_prio_check);
static ssize_t v4l2_read(struct file *filp, char __user *buf,
size_t sz, loff_t *off)
static ssize_t v4l2_write(struct file *filp, const char __user *buf,
size_t sz, loff_t *off)
static unsigned int v4l2_poll(struct file *filp, struct poll_table_struct *poll)
static long v4l2_ioctl(struct file *filp, unsigned int cmd, unsigned long arg)
#define v4l2_get_unmapped_area NULL
static unsigned long v4l2_get_unmapped_area(struct file *filp,
unsigned long addr, unsigned long len, unsigned long pgoff,
unsigned long flags)
static int v4l2_mmap(struct file *filp, struct vm_area_struct *vm)
static int v4l2_open(struct inode *inode, struct file *filp)
static int v4l2_release(struct inode *inode, struct file *filp)
static const struct file_operations v4l2_fops = ;
static int get_index(struct video_device *vdev)
int __video_register_device(struct video_device *vdev, int type, int nr,
int warn_if_nr_in_use, struct module *owner)
EXPORT_SYMBOL(__video_register_device);
void video_unregister_device(struct video_device *vdev)
EXPORT_SYMBOL(video_unregister_device);
static int __init videodev_init(void)
static void __exit videodev_exit(void)
module_init(videodev_init)
module_exit(videodev_exit)
MODULE_AUTHOR("Alan Cox, Mauro Carvalho Chehab <mchehab@infradead.org>");
MODULE_DESCRIPTION("Device registrar for Video4Linux drivers v2");
MODULE_LICENSE("GPL");
MODULE_ALIAS_CHARDEV_MAJOR(VIDEO_MAJOR);

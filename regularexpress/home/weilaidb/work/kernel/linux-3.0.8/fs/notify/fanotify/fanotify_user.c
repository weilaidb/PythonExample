#define FANOTIFY_DEFAULT_MAX_EVENTS	16384
#define FANOTIFY_DEFAULT_MAX_MARKS	8192
#define FANOTIFY_DEFAULT_MAX_LISTENERS	128
extern const struct fsnotify_ops fanotify_fsnotify_ops;
static struct kmem_cache *fanotify_mark_cache __read_mostly;
static struct kmem_cache *fanotify_response_event_cache __read_mostly;
struct fanotify_response_event ;
static struct fsnotify_event *get_one_event(struct fsnotify_group *group,
size_t count)
static int create_fd(struct fsnotify_group *group, struct fsnotify_event *event)
static int fill_event_metadata(struct fsnotify_group *group,
struct fanotify_event_metadata *metadata,
struct fsnotify_event *event)
static struct fanotify_response_event *dequeue_re(struct fsnotify_group *group,
__s32 fd)
static int process_access_response(struct fsnotify_group *group,
struct fanotify_response *response_struct)
static int prepare_for_access_response(struct fsnotify_group *group,
struct fsnotify_event *event,
__s32 fd)
static void remove_access_response(struct fsnotify_group *group,
struct fsnotify_event *event,
__s32 fd)
static int prepare_for_access_response(struct fsnotify_group *group,
struct fsnotify_event *event,
__s32 fd)
static void remove_access_response(struct fsnotify_group *group,
struct fsnotify_event *event,
__s32 fd)
static ssize_t copy_event_to_user(struct fsnotify_group *group,
struct fsnotify_event *event,
char __user *buf)
static unsigned int fanotify_poll(struct file *file, poll_table *wait)
static ssize_t fanotify_read(struct file *file, char __user *buf,
size_t count, loff_t *pos)
static ssize_t fanotify_write(struct file *file, const char __user *buf, size_t count, loff_t *pos)
static int fanotify_release(struct inode *ignored, struct file *file)
static long fanotify_ioctl(struct file *file, unsigned int cmd, unsigned long arg)
static const struct file_operations fanotify_fops = ;
static void fanotify_free_mark(struct fsnotify_mark *fsn_mark)
static int fanotify_find_path(int dfd, const char __user *filename,
struct path *path, unsigned int flags)
static __u32 fanotify_mark_remove_from_mask(struct fsnotify_mark *fsn_mark,
__u32 mask,
unsigned int flags)
static int fanotify_remove_vfsmount_mark(struct fsnotify_group *group,
struct vfsmount *mnt, __u32 mask,
unsigned int flags)
static int fanotify_remove_inode_mark(struct fsnotify_group *group,
struct inode *inode, __u32 mask,
unsigned int flags)
static __u32 fanotify_mark_add_to_mask(struct fsnotify_mark *fsn_mark,
__u32 mask,
unsigned int flags)
static int fanotify_add_vfsmount_mark(struct fsnotify_group *group,
struct vfsmount *mnt, __u32 mask,
unsigned int flags)
static int fanotify_add_inode_mark(struct fsnotify_group *group,
struct inode *inode, __u32 mask,
unsigned int flags)
SYSCALL_DEFINE2(fanotify_init, unsigned int, flags, unsigned int, event_f_flags)
SYSCALL_DEFINE(fanotify_mark)(int fanotify_fd, unsigned int flags,
__u64 mask, int dfd,
const char  __user * pathname)
asmlinkage long SyS_fanotify_mark(long fanotify_fd, long flags, __u64 mask,
long dfd, long pathname)
SYSCALL_ALIAS(sys_fanotify_mark, SyS_fanotify_mark);
static int __init fanotify_user_setup(void)
device_initcall(fanotify_user_setup);

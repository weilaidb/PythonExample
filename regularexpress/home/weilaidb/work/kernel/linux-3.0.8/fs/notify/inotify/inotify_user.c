static int inotify_max_user_instances __read_mostly;
static int inotify_max_queued_events __read_mostly;
static int inotify_max_user_watches __read_mostly;
static struct kmem_cache *inotify_inode_mark_cachep __read_mostly;
struct kmem_cache *event_priv_cachep __read_mostly;
static int zero;
ctl_table inotify_table[] = ;
static inline __u32 inotify_arg_to_mask(u32 arg)
static inline u32 inotify_mask_to_arg(__u32 mask)
static unsigned int inotify_poll(struct file *file, poll_table *wait)
static struct fsnotify_event *get_one_event(struct fsnotify_group *group,
size_t count)
static ssize_t copy_event_to_user(struct fsnotify_group *group,
struct fsnotify_event *event,
char __user *buf)
static ssize_t inotify_read(struct file *file, char __user *buf,
size_t count, loff_t *pos)
static int inotify_fasync(int fd, struct file *file, int on)
static int inotify_release(struct inode *ignored, struct file *file)
static long inotify_ioctl(struct file *file, unsigned int cmd,
unsigned long arg)
static const struct file_operations inotify_fops = ;
static int inotify_find_inode(const char __user *dirname, struct path *path, unsigned flags)
static int inotify_add_to_idr(struct idr *idr, spinlock_t *idr_lock,
int *last_wd,
struct inotify_inode_mark *i_mark)
static struct inotify_inode_mark *inotify_idr_find_locked(struct fsnotify_group *group,
int wd)
static struct inotify_inode_mark *inotify_idr_find(struct fsnotify_group *group,
int wd)
static void do_inotify_remove_from_idr(struct fsnotify_group *group,
struct inotify_inode_mark *i_mark)
static void inotify_remove_from_idr(struct fsnotify_group *group,
struct inotify_inode_mark *i_mark)
void inotify_ignored_and_remove_idr(struct fsnotify_mark *fsn_mark,
struct fsnotify_group *group)
static void inotify_free_mark(struct fsnotify_mark *fsn_mark)
static int inotify_update_existing_watch(struct fsnotify_group *group,
struct inode *inode,
u32 arg)
static int inotify_new_watch(struct fsnotify_group *group,
struct inode *inode,
u32 arg)
static int inotify_update_watch(struct fsnotify_group *group, struct inode *inode, u32 arg)
static struct fsnotify_group *inotify_new_group(unsigned int max_events)
SYSCALL_DEFINE1(inotify_init1, int, flags)
SYSCALL_DEFINE0(inotify_init)
SYSCALL_DEFINE3(inotify_add_watch, int, fd, const char __user *, pathname,
u32, mask)
SYSCALL_DEFINE2(inotify_rm_watch, int, fd, __s32, wd)
static int __init inotify_user_setup(void)
module_init(inotify_user_setup);

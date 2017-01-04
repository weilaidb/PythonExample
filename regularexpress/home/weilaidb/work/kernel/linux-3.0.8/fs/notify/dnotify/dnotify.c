int dir_notify_enable __read_mostly = 1;
static struct kmem_cache *dnotify_struct_cache __read_mostly;
static struct kmem_cache *dnotify_mark_cache __read_mostly;
static struct fsnotify_group *dnotify_group __read_mostly;
static DEFINE_MUTEX(dnotify_mark_mutex);
struct dnotify_mark ;
static void dnotify_recalc_inode_mask(struct fsnotify_mark *fsn_mark)
static int dnotify_handle_event(struct fsnotify_group *group,
struct fsnotify_mark *inode_mark,
struct fsnotify_mark *vfsmount_mark,
struct fsnotify_event *event)
static bool dnotify_should_send_event(struct fsnotify_group *group,
struct inode *inode,
struct fsnotify_mark *inode_mark,
struct fsnotify_mark *vfsmount_mark,
__u32 mask, void *data, int data_type)
static void dnotify_free_mark(struct fsnotify_mark *fsn_mark)
static struct fsnotify_ops dnotify_fsnotify_ops = ;
void dnotify_flush(struct file *filp, fl_owner_t id)
static __u32 convert_arg(unsigned long arg)
static int attach_dn(struct dnotify_struct *dn, struct dnotify_mark *dn_mark,
fl_owner_t id, int fd, struct file *filp, __u32 mask)
int fcntl_dirnotify(int fd, struct file *filp, unsigned long arg)
static int __init dnotify_init(void)
module_init(dnotify_init)

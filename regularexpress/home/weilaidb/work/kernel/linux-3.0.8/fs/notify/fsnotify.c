void __fsnotify_inode_delete(struct inode *inode)
EXPORT_SYMBOL_GPL(__fsnotify_inode_delete);
void __fsnotify_vfsmount_delete(struct vfsmount *mnt)
void __fsnotify_update_child_dentry_flags(struct inode *inode)
int __fsnotify_parent(struct path *path, struct dentry *dentry, __u32 mask)
EXPORT_SYMBOL_GPL(__fsnotify_parent);
static int send_to_group(struct inode *to_tell, struct vfsmount *mnt,
struct fsnotify_mark *inode_mark,
struct fsnotify_mark *vfsmount_mark,
__u32 mask, void *data,
int data_is, u32 cookie,
const unsigned char *file_name,
struct fsnotify_event **event)
int fsnotify(struct inode *to_tell, __u32 mask, void *data, int data_is,
const unsigned char *file_name, u32 cookie)
EXPORT_SYMBOL_GPL(fsnotify);
static __init int fsnotify_init(void)
core_initcall(fsnotify_init);

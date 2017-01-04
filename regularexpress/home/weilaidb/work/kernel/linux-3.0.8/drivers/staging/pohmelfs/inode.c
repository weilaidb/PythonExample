#define POHMELFS_MAGIC_NUM	0x504f482e
static struct kmem_cache *pohmelfs_inode_cache;
static atomic_t psb_bdi_num = ATOMIC_INIT(0);
void pohmelfs_inode_del_inode(struct pohmelfs_sb *psb, struct pohmelfs_inode *pi)
int pohmelfs_write_inode_create(struct inode *inode, struct netfs_trans *trans)
static int pohmelfs_write_trans_complete(struct page **pages, unsigned int page_num,
void *private, int err)
static int pohmelfs_inode_has_dirty_pages(struct address_space *mapping, pgoff_t index)
static int pohmelfs_writepages(struct address_space *mapping, struct writeback_control *wbc)
static int pohmelfs_write_inode_complete(struct page **pages, unsigned int page_num,
void *private, int err)
int pohmelfs_write_create_inode(struct pohmelfs_inode *pi)
static int pohmelfs_write_inode_create_children(struct inode *inode)
int pohmelfs_remove_child(struct pohmelfs_inode *pi, struct pohmelfs_name *n)
static int pohmelfs_write_inode(struct inode *inode,
struct writeback_control *wbc)
static inline wait_queue_head_t *page_waitqueue(struct page *page)
static int pohmelfs_wait_on_page_locked(struct page *page)
static int pohmelfs_read_page_complete(struct page **pages, unsigned int page_num,
void *private, int err)
static int pohmelfs_readpage(struct file *file, struct page *page)
static int pohmelfs_write_begin(struct file *file, struct address_space *mapping,
loff_t pos, unsigned len, unsigned flags,
struct page **pagep, void **fsdata)
static int pohmelfs_write_end(struct file *file, struct address_space *mapping,
loff_t pos, unsigned len, unsigned copied,
struct page *page, void *fsdata)
static int pohmelfs_readpages_trans_complete(struct page **__pages, unsigned int page_num,
void *private, int err)
static int pohmelfs_send_readpages(struct pohmelfs_inode *pi, struct page *first, unsigned int num)
#define list_to_page(head) (list_entry((head)->prev, struct page, lru))
static int pohmelfs_readpages(struct file *file, struct address_space *mapping,
struct list_head *pages, unsigned nr_pages)
const struct address_space_operations pohmelfs_aops = ;
static void pohmelfs_i_callback(struct rcu_head *head)
static void pohmelfs_destroy_inode(struct inode *inode)
static struct inode *pohmelfs_alloc_inode(struct super_block *sb)
static int pohmelfs_fsync(struct file *file, int datasync)
ssize_t pohmelfs_write(struct file *file, const char __user *buf,
size_t len, loff_t *ppos)
static const struct file_operations pohmelfs_file_ops = ;
const struct inode_operations pohmelfs_symlink_inode_operations = ;
int pohmelfs_setattr_raw(struct inode *inode, struct iattr *attr)
int pohmelfs_setattr(struct dentry *dentry, struct iattr *attr)
static int pohmelfs_send_xattr_req(struct pohmelfs_inode *pi, u64 id, u64 start,
const char *name, const void *value, size_t attrsize, int command)
static int pohmelfs_setxattr(struct dentry *dentry, const char *name,
const void *value, size_t attrsize, int flags)
static ssize_t pohmelfs_getxattr(struct dentry *dentry, const char *name,
void *value, size_t attrsize)
static int pohmelfs_getattr(struct vfsmount *mnt, struct dentry *dentry, struct kstat *stat)
const struct inode_operations pohmelfs_file_inode_operations = ;
void pohmelfs_fill_inode(struct inode *inode, struct netfs_inode_info *info)
static int pohmelfs_drop_inode(struct inode *inode)
static struct pohmelfs_inode *pohmelfs_get_inode_from_list(struct pohmelfs_sb *psb,
struct list_head *head, unsigned int *count)
static void pohmelfs_flush_transactions(struct pohmelfs_sb *psb)
static void pohmelfs_put_super(struct super_block *sb)
static int pohmelfs_statfs(struct dentry *dentry, struct kstatfs *buf)
static int pohmelfs_show_options(struct seq_file *seq, struct vfsmount *vfs)
enum ;
static struct match_token pohmelfs_tokens[] = ;
static int pohmelfs_parse_options(char *options, struct pohmelfs_sb *psb, int remount)
static int pohmelfs_remount(struct super_block *sb, int *flags, char *data)
static void pohmelfs_flush_inode(struct pohmelfs_inode *pi, unsigned int count)
static void pohmelfs_put_inode_count(struct pohmelfs_inode *pi, unsigned int count)
static void pohmelfs_drop_scan(struct work_struct *work)
static void pohmelfs_trans_scan_state(struct netfs_state *st)
static void pohmelfs_trans_scan(struct work_struct *work)
int pohmelfs_meta_command_data(struct pohmelfs_inode *pi, u64 id, unsigned int cmd_op, char *addon,
unsigned int flags, netfs_trans_complete_t complete, void *priv, u64 start)
int pohmelfs_meta_command(struct pohmelfs_inode *pi, unsigned int cmd_op, unsigned int flags,
netfs_trans_complete_t complete, void *priv, u64 start)
static int pohmelfs_root_handshake(struct pohmelfs_sb *psb)
static int pohmelfs_show_stats(struct seq_file *m, struct vfsmount *mnt)
static const struct super_operations pohmelfs_sb_ops = ;
static int pohmelfs_fill_super(struct super_block *sb, void *data, int silent)
static struct dentry *pohmelfs_mount(struct file_system_type *fs_type,
int flags, const char *dev_name, void *data)
static void pohmelfs_kill_super(struct super_block *sb)
static struct file_system_type pohmel_fs_type = ;
static void pohmelfs_init_once(void *data)
static int __init pohmelfs_init_inodecache(void)
static void pohmelfs_destroy_inodecache(void)
static int __init init_pohmel_fs(void)
static void __exit exit_pohmel_fs(void)
module_init(init_pohmel_fs);
module_exit(exit_pohmel_fs);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Evgeniy Polyakov <zbr@ioremap.net>");
MODULE_DESCRIPTION("Pohmel filesystem");

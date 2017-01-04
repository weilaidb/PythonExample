unsigned int yaffs_trace_mask = YAFFS_TRACE_BAD_BLOCKS | YAFFS_TRACE_ALWAYS;
unsigned int yaffs_wr_attempts = YAFFS_WR_ATTEMPTS;
unsigned int yaffs_auto_checkpoint = 1;
unsigned int yaffs_gc_control = 1;
unsigned int yaffs_bg_enable = 1;
unsigned int yaffs_auto_select = 1;
module_param(yaffs_trace_mask, uint, 0644);
module_param(yaffs_wr_attempts, uint, 0644);
module_param(yaffs_auto_checkpoint, uint, 0644);
module_param(yaffs_gc_control, uint, 0644);
module_param(yaffs_bg_enable, uint, 0644);
module_param(yaffs_auto_select, uint, 0644);
#define yaffs_devname(sb, buf)	bdevname(sb->s_bdev, buf)
static uint32_t YCALCBLOCKS(uint64_t partition_size, uint32_t block_size)
#define yaffs_inode_to_obj_lv(iptr) ((iptr)->i_private)
#define yaffs_inode_to_obj(iptr)\
((struct yaffs_obj *)(yaffs_inode_to_obj_lv(iptr)))
#define yaffs_dentry_to_obj(dptr) yaffs_inode_to_obj((dptr)->d_inode)
#define yaffs_super_to_dev(sb)	((struct yaffs_dev *)sb->s_fs_info)
#define update_dir_time(dir) do  while (0)
static unsigned yaffs_gc_control_callback(struct yaffs_dev *dev)
static void yaffs_gross_lock(struct yaffs_dev *dev)
static void yaffs_gross_unlock(struct yaffs_dev *dev)
static void yaffs_fill_inode_from_obj(struct inode *inode,
struct yaffs_obj *obj);
static struct inode *yaffs_iget(struct super_block *sb, unsigned long ino)
struct inode *yaffs_get_inode(struct super_block *sb, int mode, int dev,
struct yaffs_obj *obj)
static int yaffs_mknod(struct inode *dir, struct dentry *dentry, int mode,
dev_t rdev)
static int yaffs_mkdir(struct inode *dir, struct dentry *dentry, int mode)
static int yaffs_create(struct inode *dir, struct dentry *dentry, int mode,
struct nameidata *n)
static int yaffs_link(struct dentry *old_dentry, struct inode *dir,
struct dentry *dentry)
static int yaffs_symlink(struct inode *dir, struct dentry *dentry,
const char *symname)
static struct dentry *yaffs_lookup(struct inode *dir, struct dentry *dentry,
struct nameidata *n)
static int yaffs_unlink(struct inode *dir, struct dentry *dentry)
static int yaffs_sync_object(struct file *file,
loff_t start, loff_t end, int datasync)
static int yaffs_rename(struct inode *old_dir, struct dentry *old_dentry,
struct inode *new_dir, struct dentry *new_dentry)
static int yaffs_setattr(struct dentry *dentry, struct iattr *attr)
static int yaffs_setxattr(struct dentry *dentry, const char *name,
const void *value, size_t size, int flags)
static ssize_t yaffs_getxattr(struct dentry *dentry, const char *name,
void *buff, size_t size)
static int yaffs_removexattr(struct dentry *dentry, const char *name)
static ssize_t yaffs_listxattr(struct dentry *dentry, char *buff, size_t size)
static const struct inode_operations yaffs_dir_inode_operations = ;
struct yaffs_search_context ;
static struct yaffs_search_context *yaffs_new_search(struct yaffs_obj *dir)
static void yaffs_search_end(struct yaffs_search_context *sc)
static void yaffs_search_advance(struct yaffs_search_context *sc)
static void yaffs_remove_obj_callback(struct yaffs_obj *obj)
static int yaffs_readdir(struct file *f, void *dirent, filldir_t filldir)
static const struct file_operations yaffs_dir_operations = ;
static int yaffs_file_flush(struct file *file, fl_owner_t id)
static const struct file_operations yaffs_file_operations = ;
static struct inode *yaffs2_nfs_get_inode(struct super_block *sb, uint64_t ino,
uint32_t generation)
static struct dentry *yaffs2_fh_to_dentry(struct super_block *sb,
struct fid *fid, int fh_len,
int fh_type)
static struct dentry *yaffs2_fh_to_parent(struct super_block *sb,
struct fid *fid, int fh_len,
int fh_type)
struct dentry *yaffs2_get_parent(struct dentry *dentry)
static struct export_operations yaffs_export_ops = ;
static int yaffs_readlink(struct dentry *dentry, char __user * buffer,
int buflen)
static void *yaffs_follow_link(struct dentry *dentry, struct nameidata *nd)
void yaffs_put_link(struct dentry *dentry, struct nameidata *nd, void *alias)
static void yaffs_unstitch_obj(struct inode *inode, struct yaffs_obj *obj)
static void yaffs_evict_inode(struct inode *inode)
static void yaffs_touch_super(struct yaffs_dev *dev)
static int yaffs_readpage_nolock(struct file *f, struct page *pg)
static int yaffs_readpage_unlock(struct file *f, struct page *pg)
static int yaffs_readpage(struct file *f, struct page *pg)
static int yaffs_writepage(struct page *page, struct writeback_control *wbc)
static ssize_t yaffs_hold_space(struct file *f)
static void yaffs_release_space(struct file *f)
static int yaffs_write_begin(struct file *filp, struct address_space *mapping,
loff_t pos, unsigned len, unsigned flags,
struct page **pagep, void **fsdata)
static ssize_t yaffs_file_write(struct file *f, const char *buf, size_t n,
loff_t *pos)
static int yaffs_write_end(struct file *filp, struct address_space *mapping,
loff_t pos, unsigned len, unsigned copied,
struct page *pg, void *fsdadata)
static int yaffs_statfs(struct dentry *dentry, struct kstatfs *buf)
static void yaffs_flush_inodes(struct super_block *sb)
static void yaffs_flush_super(struct super_block *sb, int do_checkpoint)
static unsigned yaffs_bg_gc_urgency(struct yaffs_dev *dev)
static int yaffs_do_sync_fs(struct super_block *sb, int request_checkpoint)
void yaffs_background_waker(unsigned long data)
static int yaffs_bg_thread_fn(void *data)
static int yaffs_bg_start(struct yaffs_dev *dev)
static void yaffs_bg_stop(struct yaffs_dev *dev)
static void yaffs_write_super(struct super_block *sb)
static int yaffs_sync_fs(struct super_block *sb, int wait)
static LIST_HEAD(yaffs_context_list);
struct mutex yaffs_context_lock;
struct yaffs_options ;
#define MAX_OPT_LEN 30
static int yaffs_parse_options(struct yaffs_options *options,
const char *options_str)
static const struct address_space_operations yaffs_file_address_operations = ;
static const struct inode_operations yaffs_file_inode_operations = ;
static const struct inode_operations yaffs_symlink_inode_operations = ;
static void yaffs_fill_inode_from_obj(struct inode *inode,
struct yaffs_obj *obj)
static void yaffs_put_super(struct super_block *sb)
static int yaffs_remount_fs(struct super_block *sb, int *flags, char *data)
static const struct super_operations yaffs_super_ops = ;
static struct super_block *yaffs_internal_read_super(int yaffs_version,
struct super_block *sb,
void *data, int silent)
static int yaffs_internal_read_super_mtd(struct super_block *sb, void *data,
int silent)
static struct dentry *yaffs_mount(struct file_system_type *fs,
int flags, const char *dev_name,
void *data)
static struct file_system_type yaffs_fs_type = ;
static int yaffs2_internal_read_super_mtd(struct super_block *sb, void *data,
int silent)
static struct dentry *yaffs2_mount(struct file_system_type *fs,
int flags, const char *dev_name, void *data)
static struct file_system_type yaffs2_fs_type = ;
static struct proc_dir_entry *my_proc_entry;
static char *yaffs_dump_dev_part0(char *buf, struct yaffs_dev *dev)
static char *yaffs_dump_dev_part1(char *buf, struct yaffs_dev *dev)
static int yaffs_proc_read(char *page,
char **start,
off_t offset, int count, int *eof, void *data)
struct file_system_to_install ;
static struct file_system_to_install fs_to_install[] = ;
static int __init init_yaffs_fs(void)
static void __exit exit_yaffs_fs(void)
module_init(init_yaffs_fs)
module_exit(exit_yaffs_fs)
MODULE_DESCRIPTION("YAFFS2 - a NAND specific flash file system");
MODULE_AUTHOR("Charles Manning, Aleph One Ltd., 2002-2011");
MODULE_LICENSE("GPL");

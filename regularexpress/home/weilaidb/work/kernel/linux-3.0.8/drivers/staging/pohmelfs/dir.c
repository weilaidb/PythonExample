static int pohmelfs_cmp_hash(struct pohmelfs_name *n, u32 hash)
static struct pohmelfs_name *pohmelfs_search_hash_unprecise(struct pohmelfs_inode *pi, u32 hash)
struct pohmelfs_name *pohmelfs_search_hash(struct pohmelfs_inode *pi, u32 hash)
static void __pohmelfs_name_del(struct pohmelfs_inode *parent, struct pohmelfs_name *node)
static void pohmelfs_name_free(struct pohmelfs_inode *parent, struct pohmelfs_name *node)
static struct pohmelfs_name *pohmelfs_insert_hash(struct pohmelfs_inode *pi,
struct pohmelfs_name *new)
void pohmelfs_free_names(struct pohmelfs_inode *parent)
static void pohmelfs_fix_offset(struct pohmelfs_inode *parent, struct pohmelfs_name *node)
void pohmelfs_name_del(struct pohmelfs_inode *parent, struct pohmelfs_name *node)
static int pohmelfs_insert_name(struct pohmelfs_inode *parent, struct pohmelfs_name *n)
static struct pohmelfs_name *pohmelfs_name_alloc(unsigned int len)
static int pohmelfs_add_dir(struct pohmelfs_sb *psb, struct pohmelfs_inode *parent,
struct pohmelfs_inode *npi, struct qstr *str, unsigned int mode, int link)
struct pohmelfs_inode *pohmelfs_new_inode(struct pohmelfs_sb *psb,
struct pohmelfs_inode *parent, struct qstr *str,
struct netfs_inode_info *info, int link)
static int pohmelfs_remote_sync_complete(struct page **pages, unsigned int page_num,
void *private, int err)
static int pohmelfs_sync_remote_dir(struct pohmelfs_inode *pi)
static int pohmelfs_dir_open(struct inode *inode, struct file *file)
static int pohmelfs_readdir(struct file *file, void *dirent, filldir_t filldir)
static loff_t pohmelfs_dir_lseek(struct file *file, loff_t offset, int origin)
const struct file_operations pohmelfs_dir_fops = ;
static int pohmelfs_lookup_single(struct pohmelfs_inode *parent,
struct qstr *str, u64 ino)
struct dentry *pohmelfs_lookup(struct inode *dir, struct dentry *dentry, struct nameidata *nd)
struct pohmelfs_inode *pohmelfs_create_entry_local(struct pohmelfs_sb *psb,
struct pohmelfs_inode *parent, struct qstr *str, u64 start, int mode)
static int pohmelfs_create_entry(struct inode *dir, struct dentry *dentry, u64 start, int mode)
static int pohmelfs_create(struct inode *dir, struct dentry *dentry, int mode,
struct nameidata *nd)
static int pohmelfs_mkdir(struct inode *dir, struct dentry *dentry, int mode)
static int pohmelfs_remove_entry(struct inode *dir, struct dentry *dentry)
static int pohmelfs_unlink(struct inode *dir, struct dentry *dentry)
static int pohmelfs_rmdir(struct inode *dir, struct dentry *dentry)
static int pohmelfs_create_link(struct pohmelfs_inode *parent, struct qstr *obj,
struct pohmelfs_inode *target, struct qstr *tstr)
static int pohmelfs_link(struct dentry *old_dentry, struct inode *dir,
struct dentry *dentry)
static int pohmelfs_symlink(struct inode *dir, struct dentry *dentry, const char *symname)
static int pohmelfs_send_rename(struct pohmelfs_inode *pi, struct pohmelfs_inode *parent,
struct qstr *str)
static int pohmelfs_rename(struct inode *old_dir, struct dentry *old_dentry,
struct inode *new_dir, struct dentry *new_dentry)
const struct inode_operations pohmelfs_dir_inode_ops = ;

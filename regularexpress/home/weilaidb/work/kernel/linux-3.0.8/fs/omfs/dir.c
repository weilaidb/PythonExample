static int omfs_hash(const char *name, int namelen, int mod)
static struct buffer_head *omfs_get_bucket(struct inode *dir,
const char *name, int namelen, int *ofs)
static struct buffer_head *omfs_scan_list(struct inode *dir, u64 block,
const char *name, int namelen,
u64 *prev_block)
static struct buffer_head *omfs_find_entry(struct inode *dir,
const char *name, int namelen)
int omfs_make_empty(struct inode *inode, struct super_block *sb)
static int omfs_add_link(struct dentry *dentry, struct inode *inode)
static int omfs_delete_entry(struct dentry *dentry)
static int omfs_dir_is_empty(struct inode *inode)
static int omfs_remove(struct inode *dir, struct dentry *dentry)
static int omfs_add_node(struct inode *dir, struct dentry *dentry, int mode)
static int omfs_mkdir(struct inode *dir, struct dentry *dentry, int mode)
static int omfs_create(struct inode *dir, struct dentry *dentry, int mode,
struct nameidata *nd)
static struct dentry *omfs_lookup(struct inode *dir, struct dentry *dentry,
struct nameidata *nd)
int omfs_is_bad(struct omfs_sb_info *sbi, struct omfs_header *header,
u64 fsblock)
static int omfs_fill_chain(struct file *filp, void *dirent, filldir_t filldir,
u64 fsblock, int hindex)
static int omfs_rename(struct inode *old_dir, struct dentry *old_dentry,
struct inode *new_dir, struct dentry *new_dentry)
static int omfs_readdir(struct file *filp, void *dirent, filldir_t filldir)
const struct inode_operations omfs_dir_inops = ;
const struct file_operations omfs_dir_operations = ;

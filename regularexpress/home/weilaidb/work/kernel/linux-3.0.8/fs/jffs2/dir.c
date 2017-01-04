static int jffs2_readdir (struct file *, void *, filldir_t);
static int jffs2_create (struct inode *,struct dentry *,int,
struct nameidata *);
static struct dentry *jffs2_lookup (struct inode *,struct dentry *,
struct nameidata *);
static int jffs2_link (struct dentry *,struct inode *,struct dentry *);
static int jffs2_unlink (struct inode *,struct dentry *);
static int jffs2_symlink (struct inode *,struct dentry *,const char *);
static int jffs2_mkdir (struct inode *,struct dentry *,int);
static int jffs2_rmdir (struct inode *,struct dentry *);
static int jffs2_mknod (struct inode *,struct dentry *,int,dev_t);
static int jffs2_rename (struct inode *, struct dentry *,
struct inode *, struct dentry *);
const struct file_operations jffs2_dir_operations =
;
const struct inode_operations jffs2_dir_inode_operations =
;
static struct dentry *jffs2_lookup(struct inode *dir_i, struct dentry *target,
struct nameidata *nd)
static int jffs2_readdir(struct file *filp, void *dirent, filldir_t filldir)
static int jffs2_create(struct inode *dir_i, struct dentry *dentry, int mode,
struct nameidata *nd)
static int jffs2_unlink(struct inode *dir_i, struct dentry *dentry)
static int jffs2_link (struct dentry *old_dentry, struct inode *dir_i, struct dentry *dentry)
static int jffs2_symlink (struct inode *dir_i, struct dentry *dentry, const char *target)
static int jffs2_mkdir (struct inode *dir_i, struct dentry *dentry, int mode)
static int jffs2_rmdir (struct inode *dir_i, struct dentry *dentry)
static int jffs2_mknod (struct inode *dir_i, struct dentry *dentry, int mode, dev_t rdev)
static int jffs2_rename (struct inode *old_dir_i, struct dentry *old_dentry,
struct inode *new_dir_i, struct dentry *new_dentry)

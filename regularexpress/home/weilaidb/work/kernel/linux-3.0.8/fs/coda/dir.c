static int coda_create(struct inode *dir, struct dentry *new, int mode, struct nameidata *nd);
static struct dentry *coda_lookup(struct inode *dir, struct dentry *target, struct nameidata *nd);
static int coda_link(struct dentry *old_dentry, struct inode *dir_inode,
struct dentry *entry);
static int coda_unlink(struct inode *dir_inode, struct dentry *entry);
static int coda_symlink(struct inode *dir_inode, struct dentry *entry,
const char *symname);
static int coda_mkdir(struct inode *dir_inode, struct dentry *entry, int mode);
static int coda_rmdir(struct inode *dir_inode, struct dentry *entry);
static int coda_rename(struct inode *old_inode, struct dentry *old_dentry,
struct inode *new_inode, struct dentry *new_dentry);
static int coda_readdir(struct file *file, void *buf, filldir_t filldir);
static int coda_dentry_revalidate(struct dentry *de, struct nameidata *nd);
static int coda_dentry_delete(const struct dentry *);
static int coda_venus_readdir(struct file *coda_file, void *buf,
filldir_t filldir);
static int coda_return_EIO(void)
#define CODA_EIO_ERROR ((void *) (coda_return_EIO))
const struct dentry_operations coda_dentry_operations =
;
const struct inode_operations coda_dir_inode_operations =
;
const struct file_operations coda_dir_operations = ;
static struct dentry *coda_lookup(struct inode *dir, struct dentry *entry, struct nameidata *nd)
int coda_permission(struct inode *inode, int mask, unsigned int flags)
static inline void coda_dir_update_mtime(struct inode *dir)
static inline void coda_dir_inc_nlink(struct inode *dir)
static inline void coda_dir_drop_nlink(struct inode *dir)
static int coda_create(struct inode *dir, struct dentry *de, int mode, struct nameidata *nd)
static int coda_mkdir(struct inode *dir, struct dentry *de, int mode)
static int coda_link(struct dentry *source_de, struct inode *dir_inode,
struct dentry *de)
static int coda_symlink(struct inode *dir_inode, struct dentry *de,
const char *symname)
static int coda_unlink(struct inode *dir, struct dentry *de)
static int coda_rmdir(struct inode *dir, struct dentry *de)
static int coda_rename(struct inode *old_dir, struct dentry *old_dentry,
struct inode *new_dir, struct dentry *new_dentry)
static int coda_readdir(struct file *coda_file, void *buf, filldir_t filldir)
static inline unsigned int CDT2DT(unsigned char cdt)
static int coda_venus_readdir(struct file *coda_file, void *buf,
filldir_t filldir)
static int coda_dentry_revalidate(struct dentry *de, struct nameidata *nd)
static int coda_dentry_delete(const struct dentry * dentry)
int coda_revalidate_inode(struct dentry *dentry)

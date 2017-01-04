static struct dentry *afs_lookup(struct inode *dir, struct dentry *dentry,
struct nameidata *nd);
static int afs_dir_open(struct inode *inode, struct file *file);
static int afs_readdir(struct file *file, void *dirent, filldir_t filldir);
static int afs_d_revalidate(struct dentry *dentry, struct nameidata *nd);
static int afs_d_delete(const struct dentry *dentry);
static void afs_d_release(struct dentry *dentry);
static int afs_lookup_filldir(void *_cookie, const char *name, int nlen,
loff_t fpos, u64 ino, unsigned dtype);
static int afs_create(struct inode *dir, struct dentry *dentry, int mode,
struct nameidata *nd);
static int afs_mkdir(struct inode *dir, struct dentry *dentry, int mode);
static int afs_rmdir(struct inode *dir, struct dentry *dentry);
static int afs_unlink(struct inode *dir, struct dentry *dentry);
static int afs_link(struct dentry *from, struct inode *dir,
struct dentry *dentry);
static int afs_symlink(struct inode *dir, struct dentry *dentry,
const char *content);
static int afs_rename(struct inode *old_dir, struct dentry *old_dentry,
struct inode *new_dir, struct dentry *new_dentry);
const struct file_operations afs_dir_file_operations = ;
const struct inode_operations afs_dir_inode_operations = ;
const struct dentry_operations afs_fs_dentry_operations = ;
#define AFS_DIR_HASHTBL_SIZE	128
#define AFS_DIR_DIRENT_SIZE	32
#define AFS_DIRENT_PER_BLOCK	64
union afs_dirent ;
struct afs_dir_pagehdr ;
union afs_dir_block ;
struct afs_dir_page ;
struct afs_lookup_cookie ;
static inline void afs_dir_check_page(struct inode *dir, struct page *page)
static inline void afs_dir_put_page(struct page *page)
static struct page *afs_dir_get_page(struct inode *dir, unsigned long index,
struct key *key)
static int afs_dir_open(struct inode *inode, struct file *file)
static int afs_dir_iterate_block(unsigned *fpos,
union afs_dir_block *block,
unsigned blkoff,
void *cookie,
filldir_t filldir)
static int afs_dir_iterate(struct inode *dir, unsigned *fpos, void *cookie,
filldir_t filldir, struct key *key)
static int afs_readdir(struct file *file, void *cookie, filldir_t filldir)
static int afs_lookup_filldir(void *_cookie, const char *name, int nlen,
loff_t fpos, u64 ino, unsigned dtype)
static int afs_do_lookup(struct inode *dir, struct dentry *dentry,
struct afs_fid *fid, struct key *key)
static struct inode *afs_try_auto_mntpt(
int ret, struct dentry *dentry, struct inode *dir, struct key *key,
struct afs_fid *fid)
static struct dentry *afs_lookup(struct inode *dir, struct dentry *dentry,
struct nameidata *nd)
static int afs_d_revalidate(struct dentry *dentry, struct nameidata *nd)
static int afs_d_delete(const struct dentry *dentry)
static void afs_d_release(struct dentry *dentry)
static int afs_mkdir(struct inode *dir, struct dentry *dentry, int mode)
static int afs_rmdir(struct inode *dir, struct dentry *dentry)
static int afs_unlink(struct inode *dir, struct dentry *dentry)
static int afs_create(struct inode *dir, struct dentry *dentry, int mode,
struct nameidata *nd)
static int afs_link(struct dentry *from, struct inode *dir,
struct dentry *dentry)
static int afs_symlink(struct inode *dir, struct dentry *dentry,
const char *content)
static int afs_rename(struct inode *old_dir, struct dentry *old_dentry,
struct inode *new_dir, struct dentry *new_dentry)

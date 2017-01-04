#undef DEBUG
#define dprintf(x...)	printf(x)
#define dprintf(x...)
static int bfs_add_entry(struct inode *dir, const unsigned char *name,
int namelen, int ino);
static struct buffer_head *bfs_find_entry(struct inode *dir,
const unsigned char *name, int namelen,
struct bfs_dirent **res_dir);
static int bfs_readdir(struct file *f, void *dirent, filldir_t filldir)
const struct file_operations bfs_dir_operations = ;
extern void dump_imap(const char *, struct super_block *);
static int bfs_create(struct inode *dir, struct dentry *dentry, int mode,
struct nameidata *nd)
static struct dentry *bfs_lookup(struct inode *dir, struct dentry *dentry,
struct nameidata *nd)
static int bfs_link(struct dentry *old, struct inode *dir,
struct dentry *new)
static int bfs_unlink(struct inode *dir, struct dentry *dentry)
static int bfs_rename(struct inode *old_dir, struct dentry *old_dentry,
struct inode *new_dir, struct dentry *new_dentry)
const struct inode_operations bfs_dir_inops = ;
static int bfs_add_entry(struct inode *dir, const unsigned char *name,
int namelen, int ino)
static inline int bfs_namecmp(int len, const unsigned char *name,
const char *buffer)
static struct buffer_head *bfs_find_entry(struct inode *dir,
const unsigned char *name, int namelen,
struct bfs_dirent **res_dir)

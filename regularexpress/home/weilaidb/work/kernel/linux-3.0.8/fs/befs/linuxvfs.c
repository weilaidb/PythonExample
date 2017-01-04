MODULE_DESCRIPTION("BeOS File System (BeFS) driver");
MODULE_AUTHOR("Will Dyson");
MODULE_LICENSE("GPL");
#define VFS_BLOCK_SIZE 512
static int befs_readdir(struct file *, void *, filldir_t);
static int befs_get_block(struct inode *, sector_t, struct buffer_head *, int);
static int befs_readpage(struct file *file, struct page *page);
static sector_t befs_bmap(struct address_space *mapping, sector_t block);
static struct dentry *befs_lookup(struct inode *, struct dentry *, struct nameidata *);
static struct inode *befs_iget(struct super_block *, unsigned long);
static struct inode *befs_alloc_inode(struct super_block *sb);
static void befs_destroy_inode(struct inode *inode);
static int befs_init_inodecache(void);
static void befs_destroy_inodecache(void);
static void *befs_follow_link(struct dentry *, struct nameidata *);
static void befs_put_link(struct dentry *, struct nameidata *, void *);
static int befs_utf2nls(struct super_block *sb, const char *in, int in_len,
char **out, int *out_len);
static int befs_nls2utf(struct super_block *sb, const char *in, int in_len,
char **out, int *out_len);
static void befs_put_super(struct super_block *);
static int befs_remount(struct super_block *, int *, char *);
static int befs_statfs(struct dentry *, struct kstatfs *);
static int parse_options(char *, befs_mount_options *);
static const struct super_operations befs_sops = ;
static struct kmem_cache *befs_inode_cachep;
static const struct file_operations befs_dir_operations = ;
static const struct inode_operations befs_dir_inode_operations = ;
static const struct address_space_operations befs_aops = ;
static const struct inode_operations befs_symlink_inode_operations = ;
static int
befs_readpage(struct file *file, struct page *page)
static sector_t
befs_bmap(struct address_space *mapping, sector_t block)
static int
befs_get_block(struct inode *inode, sector_t block,
struct buffer_head *bh_result, int create)
static struct dentry *
befs_lookup(struct inode *dir, struct dentry *dentry, struct nameidata *nd)
static int
befs_readdir(struct file *filp, void *dirent, filldir_t filldir)
static struct inode *
befs_alloc_inode(struct super_block *sb)
static void befs_i_callback(struct rcu_head *head)
static void befs_destroy_inode(struct inode *inode)
static void init_once(void *foo)
static struct inode *befs_iget(struct super_block *sb, unsigned long ino)
static int
befs_init_inodecache(void)
static void
befs_destroy_inodecache(void)
static void *
befs_follow_link(struct dentry *dentry, struct nameidata *nd)
static void befs_put_link(struct dentry *dentry, struct nameidata *nd, void *p)
static int
befs_utf2nls(struct super_block *sb, const char *in,
int in_len, char **out, int *out_len)
static int
befs_nls2utf(struct super_block *sb, const char *in,
int in_len, char **out, int *out_len)
enum ;
static const match_table_t befs_tokens = ;
static int
parse_options(char *options, befs_mount_options * opts)
static void
befs_put_super(struct super_block *sb)
static int
befs_fill_super(struct super_block *sb, void *data, int silent)
static int
befs_remount(struct super_block *sb, int *flags, char *data)
static int
befs_statfs(struct dentry *dentry, struct kstatfs *buf)
static struct dentry *
befs_mount(struct file_system_type *fs_type, int flags, const char *dev_name,
void *data)
static struct file_system_type befs_fs_type = ;
static int __init
init_befs_fs(void)
static void __exit
exit_befs_fs(void)
module_init(init_befs_fs)
module_exit(exit_befs_fs)

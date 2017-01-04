#define BEQUIET
static int isofs_hashi(const struct dentry *parent, const struct inode *inode,
struct qstr *qstr);
static int isofs_hash(const struct dentry *parent, const struct inode *inode,
struct qstr *qstr);
static int isofs_dentry_cmpi(const struct dentry *parent,
const struct inode *pinode,
const struct dentry *dentry, const struct inode *inode,
unsigned int len, const char *str, const struct qstr *name);
static int isofs_dentry_cmp(const struct dentry *parent,
const struct inode *pinode,
const struct dentry *dentry, const struct inode *inode,
unsigned int len, const char *str, const struct qstr *name);
static int isofs_hashi_ms(const struct dentry *parent, const struct inode *inode,
struct qstr *qstr);
static int isofs_hash_ms(const struct dentry *parent, const struct inode *inode,
struct qstr *qstr);
static int isofs_dentry_cmpi_ms(const struct dentry *parent,
const struct inode *pinode,
const struct dentry *dentry, const struct inode *inode,
unsigned int len, const char *str, const struct qstr *name);
static int isofs_dentry_cmp_ms(const struct dentry *parent,
const struct inode *pinode,
const struct dentry *dentry, const struct inode *inode,
unsigned int len, const char *str, const struct qstr *name);
static void isofs_put_super(struct super_block *sb)
static int isofs_read_inode(struct inode *);
static int isofs_statfs (struct dentry *, struct kstatfs *);
static struct kmem_cache *isofs_inode_cachep;
static struct inode *isofs_alloc_inode(struct super_block *sb)
static void isofs_i_callback(struct rcu_head *head)
static void isofs_destroy_inode(struct inode *inode)
static void init_once(void *foo)
static int init_inodecache(void)
static void destroy_inodecache(void)
static int isofs_remount(struct super_block *sb, int *flags, char *data)
static const struct super_operations isofs_sops = ;
static const struct dentry_operations isofs_dentry_ops[] = ;
struct iso9660_options;
static int
isofs_hash_common(const struct dentry *dentry, struct qstr *qstr, int ms)
static int
isofs_hashi_common(const struct dentry *dentry, struct qstr *qstr, int ms)
static int isofs_dentry_cmp_common(
unsigned int len, const char *str,
const struct qstr *name, int ms, int ci)
static int
isofs_hash(const struct dentry *dentry, const struct inode *inode,
struct qstr *qstr)
static int
isofs_hashi(const struct dentry *dentry, const struct inode *inode,
struct qstr *qstr)
static int
isofs_dentry_cmp(const struct dentry *parent, const struct inode *pinode,
const struct dentry *dentry, const struct inode *inode,
unsigned int len, const char *str, const struct qstr *name)
static int
isofs_dentry_cmpi(const struct dentry *parent, const struct inode *pinode,
const struct dentry *dentry, const struct inode *inode,
unsigned int len, const char *str, const struct qstr *name)
static int
isofs_hash_ms(const struct dentry *dentry, const struct inode *inode,
struct qstr *qstr)
static int
isofs_hashi_ms(const struct dentry *dentry, const struct inode *inode,
struct qstr *qstr)
static int
isofs_dentry_cmp_ms(const struct dentry *parent, const struct inode *pinode,
const struct dentry *dentry, const struct inode *inode,
unsigned int len, const char *str, const struct qstr *name)
static int
isofs_dentry_cmpi_ms(const struct dentry *parent, const struct inode *pinode,
const struct dentry *dentry, const struct inode *inode,
unsigned int len, const char *str, const struct qstr *name)
enum ;
static const match_table_t tokens = ;
static int parse_options(char *options, struct iso9660_options *popt)
#define WE_OBEY_THE_WRITTEN_STANDARDS 1
static unsigned int isofs_get_last_session(struct super_block *sb, s32 session)
static bool rootdir_empty(struct super_block *sb, unsigned long block)
static int isofs_fill_super(struct super_block *s, void *data, int silent)
static int isofs_statfs (struct dentry *dentry, struct kstatfs *buf)
int isofs_get_blocks(struct inode *inode, sector_t iblock,
struct buffer_head **bh, unsigned long nblocks)
static int isofs_get_block(struct inode *inode, sector_t iblock,
struct buffer_head *bh_result, int create)
static int isofs_bmap(struct inode *inode, sector_t block)
struct buffer_head *isofs_bread(struct inode *inode, sector_t block)
static int isofs_readpage(struct file *file, struct page *page)
static sector_t _isofs_bmap(struct address_space *mapping, sector_t block)
static const struct address_space_operations isofs_aops = ;
static int isofs_read_level3_size(struct inode *inode)
static int isofs_read_inode(struct inode *inode)
struct isofs_iget5_callback_data ;
static int isofs_iget5_test(struct inode *ino, void *data)
static int isofs_iget5_set(struct inode *ino, void *data)
struct inode *isofs_iget(struct super_block *sb,
unsigned long block,
unsigned long offset)
static struct dentry *isofs_mount(struct file_system_type *fs_type,
int flags, const char *dev_name, void *data)
static struct file_system_type iso9660_fs_type = ;
static int __init init_iso9660_fs(void)
static void __exit exit_iso9660_fs(void)
module_init(init_iso9660_fs)
module_exit(exit_iso9660_fs)
MODULE_LICENSE("GPL");
MODULE_ALIAS("iso9660");

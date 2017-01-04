struct file_system_type reiserfs_fs_type;
static const char reiserfs_3_5_magic_string[] = REISERFS_SUPER_MAGIC_STRING;
static const char reiserfs_3_6_magic_string[] = REISER2FS_SUPER_MAGIC_STRING;
static const char reiserfs_jr_magic_string[] = REISER2FS_JR_SUPER_MAGIC_STRING;
int is_reiserfs_3_5(struct reiserfs_super_block *rs)
int is_reiserfs_3_6(struct reiserfs_super_block *rs)
int is_reiserfs_jr(struct reiserfs_super_block *rs)
static int is_any_reiserfs_magic_string(struct reiserfs_super_block *rs)
static int reiserfs_remount(struct super_block *s, int *flags, char *data);
static int reiserfs_statfs(struct dentry *dentry, struct kstatfs *buf);
static int reiserfs_sync_fs(struct super_block *s, int wait)
static void reiserfs_write_super(struct super_block *s)
static int reiserfs_freeze(struct super_block *s)
static int reiserfs_unfreeze(struct super_block *s)
extern const struct in_core_key MAX_IN_CORE_KEY;
static int remove_save_link_only(struct super_block *s,
struct reiserfs_key *key, int oid_free)
static int reiserfs_quota_on_mount(struct super_block *, int);
static int finish_unfinished(struct super_block *s)
void add_save_link(struct reiserfs_transaction_handle *th,
struct inode *inode, int truncate)
int remove_save_link(struct inode *inode, int truncate)
static void reiserfs_kill_sb(struct super_block *s)
static void reiserfs_put_super(struct super_block *s)
static struct kmem_cache *reiserfs_inode_cachep;
static struct inode *reiserfs_alloc_inode(struct super_block *sb)
static void reiserfs_i_callback(struct rcu_head *head)
static void reiserfs_destroy_inode(struct inode *inode)
static void init_once(void *foo)
static int init_inodecache(void)
static void destroy_inodecache(void)
static void reiserfs_dirty_inode(struct inode *inode, int flags)
static ssize_t reiserfs_quota_write(struct super_block *, int, const char *,
size_t, loff_t);
static ssize_t reiserfs_quota_read(struct super_block *, int, char *, size_t,
loff_t);
static const struct super_operations reiserfs_sops = ;
#define QTYPE2NAME(t) ((t)==USRQUOTA?"user":"group")
static int reiserfs_write_dquot(struct dquot *);
static int reiserfs_acquire_dquot(struct dquot *);
static int reiserfs_release_dquot(struct dquot *);
static int reiserfs_mark_dquot_dirty(struct dquot *);
static int reiserfs_write_info(struct super_block *, int);
static int reiserfs_quota_on(struct super_block *, int, int, struct path *);
static const struct dquot_operations reiserfs_quota_operations = ;
static const struct quotactl_ops reiserfs_qctl_operations = ;
static const struct export_operations reiserfs_export_ops = ;
typedef struct  arg_desc_t;
#define REISERFS_OPT_ALLOWEMPTY 31
typedef struct  opt_desc_t;
static const arg_desc_t logging_mode[] = ;
static const arg_desc_t barrier_mode[] = ;
static const arg_desc_t balloc[] = ;
static const arg_desc_t tails[] = ;
static const arg_desc_t error_actions[] = ;
static int reiserfs_getopt(struct super_block *s, char **cur, opt_desc_t * opts,
char **opt_arg, unsigned long *bit_flags)
static int reiserfs_parse_options(struct super_block *s, char *options,
unsigned long *mount_options,
unsigned long *blocks,
char **jdev_name,
unsigned int *commit_max_age,
char **qf_names,
unsigned int *qfmt)
static void switch_data_mode(struct super_block *s, unsigned long mode)
static void handle_data_mode(struct super_block *s, unsigned long mount_options)
static void handle_barrier_mode(struct super_block *s, unsigned long bits)
static void handle_attrs(struct super_block *s)
static void handle_quota_files(struct super_block *s, char **qf_names,
unsigned int *qfmt)
static int reiserfs_remount(struct super_block *s, int *mount_flags, char *arg)
static int read_super_block(struct super_block *s, int offset)
static int reread_meta_blocks(struct super_block *s)
static __u32 find_hash_out(struct super_block *s)
static int what_hash(struct super_block *s)
static hashf_t hash_function(struct super_block *s)
static int function2code(hashf_t func)
#define SWARN(silent, s, id, ...)			\
if (!(silent))				\
reiserfs_warning(s, id, __VA_ARGS__)
static int reiserfs_fill_super(struct super_block *s, void *data, int silent)
static int reiserfs_statfs(struct dentry *dentry, struct kstatfs *buf)
static int reiserfs_write_dquot(struct dquot *dquot)
static int reiserfs_acquire_dquot(struct dquot *dquot)
static int reiserfs_release_dquot(struct dquot *dquot)
static int reiserfs_mark_dquot_dirty(struct dquot *dquot)
static int reiserfs_write_info(struct super_block *sb, int type)
static int reiserfs_quota_on_mount(struct super_block *sb, int type)
static int reiserfs_quota_on(struct super_block *sb, int type, int format_id,
struct path *path)
static ssize_t reiserfs_quota_read(struct super_block *sb, int type, char *data,
size_t len, loff_t off)
static ssize_t reiserfs_quota_write(struct super_block *sb, int type,
const char *data, size_t len, loff_t off)
static struct dentry *get_super_block(struct file_system_type *fs_type,
int flags, const char *dev_name,
void *data)
static int __init init_reiserfs_fs(void)
static void __exit exit_reiserfs_fs(void)
struct file_system_type reiserfs_fs_type = ;
MODULE_DESCRIPTION("ReiserFS journaled filesystem");
MODULE_AUTHOR("Hans Reiser <reiser@namesys.com>");
MODULE_LICENSE("GPL");
module_init(init_reiserfs_fs);
module_exit(exit_reiserfs_fs);

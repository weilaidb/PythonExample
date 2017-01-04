int ecryptfs_verbosity = 0;
module_param(ecryptfs_verbosity, int, 0);
MODULE_PARM_DESC(ecryptfs_verbosity,
"Initial verbosity level (0 or 1; defaults to "
"0, which is Quiet)");
unsigned int ecryptfs_message_buf_len = ECRYPTFS_DEFAULT_MSG_CTX_ELEMS;
module_param(ecryptfs_message_buf_len, uint, 0);
MODULE_PARM_DESC(ecryptfs_message_buf_len,
"Number of message buffer elements");
signed long ecryptfs_message_wait_timeout = ECRYPTFS_MAX_MSG_CTX_TTL / HZ;
module_param(ecryptfs_message_wait_timeout, long, 0);
MODULE_PARM_DESC(ecryptfs_message_wait_timeout,
"Maximum number of seconds that an operation will "
"sleep while waiting for a message response from "
"userspace");
unsigned int ecryptfs_number_of_users = ECRYPTFS_DEFAULT_NUM_USERS;
module_param(ecryptfs_number_of_users, uint, 0);
MODULE_PARM_DESC(ecryptfs_number_of_users, "An estimate of the number of "
"concurrent users of eCryptfs");
void __ecryptfs_printk(const char *fmt, ...)
static int ecryptfs_init_lower_file(struct dentry *dentry,
struct file **lower_file)
int ecryptfs_get_lower_file(struct dentry *dentry, struct inode *inode)
void ecryptfs_put_lower_file(struct inode *inode)
enum ;
static const match_table_t tokens = ;
static int ecryptfs_init_global_auth_toks(
struct ecryptfs_mount_crypt_stat *mount_crypt_stat)
static void ecryptfs_init_mount_crypt_stat(
struct ecryptfs_mount_crypt_stat *mount_crypt_stat)
static int ecryptfs_parse_options(struct ecryptfs_sb_info *sbi, char *options,
uid_t *check_ruid)
struct kmem_cache *ecryptfs_sb_info_cache;
static struct file_system_type ecryptfs_fs_type;
static struct dentry *ecryptfs_mount(struct file_system_type *fs_type, int flags,
const char *dev_name, void *raw_data)
static void ecryptfs_kill_block_super(struct super_block *sb)
static struct file_system_type ecryptfs_fs_type = ;
static void
inode_info_init_once(void *vptr)
static struct ecryptfs_cache_info  ecryptfs_cache_infos[] = ;
static void ecryptfs_free_kmem_caches(void)
static int ecryptfs_init_kmem_caches(void)
static struct kobject *ecryptfs_kobj;
static ssize_t version_show(struct kobject *kobj,
struct kobj_attribute *attr, char *buff)
static struct kobj_attribute version_attr = __ATTR_RO(version);
static struct attribute *attributes[] = ;
static struct attribute_group attr_group = ;
static int do_sysfs_registration(void)
static void do_sysfs_unregistration(void)
static int __init ecryptfs_init(void)
static void __exit ecryptfs_exit(void)
MODULE_AUTHOR("Michael A. Halcrow <mhalcrow@us.ibm.com>");
MODULE_DESCRIPTION("eCryptfs");
MODULE_LICENSE("GPL");
module_init(ecryptfs_init)
module_exit(ecryptfs_exit)

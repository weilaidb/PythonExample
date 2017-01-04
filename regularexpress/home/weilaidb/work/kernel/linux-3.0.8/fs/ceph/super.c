static void ceph_put_super(struct super_block *s)
static int ceph_statfs(struct dentry *dentry, struct kstatfs *buf)
static int ceph_sync_fs(struct super_block *sb, int wait)
enum ;
static match_table_t fsopt_tokens = ;
static int parse_fsopt_token(char *c, void *private)
static void destroy_mount_options(struct ceph_mount_options *args)
static int strcmp_null(const char *s1, const char *s2)
static int compare_mount_options(struct ceph_mount_options *new_fsopt,
struct ceph_options *new_opt,
struct ceph_fs_client *fsc)
static int parse_mount_options(struct ceph_mount_options **pfsopt,
struct ceph_options **popt,
int flags, char *options,
const char *dev_name,
const char **path)
static int ceph_show_options(struct seq_file *m, struct vfsmount *mnt)
static int extra_mon_dispatch(struct ceph_client *client, struct ceph_msg *msg)
struct ceph_fs_client *create_fs_client(struct ceph_mount_options *fsopt,
struct ceph_options *opt)
void destroy_fs_client(struct ceph_fs_client *fsc)
struct kmem_cache *ceph_inode_cachep;
struct kmem_cache *ceph_cap_cachep;
struct kmem_cache *ceph_dentry_cachep;
struct kmem_cache *ceph_file_cachep;
static void ceph_inode_init_once(void *foo)
static int __init init_caches(void)
static void destroy_caches(void)
static void ceph_umount_begin(struct super_block *sb)
static const struct super_operations ceph_super_ops = ;
static struct dentry *open_root_dentry(struct ceph_fs_client *fsc,
const char *path,
unsigned long started)
static struct dentry *ceph_real_mount(struct ceph_fs_client *fsc,
const char *path)
static int ceph_set_super(struct super_block *s, void *data)
static int ceph_compare_super(struct super_block *sb, void *data)
static atomic_long_t bdi_seq = ATOMIC_LONG_INIT(0);
static int ceph_register_bdi(struct super_block *sb,
struct ceph_fs_client *fsc)
static struct dentry *ceph_mount(struct file_system_type *fs_type,
int flags, const char *dev_name, void *data)
static void ceph_kill_sb(struct super_block *s)
static struct file_system_type ceph_fs_type = ;
#define _STRINGIFY(x) #x
#define STRINGIFY(x) _STRINGIFY(x)
static int __init init_ceph(void)
static void __exit exit_ceph(void)
module_init(init_ceph);
module_exit(exit_ceph);
MODULE_AUTHOR("Sage Weil <sage@newdream.net>");
MODULE_AUTHOR("Yehuda Sadeh <yehuda@hq.newdream.net>");
MODULE_AUTHOR("Patience Warnick <patience@newdream.net>");
MODULE_DESCRIPTION("Ceph filesystem for Linux");
MODULE_LICENSE("GPL");

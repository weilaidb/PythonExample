static DEFINE_SPINLOCK(v9fs_sessionlist_lock);
static LIST_HEAD(v9fs_sessionlist);
struct kmem_cache *v9fs_inode_cache;
enum ;
static const match_table_t tokens = ;
static int get_cache_mode(char *s)
static int v9fs_parse_options(struct v9fs_session_info *v9ses, char *opts)
struct p9_fid *v9fs_session_init(struct v9fs_session_info *v9ses,
const char *dev_name, char *data)
void v9fs_session_close(struct v9fs_session_info *v9ses)
void v9fs_session_cancel(struct v9fs_session_info *v9ses)
void v9fs_session_begin_cancel(struct v9fs_session_info *v9ses)
extern int v9fs_error_init(void);
static struct kobject *v9fs_kobj;
static ssize_t caches_show(struct kobject *kobj,
struct kobj_attribute *attr,
char *buf)
static struct kobj_attribute v9fs_attr_cache = __ATTR_RO(caches);
static struct attribute *v9fs_attrs[] = ;
static struct attribute_group v9fs_attr_group = ;
static int v9fs_sysfs_init(void)
static void v9fs_sysfs_cleanup(void)
static void v9fs_inode_init_once(void *foo)
static int v9fs_init_inode_cache(void)
static void v9fs_destroy_inode_cache(void)
static int v9fs_cache_register(void)
static void v9fs_cache_unregister(void)
static int __init init_v9fs(void)
static void __exit exit_v9fs(void)
module_init(init_v9fs)
module_exit(exit_v9fs)
MODULE_AUTHOR("Latchesar Ionkov <lucho@ionkov.net>");
MODULE_AUTHOR("Eric Van Hensbergen <ericvh@gmail.com>");
MODULE_AUTHOR("Ron Minnich <rminnich@lanl.gov>");
MODULE_LICENSE("GPL");

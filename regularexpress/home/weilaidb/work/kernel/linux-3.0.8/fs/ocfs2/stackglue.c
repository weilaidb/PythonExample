#define OCFS2_STACK_PLUGIN_O2CB		"o2cb"
#define OCFS2_STACK_PLUGIN_USER		"user"
#define OCFS2_MAX_HB_CTL_PATH		256
static struct ocfs2_protocol_version locking_max_version;
static DEFINE_SPINLOCK(ocfs2_stack_lock);
static LIST_HEAD(ocfs2_stack_list);
static char cluster_stack_name[OCFS2_STACK_LABEL_LEN + 1];
static char ocfs2_hb_ctl_path[OCFS2_MAX_HB_CTL_PATH] = "/sbin/ocfs2_hb_ctl";
static struct ocfs2_stack_plugin *active_stack;
static struct ocfs2_stack_plugin *ocfs2_stack_lookup(const char *name)
static int ocfs2_stack_driver_request(const char *stack_name,
const char *plugin_name)
static int ocfs2_stack_driver_get(const char *stack_name)
static void ocfs2_stack_driver_put(void)
int ocfs2_stack_glue_register(struct ocfs2_stack_plugin *plugin)
EXPORT_SYMBOL_GPL(ocfs2_stack_glue_register);
void ocfs2_stack_glue_unregister(struct ocfs2_stack_plugin *plugin)
EXPORT_SYMBOL_GPL(ocfs2_stack_glue_unregister);
void ocfs2_stack_glue_set_max_proto_version(struct ocfs2_protocol_version *max_proto)
EXPORT_SYMBOL_GPL(ocfs2_stack_glue_set_max_proto_version);
int ocfs2_dlm_lock(struct ocfs2_cluster_connection *conn,
int mode,
struct ocfs2_dlm_lksb *lksb,
u32 flags,
void *name,
unsigned int namelen)
EXPORT_SYMBOL_GPL(ocfs2_dlm_lock);
int ocfs2_dlm_unlock(struct ocfs2_cluster_connection *conn,
struct ocfs2_dlm_lksb *lksb,
u32 flags)
EXPORT_SYMBOL_GPL(ocfs2_dlm_unlock);
int ocfs2_dlm_lock_status(struct ocfs2_dlm_lksb *lksb)
EXPORT_SYMBOL_GPL(ocfs2_dlm_lock_status);
int ocfs2_dlm_lvb_valid(struct ocfs2_dlm_lksb *lksb)
EXPORT_SYMBOL_GPL(ocfs2_dlm_lvb_valid);
void *ocfs2_dlm_lvb(struct ocfs2_dlm_lksb *lksb)
EXPORT_SYMBOL_GPL(ocfs2_dlm_lvb);
void ocfs2_dlm_dump_lksb(struct ocfs2_dlm_lksb *lksb)
EXPORT_SYMBOL_GPL(ocfs2_dlm_dump_lksb);
int ocfs2_stack_supports_plocks(void)
EXPORT_SYMBOL_GPL(ocfs2_stack_supports_plocks);
int ocfs2_plock(struct ocfs2_cluster_connection *conn, u64 ino,
struct file *file, int cmd, struct file_lock *fl)
EXPORT_SYMBOL_GPL(ocfs2_plock);
int ocfs2_cluster_connect(const char *stack_name,
const char *group,
int grouplen,
struct ocfs2_locking_protocol *lproto,
void (*recovery_handler)(int node_num,
void *recovery_data),
void *recovery_data,
struct ocfs2_cluster_connection **conn)
EXPORT_SYMBOL_GPL(ocfs2_cluster_connect);
int ocfs2_cluster_connect_agnostic(const char *group,
int grouplen,
struct ocfs2_locking_protocol *lproto,
void (*recovery_handler)(int node_num,
void *recovery_data),
void *recovery_data,
struct ocfs2_cluster_connection **conn)
EXPORT_SYMBOL_GPL(ocfs2_cluster_connect_agnostic);
int ocfs2_cluster_disconnect(struct ocfs2_cluster_connection *conn,
int hangup_pending)
EXPORT_SYMBOL_GPL(ocfs2_cluster_disconnect);
static void ocfs2_leave_group(const char *group)
void ocfs2_cluster_hangup(const char *group, int grouplen)
EXPORT_SYMBOL_GPL(ocfs2_cluster_hangup);
int ocfs2_cluster_this_node(unsigned int *node)
EXPORT_SYMBOL_GPL(ocfs2_cluster_this_node);
static ssize_t ocfs2_max_locking_protocol_show(struct kobject *kobj,
struct kobj_attribute *attr,
char *buf)
static struct kobj_attribute ocfs2_attr_max_locking_protocol =
__ATTR(max_locking_protocol, S_IFREG | S_IRUGO,
ocfs2_max_locking_protocol_show, NULL);
static ssize_t ocfs2_loaded_cluster_plugins_show(struct kobject *kobj,
struct kobj_attribute *attr,
char *buf)
static struct kobj_attribute ocfs2_attr_loaded_cluster_plugins =
__ATTR(loaded_cluster_plugins, S_IFREG | S_IRUGO,
ocfs2_loaded_cluster_plugins_show, NULL);
static ssize_t ocfs2_active_cluster_plugin_show(struct kobject *kobj,
struct kobj_attribute *attr,
char *buf)
static struct kobj_attribute ocfs2_attr_active_cluster_plugin =
__ATTR(active_cluster_plugin, S_IFREG | S_IRUGO,
ocfs2_active_cluster_plugin_show, NULL);
static ssize_t ocfs2_cluster_stack_show(struct kobject *kobj,
struct kobj_attribute *attr,
char *buf)
static ssize_t ocfs2_cluster_stack_store(struct kobject *kobj,
struct kobj_attribute *attr,
const char *buf, size_t count)
static struct kobj_attribute ocfs2_attr_cluster_stack =
__ATTR(cluster_stack, S_IFREG | S_IRUGO | S_IWUSR,
ocfs2_cluster_stack_show,
ocfs2_cluster_stack_store);
static struct attribute *ocfs2_attrs[] = ;
static struct attribute_group ocfs2_attr_group = ;
static struct kset *ocfs2_kset;
static void ocfs2_sysfs_exit(void)
static int ocfs2_sysfs_init(void)
#define FS_OCFS2_NM		1
static ctl_table ocfs2_nm_table[] = ;
static ctl_table ocfs2_mod_table[] = ;
static ctl_table ocfs2_kern_table[] = ;
static ctl_table ocfs2_root_table[] = ;
static struct ctl_table_header *ocfs2_table_header = NULL;
static int __init ocfs2_stack_glue_init(void)
static void __exit ocfs2_stack_glue_exit(void)
MODULE_AUTHOR("Oracle");
MODULE_DESCRIPTION("ocfs2 cluter stack glue layer");
MODULE_LICENSE("GPL");
module_init(ocfs2_stack_glue_init);
module_exit(ocfs2_stack_glue_exit);

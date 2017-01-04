static int			ls_count;
static struct mutex		ls_lock;
static struct list_head		lslist;
static spinlock_t		lslist_lock;
static struct task_struct *	scand_task;
static ssize_t dlm_control_store(struct dlm_ls *ls, const char *buf, size_t len)
static ssize_t dlm_event_store(struct dlm_ls *ls, const char *buf, size_t len)
static ssize_t dlm_id_show(struct dlm_ls *ls, char *buf)
static ssize_t dlm_id_store(struct dlm_ls *ls, const char *buf, size_t len)
static ssize_t dlm_recover_status_show(struct dlm_ls *ls, char *buf)
static ssize_t dlm_recover_nodeid_show(struct dlm_ls *ls, char *buf)
struct dlm_attr ;
static struct dlm_attr dlm_attr_control = ;
static struct dlm_attr dlm_attr_event = ;
static struct dlm_attr dlm_attr_id = ;
static struct dlm_attr dlm_attr_recover_status = ;
static struct dlm_attr dlm_attr_recover_nodeid = ;
static struct attribute *dlm_attrs[] = ;
static ssize_t dlm_attr_show(struct kobject *kobj, struct attribute *attr,
char *buf)
static ssize_t dlm_attr_store(struct kobject *kobj, struct attribute *attr,
const char *buf, size_t len)
static void lockspace_kobj_release(struct kobject *k)
static const struct sysfs_ops dlm_attr_ops = ;
static struct kobj_type dlm_ktype = ;
static struct kset *dlm_kset;
static int do_uevent(struct dlm_ls *ls, int in)
static int dlm_uevent(struct kset *kset, struct kobject *kobj,
struct kobj_uevent_env *env)
static struct kset_uevent_ops dlm_uevent_ops = ;
int __init dlm_lockspace_init(void)
void dlm_lockspace_exit(void)
static struct dlm_ls *find_ls_to_scan(void)
static int dlm_scand(void *data)
static int dlm_scand_start(void)
static void dlm_scand_stop(void)
struct dlm_ls *dlm_find_lockspace_global(uint32_t id)
struct dlm_ls *dlm_find_lockspace_local(dlm_lockspace_t *lockspace)
struct dlm_ls *dlm_find_lockspace_device(int minor)
void dlm_put_lockspace(struct dlm_ls *ls)
static void remove_lockspace(struct dlm_ls *ls)
static int threads_start(void)
static void threads_stop(void)
static int new_lockspace(const char *name, int namelen, void **lockspace,
uint32_t flags, int lvblen)
int dlm_new_lockspace(const char *name, int namelen, void **lockspace,
uint32_t flags, int lvblen)
static int lockspace_busy(struct dlm_ls *ls)
static int release_lockspace(struct dlm_ls *ls, int force)
int dlm_release_lockspace(void *lockspace, int force)
void dlm_stop_lockspaces(void)

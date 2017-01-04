static int populate_dir(struct kobject *kobj)
static int create_dir(struct kobject *kobj)
static int get_kobj_path_length(struct kobject *kobj)
static void fill_kobj_path(struct kobject *kobj, char *path, int length)
char *kobject_get_path(struct kobject *kobj, gfp_t gfp_mask)
EXPORT_SYMBOL_GPL(kobject_get_path);
static void kobj_kset_join(struct kobject *kobj)
static void kobj_kset_leave(struct kobject *kobj)
static void kobject_init_internal(struct kobject *kobj)
static int kobject_add_internal(struct kobject *kobj)
int kobject_set_name_vargs(struct kobject *kobj, const char *fmt,
va_list vargs)
int kobject_set_name(struct kobject *kobj, const char *fmt, ...)
EXPORT_SYMBOL(kobject_set_name);
void kobject_init(struct kobject *kobj, struct kobj_type *ktype)
EXPORT_SYMBOL(kobject_init);
static int kobject_add_varg(struct kobject *kobj, struct kobject *parent,
const char *fmt, va_list vargs)
int kobject_add(struct kobject *kobj, struct kobject *parent,
const char *fmt, ...)
EXPORT_SYMBOL(kobject_add);
int kobject_init_and_add(struct kobject *kobj, struct kobj_type *ktype,
struct kobject *parent, const char *fmt, ...)
EXPORT_SYMBOL_GPL(kobject_init_and_add);
int kobject_rename(struct kobject *kobj, const char *new_name)
EXPORT_SYMBOL_GPL(kobject_rename);
int kobject_move(struct kobject *kobj, struct kobject *new_parent)
void kobject_del(struct kobject *kobj)
struct kobject *kobject_get(struct kobject *kobj)
static void kobject_cleanup(struct kobject *kobj)
static void kobject_release(struct kref *kref)
void kobject_put(struct kobject *kobj)
static void dynamic_kobj_release(struct kobject *kobj)
static struct kobj_type dynamic_kobj_ktype = ;
struct kobject *kobject_create(void)
struct kobject *kobject_create_and_add(const char *name, struct kobject *parent)
EXPORT_SYMBOL_GPL(kobject_create_and_add);
void kset_init(struct kset *k)
static ssize_t kobj_attr_show(struct kobject *kobj, struct attribute *attr,
char *buf)
static ssize_t kobj_attr_store(struct kobject *kobj, struct attribute *attr,
const char *buf, size_t count)
const struct sysfs_ops kobj_sysfs_ops = ;
int kset_register(struct kset *k)
void kset_unregister(struct kset *k)
struct kobject *kset_find_obj(struct kset *kset, const char *name)
struct kobject *kset_find_obj_hinted(struct kset *kset, const char *name,
struct kobject *hint)
static void kset_release(struct kobject *kobj)
static struct kobj_type kset_ktype = ;
static struct kset *kset_create(const char *name,
const struct kset_uevent_ops *uevent_ops,
struct kobject *parent_kobj)
struct kset *kset_create_and_add(const char *name,
const struct kset_uevent_ops *uevent_ops,
struct kobject *parent_kobj)
EXPORT_SYMBOL_GPL(kset_create_and_add);
static DEFINE_SPINLOCK(kobj_ns_type_lock);
static const struct kobj_ns_type_operations *kobj_ns_ops_tbl[KOBJ_NS_TYPES];
int kobj_ns_type_register(const struct kobj_ns_type_operations *ops)
int kobj_ns_type_registered(enum kobj_ns_type type)
const struct kobj_ns_type_operations *kobj_child_ns_ops(struct kobject *parent)
const struct kobj_ns_type_operations *kobj_ns_ops(struct kobject *kobj)
void *kobj_ns_grab_current(enum kobj_ns_type type)
const void *kobj_ns_netlink(enum kobj_ns_type type, struct sock *sk)
const void *kobj_ns_initial(enum kobj_ns_type type)
void kobj_ns_drop(enum kobj_ns_type type, void *ns)
EXPORT_SYMBOL(kobject_get);
EXPORT_SYMBOL(kobject_put);
EXPORT_SYMBOL(kobject_del);
EXPORT_SYMBOL(kset_register);
EXPORT_SYMBOL(kset_unregister);

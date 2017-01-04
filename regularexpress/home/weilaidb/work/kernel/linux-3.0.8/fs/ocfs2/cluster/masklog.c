struct mlog_bits mlog_and_bits = MLOG_BITS_RHS(MLOG_INITIAL_AND_MASK);
EXPORT_SYMBOL_GPL(mlog_and_bits);
struct mlog_bits mlog_not_bits = MLOG_BITS_RHS(0);
EXPORT_SYMBOL_GPL(mlog_not_bits);
static ssize_t mlog_mask_show(u64 mask, char *buf)
static ssize_t mlog_mask_store(u64 mask, const char *buf, size_t count)
struct mlog_attribute ;
#define to_mlog_attr(_attr) container_of(_attr, struct mlog_attribute, attr)
#define define_mask(_name)
static struct mlog_attribute mlog_attrs[MLOG_MAX_BITS] = ;
static struct attribute *mlog_attr_ptrs[MLOG_MAX_BITS] = ;
static ssize_t mlog_show(struct kobject *obj, struct attribute *attr,
char *buf)
static ssize_t mlog_store(struct kobject *obj, struct attribute *attr,
const char *buf, size_t count)
static const struct sysfs_ops mlog_attr_ops = ;
static struct kobj_type mlog_ktype = ;
static struct kset mlog_kset = ;
int mlog_sys_init(struct kset *o2cb_kset)
void mlog_sys_shutdown(void)

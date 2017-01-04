#define KERNEL_ATTR_RO(_name) \
static struct kobj_attribute _name##_attr = __ATTR_RO(_name)
#define KERNEL_ATTR_RW(_name) \
static struct kobj_attribute _name##_attr = \
__ATTR(_name, 0644, _name##_show, _name##_store)
#if defined(CONFIG_HOTPLUG)
static ssize_t uevent_seqnum_show(struct kobject *kobj,
struct kobj_attribute *attr, char *buf)
KERNEL_ATTR_RO(uevent_seqnum);
static ssize_t uevent_helper_show(struct kobject *kobj,
struct kobj_attribute *attr, char *buf)
static ssize_t uevent_helper_store(struct kobject *kobj,
struct kobj_attribute *attr,
const char *buf, size_t count)
KERNEL_ATTR_RW(uevent_helper);
static ssize_t profiling_show(struct kobject *kobj,
struct kobj_attribute *attr, char *buf)
static ssize_t profiling_store(struct kobject *kobj,
struct kobj_attribute *attr,
const char *buf, size_t count)
KERNEL_ATTR_RW(profiling);
static ssize_t kexec_loaded_show(struct kobject *kobj,
struct kobj_attribute *attr, char *buf)
KERNEL_ATTR_RO(kexec_loaded);
static ssize_t kexec_crash_loaded_show(struct kobject *kobj,
struct kobj_attribute *attr, char *buf)
KERNEL_ATTR_RO(kexec_crash_loaded);
static ssize_t kexec_crash_size_show(struct kobject *kobj,
struct kobj_attribute *attr, char *buf)
static ssize_t kexec_crash_size_store(struct kobject *kobj,
struct kobj_attribute *attr,
const char *buf, size_t count)
KERNEL_ATTR_RW(kexec_crash_size);
static ssize_t vmcoreinfo_show(struct kobject *kobj,
struct kobj_attribute *attr, char *buf)
KERNEL_ATTR_RO(vmcoreinfo);
static ssize_t fscaps_show(struct kobject *kobj,
struct kobj_attribute *attr, char *buf)
KERNEL_ATTR_RO(fscaps);
extern const void __start_notes __attribute__((weak));
extern const void __stop_notes __attribute__((weak));
#define	notes_size (&__stop_notes - &__start_notes)
static ssize_t notes_read(struct file *filp, struct kobject *kobj,
struct bin_attribute *bin_attr,
char *buf, loff_t off, size_t count)
static struct bin_attribute notes_attr = ;
struct kobject *kernel_kobj;
EXPORT_SYMBOL_GPL(kernel_kobj);
static struct attribute * kernel_attrs[] = ;
static struct attribute_group kernel_attr_group = ;
static int __init ksysfs_init(void)
core_initcall(ksysfs_init);

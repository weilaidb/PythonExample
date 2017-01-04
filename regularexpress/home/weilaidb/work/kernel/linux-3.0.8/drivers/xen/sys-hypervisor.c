#define HYPERVISOR_ATTR_RO(_name) \
static struct hyp_sysfs_attr  _name##_attr = __ATTR_RO(_name)
#define HYPERVISOR_ATTR_RW(_name) \
static struct hyp_sysfs_attr _name##_attr = \
__ATTR(_name, 0644, _name##_show, _name##_store)
struct hyp_sysfs_attr ;
static ssize_t type_show(struct hyp_sysfs_attr *attr, char *buffer)
HYPERVISOR_ATTR_RO(type);
static int __init xen_sysfs_type_init(void)
static void xen_sysfs_type_destroy(void)
static ssize_t major_show(struct hyp_sysfs_attr *attr, char *buffer)
HYPERVISOR_ATTR_RO(major);
static ssize_t minor_show(struct hyp_sysfs_attr *attr, char *buffer)
HYPERVISOR_ATTR_RO(minor);
static ssize_t extra_show(struct hyp_sysfs_attr *attr, char *buffer)
HYPERVISOR_ATTR_RO(extra);
static struct attribute *version_attrs[] = ;
static struct attribute_group version_group = ;
static int __init xen_sysfs_version_init(void)
static void xen_sysfs_version_destroy(void)
static ssize_t uuid_show(struct hyp_sysfs_attr *attr, char *buffer)
HYPERVISOR_ATTR_RO(uuid);
static int __init xen_sysfs_uuid_init(void)
static void xen_sysfs_uuid_destroy(void)
static ssize_t compiler_show(struct hyp_sysfs_attr *attr, char *buffer)
HYPERVISOR_ATTR_RO(compiler);
static ssize_t compiled_by_show(struct hyp_sysfs_attr *attr, char *buffer)
HYPERVISOR_ATTR_RO(compiled_by);
static ssize_t compile_date_show(struct hyp_sysfs_attr *attr, char *buffer)
HYPERVISOR_ATTR_RO(compile_date);
static struct attribute *xen_compile_attrs[] = ;
static struct attribute_group xen_compilation_group = ;
static int __init xen_compilation_init(void)
static void xen_compilation_destroy(void)
static ssize_t capabilities_show(struct hyp_sysfs_attr *attr, char *buffer)
HYPERVISOR_ATTR_RO(capabilities);
static ssize_t changeset_show(struct hyp_sysfs_attr *attr, char *buffer)
HYPERVISOR_ATTR_RO(changeset);
static ssize_t virtual_start_show(struct hyp_sysfs_attr *attr, char *buffer)
HYPERVISOR_ATTR_RO(virtual_start);
static ssize_t pagesize_show(struct hyp_sysfs_attr *attr, char *buffer)
HYPERVISOR_ATTR_RO(pagesize);
static ssize_t xen_feature_show(int index, char *buffer)
static ssize_t features_show(struct hyp_sysfs_attr *attr, char *buffer)
HYPERVISOR_ATTR_RO(features);
static struct attribute *xen_properties_attrs[] = ;
static struct attribute_group xen_properties_group = ;
static int __init xen_properties_init(void)
static void xen_properties_destroy(void)
static int __init hyper_sysfs_init(void)
static void __exit hyper_sysfs_exit(void)
module_init(hyper_sysfs_init);
module_exit(hyper_sysfs_exit);
static ssize_t hyp_sysfs_show(struct kobject *kobj,
struct attribute *attr,
char *buffer)
static ssize_t hyp_sysfs_store(struct kobject *kobj,
struct attribute *attr,
const char *buffer,
size_t len)
static const struct sysfs_ops hyp_sysfs_ops = ;
static struct kobj_type hyp_sysfs_kobj_type = ;
static int __init hypervisor_subsys_init(void)
device_initcall(hypervisor_subsys_init);

struct kobject *sgi_uv_kobj;
static ssize_t partition_id_show(struct kobject *kobj,
struct kobj_attribute *attr, char *buf)
static ssize_t coherence_id_show(struct kobject *kobj,
struct kobj_attribute *attr, char *buf)
static struct kobj_attribute partition_id_attr =
__ATTR(partition_id, S_IRUGO, partition_id_show, NULL);
static struct kobj_attribute coherence_id_attr =
__ATTR(coherence_id, S_IRUGO, coherence_id_show, NULL);
static int __init sgi_uv_sysfs_init(void)
device_initcall(sgi_uv_sysfs_init);

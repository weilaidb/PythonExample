static ssize_t merisc_model_show(struct class *class, char *buf)
static ssize_t merisc_revision_show(struct class *class, char *buf)
static struct class_attribute merisc_class_attrs[] = ;
struct class merisc_class = ;
static int __init merisc_sysfs_init(void)
postcore_initcall(merisc_sysfs_init);

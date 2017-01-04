struct legacy_slot ;
static LIST_HEAD(legacy_list);
static ssize_t legacy_show(struct kobject *kobj, struct attribute *attr,
char *buf)
static void remove_callback(void *data)
static ssize_t legacy_store(struct kobject *kobj, struct attribute *attr,
const char *buf, size_t len)
static struct attribute *legacy_attrs[] = ;
static void legacy_release(struct kobject *kobj)
static struct kobj_type legacy_ktype = ;
static int legacy_add_slot(struct pci_dev *pdev)
static int legacy_notify(struct notifier_block *nb,
unsigned long action, void *data)
static struct notifier_block legacy_notifier = ;
static int __init init_legacy(void)
module_init(init_legacy);
static void __exit remove_legacy(void)
module_exit(remove_legacy);
MODULE_AUTHOR("Trent Piepho <xyzzy@speakeasy.org>");
MODULE_DESCRIPTION("Legacy version of the fakephp interface");
MODULE_LICENSE("GPL");

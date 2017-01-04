unsigned long beacon_timeout_ms = 500;
static
ssize_t beacon_timeout_ms_show(struct class *class,
struct class_attribute *attr,
char *buf)
static
ssize_t beacon_timeout_ms_store(struct class *class,
struct class_attribute *attr,
const char *buf, size_t size)
static struct class_attribute uwb_class_attrs[] = ;
struct class uwb_rc_class = ;
static int __init uwb_subsys_init(void)
module_init(uwb_subsys_init);
static void __exit uwb_subsys_exit(void)
module_exit(uwb_subsys_exit);
MODULE_AUTHOR("Inaky Perez-Gonzalez <inaky.perez-gonzalez@intel.com>");
MODULE_DESCRIPTION("Ultra Wide Band core");
MODULE_LICENSE("GPL");

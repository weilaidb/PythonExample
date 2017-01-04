struct edac_mce_attr ;
#define EDAC_MCE_ATTR(_name, _mode, _show, _store)			\
static struct edac_mce_attr mce_attr_##_name = __ATTR(_name, _mode, _show, _store)
static struct kobject *mce_kobj;
static struct mce i_mce;
#define MCE_INJECT_STORE(reg)						\
static ssize_t edac_inject_##reg##_store(struct kobject *kobj,		\
struct edac_mce_attr *attr,	\
const char *data, size_t count)\
MCE_INJECT_STORE(status);
MCE_INJECT_STORE(misc);
MCE_INJECT_STORE(addr);
#define MCE_INJECT_SHOW(reg)						\
static ssize_t edac_inject_##reg##_show(struct kobject *kobj,		\
struct edac_mce_attr *attr,	\
char *buf)			\
MCE_INJECT_SHOW(status);
MCE_INJECT_SHOW(misc);
MCE_INJECT_SHOW(addr);
EDAC_MCE_ATTR(status, 0644, edac_inject_status_show, edac_inject_status_store);
EDAC_MCE_ATTR(misc, 0644, edac_inject_misc_show, edac_inject_misc_store);
EDAC_MCE_ATTR(addr, 0644, edac_inject_addr_show, edac_inject_addr_store);
static ssize_t edac_inject_bank_store(struct kobject *kobj,
struct edac_mce_attr *attr,
const char *data, size_t count)
static ssize_t edac_inject_bank_show(struct kobject *kobj,
struct edac_mce_attr *attr, char *buf)
EDAC_MCE_ATTR(bank, 0644, edac_inject_bank_show, edac_inject_bank_store);
static struct edac_mce_attr *sysfs_attrs[] = ;
static int __init edac_init_mce_inject(void)
static void __exit edac_exit_mce_inject(void)
module_init(edac_init_mce_inject);
module_exit(edac_exit_mce_inject);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Borislav Petkov <borislav.petkov@amd.com>");
MODULE_AUTHOR("AMD Inc.");
MODULE_DESCRIPTION("MCE injection facility for testing MCE decoding");

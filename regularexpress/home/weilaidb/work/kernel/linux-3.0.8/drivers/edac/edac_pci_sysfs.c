#define EDAC_PCI_SYMLINK	"device"
static int check_pci_errors;
static int edac_pci_panic_on_pe;
static int edac_pci_log_pe = 1;
static int edac_pci_log_npe = 1;
static int edac_pci_poll_msec = 1000;
static atomic_t pci_parity_count = ATOMIC_INIT(0);
static atomic_t pci_nonparity_count = ATOMIC_INIT(0);
static struct kobject *edac_pci_top_main_kobj;
static atomic_t edac_pci_sysfs_refcount = ATOMIC_INIT(0);
int edac_pci_get_check_errors(void)
static int edac_pci_get_log_pe(void)
static int edac_pci_get_log_npe(void)
static int edac_pci_get_panic_on_pe(void)
int edac_pci_get_poll_msec(void)
static ssize_t instance_pe_count_show(struct edac_pci_ctl_info *pci, char *data)
static ssize_t instance_npe_count_show(struct edac_pci_ctl_info *pci,
char *data)
#define to_instance(k) container_of(k, struct edac_pci_ctl_info, kobj)
#define to_instance_attr(a) container_of(a, struct instance_attribute, attr)
static void edac_pci_instance_release(struct kobject *kobj)
struct instance_attribute ;
static ssize_t edac_pci_instance_show(struct kobject *kobj,
struct attribute *attr, char *buffer)
static ssize_t edac_pci_instance_store(struct kobject *kobj,
struct attribute *attr,
const char *buffer, size_t count)
static const struct sysfs_ops pci_instance_ops = ;
#define INSTANCE_ATTR(_name, _mode, _show, _store)	\
static struct instance_attribute attr_instance_##_name = ;
INSTANCE_ATTR(pe_count, S_IRUGO, instance_pe_count_show, NULL);
INSTANCE_ATTR(npe_count, S_IRUGO, instance_npe_count_show, NULL);
static struct instance_attribute *pci_instance_attr[] = ;
static struct kobj_type ktype_pci_instance = ;
static int edac_pci_create_instance_kobj(struct edac_pci_ctl_info *pci, int idx)
static void edac_pci_unregister_sysfs_instance_kobj(
struct edac_pci_ctl_info *pci)
#define to_edacpci(k) container_of(k, struct edac_pci_ctl_info, kobj)
#define to_edacpci_attr(a) container_of(a, struct edac_pci_attr, attr)
static ssize_t edac_pci_int_show(void *ptr, char *buffer)
static ssize_t edac_pci_int_store(void *ptr, const char *buffer, size_t count)
struct edac_pci_dev_attribute ;
static ssize_t edac_pci_dev_show(struct kobject *kobj, struct attribute *attr,
char *buffer)
static ssize_t edac_pci_dev_store(struct kobject *kobj,
struct attribute *attr, const char *buffer,
size_t count)
static const struct sysfs_ops edac_pci_sysfs_ops = ;
#define EDAC_PCI_ATTR(_name,_mode,_show,_store)			\
static struct edac_pci_dev_attribute edac_pci_attr_##_name = ;
#define EDAC_PCI_STRING_ATTR(_name,_data,_mode,_show,_store)	\
static struct edac_pci_dev_attribute edac_pci_attr_##_name = ;
EDAC_PCI_ATTR(check_pci_errors, S_IRUGO | S_IWUSR, edac_pci_int_show,
edac_pci_int_store);
EDAC_PCI_ATTR(edac_pci_log_pe, S_IRUGO | S_IWUSR, edac_pci_int_show,
edac_pci_int_store);
EDAC_PCI_ATTR(edac_pci_log_npe, S_IRUGO | S_IWUSR, edac_pci_int_show,
edac_pci_int_store);
EDAC_PCI_ATTR(edac_pci_panic_on_pe, S_IRUGO | S_IWUSR, edac_pci_int_show,
edac_pci_int_store);
EDAC_PCI_ATTR(pci_parity_count, S_IRUGO, edac_pci_int_show, NULL);
EDAC_PCI_ATTR(pci_nonparity_count, S_IRUGO, edac_pci_int_show, NULL);
static struct edac_pci_dev_attribute *edac_pci_attr[] = ;
static void edac_pci_release_main_kobj(struct kobject *kobj)
static struct kobj_type ktype_edac_pci_main_kobj = ;
static int edac_pci_main_kobj_setup(void)
static void edac_pci_main_kobj_teardown(void)
int edac_pci_create_sysfs(struct edac_pci_ctl_info *pci)
void edac_pci_remove_sysfs(struct edac_pci_ctl_info *pci)
static u16 get_pci_parity_status(struct pci_dev *dev, int secondary)
static void edac_pci_dev_parity_clear(struct pci_dev *dev)
static void edac_pci_dev_parity_test(struct pci_dev *dev)
typedef void (*pci_parity_check_fn_t) (struct pci_dev *dev);
static inline void edac_pci_dev_parity_iterator(pci_parity_check_fn_t fn)
void edac_pci_do_parity_check(void)
void edac_pci_clear_parity_errors(void)
void edac_pci_handle_pe(struct edac_pci_ctl_info *pci, const char *msg)
EXPORT_SYMBOL_GPL(edac_pci_handle_pe);
void edac_pci_handle_npe(struct edac_pci_ctl_info *pci, const char *msg)
EXPORT_SYMBOL_GPL(edac_pci_handle_npe);
module_param(check_pci_errors, int, 0644);
MODULE_PARM_DESC(check_pci_errors,
"Check for PCI bus parity errors: 0=off 1=on");
module_param(edac_pci_panic_on_pe, int, 0644);
MODULE_PARM_DESC(edac_pci_panic_on_pe,
"Panic on PCI Bus Parity error: 0=off 1=on");

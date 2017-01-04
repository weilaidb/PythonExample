#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
static struct pci_dev *hv_pci_dev;
static struct tasklet_struct msg_dpc;
static struct tasklet_struct event_dpc;
unsigned int vmbus_loglevel = (ALL_MODULES << 16 | INFO_LVL);
EXPORT_SYMBOL(vmbus_loglevel);
static int pci_probe_error;
static struct completion probe_event;
static int irq;
static void get_channel_info(struct hv_device *device,
struct hv_device_info *info)
static ssize_t vmbus_show_device_attr(struct device *dev,
struct device_attribute *dev_attr,
char *buf)
static struct device_attribute vmbus_device_attrs[] = ;
static int vmbus_uevent(struct device *device, struct kobj_uevent_env *env)
static int vmbus_match(struct device *device, struct device_driver *driver)
static int vmbus_probe(struct device *child_device)
static int vmbus_remove(struct device *child_device)
static void vmbus_shutdown(struct device *child_device)
static void vmbus_device_release(struct device *device)
static struct bus_type  hv_bus = ;
static const char *driver_name = "hyperv";
struct onmessage_work_context ;
static void vmbus_onmessage_work(struct work_struct *work)
static void vmbus_on_msg_dpc(unsigned long data)
static int vmbus_on_isr(void)
static irqreturn_t vmbus_isr(int irq, void *dev_id)
static int vmbus_bus_init(struct pci_dev *pdev)
int vmbus_child_driver_register(struct device_driver *drv)
EXPORT_SYMBOL(vmbus_child_driver_register);
void vmbus_child_driver_unregister(struct device_driver *drv)
EXPORT_SYMBOL(vmbus_child_driver_unregister);
struct hv_device *vmbus_child_device_create(struct hv_guid *type,
struct hv_guid *instance,
struct vmbus_channel *channel)
int vmbus_child_device_register(struct hv_device *child_device_obj)
void vmbus_child_device_unregister(struct hv_device *device_obj)
static acpi_status vmbus_walk_resources(struct acpi_resource *res, void *irq)
static int vmbus_acpi_add(struct acpi_device *device)
static const struct acpi_device_id vmbus_acpi_device_ids[] = ;
MODULE_DEVICE_TABLE(acpi, vmbus_acpi_device_ids);
static struct acpi_driver vmbus_acpi_driver = ;
static int vmbus_acpi_init(void)
static void vmbus_acpi_exit(void)
static int __devinit hv_pci_probe(struct pci_dev *pdev,
const struct pci_device_id *ent)
static const struct pci_device_id microsoft_hv_pci_table[] = ;
MODULE_DEVICE_TABLE(pci, microsoft_hv_pci_table);
static struct pci_driver hv_bus_driver = ;
static int __init hv_pci_init(void)
MODULE_LICENSE("GPL");
MODULE_VERSION(HV_DRV_VERSION);
module_param(vmbus_loglevel, int, S_IRUGO|S_IWUSR);
module_init(hv_pci_init);

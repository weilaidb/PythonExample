static int debug;
static int check_sta_before_sun;
#define DRIVER_VERSION 	"0.1"
#define DRIVER_AUTHOR	"Alex Chiang <achiang@hp.com>"
#define DRIVER_DESC	"ACPI PCI Slot Detection Driver"
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE("GPL");
MODULE_PARM_DESC(debug, "Debugging mode enabled or not");
module_param(debug, bool, 0644);
#define _COMPONENT		ACPI_PCI_COMPONENT
ACPI_MODULE_NAME("pci_slot");
#define MY_NAME "pci_slot"
#define err(format, arg...) printk(KERN_ERR "%s: " format , MY_NAME , ## arg)
#define info(format, arg...) printk(KERN_INFO "%s: " format , MY_NAME , ## arg)
#define dbg(format, arg...)					\
do  while (0)
#define SLOT_NAME_SIZE 21
struct acpi_pci_slot ;
static int acpi_pci_slot_add(acpi_handle handle);
static void acpi_pci_slot_remove(acpi_handle handle);
static LIST_HEAD(slot_list);
static DEFINE_MUTEX(slot_list_lock);
static struct acpi_pci_driver acpi_pci_slot_driver = ;
static int
check_slot(acpi_handle handle, unsigned long long *sun)
struct callback_args ;
static acpi_status
register_slot(acpi_handle handle, u32 lvl, void *context, void **rv)
static acpi_status
walk_p2p_bridge(acpi_handle handle, u32 lvl, void *context, void **rv)
static int
walk_root_bridge(acpi_handle handle, acpi_walk_callback user_function)
static int
acpi_pci_slot_add(acpi_handle handle)
static void
acpi_pci_slot_remove(acpi_handle handle)
static int do_sta_before_sun(const struct dmi_system_id *d)
static struct dmi_system_id acpi_pci_slot_dmi_table[] __initdata = ;
static int __init
acpi_pci_slot_init(void)
static void __exit
acpi_pci_slot_exit(void)
module_init(acpi_pci_slot_init);
module_exit(acpi_pci_slot_exit);

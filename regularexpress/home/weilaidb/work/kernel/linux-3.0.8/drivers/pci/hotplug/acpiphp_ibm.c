#define DRIVER_VERSION	"1.0.1"
#define DRIVER_AUTHOR	"Irene Zubarev <zubarev@us.ibm.com>, Vernon Mauery <vernux@us.ibm.com>"
#define DRIVER_DESC	"ACPI Hot Plug PCI Controller Driver IBM extension"
static int debug;
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE("GPL");
MODULE_VERSION(DRIVER_VERSION);
module_param(debug, bool, 0644);
MODULE_PARM_DESC(debug, " Debugging mode enabled or not");
#define MY_NAME "acpiphp_ibm"
#undef dbg
#define dbg(format, arg...)				\
do  while (0)
#define FOUND_APCI 0x61504349
#define IBM_HARDWARE_ID1 "IBM37D0"
#define IBM_HARDWARE_ID2 "IBM37D4"
#define hpslot_to_sun(A) (((struct slot *)((A)->private))->acpi_slot->sun)
union apci_descriptor ;
struct notification ;
static int ibm_set_attention_status(struct hotplug_slot *slot, u8 status);
static int ibm_get_attention_status(struct hotplug_slot *slot, u8 *status);
static void ibm_handle_events(acpi_handle handle, u32 event, void *context);
static int ibm_get_table_from_acpi(char **bufp);
static ssize_t ibm_read_apci_table(struct file *filp, struct kobject *kobj,
struct bin_attribute *bin_attr,
char *buffer, loff_t pos, size_t size);
static acpi_status __init ibm_find_acpi_device(acpi_handle handle,
u32 lvl, void *context, void **rv);
static int __init ibm_acpiphp_init(void);
static void __exit ibm_acpiphp_exit(void);
static acpi_handle ibm_acpi_handle;
static struct notification ibm_note;
static struct bin_attribute ibm_apci_table_attr = ;
static struct acpiphp_attention_info ibm_attention_info =
;
static union apci_descriptor *ibm_slot_from_id(int id)
static int ibm_set_attention_status(struct hotplug_slot *slot, u8 status)
static int ibm_get_attention_status(struct hotplug_slot *slot, u8 *status)
static void ibm_handle_events(acpi_handle handle, u32 event, void *context)
static int ibm_get_table_from_acpi(char **bufp)
static ssize_t ibm_read_apci_table(struct file *filp, struct kobject *kobj,
struct bin_attribute *bin_attr,
char *buffer, loff_t pos, size_t size)
static acpi_status __init ibm_find_acpi_device(acpi_handle handle,
u32 lvl, void *context, void **rv)
static int __init ibm_acpiphp_init(void)
static void __exit ibm_acpiphp_exit(void)
module_init(ibm_acpiphp_init);
module_exit(ibm_acpiphp_exit);

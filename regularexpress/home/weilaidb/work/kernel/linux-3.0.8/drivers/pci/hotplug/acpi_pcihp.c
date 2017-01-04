#define MY_NAME	"acpi_pcihp"
#define dbg(fmt, arg...) do  while (0)
#define err(format, arg...) printk(KERN_ERR "%s: " format , MY_NAME , ## arg)
#define info(format, arg...) printk(KERN_INFO "%s: " format , MY_NAME , ## arg)
#define warn(format, arg...) printk(KERN_WARNING "%s: " format , MY_NAME , ## arg)
#define	METHOD_NAME__SUN	"_SUN"
#define	METHOD_NAME_OSHP	"OSHP"
static int debug_acpi;
static acpi_status
decode_type0_hpx_record(union acpi_object *record, struct hotplug_params *hpx)
static acpi_status
decode_type1_hpx_record(union acpi_object *record, struct hotplug_params *hpx)
static acpi_status
decode_type2_hpx_record(union acpi_object *record, struct hotplug_params *hpx)
static acpi_status
acpi_run_hpx(acpi_handle handle, struct hotplug_params *hpx)
static acpi_status
acpi_run_hpp(acpi_handle handle, struct hotplug_params *hpp)
static acpi_status acpi_run_oshp(acpi_handle handle)
int pci_get_hp_params(struct pci_dev *dev, struct hotplug_params *hpp)
EXPORT_SYMBOL_GPL(pci_get_hp_params);
int acpi_get_hp_hw_control_from_firmware(struct pci_dev *pdev, u32 flags)
EXPORT_SYMBOL(acpi_get_hp_hw_control_from_firmware);
static int is_ejectable(acpi_handle handle)
int acpi_pci_check_ejectable(struct pci_bus *pbus, acpi_handle handle)
EXPORT_SYMBOL_GPL(acpi_pci_check_ejectable);
static acpi_status
check_hotplug(acpi_handle handle, u32 lvl, void *context, void **rv)
int acpi_pci_detect_ejectable(acpi_handle handle)
EXPORT_SYMBOL_GPL(acpi_pci_detect_ejectable);
module_param(debug_acpi, bool, 0644);
MODULE_PARM_DESC(debug_acpi, "Debugging mode for ACPI enabled or not");

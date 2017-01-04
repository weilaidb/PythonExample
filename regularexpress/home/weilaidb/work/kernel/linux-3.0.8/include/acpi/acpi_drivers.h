#define __ACPI_DRIVERS_H__
#define ACPI_MAX_STRING			80
#define ACPI_BUS_COMPONENT		0x00010000
#define ACPI_AC_COMPONENT		0x00020000
#define ACPI_BATTERY_COMPONENT		0x00040000
#define ACPI_BUTTON_COMPONENT		0x00080000
#define ACPI_SBS_COMPONENT		0x00100000
#define ACPI_FAN_COMPONENT		0x00200000
#define ACPI_PCI_COMPONENT		0x00400000
#define ACPI_POWER_COMPONENT		0x00800000
#define ACPI_CONTAINER_COMPONENT	0x01000000
#define ACPI_SYSTEM_COMPONENT		0x02000000
#define ACPI_THERMAL_COMPONENT		0x04000000
#define ACPI_MEMORY_DEVICE_COMPONENT	0x08000000
#define ACPI_VIDEO_COMPONENT		0x10000000
#define ACPI_PROCESSOR_COMPONENT	0x20000000
#define ACPI_POWER_HID			"LNXPOWER"
#define ACPI_PROCESSOR_OBJECT_HID	"LNXCPU"
#define ACPI_SYSTEM_HID			"LNXSYSTM"
#define ACPI_THERMAL_HID		"LNXTHERM"
#define ACPI_BUTTON_HID_POWERF		"LNXPWRBN"
#define ACPI_BUTTON_HID_SLEEPF		"LNXSLPBN"
#define ACPI_VIDEO_HID			"LNXVIDEO"
#define ACPI_BAY_HID			"LNXIOBAY"
#define ACPI_DOCK_HID			"LNXDOCK"
#define ACPI_SMBUS_IBM_HID		"SMBUSIBM"
#define ACPI_FIXED_HARDWARE_EVENT	0x100
int acpi_irq_penalty_init(void);
int acpi_pci_link_allocate_irq(acpi_handle handle, int index, int *triggering,
int *polarity, char **name);
int acpi_pci_link_free_irq(acpi_handle handle);
int acpi_pci_irq_add_prt(acpi_handle handle, struct pci_bus *bus);
void acpi_pci_irq_del_prt(struct pci_bus *bus);
struct pci_bus;
struct pci_dev *acpi_get_pci_dev(acpi_handle);
int acpi_pci_bind_root(struct acpi_device *device);
struct pci_bus *pci_acpi_scan_root(struct acpi_pci_root *root);
void pci_acpi_crs_quirks(void);
#define ACPI_PROCESSOR_LIMIT_NONE	0x00
#define ACPI_PROCESSOR_LIMIT_INCREMENT	0x01
#define ACPI_PROCESSOR_LIMIT_DECREMENT	0x02
struct acpi_dock_ops ;
#if defined(CONFIG_ACPI_DOCK) || defined(CONFIG_ACPI_DOCK_MODULE)
extern int is_dock_device(acpi_handle handle);
extern int register_dock_notifier(struct notifier_block *nb);
extern void unregister_dock_notifier(struct notifier_block *nb);
extern int register_hotplug_dock_device(acpi_handle handle,
struct acpi_dock_ops *ops,
void *context);
extern void unregister_hotplug_dock_device(acpi_handle handle);
static inline int is_dock_device(acpi_handle handle)
static inline int register_dock_notifier(struct notifier_block *nb)
static inline void unregister_dock_notifier(struct notifier_block *nb)
static inline int register_hotplug_dock_device(acpi_handle handle,
struct acpi_dock_ops *ops,
void *context)
static inline void unregister_hotplug_dock_device(acpi_handle handle)

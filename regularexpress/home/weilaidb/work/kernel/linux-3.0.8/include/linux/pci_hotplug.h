#define _PCI_HOTPLUG_H
enum pcie_link_width ;
struct hotplug_slot_ops ;
struct hotplug_slot_info ;
struct hotplug_slot ;
#define to_hotplug_slot(n) container_of(n, struct hotplug_slot, kobj)
static inline const char *hotplug_slot_name(const struct hotplug_slot *slot)
extern int __pci_hp_register(struct hotplug_slot *slot, struct pci_bus *pbus,
int nr, const char *name,
struct module *owner, const char *mod_name);
extern int pci_hp_deregister(struct hotplug_slot *slot);
extern int __must_check pci_hp_change_slot_info	(struct hotplug_slot *slot,
struct hotplug_slot_info *info);
static inline int pci_hp_register(struct hotplug_slot *slot,
struct pci_bus *pbus,
int devnr, const char *name)
struct hpp_type0 ;
struct hpp_type1 ;
struct hpp_type2 ;
struct hotplug_params ;
int pci_get_hp_params(struct pci_dev *dev, struct hotplug_params *hpp);
int acpi_get_hp_hw_control_from_firmware(struct pci_dev *dev, u32 flags);
int acpi_pci_check_ejectable(struct pci_bus *pbus, acpi_handle handle);
int acpi_pci_detect_ejectable(acpi_handle handle);
static inline int pci_get_hp_params(struct pci_dev *dev,
struct hotplug_params *hpp)
void pci_configure_slot(struct pci_dev *dev);

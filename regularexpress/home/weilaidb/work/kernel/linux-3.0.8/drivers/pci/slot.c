struct kset *pci_slots_kset;
EXPORT_SYMBOL_GPL(pci_slots_kset);
static ssize_t pci_slot_attr_show(struct kobject *kobj,
struct attribute *attr, char *buf)
static ssize_t pci_slot_attr_store(struct kobject *kobj,
struct attribute *attr, const char *buf, size_t len)
static const struct sysfs_ops pci_slot_sysfs_ops = ;
static ssize_t address_read_file(struct pci_slot *slot, char *buf)
static const char *pci_bus_speed_strings[] = ;
static ssize_t bus_speed_read(enum pci_bus_speed speed, char *buf)
static ssize_t max_speed_read_file(struct pci_slot *slot, char *buf)
static ssize_t cur_speed_read_file(struct pci_slot *slot, char *buf)
static void pci_slot_release(struct kobject *kobj)
static struct pci_slot_attribute pci_slot_attr_address =
__ATTR(address, (S_IFREG | S_IRUGO), address_read_file, NULL);
static struct pci_slot_attribute pci_slot_attr_max_speed =
__ATTR(max_bus_speed, (S_IFREG | S_IRUGO), max_speed_read_file, NULL);
static struct pci_slot_attribute pci_slot_attr_cur_speed =
__ATTR(cur_bus_speed, (S_IFREG | S_IRUGO), cur_speed_read_file, NULL);
static struct attribute *pci_slot_default_attrs[] = ;
static struct kobj_type pci_slot_ktype = ;
static char *make_slot_name(const char *name)
static int rename_slot(struct pci_slot *slot, const char *name)
static struct pci_slot *get_slot(struct pci_bus *parent, int slot_nr)
struct pci_slot *pci_create_slot(struct pci_bus *parent, int slot_nr,
const char *name,
struct hotplug_slot *hotplug)
EXPORT_SYMBOL_GPL(pci_create_slot);
void pci_renumber_slot(struct pci_slot *slot, int slot_nr)
EXPORT_SYMBOL_GPL(pci_renumber_slot);
void pci_destroy_slot(struct pci_slot *slot)
EXPORT_SYMBOL_GPL(pci_destroy_slot);
#if defined(CONFIG_HOTPLUG_PCI) || defined(CONFIG_HOTPLUG_PCI_MODULE)
void pci_hp_create_module_link(struct pci_slot *pci_slot)
EXPORT_SYMBOL_GPL(pci_hp_create_module_link);
void pci_hp_remove_module_link(struct pci_slot *pci_slot)
EXPORT_SYMBOL_GPL(pci_hp_remove_module_link);
static int pci_slot_init(void)
subsys_initcall(pci_slot_init);

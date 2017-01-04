#define MY_NAME	"pci_hotplug"
#define dbg(fmt, arg...) do  while (0)
#define err(format, arg...) printk(KERN_ERR "%s: " format , MY_NAME , ## arg)
#define info(format, arg...) printk(KERN_INFO "%s: " format , MY_NAME , ## arg)
#define warn(format, arg...) printk(KERN_WARNING "%s: " format , MY_NAME , ## arg)
static int debug;
#define DRIVER_VERSION	"0.5"
#define DRIVER_AUTHOR	"Greg Kroah-Hartman <greg@kroah.com>, Scott Murray <scottm@somanetworks.com>"
#define DRIVER_DESC	"PCI Hot Plug PCI Core"
static LIST_HEAD(pci_hotplug_slot_list);
static DEFINE_MUTEX(pci_hp_mutex);
extern int cpci_hotplug_init(int debug);
extern void cpci_hotplug_exit(void);
static inline int cpci_hotplug_init(int debug)
static inline void cpci_hotplug_exit(void)
#define GET_STATUS(name,type)	\
static int get_##name (struct hotplug_slot *slot, type *value)		\
GET_STATUS(power_status, u8)
GET_STATUS(attention_status, u8)
GET_STATUS(latch_status, u8)
GET_STATUS(adapter_status, u8)
static ssize_t power_read_file(struct pci_slot *slot, char *buf)
static ssize_t power_write_file(struct pci_slot *pci_slot, const char *buf,
size_t count)
static struct pci_slot_attribute hotplug_slot_attr_power = ;
static ssize_t attention_read_file(struct pci_slot *slot, char *buf)
static ssize_t attention_write_file(struct pci_slot *slot, const char *buf,
size_t count)
static struct pci_slot_attribute hotplug_slot_attr_attention = ;
static ssize_t latch_read_file(struct pci_slot *slot, char *buf)
static struct pci_slot_attribute hotplug_slot_attr_latch = ;
static ssize_t presence_read_file(struct pci_slot *slot, char *buf)
static struct pci_slot_attribute hotplug_slot_attr_presence = ;
static ssize_t test_write_file(struct pci_slot *pci_slot, const char *buf,
size_t count)
static struct pci_slot_attribute hotplug_slot_attr_test = ;
static bool has_power_file(struct pci_slot *pci_slot)
static bool has_attention_file(struct pci_slot *pci_slot)
static bool has_latch_file(struct pci_slot *pci_slot)
static bool has_adapter_file(struct pci_slot *pci_slot)
static bool has_test_file(struct pci_slot *pci_slot)
static int fs_add_slot(struct pci_slot *slot)
static void fs_remove_slot(struct pci_slot *slot)
static struct hotplug_slot *get_slot_from_name (const char *name)
int __pci_hp_register(struct hotplug_slot *slot, struct pci_bus *bus,
int devnr, const char *name,
struct module *owner, const char *mod_name)
int pci_hp_deregister(struct hotplug_slot *hotplug)
int __must_check pci_hp_change_slot_info(struct hotplug_slot *hotplug,
struct hotplug_slot_info *info)
static int __init pci_hotplug_init (void)
static void __exit pci_hotplug_exit (void)
module_init(pci_hotplug_init);
module_exit(pci_hotplug_exit);
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE("GPL");
module_param(debug, bool, 0644);
MODULE_PARM_DESC(debug, "Debugging mode enabled or not");
EXPORT_SYMBOL_GPL(__pci_hp_register);
EXPORT_SYMBOL_GPL(pci_hp_deregister);
EXPORT_SYMBOL_GPL(pci_hp_change_slot_info);

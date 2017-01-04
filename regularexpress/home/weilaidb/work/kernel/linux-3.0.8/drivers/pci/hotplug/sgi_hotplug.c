MODULE_LICENSE("GPL");
MODULE_AUTHOR("SGI (prarit@sgi.com, dickie@sgi.com, habeck@sgi.com)");
MODULE_DESCRIPTION("SGI Altix Hot Plug PCI Controller Driver");
#define PCI_SLOT_ALREADY_UP		2
#define PCI_SLOT_ALREADY_DOWN		3
#define PCI_L1_ERR			7
#define PCI_EMPTY_33MHZ			15
#define PCIIO_ASIC_TYPE_TIOCA		4
#define PCI_L1_QSIZE			128
#define SN_MAX_HP_SLOTS			32
#define SN_SLOT_NAME_SIZE		33
static struct list_head sn_hp_list;
struct slot ;
struct pcibr_slot_enable_resp ;
struct pcibr_slot_disable_resp ;
enum sn_pci_req_e ;
static int enable_slot(struct hotplug_slot *slot);
static int disable_slot(struct hotplug_slot *slot);
static inline int get_power_status(struct hotplug_slot *slot, u8 *value);
static struct hotplug_slot_ops sn_hotplug_slot_ops = ;
static DEFINE_MUTEX(sn_hotplug_mutex);
static ssize_t path_show(struct pci_slot *pci_slot, char *buf)
static struct pci_slot_attribute sn_slot_path_attr = __ATTR_RO(path);
static int sn_pci_slot_valid(struct pci_bus *pci_bus, int device)
static int sn_pci_bus_valid(struct pci_bus *pci_bus)
static int sn_hp_slot_private_alloc(struct hotplug_slot *bss_hotplug_slot,
struct pci_bus *pci_bus, int device,
char *name)
static struct hotplug_slot * sn_hp_destroy(void)
static void sn_bus_free_data(struct pci_dev *dev)
static int sn_slot_enable(struct hotplug_slot *bss_hotplug_slot,
int device_num, char **ssdt)
static int sn_slot_disable(struct hotplug_slot *bss_hotplug_slot,
int device_num, int action)
static int enable_slot(struct hotplug_slot *bss_hotplug_slot)
static int disable_slot(struct hotplug_slot *bss_hotplug_slot)
static inline int get_power_status(struct hotplug_slot *bss_hotplug_slot,
u8 *value)
static void sn_release_slot(struct hotplug_slot *bss_hotplug_slot)
static int sn_hotplug_slot_register(struct pci_bus *pci_bus)
static int __init sn_pci_hotplug_init(void)
static void __exit sn_pci_hotplug_exit(void)
module_init(sn_pci_hotplug_init);
module_exit(sn_pci_hotplug_exit);

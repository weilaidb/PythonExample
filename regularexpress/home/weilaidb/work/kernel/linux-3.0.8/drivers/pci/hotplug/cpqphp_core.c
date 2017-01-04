int cpqhp_debug;
int cpqhp_legacy_mode;
struct controller *cpqhp_ctrl_list;
struct pci_func *cpqhp_slot_list[256];
struct irq_routing_table *cpqhp_routing_table;
static void __iomem *smbios_table;
static void __iomem *smbios_start;
static void __iomem *cpqhp_rom_start;
static int power_mode;
static int debug;
static int initialized;
#define DRIVER_VERSION	"0.9.8"
#define DRIVER_AUTHOR	"Dan Zink <dan.zink@compaq.com>, Greg Kroah-Hartman <greg@kroah.com>"
#define DRIVER_DESC	"Compaq Hot Plug PCI Controller Driver"
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE("GPL");
module_param(power_mode, bool, 0644);
MODULE_PARM_DESC(power_mode, "Power mode enabled or not");
module_param(debug, bool, 0644);
MODULE_PARM_DESC(debug, "Debugging mode enabled or not");
#define CPQHPC_MODULE_MINOR 208
static inline int is_slot64bit(struct slot *slot)
static inline int is_slot66mhz(struct slot *slot)
static void __iomem * detect_SMBIOS_pointer(void __iomem *begin, void __iomem *end)
static int init_SERR(struct controller * ctrl)
static int init_cpqhp_routing_table(void)
static void pci_print_IRQ_route(void)
static void __iomem *get_subsequent_smbios_entry(void __iomem *smbios_start,
void __iomem *smbios_table,
void __iomem *curr)
static void __iomem *get_SMBIOS_entry(void __iomem *smbios_start,
void __iomem *smbios_table,
u8 type,
void __iomem *previous)
static void release_slot(struct hotplug_slot *hotplug_slot)
static int ctrl_slot_cleanup (struct controller * ctrl)
static int
get_slot_mapping(struct pci_bus *bus, u8 bus_num, u8 dev_num, u8 *slot)
static int
cpqhp_set_attention_status(struct controller *ctrl, struct pci_func *func,
u32 status)
static int set_attention_status (struct hotplug_slot *hotplug_slot, u8 status)
static int process_SI(struct hotplug_slot *hotplug_slot)
static int process_SS(struct hotplug_slot *hotplug_slot)
static int hardware_test(struct hotplug_slot *hotplug_slot, u32 value)
static int get_power_status(struct hotplug_slot *hotplug_slot, u8 *value)
static int get_attention_status(struct hotplug_slot *hotplug_slot, u8 *value)
static int get_latch_status(struct hotplug_slot *hotplug_slot, u8 *value)
static int get_adapter_status(struct hotplug_slot *hotplug_slot, u8 *value)
static struct hotplug_slot_ops cpqphp_hotplug_slot_ops = ;
#define SLOT_NAME_SIZE 10
static int ctrl_slot_setup(struct controller *ctrl,
void __iomem *smbios_start,
void __iomem *smbios_table)
static int one_time_init(void)
static int cpqhpc_probe(struct pci_dev *pdev, const struct pci_device_id *ent)
static void __exit unload_cpqphpd(void)
static struct pci_device_id hpcd_pci_tbl[] = ;
MODULE_DEVICE_TABLE(pci, hpcd_pci_tbl);
static struct pci_driver cpqhpc_driver = ;
static int __init cpqhpc_init(void)
static void __exit cpqhpc_cleanup(void)
module_init(cpqhpc_init);
module_exit(cpqhpc_cleanup);

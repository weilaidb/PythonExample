int rpaphp_debug;
LIST_HEAD(rpaphp_slot_head);
#define DRIVER_VERSION	"0.1"
#define DRIVER_AUTHOR	"Linda Xie <lxie@us.ibm.com>"
#define DRIVER_DESC	"RPA HOT Plug PCI Controller Driver"
#define MAX_LOC_CODE 128
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE("GPL");
module_param_named(debug, rpaphp_debug, bool, 0644);
static int set_attention_status(struct hotplug_slot *hotplug_slot, u8 value)
static int get_power_status(struct hotplug_slot *hotplug_slot, u8 * value)
static int get_attention_status(struct hotplug_slot *hotplug_slot, u8 * value)
static int get_adapter_status(struct hotplug_slot *hotplug_slot, u8 * value)
static enum pci_bus_speed get_max_bus_speed(struct slot *slot)
static int get_children_props(struct device_node *dn, const int **drc_indexes,
const int **drc_names, const int **drc_types,
const int **drc_power_domains)
int rpaphp_get_drc_props(struct device_node *dn, int *drc_index,
char **drc_name, char **drc_type, int *drc_power_domain)
static int is_php_type(char *drc_type)
static int is_php_dn(struct device_node *dn, const int **indexes,
const int **names, const int **types, const int **power_domains)
int rpaphp_add_slot(struct device_node *dn)
static void __exit cleanup_slots(void)
static int __init rpaphp_init(void)
static void __exit rpaphp_exit(void)
static int enable_slot(struct hotplug_slot *hotplug_slot)
static int disable_slot(struct hotplug_slot *hotplug_slot)
struct hotplug_slot_ops rpaphp_hotplug_slot_ops = ;
module_init(rpaphp_init);
module_exit(rpaphp_exit);
EXPORT_SYMBOL_GPL(rpaphp_add_slot);
EXPORT_SYMBOL_GPL(rpaphp_slot_head);
EXPORT_SYMBOL_GPL(rpaphp_get_drc_props);

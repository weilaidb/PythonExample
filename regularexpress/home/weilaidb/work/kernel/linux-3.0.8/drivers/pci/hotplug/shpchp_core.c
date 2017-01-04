int shpchp_debug;
int shpchp_poll_mode;
int shpchp_poll_time;
struct workqueue_struct *shpchp_wq;
struct workqueue_struct *shpchp_ordered_wq;
#define DRIVER_VERSION	"0.4"
#define DRIVER_AUTHOR	"Dan Zink <dan.zink@compaq.com>, Greg Kroah-Hartman <greg@kroah.com>, Dely Sy <dely.l.sy@intel.com>"
#define DRIVER_DESC	"Standard Hot Plug PCI Controller Driver"
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE("GPL");
module_param(shpchp_debug, bool, 0644);
module_param(shpchp_poll_mode, bool, 0644);
module_param(shpchp_poll_time, int, 0644);
MODULE_PARM_DESC(shpchp_debug, "Debugging mode enabled or not");
MODULE_PARM_DESC(shpchp_poll_mode, "Using polling mechanism for hot-plug events or not");
MODULE_PARM_DESC(shpchp_poll_time, "Polling mechanism frequency, in seconds");
#define SHPC_MODULE_NAME "shpchp"
static int set_attention_status (struct hotplug_slot *slot, u8 value);
static int enable_slot		(struct hotplug_slot *slot);
static int disable_slot		(struct hotplug_slot *slot);
static int get_power_status	(struct hotplug_slot *slot, u8 *value);
static int get_attention_status	(struct hotplug_slot *slot, u8 *value);
static int get_latch_status	(struct hotplug_slot *slot, u8 *value);
static int get_adapter_status	(struct hotplug_slot *slot, u8 *value);
static struct hotplug_slot_ops shpchp_hotplug_slot_ops = ;
static void release_slot(struct hotplug_slot *hotplug_slot)
static int init_slots(struct controller *ctrl)
void cleanup_slots(struct controller *ctrl)
static int set_attention_status (struct hotplug_slot *hotplug_slot, u8 status)
static int enable_slot (struct hotplug_slot *hotplug_slot)
static int disable_slot (struct hotplug_slot *hotplug_slot)
static int get_power_status (struct hotplug_slot *hotplug_slot, u8 *value)
static int get_attention_status (struct hotplug_slot *hotplug_slot, u8 *value)
static int get_latch_status (struct hotplug_slot *hotplug_slot, u8 *value)
static int get_adapter_status (struct hotplug_slot *hotplug_slot, u8 *value)
static int is_shpc_capable(struct pci_dev *dev)
static int shpc_probe(struct pci_dev *pdev, const struct pci_device_id *ent)
static void shpc_remove(struct pci_dev *dev)
static struct pci_device_id shpcd_pci_tbl[] = ;
MODULE_DEVICE_TABLE(pci, shpcd_pci_tbl);
static struct pci_driver shpc_driver = ;
static int __init shpcd_init(void)
static void __exit shpcd_cleanup(void)
module_init(shpcd_init);
module_exit(shpcd_cleanup);

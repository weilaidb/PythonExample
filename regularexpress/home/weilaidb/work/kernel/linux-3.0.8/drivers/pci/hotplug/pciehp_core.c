int pciehp_debug;
int pciehp_poll_mode;
int pciehp_poll_time;
int pciehp_force;
struct workqueue_struct *pciehp_wq;
struct workqueue_struct *pciehp_ordered_wq;
#define DRIVER_VERSION	"0.4"
#define DRIVER_AUTHOR	"Dan Zink <dan.zink@compaq.com>, Greg Kroah-Hartman <greg@kroah.com>, Dely Sy <dely.l.sy@intel.com>"
#define DRIVER_DESC	"PCI Express Hot Plug Controller Driver"
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE("GPL");
module_param(pciehp_debug, bool, 0644);
module_param(pciehp_poll_mode, bool, 0644);
module_param(pciehp_poll_time, int, 0644);
module_param(pciehp_force, bool, 0644);
MODULE_PARM_DESC(pciehp_debug, "Debugging mode enabled or not");
MODULE_PARM_DESC(pciehp_poll_mode, "Using polling mechanism for hot-plug events or not");
MODULE_PARM_DESC(pciehp_poll_time, "Polling mechanism frequency, in seconds");
MODULE_PARM_DESC(pciehp_force, "Force pciehp, even if OSHP is missing");
#define PCIE_MODULE_NAME "pciehp"
static int set_attention_status (struct hotplug_slot *slot, u8 value);
static int enable_slot		(struct hotplug_slot *slot);
static int disable_slot		(struct hotplug_slot *slot);
static int get_power_status	(struct hotplug_slot *slot, u8 *value);
static int get_attention_status	(struct hotplug_slot *slot, u8 *value);
static int get_latch_status	(struct hotplug_slot *slot, u8 *value);
static int get_adapter_status	(struct hotplug_slot *slot, u8 *value);
static void release_slot(struct hotplug_slot *hotplug_slot)
static int init_slot(struct controller *ctrl)
static void cleanup_slot(struct controller *ctrl)
static int set_attention_status(struct hotplug_slot *hotplug_slot, u8 status)
static int enable_slot(struct hotplug_slot *hotplug_slot)
static int disable_slot(struct hotplug_slot *hotplug_slot)
static int get_power_status(struct hotplug_slot *hotplug_slot, u8 *value)
static int get_attention_status(struct hotplug_slot *hotplug_slot, u8 *value)
static int get_latch_status(struct hotplug_slot *hotplug_slot, u8 *value)
static int get_adapter_status(struct hotplug_slot *hotplug_slot, u8 *value)
static int pciehp_probe(struct pcie_device *dev)
static void pciehp_remove(struct pcie_device *dev)
static int pciehp_suspend (struct pcie_device *dev)
static int pciehp_resume (struct pcie_device *dev)
static struct pcie_port_service_driver hpdriver_portdrv = ;
static int __init pcied_init(void)
static void __exit pcied_cleanup(void)
module_init(pcied_init);
module_exit(pcied_cleanup);

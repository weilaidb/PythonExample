#define SLOT_NAME_SIZE	10
struct slot ;
static LIST_HEAD(slot_list);
#define MY_NAME	"pcihp_skeleton"
#define dbg(format, arg...)					\
do  while (0)
#define err(format, arg...) printk(KERN_ERR "%s: " format "\n", MY_NAME , ## arg)
#define info(format, arg...) printk(KERN_INFO "%s: " format "\n", MY_NAME , ## arg)
#define warn(format, arg...) printk(KERN_WARNING "%s: " format "\n", MY_NAME , ## arg)
static int debug;
static int num_slots;
#define DRIVER_VERSION	"0.3"
#define DRIVER_AUTHOR	"Greg Kroah-Hartman <greg@kroah.com>"
#define DRIVER_DESC	"Hot Plug PCI Controller Skeleton Driver"
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE("GPL");
module_param(debug, bool, 0644);
MODULE_PARM_DESC(debug, "Debugging mode enabled or not");
static int enable_slot		(struct hotplug_slot *slot);
static int disable_slot		(struct hotplug_slot *slot);
static int set_attention_status (struct hotplug_slot *slot, u8 value);
static int hardware_test	(struct hotplug_slot *slot, u32 value);
static int get_power_status	(struct hotplug_slot *slot, u8 *value);
static int get_attention_status	(struct hotplug_slot *slot, u8 *value);
static int get_latch_status	(struct hotplug_slot *slot, u8 *value);
static int get_adapter_status	(struct hotplug_slot *slot, u8 *value);
static struct hotplug_slot_ops skel_hotplug_slot_ops = ;
static int enable_slot(struct hotplug_slot *hotplug_slot)
static int disable_slot(struct hotplug_slot *hotplug_slot)
static int set_attention_status(struct hotplug_slot *hotplug_slot, u8 status)
static int hardware_test(struct hotplug_slot *hotplug_slot, u32 value)
static int get_power_status(struct hotplug_slot *hotplug_slot, u8 *value)
static int get_attention_status(struct hotplug_slot *hotplug_slot, u8 *value)
static int get_latch_status(struct hotplug_slot *hotplug_slot, u8 *value)
static int get_adapter_status(struct hotplug_slot *hotplug_slot, u8 *value)
static void release_slot(struct hotplug_slot *hotplug_slot)
static void make_slot_name(struct slot *slot)
static int __init init_slots(void)
static void __exit cleanup_slots(void)
static int __init pcihp_skel_init(void)
static void __exit pcihp_skel_exit(void)
module_init(pcihp_skel_init);
module_exit(pcihp_skel_exit);

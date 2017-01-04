#define DRIVER_AUTHOR	"Scott Murray <scottm@somanetworks.com>"
#define DRIVER_DESC	"CompactPCI Hot Plug Core"
#define MY_NAME	"cpci_hotplug"
#define dbg(format, arg...)					\
do  while (0)
#define err(format, arg...) printk(KERN_ERR "%s: " format "\n", MY_NAME , ## arg)
#define info(format, arg...) printk(KERN_INFO "%s: " format "\n", MY_NAME , ## arg)
#define warn(format, arg...) printk(KERN_WARNING "%s: " format "\n", MY_NAME , ## arg)
static DECLARE_RWSEM(list_rwsem);
static LIST_HEAD(slot_list);
static int slots;
static atomic_t extracting;
int cpci_debug;
static struct cpci_hp_controller *controller;
static struct task_struct *cpci_thread;
static int thread_finished;
static int enable_slot(struct hotplug_slot *slot);
static int disable_slot(struct hotplug_slot *slot);
static int set_attention_status(struct hotplug_slot *slot, u8 value);
static int get_power_status(struct hotplug_slot *slot, u8 * value);
static int get_attention_status(struct hotplug_slot *slot, u8 * value);
static int get_adapter_status(struct hotplug_slot *slot, u8 * value);
static int get_latch_status(struct hotplug_slot *slot, u8 * value);
static struct hotplug_slot_ops cpci_hotplug_slot_ops = ;
static int
update_latch_status(struct hotplug_slot *hotplug_slot, u8 value)
static int
update_adapter_status(struct hotplug_slot *hotplug_slot, u8 value)
static int
enable_slot(struct hotplug_slot *hotplug_slot)
static int
disable_slot(struct hotplug_slot *hotplug_slot)
static u8
cpci_get_power_status(struct slot *slot)
static int
get_power_status(struct hotplug_slot *hotplug_slot, u8 * value)
static int
get_attention_status(struct hotplug_slot *hotplug_slot, u8 * value)
static int
set_attention_status(struct hotplug_slot *hotplug_slot, u8 status)
static int
get_adapter_status(struct hotplug_slot *hotplug_slot, u8 * value)
static int
get_latch_status(struct hotplug_slot *hotplug_slot, u8 * value)
static void release_slot(struct hotplug_slot *hotplug_slot)
#define SLOT_NAME_SIZE	6
int
cpci_hp_register_bus(struct pci_bus *bus, u8 first, u8 last)
int
cpci_hp_unregister_bus(struct pci_bus *bus)
static irqreturn_t
cpci_hp_intr(int irq, void *data)
static int
init_slots(int clear_ins)
static int
check_slots(void)
static int
event_thread(void *data)
static int
poll_thread(void *data)
static int
cpci_start_thread(void)
static void
cpci_stop_thread(void)
int
cpci_hp_register_controller(struct cpci_hp_controller *new_controller)
static void
cleanup_slots(void)
int
cpci_hp_unregister_controller(struct cpci_hp_controller *old_controller)
int
cpci_hp_start(void)
int
cpci_hp_stop(void)
int __init
cpci_hotplug_init(int debug)
void __exit
cpci_hotplug_exit(void)
EXPORT_SYMBOL_GPL(cpci_hp_register_controller);
EXPORT_SYMBOL_GPL(cpci_hp_unregister_controller);
EXPORT_SYMBOL_GPL(cpci_hp_register_bus);
EXPORT_SYMBOL_GPL(cpci_hp_unregister_bus);
EXPORT_SYMBOL_GPL(cpci_hp_start);
EXPORT_SYMBOL_GPL(cpci_hp_stop);

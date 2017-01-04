#define MY_NAME	"acpiphp"
#define SLOT_NAME_SIZE  21
static int debug;
int acpiphp_debug;
static int num_slots;
static struct acpiphp_attention_info *attention_info;
#define DRIVER_VERSION	"0.5"
#define DRIVER_AUTHOR	"Greg Kroah-Hartman <gregkh@us.ibm.com>, Takayoshi Kochi <t-kochi@bq.jp.nec.com>, Matthew Wilcox <willy@hp.com>"
#define DRIVER_DESC	"ACPI Hot Plug PCI Controller Driver"
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE("GPL");
MODULE_PARM_DESC(debug, "Debugging mode enabled or not");
module_param(debug, bool, 0644);
EXPORT_SYMBOL_GPL(acpiphp_register_attention);
EXPORT_SYMBOL_GPL(acpiphp_unregister_attention);
static int enable_slot		(struct hotplug_slot *slot);
static int disable_slot		(struct hotplug_slot *slot);
static int set_attention_status (struct hotplug_slot *slot, u8 value);
static int get_power_status	(struct hotplug_slot *slot, u8 *value);
static int get_attention_status (struct hotplug_slot *slot, u8 *value);
static int get_latch_status	(struct hotplug_slot *slot, u8 *value);
static int get_adapter_status	(struct hotplug_slot *slot, u8 *value);
static struct hotplug_slot_ops acpi_hotplug_slot_ops = ;
int acpiphp_register_attention(struct acpiphp_attention_info *info)
int acpiphp_unregister_attention(struct acpiphp_attention_info *info)
static int enable_slot(struct hotplug_slot *hotplug_slot)
static int disable_slot(struct hotplug_slot *hotplug_slot)
static int set_attention_status(struct hotplug_slot *hotplug_slot, u8 status)
static int get_power_status(struct hotplug_slot *hotplug_slot, u8 *value)
static int get_attention_status(struct hotplug_slot *hotplug_slot, u8 *value)
static int get_latch_status(struct hotplug_slot *hotplug_slot, u8 *value)
static int get_adapter_status(struct hotplug_slot *hotplug_slot, u8 *value)
static int __init init_acpi(void)
static void release_slot(struct hotplug_slot *hotplug_slot)
int acpiphp_register_hotplug_slot(struct acpiphp_slot *acpiphp_slot)
void acpiphp_unregister_hotplug_slot(struct acpiphp_slot *acpiphp_slot)
static int __init acpiphp_init(void)
static void __exit acpiphp_exit(void)
module_init(acpiphp_init);
module_exit(acpiphp_exit);

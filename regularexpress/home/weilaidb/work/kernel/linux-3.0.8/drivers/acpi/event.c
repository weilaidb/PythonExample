#define _COMPONENT		ACPI_SYSTEM_COMPONENT
ACPI_MODULE_NAME("event");
static DEFINE_SPINLOCK(acpi_system_event_lock);
int event_is_open = 0;
extern struct list_head acpi_bus_event_list;
extern wait_queue_head_t acpi_bus_event_queue;
static int acpi_system_open_event(struct inode *inode, struct file *file)
static ssize_t
acpi_system_read_event(struct file *file, char __user * buffer, size_t count,
loff_t * ppos)
static int acpi_system_close_event(struct inode *inode, struct file *file)
static unsigned int acpi_system_poll_event(struct file *file, poll_table * wait)
static const struct file_operations acpi_system_event_ops = ;
static BLOCKING_NOTIFIER_HEAD(acpi_chain_head);
int acpi_notifier_call_chain(struct acpi_device *dev, u32 type, u32 data)
EXPORT_SYMBOL(acpi_notifier_call_chain);
int register_acpi_notifier(struct notifier_block *nb)
EXPORT_SYMBOL(register_acpi_notifier);
int unregister_acpi_notifier(struct notifier_block *nb)
EXPORT_SYMBOL(unregister_acpi_notifier);
static unsigned int acpi_event_seqnum;
struct acpi_genl_event ;
enum ;
#define ACPI_GENL_ATTR_MAX (__ACPI_GENL_ATTR_MAX - 1)
enum ;
#define ACPI_GENL_CMD_MAX (__ACPI_GENL_CMD_MAX - 1)
#define ACPI_GENL_FAMILY_NAME		"acpi_event"
#define ACPI_GENL_VERSION		0x01
#define ACPI_GENL_MCAST_GROUP_NAME 	"acpi_mc_group"
static struct genl_family acpi_event_genl_family = ;
static struct genl_multicast_group acpi_event_mcgrp = ;
int acpi_bus_generate_netlink_event(const char *device_class,
const char *bus_id,
u8 type, int data)
EXPORT_SYMBOL(acpi_bus_generate_netlink_event);
static int acpi_event_genetlink_init(void)
int acpi_bus_generate_netlink_event(const char *device_class,
const char *bus_id,
u8 type, int data)
EXPORT_SYMBOL(acpi_bus_generate_netlink_event);
static int acpi_event_genetlink_init(void)
static int __init acpi_event_init(void)
fs_initcall(acpi_event_init);

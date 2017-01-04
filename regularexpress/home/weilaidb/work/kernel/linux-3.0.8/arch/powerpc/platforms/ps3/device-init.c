static int __init ps3_register_lpm_devices(void)
static int __init ps3_setup_gelic_device(
const struct ps3_repository_device *repo)
static int __init_refok ps3_setup_uhc_device(
const struct ps3_repository_device *repo, enum ps3_match_id match_id,
enum ps3_interrupt_type interrupt_type, enum ps3_reg_type reg_type)
static int __init ps3_setup_ehci_device(
const struct ps3_repository_device *repo)
static int __init ps3_setup_ohci_device(
const struct ps3_repository_device *repo)
static int __init ps3_setup_vuart_device(enum ps3_match_id match_id,
unsigned int port_number)
static int ps3_setup_storage_dev(const struct ps3_repository_device *repo,
enum ps3_match_id match_id)
static int __init ps3_register_vuart_devices(void)
static int __init ps3_register_sound_devices(void)
static int __init ps3_register_graphics_devices(void)
static int __init ps3_register_ramdisk_device(void)
static int ps3_setup_dynamic_device(const struct ps3_repository_device *repo)
static int __init ps3_setup_static_device(const struct ps3_repository_device *repo)
static void ps3_find_and_add_device(u64 bus_id, u64 dev_id)
#define PS3_NOTIFICATION_DEV_ID		ULONG_MAX
#define PS3_NOTIFICATION_INTERRUPT_ID	0
struct ps3_notification_device ;
enum ps3_notify_type ;
struct ps3_notify_cmd ;
struct ps3_notify_event ;
static irqreturn_t ps3_notification_interrupt(int irq, void *data)
static int ps3_notification_read_write(struct ps3_notification_device *dev,
u64 lpar, int write)
static struct task_struct *probe_task;
static int ps3_probe_thread(void *data)
static int ps3_stop_probe_thread(struct notifier_block *nb, unsigned long code,
void *data)
static struct notifier_block nb = ;
static int __init ps3_start_probe_thread(enum ps3_bus_type bus_type)
static int __init ps3_register_devices(void)
device_initcall(ps3_register_devices);

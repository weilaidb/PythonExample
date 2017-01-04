#define __ACPI_BUS_H__
#define ACPI_MAX_HANDLES	10
struct acpi_handle_list ;
acpi_status
acpi_extract_package(union acpi_object *package,
struct acpi_buffer *format, struct acpi_buffer *buffer);
acpi_status
acpi_evaluate_integer(acpi_handle handle,
acpi_string pathname,
struct acpi_object_list *arguments, unsigned long long *data);
acpi_status
acpi_evaluate_reference(acpi_handle handle,
acpi_string pathname,
struct acpi_object_list *arguments,
struct acpi_handle_list *list);
#define ACPI_BUS_FILE_ROOT	"acpi"
extern struct proc_dir_entry *acpi_root_dir;
enum acpi_bus_removal_type ;
enum acpi_bus_device_type ;
struct acpi_driver;
struct acpi_device;
typedef int (*acpi_op_add) (struct acpi_device * device);
typedef int (*acpi_op_remove) (struct acpi_device * device, int type);
typedef int (*acpi_op_start) (struct acpi_device * device);
typedef int (*acpi_op_suspend) (struct acpi_device * device,
pm_message_t state);
typedef int (*acpi_op_resume) (struct acpi_device * device);
typedef int (*acpi_op_bind) (struct acpi_device * device);
typedef int (*acpi_op_unbind) (struct acpi_device * device);
typedef void (*acpi_op_notify) (struct acpi_device * device, u32 event);
struct acpi_bus_ops ;
struct acpi_device_ops ;
#define ACPI_DRIVER_ALL_NOTIFY_EVENTS	0x1
struct acpi_driver ;
struct acpi_device_status ;
struct acpi_device_flags ;
struct acpi_device_dir ;
#define acpi_device_dir(d)	((d)->dir.entry)
typedef char acpi_bus_id[8];
typedef unsigned long acpi_bus_address;
typedef char acpi_device_name[40];
typedef char acpi_device_class[20];
struct acpi_hardware_id ;
struct acpi_device_pnp ;
#define acpi_device_bid(d)	((d)->pnp.bus_id)
#define acpi_device_adr(d)	((d)->pnp.bus_address)
const char *acpi_device_hid(struct acpi_device *device);
#define acpi_device_name(d)	((d)->pnp.device_name)
#define acpi_device_class(d)	((d)->pnp.device_class)
struct acpi_device_power_flags ;
struct acpi_device_power_state ;
struct acpi_device_power ;
struct acpi_device_perf_flags ;
struct acpi_device_perf_state ;
struct acpi_device_perf ;
struct acpi_device_wakeup_flags ;
struct acpi_device_wakeup ;
struct acpi_device ;
static inline void *acpi_driver_data(struct acpi_device *d)
#define to_acpi_device(d)	container_of(d, struct acpi_device, dev)
#define to_acpi_driver(d)	container_of(d, struct acpi_driver, drv)
extern struct bus_type acpi_bus_type;
struct acpi_bus_event ;
extern struct kobject *acpi_kobj;
extern int acpi_bus_generate_netlink_event(const char*, const char*, u8, int);
void acpi_bus_private_data_handler(acpi_handle, void *);
int acpi_bus_get_private_data(acpi_handle, void **);
extern int acpi_notifier_call_chain(struct acpi_device *, u32, u32);
extern int register_acpi_notifier(struct notifier_block *);
extern int unregister_acpi_notifier(struct notifier_block *);
extern int register_acpi_bus_notifier(struct notifier_block *nb);
extern void unregister_acpi_bus_notifier(struct notifier_block *nb);
int acpi_bus_get_device(acpi_handle handle, struct acpi_device **device);
void acpi_bus_data_handler(acpi_handle handle, void *context);
acpi_status acpi_bus_get_status_handle(acpi_handle handle,
unsigned long long *sta);
int acpi_bus_get_status(struct acpi_device *device);
int acpi_bus_set_power(acpi_handle handle, int state);
int acpi_bus_update_power(acpi_handle handle, int *state_p);
bool acpi_bus_power_manageable(acpi_handle handle);
bool acpi_bus_can_wakeup(acpi_handle handle);
int acpi_bus_generate_proc_event(struct acpi_device *device, u8 type, int data);
int acpi_bus_generate_proc_event4(const char *class, const char *bid, u8 type, int data);
int acpi_bus_receive_event(struct acpi_bus_event *event);
static inline int acpi_bus_generate_proc_event(struct acpi_device *device, u8 type, int data)
int acpi_bus_register_driver(struct acpi_driver *driver);
void acpi_bus_unregister_driver(struct acpi_driver *driver);
int acpi_bus_add(struct acpi_device **child, struct acpi_device *parent,
acpi_handle handle, int type);
int acpi_bus_trim(struct acpi_device *start, int rmdevice);
int acpi_bus_start(struct acpi_device *device);
acpi_status acpi_bus_get_ejd(acpi_handle handle, acpi_handle * ejd);
int acpi_match_device_ids(struct acpi_device *device,
const struct acpi_device_id *ids);
int acpi_create_dir(struct acpi_device *);
void acpi_remove_dir(struct acpi_device *);
struct acpi_bus_type ;
int register_acpi_bus_type(struct acpi_bus_type *);
int unregister_acpi_bus_type(struct acpi_bus_type *);
struct device *acpi_get_physical_device(acpi_handle);
struct acpi_pci_root ;
acpi_handle acpi_get_child(acpi_handle, u64);
int acpi_is_root_bridge(acpi_handle);
acpi_handle acpi_get_pci_rootbridge_handle(unsigned int, unsigned int);
struct acpi_pci_root *acpi_pci_find_root(acpi_handle handle);
#define DEVICE_ACPI_HANDLE(dev) ((acpi_handle)((dev)->archdata.acpi_handle))
int acpi_enable_wakeup_device_power(struct acpi_device *dev, int state);
int acpi_disable_wakeup_device_power(struct acpi_device *dev);
int acpi_pm_device_sleep_state(struct device *, int *);
static inline int acpi_pm_device_sleep_state(struct device *d, int *p)
int acpi_pm_device_sleep_wake(struct device *, bool);
static inline int acpi_pm_device_sleep_wake(struct device *dev, bool enable)

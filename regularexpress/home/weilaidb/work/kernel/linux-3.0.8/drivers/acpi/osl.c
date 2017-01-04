#define _COMPONENT		ACPI_OS_SERVICES
ACPI_MODULE_NAME("osl");
#define PREFIX		"ACPI: "
struct acpi_os_dpc ;
int acpi_in_debugger;
EXPORT_SYMBOL(acpi_in_debugger);
extern char line_buf[80];
static acpi_osd_handler acpi_irq_handler;
static void *acpi_irq_context;
static struct workqueue_struct *kacpid_wq;
static struct workqueue_struct *kacpi_notify_wq;
static struct workqueue_struct *kacpi_hotplug_wq;
struct acpi_res_list ;
static LIST_HEAD(resource_list_head);
static DEFINE_SPINLOCK(acpi_res_lock);
struct acpi_ioremap ;
static LIST_HEAD(acpi_ioremaps);
static DEFINE_MUTEX(acpi_ioremap_lock);
static void __init acpi_osi_setup_late(void);
static struct osi_linux  osi_linux = ;
static u32 acpi_osi_handler(acpi_string interface, u32 supported)
static void __init acpi_request_region (struct acpi_generic_address *addr,
unsigned int length, char *desc)
static int __init acpi_reserve_resources(void)
device_initcall(acpi_reserve_resources);
void acpi_os_printf(const char *fmt, ...)
void acpi_os_vprintf(const char *fmt, va_list args)
acpi_physical_address __init acpi_os_get_root_pointer(void)
static struct acpi_ioremap *
acpi_map_lookup(acpi_physical_address phys, acpi_size size)
static void __iomem *
acpi_map_vaddr_lookup(acpi_physical_address phys, unsigned int size)
void __iomem *acpi_os_get_iomem(acpi_physical_address phys, unsigned int size)
EXPORT_SYMBOL_GPL(acpi_os_get_iomem);
static struct acpi_ioremap *
acpi_map_lookup_virt(void __iomem *virt, acpi_size size)
void __iomem *__init_refok
acpi_os_map_memory(acpi_physical_address phys, acpi_size size)
EXPORT_SYMBOL_GPL(acpi_os_map_memory);
static void acpi_os_drop_map_ref(struct acpi_ioremap *map)
static void acpi_os_map_cleanup(struct acpi_ioremap *map)
void __ref acpi_os_unmap_memory(void __iomem *virt, acpi_size size)
EXPORT_SYMBOL_GPL(acpi_os_unmap_memory);
void __init early_acpi_os_unmap_memory(void __iomem *virt, acpi_size size)
static int acpi_os_map_generic_address(struct acpi_generic_address *addr)
static void acpi_os_unmap_generic_address(struct acpi_generic_address *addr)
acpi_status
acpi_os_get_physical_address(void *virt, acpi_physical_address * phys)
#define ACPI_MAX_OVERRIDE_LEN 100
static char acpi_os_name[ACPI_MAX_OVERRIDE_LEN];
acpi_status
acpi_os_predefined_override(const struct acpi_predefined_names *init_val,
acpi_string * new_val)
acpi_status
acpi_os_table_override(struct acpi_table_header * existing_table,
struct acpi_table_header ** new_table)
static irqreturn_t acpi_irq(int irq, void *dev_id)
acpi_status
acpi_os_install_interrupt_handler(u32 gsi, acpi_osd_handler handler,
void *context)
acpi_status acpi_os_remove_interrupt_handler(u32 irq, acpi_osd_handler handler)
void acpi_os_sleep(u64 ms)
void acpi_os_stall(u32 us)
u64 acpi_os_get_timer(void)
acpi_status acpi_os_read_port(acpi_io_address port, u32 * value, u32 width)
EXPORT_SYMBOL(acpi_os_read_port);
acpi_status acpi_os_write_port(acpi_io_address port, u32 value, u32 width)
EXPORT_SYMBOL(acpi_os_write_port);
acpi_status
acpi_os_read_memory(acpi_physical_address phys_addr, u32 * value, u32 width)
acpi_status
acpi_os_write_memory(acpi_physical_address phys_addr, u32 value, u32 width)
acpi_status
acpi_os_read_pci_configuration(struct acpi_pci_id * pci_id, u32 reg,
u64 *value, u32 width)
acpi_status
acpi_os_write_pci_configuration(struct acpi_pci_id * pci_id, u32 reg,
u64 value, u32 width)
static void acpi_os_execute_deferred(struct work_struct *work)
static acpi_status __acpi_os_execute(acpi_execute_type type,
acpi_osd_exec_callback function, void *context, int hp)
acpi_status acpi_os_execute(acpi_execute_type type,
acpi_osd_exec_callback function, void *context)
EXPORT_SYMBOL(acpi_os_execute);
acpi_status acpi_os_hotplug_execute(acpi_osd_exec_callback function,
void *context)
void acpi_os_wait_events_complete(void *context)
EXPORT_SYMBOL(acpi_os_wait_events_complete);
acpi_status
acpi_os_create_semaphore(u32 max_units, u32 initial_units, acpi_handle * handle)
acpi_status acpi_os_delete_semaphore(acpi_handle handle)
acpi_status acpi_os_wait_semaphore(acpi_handle handle, u32 units, u16 timeout)
acpi_status acpi_os_signal_semaphore(acpi_handle handle, u32 units)
u32 acpi_os_get_line(char *buffer)
acpi_status acpi_os_signal(u32 function, void *info)
static int __init acpi_os_name_setup(char *str)
__setup("acpi_os_name=", acpi_os_name_setup);
#define	OSI_STRING_LENGTH_MAX 64
#define	OSI_STRING_ENTRIES_MAX 16
struct osi_setup_entry ;
static struct osi_setup_entry __initdata osi_setup_entries[OSI_STRING_ENTRIES_MAX];
void __init acpi_osi_setup(char *str)
static void __init set_osi_linux(unsigned int enable)
static void __init acpi_cmdline_osi_linux(unsigned int enable)
void __init acpi_dmi_osi_linux(int enable, const struct dmi_system_id *d)
static void __init acpi_osi_setup_late(void)
static int __init osi_setup(char *str)
__setup("acpi_osi=", osi_setup);
static int __init acpi_serialize_setup(char *str)
__setup("acpi_serialize", acpi_serialize_setup);
#define ENFORCE_RESOURCES_STRICT 2
#define ENFORCE_RESOURCES_LAX    1
#define ENFORCE_RESOURCES_NO     0
static unsigned int acpi_enforce_resources = ENFORCE_RESOURCES_STRICT;
static int __init acpi_enforce_resources_setup(char *str)
__setup("acpi_enforce_resources=", acpi_enforce_resources_setup);
int acpi_check_resource_conflict(const struct resource *res)
EXPORT_SYMBOL(acpi_check_resource_conflict);
int acpi_check_region(resource_size_t start, resource_size_t n,
const char *name)
EXPORT_SYMBOL(acpi_check_region);
int acpi_resources_are_enforced(void)
EXPORT_SYMBOL(acpi_resources_are_enforced);
void acpi_os_delete_lock(acpi_spinlock handle)
acpi_cpu_flags acpi_os_acquire_lock(acpi_spinlock lockp)
void acpi_os_release_lock(acpi_spinlock lockp, acpi_cpu_flags flags)
acpi_status
acpi_os_create_cache(char *name, u16 size, u16 depth, acpi_cache_t ** cache)
acpi_status acpi_os_purge_cache(acpi_cache_t * cache)
acpi_status acpi_os_delete_cache(acpi_cache_t * cache)
acpi_status acpi_os_release_object(acpi_cache_t * cache, void *object)
static inline int acpi_res_list_add(struct acpi_res_list *res)
static inline void acpi_res_list_del(struct acpi_res_list *res)
acpi_status
acpi_os_invalidate_address(
u8                   space_id,
acpi_physical_address   address,
acpi_size               length)
acpi_status
acpi_os_validate_address (
u8                   space_id,
acpi_physical_address   address,
acpi_size               length,
char *name)
acpi_status __init acpi_os_initialize(void)
acpi_status __init acpi_os_initialize1(void)
acpi_status acpi_os_terminate(void)

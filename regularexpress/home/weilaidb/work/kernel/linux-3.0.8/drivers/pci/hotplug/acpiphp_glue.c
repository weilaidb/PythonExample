static LIST_HEAD(bridge_list);
#define MY_NAME "acpiphp_glue"
static void handle_hotplug_event_bridge (acpi_handle, u32, void *);
static void acpiphp_sanitize_bus(struct pci_bus *bus);
static void acpiphp_set_hpp_values(struct pci_bus *bus);
static void handle_hotplug_event_func(acpi_handle handle, u32 type, void *context);
static acpi_status
is_pci_dock_device(acpi_handle handle, u32 lvl, void *context, void **rv)
static int post_dock_fixups(struct notifier_block *nb, unsigned long val,
void *v)
static struct acpi_dock_ops acpiphp_dock_ops = ;
static acpi_status
register_slot(acpi_handle handle, u32 lvl, void *context, void **rv)
static int detect_ejectable_slots(acpi_handle handle)
static void init_bridge_misc(struct acpiphp_bridge *bridge)
static struct acpiphp_func *acpiphp_bridge_handle_to_function(acpi_handle handle)
static inline void config_p2p_bridge_flags(struct acpiphp_bridge *bridge)
static void add_host_bridge(acpi_handle *handle)
static void add_p2p_bridge(acpi_handle *handle)
static acpi_status
find_p2p_bridge(acpi_handle handle, u32 lvl, void *context, void **rv)
static int add_bridge(acpi_handle handle)
static struct acpiphp_bridge *acpiphp_handle_to_bridge(acpi_handle handle)
static void cleanup_bridge(struct acpiphp_bridge *bridge)
static acpi_status
cleanup_p2p_bridge(acpi_handle handle, u32 lvl, void *context, void **rv)
static void remove_bridge(acpi_handle handle)
static int power_on_slot(struct acpiphp_slot *slot)
static int power_off_slot(struct acpiphp_slot *slot)
static unsigned char acpiphp_max_busnr(struct pci_bus *bus)
static int acpiphp_bus_add(struct acpiphp_func *func)
static int acpiphp_bus_trim(acpi_handle handle)
static void acpiphp_set_acpi_region(struct acpiphp_slot *slot)
static int __ref enable_device(struct acpiphp_slot *slot)
static void disable_bridges(struct pci_bus *bus)
static int disable_device(struct acpiphp_slot *slot)
static unsigned int get_slot_status(struct acpiphp_slot *slot)
int acpiphp_eject_slot(struct acpiphp_slot *slot)
static int acpiphp_check_bridge(struct acpiphp_bridge *bridge)
static void acpiphp_set_hpp_values(struct pci_bus *bus)
static void acpiphp_sanitize_bus(struct pci_bus *bus)
static int acpiphp_configure_bridge (acpi_handle handle)
static void handle_bridge_insertion(acpi_handle handle, u32 type)
static acpi_status
count_sub_bridges(acpi_handle handle, u32 lvl, void *context, void **rv)
static acpi_status
check_sub_bridges(acpi_handle handle, u32 lvl, void *context, void **rv)
static void handle_hotplug_event_bridge(acpi_handle handle, u32 type, void *context)
static void handle_hotplug_event_func(acpi_handle handle, u32 type, void *context)
static acpi_status
find_root_bridges(acpi_handle handle, u32 lvl, void *context, void **rv)
static struct acpi_pci_driver acpi_pci_hp_driver = ;
int __init acpiphp_glue_init(void)
void  acpiphp_glue_exit(void)
int __init acpiphp_get_num_slots(void)
int acpiphp_enable_slot(struct acpiphp_slot *slot)
int acpiphp_disable_slot(struct acpiphp_slot *slot)
u8 acpiphp_get_power_status(struct acpiphp_slot *slot)
u8 acpiphp_get_latch_status(struct acpiphp_slot *slot)
u8 acpiphp_get_adapter_status(struct acpiphp_slot *slot)

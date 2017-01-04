static int num;
static struct acpi_device_id excluded_id_list[] __initdata = ;
static inline int __init is_exclusive_device(struct acpi_device *dev)
#define TEST_HEX(c) \
if (!(('0' <= (c) && (c) <= '9') || ('A' <= (c) && (c) <= 'F'))) \
return 0
#define TEST_ALPHA(c) \
if (!('@' <= (c) || (c) <= 'Z')) \
return 0
static int __init ispnpidacpi(const char *id)
static int pnpacpi_get_resources(struct pnp_dev *dev)
static int pnpacpi_set_resources(struct pnp_dev *dev)
static int pnpacpi_disable_resources(struct pnp_dev *dev)
static bool pnpacpi_can_wakeup(struct pnp_dev *dev)
static int pnpacpi_suspend(struct pnp_dev *dev, pm_message_t state)
static int pnpacpi_resume(struct pnp_dev *dev)
struct pnp_protocol pnpacpi_protocol = ;
EXPORT_SYMBOL(pnpacpi_protocol);
static char *__init pnpacpi_get_id(struct acpi_device *device)
static int __init pnpacpi_add_device(struct acpi_device *device)
static acpi_status __init pnpacpi_add_device_handler(acpi_handle handle,
u32 lvl, void *context,
void **rv)
static int __init acpi_pnp_match(struct device *dev, void *_pnp)
static int __init acpi_pnp_find_device(struct device *dev, acpi_handle * handle)
static struct acpi_bus_type __initdata acpi_pnp_bus = ;
int pnpacpi_disabled __initdata;
static int __init pnpacpi_init(void)
fs_initcall(pnpacpi_init);
static int __init pnpacpi_setup(char *str)
__setup("pnpacpi=", pnpacpi_setup);

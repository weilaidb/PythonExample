#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
#define ACPI_ATLAS_NAME		"Atlas ACPI"
#define ACPI_ATLAS_CLASS	"Atlas"
static unsigned short atlas_keymap[16];
static struct input_dev *input_dev;
static acpi_status acpi_atlas_button_setup(acpi_handle region_handle,
u32 function, void *handler_context, void **return_context)
static acpi_status acpi_atlas_button_handler(u32 function,
acpi_physical_address address,
u32 bit_width, u64 *value,
void *handler_context, void *region_context)
static int atlas_acpi_button_add(struct acpi_device *device)
static int atlas_acpi_button_remove(struct acpi_device *device, int type)
static const struct acpi_device_id atlas_device_ids[] = ;
MODULE_DEVICE_TABLE(acpi, atlas_device_ids);
static struct acpi_driver atlas_acpi_driver = ;
static int __init atlas_acpi_init(void)
static void __exit atlas_acpi_exit(void)
module_init(atlas_acpi_init);
module_exit(atlas_acpi_exit);
MODULE_AUTHOR("Jaya Kumar");
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Atlas button driver");

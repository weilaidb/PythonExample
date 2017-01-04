#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
#define ACPI_TOPSTAR_CLASS "topstar"
struct topstar_hkey ;
static const struct key_entry topstar_keymap[] = ;
static void acpi_topstar_notify(struct acpi_device *device, u32 event)
static int acpi_topstar_fncx_switch(struct acpi_device *device, bool state)
static int acpi_topstar_init_hkey(struct topstar_hkey *hkey)
static int acpi_topstar_add(struct acpi_device *device)
static int acpi_topstar_remove(struct acpi_device *device, int type)
static const struct acpi_device_id topstar_device_ids[] = ;
MODULE_DEVICE_TABLE(acpi, topstar_device_ids);
static struct acpi_driver acpi_topstar_driver = ;
static int __init topstar_laptop_init(void)
static void __exit topstar_laptop_exit(void)
module_init(topstar_laptop_init);
module_exit(topstar_laptop_exit);
MODULE_AUTHOR("Herton Ronaldo Krzesinski");
MODULE_DESCRIPTION("Topstar Laptop ACPI Extras driver");
MODULE_LICENSE("GPL");

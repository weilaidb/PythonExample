#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
MODULE_AUTHOR("Jes Sorensen <Jes.Sorensen@gmail.com>");
MODULE_DESCRIPTION("Toshiba Laptop ACPI Bluetooth Enable Driver");
MODULE_LICENSE("GPL");
static int toshiba_bt_rfkill_add(struct acpi_device *device);
static int toshiba_bt_rfkill_remove(struct acpi_device *device, int type);
static void toshiba_bt_rfkill_notify(struct acpi_device *device, u32 event);
static int toshiba_bt_resume(struct acpi_device *device);
static const struct acpi_device_id bt_device_ids[] = ;
MODULE_DEVICE_TABLE(acpi, bt_device_ids);
static struct acpi_driver toshiba_bt_rfkill_driver = ;
static int toshiba_bluetooth_enable(acpi_handle handle)
static void toshiba_bt_rfkill_notify(struct acpi_device *device, u32 event)
static int toshiba_bt_resume(struct acpi_device *device)
static int toshiba_bt_rfkill_add(struct acpi_device *device)
static int __init toshiba_bt_rfkill_init(void)
static int toshiba_bt_rfkill_remove(struct acpi_device *device, int type)
static void __exit toshiba_bt_rfkill_exit(void)
module_init(toshiba_bt_rfkill_init);
module_exit(toshiba_bt_rfkill_exit);

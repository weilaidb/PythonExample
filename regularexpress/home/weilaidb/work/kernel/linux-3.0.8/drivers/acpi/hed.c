static struct acpi_device_id acpi_hed_ids[] = ;
MODULE_DEVICE_TABLE(acpi, acpi_hed_ids);
static acpi_handle hed_handle;
static BLOCKING_NOTIFIER_HEAD(acpi_hed_notify_list);
int register_acpi_hed_notifier(struct notifier_block *nb)
EXPORT_SYMBOL_GPL(register_acpi_hed_notifier);
void unregister_acpi_hed_notifier(struct notifier_block *nb)
EXPORT_SYMBOL_GPL(unregister_acpi_hed_notifier);
static void acpi_hed_notify(struct acpi_device *device, u32 event)
static int __devinit acpi_hed_add(struct acpi_device *device)
static int __devexit acpi_hed_remove(struct acpi_device *device, int type)
static struct acpi_driver acpi_hed_driver = ;
static int __init acpi_hed_init(void)
static void __exit acpi_hed_exit(void)
module_init(acpi_hed_init);
module_exit(acpi_hed_exit);
ACPI_MODULE_NAME("hed");
MODULE_AUTHOR("Huang Ying");
MODULE_DESCRIPTION("ACPI Hardware Error Device Driver");
MODULE_LICENSE("GPL");

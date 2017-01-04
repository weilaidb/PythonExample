#define _COMPONENT		ACPI_SYSTEM_COMPONENT
ACPI_MODULE_NAME("custom_method");
MODULE_LICENSE("GPL");
static struct dentry *cm_dentry;
static ssize_t cm_write(struct file *file, const char __user * user_buf,
size_t count, loff_t *ppos)
static const struct file_operations cm_fops = ;
static int __init acpi_custom_method_init(void)
static void __exit acpi_custom_method_exit(void)
module_init(acpi_custom_method_init);
module_exit(acpi_custom_method_exit);

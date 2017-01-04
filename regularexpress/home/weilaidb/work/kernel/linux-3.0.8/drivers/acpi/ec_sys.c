MODULE_AUTHOR("Thomas Renninger <trenn@suse.de>");
MODULE_DESCRIPTION("ACPI EC sysfs access driver");
MODULE_LICENSE("GPL");
static bool write_support;
module_param(write_support, bool, 0644);
MODULE_PARM_DESC(write_support, "Dangerous, reboot and removal of battery may "
"be needed.");
#define EC_SPACE_SIZE 256
static struct dentry *acpi_ec_debugfs_dir;
static int acpi_ec_open_io(struct inode *i, struct file *f)
static ssize_t acpi_ec_read_io(struct file *f, char __user *buf,
size_t count, loff_t *off)
static ssize_t acpi_ec_write_io(struct file *f, const char __user *buf,
size_t count, loff_t *off)
static struct file_operations acpi_ec_io_ops = ;
int acpi_ec_add_debugfs(struct acpi_ec *ec, unsigned int ec_device_count)
static int __init acpi_ec_sys_init(void)
static void __exit acpi_ec_sys_exit(void)
module_init(acpi_ec_sys_init);
module_exit(acpi_ec_sys_exit);

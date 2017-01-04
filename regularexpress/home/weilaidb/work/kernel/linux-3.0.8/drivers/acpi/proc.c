#define _COMPONENT		ACPI_SYSTEM_COMPONENT
ACPI_MODULE_NAME("sleep")
#if defined(CONFIG_RTC_DRV_CMOS) || defined(CONFIG_RTC_DRV_CMOS_MODULE) || !defined(CONFIG_X86)
#define	HAVE_ACPI_LEGACY_ALARM
static u32 cmos_bcd_read(int offset, int rtc_control);
static int acpi_system_alarm_seq_show(struct seq_file *seq, void *offset)
static int acpi_system_alarm_open_fs(struct inode *inode, struct file *file)
static int get_date_field(char **p, u32 * value)
static u32 cmos_bcd_read(int offset, int rtc_control)
static void cmos_bcd_write(u32 val, int offset, int rtc_control)
static ssize_t
acpi_system_write_alarm(struct file *file,
const char __user * buffer, size_t count, loff_t * ppos)
static int
acpi_system_wakeup_device_seq_show(struct seq_file *seq, void *offset)
static void physical_device_enable_wakeup(struct acpi_device *adev)
static ssize_t
acpi_system_write_wakeup_device(struct file *file,
const char __user * buffer,
size_t count, loff_t * ppos)
static int
acpi_system_wakeup_device_open_fs(struct inode *inode, struct file *file)
static const struct file_operations acpi_system_wakeup_device_fops = ;
static const struct file_operations acpi_system_alarm_fops = ;
static u32 rtc_handler(void *context)
int __init acpi_sleep_proc_init(void)

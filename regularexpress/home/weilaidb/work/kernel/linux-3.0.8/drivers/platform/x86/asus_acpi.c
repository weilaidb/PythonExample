#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
#define ASUS_ACPI_VERSION "0.30"
#define PROC_ASUS       "asus"
#define PROC_MLED       "mled"
#define PROC_WLED       "wled"
#define PROC_TLED       "tled"
#define PROC_BT         "bluetooth"
#define PROC_LEDD       "ledd"
#define PROC_INFO       "info"
#define PROC_LCD        "lcd"
#define PROC_BRN        "brn"
#define PROC_DISP       "disp"
#define ACPI_HOTK_NAME          "Asus Laptop ACPI Extras Driver"
#define ACPI_HOTK_CLASS         "hotkey"
#define ACPI_HOTK_DEVICE_NAME   "Hotkey"
#define BR_UP       0x10
#define BR_DOWN     0x20
#define MLED_ON     0x01
#define WLED_ON     0x02
#define TLED_ON     0x04
#define BT_ON       0x08
MODULE_AUTHOR("Julien Lerouge, Karol Kozimor");
MODULE_DESCRIPTION(ACPI_HOTK_NAME);
MODULE_LICENSE("GPL");
static uid_t asus_uid;
static gid_t asus_gid;
module_param(asus_uid, uint, 0);
MODULE_PARM_DESC(asus_uid, "UID for entries in /proc/acpi/asus");
module_param(asus_gid, uint, 0);
MODULE_PARM_DESC(asus_gid, "GID for entries in /proc/acpi/asus");
struct model_data ;
struct asus_hotk ;
#define A1x_PREFIX "\\_SB.PCI0.ISA.EC0."
#define L3C_PREFIX "\\_SB.PCI0.PX40.ECD0."
#define M1A_PREFIX "\\_SB.PCI0.PX40.EC0."
#define P30_PREFIX "\\_SB.PCI0.LPCB.EC0."
#define S1x_PREFIX "\\_SB.PCI0.PX40."
#define S2x_PREFIX A1x_PREFIX
#define xxN_PREFIX "\\_SB.PCI0.SBRG.EC0."
static struct model_data model_conf[END_MODEL] = ;
static struct proc_dir_entry *asus_proc_dir;
static struct backlight_device *asus_backlight_device;
static struct acpi_table_header *asus_info;
static struct asus_hotk *hotk;
static int asus_hotk_add(struct acpi_device *device);
static int asus_hotk_remove(struct acpi_device *device, int type);
static void asus_hotk_notify(struct acpi_device *device, u32 event);
static const struct acpi_device_id asus_device_ids[] = ;
MODULE_DEVICE_TABLE(acpi, asus_device_ids);
static struct acpi_driver asus_hotk_driver = ;
static int write_acpi_int(acpi_handle handle, const char *method, int val,
struct acpi_buffer *output)
static int read_acpi_int(acpi_handle handle, const char *method, int *val)
static int asus_info_proc_show(struct seq_file *m, void *v)
static int asus_info_proc_open(struct inode *inode, struct file *file)
static const struct file_operations asus_info_proc_fops = ;
static int read_led(const char *ledname, int ledmask)
static int parse_arg(const char __user *buf, unsigned long count, int *val)
static int
write_led(const char __user *buffer, unsigned long count,
char *ledname, int ledmask, int invert)
static int mled_proc_show(struct seq_file *m, void *v)
static int mled_proc_open(struct inode *inode, struct file *file)
static ssize_t mled_proc_write(struct file *file, const char __user *buffer,
size_t count, loff_t *pos)
static const struct file_operations mled_proc_fops = ;
static int ledd_proc_show(struct seq_file *m, void *v)
static int ledd_proc_open(struct inode *inode, struct file *file)
static ssize_t ledd_proc_write(struct file *file, const char __user *buffer,
size_t count, loff_t *pos)
static const struct file_operations ledd_proc_fops = ;
static int wled_proc_show(struct seq_file *m, void *v)
static int wled_proc_open(struct inode *inode, struct file *file)
static ssize_t wled_proc_write(struct file *file, const char __user *buffer,
size_t count, loff_t *pos)
static const struct file_operations wled_proc_fops = ;
static int bluetooth_proc_show(struct seq_file *m, void *v)
static int bluetooth_proc_open(struct inode *inode, struct file *file)
static ssize_t bluetooth_proc_write(struct file *file,
const char __user *buffer, size_t count, loff_t *pos)
static const struct file_operations bluetooth_proc_fops = ;
static int tled_proc_show(struct seq_file *m, void *v)
static int tled_proc_open(struct inode *inode, struct file *file)
static ssize_t tled_proc_write(struct file *file, const char __user *buffer,
size_t count, loff_t *pos)
static const struct file_operations tled_proc_fops = ;
static int get_lcd_state(void)
static int set_lcd_state(int value)
static int lcd_proc_show(struct seq_file *m, void *v)
static int lcd_proc_open(struct inode *inode, struct file *file)
static ssize_t lcd_proc_write(struct file *file, const char __user *buffer,
size_t count, loff_t *pos)
static const struct file_operations lcd_proc_fops = ;
static int read_brightness(struct backlight_device *bd)
static int set_brightness(int value)
static int set_brightness_status(struct backlight_device *bd)
static int brn_proc_show(struct seq_file *m, void *v)
static int brn_proc_open(struct inode *inode, struct file *file)
static ssize_t brn_proc_write(struct file *file, const char __user *buffer,
size_t count, loff_t *pos)
static const struct file_operations brn_proc_fops = ;
static void set_display(int value)
static int disp_proc_show(struct seq_file *m, void *v)
static int disp_proc_open(struct inode *inode, struct file *file)
static ssize_t disp_proc_write(struct file *file, const char __user *buffer,
size_t count, loff_t *pos)
static const struct file_operations disp_proc_fops = ;
static int
asus_proc_add(char *name, const struct file_operations *proc_fops, mode_t mode,
struct acpi_device *device)
static int asus_hotk_add_fs(struct acpi_device *device)
static int asus_hotk_remove_fs(struct acpi_device *device)
static void asus_hotk_notify(struct acpi_device *device, u32 event)
static int asus_model_match(char *model)
static int asus_hotk_get_info(void)
static int asus_hotk_check(void)
static int asus_hotk_found;
static int asus_hotk_add(struct acpi_device *device)
static int asus_hotk_remove(struct acpi_device *device, int type)
static const struct backlight_ops asus_backlight_data = ;
static void asus_acpi_exit(void)
static int __init asus_acpi_init(void)
module_init(asus_acpi_init);
module_exit(asus_acpi_exit);

#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
#define TOSHIBA_ACPI_VERSION	"0.19"
#define PROC_INTERFACE_VERSION	1
MODULE_AUTHOR("John Belmonte");
MODULE_DESCRIPTION("Toshiba Laptop ACPI Extras Driver");
MODULE_LICENSE("GPL");
#define METHOD_LCD_BRIGHTNESS	"\\_SB_.PCI0.VGA_.LCD_._BCM"
#define TOSH_INTERFACE_1	"\\_SB_.VALD"
#define TOSH_INTERFACE_2	"\\_SB_.VALZ"
#define METHOD_VIDEO_OUT	"\\_SB_.VALX.DSSX"
#define GHCI_METHOD		".GHCI"
#define HCI_WORDS			6
#define HCI_SET				0xff00
#define HCI_GET				0xfe00
#define HCI_SUCCESS			0x0000
#define HCI_FAILURE			0x1000
#define HCI_NOT_SUPPORTED		0x8000
#define HCI_EMPTY			0x8c00
#define HCI_FAN				0x0004
#define HCI_SYSTEM_EVENT		0x0016
#define HCI_VIDEO_OUT			0x001c
#define HCI_HOTKEY_EVENT		0x001e
#define HCI_LCD_BRIGHTNESS		0x002a
#define HCI_WIRELESS			0x0056
#define HCI_LCD_BRIGHTNESS_BITS		3
#define HCI_LCD_BRIGHTNESS_SHIFT	(16-HCI_LCD_BRIGHTNESS_BITS)
#define HCI_LCD_BRIGHTNESS_LEVELS	(1 << HCI_LCD_BRIGHTNESS_BITS)
#define HCI_VIDEO_OUT_LCD		0x1
#define HCI_VIDEO_OUT_CRT		0x2
#define HCI_VIDEO_OUT_TV		0x4
#define HCI_WIRELESS_KILL_SWITCH	0x01
#define HCI_WIRELESS_BT_PRESENT		0x0f
#define HCI_WIRELESS_BT_ATTACH		0x40
#define HCI_WIRELESS_BT_POWER		0x80
static const struct acpi_device_id toshiba_device_ids[] = ;
MODULE_DEVICE_TABLE(acpi, toshiba_device_ids);
static const struct key_entry toshiba_acpi_keymap[] __initconst = ;
static __inline__ void _set_bit(u32 * word, u32 mask, int value)
static int is_valid_acpi_path(const char *methodName)
static int write_acpi_int(const char *methodName, int val)
static const char *method_hci ;
static acpi_status hci_raw(const u32 in[HCI_WORDS], u32 out[HCI_WORDS])
static acpi_status hci_write1(u32 reg, u32 in1, u32 * result)
static acpi_status hci_read1(u32 reg, u32 * out1, u32 * result)
static acpi_status hci_write2(u32 reg, u32 in1, u32 in2, u32 *result)
static acpi_status hci_read2(u32 reg, u32 *out1, u32 *out2, u32 *result)
struct toshiba_acpi_dev ;
static int toshiba_illumination_available(void)
static void toshiba_illumination_set(struct led_classdev *cdev,
enum led_brightness brightness)
static enum led_brightness toshiba_illumination_get(struct led_classdev *cdev)
static struct led_classdev toshiba_led = ;
static struct toshiba_acpi_dev toshiba_acpi = ;
static u32 hci_get_bt_present(bool *present)
static u32 hci_get_radio_state(bool *radio_state)
static int bt_rfkill_set_block(void *data, bool blocked)
static void bt_rfkill_poll(struct rfkill *rfkill, void *data)
static const struct rfkill_ops toshiba_rfk_ops = ;
static struct proc_dir_entry *toshiba_proc_dir ;
static struct backlight_device *toshiba_backlight_device;
static int force_fan;
static int last_key_event;
static int key_event_valid;
static int get_lcd(struct backlight_device *bd)
static int lcd_proc_show(struct seq_file *m, void *v)
static int lcd_proc_open(struct inode *inode, struct file *file)
static int set_lcd(int value)
static int set_lcd_status(struct backlight_device *bd)
static ssize_t lcd_proc_write(struct file *file, const char __user *buf,
size_t count, loff_t *pos)
static const struct file_operations lcd_proc_fops = ;
static int video_proc_show(struct seq_file *m, void *v)
static int video_proc_open(struct inode *inode, struct file *file)
static ssize_t video_proc_write(struct file *file, const char __user *buf,
size_t count, loff_t *pos)
static const struct file_operations video_proc_fops = ;
static int fan_proc_show(struct seq_file *m, void *v)
static int fan_proc_open(struct inode *inode, struct file *file)
static ssize_t fan_proc_write(struct file *file, const char __user *buf,
size_t count, loff_t *pos)
static const struct file_operations fan_proc_fops = ;
static int keys_proc_show(struct seq_file *m, void *v)
static int keys_proc_open(struct inode *inode, struct file *file)
static ssize_t keys_proc_write(struct file *file, const char __user *buf,
size_t count, loff_t *pos)
static const struct file_operations keys_proc_fops = ;
static int version_proc_show(struct seq_file *m, void *v)
static int version_proc_open(struct inode *inode, struct file *file)
static const struct file_operations version_proc_fops = ;
#define PROC_TOSHIBA		"toshiba"
static void __init create_toshiba_proc_entries(void)
static void remove_toshiba_proc_entries(void)
static const struct backlight_ops toshiba_backlight_data = ;
static void toshiba_acpi_notify(acpi_handle handle, u32 event, void *context)
static int __init toshiba_acpi_setup_keyboard(char *device)
static void toshiba_acpi_exit(void)
static int __init toshiba_acpi_init(void)
module_init(toshiba_acpi_init);
module_exit(toshiba_acpi_exit);

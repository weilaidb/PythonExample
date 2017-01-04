#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
#define BRIGHTNESS_TOKEN 0x7d
struct calling_interface_buffer  __packed;
struct calling_interface_token ;
struct calling_interface_structure  __packed;
static int da_command_address;
static int da_command_code;
static int da_num_tokens;
static struct calling_interface_token *da_tokens;
static struct platform_driver platform_driver = ;
static struct platform_device *platform_device;
static struct backlight_device *dell_backlight_device;
static struct rfkill *wifi_rfkill;
static struct rfkill *bluetooth_rfkill;
static struct rfkill *wwan_rfkill;
static const struct dmi_system_id __initdata dell_device_table[] = ;
static struct dmi_system_id __devinitdata dell_blacklist[] = ;
static struct calling_interface_buffer *buffer;
static struct page *bufferpage;
static DEFINE_MUTEX(buffer_mutex);
static int hwswitch_state;
static void get_buffer(void)
static void release_buffer(void)
static void __init parse_da_table(const struct dmi_header *dm)
static void __init find_tokens(const struct dmi_header *dm, void *dummy)
static int find_token_location(int tokenid)
static struct calling_interface_buffer *
dell_send_request(struct calling_interface_buffer *buffer, int class,
int select)
static int dell_rfkill_set(void *data, bool blocked)
static void dell_rfkill_query(struct rfkill *rfkill, void *data)
static const struct rfkill_ops dell_rfkill_ops = ;
static struct dentry *dell_laptop_dir;
static int dell_debugfs_show(struct seq_file *s, void *data)
static int dell_debugfs_open(struct inode *inode, struct file *file)
static const struct file_operations dell_debugfs_fops = ;
static void dell_update_rfkill(struct work_struct *ignored)
static DECLARE_DELAYED_WORK(dell_rfkill_work, dell_update_rfkill);
static int __init dell_setup_rfkill(void)
static void dell_cleanup_rfkill(void)
static int dell_send_intensity(struct backlight_device *bd)
static int dell_get_intensity(struct backlight_device *bd)
static const struct backlight_ops dell_ops = ;
static bool dell_laptop_i8042_filter(unsigned char data, unsigned char str,
struct serio *port)
static int __init dell_init(void)
static void __exit dell_exit(void)
module_init(dell_init);
module_exit(dell_exit);
MODULE_AUTHOR("Matthew Garrett <mjg@redhat.com>");
MODULE_DESCRIPTION("Dell laptop driver");
MODULE_LICENSE("GPL");
MODULE_ALIAS("dmi:*svnDellInc.:*:ct8:*");
MODULE_ALIAS("dmi:*svnDellInc.:*:ct9:*");
MODULE_ALIAS("dmi:*svnDellComputerCorporation.:*:ct8:*");

#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
#define MAX_BRIGHT	0x07
#define SABI_IFACE_MAIN			0x00
#define SABI_IFACE_SUB			0x02
#define SABI_IFACE_COMPLETE		0x04
#define SABI_IFACE_DATA			0x05
struct sabi_retval ;
struct sabi_header_offsets ;
struct sabi_commands ;
struct sabi_performance_level ;
struct sabi_config ;
static const struct sabi_config sabi_configs[] = ;
static const struct sabi_config *sabi_config;
static void __iomem *sabi;
static void __iomem *sabi_iface;
static void __iomem *f0000_segment;
static struct backlight_device *backlight_device;
static struct mutex sabi_mutex;
static struct platform_device *sdev;
static struct rfkill *rfk;
static int force;
module_param(force, bool, 0);
MODULE_PARM_DESC(force,
"Disable the DMI check and forces the driver to be loaded");
static int debug;
module_param(debug, bool, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(debug, "Debug enabled or not");
static int sabi_get_command(u8 command, struct sabi_retval *sretval)
static int sabi_set_command(u8 command, u8 data)
static void test_backlight(void)
static void test_wireless(void)
static u8 read_brightness(void)
static void set_brightness(u8 user_brightness)
static int get_brightness(struct backlight_device *bd)
static int update_status(struct backlight_device *bd)
static const struct backlight_ops backlight_ops = ;
static int rfkill_set(void *data, bool blocked)
static struct rfkill_ops rfkill_ops = ;
static int init_wireless(struct platform_device *sdev)
static void destroy_wireless(void)
static ssize_t get_performance_level(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t set_performance_level(struct device *dev,
struct device_attribute *attr, const char *buf,
size_t count)
static DEVICE_ATTR(performance_level, S_IWUSR | S_IRUGO,
get_performance_level, set_performance_level);
static int __init dmi_check_cb(const struct dmi_system_id *id)
static struct dmi_system_id __initdata samsung_dmi_table[] = ;
MODULE_DEVICE_TABLE(dmi, samsung_dmi_table);
static int find_signature(void __iomem *memcheck, const char *testStr)
static int __init samsung_init(void)
static void __exit samsung_exit(void)
module_init(samsung_init);
module_exit(samsung_exit);
MODULE_AUTHOR("Greg Kroah-Hartman <gregkh@suse.de>");
MODULE_DESCRIPTION("Samsung Backlight driver");
MODULE_LICENSE("GPL");

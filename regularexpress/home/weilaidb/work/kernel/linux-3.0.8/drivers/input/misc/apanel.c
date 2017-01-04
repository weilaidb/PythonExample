#define APANEL_NAME	"Fujitsu Application Panel"
#define APANEL_VERSION	"1.3.1"
#define APANEL		"apanel"
#define POLL_INTERVAL_DEFAULT	1000
enum apanel_devid ;
enum apanel_chip ;
static enum apanel_chip device_chip[APANEL_DEV_MAX];
#define MAX_PANEL_KEYS	12
struct apanel ;
static int apanel_probe(struct i2c_client *, const struct i2c_device_id *);
static void report_key(struct input_dev *input, unsigned keycode)
static void apanel_poll(struct input_polled_dev *ipdev)
static void led_update(struct work_struct *work)
static void mail_led_set(struct led_classdev *led,
enum led_brightness value)
static int apanel_remove(struct i2c_client *client)
static void apanel_shutdown(struct i2c_client *client)
static const struct i2c_device_id apanel_id[] = ;
MODULE_DEVICE_TABLE(i2c, apanel_id);
static struct i2c_driver apanel_driver = ;
static struct apanel apanel = ;
static int apanel_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static __init const void __iomem *bios_signature(const void __iomem *bios)
static int __init apanel_init(void)
module_init(apanel_init);
static void __exit apanel_cleanup(void)
module_exit(apanel_cleanup);
MODULE_AUTHOR("Stephen Hemminger <shemminger@linux-foundation.org>");
MODULE_DESCRIPTION(APANEL_NAME " driver");
MODULE_LICENSE("GPL");
MODULE_VERSION(APANEL_VERSION);
MODULE_ALIAS("dmi:*:svnFUJITSU:pnLifeBook*:pvr*:rvnFUJITSU:*");
MODULE_ALIAS("dmi:*:svnFUJITSU:pnLifebook*:pvr*:rvnFUJITSU:*");

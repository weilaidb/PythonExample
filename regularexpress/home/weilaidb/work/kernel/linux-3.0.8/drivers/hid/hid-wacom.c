#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
struct wacom_data ;
static unsigned short batcap[8] = ;
static enum power_supply_property wacom_battery_props[] = ;
static enum power_supply_property wacom_ac_props[] = ;
static int wacom_battery_get_property(struct power_supply *psy,
enum power_supply_property psp,
union power_supply_propval *val)
static int wacom_ac_get_property(struct power_supply *psy,
enum power_supply_property psp,
union power_supply_propval *val)
static void wacom_poke(struct hid_device *hdev, u8 speed)
static ssize_t wacom_show_speed(struct device *dev,
struct device_attribute
*attr, char *buf)
static ssize_t wacom_store_speed(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(speed, S_IRUGO | S_IWUSR | S_IWGRP,
wacom_show_speed, wacom_store_speed);
static int wacom_raw_event(struct hid_device *hdev, struct hid_report *report,
u8 *raw_data, int size)
static int wacom_probe(struct hid_device *hdev,
const struct hid_device_id *id)
static void wacom_remove(struct hid_device *hdev)
static const struct hid_device_id wacom_devices[] = ;
MODULE_DEVICE_TABLE(hid, wacom_devices);
static struct hid_driver wacom_driver = ;
static int __init wacom_init(void)
static void __exit wacom_exit(void)
module_init(wacom_init);
module_exit(wacom_exit);
MODULE_LICENSE("GPL");

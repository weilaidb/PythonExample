#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
#define MSI_DRIVER_VERSION "0.5"
#define MSI_LCD_LEVEL_MAX 9
#define MSI_EC_COMMAND_WIRELESS 0x10
#define MSI_EC_COMMAND_LCD_LEVEL 0x11
#define MSI_STANDARD_EC_COMMAND_ADDRESS	0x2e
#define MSI_STANDARD_EC_BLUETOOTH_MASK	(1 << 0)
#define MSI_STANDARD_EC_WEBCAM_MASK	(1 << 1)
#define MSI_STANDARD_EC_WLAN_MASK	(1 << 3)
#define MSI_STANDARD_EC_3G_MASK		(1 << 4)
#define MSI_STANDARD_EC_SCM_LOAD_ADDRESS	0x2d
#define MSI_STANDARD_EC_SCM_LOAD_MASK		(1 << 0)
#define MSI_STANDARD_EC_TOUCHPAD_ADDRESS	0xe4
#define MSI_STANDARD_EC_TOUCHPAD_MASK		(1 << 4)
static int msi_laptop_resume(struct platform_device *device);
#define MSI_STANDARD_EC_DEVICES_EXISTS_ADDRESS	0x2f
static int force;
module_param(force, bool, 0);
MODULE_PARM_DESC(force, "Force driver load, ignore DMI data");
static int auto_brightness;
module_param(auto_brightness, int, 0);
MODULE_PARM_DESC(auto_brightness, "Enable automatic brightness control (0: disabled; 1: enabled; 2: don't touch)");
static const struct key_entry msi_laptop_keymap[] = ;
static struct input_dev *msi_laptop_input_dev;
static bool old_ec_model;
static int wlan_s, bluetooth_s, threeg_s;
static int threeg_exists;
static bool load_scm_model;
static struct rfkill *rfk_wlan, *rfk_bluetooth, *rfk_threeg;
static int set_lcd_level(int level)
static int get_lcd_level(void)
static int get_auto_brightness(void)
static int set_auto_brightness(int enable)
static ssize_t set_device_state(const char *buf, size_t count, u8 mask)
static int get_wireless_state(int *wlan, int *bluetooth)
static int get_wireless_state_ec_standard(void)
static int get_threeg_exists(void)
static int bl_get_brightness(struct backlight_device *b)
static int bl_update_status(struct backlight_device *b)
static const struct backlight_ops msibl_ops = ;
static struct backlight_device *msibl_device;
static ssize_t show_wlan(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t store_wlan(struct device *dev,
struct device_attribute *attr, const char *buf, size_t count)
static ssize_t show_bluetooth(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t store_bluetooth(struct device *dev,
struct device_attribute *attr, const char *buf, size_t count)
static ssize_t show_threeg(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t store_threeg(struct device *dev,
struct device_attribute *attr, const char *buf, size_t count)
static ssize_t show_lcd_level(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t store_lcd_level(struct device *dev,
struct device_attribute *attr, const char *buf, size_t count)
static ssize_t show_auto_brightness(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t store_auto_brightness(struct device *dev,
struct device_attribute *attr, const char *buf, size_t count)
static DEVICE_ATTR(lcd_level, 0644, show_lcd_level, store_lcd_level);
static DEVICE_ATTR(auto_brightness, 0644, show_auto_brightness,
store_auto_brightness);
static DEVICE_ATTR(bluetooth, 0444, show_bluetooth, NULL);
static DEVICE_ATTR(wlan, 0444, show_wlan, NULL);
static DEVICE_ATTR(threeg, 0444, show_threeg, NULL);
static struct attribute *msipf_attributes[] = ;
static struct attribute_group msipf_attribute_group = ;
static struct platform_driver msipf_driver = ;
static struct platform_device *msipf_device;
static int dmi_check_cb(const struct dmi_system_id *id)
static struct dmi_system_id __initdata msi_dmi_table[] = ;
static struct dmi_system_id __initdata msi_load_scm_models_dmi_table[] = ;
static int rfkill_bluetooth_set(void *data, bool blocked)
static int rfkill_wlan_set(void *data, bool blocked)
static int rfkill_threeg_set(void *data, bool blocked)
static const struct rfkill_ops rfkill_bluetooth_ops = ;
static const struct rfkill_ops rfkill_wlan_ops = ;
static const struct rfkill_ops rfkill_threeg_ops = ;
static void rfkill_cleanup(void)
static void msi_update_rfkill(struct work_struct *ignored)
static DECLARE_DELAYED_WORK(msi_rfkill_work, msi_update_rfkill);
static void msi_send_touchpad_key(struct work_struct *ignored)
static DECLARE_DELAYED_WORK(msi_touchpad_work, msi_send_touchpad_key);
static bool msi_laptop_i8042_filter(unsigned char data, unsigned char str,
struct serio *port)
static void msi_init_rfkill(struct work_struct *ignored)
static DECLARE_DELAYED_WORK(msi_rfkill_init, msi_init_rfkill);
static int rfkill_init(struct platform_device *sdev)
static int msi_laptop_resume(struct platform_device *device)
static int __init msi_laptop_input_setup(void)
static void msi_laptop_input_destroy(void)
static int __init load_scm_model_init(struct platform_device *sdev)
static int __init msi_init(void)
static void __exit msi_cleanup(void)
module_init(msi_init);
module_exit(msi_cleanup);
MODULE_AUTHOR("Lennart Poettering");
MODULE_DESCRIPTION("MSI Laptop Support");
MODULE_VERSION(MSI_DRIVER_VERSION);
MODULE_LICENSE("GPL");
MODULE_ALIAS("dmi:*:svnMICRO-STARINT'LCO.,LTD:pnMS-1013:pvr0131*:cvnMICRO-STARINT'LCO.,LTD:ct10:*");
MODULE_ALIAS("dmi:*:svnMicro-StarInternational:pnMS-1058:pvr0581:rvnMSI:rnMS-1058:*:ct10:*");
MODULE_ALIAS("dmi:*:svnMicro-StarInternational:pnMS-1412:*:rvnMSI:rnMS-1412:*:cvnMICRO-STARINT'LCO.,LTD:ct10:*");
MODULE_ALIAS("dmi:*:svnNOTEBOOK:pnSAM2000:pvr0131*:cvnMICRO-STARINT'LCO.,LTD:ct10:*");
MODULE_ALIAS("dmi:*:svnMICRO-STARINTERNATIONAL*:pnMS-N034:*");
MODULE_ALIAS("dmi:*:svnMICRO-STARINTERNATIONAL*:pnMS-N051:*");
MODULE_ALIAS("dmi:*:svnMICRO-STARINTERNATIONAL*:pnMS-N014:*");
MODULE_ALIAS("dmi:*:svnMicro-StarInternational*:pnCR620:*");

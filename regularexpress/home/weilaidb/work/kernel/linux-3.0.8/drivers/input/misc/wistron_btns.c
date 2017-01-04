#define POLL_INTERVAL_DEFAULT	500
#define POLL_INTERVAL_BURST	100
#define WIFI		0x35
#define BLUETOOTH	0x34
#define MAIL_LED	0x31
MODULE_AUTHOR("Miloslav Trmac <mitr@volny.cz>");
MODULE_DESCRIPTION("Wistron laptop button driver");
MODULE_LICENSE("GPL v2");
MODULE_VERSION("0.3");
static int force;
module_param(force, bool, 0);
MODULE_PARM_DESC(force, "Load even if computer is not in database");
static char *keymap_name;
module_param_named(keymap, keymap_name, charp, 0);
MODULE_PARM_DESC(keymap, "Keymap name, if it can't be autodetected [generic, 1557/MS2141]");
static struct platform_device *wistron_device;
static void __iomem *bios_entry_point;
static void __iomem *bios_code_map_base;
static void __iomem *bios_data_map_base;
static u8 cmos_address;
struct regs ;
static void call_bios(struct regs *regs)
static ssize_t __init locate_wistron_bios(void __iomem *base)
static int __init map_bios(void)
static inline void unmap_bios(void)
static u16 bios_pop_queue(void)
static void __devinit bios_attach(void)
static void bios_detach(void)
static u8 __devinit bios_get_cmos_address(void)
static u16 __devinit bios_get_default_setting(u8 subsys)
static void bios_set_state(u8 subsys, int enable)
#define KE_WIFI		(KE_LAST + 1)
#define KE_BLUETOOTH	(KE_LAST + 2)
#define FE_MAIL_LED 0x01
#define FE_WIFI_LED 0x02
#define FE_UNTESTED 0x80
static struct key_entry *keymap;
static bool have_wifi;
static bool have_bluetooth;
static int leds_present;
static int __init dmi_matched(const struct dmi_system_id *dmi)
static struct key_entry keymap_empty[] __initdata = ;
static struct key_entry keymap_fs_amilo_pro_v2000[] __initdata = ;
static struct key_entry keymap_fs_amilo_pro_v3505[] __initdata = ;
static struct key_entry keymap_fujitsu_n3510[] __initdata = ;
static struct key_entry keymap_wistron_ms2111[] __initdata = ;
static struct key_entry keymap_wistron_md40100[] __initdata = ;
static struct key_entry keymap_wistron_ms2141[] __initdata = ;
static struct key_entry keymap_acer_aspire_1500[] __initdata = ;
static struct key_entry keymap_acer_aspire_1600[] __initdata = ;
static struct key_entry keymap_acer_aspire_5020[] __initdata = ;
static struct key_entry keymap_acer_travelmate_2410[] __initdata = ;
static struct key_entry keymap_acer_travelmate_110[] __initdata = ;
static struct key_entry keymap_acer_travelmate_300[] __initdata = ;
static struct key_entry keymap_acer_travelmate_380[] __initdata = ;
static struct key_entry keymap_acer_travelmate_220[] __initdata = ;
static struct key_entry keymap_acer_travelmate_230[] __initdata = ;
static struct key_entry keymap_acer_travelmate_240[] __initdata = ;
static struct key_entry keymap_acer_travelmate_350[] __initdata = ;
static struct key_entry keymap_acer_travelmate_360[] __initdata = ;
static struct key_entry keymap_acer_travelmate_610[] __initdata = ;
static struct key_entry keymap_acer_travelmate_630[] __initdata = ;
static struct key_entry keymap_aopen_1559as[] __initdata = ;
static struct key_entry keymap_fs_amilo_d88x0[] __initdata = ;
static struct key_entry keymap_wistron_md2900[] __initdata = ;
static struct key_entry keymap_wistron_md96500[] __initdata = ;
static struct key_entry keymap_wistron_generic[] __initdata = ;
static struct key_entry keymap_aopen_1557[] __initdata = ;
static struct key_entry keymap_prestigio[] __initdata = ;
static const struct dmi_system_id __initconst dmi_ids[] = ;
static int __init copy_keymap(void)
static int __init select_keymap(void)
static struct input_polled_dev *wistron_idev;
static unsigned long jiffies_last_press;
static bool wifi_enabled;
static bool bluetooth_enabled;
static void wistron_mail_led_set(struct led_classdev *led_cdev,
enum led_brightness value)
static void wistron_wifi_led_set(struct led_classdev *led_cdev,
enum led_brightness value)
static struct led_classdev wistron_mail_led = ;
static struct led_classdev wistron_wifi_led = ;
static void __devinit wistron_led_init(struct device *parent)
static void __devexit wistron_led_remove(void)
static inline void wistron_led_suspend(void)
static inline void wistron_led_resume(void)
static void handle_key(u8 code)
static void poll_bios(bool discard)
static void wistron_flush(struct input_polled_dev *dev)
static void wistron_poll(struct input_polled_dev *dev)
static int __devinit wistron_setup_keymap(struct input_dev *dev,
struct key_entry *entry)
static int __devinit setup_input_dev(void)
static int __devinit wistron_probe(struct platform_device *dev)
static int __devexit wistron_remove(struct platform_device *dev)
static int wistron_suspend(struct device *dev)
static int wistron_resume(struct device *dev)
static const struct dev_pm_ops wistron_pm_ops = ;
static struct platform_driver wistron_driver = ;
static int __init wb_module_init(void)
static void __exit wb_module_exit(void)
module_init(wb_module_init);
module_exit(wb_module_exit);

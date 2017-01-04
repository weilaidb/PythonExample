#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
#define DRIVER_NAME "compal-laptop"
#define DRIVER_VERSION	"0.2.7"
#define BACKLIGHT_LEVEL_ADDR		0xB9
#define BACKLIGHT_LEVEL_MAX		7
#define BACKLIGHT_STATE_ADDR		0x59
#define BACKLIGHT_STATE_ON_DATA		0xE1
#define BACKLIGHT_STATE_OFF_DATA	0xE2
#define WAKE_UP_ADDR			0xA4
#define WAKE_UP_PME			(1 << 0)
#define WAKE_UP_MODEM			(1 << 1)
#define WAKE_UP_LAN			(1 << 2)
#define WAKE_UP_WLAN			(1 << 4)
#define WAKE_UP_KEY			(1 << 6)
#define WAKE_UP_MOUSE			(1 << 7)
#define WIRELESS_ADDR			0xBB
#define WIRELESS_WLAN			(1 << 0)
#define WIRELESS_BT			(1 << 1)
#define WIRELESS_WLAN_EXISTS		(1 << 2)
#define WIRELESS_BT_EXISTS		(1 << 3)
#define WIRELESS_KILLSWITCH		(1 << 4)
#define PWM_ADDRESS			0x46
#define PWM_DISABLE_ADDR		0x59
#define PWM_DISABLE_DATA		0xA5
#define PWM_ENABLE_ADDR			0x59
#define PWM_ENABLE_DATA			0xA8
#define FAN_ADDRESS			0x46
#define FAN_DATA			0x81
#define FAN_FULL_ON_CMD			0x59
#define FAN_FULL_ON_ENABLE		0x76
#define FAN_FULL_ON_DISABLE		0x77
#define TEMP_CPU			0xB0
#define TEMP_CPU_LOCAL			0xB1
#define TEMP_CPU_DTS			0xB5
#define TEMP_NORTHBRIDGE		0xB6
#define TEMP_VGA			0xB4
#define TEMP_SKIN			0xB2
#define BAT_MANUFACTURER_NAME_ADDR	0x10
#define BAT_MANUFACTURER_NAME_LEN	9
#define BAT_MODEL_NAME_ADDR		0x19
#define BAT_MODEL_NAME_LEN		6
#define BAT_SERIAL_NUMBER_ADDR		0xC4
#define BAT_SERIAL_NUMBER_LEN		5
#define BAT_CHARGE_NOW			0xC2
#define BAT_CHARGE_DESIGN		0xCA
#define BAT_VOLTAGE_NOW			0xC6
#define BAT_VOLTAGE_DESIGN		0xC8
#define BAT_CURRENT_NOW			0xD0
#define BAT_CURRENT_AVG			0xD2
#define BAT_POWER			0xD4
#define BAT_CAPACITY			0xCE
#define BAT_TEMP			0xD6
#define BAT_TEMP_AVG			0xD7
#define BAT_STATUS0			0xC1
#define BAT_STATUS1			0xF0
#define BAT_STATUS2			0xF1
#define BAT_STOP_CHARGE1		0xF2
#define BAT_STOP_CHARGE2		0xF3
#define BAT_S0_DISCHARGE		(1 << 0)
#define BAT_S0_DISCHRG_CRITICAL		(1 << 2)
#define BAT_S0_LOW			(1 << 3)
#define BAT_S0_CHARGING			(1 << 1)
#define BAT_S0_AC			(1 << 7)
#define BAT_S1_EXISTS			(1 << 0)
#define BAT_S1_FULL			(1 << 1)
#define BAT_S1_EMPTY			(1 << 2)
#define BAT_S1_LiION_OR_NiMH		(1 << 7)
#define BAT_S2_LOW_LOW			(1 << 0)
#define BAT_STOP_CHRG1_BAD_CELL		(1 << 1)
#define BAT_STOP_CHRG1_COMM_FAIL	(1 << 2)
#define BAT_STOP_CHRG1_OVERVOLTAGE	(1 << 6)
#define BAT_STOP_CHRG1_OVERTEMPERATURE	(1 << 7)
struct compal_data;
static int force;
module_param(force, bool, 0);
MODULE_PARM_DESC(force, "Force driver load, ignore DMI data");
static bool extra_features;
static const unsigned char pwm_lookup_table[256] = ;
static u8 ec_read_u8(u8 addr)
static s8 ec_read_s8(u8 addr)
static u16 ec_read_u16(u8 addr)
static s16 ec_read_s16(u8 addr)
static void ec_read_sequence(u8 addr, u8 *buf, int len)
static int set_backlight_level(int level)
static int get_backlight_level(void)
static void set_backlight_state(bool on)
static void pwm_enable_control(void)
static void pwm_disable_control(void)
static void set_pwm(int pwm)
static int get_fan_rpm(void)
static int bl_get_brightness(struct backlight_device *b)
static int bl_update_status(struct backlight_device *b)
static const struct backlight_ops compalbl_ops = ;
static int compal_rfkill_set(void *data, bool blocked)
static void compal_rfkill_poll(struct rfkill *rfkill, void *data)
static const struct rfkill_ops compal_rfkill_ops = ;
#define SIMPLE_MASKED_STORE_SHOW(NAME, ADDR, MASK)			\
static ssize_t NAME##_show(struct device *dev,				\
struct device_attribute *attr, char *buf)			\
\
static ssize_t NAME##_store(struct device *dev,				\
struct device_attribute *attr, const char *buf, size_t count)	\
SIMPLE_MASKED_STORE_SHOW(wake_up_pme,	WAKE_UP_ADDR, WAKE_UP_PME)
SIMPLE_MASKED_STORE_SHOW(wake_up_modem,	WAKE_UP_ADDR, WAKE_UP_MODEM)
SIMPLE_MASKED_STORE_SHOW(wake_up_lan,	WAKE_UP_ADDR, WAKE_UP_LAN)
SIMPLE_MASKED_STORE_SHOW(wake_up_wlan,	WAKE_UP_ADDR, WAKE_UP_WLAN)
SIMPLE_MASKED_STORE_SHOW(wake_up_key,	WAKE_UP_ADDR, WAKE_UP_KEY)
SIMPLE_MASKED_STORE_SHOW(wake_up_mouse,	WAKE_UP_ADDR, WAKE_UP_MOUSE)
static ssize_t hwmon_name_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t pwm_enable_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t pwm_enable_store(struct device *dev,
struct device_attribute *attr, const char *buf, size_t count)
static ssize_t pwm_show(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t pwm_store(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t fan_show(struct device *dev, struct device_attribute *attr,
char *buf)
#define TEMPERATURE_SHOW_TEMP_AND_LABEL(POSTFIX, ADDRESS, LABEL)	\
static ssize_t temp_##POSTFIX(struct device *dev,			\
struct device_attribute *attr, char *buf)		\
\
static ssize_t label_##POSTFIX(struct device *dev,			\
struct device_attribute *attr, char *buf)		\
TEMPERATURE_SHOW_TEMP_AND_LABEL(cpu,        TEMP_CPU,        "CPU_TEMP");
TEMPERATURE_SHOW_TEMP_AND_LABEL(cpu_local,  TEMP_CPU_LOCAL,  "CPU_TEMP_LOCAL");
TEMPERATURE_SHOW_TEMP_AND_LABEL(cpu_DTS,    TEMP_CPU_DTS,    "CPU_DTS");
TEMPERATURE_SHOW_TEMP_AND_LABEL(northbridge,TEMP_NORTHBRIDGE,"NorthBridge");
TEMPERATURE_SHOW_TEMP_AND_LABEL(vga,        TEMP_VGA,        "VGA_TEMP");
TEMPERATURE_SHOW_TEMP_AND_LABEL(SKIN,       TEMP_SKIN,       "SKIN_TEMP90");
static int bat_status(void)
static int bat_health(void)
static int bat_is_present(void)
static int bat_technology(void)
static int bat_capacity_level(void)
static int bat_get_property(struct power_supply *psy,
enum power_supply_property psp,
union power_supply_propval *val)
static DEVICE_ATTR(wake_up_pme,
0644, wake_up_pme_show,		wake_up_pme_store);
static DEVICE_ATTR(wake_up_modem,
0644, wake_up_modem_show,	wake_up_modem_store);
static DEVICE_ATTR(wake_up_lan,
0644, wake_up_lan_show,	wake_up_lan_store);
static DEVICE_ATTR(wake_up_wlan,
0644, wake_up_wlan_show,	wake_up_wlan_store);
static DEVICE_ATTR(wake_up_key,
0644, wake_up_key_show,	wake_up_key_store);
static DEVICE_ATTR(wake_up_mouse,
0644, wake_up_mouse_show,	wake_up_mouse_store);
static SENSOR_DEVICE_ATTR(name,        S_IRUGO, hwmon_name_show,   NULL, 1);
static SENSOR_DEVICE_ATTR(fan1_input,  S_IRUGO, fan_show,          NULL, 1);
static SENSOR_DEVICE_ATTR(temp1_input, S_IRUGO, temp_cpu,          NULL, 1);
static SENSOR_DEVICE_ATTR(temp2_input, S_IRUGO, temp_cpu_local,    NULL, 1);
static SENSOR_DEVICE_ATTR(temp3_input, S_IRUGO, temp_cpu_DTS,      NULL, 1);
static SENSOR_DEVICE_ATTR(temp4_input, S_IRUGO, temp_northbridge,  NULL, 1);
static SENSOR_DEVICE_ATTR(temp5_input, S_IRUGO, temp_vga,          NULL, 1);
static SENSOR_DEVICE_ATTR(temp6_input, S_IRUGO, temp_SKIN,         NULL, 1);
static SENSOR_DEVICE_ATTR(temp1_label, S_IRUGO, label_cpu,         NULL, 1);
static SENSOR_DEVICE_ATTR(temp2_label, S_IRUGO, label_cpu_local,   NULL, 1);
static SENSOR_DEVICE_ATTR(temp3_label, S_IRUGO, label_cpu_DTS,     NULL, 1);
static SENSOR_DEVICE_ATTR(temp4_label, S_IRUGO, label_northbridge, NULL, 1);
static SENSOR_DEVICE_ATTR(temp5_label, S_IRUGO, label_vga,         NULL, 1);
static SENSOR_DEVICE_ATTR(temp6_label, S_IRUGO, label_SKIN,        NULL, 1);
static SENSOR_DEVICE_ATTR(pwm1, S_IRUGO | S_IWUSR, pwm_show, pwm_store, 1);
static SENSOR_DEVICE_ATTR(pwm1_enable,
S_IRUGO | S_IWUSR, pwm_enable_show, pwm_enable_store, 0);
static struct attribute *compal_attributes[] = ;
static struct attribute_group compal_attribute_group = ;
static int __devinit compal_probe(struct platform_device *);
static int __devexit compal_remove(struct platform_device *);
static struct platform_driver compal_driver = ;
static enum power_supply_property compal_bat_properties[] = ;
static struct backlight_device *compalbl_device;
static struct platform_device *compal_device;
static struct rfkill *wifi_rfkill;
static struct rfkill *bt_rfkill;
static int dmi_check_cb(const struct dmi_system_id *id)
static int dmi_check_cb_extra(const struct dmi_system_id *id)
static struct dmi_system_id __initdata compal_dmi_table[] = ;
static void initialize_power_supply_data(struct compal_data *data)
static void initialize_fan_control_data(struct compal_data *data)
static int setup_rfkill(void)
static int __init compal_init(void)
static int __devinit compal_probe(struct platform_device *pdev)
static void __exit compal_cleanup(void)
static int __devexit compal_remove(struct platform_device *pdev)
module_init(compal_init);
module_exit(compal_cleanup);
MODULE_AUTHOR("Cezary Jackiewicz");
MODULE_AUTHOR("Roald Frederickx (roald.frederickx@gmail.com)");
MODULE_DESCRIPTION("Compal Laptop Support");
MODULE_VERSION(DRIVER_VERSION);
MODULE_LICENSE("GPL");
MODULE_ALIAS("dmi:*:rnIFL90:rvrIFT00:*");
MODULE_ALIAS("dmi:*:rnIFL90:rvrREFERENCE:*");
MODULE_ALIAS("dmi:*:rnIFL91:rvrIFT00:*");
MODULE_ALIAS("dmi:*:rnJFL92:rvrIFT00:*");
MODULE_ALIAS("dmi:*:rnIFT00:rvrIFT00:*");
MODULE_ALIAS("dmi:*:rnJHL90:rvrREFERENCE:*");
MODULE_ALIAS("dmi:*:svnDellInc.:pnInspiron910:*");
MODULE_ALIAS("dmi:*:svnDellInc.:pnInspiron1010:*");
MODULE_ALIAS("dmi:*:svnDellInc.:pnInspiron1011:*");
MODULE_ALIAS("dmi:*:svnDellInc.:pnInspiron1012:*");
MODULE_ALIAS("dmi:*:svnDellInc.:pnInspiron1110:*");
MODULE_ALIAS("dmi:*:svnDellInc.:pnInspiron1210:*");

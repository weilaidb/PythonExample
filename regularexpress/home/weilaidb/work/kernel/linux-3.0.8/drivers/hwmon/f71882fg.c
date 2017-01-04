#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
#define DRVNAME "f71882fg"
#define SIO_F71858FG_LD_HWM	0x02
#define SIO_F71882FG_LD_HWM	0x04
#define SIO_UNLOCK_KEY		0x87
#define SIO_LOCK_KEY		0xAA
#define SIO_REG_LDSEL		0x07
#define SIO_REG_DEVID		0x20
#define SIO_REG_DEVREV		0x22
#define SIO_REG_MANID		0x23
#define SIO_REG_ENABLE		0x30
#define SIO_REG_ADDR		0x60
#define SIO_FINTEK_ID		0x1934
#define SIO_F71808E_ID		0x0901
#define SIO_F71808A_ID		0x1001
#define SIO_F71858_ID		0x0507
#define SIO_F71862_ID		0x0601
#define SIO_F71869_ID		0x0814
#define SIO_F71869A_ID		0x1007
#define SIO_F71882_ID		0x0541
#define SIO_F71889_ID		0x0723
#define SIO_F71889E_ID		0x0909
#define SIO_F71889A_ID		0x1005
#define SIO_F8000_ID		0x0581
#define SIO_F81865_ID		0x0704
#define REGION_LENGTH		8
#define ADDR_REG_OFFSET		5
#define DATA_REG_OFFSET		6
#define F71882FG_REG_IN_STATUS		0x12
#define F71882FG_REG_IN_BEEP		0x13
#define F71882FG_REG_IN(nr)		(0x20  + (nr))
#define F71882FG_REG_IN1_HIGH		0x32
#define F71882FG_REG_FAN(nr)		(0xA0 + (16 * (nr)))
#define F71882FG_REG_FAN_TARGET(nr)	(0xA2 + (16 * (nr)))
#define F71882FG_REG_FAN_FULL_SPEED(nr)	(0xA4 + (16 * (nr)))
#define F71882FG_REG_FAN_STATUS		0x92
#define F71882FG_REG_FAN_BEEP		0x93
#define F71882FG_REG_TEMP(nr)		(0x70 + 2 * (nr))
#define F71882FG_REG_TEMP_OVT(nr)	(0x80 + 2 * (nr))
#define F71882FG_REG_TEMP_HIGH(nr)	(0x81 + 2 * (nr))
#define F71882FG_REG_TEMP_STATUS	0x62
#define F71882FG_REG_TEMP_BEEP		0x63
#define F71882FG_REG_TEMP_CONFIG	0x69
#define F71882FG_REG_TEMP_HYST(nr)	(0x6C + (nr))
#define F71882FG_REG_TEMP_TYPE		0x6B
#define F71882FG_REG_TEMP_DIODE_OPEN	0x6F
#define F71882FG_REG_PWM(nr)		(0xA3 + (16 * (nr)))
#define F71882FG_REG_PWM_TYPE		0x94
#define F71882FG_REG_PWM_ENABLE		0x96
#define F71882FG_REG_FAN_HYST(nr)	(0x98 + (nr))
#define F71882FG_REG_FAN_FAULT_T	0x9F
#define F71882FG_FAN_NEG_TEMP_EN	0x20
#define F71882FG_FAN_PROG_SEL		0x80
#define F71882FG_REG_POINT_PWM(pwm, point)	(0xAA + (point) + (16 * (pwm)))
#define F71882FG_REG_POINT_TEMP(pwm, point)	(0xA6 + (point) + (16 * (pwm)))
#define F71882FG_REG_POINT_MAPPING(nr)		(0xAF + 16 * (nr))
#define	F71882FG_REG_START		0x01
#define F71882FG_MAX_INS		9
#define FAN_MIN_DETECT			366
static unsigned short force_id;
module_param(force_id, ushort, 0);
MODULE_PARM_DESC(force_id, "Override the detected device ID");
enum chips ;
static const char *f71882fg_names[] = ;
static const char f71882fg_has_in[][F71882FG_MAX_INS] = ;
static const char f71882fg_has_in1_alarm[] = ;
static const char f71882fg_fan_has_beep[] = ;
static const char f71882fg_nr_fans[] = ;
static const char f71882fg_temp_has_beep[] = ;
static const char f71882fg_nr_temps[] = ;
static struct platform_device *f71882fg_pdev;
static inline int superio_inb(int base, int reg);
static inline int superio_inw(int base, int reg);
static inline int superio_enter(int base);
static inline void superio_select(int base, int ld);
static inline void superio_exit(int base);
struct f71882fg_sio_data ;
struct f71882fg_data ;
static ssize_t show_in(struct device *dev, struct device_attribute *devattr,
char *buf);
static ssize_t show_in_max(struct device *dev, struct device_attribute
*devattr, char *buf);
static ssize_t store_in_max(struct device *dev, struct device_attribute
*devattr, const char *buf, size_t count);
static ssize_t show_in_beep(struct device *dev, struct device_attribute
*devattr, char *buf);
static ssize_t store_in_beep(struct device *dev, struct device_attribute
*devattr, const char *buf, size_t count);
static ssize_t show_in_alarm(struct device *dev, struct device_attribute
*devattr, char *buf);
static ssize_t show_fan(struct device *dev, struct device_attribute *devattr,
char *buf);
static ssize_t show_fan_full_speed(struct device *dev,
struct device_attribute *devattr, char *buf);
static ssize_t store_fan_full_speed(struct device *dev,
struct device_attribute *devattr, const char *buf, size_t count);
static ssize_t show_fan_beep(struct device *dev, struct device_attribute
*devattr, char *buf);
static ssize_t store_fan_beep(struct device *dev, struct device_attribute
*devattr, const char *buf, size_t count);
static ssize_t show_fan_alarm(struct device *dev, struct device_attribute
*devattr, char *buf);
static ssize_t show_temp(struct device *dev, struct device_attribute
*devattr, char *buf);
static ssize_t show_temp_max(struct device *dev, struct device_attribute
*devattr, char *buf);
static ssize_t store_temp_max(struct device *dev, struct device_attribute
*devattr, const char *buf, size_t count);
static ssize_t show_temp_max_hyst(struct device *dev, struct device_attribute
*devattr, char *buf);
static ssize_t store_temp_max_hyst(struct device *dev, struct device_attribute
*devattr, const char *buf, size_t count);
static ssize_t show_temp_crit(struct device *dev, struct device_attribute
*devattr, char *buf);
static ssize_t store_temp_crit(struct device *dev, struct device_attribute
*devattr, const char *buf, size_t count);
static ssize_t show_temp_crit_hyst(struct device *dev, struct device_attribute
*devattr, char *buf);
static ssize_t show_temp_type(struct device *dev, struct device_attribute
*devattr, char *buf);
static ssize_t show_temp_beep(struct device *dev, struct device_attribute
*devattr, char *buf);
static ssize_t store_temp_beep(struct device *dev, struct device_attribute
*devattr, const char *buf, size_t count);
static ssize_t show_temp_alarm(struct device *dev, struct device_attribute
*devattr, char *buf);
static ssize_t show_temp_fault(struct device *dev, struct device_attribute
*devattr, char *buf);
static ssize_t show_pwm(struct device *dev, struct device_attribute *devattr,
char *buf);
static ssize_t store_pwm(struct device *dev, struct device_attribute *devattr,
const char *buf, size_t count);
static ssize_t show_simple_pwm(struct device *dev,
struct device_attribute *devattr, char *buf);
static ssize_t store_simple_pwm(struct device *dev,
struct device_attribute *devattr, const char *buf, size_t count);
static ssize_t show_pwm_enable(struct device *dev,
struct device_attribute *devattr, char *buf);
static ssize_t store_pwm_enable(struct device *dev,
struct device_attribute	*devattr, const char *buf, size_t count);
static ssize_t show_pwm_interpolate(struct device *dev,
struct device_attribute *devattr, char *buf);
static ssize_t store_pwm_interpolate(struct device *dev,
struct device_attribute *devattr, const char *buf, size_t count);
static ssize_t show_pwm_auto_point_channel(struct device *dev,
struct device_attribute *devattr, char *buf);
static ssize_t store_pwm_auto_point_channel(struct device *dev,
struct device_attribute *devattr, const char *buf, size_t count);
static ssize_t show_pwm_auto_point_temp_hyst(struct device *dev,
struct device_attribute *devattr, char *buf);
static ssize_t store_pwm_auto_point_temp_hyst(struct device *dev,
struct device_attribute *devattr, const char *buf, size_t count);
static ssize_t show_pwm_auto_point_pwm(struct device *dev,
struct device_attribute *devattr, char *buf);
static ssize_t store_pwm_auto_point_pwm(struct device *dev,
struct device_attribute *devattr, const char *buf, size_t count);
static ssize_t show_pwm_auto_point_temp(struct device *dev,
struct device_attribute *devattr, char *buf);
static ssize_t store_pwm_auto_point_temp(struct device *dev,
struct device_attribute *devattr, const char *buf, size_t count);
static ssize_t show_name(struct device *dev, struct device_attribute *devattr,
char *buf);
static int __devinit f71882fg_probe(struct platform_device * pdev);
static int f71882fg_remove(struct platform_device *pdev);
static struct platform_driver f71882fg_driver = ;
static DEVICE_ATTR(name, S_IRUGO, show_name, NULL);
static struct sensor_device_attribute_2 f71858fg_temp_attr[] = ;
static struct sensor_device_attribute_2 fxxxx_temp_attr[3][9] = ;
static struct sensor_device_attribute_2 fxxxx_temp_beep_attr[3][2] = ;
static struct sensor_device_attribute_2 f8000_temp_attr[] = ;
static struct sensor_device_attribute_2 fxxxx_in_attr[] = ;
static struct sensor_device_attribute_2 fxxxx_in1_alarm_attr[] = ;
static struct sensor_device_attribute_2 fxxxx_fan_attr[4][6] = ;
static struct sensor_device_attribute_2 f71808a_fan3_attr[] = ;
static struct sensor_device_attribute_2 fxxxx_fan_beep_attr[] = ;
static struct sensor_device_attribute_2 f71862fg_auto_pwm_attr[] = ;
static struct sensor_device_attribute_2 f71869_auto_pwm_attr[] = ;
static struct sensor_device_attribute_2 fxxxx_auto_pwm_attr[4][14] = ;
static struct sensor_device_attribute_2 f8000_fan_attr[] = ;
static struct sensor_device_attribute_2 f8000_auto_pwm_attr[] = ;
static inline int superio_inb(int base, int reg)
static int superio_inw(int base, int reg)
static inline int superio_enter(int base)
static inline void superio_select(int base, int ld)
static inline void superio_exit(int base)
static inline int fan_from_reg(u16 reg)
static inline u16 fan_to_reg(int fan)
static u8 f71882fg_read8(struct f71882fg_data *data, u8 reg)
static u16 f71882fg_read16(struct f71882fg_data *data, u8 reg)
static void f71882fg_write8(struct f71882fg_data *data, u8 reg, u8 val)
static void f71882fg_write16(struct f71882fg_data *data, u8 reg, u16 val)
static u16 f71882fg_read_temp(struct f71882fg_data *data, int nr)
static struct f71882fg_data *f71882fg_update_device(struct device *dev)
static ssize_t show_fan(struct device *dev, struct device_attribute *devattr,
char *buf)
static ssize_t show_fan_full_speed(struct device *dev,
struct device_attribute *devattr, char *buf)
static ssize_t store_fan_full_speed(struct device *dev,
struct device_attribute *devattr,
const char *buf, size_t count)
static ssize_t show_fan_beep(struct device *dev, struct device_attribute
*devattr, char *buf)
static ssize_t store_fan_beep(struct device *dev, struct device_attribute
*devattr, const char *buf, size_t count)
static ssize_t show_fan_alarm(struct device *dev, struct device_attribute
*devattr, char *buf)
static ssize_t show_in(struct device *dev, struct device_attribute *devattr,
char *buf)
static ssize_t show_in_max(struct device *dev, struct device_attribute
*devattr, char *buf)
static ssize_t store_in_max(struct device *dev, struct device_attribute
*devattr, const char *buf, size_t count)
static ssize_t show_in_beep(struct device *dev, struct device_attribute
*devattr, char *buf)
static ssize_t store_in_beep(struct device *dev, struct device_attribute
*devattr, const char *buf, size_t count)
static ssize_t show_in_alarm(struct device *dev, struct device_attribute
*devattr, char *buf)
static ssize_t show_temp(struct device *dev, struct device_attribute *devattr,
char *buf)
static ssize_t show_temp_max(struct device *dev, struct device_attribute
*devattr, char *buf)
static ssize_t store_temp_max(struct device *dev, struct device_attribute
*devattr, const char *buf, size_t count)
static ssize_t show_temp_max_hyst(struct device *dev, struct device_attribute
*devattr, char *buf)
static ssize_t store_temp_max_hyst(struct device *dev, struct device_attribute
*devattr, const char *buf, size_t count)
static ssize_t show_temp_crit(struct device *dev, struct device_attribute
*devattr, char *buf)
static ssize_t store_temp_crit(struct device *dev, struct device_attribute
*devattr, const char *buf, size_t count)
static ssize_t show_temp_crit_hyst(struct device *dev, struct device_attribute
*devattr, char *buf)
static ssize_t show_temp_type(struct device *dev, struct device_attribute
*devattr, char *buf)
static ssize_t show_temp_beep(struct device *dev, struct device_attribute
*devattr, char *buf)
static ssize_t store_temp_beep(struct device *dev, struct device_attribute
*devattr, const char *buf, size_t count)
static ssize_t show_temp_alarm(struct device *dev, struct device_attribute
*devattr, char *buf)
static ssize_t show_temp_fault(struct device *dev, struct device_attribute
*devattr, char *buf)
static ssize_t show_pwm(struct device *dev,
struct device_attribute *devattr, char *buf)
static ssize_t store_pwm(struct device *dev,
struct device_attribute *devattr, const char *buf,
size_t count)
static ssize_t show_simple_pwm(struct device *dev,
struct device_attribute *devattr, char *buf)
static ssize_t store_simple_pwm(struct device *dev,
struct device_attribute *devattr,
const char *buf, size_t count)
static ssize_t show_pwm_enable(struct device *dev,
struct device_attribute *devattr, char *buf)
static ssize_t store_pwm_enable(struct device *dev, struct device_attribute
*devattr, const char *buf, size_t count)
static ssize_t show_pwm_auto_point_pwm(struct device *dev,
struct device_attribute *devattr,
char *buf)
static ssize_t store_pwm_auto_point_pwm(struct device *dev,
struct device_attribute *devattr,
const char *buf, size_t count)
static ssize_t show_pwm_auto_point_temp_hyst(struct device *dev,
struct device_attribute *devattr,
char *buf)
static ssize_t store_pwm_auto_point_temp_hyst(struct device *dev,
struct device_attribute *devattr,
const char *buf, size_t count)
static ssize_t show_pwm_interpolate(struct device *dev,
struct device_attribute *devattr, char *buf)
static ssize_t store_pwm_interpolate(struct device *dev,
struct device_attribute *devattr,
const char *buf, size_t count)
static ssize_t show_pwm_auto_point_channel(struct device *dev,
struct device_attribute *devattr,
char *buf)
static ssize_t store_pwm_auto_point_channel(struct device *dev,
struct device_attribute *devattr,
const char *buf, size_t count)
static ssize_t show_pwm_auto_point_temp(struct device *dev,
struct device_attribute *devattr,
char *buf)
static ssize_t store_pwm_auto_point_temp(struct device *dev,
struct device_attribute *devattr,
const char *buf, size_t count)
static ssize_t show_name(struct device *dev, struct device_attribute *devattr,
char *buf)
static int __devinit f71882fg_create_sysfs_files(struct platform_device *pdev,
struct sensor_device_attribute_2 *attr, int count)
static void f71882fg_remove_sysfs_files(struct platform_device *pdev,
struct sensor_device_attribute_2 *attr, int count)
static int __devinit f71882fg_probe(struct platform_device *pdev)
static int f71882fg_remove(struct platform_device *pdev)
static int __init f71882fg_find(int sioaddr, unsigned short *address,
struct f71882fg_sio_data *sio_data)
static int __init f71882fg_device_add(unsigned short address,
const struct f71882fg_sio_data *sio_data)
static int __init f71882fg_init(void)
static void __exit f71882fg_exit(void)
MODULE_DESCRIPTION("F71882FG Hardware Monitoring Driver");
MODULE_AUTHOR("Hans Edgington, Hans de Goede <hdegoede@redhat.com>");
MODULE_LICENSE("GPL");
module_init(f71882fg_init);
module_exit(f71882fg_exit);

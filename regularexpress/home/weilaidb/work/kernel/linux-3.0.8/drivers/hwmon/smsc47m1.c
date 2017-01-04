#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
static unsigned short force_id;
module_param(force_id, ushort, 0);
MODULE_PARM_DESC(force_id, "Override the detected device ID");
static struct platform_device *pdev;
#define DRVNAME "smsc47m1"
enum chips ;
#define	REG	0x2e
#define	VAL	0x2f
static inline void
superio_outb(int reg, int val)
static inline int
superio_inb(int reg)
#define superio_select() superio_outb(0x07, 0x0A)
static inline void
superio_enter(void)
static inline void
superio_exit(void)
#define SUPERIO_REG_ACT		0x30
#define SUPERIO_REG_BASE	0x60
#define SUPERIO_REG_DEVID	0x20
#define SUPERIO_REG_DEVREV	0x21
#define SMSC_EXTENT		0x80
#define SMSC47M1_REG_ALARM		0x04
#define SMSC47M1_REG_TPIN(nr)		(0x34 - (nr))
#define SMSC47M1_REG_PPIN(nr)		(0x36 - (nr))
#define SMSC47M1_REG_FANDIV		0x58
static const u8 SMSC47M1_REG_FAN[3]		= ;
static const u8 SMSC47M1_REG_FAN_PRELOAD[3]	= ;
static const u8 SMSC47M1_REG_PWM[3]		= ;
#define SMSC47M2_REG_ALARM6		0x09
#define SMSC47M2_REG_TPIN1		0x38
#define SMSC47M2_REG_TPIN2		0x37
#define SMSC47M2_REG_TPIN3		0x2d
#define SMSC47M2_REG_PPIN3		0x2c
#define SMSC47M2_REG_FANDIV3		0x6a
#define MIN_FROM_REG(reg,div)		((reg)>=192 ? 0 : \
983040/((192-(reg))*(div)))
#define FAN_FROM_REG(reg,div,preload)	((reg)<=(preload) || (reg)==255 ? 0 : \
983040/(((reg)-(preload))*(div)))
#define DIV_FROM_REG(reg)		(1 << (reg))
#define PWM_FROM_REG(reg)		(((reg) & 0x7E) << 1)
#define PWM_EN_FROM_REG(reg)		((~(reg)) & 0x01)
#define PWM_TO_REG(reg)			(((reg) >> 1) & 0x7E)
struct smsc47m1_data ;
struct smsc47m1_sio_data ;
static int __exit smsc47m1_remove(struct platform_device *pdev);
static struct smsc47m1_data *smsc47m1_update_device(struct device *dev,
int init);
static inline int smsc47m1_read_value(struct smsc47m1_data *data, u8 reg)
static inline void smsc47m1_write_value(struct smsc47m1_data *data, u8 reg,
u8 value)
static struct platform_driver smsc47m1_driver = ;
static ssize_t get_fan(struct device *dev, struct device_attribute
*devattr, char *buf)
static ssize_t get_fan_min(struct device *dev, struct device_attribute
*devattr, char *buf)
static ssize_t get_fan_div(struct device *dev, struct device_attribute
*devattr, char *buf)
static ssize_t get_fan_alarm(struct device *dev, struct device_attribute
*devattr, char *buf)
static ssize_t get_pwm(struct device *dev, struct device_attribute
*devattr, char *buf)
static ssize_t get_pwm_en(struct device *dev, struct device_attribute
*devattr, char *buf)
static ssize_t get_alarms(struct device *dev, struct device_attribute
*devattr, char *buf)
static ssize_t set_fan_min(struct device *dev, struct device_attribute
*devattr, const char *buf, size_t count)
static ssize_t set_fan_div(struct device *dev, struct device_attribute
*devattr, const char *buf, size_t count)
static ssize_t set_pwm(struct device *dev, struct device_attribute
*devattr, const char *buf, size_t count)
static ssize_t set_pwm_en(struct device *dev, struct device_attribute
*devattr, const char *buf, size_t count)
#define fan_present(offset)						\
static SENSOR_DEVICE_ATTR(fan##offset##_input, S_IRUGO, get_fan,	\
NULL, offset - 1);					\
static SENSOR_DEVICE_ATTR(fan##offset##_min, S_IRUGO | S_IWUSR,		\
get_fan_min, set_fan_min, offset - 1);			\
static SENSOR_DEVICE_ATTR(fan##offset##_div, S_IRUGO | S_IWUSR,		\
get_fan_div, set_fan_div, offset - 1);			\
static SENSOR_DEVICE_ATTR(fan##offset##_alarm, S_IRUGO, get_fan_alarm,	\
NULL, offset - 1);					\
static SENSOR_DEVICE_ATTR(pwm##offset, S_IRUGO | S_IWUSR,		\
get_pwm, set_pwm, offset - 1);				\
static SENSOR_DEVICE_ATTR(pwm##offset##_enable, S_IRUGO | S_IWUSR,	\
get_pwm_en, set_pwm_en, offset - 1)
fan_present(1);
fan_present(2);
fan_present(3);
static DEVICE_ATTR(alarms, S_IRUGO, get_alarms, NULL);
static ssize_t show_name(struct device *dev, struct device_attribute
*devattr, char *buf)
static DEVICE_ATTR(name, S_IRUGO, show_name, NULL);
static struct attribute *smsc47m1_attributes[] = ;
static const struct attribute_group smsc47m1_group = ;
static int __init smsc47m1_find(unsigned short *addr,
struct smsc47m1_sio_data *sio_data)
static void smsc47m1_restore(const struct smsc47m1_sio_data *sio_data)
#define CHECK		1
#define REQUEST		2
#define RELEASE		3
static int smsc47m1_handle_resources(unsigned short address, enum chips type,
int action, struct device *dev)
static int __init smsc47m1_probe(struct platform_device *pdev)
static int __exit smsc47m1_remove(struct platform_device *pdev)
static struct smsc47m1_data *smsc47m1_update_device(struct device *dev,
int init)
static int __init smsc47m1_device_add(unsigned short address,
const struct smsc47m1_sio_data *sio_data)
static int __init sm_smsc47m1_init(void)
static void __exit sm_smsc47m1_exit(void)
MODULE_AUTHOR("Mark D. Studebaker <mdsxyz123@yahoo.com>");
MODULE_DESCRIPTION("SMSC LPC47M1xx fan sensors driver");
MODULE_LICENSE("GPL");
module_init(sm_smsc47m1_init);
module_exit(sm_smsc47m1_exit);

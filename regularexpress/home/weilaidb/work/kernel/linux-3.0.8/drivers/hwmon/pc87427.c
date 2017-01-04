#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
static unsigned short force_id;
module_param(force_id, ushort, 0);
MODULE_PARM_DESC(force_id, "Override the detected device ID");
static struct platform_device *pdev;
#define DRVNAME "pc87427"
struct pc87427_data ;
struct pc87427_sio_data ;
#define SIOREG_LDSEL	0x07
#define SIOREG_DEVID	0x20
#define SIOREG_CF2	0x22
#define SIOREG_CF3	0x23
#define SIOREG_CF4	0x24
#define SIOREG_CF5	0x25
#define SIOREG_CFB	0x2B
#define SIOREG_CFC	0x2C
#define SIOREG_CFD	0x2D
#define SIOREG_ACT	0x30
#define SIOREG_MAP	0x50
#define SIOREG_IOBASE	0x60
static const u8 logdev[2] = ;
static const char *logdev_str[2] = ;
#define LD_FAN		0
#define LD_IN		1
#define LD_TEMP		1
static inline void superio_outb(int sioaddr, int reg, int val)
static inline int superio_inb(int sioaddr, int reg)
static inline void superio_exit(int sioaddr)
#define REGION_LENGTH		32
#define PC87427_REG_BANK	0x0f
#define BANK_FM(nr)		(nr)
#define BANK_FT(nr)		(0x08 + (nr))
#define BANK_FC(nr)		(0x10 + (nr) * 2)
#define BANK_TM(nr)		(nr)
#define BANK_VM(nr)		(0x08 + (nr))
static inline int pc87427_read8(struct pc87427_data *data, u8 ldi, u8 reg)
static inline int pc87427_read8_bank(struct pc87427_data *data, u8 ldi,
u8 bank, u8 reg)
static inline void pc87427_write8_bank(struct pc87427_data *data, u8 ldi,
u8 bank, u8 reg, u8 value)
#define PC87427_REG_FAN			0x12
#define PC87427_REG_FAN_MIN		0x14
#define PC87427_REG_FAN_STATUS		0x10
#define FAN_STATUS_STALL		(1 << 3)
#define FAN_STATUS_LOSPD		(1 << 1)
#define FAN_STATUS_MONEN		(1 << 0)
static void pc87427_readall_fan(struct pc87427_data *data, u8 nr)
static inline unsigned long fan_from_reg(u16 reg)
static inline u16 fan_to_reg(unsigned long val)
#define PC87427_REG_PWM_ENABLE		0x10
#define PC87427_REG_PWM_DUTY		0x12
#define PWM_ENABLE_MODE_MASK		(7 << 4)
#define PWM_ENABLE_CTLEN		(1 << 0)
#define PWM_MODE_MANUAL			(0 << 4)
#define PWM_MODE_AUTO			(1 << 4)
#define PWM_MODE_OFF			(2 << 4)
#define PWM_MODE_ON			(7 << 4)
static void pc87427_readall_pwm(struct pc87427_data *data, u8 nr)
static inline int pwm_enable_from_reg(u8 reg)
static inline u8 pwm_enable_to_reg(unsigned long val, u8 pwmval)
#define PC87427_REG_TEMP_STATUS		0x10
#define PC87427_REG_TEMP		0x14
#define PC87427_REG_TEMP_MAX		0x18
#define PC87427_REG_TEMP_MIN		0x19
#define PC87427_REG_TEMP_CRIT		0x1a
#define PC87427_REG_TEMP_TYPE		0x1d
#define TEMP_STATUS_CHANEN		(1 << 0)
#define TEMP_STATUS_LOWFLG		(1 << 1)
#define TEMP_STATUS_HIGHFLG		(1 << 2)
#define TEMP_STATUS_CRITFLG		(1 << 3)
#define TEMP_STATUS_SENSERR		(1 << 5)
#define TEMP_TYPE_MASK			(3 << 5)
#define TEMP_TYPE_THERMISTOR		(1 << 5)
#define TEMP_TYPE_REMOTE_DIODE		(2 << 5)
#define TEMP_TYPE_LOCAL_DIODE		(3 << 5)
static void pc87427_readall_temp(struct pc87427_data *data, u8 nr)
static inline unsigned int temp_type_from_reg(u8 reg)
static inline long temp_from_reg(s16 reg)
static inline long temp_from_reg8(s8 reg)
static struct pc87427_data *pc87427_update_device(struct device *dev)
static ssize_t show_fan_input(struct device *dev, struct device_attribute
*devattr, char *buf)
static ssize_t show_fan_min(struct device *dev, struct device_attribute
*devattr, char *buf)
static ssize_t show_fan_alarm(struct device *dev, struct device_attribute
*devattr, char *buf)
static ssize_t show_fan_fault(struct device *dev, struct device_attribute
*devattr, char *buf)
static ssize_t set_fan_min(struct device *dev, struct device_attribute
*devattr, const char *buf, size_t count)
static SENSOR_DEVICE_ATTR(fan1_input, S_IRUGO, show_fan_input, NULL, 0);
static SENSOR_DEVICE_ATTR(fan2_input, S_IRUGO, show_fan_input, NULL, 1);
static SENSOR_DEVICE_ATTR(fan3_input, S_IRUGO, show_fan_input, NULL, 2);
static SENSOR_DEVICE_ATTR(fan4_input, S_IRUGO, show_fan_input, NULL, 3);
static SENSOR_DEVICE_ATTR(fan5_input, S_IRUGO, show_fan_input, NULL, 4);
static SENSOR_DEVICE_ATTR(fan6_input, S_IRUGO, show_fan_input, NULL, 5);
static SENSOR_DEVICE_ATTR(fan7_input, S_IRUGO, show_fan_input, NULL, 6);
static SENSOR_DEVICE_ATTR(fan8_input, S_IRUGO, show_fan_input, NULL, 7);
static SENSOR_DEVICE_ATTR(fan1_min, S_IWUSR | S_IRUGO,
show_fan_min, set_fan_min, 0);
static SENSOR_DEVICE_ATTR(fan2_min, S_IWUSR | S_IRUGO,
show_fan_min, set_fan_min, 1);
static SENSOR_DEVICE_ATTR(fan3_min, S_IWUSR | S_IRUGO,
show_fan_min, set_fan_min, 2);
static SENSOR_DEVICE_ATTR(fan4_min, S_IWUSR | S_IRUGO,
show_fan_min, set_fan_min, 3);
static SENSOR_DEVICE_ATTR(fan5_min, S_IWUSR | S_IRUGO,
show_fan_min, set_fan_min, 4);
static SENSOR_DEVICE_ATTR(fan6_min, S_IWUSR | S_IRUGO,
show_fan_min, set_fan_min, 5);
static SENSOR_DEVICE_ATTR(fan7_min, S_IWUSR | S_IRUGO,
show_fan_min, set_fan_min, 6);
static SENSOR_DEVICE_ATTR(fan8_min, S_IWUSR | S_IRUGO,
show_fan_min, set_fan_min, 7);
static SENSOR_DEVICE_ATTR(fan1_alarm, S_IRUGO, show_fan_alarm, NULL, 0);
static SENSOR_DEVICE_ATTR(fan2_alarm, S_IRUGO, show_fan_alarm, NULL, 1);
static SENSOR_DEVICE_ATTR(fan3_alarm, S_IRUGO, show_fan_alarm, NULL, 2);
static SENSOR_DEVICE_ATTR(fan4_alarm, S_IRUGO, show_fan_alarm, NULL, 3);
static SENSOR_DEVICE_ATTR(fan5_alarm, S_IRUGO, show_fan_alarm, NULL, 4);
static SENSOR_DEVICE_ATTR(fan6_alarm, S_IRUGO, show_fan_alarm, NULL, 5);
static SENSOR_DEVICE_ATTR(fan7_alarm, S_IRUGO, show_fan_alarm, NULL, 6);
static SENSOR_DEVICE_ATTR(fan8_alarm, S_IRUGO, show_fan_alarm, NULL, 7);
static SENSOR_DEVICE_ATTR(fan1_fault, S_IRUGO, show_fan_fault, NULL, 0);
static SENSOR_DEVICE_ATTR(fan2_fault, S_IRUGO, show_fan_fault, NULL, 1);
static SENSOR_DEVICE_ATTR(fan3_fault, S_IRUGO, show_fan_fault, NULL, 2);
static SENSOR_DEVICE_ATTR(fan4_fault, S_IRUGO, show_fan_fault, NULL, 3);
static SENSOR_DEVICE_ATTR(fan5_fault, S_IRUGO, show_fan_fault, NULL, 4);
static SENSOR_DEVICE_ATTR(fan6_fault, S_IRUGO, show_fan_fault, NULL, 5);
static SENSOR_DEVICE_ATTR(fan7_fault, S_IRUGO, show_fan_fault, NULL, 6);
static SENSOR_DEVICE_ATTR(fan8_fault, S_IRUGO, show_fan_fault, NULL, 7);
static struct attribute *pc87427_attributes_fan[8][5] = ;
static const struct attribute_group pc87427_group_fan[8] = ;
static void update_pwm_enable(struct pc87427_data *data, int nr, u8 mode)
static ssize_t show_pwm_enable(struct device *dev, struct device_attribute
*devattr, char *buf)
static ssize_t set_pwm_enable(struct device *dev, struct device_attribute
*devattr, const char *buf, size_t count)
static ssize_t show_pwm(struct device *dev, struct device_attribute
*devattr, char *buf)
static ssize_t set_pwm(struct device *dev, struct device_attribute
*devattr, const char *buf, size_t count)
static SENSOR_DEVICE_ATTR(pwm1_enable, S_IWUSR | S_IRUGO,
show_pwm_enable, set_pwm_enable, 0);
static SENSOR_DEVICE_ATTR(pwm2_enable, S_IWUSR | S_IRUGO,
show_pwm_enable, set_pwm_enable, 1);
static SENSOR_DEVICE_ATTR(pwm3_enable, S_IWUSR | S_IRUGO,
show_pwm_enable, set_pwm_enable, 2);
static SENSOR_DEVICE_ATTR(pwm4_enable, S_IWUSR | S_IRUGO,
show_pwm_enable, set_pwm_enable, 3);
static SENSOR_DEVICE_ATTR(pwm1, S_IWUSR | S_IRUGO, show_pwm, set_pwm, 0);
static SENSOR_DEVICE_ATTR(pwm2, S_IWUSR | S_IRUGO, show_pwm, set_pwm, 1);
static SENSOR_DEVICE_ATTR(pwm3, S_IWUSR | S_IRUGO, show_pwm, set_pwm, 2);
static SENSOR_DEVICE_ATTR(pwm4, S_IWUSR | S_IRUGO, show_pwm, set_pwm, 3);
static struct attribute *pc87427_attributes_pwm[4][3] = ;
static const struct attribute_group pc87427_group_pwm[4] = ;
static ssize_t show_temp_input(struct device *dev, struct device_attribute
*devattr, char *buf)
static ssize_t show_temp_min(struct device *dev, struct device_attribute
*devattr, char *buf)
static ssize_t show_temp_max(struct device *dev, struct device_attribute
*devattr, char *buf)
static ssize_t show_temp_crit(struct device *dev, struct device_attribute
*devattr, char *buf)
static ssize_t show_temp_type(struct device *dev, struct device_attribute
*devattr, char *buf)
static ssize_t show_temp_min_alarm(struct device *dev, struct device_attribute
*devattr, char *buf)
static ssize_t show_temp_max_alarm(struct device *dev, struct device_attribute
*devattr, char *buf)
static ssize_t show_temp_crit_alarm(struct device *dev, struct device_attribute
*devattr, char *buf)
static ssize_t show_temp_fault(struct device *dev, struct device_attribute
*devattr, char *buf)
static SENSOR_DEVICE_ATTR(temp1_input, S_IRUGO, show_temp_input, NULL, 0);
static SENSOR_DEVICE_ATTR(temp2_input, S_IRUGO, show_temp_input, NULL, 1);
static SENSOR_DEVICE_ATTR(temp3_input, S_IRUGO, show_temp_input, NULL, 2);
static SENSOR_DEVICE_ATTR(temp4_input, S_IRUGO, show_temp_input, NULL, 3);
static SENSOR_DEVICE_ATTR(temp5_input, S_IRUGO, show_temp_input, NULL, 4);
static SENSOR_DEVICE_ATTR(temp6_input, S_IRUGO, show_temp_input, NULL, 5);
static SENSOR_DEVICE_ATTR(temp1_min, S_IRUGO, show_temp_min, NULL, 0);
static SENSOR_DEVICE_ATTR(temp2_min, S_IRUGO, show_temp_min, NULL, 1);
static SENSOR_DEVICE_ATTR(temp3_min, S_IRUGO, show_temp_min, NULL, 2);
static SENSOR_DEVICE_ATTR(temp4_min, S_IRUGO, show_temp_min, NULL, 3);
static SENSOR_DEVICE_ATTR(temp5_min, S_IRUGO, show_temp_min, NULL, 4);
static SENSOR_DEVICE_ATTR(temp6_min, S_IRUGO, show_temp_min, NULL, 5);
static SENSOR_DEVICE_ATTR(temp1_max, S_IRUGO, show_temp_max, NULL, 0);
static SENSOR_DEVICE_ATTR(temp2_max, S_IRUGO, show_temp_max, NULL, 1);
static SENSOR_DEVICE_ATTR(temp3_max, S_IRUGO, show_temp_max, NULL, 2);
static SENSOR_DEVICE_ATTR(temp4_max, S_IRUGO, show_temp_max, NULL, 3);
static SENSOR_DEVICE_ATTR(temp5_max, S_IRUGO, show_temp_max, NULL, 4);
static SENSOR_DEVICE_ATTR(temp6_max, S_IRUGO, show_temp_max, NULL, 5);
static SENSOR_DEVICE_ATTR(temp1_crit, S_IRUGO, show_temp_crit, NULL, 0);
static SENSOR_DEVICE_ATTR(temp2_crit, S_IRUGO, show_temp_crit, NULL, 1);
static SENSOR_DEVICE_ATTR(temp3_crit, S_IRUGO, show_temp_crit, NULL, 2);
static SENSOR_DEVICE_ATTR(temp4_crit, S_IRUGO, show_temp_crit, NULL, 3);
static SENSOR_DEVICE_ATTR(temp5_crit, S_IRUGO, show_temp_crit, NULL, 4);
static SENSOR_DEVICE_ATTR(temp6_crit, S_IRUGO, show_temp_crit, NULL, 5);
static SENSOR_DEVICE_ATTR(temp1_type, S_IRUGO, show_temp_type, NULL, 0);
static SENSOR_DEVICE_ATTR(temp2_type, S_IRUGO, show_temp_type, NULL, 1);
static SENSOR_DEVICE_ATTR(temp3_type, S_IRUGO, show_temp_type, NULL, 2);
static SENSOR_DEVICE_ATTR(temp4_type, S_IRUGO, show_temp_type, NULL, 3);
static SENSOR_DEVICE_ATTR(temp5_type, S_IRUGO, show_temp_type, NULL, 4);
static SENSOR_DEVICE_ATTR(temp6_type, S_IRUGO, show_temp_type, NULL, 5);
static SENSOR_DEVICE_ATTR(temp1_min_alarm, S_IRUGO,
show_temp_min_alarm, NULL, 0);
static SENSOR_DEVICE_ATTR(temp2_min_alarm, S_IRUGO,
show_temp_min_alarm, NULL, 1);
static SENSOR_DEVICE_ATTR(temp3_min_alarm, S_IRUGO,
show_temp_min_alarm, NULL, 2);
static SENSOR_DEVICE_ATTR(temp4_min_alarm, S_IRUGO,
show_temp_min_alarm, NULL, 3);
static SENSOR_DEVICE_ATTR(temp5_min_alarm, S_IRUGO,
show_temp_min_alarm, NULL, 4);
static SENSOR_DEVICE_ATTR(temp6_min_alarm, S_IRUGO,
show_temp_min_alarm, NULL, 5);
static SENSOR_DEVICE_ATTR(temp1_max_alarm, S_IRUGO,
show_temp_max_alarm, NULL, 0);
static SENSOR_DEVICE_ATTR(temp2_max_alarm, S_IRUGO,
show_temp_max_alarm, NULL, 1);
static SENSOR_DEVICE_ATTR(temp3_max_alarm, S_IRUGO,
show_temp_max_alarm, NULL, 2);
static SENSOR_DEVICE_ATTR(temp4_max_alarm, S_IRUGO,
show_temp_max_alarm, NULL, 3);
static SENSOR_DEVICE_ATTR(temp5_max_alarm, S_IRUGO,
show_temp_max_alarm, NULL, 4);
static SENSOR_DEVICE_ATTR(temp6_max_alarm, S_IRUGO,
show_temp_max_alarm, NULL, 5);
static SENSOR_DEVICE_ATTR(temp1_crit_alarm, S_IRUGO,
show_temp_crit_alarm, NULL, 0);
static SENSOR_DEVICE_ATTR(temp2_crit_alarm, S_IRUGO,
show_temp_crit_alarm, NULL, 1);
static SENSOR_DEVICE_ATTR(temp3_crit_alarm, S_IRUGO,
show_temp_crit_alarm, NULL, 2);
static SENSOR_DEVICE_ATTR(temp4_crit_alarm, S_IRUGO,
show_temp_crit_alarm, NULL, 3);
static SENSOR_DEVICE_ATTR(temp5_crit_alarm, S_IRUGO,
show_temp_crit_alarm, NULL, 4);
static SENSOR_DEVICE_ATTR(temp6_crit_alarm, S_IRUGO,
show_temp_crit_alarm, NULL, 5);
static SENSOR_DEVICE_ATTR(temp1_fault, S_IRUGO, show_temp_fault, NULL, 0);
static SENSOR_DEVICE_ATTR(temp2_fault, S_IRUGO, show_temp_fault, NULL, 1);
static SENSOR_DEVICE_ATTR(temp3_fault, S_IRUGO, show_temp_fault, NULL, 2);
static SENSOR_DEVICE_ATTR(temp4_fault, S_IRUGO, show_temp_fault, NULL, 3);
static SENSOR_DEVICE_ATTR(temp5_fault, S_IRUGO, show_temp_fault, NULL, 4);
static SENSOR_DEVICE_ATTR(temp6_fault, S_IRUGO, show_temp_fault, NULL, 5);
static struct attribute *pc87427_attributes_temp[6][10] = ;
static const struct attribute_group pc87427_group_temp[6] = ;
static ssize_t show_name(struct device *dev, struct device_attribute
*devattr, char *buf)
static DEVICE_ATTR(name, S_IRUGO, show_name, NULL);
static void pc87427_release_regions(struct platform_device *pdev, int count)
static int __devinit pc87427_request_regions(struct platform_device *pdev,
int count)
static void __devinit pc87427_init_device(struct device *dev)
static void pc87427_remove_files(struct device *dev)
static int __devinit pc87427_probe(struct platform_device *pdev)
static int __devexit pc87427_remove(struct platform_device *pdev)
static struct platform_driver pc87427_driver = ;
static int __init pc87427_device_add(const struct pc87427_sio_data *sio_data)
static int __init pc87427_find(int sioaddr, struct pc87427_sio_data *sio_data)
static int __init pc87427_init(void)
static void __exit pc87427_exit(void)
MODULE_AUTHOR("Jean Delvare <khali@linux-fr.org>");
MODULE_DESCRIPTION("PC87427 hardware monitoring driver");
MODULE_LICENSE("GPL");
module_init(pc87427_init);
module_exit(pc87427_exit);

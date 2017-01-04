#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
enum kinds ;
static const char * const w83627ehf_device_names[] = ;
static unsigned short force_id;
module_param(force_id, ushort, 0);
MODULE_PARM_DESC(force_id, "Override the detected device ID");
static unsigned short fan_debounce;
module_param(fan_debounce, ushort, 0);
MODULE_PARM_DESC(fan_debounce, "Enable debouncing for fan RPM signal");
#define DRVNAME "w83627ehf"
#define W83627EHF_LD_HWM	0x0b
#define W83667HG_LD_VID		0x0d
#define SIO_REG_LDSEL		0x07
#define SIO_REG_DEVID		0x20
#define SIO_REG_EN_VRM10	0x2C
#define SIO_REG_ENABLE		0x30
#define SIO_REG_ADDR		0x60
#define SIO_REG_VID_CTRL	0xF0
#define SIO_REG_VID_DATA	0xF1
#define SIO_W83627EHF_ID	0x8850
#define SIO_W83627EHG_ID	0x8860
#define SIO_W83627DHG_ID	0xa020
#define SIO_W83627DHG_P_ID	0xb070
#define SIO_W83667HG_ID		0xa510
#define SIO_W83667HG_B_ID	0xb350
#define SIO_NCT6775_ID		0xb470
#define SIO_NCT6776_ID		0xc330
#define SIO_ID_MASK		0xFFF0
static inline void
superio_outb(int ioreg, int reg, int val)
static inline int
superio_inb(int ioreg, int reg)
static inline void
superio_select(int ioreg, int ld)
static inline void
superio_enter(int ioreg)
static inline void
superio_exit(int ioreg)
#define IOREGION_ALIGNMENT	(~7)
#define IOREGION_OFFSET		5
#define IOREGION_LENGTH		2
#define ADDR_REG_OFFSET		0
#define DATA_REG_OFFSET		1
#define W83627EHF_REG_BANK		0x4E
#define W83627EHF_REG_CONFIG		0x40
static const u16 W83627EHF_REG_FAN[] = ;
static const u16 W83627EHF_REG_FAN_MIN[] = ;
#define W83627EHF_REG_IN_MAX(nr)	((nr < 7) ? (0x2b + (nr) * 2) : \
(0x554 + (((nr) - 7) * 2)))
#define W83627EHF_REG_IN_MIN(nr)	((nr < 7) ? (0x2c + (nr) * 2) : \
(0x555 + (((nr) - 7) * 2)))
#define W83627EHF_REG_IN(nr)		((nr < 7) ? (0x20 + (nr)) : \
(0x550 + (nr) - 7))
static const u16 W83627EHF_REG_TEMP[] = ;
static const u16 W83627EHF_REG_TEMP_HYST[] = ;
static const u16 W83627EHF_REG_TEMP_OVER[] = ;
static const u16 W83627EHF_REG_TEMP_CONFIG[] = ;
#define W83627EHF_REG_FANDIV1		0x47
#define W83627EHF_REG_FANDIV2		0x4B
#define W83627EHF_REG_VBAT		0x5D
#define W83627EHF_REG_DIODE		0x59
#define W83627EHF_REG_SMI_OVT		0x4C
#define NCT6775_REG_FANDIV1		0x506
#define NCT6775_REG_FANDIV2		0x507
#define NCT6775_REG_FAN_DEBOUNCE	0xf0
#define W83627EHF_REG_ALARM1		0x459
#define W83627EHF_REG_ALARM2		0x45A
#define W83627EHF_REG_ALARM3		0x45B
#define W83627EHF_REG_FAN_STEPUP_TIME 0x0f
#define W83627EHF_REG_FAN_STEPDOWN_TIME 0x0e
static const u8 W83627EHF_REG_PWM_ENABLE[] = ;
static const u8 W83627EHF_PWM_MODE_SHIFT[] = ;
static const u8 W83627EHF_PWM_ENABLE_SHIFT[] = ;
static const u16 W83627EHF_REG_PWM[] = ;
static const u16 W83627EHF_REG_TARGET[] = ;
static const u8 W83627EHF_REG_TOLERANCE[] = ;
static const u16 W83627EHF_REG_FAN_START_OUTPUT[] = ;
static const u16 W83627EHF_REG_FAN_STOP_OUTPUT[] = ;
static const u16 W83627EHF_REG_FAN_STOP_TIME[] = ;
static const u16 W83627EHF_REG_FAN_MAX_OUTPUT_COMMON[]
= ;
static const u16 W83627EHF_REG_FAN_STEP_OUTPUT_COMMON[]
= ;
static const u16 W83627EHF_REG_FAN_MAX_OUTPUT_W83667_B[] = ;
static const u16 W83627EHF_REG_FAN_STEP_OUTPUT_W83667_B[]
= ;
static const u16 NCT6775_REG_TARGET[] = ;
static const u16 NCT6775_REG_FAN_MODE[] = ;
static const u16 NCT6775_REG_FAN_STOP_OUTPUT[] = ;
static const u16 NCT6775_REG_FAN_START_OUTPUT[] = ;
static const u16 NCT6775_REG_FAN_STOP_TIME[] = ;
static const u16 NCT6775_REG_PWM[] = ;
static const u16 NCT6775_REG_FAN_MAX_OUTPUT[] = ;
static const u16 NCT6775_REG_FAN_STEP_OUTPUT[] = ;
static const u16 NCT6775_REG_FAN[] = ;
static const u16 NCT6776_REG_FAN_MIN[] = ;
static const u16 NCT6775_REG_TEMP[]
= ;
static const u16 NCT6775_REG_TEMP_CONFIG[]
= ;
static const u16 NCT6775_REG_TEMP_HYST[]
= ;
static const u16 NCT6775_REG_TEMP_OVER[]
= ;
static const u16 NCT6775_REG_TEMP_SOURCE[]
= ;
static const char *const w83667hg_b_temp_label[] = ;
static const char *const nct6775_temp_label[] = ;
static const char *const nct6776_temp_label[] = ;
#define NUM_REG_TEMP	ARRAY_SIZE(NCT6775_REG_TEMP)
static inline int is_word_sized(u16 reg)
static inline unsigned int step_time_from_reg(u8 reg, u8 mode)
static inline u8 step_time_to_reg(unsigned int msec, u8 mode)
static unsigned int fan_from_reg8(u16 reg, unsigned int divreg)
static unsigned int fan_from_reg13(u16 reg, unsigned int divreg)
static unsigned int fan_from_reg16(u16 reg, unsigned int divreg)
static inline unsigned int
div_from_reg(u8 reg)
static inline int
temp_from_reg(u16 reg, s16 regval)
static inline u16
temp_to_reg(u16 reg, long temp)
static u8 scale_in[10] = ;
static inline long in_from_reg(u8 reg, u8 nr)
static inline u8 in_to_reg(u32 val, u8 nr)
struct w83627ehf_data ;
struct w83627ehf_sio_data ;
static inline void w83627ehf_set_bank(struct w83627ehf_data *data, u16 reg)
static u16 w83627ehf_read_value(struct w83627ehf_data *data, u16 reg)
static int w83627ehf_write_value(struct w83627ehf_data *data, u16 reg,
u16 value)
static void nct6775_write_fan_div(struct w83627ehf_data *data, int nr)
static void w83627ehf_write_fan_div(struct w83627ehf_data *data, int nr)
static void w83627ehf_write_fan_div_common(struct device *dev,
struct w83627ehf_data *data, int nr)
static void nct6775_update_fan_div(struct w83627ehf_data *data)
static void w83627ehf_update_fan_div(struct w83627ehf_data *data)
static void w83627ehf_update_fan_div_common(struct device *dev,
struct w83627ehf_data *data)
static void nct6775_update_pwm(struct w83627ehf_data *data)
static void w83627ehf_update_pwm(struct w83627ehf_data *data)
static void w83627ehf_update_pwm_common(struct device *dev,
struct w83627ehf_data *data)
static struct w83627ehf_data *w83627ehf_update_device(struct device *dev)
#define show_in_reg(reg) \
static ssize_t \
show_##reg(struct device *dev, struct device_attribute *attr, \
char *buf) \
show_in_reg(in)
show_in_reg(in_min)
show_in_reg(in_max)
#define store_in_reg(REG, reg) \
static ssize_t \
store_in_##reg(struct device *dev, struct device_attribute *attr, \
const char *buf, size_t count) \
store_in_reg(MIN, min)
store_in_reg(MAX, max)
static ssize_t show_alarm(struct device *dev, struct device_attribute *attr,
char *buf)
static struct sensor_device_attribute sda_in_input[] = ;
static struct sensor_device_attribute sda_in_alarm[] = ;
static struct sensor_device_attribute sda_in_min[] = ;
static struct sensor_device_attribute sda_in_max[] = ;
static ssize_t
show_fan(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t
show_fan_min(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t
show_fan_div(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t
store_fan_min(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static struct sensor_device_attribute sda_fan_input[] = ;
static struct sensor_device_attribute sda_fan_alarm[] = ;
static struct sensor_device_attribute sda_fan_min[] = ;
static struct sensor_device_attribute sda_fan_div[] = ;
static ssize_t
show_temp_label(struct device *dev, struct device_attribute *attr, char *buf)
#define show_temp_reg(addr, reg) \
static ssize_t \
show_##reg(struct device *dev, struct device_attribute *attr, \
char *buf) \
show_temp_reg(reg_temp, temp);
show_temp_reg(reg_temp_over, temp_max);
show_temp_reg(reg_temp_hyst, temp_max_hyst);
#define store_temp_reg(addr, reg) \
static ssize_t \
store_##reg(struct device *dev, struct device_attribute *attr, \
const char *buf, size_t count) \
store_temp_reg(reg_temp_over, temp_max);
store_temp_reg(reg_temp_hyst, temp_max_hyst);
static ssize_t
show_temp_type(struct device *dev, struct device_attribute *attr, char *buf)
static struct sensor_device_attribute sda_temp_input[] = ;
static struct sensor_device_attribute sda_temp_label[] = ;
static struct sensor_device_attribute sda_temp_max[] = ;
static struct sensor_device_attribute sda_temp_max_hyst[] = ;
static struct sensor_device_attribute sda_temp_alarm[] = ;
static struct sensor_device_attribute sda_temp_type[] = ;
#define show_pwm_reg(reg) \
static ssize_t show_##reg(struct device *dev, struct device_attribute *attr, \
char *buf) \
show_pwm_reg(pwm_mode)
show_pwm_reg(pwm_enable)
show_pwm_reg(pwm)
static ssize_t
store_pwm_mode(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t
store_pwm(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t
store_pwm_enable(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
#define show_tol_temp(reg) \
static ssize_t show_##reg(struct device *dev, struct device_attribute *attr, \
char *buf) \
show_tol_temp(tolerance)
show_tol_temp(target_temp)
static ssize_t
store_target_temp(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t
store_tolerance(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static struct sensor_device_attribute sda_pwm[] = ;
static struct sensor_device_attribute sda_pwm_mode[] = ;
static struct sensor_device_attribute sda_pwm_enable[] = ;
static struct sensor_device_attribute sda_target_temp[] = ;
static struct sensor_device_attribute sda_tolerance[] = ;
#define fan_functions(reg, REG) \
static ssize_t show_##reg(struct device *dev, struct device_attribute *attr, \
char *buf) \
\
static ssize_t \
store_##reg(struct device *dev, struct device_attribute *attr, \
const char *buf, size_t count) \
fan_functions(fan_start_output, FAN_START_OUTPUT)
fan_functions(fan_stop_output, FAN_STOP_OUTPUT)
fan_functions(fan_max_output, FAN_MAX_OUTPUT)
fan_functions(fan_step_output, FAN_STEP_OUTPUT)
#define fan_time_functions(reg, REG) \
static ssize_t show_##reg(struct device *dev, struct device_attribute *attr, \
char *buf) \
\
\
static ssize_t \
store_##reg(struct device *dev, struct device_attribute *attr, \
const char *buf, size_t count) \
\
fan_time_functions(fan_stop_time, FAN_STOP_TIME)
static ssize_t show_name(struct device *dev, struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(name, S_IRUGO, show_name, NULL);
static struct sensor_device_attribute sda_sf3_arrays_fan4[] = ;
static struct sensor_device_attribute sda_sf3_arrays[] = ;
static struct sensor_device_attribute sda_sf3_max_step_arrays[] = ;
static ssize_t
show_vid(struct device *dev, struct device_attribute *attr, char *buf)
static DEVICE_ATTR(cpu0_vid, S_IRUGO, show_vid, NULL);
static void w83627ehf_device_remove_files(struct device *dev)
static inline void __devinit w83627ehf_init_device(struct w83627ehf_data *data,
enum kinds kind)
static void w82627ehf_swap_tempreg(struct w83627ehf_data *data,
int r1, int r2)
static int __devinit w83627ehf_probe(struct platform_device *pdev)
static int __devexit w83627ehf_remove(struct platform_device *pdev)
static struct platform_driver w83627ehf_driver = ;
static int __init w83627ehf_find(int sioaddr, unsigned short *addr,
struct w83627ehf_sio_data *sio_data)
static struct platform_device *pdev;
static int __init sensors_w83627ehf_init(void)
static void __exit sensors_w83627ehf_exit(void)
MODULE_AUTHOR("Jean Delvare <khali@linux-fr.org>");
MODULE_DESCRIPTION("W83627EHF driver");
MODULE_LICENSE("GPL");
module_init(sensors_w83627ehf_init);
module_exit(sensors_w83627ehf_exit);

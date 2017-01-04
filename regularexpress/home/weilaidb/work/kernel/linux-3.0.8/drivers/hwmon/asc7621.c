static const unsigned short normal_i2c[] = ;
enum asc7621_type ;
#define INTERVAL_HIGH   (HZ + HZ / 2)
#define INTERVAL_LOW    (1 * 60 * HZ)
#define PRI_NONE        0
#define PRI_LOW         1
#define PRI_HIGH        2
#define FIRST_CHIP      asc7621
#define LAST_CHIP       asc7621a
struct asc7621_chip ;
static struct asc7621_chip asc7621_chips[] = ;
#define LAST_REGISTER 0xff
struct asc7621_data ;
#define to_asc7621_param(_sda) \
container_of(_sda, struct asc7621_param, sda)
struct asc7621_param ;
static u8 asc7621_register_priorities[255];
static struct asc7621_data *asc7621_update_device(struct device *dev);
static inline u8 read_byte(struct i2c_client *client, u8 reg)
static inline int write_byte(struct i2c_client *client, u8 reg, u8 data)
#define SETUP_SHOW_data_param(d, a) \
struct sensor_device_attribute *sda = to_sensor_dev_attr(a); \
struct asc7621_data *data = asc7621_update_device(d); \
struct asc7621_param *param = to_asc7621_param(sda)
#define SETUP_STORE_data_param(d, a) \
struct sensor_device_attribute *sda = to_sensor_dev_attr(a); \
struct i2c_client *client = to_i2c_client(d); \
struct asc7621_data *data = i2c_get_clientdata(client); \
struct asc7621_param *param = to_asc7621_param(sda)
static ssize_t show_u8(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t store_u8(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t show_bitmask(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t store_bitmask(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t show_fan16(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t store_fan16(struct device *dev,
struct device_attribute *attr, const char *buf,
size_t count)
static int asc7621_in_scaling[] = ;
static ssize_t show_in10(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t show_in8(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t store_in8(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t show_temp8(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t store_temp8(struct device *dev,
struct device_attribute *attr, const char *buf,
size_t count)
static ssize_t show_temp10(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t show_temp62(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t store_temp62(struct device *dev,
struct device_attribute *attr, const char *buf,
size_t count)
static u32 asc7621_range_map[] = ;
static ssize_t show_ap2_temp(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t store_ap2_temp(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t show_pwm_ac(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t store_pwm_ac(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t show_pwm_enable(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t store_pwm_enable(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static u32 asc7621_pwm_freq_map[] = ;
static ssize_t show_pwm_freq(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t store_pwm_freq(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static u32 asc7621_pwm_auto_spinup_map[] =  ;
static ssize_t show_pwm_ast(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t store_pwm_ast(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static u32 asc7621_temp_smoothing_time_map[] = ;
static ssize_t show_temp_st(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t store_temp_st(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
#define VAA(args...)
#define PREAD(name, n, pri, rm, rl, m, s, r) \
#define PWRITE(name, n, pri, rm, rl, m, s, r) \
#define PWRITEM(name, n, pri, rm, rl, m, s, r) \
static struct asc7621_param asc7621_params[] = ;
static struct asc7621_data *asc7621_update_device(struct device *dev)
static inline int valid_address_for_chip(int chip_type, int address)
static void asc7621_init_client(struct i2c_client *client)
static int
asc7621_probe(struct i2c_client *client, const struct i2c_device_id *id)
static int asc7621_detect(struct i2c_client *client,
struct i2c_board_info *info)
static int asc7621_remove(struct i2c_client *client)
static const struct i2c_device_id asc7621_id[] = ;
MODULE_DEVICE_TABLE(i2c, asc7621_id);
static struct i2c_driver asc7621_driver = ;
static int __init sm_asc7621_init(void)
static void __exit sm_asc7621_exit(void)
MODULE_LICENSE("GPL");
MODULE_AUTHOR("George Joseph");
MODULE_DESCRIPTION("Andigilog aSC7621 and aSC7621a driver");
module_init(sm_asc7621_init);
module_exit(sm_asc7621_exit);

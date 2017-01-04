#define REFRESH_INTERVAL	(2 * HZ)
#define DRVNAME			"ibmpex"
#define PEX_GET_VERSION		1
#define PEX_GET_SENSOR_COUNT	2
#define PEX_GET_SENSOR_NAME	3
#define PEX_RESET_HIGH_LOW	4
#define PEX_GET_SENSOR_DATA	6
#define PEX_NET_FUNCTION	0x3A
#define PEX_COMMAND		0x3C
static inline u16 extract_value(const char *data, int offset)
#define TEMP_SENSOR		1
#define POWER_SENSOR		2
#define PEX_SENSOR_TYPE_LEN	3
static u8 const power_sensor_sig[] = ;
static u8 const temp_sensor_sig[]  = ;
#define PEX_MULT_LEN		2
static u8 const watt_sensor_sig[]  = ;
#define PEX_NUM_SENSOR_FUNCS	3
static char const * const power_sensor_name_templates[] = ;
static char const * const temp_sensor_name_templates[] = ;
static void ibmpex_msg_handler(struct ipmi_recv_msg *msg, void *user_msg_data);
static void ibmpex_register_bmc(int iface, struct device *dev);
static void ibmpex_bmc_gone(int iface);
struct ibmpex_sensor_data ;
struct ibmpex_bmc_data ;
struct ibmpex_driver_data ;
static struct ibmpex_driver_data driver_data = ;
static int ibmpex_send_message(struct ibmpex_bmc_data *data)
static int ibmpex_ver_check(struct ibmpex_bmc_data *data)
static int ibmpex_query_sensor_count(struct ibmpex_bmc_data *data)
static int ibmpex_query_sensor_name(struct ibmpex_bmc_data *data, int sensor)
static int ibmpex_query_sensor_data(struct ibmpex_bmc_data *data, int sensor)
static int ibmpex_reset_high_low_data(struct ibmpex_bmc_data *data)
static void ibmpex_update_device(struct ibmpex_bmc_data *data)
static struct ibmpex_bmc_data *get_bmc_data(int iface)
static ssize_t show_name(struct device *dev, struct device_attribute *devattr,
char *buf)
static SENSOR_DEVICE_ATTR(name, S_IRUGO, show_name, NULL, 0);
static ssize_t ibmpex_show_sensor(struct device *dev,
struct device_attribute *devattr,
char *buf)
static ssize_t ibmpex_reset_high_low(struct device *dev,
struct device_attribute *devattr,
const char *buf,
size_t count)
static SENSOR_DEVICE_ATTR(reset_high_low, S_IWUSR, NULL,
ibmpex_reset_high_low, 0);
static int is_power_sensor(const char *sensor_id, int len)
static int is_temp_sensor(const char *sensor_id, int len)
static int power_sensor_multiplier(struct ibmpex_bmc_data *data,
const char *sensor_id, int len)
static int create_sensor(struct ibmpex_bmc_data *data, int type,
int counter, int sensor, int func)
static int ibmpex_find_sensors(struct ibmpex_bmc_data *data)
static void ibmpex_register_bmc(int iface, struct device *dev)
static void ibmpex_bmc_delete(struct ibmpex_bmc_data *data)
static void ibmpex_bmc_gone(int iface)
static void ibmpex_msg_handler(struct ipmi_recv_msg *msg, void *user_msg_data)
static int __init ibmpex_init(void)
static void __exit ibmpex_exit(void)
MODULE_AUTHOR("Darrick J. Wong <djwong@us.ibm.com>");
MODULE_DESCRIPTION("IBM PowerExecutive power/temperature sensor driver");
MODULE_LICENSE("GPL");
module_init(ibmpex_init);
module_exit(ibmpex_exit);
MODULE_ALIAS("dmi:bvnIBM:*:pnIBMSystemx3350-*");
MODULE_ALIAS("dmi:bvnIBM:*:pnIBMSystemx3550-*");
MODULE_ALIAS("dmi:bvnIBM:*:pnIBMSystemx3650-*");
MODULE_ALIAS("dmi:bvnIBM:*:pnIBMSystemx3655-*");
MODULE_ALIAS("dmi:bvnIBM:*:pnIBMSystemx3755-*");

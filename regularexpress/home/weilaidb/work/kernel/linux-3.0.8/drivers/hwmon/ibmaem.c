#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
#define REFRESH_INTERVAL	(HZ)
#define IPMI_TIMEOUT		(30 * HZ)
#define DRVNAME			"aem"
#define AEM_NETFN		0x2E
#define AEM_FIND_FW_CMD		0x80
#define AEM_ELEMENT_CMD		0x81
#define AEM_FW_INSTANCE_CMD	0x82
#define AEM_READ_ELEMENT_CFG	0x80
#define AEM_READ_BUFFER		0x81
#define AEM_READ_REGISTER	0x82
#define AEM_WRITE_REGISTER	0x83
#define AEM_SET_REG_MASK	0x84
#define AEM_CLEAR_REG_MASK	0x85
#define AEM_READ_ELEMENT_CFG2	0x86
#define AEM_CONTROL_ELEMENT	0
#define AEM_ENERGY_ELEMENT	1
#define AEM_CLOCK_ELEMENT	4
#define AEM_POWER_CAP_ELEMENT	7
#define AEM_EXHAUST_ELEMENT	9
#define AEM_POWER_ELEMENT	10
#define AEM_MODULE_TYPE_ID	0x0001
#define AEM2_NUM_ENERGY_REGS	2
#define AEM2_NUM_PCAP_REGS	6
#define AEM2_NUM_TEMP_REGS	2
#define AEM2_NUM_SENSORS	14
#define AEM1_NUM_ENERGY_REGS	1
#define AEM1_NUM_SENSORS	3
#define AEM_NUM_ENERGY_REGS	AEM2_NUM_ENERGY_REGS
#define AEM_NUM_SENSORS		AEM2_NUM_SENSORS
#define POWER_CAP		0
#define POWER_CAP_MAX_HOTPLUG	1
#define POWER_CAP_MAX		2
#define	POWER_CAP_MIN_WARNING	3
#define POWER_CAP_MIN		4
#define	POWER_AUX		5
#define AEM_DEFAULT_POWER_INTERVAL 1000
#define AEM_MIN_POWER_INTERVAL	200
#define UJ_PER_MJ		1000L
static DEFINE_IDR(aem_idr);
static DEFINE_SPINLOCK(aem_idr_lock);
static struct platform_driver aem_driver = ;
struct aem_ipmi_data ;
struct aem_ro_sensor_template ;
struct aem_rw_sensor_template ;
struct aem_data ;
struct aem_iana_id ;
static struct aem_iana_id system_x_id = ;
struct aem_find_firmware_req  __packed;
struct aem_find_firmware_resp  __packed;
struct aem_find_instance_req  __packed;
struct aem_find_instance_resp  __packed;
struct aem_read_sensor_req  __packed;
struct aem_read_sensor_resp  __packed;
struct aem_driver_data ;
static void aem_register_bmc(int iface, struct device *dev);
static void aem_bmc_gone(int iface);
static void aem_msg_handler(struct ipmi_recv_msg *msg, void *user_msg_data);
static void aem_remove_sensors(struct aem_data *data);
static int aem_init_aem1(struct aem_ipmi_data *probe);
static int aem_init_aem2(struct aem_ipmi_data *probe);
static int aem1_find_sensors(struct aem_data *data);
static int aem2_find_sensors(struct aem_data *data);
static void update_aem1_sensors(struct aem_data *data);
static void update_aem2_sensors(struct aem_data *data);
static struct aem_driver_data driver_data = ;
static int aem_init_ipmi_data(struct aem_ipmi_data *data, int iface,
struct device *bmc)
static int aem_send_message(struct aem_ipmi_data *data)
static void aem_msg_handler(struct ipmi_recv_msg *msg, void *user_msg_data)
static int aem_idr_get(int *id)
static void aem_idr_put(int id)
static int aem_read_sensor(struct aem_data *data, u8 elt, u8 reg,
void *buf, size_t size)
static void update_aem_energy_one(struct aem_data *data, int which)
static void update_aem_energy(struct aem_data *data)
static void update_aem1_sensors(struct aem_data *data)
static void update_aem2_sensors(struct aem_data *data)
static void aem_delete(struct aem_data *data)
static int aem_find_aem1_count(struct aem_ipmi_data *data)
static int aem_init_aem1_inst(struct aem_ipmi_data *probe, u8 module_handle)
static int aem_init_aem1(struct aem_ipmi_data *probe)
static int aem_find_aem2(struct aem_ipmi_data *data,
struct aem_find_instance_resp *fi_resp,
int instance_num)
static int aem_init_aem2_inst(struct aem_ipmi_data *probe,
struct aem_find_instance_resp *fi_resp)
static int aem_init_aem2(struct aem_ipmi_data *probe)
static void aem_register_bmc(int iface, struct device *dev)
static void aem_bmc_gone(int iface)
static ssize_t show_name(struct device *dev, struct device_attribute *devattr,
char *buf)
static SENSOR_DEVICE_ATTR(name, S_IRUGO, show_name, NULL, 0);
static ssize_t show_version(struct device *dev,
struct device_attribute *devattr,
char *buf)
static SENSOR_DEVICE_ATTR(version, S_IRUGO, show_version, NULL, 0);
static ssize_t aem_show_power(struct device *dev,
struct device_attribute *devattr,
char *buf)
static ssize_t aem_show_energy(struct device *dev,
struct device_attribute *devattr,
char *buf)
static ssize_t aem_show_power_period(struct device *dev,
struct device_attribute *devattr,
char *buf)
static ssize_t aem_set_power_period(struct device *dev,
struct device_attribute *devattr,
const char *buf, size_t count)
static int aem_register_sensors(struct aem_data *data,
struct aem_ro_sensor_template *ro,
struct aem_rw_sensor_template *rw)
static ssize_t aem2_show_temp(struct device *dev,
struct device_attribute *devattr,
char *buf)
static ssize_t aem2_show_pcap_value(struct device *dev,
struct device_attribute *devattr,
char *buf)
static void aem_remove_sensors(struct aem_data *data)
static struct aem_ro_sensor_template aem1_ro_sensors[] = ;
static struct aem_rw_sensor_template aem1_rw_sensors[] = ;
static struct aem_ro_sensor_template aem2_ro_sensors[] = ;
static struct aem_rw_sensor_template aem2_rw_sensors[] = ;
static int aem1_find_sensors(struct aem_data *data)
static int aem2_find_sensors(struct aem_data *data)
static int __init aem_init(void)
static void __exit aem_exit(void)
MODULE_AUTHOR("Darrick J. Wong <djwong@us.ibm.com>");
MODULE_DESCRIPTION("IBM AEM power/temp/energy sensor driver");
MODULE_LICENSE("GPL");
module_init(aem_init);
module_exit(aem_exit);
MODULE_ALIAS("dmi:bvnIBM:*:pnIBMSystemx3350-*");
MODULE_ALIAS("dmi:bvnIBM:*:pnIBMSystemx3550-*");
MODULE_ALIAS("dmi:bvnIBM:*:pnIBMSystemx3650-*");
MODULE_ALIAS("dmi:bvnIBM:*:pnIBMSystemx3655-*");
MODULE_ALIAS("dmi:bvnIBM:*:pnIBMSystemx3755-*");
MODULE_ALIAS("dmi:bvnIBM:*:pnIBM3850M2/x3950M2-*");
MODULE_ALIAS("dmi:bvnIBM:*:pnIBMBladeHC10-*");

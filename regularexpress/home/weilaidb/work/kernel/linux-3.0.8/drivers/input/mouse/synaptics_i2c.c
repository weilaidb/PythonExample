#define DRIVER_NAME		"synaptics_i2c"
#define PRODUCT_ID_LENGTH	15
#define REGISTER_LENGTH		8
#define SOFT_RESET_DELAY_MS	3
#define HARD_RESET_DELAY_MS	500
#define PAGE_SEL_REG		0xff
#define DEVICE_STATUS_REG	0x09
#define DEV_CONTROL_REG		0x0000
#define INTERRUPT_EN_REG	0x0001
#define ERR_STAT_REG		0x0002
#define INT_REQ_STAT_REG	0x0003
#define DEV_COMMAND_REG		0x0004
#define RMI_PROT_VER_REG	0x0200
#define MANUFACT_ID_REG		0x0201
#define PHYS_INT_VER_REG	0x0202
#define PROD_PROPERTY_REG	0x0203
#define INFO_QUERY_REG0		0x0204
#define INFO_QUERY_REG1		(INFO_QUERY_REG0 + 1)
#define INFO_QUERY_REG2		(INFO_QUERY_REG0 + 2)
#define INFO_QUERY_REG3		(INFO_QUERY_REG0 + 3)
#define PRODUCT_ID_REG0		0x0210
#define PRODUCT_ID_REG1		(PRODUCT_ID_REG0 + 1)
#define PRODUCT_ID_REG2		(PRODUCT_ID_REG0 + 2)
#define PRODUCT_ID_REG3		(PRODUCT_ID_REG0 + 3)
#define PRODUCT_ID_REG4		(PRODUCT_ID_REG0 + 4)
#define PRODUCT_ID_REG5		(PRODUCT_ID_REG0 + 5)
#define PRODUCT_ID_REG6		(PRODUCT_ID_REG0 + 6)
#define PRODUCT_ID_REG7		(PRODUCT_ID_REG0 + 7)
#define PRODUCT_ID_REG8		(PRODUCT_ID_REG0 + 8)
#define PRODUCT_ID_REG9		(PRODUCT_ID_REG0 + 9)
#define PRODUCT_ID_REG10	(PRODUCT_ID_REG0 + 10)
#define PRODUCT_ID_REG11	(PRODUCT_ID_REG0 + 11)
#define PRODUCT_ID_REG12	(PRODUCT_ID_REG0 + 12)
#define PRODUCT_ID_REG13	(PRODUCT_ID_REG0 + 13)
#define PRODUCT_ID_REG14	(PRODUCT_ID_REG0 + 14)
#define PRODUCT_ID_REG15	(PRODUCT_ID_REG0 + 15)
#define DATA_REG0		0x0400
#define ABS_PRESSURE_REG	0x0401
#define ABS_MSB_X_REG		0x0402
#define ABS_LSB_X_REG		(ABS_MSB_X_REG + 1)
#define ABS_MSB_Y_REG		0x0404
#define ABS_LSB_Y_REG		(ABS_MSB_Y_REG + 1)
#define REL_X_REG		0x0406
#define REL_Y_REG		0x0407
#define DEV_QUERY_REG0		0x1000
#define DEV_QUERY_REG1		(DEV_QUERY_REG0 + 1)
#define DEV_QUERY_REG2		(DEV_QUERY_REG0 + 2)
#define DEV_QUERY_REG3		(DEV_QUERY_REG0 + 3)
#define DEV_QUERY_REG4		(DEV_QUERY_REG0 + 4)
#define DEV_QUERY_REG5		(DEV_QUERY_REG0 + 5)
#define DEV_QUERY_REG6		(DEV_QUERY_REG0 + 6)
#define DEV_QUERY_REG7		(DEV_QUERY_REG0 + 7)
#define DEV_QUERY_REG8		(DEV_QUERY_REG0 + 8)
#define GENERAL_2D_CONTROL_REG	0x1041
#define SENSOR_SENSITIVITY_REG	0x1044
#define SENS_MAX_POS_MSB_REG	0x1046
#define SENS_MAX_POS_LSB_REG	(SENS_MAX_POS_UPPER_REG + 1)
#define REPORT_RATE_1ST_BIT	6
#define F10_ABS_INT_ENA		0
#define F10_REL_INT_ENA		1
#define F20_INT_ENA		2
#define F10_ABS_INT_REQ		0
#define F10_REL_INT_REQ		1
#define F20_INT_REQ		2
#define STAT_CONFIGURED		6
#define STAT_ERROR		7
#define RESET_COMMAND		0x01
#define REZERO_COMMAND		0x02
#define GESTURE			3
#define HAS_PALM_DETECT		1
#define HAS_MULTI_FING		2
#define HAS_SCROLLER		4
#define HAS_2D_SCROLL		5
#define NO_DECELERATION		1
#define REDUCE_REPORTING	3
#define NO_FILTER		5
#define REPORT_RATE_MSK		0xc0
#define SLEEP_MODE_MSK		0x07
#define FULL_AWAKE		0x0
#define NORMAL_OP		0x1
#define LOW_PWR_OP		0x2
#define VERY_LOW_PWR_OP		0x3
#define SENS_SLEEP		0x4
#define SLEEP_MOD		0x5
#define DEEP_SLEEP		0x6
#define HIBERNATE		0x7
#define INT_ENA_REQ_MSK		0x07
#define INT_ENA_ABS_MSK		0x01
#define INT_ENA_REL_MSK		0x02
#define INT_ENA_F20_MSK		0x04
#define CONFIGURED_MSK		0x40
#define ERROR_MSK		0x80
#define FINGER_WIDTH_MSK	0xf0
#define GESTURE_MSK		0x08
#define SENSOR_STATUS_MSK	0x07
#define MSB_POSITION_MSK	0x1f
#define NUM_EXTRA_POS_MSK	0x07
#define THREAD_IRQ_SLEEP_SECS	2
#define THREAD_IRQ_SLEEP_MSECS	(THREAD_IRQ_SLEEP_SECS * MSEC_PER_SEC)
#define NO_DATA_THRES		(MSEC_PER_SEC)
#define NO_DATA_SLEEP_MSECS	(MSEC_PER_SEC / 4)
static int no_decel = 1;
module_param(no_decel, bool, 0644);
MODULE_PARM_DESC(no_decel, "No Deceleration. Default = 1 (on)");
static int reduce_report;
module_param(reduce_report, bool, 0644);
MODULE_PARM_DESC(reduce_report, "Reduced Reporting. Default = 0 (off)");
static int no_filter;
module_param(no_filter, bool, 0644);
MODULE_PARM_DESC(no_filter, "No Filter. Default = 0 (off)");
static bool polling_req;
module_param(polling_req, bool, 0444);
MODULE_PARM_DESC(polling_req, "Request Polling. Default = 0 (use irq)");
static int scan_rate = 80;
module_param(scan_rate, int, 0644);
MODULE_PARM_DESC(scan_rate, "Polling rate in times/sec. Default = 80");
struct synaptics_i2c ;
static inline void set_scan_rate(struct synaptics_i2c *touch, int scan_rate)
static s32 synaptics_i2c_reg_get(struct i2c_client *client, u16 reg)
static s32 synaptics_i2c_reg_set(struct i2c_client *client, u16 reg, u8 val)
static s32 synaptics_i2c_word_get(struct i2c_client *client, u16 reg)
static int synaptics_i2c_config(struct i2c_client *client)
static int synaptics_i2c_reset_config(struct i2c_client *client)
static int synaptics_i2c_check_error(struct i2c_client *client)
static bool synaptics_i2c_get_input(struct synaptics_i2c *touch)
static void synaptics_i2c_reschedule_work(struct synaptics_i2c *touch,
unsigned long delay)
static irqreturn_t synaptics_i2c_irq(int irq, void *dev_id)
static void synaptics_i2c_check_params(struct synaptics_i2c *touch)
static unsigned long synaptics_i2c_adjust_delay(struct synaptics_i2c *touch,
bool have_data)
static void synaptics_i2c_work_handler(struct work_struct *work)
static int synaptics_i2c_open(struct input_dev *input)
static void synaptics_i2c_close(struct input_dev *input)
static void synaptics_i2c_set_input_params(struct synaptics_i2c *touch)
static struct synaptics_i2c *synaptics_i2c_touch_create(struct i2c_client *client)
static int __devinit synaptics_i2c_probe(struct i2c_client *client,
const struct i2c_device_id *dev_id)
static int __devexit synaptics_i2c_remove(struct i2c_client *client)
static int synaptics_i2c_suspend(struct device *dev)
static int synaptics_i2c_resume(struct device *dev)
static SIMPLE_DEV_PM_OPS(synaptics_i2c_pm, synaptics_i2c_suspend,
synaptics_i2c_resume);
static const struct i2c_device_id synaptics_i2c_id_table[] = ;
MODULE_DEVICE_TABLE(i2c, synaptics_i2c_id_table);
static struct i2c_driver synaptics_i2c_driver = ;
static int __init synaptics_i2c_init(void)
static void __exit synaptics_i2c_exit(void)
module_init(synaptics_i2c_init);
module_exit(synaptics_i2c_exit);
MODULE_DESCRIPTION("Synaptics I2C touchpad driver");
MODULE_AUTHOR("Mike Rapoport, Igor Grinberg, Compulab");
MODULE_LICENSE("GPL");

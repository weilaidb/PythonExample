#define DRIVER_NAME "synaptics_rmi4_i2c"
#define MAX_ERROR_REPORT	6
#define MAX_TOUCH_MAJOR		15
#define MAX_RETRY_COUNT		5
#define STD_QUERY_LEN		21
#define PAGE_LEN		2
#define DATA_BUF_LEN		32
#define BUF_LEN			37
#define QUERY_LEN		9
#define DATA_LEN		12
#define HAS_TAP			0x01
#define HAS_PALMDETECT		0x01
#define HAS_ROTATE		0x02
#define HAS_TAPANDHOLD		0x02
#define HAS_DOUBLETAP		0x04
#define HAS_EARLYTAP		0x08
#define HAS_RELEASE		0x08
#define HAS_FLICK		0x10
#define HAS_PRESS		0x20
#define HAS_PINCH		0x40
#define MASK_16BIT		0xFFFF
#define MASK_8BIT		0xFF
#define MASK_7BIT		0x7F
#define MASK_5BIT		0x1F
#define MASK_4BIT		0x0F
#define MASK_3BIT		0x07
#define MASK_2BIT		0x03
#define TOUCHPAD_CTRL_INTR	0x8
#define PDT_START_SCAN_LOCATION (0x00E9)
#define PDT_END_SCAN_LOCATION	(0x000A)
#define PDT_ENTRY_SIZE		(0x0006)
#define RMI4_NUMBER_OF_MAX_FINGERS		(8)
#define SYNAPTICS_RMI4_TOUCHPAD_FUNC_NUM	(0x11)
#define SYNAPTICS_RMI4_DEVICE_CONTROL_FUNC_NUM	(0x01)
struct synaptics_rmi4_fn_desc ;
struct synaptics_rmi4_fn ;
struct synaptics_rmi4_device_info ;
struct synaptics_rmi4_data ;
static int synaptics_rmi4_set_page(struct synaptics_rmi4_data *pdata,
unsigned int address)
static int synaptics_rmi4_i2c_block_read(struct synaptics_rmi4_data *pdata,
unsigned short address,
unsigned char *valp, int size)
static int synaptics_rmi4_i2c_byte_write(struct synaptics_rmi4_data *pdata,
unsigned short address,
unsigned char data)
static int synpatics_rmi4_touchpad_report(struct synaptics_rmi4_data *pdata,
struct synaptics_rmi4_fn *rfi)
static int synaptics_rmi4_report_device(struct synaptics_rmi4_data *pdata,
struct synaptics_rmi4_fn *rfi)
static int synaptics_rmi4_sensor_report(struct synaptics_rmi4_data *pdata)
static irqreturn_t synaptics_rmi4_irq(int irq, void *data)
static int synpatics_rmi4_touchpad_detect(struct synaptics_rmi4_data *pdata,
struct synaptics_rmi4_fn *rfi,
struct synaptics_rmi4_fn_desc *fd,
unsigned int interruptcount)
int synpatics_rmi4_touchpad_config(struct synaptics_rmi4_data *pdata,
struct synaptics_rmi4_fn *rfi)
static int synaptics_rmi4_i2c_query_device(struct synaptics_rmi4_data *pdata)
static int __devinit synaptics_rmi4_probe
(struct i2c_client *client, const struct i2c_device_id *dev_id)
static int __devexit synaptics_rmi4_remove(struct i2c_client *client)
static int synaptics_rmi4_suspend(struct device *dev)
static int synaptics_rmi4_resume(struct device *dev)
static const struct dev_pm_ops synaptics_rmi4_dev_pm_ops = ;
static const struct i2c_device_id synaptics_rmi4_id_table[] = ;
MODULE_DEVICE_TABLE(i2c, synaptics_rmi4_id_table);
static struct i2c_driver synaptics_rmi4_driver = ;
static int __init synaptics_rmi4_init(void)
static void __exit synaptics_rmi4_exit(void)
module_init(synaptics_rmi4_init);
module_exit(synaptics_rmi4_exit);
MODULE_LICENSE("GPL v2");
MODULE_AUTHOR("naveen.gaddipati@stericsson.com, js.ha@stericsson.com");
MODULE_DESCRIPTION("synaptics rmi4 i2c touch Driver");
MODULE_ALIAS("i2c:synaptics_rmi4_ts");

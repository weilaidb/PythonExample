#define CPTM1217_DEVICE_NAME		"cptm1217"
#define CPTM1217_DRIVER_NAME		CPTM1217_DEVICE_NAME
#define MAX_TOUCH_SUPPORTED		2
#define TOUCH_SUPPORTED			1
#define SAMPLING_FREQ			80
#define DELAY_BTWIN_SAMPLE		(1000 / SAMPLING_FREQ)
#define WAIT_FOR_RESPONSE		5
#define MAX_RETRIES			5
#define INCREMENTAL_DELAY		5
#define TMA1217_DEV_STATUS		0x13
#define TMA1217_INT_STATUS		0x14
#define TMA1217_FINGER_STATE		0x18
#define TMA1217_FINGER1_X_HIGHER8	0x19
#define TMA1217_FINGER1_Y_HIGHER8	0x1A
#define TMA1217_FINGER1_XY_LOWER4	0x1B
#define TMA1217_FINGER1_Z_VALUE		0x1D
#define TMA1217_FINGER2_X_HIGHER8	0x1E
#define TMA1217_FINGER2_Y_HIGHER8	0x1F
#define TMA1217_FINGER2_XY_LOWER4	0x20
#define TMA1217_FINGER2_Z_VALUE		0x22
#define TMA1217_DEVICE_CTRL		0x23
#define TMA1217_INTERRUPT_ENABLE	0x24
#define TMA1217_REPORT_MODE		0x2B
#define TMA1217_MAX_X_LOWER8		0x31
#define TMA1217_MAX_X_HIGHER4		0x32
#define TMA1217_MAX_Y_LOWER8		0x33
#define TMA1217_MAX_Y_HIGHER4		0x34
#define TMA1217_DEVICE_CMD_RESET	0x67
#define TMA1217_DEVICE_CMD_REZERO	0x69
#define TMA1217_MANUFACTURER_ID		0x73
#define TMA1217_PRODUCT_FAMILY		0x75
#define TMA1217_FIRMWARE_REVISION	0x76
#define TMA1217_SERIAL_NO_HIGH		0x7C
#define TMA1217_SERIAL_NO_LOW		0x7D
#define TMA1217_PRODUCT_ID_START	0x7E
#define TMA1217_DEVICE_CAPABILITY	0x8B
struct touch_state ;
struct cp_dev_info ;
struct cp_vendor_info ;
struct cp_tm1217_device ;
static int cp_tm1217_read(struct cp_tm1217_device *ts,
u8 *req, int size)
static int cp_tm1217_write(struct cp_tm1217_device *ts,
u8 *req, int size)
static int cp_tm1217_mask_interrupt(struct cp_tm1217_device *ts)
static int cp_tm1217_unmask_interrupt(struct cp_tm1217_device *ts)
static void process_touch(struct cp_tm1217_device *ts, int index)
static void cp_tm1217_get_data(struct cp_tm1217_device *ts)
static irqreturn_t cp_tm1217_sample_thread(int irq, void *handle)
static int cp_tm1217_init_data(struct cp_tm1217_device *ts)
static int cp_tm1217_setup_gpio_irq(struct cp_tm1217_device *ts)
static int cp_tm1217_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int cp_tm1217_suspend(struct i2c_client *client, pm_message_t mesg)
static int cp_tm1217_resume(struct i2c_client *client)
static int cp_tm1217_remove(struct i2c_client *client)
static struct i2c_device_id cp_tm1217_idtable[] = ;
MODULE_DEVICE_TABLE(i2c, cp_tm1217_idtable);
static struct i2c_driver cp_tm1217_driver = ;
static int __init clearpad_tm1217_init(void)
static void __exit clearpad_tm1217_exit(void)
module_init(clearpad_tm1217_init);
module_exit(clearpad_tm1217_exit);
MODULE_AUTHOR("Ramesh Agarwal <ramesh.agarwal@intel.com>");
MODULE_DESCRIPTION("Synaptics TM1217 TouchScreen Driver");
MODULE_LICENSE("GPL v2");

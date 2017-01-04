#define MXT_VER_20		20
#define MXT_VER_21		21
#define MXT_VER_22		22
#define MXT_APP_LOW		0x4a
#define MXT_APP_HIGH		0x4b
#define MXT_BOOT_LOW		0x24
#define MXT_BOOT_HIGH		0x25
#define MXT_FW_NAME		"maxtouch.fw"
#define MXT_FAMILY_ID		0x00
#define MXT_VARIANT_ID		0x01
#define MXT_VERSION		0x02
#define MXT_BUILD		0x03
#define MXT_MATRIX_X_SIZE	0x04
#define MXT_MATRIX_Y_SIZE	0x05
#define MXT_OBJECT_NUM		0x06
#define MXT_OBJECT_START	0x07
#define MXT_OBJECT_SIZE		6
#define MXT_DEBUG_DIAGNOSTIC	37
#define MXT_GEN_MESSAGE		5
#define MXT_GEN_COMMAND		6
#define MXT_GEN_POWER		7
#define MXT_GEN_ACQUIRE		8
#define MXT_TOUCH_MULTI		9
#define MXT_TOUCH_KEYARRAY	15
#define MXT_TOUCH_PROXIMITY	23
#define MXT_PROCI_GRIPFACE	20
#define MXT_PROCG_NOISE		22
#define MXT_PROCI_ONETOUCH	24
#define MXT_PROCI_TWOTOUCH	27
#define MXT_PROCI_GRIP		40
#define MXT_PROCI_PALM		41
#define MXT_SPT_COMMSCONFIG	18
#define MXT_SPT_GPIOPWM		19
#define MXT_SPT_SELFTEST	25
#define MXT_SPT_CTECONFIG	28
#define MXT_SPT_USERDATA	38
#define MXT_SPT_DIGITIZER	43
#define MXT_SPT_MESSAGECOUNT	44
#define MXT_COMMAND_RESET	0
#define MXT_COMMAND_BACKUPNV	1
#define MXT_COMMAND_CALIBRATE	2
#define MXT_COMMAND_REPORTALL	3
#define MXT_COMMAND_DIAGNOSTIC	5
#define MXT_POWER_IDLEACQINT	0
#define MXT_POWER_ACTVACQINT	1
#define MXT_POWER_ACTV2IDLETO	2
#define MXT_ACQUIRE_CHRGTIME	0
#define MXT_ACQUIRE_TCHDRIFT	2
#define MXT_ACQUIRE_DRIFTST	3
#define MXT_ACQUIRE_TCHAUTOCAL	4
#define MXT_ACQUIRE_SYNC	5
#define MXT_ACQUIRE_ATCHCALST	6
#define MXT_ACQUIRE_ATCHCALSTHR	7
#define MXT_TOUCH_CTRL		0
#define MXT_TOUCH_XORIGIN	1
#define MXT_TOUCH_YORIGIN	2
#define MXT_TOUCH_XSIZE		3
#define MXT_TOUCH_YSIZE		4
#define MXT_TOUCH_BLEN		6
#define MXT_TOUCH_TCHTHR	7
#define MXT_TOUCH_TCHDI		8
#define MXT_TOUCH_ORIENT	9
#define MXT_TOUCH_MOVHYSTI	11
#define MXT_TOUCH_MOVHYSTN	12
#define MXT_TOUCH_NUMTOUCH	14
#define MXT_TOUCH_MRGHYST	15
#define MXT_TOUCH_MRGTHR	16
#define MXT_TOUCH_AMPHYST	17
#define MXT_TOUCH_XRANGE_LSB	18
#define MXT_TOUCH_XRANGE_MSB	19
#define MXT_TOUCH_YRANGE_LSB	20
#define MXT_TOUCH_YRANGE_MSB	21
#define MXT_TOUCH_XLOCLIP	22
#define MXT_TOUCH_XHICLIP	23
#define MXT_TOUCH_YLOCLIP	24
#define MXT_TOUCH_YHICLIP	25
#define MXT_TOUCH_XEDGECTRL	26
#define MXT_TOUCH_XEDGEDIST	27
#define MXT_TOUCH_YEDGECTRL	28
#define MXT_TOUCH_YEDGEDIST	29
#define MXT_TOUCH_JUMPLIMIT	30
#define MXT_GRIPFACE_CTRL	0
#define MXT_GRIPFACE_XLOGRIP	1
#define MXT_GRIPFACE_XHIGRIP	2
#define MXT_GRIPFACE_YLOGRIP	3
#define MXT_GRIPFACE_YHIGRIP	4
#define MXT_GRIPFACE_MAXTCHS	5
#define MXT_GRIPFACE_SZTHR1	7
#define MXT_GRIPFACE_SZTHR2	8
#define MXT_GRIPFACE_SHPTHR1	9
#define MXT_GRIPFACE_SHPTHR2	10
#define MXT_GRIPFACE_SUPEXTTO	11
#define MXT_NOISE_CTRL		0
#define MXT_NOISE_OUTFLEN	1
#define MXT_NOISE_GCAFUL_LSB	3
#define MXT_NOISE_GCAFUL_MSB	4
#define MXT_NOISE_GCAFLL_LSB	5
#define MXT_NOISE_GCAFLL_MSB	6
#define MXT_NOISE_ACTVGCAFVALID	7
#define MXT_NOISE_NOISETHR	8
#define MXT_NOISE_FREQHOPSCALE	10
#define MXT_NOISE_FREQ0		11
#define MXT_NOISE_FREQ1		12
#define MXT_NOISE_FREQ2		13
#define MXT_NOISE_FREQ3		14
#define MXT_NOISE_FREQ4		15
#define MXT_NOISE_IDLEGCAFVALID	16
#define MXT_COMMS_CTRL		0
#define MXT_COMMS_CMD		1
#define MXT_CTE_CTRL		0
#define MXT_CTE_CMD		1
#define MXT_CTE_MODE		2
#define MXT_CTE_IDLEGCAFDEPTH	3
#define MXT_CTE_ACTVGCAFDEPTH	4
#define MXT_CTE_VOLTAGE		5
#define MXT_VOLTAGE_DEFAULT	2700000
#define MXT_VOLTAGE_STEP	10000
#define MXT_BOOT_VALUE		0xa5
#define MXT_BACKUP_VALUE	0x55
#define MXT_BACKUP_TIME		25
#define MXT_RESET_TIME		65
#define MXT_FWRESET_TIME	175
#define MXT_UNLOCK_CMD_MSB	0xaa
#define MXT_UNLOCK_CMD_LSB	0xdc
#define MXT_WAITING_BOOTLOAD_CMD	0xc0
#define MXT_WAITING_FRAME_DATA	0x80
#define MXT_FRAME_CRC_CHECK	0x02
#define MXT_FRAME_CRC_FAIL	0x03
#define MXT_FRAME_CRC_PASS	0x04
#define MXT_APP_CRC_FAIL	0x40
#define MXT_BOOT_STATUS_MASK	0x3f
#define MXT_SUPPRESS		(1 << 1)
#define MXT_AMP			(1 << 2)
#define MXT_VECTOR		(1 << 3)
#define MXT_MOVE		(1 << 4)
#define MXT_RELEASE		(1 << 5)
#define MXT_PRESS		(1 << 6)
#define MXT_DETECT		(1 << 7)
#define MXT_XY_SWITCH		(1 << 0)
#define MXT_X_INVERT		(1 << 1)
#define MXT_Y_INVERT		(1 << 2)
#define MXT_MAX_AREA		0xff
#define MXT_MAX_FINGER		10
struct mxt_info ;
struct mxt_object ;
struct mxt_message ;
struct mxt_finger ;
struct mxt_data ;
static bool mxt_object_readable(unsigned int type)
static bool mxt_object_writable(unsigned int type)
static void mxt_dump_message(struct device *dev,
struct mxt_message *message)
static int mxt_check_bootloader(struct i2c_client *client,
unsigned int state)
static int mxt_unlock_bootloader(struct i2c_client *client)
static int mxt_fw_write(struct i2c_client *client,
const u8 *data, unsigned int frame_size)
static int __mxt_read_reg(struct i2c_client *client,
u16 reg, u16 len, void *val)
static int mxt_read_reg(struct i2c_client *client, u16 reg, u8 *val)
static int mxt_write_reg(struct i2c_client *client, u16 reg, u8 val)
static int mxt_read_object_table(struct i2c_client *client,
u16 reg, u8 *object_buf)
static struct mxt_object *
mxt_get_object(struct mxt_data *data, u8 type)
static int mxt_read_message(struct mxt_data *data,
struct mxt_message *message)
static int mxt_read_object(struct mxt_data *data,
u8 type, u8 offset, u8 *val)
static int mxt_write_object(struct mxt_data *data,
u8 type, u8 offset, u8 val)
static void mxt_input_report(struct mxt_data *data, int single_id)
static void mxt_input_touchevent(struct mxt_data *data,
struct mxt_message *message, int id)
static irqreturn_t mxt_interrupt(int irq, void *dev_id)
static int mxt_check_reg_init(struct mxt_data *data)
static int mxt_make_highchg(struct mxt_data *data)
static void mxt_handle_pdata(struct mxt_data *data)
static int mxt_get_info(struct mxt_data *data)
static int mxt_get_object_table(struct mxt_data *data)
static int mxt_initialize(struct mxt_data *data)
static void mxt_calc_resolution(struct mxt_data *data)
static ssize_t mxt_object_show(struct device *dev,
struct device_attribute *attr, char *buf)
static int mxt_load_fw(struct device *dev, const char *fn)
static ssize_t mxt_update_fw_store(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(object, 0444, mxt_object_show, NULL);
static DEVICE_ATTR(update_fw, 0664, NULL, mxt_update_fw_store);
static struct attribute *mxt_attrs[] = ;
static const struct attribute_group mxt_attr_group = ;
static void mxt_start(struct mxt_data *data)
static void mxt_stop(struct mxt_data *data)
static int mxt_input_open(struct input_dev *dev)
static void mxt_input_close(struct input_dev *dev)
static int __devinit mxt_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int __devexit mxt_remove(struct i2c_client *client)
static int mxt_suspend(struct device *dev)
static int mxt_resume(struct device *dev)
static const struct dev_pm_ops mxt_pm_ops = ;
static const struct i2c_device_id mxt_id[] = ;
MODULE_DEVICE_TABLE(i2c, mxt_id);
static struct i2c_driver mxt_driver = ;
static int __init mxt_init(void)
static void __exit mxt_exit(void)
module_init(mxt_init);
module_exit(mxt_exit);
MODULE_AUTHOR("Joonyoung Shim <jy0922.shim@samsung.com>");
MODULE_DESCRIPTION("Atmel maXTouch Touchscreen driver");
MODULE_LICENSE("GPL");

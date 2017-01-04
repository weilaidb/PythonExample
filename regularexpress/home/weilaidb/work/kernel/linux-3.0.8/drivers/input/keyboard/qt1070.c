#define CHIP_ID            0x00
#define QT1070_CHIP_ID     0x2E
#define FW_VERSION         0x01
#define QT1070_FW_VERSION  0x15
#define DET_STATUS         0x02
#define KEY_STATUS         0x03
#define CALIBRATE_CMD      0x38
#define QT1070_CAL_TIME    200
#define RESET              0x39
#define QT1070_RESET_TIME  255
static const unsigned short qt1070_key2code[] = ;
struct qt1070_data ;
static int qt1070_read(struct i2c_client *client, u8 reg)
static int qt1070_write(struct i2c_client *client, u8 reg, u8 data)
static bool __devinit qt1070_identify(struct i2c_client *client)
static irqreturn_t qt1070_interrupt(int irq, void *dev_id)
static int __devinit qt1070_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int __devexit qt1070_remove(struct i2c_client *client)
static const struct i2c_device_id qt1070_id[] = ;
MODULE_DEVICE_TABLE(i2c, qt1070_id);
static struct i2c_driver qt1070_driver = ;
static int __init qt1070_init(void)
module_init(qt1070_init);
static void __exit qt1070_exit(void)
module_exit(qt1070_exit);
MODULE_AUTHOR("Bo Shen <voice.shen@atmel.com>");
MODULE_DESCRIPTION("Driver for AT42QT1070 QTouch sensor");
MODULE_LICENSE("GPL");

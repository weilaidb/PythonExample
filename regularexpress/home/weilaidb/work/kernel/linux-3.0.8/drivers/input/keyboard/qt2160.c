#define QT2160_VALID_CHIPID  0x11
#define QT2160_CMD_CHIPID     0
#define QT2160_CMD_CODEVER    1
#define QT2160_CMD_GSTAT      2
#define QT2160_CMD_KEYS3      3
#define QT2160_CMD_KEYS4      4
#define QT2160_CMD_SLIDE      5
#define QT2160_CMD_GPIOS      6
#define QT2160_CMD_SUBVER     7
#define QT2160_CMD_CALIBRATE  10
#define QT2160_CYCLE_INTERVAL	(2*HZ)
static unsigned char qt2160_key2code[] = ;
struct qt2160_data ;
static int qt2160_read_block(struct i2c_client *client,
u8 inireg, u8 *buffer, unsigned int count)
static int qt2160_get_key_matrix(struct qt2160_data *qt2160)
static irqreturn_t qt2160_irq(int irq, void *_qt2160)
static void qt2160_schedule_read(struct qt2160_data *qt2160)
static void qt2160_worker(struct work_struct *work)
static int __devinit qt2160_read(struct i2c_client *client, u8 reg)
static int __devinit qt2160_write(struct i2c_client *client, u8 reg, u8 data)
static bool __devinit qt2160_identify(struct i2c_client *client)
static int __devinit qt2160_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int __devexit qt2160_remove(struct i2c_client *client)
static const struct i2c_device_id qt2160_idtable[] = ;
MODULE_DEVICE_TABLE(i2c, qt2160_idtable);
static struct i2c_driver qt2160_driver = ;
static int __init qt2160_init(void)
module_init(qt2160_init);
static void __exit qt2160_cleanup(void)
module_exit(qt2160_cleanup);
MODULE_AUTHOR("Raphael Derosso Pereira <raphaelpereira@gmail.com>");
MODULE_DESCRIPTION("Driver for AT42QT2160 Touch Sensor");
MODULE_LICENSE("GPL");

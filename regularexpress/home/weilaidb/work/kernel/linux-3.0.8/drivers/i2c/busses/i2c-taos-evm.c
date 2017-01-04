#define TAOS_BUFFER_SIZE	63
#define TAOS_STATE_INIT		0
#define TAOS_STATE_IDLE		1
#define TAOS_STATE_EOFF		2
#define TAOS_STATE_RECV		3
#define TAOS_CMD_RESET		0x12
#define TAOS_CMD_ECHO_ON	'+'
#define TAOS_CMD_ECHO_OFF	'-'
static DECLARE_WAIT_QUEUE_HEAD(wq);
struct taos_data ;
static struct i2c_board_info tsl2550_info = ;
static struct i2c_client *taos_instantiate_device(struct i2c_adapter *adapter)
static int taos_smbus_xfer(struct i2c_adapter *adapter, u16 addr,
unsigned short flags, char read_write, u8 command,
int size, union i2c_smbus_data *data)
static u32 taos_smbus_func(struct i2c_adapter *adapter)
static const struct i2c_algorithm taos_algorithm = ;
static irqreturn_t taos_interrupt(struct serio *serio, unsigned char data,
unsigned int flags)
static char *taos_adapter_name(char *buffer)
static int taos_connect(struct serio *serio, struct serio_driver *drv)
static void taos_disconnect(struct serio *serio)
static struct serio_device_id taos_serio_ids[] = ;
MODULE_DEVICE_TABLE(serio, taos_serio_ids);
static struct serio_driver taos_drv = ;
static int __init taos_init(void)
static void __exit taos_exit(void)
MODULE_AUTHOR("Jean Delvare <khali@linux-fr.org>");
MODULE_DESCRIPTION("TAOS evaluation module driver");
MODULE_LICENSE("GPL");
module_init(taos_init);
module_exit(taos_exit);

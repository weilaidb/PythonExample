#define DS2482_CMD_RESET		0xF0
#define DS2482_CMD_SET_READ_PTR		0xE1
#define DS2482_CMD_CHANNEL_SELECT	0xC3
#define DS2482_CMD_WRITE_CONFIG		0xD2
#define DS2482_CMD_1WIRE_RESET		0xB4
#define DS2482_CMD_1WIRE_SINGLE_BIT	0x87
#define DS2482_CMD_1WIRE_WRITE_BYTE	0xA5
#define DS2482_CMD_1WIRE_READ_BYTE	0x96
#define DS2482_CMD_1WIRE_TRIPLET	0x78
#define DS2482_PTR_CODE_STATUS		0xF0
#define DS2482_PTR_CODE_DATA		0xE1
#define DS2482_PTR_CODE_CHANNEL		0xD2
#define DS2482_PTR_CODE_CONFIG		0xC3
#define DS2482_REG_CFG_1WS		0x08
#define DS2482_REG_CFG_SPU		0x04
#define DS2482_REG_CFG_PPM		0x02
#define DS2482_REG_CFG_APU		0x01
static const u8 ds2482_chan_wr[8] =
;
static const u8 ds2482_chan_rd[8] =
;
#define DS2482_REG_STS_DIR		0x80
#define DS2482_REG_STS_TSB		0x40
#define DS2482_REG_STS_SBR		0x20
#define DS2482_REG_STS_RST		0x10
#define DS2482_REG_STS_LL		0x08
#define DS2482_REG_STS_SD		0x04
#define DS2482_REG_STS_PPD		0x02
#define DS2482_REG_STS_1WB		0x01
static int ds2482_probe(struct i2c_client *client,
const struct i2c_device_id *id);
static int ds2482_remove(struct i2c_client *client);
static const struct i2c_device_id ds2482_id[] = ;
static struct i2c_driver ds2482_driver = ;
struct ds2482_data;
struct ds2482_w1_chan ;
struct ds2482_data ;
static inline int ds2482_select_register(struct ds2482_data *pdev, u8 read_ptr)
static inline int ds2482_send_cmd(struct ds2482_data *pdev, u8 cmd)
static inline int ds2482_send_cmd_data(struct ds2482_data *pdev,
u8 cmd, u8 byte)
#define DS2482_WAIT_IDLE_TIMEOUT	100
static int ds2482_wait_1wire_idle(struct ds2482_data *pdev)
static int ds2482_set_channel(struct ds2482_data *pdev, u8 channel)
static u8 ds2482_w1_touch_bit(void *data, u8 bit)
static u8 ds2482_w1_triplet(void *data, u8 dbit)
static void ds2482_w1_write_byte(void *data, u8 byte)
static u8 ds2482_w1_read_byte(void *data)
static u8 ds2482_w1_reset_bus(void *data)
static int ds2482_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int ds2482_remove(struct i2c_client *client)
static int __init sensors_ds2482_init(void)
static void __exit sensors_ds2482_exit(void)
MODULE_AUTHOR("Ben Gardner <bgardner@wabtec.com>");
MODULE_DESCRIPTION("DS2482 driver");
MODULE_LICENSE("GPL");
module_init(sensors_ds2482_init);
module_exit(sensors_ds2482_exit);

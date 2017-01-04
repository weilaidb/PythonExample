static int ade7854_i2c_write_reg_8(struct device *dev,
u16 reg_address,
u8 value)
static int ade7854_i2c_write_reg_16(struct device *dev,
u16 reg_address,
u16 value)
static int ade7854_i2c_write_reg_24(struct device *dev,
u16 reg_address,
u32 value)
static int ade7854_i2c_write_reg_32(struct device *dev,
u16 reg_address,
u32 value)
static int ade7854_i2c_read_reg_8(struct device *dev,
u16 reg_address,
u8 *val)
static int ade7854_i2c_read_reg_16(struct device *dev,
u16 reg_address,
u16 *val)
static int ade7854_i2c_read_reg_24(struct device *dev,
u16 reg_address,
u32 *val)
static int ade7854_i2c_read_reg_32(struct device *dev,
u16 reg_address,
u32 *val)
static int __devinit ade7854_i2c_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int __devexit ade7854_i2c_remove(struct i2c_client *client)
static const struct i2c_device_id ade7854_id[] = ;
MODULE_DEVICE_TABLE(i2c, ade7854_id);
static struct i2c_driver ade7854_i2c_driver = ;
static __init int ade7854_i2c_init(void)
module_init(ade7854_i2c_init);
static __exit void ade7854_i2c_exit(void)
module_exit(ade7854_i2c_exit);
MODULE_AUTHOR("Barry Song <21cnbao@gmail.com>");
MODULE_DESCRIPTION("Analog Devices ADE7854/58/68/78 Polyphase Multifunction Energy Metering IC I2C Driver");
MODULE_LICENSE("GPL v2");

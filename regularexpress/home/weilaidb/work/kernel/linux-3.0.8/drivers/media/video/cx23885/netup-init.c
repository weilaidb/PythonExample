static void i2c_av_write(struct i2c_adapter *i2c, u16 reg, u8 val)
static void i2c_av_write4(struct i2c_adapter *i2c, u16 reg, u32 val)
static u8 i2c_av_read(struct i2c_adapter *i2c, u16 reg)
static void i2c_av_and_or(struct i2c_adapter *i2c, u16 reg, unsigned and_mask,
u8 or_value)
void netup_initialize(struct cx23885_dev *dev)

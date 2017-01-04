#define MV64x60_I2C_REG_SLAVE_ADDR			0x00
#define MV64x60_I2C_REG_DATA				0x04
#define MV64x60_I2C_REG_CONTROL				0x08
#define MV64x60_I2C_REG_STATUS				0x0c
#define MV64x60_I2C_REG_BAUD				0x0c
#define MV64x60_I2C_REG_EXT_SLAVE_ADDR			0x10
#define MV64x60_I2C_REG_SOFT_RESET			0x1c
#define MV64x60_I2C_CONTROL_ACK				0x04
#define MV64x60_I2C_CONTROL_IFLG			0x08
#define MV64x60_I2C_CONTROL_STOP			0x10
#define MV64x60_I2C_CONTROL_START			0x20
#define MV64x60_I2C_CONTROL_TWSIEN			0x40
#define MV64x60_I2C_CONTROL_INTEN			0x80
#define MV64x60_I2C_STATUS_BUS_ERR			0x00
#define MV64x60_I2C_STATUS_MAST_START			0x08
#define MV64x60_I2C_STATUS_MAST_REPEAT_START		0x10
#define MV64x60_I2C_STATUS_MAST_WR_ADDR_ACK		0x18
#define MV64x60_I2C_STATUS_MAST_WR_ADDR_NO_ACK		0x20
#define MV64x60_I2C_STATUS_MAST_WR_ACK			0x28
#define MV64x60_I2C_STATUS_MAST_WR_NO_ACK		0x30
#define MV64x60_I2C_STATUS_MAST_LOST_ARB		0x38
#define MV64x60_I2C_STATUS_MAST_RD_ADDR_ACK		0x40
#define MV64x60_I2C_STATUS_MAST_RD_ADDR_NO_ACK		0x48
#define MV64x60_I2C_STATUS_MAST_RD_DATA_ACK		0x50
#define MV64x60_I2C_STATUS_MAST_RD_DATA_NO_ACK		0x58
#define MV64x60_I2C_STATUS_MAST_WR_ADDR_2_ACK		0xd0
#define MV64x60_I2C_STATUS_MAST_WR_ADDR_2_NO_ACK	0xd8
#define MV64x60_I2C_STATUS_MAST_RD_ADDR_2_ACK		0xe0
#define MV64x60_I2C_STATUS_MAST_RD_ADDR_2_NO_ACK	0xe8
#define MV64x60_I2C_STATUS_NO_STATUS			0xf8
static u8 *ctlr_base;
static int mv64x60_i2c_wait_for_status(int wanted)
static int mv64x60_i2c_control(int control, int status)
static int mv64x60_i2c_read_byte(int control, int status)
static int mv64x60_i2c_write_byte(int data, int control, int status)
int mv64x60_i2c_read(u32 devaddr, u8 *buf, u32 offset, u32 offset_size,
u32 count)
int mv64x60_i2c_open(void)
void mv64x60_i2c_close(void)

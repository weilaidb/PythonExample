#define CX18_REG_I2C_1_WR   0xf15000
#define CX18_REG_I2C_1_RD   0xf15008
#define CX18_REG_I2C_2_WR   0xf25100
#define CX18_REG_I2C_2_RD   0xf25108
#define SETSCL_BIT      0x0001
#define SETSDL_BIT      0x0002
#define GETSCL_BIT      0x0004
#define GETSDL_BIT      0x0008
#define CX18_CS5345_I2C_ADDR		0x4c
#define CX18_Z8F0811_IR_TX_I2C_ADDR	0x70
#define CX18_Z8F0811_IR_RX_I2C_ADDR	0x71
static const u8 hw_addrs[] = ;
static const u8 hw_bus[] = ;
static const char * const hw_devicenames[] = ;
static int cx18_i2c_new_ir(struct cx18 *cx, struct i2c_adapter *adap, u32 hw,
const char *type, u8 addr)
int cx18_i2c_register(struct cx18 *cx, unsigned idx)
struct v4l2_subdev *cx18_find_hw(struct cx18 *cx, u32 hw)
static void cx18_setscl(void *data, int state)
static void cx18_setsda(void *data, int state)
static int cx18_getscl(void *data)
static int cx18_getsda(void *data)
static struct i2c_adapter cx18_i2c_adap_template = ;
#define CX18_SCL_PERIOD (10)
#define CX18_ALGO_BIT_TIMEOUT (2)
static struct i2c_algo_bit_data cx18_i2c_algo_template = ;
int init_cx18_i2c(struct cx18 *cx)
void exit_cx18_i2c(struct cx18 *cx)

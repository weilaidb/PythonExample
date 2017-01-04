#define IVTV_REG_I2C_SETSCL_OFFSET 0x7000
#define IVTV_REG_I2C_SETSDA_OFFSET 0x7004
#define IVTV_REG_I2C_GETSCL_OFFSET 0x7008
#define IVTV_REG_I2C_GETSDA_OFFSET 0x700c
#define IVTV_CS53L32A_I2C_ADDR		0x11
#define IVTV_M52790_I2C_ADDR		0x48
#define IVTV_CX25840_I2C_ADDR 		0x44
#define IVTV_SAA7115_I2C_ADDR 		0x21
#define IVTV_SAA7127_I2C_ADDR 		0x44
#define IVTV_SAA717x_I2C_ADDR 		0x21
#define IVTV_MSP3400_I2C_ADDR 		0x40
#define IVTV_HAUPPAUGE_I2C_ADDR 	0x50
#define IVTV_WM8739_I2C_ADDR 		0x1a
#define IVTV_WM8775_I2C_ADDR		0x1b
#define IVTV_TEA5767_I2C_ADDR		0x60
#define IVTV_UPD64031A_I2C_ADDR 	0x12
#define IVTV_UPD64083_I2C_ADDR 		0x5c
#define IVTV_VP27SMPX_I2C_ADDR      	0x5b
#define IVTV_M52790_I2C_ADDR      	0x48
#define IVTV_AVERMEDIA_IR_RX_I2C_ADDR	0x40
#define IVTV_HAUP_EXT_IR_RX_I2C_ADDR 	0x1a
#define IVTV_HAUP_INT_IR_RX_I2C_ADDR 	0x18
#define IVTV_Z8F0811_IR_TX_I2C_ADDR	0x70
#define IVTV_Z8F0811_IR_RX_I2C_ADDR	0x71
#define IVTV_ADAPTEC_IR_ADDR		0x6b
static const u8 hw_addrs[] = ;
static const char * const hw_devicenames[] = ;
static int get_key_adaptec(struct IR_i2c *ir, u32 *ir_key, u32 *ir_raw)
static int ivtv_i2c_new_ir(struct ivtv *itv, u32 hw, const char *type, u8 addr)
struct i2c_client *ivtv_i2c_new_ir_legacy(struct ivtv *itv)
int ivtv_i2c_register(struct ivtv *itv, unsigned idx)
struct v4l2_subdev *ivtv_find_hw(struct ivtv *itv, u32 hw)
static void ivtv_setscl(struct ivtv *itv, int state)
static void ivtv_setsda(struct ivtv *itv, int state)
static int ivtv_getscl(struct ivtv *itv)
static int ivtv_getsda(struct ivtv *itv)
static void ivtv_scldelay(struct ivtv *itv)
static int ivtv_waitscl(struct ivtv *itv, int val)
static int ivtv_waitsda(struct ivtv *itv, int val)
static int ivtv_ack(struct ivtv *itv)
static int ivtv_sendbyte(struct ivtv *itv, unsigned char byte)
static int ivtv_readbyte(struct ivtv *itv, unsigned char *byte, int nack)
static int ivtv_start(struct ivtv *itv)
static int ivtv_stop(struct ivtv *itv)
static int ivtv_write(struct ivtv *itv, unsigned char addr, unsigned char *data, u32 len, int do_stop)
static int ivtv_read(struct ivtv *itv, unsigned char addr, unsigned char *data, u32 len)
static int ivtv_xfer(struct i2c_adapter *i2c_adap, struct i2c_msg *msgs, int num)
static u32 ivtv_functionality(struct i2c_adapter *adap)
static struct i2c_algorithm ivtv_algo = ;
static struct i2c_adapter ivtv_i2c_adap_hw_template = ;
static void ivtv_setscl_old(void *data, int state)
static void ivtv_setsda_old(void *data, int state)
static int ivtv_getscl_old(void *data)
static int ivtv_getsda_old(void *data)
static struct i2c_adapter ivtv_i2c_adap_template = ;
#define IVTV_ALGO_BIT_TIMEOUT	(2)
static const struct i2c_algo_bit_data ivtv_i2c_algo_template = ;
static struct i2c_client ivtv_i2c_client_template = ;
int init_ivtv_i2c(struct ivtv *itv)
void exit_ivtv_i2c(struct ivtv *itv)

#define SCL_DIR_MASK		0x0001
#define SCL_DIR			0x0002
#define SCL_VAL_MASK		0x0004
#define SCL_VAL_OUT		0x0008
#define SCL_VAL_IN		0x0010
#define SDA_DIR_MASK		0x0100
#define SDA_DIR			0x0200
#define SDA_VAL_MASK		0x0400
#define SDA_VAL_OUT		0x0800
#define SDA_VAL_IN		0x1000
#define DEBUG
#define DPRINTK(fmt, args...) printk(fmt,## args)
#define DPRINTK(fmt, args...)
static void i810i2c_setscl(void *data, int state)
static void i810i2c_setsda(void *data, int state)
static int i810i2c_getscl(void *data)
static int i810i2c_getsda(void *data)
static int i810_setup_i2c_bus(struct i810fb_i2c_chan *chan, const char *name)
void i810_create_i2c_busses(struct i810fb_par *par)
void i810_delete_i2c_busses(struct i810fb_par *par)
int i810_probe_i2c_connector(struct fb_info *info, u8 **out_edid, int conn)

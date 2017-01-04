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
static void intelfb_gpio_setscl(void *data, int state)
static void intelfb_gpio_setsda(void *data, int state)
static int intelfb_gpio_getscl(void *data)
static int intelfb_gpio_getsda(void *data)
static int intelfb_setup_i2c_bus(struct intelfb_info *dinfo,
struct intelfb_i2c_chan *chan,
const u32 reg, const char *name,
int class)
void intelfb_create_i2c_busses(struct intelfb_info *dinfo)
void intelfb_delete_i2c_busses(struct intelfb_info *dinfo)

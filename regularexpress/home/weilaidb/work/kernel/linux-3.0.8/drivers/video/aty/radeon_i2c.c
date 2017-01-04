static void radeon_gpio_setscl(void* data, int state)
static void radeon_gpio_setsda(void* data, int state)
static int radeon_gpio_getscl(void* data)
static int radeon_gpio_getsda(void* data)
static int radeon_setup_i2c_bus(struct radeon_i2c_chan *chan, const char *name)
void radeon_create_i2c_busses(struct radeonfb_info *rinfo)
void radeon_delete_i2c_busses(struct radeonfb_info *rinfo)
int radeon_probe_i2c_connector(struct radeonfb_info *rinfo, int conn,
u8 **out_edid)

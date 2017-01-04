#define I2C_RISEFALL_TIME 20
static int get_clock(void *data)
static int get_data(void *data)
static void set_clock(void *data, int state_high)
static void set_data(void *data, int state_high)
struct psb_intel_i2c_chan *psb_intel_i2c_create(struct drm_device *dev,
const u32 reg, const char *name)
void psb_intel_i2c_destroy(struct psb_intel_i2c_chan *chan)

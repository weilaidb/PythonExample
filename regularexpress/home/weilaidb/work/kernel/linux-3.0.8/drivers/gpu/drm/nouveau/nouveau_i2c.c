static void
nv04_i2c_setscl(void *data, int state)
static void
nv04_i2c_setsda(void *data, int state)
static int
nv04_i2c_getscl(void *data)
static int
nv04_i2c_getsda(void *data)
static void
nv4e_i2c_setscl(void *data, int state)
static void
nv4e_i2c_setsda(void *data, int state)
static int
nv4e_i2c_getscl(void *data)
static int
nv4e_i2c_getsda(void *data)
static int
nv50_i2c_getscl(void *data)
static int
nv50_i2c_getsda(void *data)
static void
nv50_i2c_setscl(void *data, int state)
static void
nv50_i2c_setsda(void *data, int state)
static const uint32_t nv50_i2c_port[] = ;
#define NV50_I2C_PORTS ARRAY_SIZE(nv50_i2c_port)
int
nouveau_i2c_init(struct drm_device *dev, struct dcb_i2c_entry *entry, int index)
void
nouveau_i2c_fini(struct drm_device *dev, struct dcb_i2c_entry *entry)
struct nouveau_i2c_chan *
nouveau_i2c_find(struct drm_device *dev, int index)
bool
nouveau_probe_i2c_addr(struct nouveau_i2c_chan *i2c, int addr)
int
nouveau_i2c_identify(struct drm_device *dev, const char *what,
struct i2c_board_info *info,
bool (*match)(struct nouveau_i2c_chan *,
struct i2c_board_info *),
int index)

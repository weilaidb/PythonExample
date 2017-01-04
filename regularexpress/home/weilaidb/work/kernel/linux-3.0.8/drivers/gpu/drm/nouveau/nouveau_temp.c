static void
nouveau_temp_vbios_parse(struct drm_device *dev, u8 *temp)
static int
nv40_sensor_setup(struct drm_device *dev)
int
nv40_temp_get(struct drm_device *dev)
int
nv84_temp_get(struct drm_device *dev)
void
nouveau_temp_safety_checks(struct drm_device *dev)
static bool
probe_monitoring_device(struct nouveau_i2c_chan *i2c,
struct i2c_board_info *info)
static void
nouveau_temp_probe_i2c(struct drm_device *dev)
void
nouveau_temp_init(struct drm_device *dev)
void
nouveau_temp_fini(struct drm_device *dev)

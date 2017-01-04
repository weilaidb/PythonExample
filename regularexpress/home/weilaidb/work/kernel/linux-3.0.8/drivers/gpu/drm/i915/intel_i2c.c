#define I2C_RISEFALL_TIME 20
static inline struct intel_gmbus *
to_intel_gmbus(struct i2c_adapter *i2c)
struct intel_gpio ;
void
intel_i2c_reset(struct drm_device *dev)
static void intel_i2c_quirk_set(struct drm_i915_private *dev_priv, bool enable)
static u32 get_reserved(struct intel_gpio *gpio)
static int get_clock(void *data)
static int get_data(void *data)
static void set_clock(void *data, int state_high)
static void set_data(void *data, int state_high)
static struct i2c_adapter *
intel_gpio_create(struct drm_i915_private *dev_priv, u32 pin)
static int
intel_i2c_quirk_xfer(struct drm_i915_private *dev_priv,
struct i2c_adapter *adapter,
struct i2c_msg *msgs,
int num)
static int
gmbus_xfer(struct i2c_adapter *adapter,
struct i2c_msg *msgs,
int num)
static u32 gmbus_func(struct i2c_adapter *adapter)
static const struct i2c_algorithm gmbus_algorithm = ;
int intel_setup_gmbus(struct drm_device *dev)
void intel_gmbus_set_speed(struct i2c_adapter *adapter, int speed)
void intel_gmbus_force_bit(struct i2c_adapter *adapter, bool force_bit)
void intel_teardown_gmbus(struct drm_device *dev)

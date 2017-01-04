bool radeon_ddc_probe(struct radeon_connector *radeon_connector, bool requires_extended_probe)
static void radeon_i2c_do_lock(struct radeon_i2c_chan *i2c, int lock_state)
static int get_clock(void *i2c_priv)
static int get_data(void *i2c_priv)
static void set_clock(void *i2c_priv, int clock)
static void set_data(void *i2c_priv, int data)
static int pre_xfer(struct i2c_adapter *i2c_adap)
static void post_xfer(struct i2c_adapter *i2c_adap)
static u32 radeon_get_i2c_prescale(struct radeon_device *rdev)
static int r100_hw_i2c_xfer(struct i2c_adapter *i2c_adap,
struct i2c_msg *msgs, int num)
static int r500_hw_i2c_xfer(struct i2c_adapter *i2c_adap,
struct i2c_msg *msgs, int num)
static int radeon_hw_i2c_xfer(struct i2c_adapter *i2c_adap,
struct i2c_msg *msgs, int num)
static u32 radeon_hw_i2c_func(struct i2c_adapter *adap)
static const struct i2c_algorithm radeon_i2c_algo = ;
struct radeon_i2c_chan *radeon_i2c_create(struct drm_device *dev,
struct radeon_i2c_bus_rec *rec,
const char *name)
struct radeon_i2c_chan *radeon_i2c_create_dp(struct drm_device *dev,
struct radeon_i2c_bus_rec *rec,
const char *name)
void radeon_i2c_destroy(struct radeon_i2c_chan *i2c)
void radeon_i2c_init(struct radeon_device *rdev)
void radeon_i2c_fini(struct radeon_device *rdev)
void radeon_i2c_add(struct radeon_device *rdev,
struct radeon_i2c_bus_rec *rec,
const char *name)
struct radeon_i2c_chan *radeon_i2c_lookup(struct radeon_device *rdev,
struct radeon_i2c_bus_rec *i2c_bus)
struct drm_encoder *radeon_best_encoder(struct drm_connector *connector)
void radeon_i2c_get_byte(struct radeon_i2c_chan *i2c_bus,
u8 slave_addr,
u8 addr,
u8 *val)
void radeon_i2c_put_byte(struct radeon_i2c_chan *i2c_bus,
u8 slave_addr,
u8 addr,
u8 val)
void radeon_router_select_ddc_port(struct radeon_connector *radeon_connector)
void radeon_router_select_cd_port(struct radeon_connector *radeon_connector)

static int
auxch_rd(struct drm_encoder *encoder, int address, uint8_t *buf, int size)
static int
auxch_wr(struct drm_encoder *encoder, int address, uint8_t *buf, int size)
static int
nouveau_dp_lane_count_set(struct drm_encoder *encoder, uint8_t cmd)
static int
nouveau_dp_link_bw_set(struct drm_encoder *encoder, uint8_t cmd)
static int
nouveau_dp_link_train_set(struct drm_encoder *encoder, int pattern)
static int
nouveau_dp_max_voltage_swing(struct drm_encoder *encoder)
static int
nouveau_dp_max_pre_emphasis(struct drm_encoder *encoder, int vs)
static bool
nouveau_dp_link_train_adjust(struct drm_encoder *encoder, uint8_t *config)
static bool
nouveau_dp_link_train_commit(struct drm_encoder *encoder, uint8_t *config)
bool
nouveau_dp_link_train(struct drm_encoder *encoder)
bool
nouveau_dp_detect(struct drm_encoder *encoder)
int
nouveau_dp_auxch(struct nouveau_i2c_chan *auxch, int cmd, int addr,
uint8_t *data, int data_nr)
static int
nouveau_dp_i2c_xfer(struct i2c_adapter *adap, struct i2c_msg *msgs, int num)
static u32
nouveau_dp_i2c_func(struct i2c_adapter *adap)
const struct i2c_algorithm nouveau_dp_i2c_algo = ;

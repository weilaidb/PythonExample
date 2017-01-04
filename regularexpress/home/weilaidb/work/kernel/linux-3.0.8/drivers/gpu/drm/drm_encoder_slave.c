int drm_i2c_encoder_init(struct drm_device *dev,
struct drm_encoder_slave *encoder,
struct i2c_adapter *adap,
const struct i2c_board_info *info)
EXPORT_SYMBOL(drm_i2c_encoder_init);
void drm_i2c_encoder_destroy(struct drm_encoder *drm_encoder)
EXPORT_SYMBOL(drm_i2c_encoder_destroy);

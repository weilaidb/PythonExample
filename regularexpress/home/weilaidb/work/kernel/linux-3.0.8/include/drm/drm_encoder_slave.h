#define __DRM_ENCODER_SLAVE_H__
struct drm_encoder_slave_funcs ;
struct drm_encoder_slave ;
#define to_encoder_slave(x) container_of((x), struct drm_encoder_slave, base)
int drm_i2c_encoder_init(struct drm_device *dev,
struct drm_encoder_slave *encoder,
struct i2c_adapter *adap,
const struct i2c_board_info *info);
struct drm_i2c_encoder_driver ;
#define to_drm_i2c_encoder_driver(x) container_of((x),			\
struct drm_i2c_encoder_driver, \
i2c_driver)
static inline struct i2c_client *drm_i2c_encoder_get_client(struct drm_encoder *encoder)
static inline int drm_i2c_encoder_register(struct module *owner,
struct drm_i2c_encoder_driver *driver)
static inline void drm_i2c_encoder_unregister(struct drm_i2c_encoder_driver *driver)
void drm_i2c_encoder_destroy(struct drm_encoder *encoder);

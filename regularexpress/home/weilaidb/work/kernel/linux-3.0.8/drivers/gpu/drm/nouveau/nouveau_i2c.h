#define __NOUVEAU_I2C_H__
struct dcb_i2c_entry;
struct nouveau_i2c_chan ;
int nouveau_i2c_init(struct drm_device *, struct dcb_i2c_entry *, int index);
void nouveau_i2c_fini(struct drm_device *, struct dcb_i2c_entry *);
struct nouveau_i2c_chan *nouveau_i2c_find(struct drm_device *, int index);
bool nouveau_probe_i2c_addr(struct nouveau_i2c_chan *i2c, int addr);
int nouveau_i2c_identify(struct drm_device *dev, const char *what,
struct i2c_board_info *info,
bool (*match)(struct nouveau_i2c_chan *,
struct i2c_board_info *),
int index);
extern const struct i2c_algorithm nouveau_dp_i2c_algo;

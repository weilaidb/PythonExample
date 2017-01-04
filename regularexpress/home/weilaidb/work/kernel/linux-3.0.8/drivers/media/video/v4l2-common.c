#if defined(CONFIG_SPI)
MODULE_AUTHOR("Bill Dirks, Justin Schoeman, Gerd Knorr");
MODULE_DESCRIPTION("misc helper functions for v4l2 device drivers");
MODULE_LICENSE("GPL");
int v4l2_ctrl_check(struct v4l2_ext_control *ctrl, struct v4l2_queryctrl *qctrl,
const char * const *menu_items)
EXPORT_SYMBOL(v4l2_ctrl_check);
int v4l2_ctrl_query_fill(struct v4l2_queryctrl *qctrl, s32 min, s32 max, s32 step, s32 def)
EXPORT_SYMBOL(v4l2_ctrl_query_fill);
int v4l2_ctrl_query_menu(struct v4l2_querymenu *qmenu, struct v4l2_queryctrl *qctrl,
const char * const *menu_items)
EXPORT_SYMBOL(v4l2_ctrl_query_menu);
int v4l2_ctrl_query_menu_valid_items(struct v4l2_querymenu *qmenu, const u32 *ids)
EXPORT_SYMBOL(v4l2_ctrl_query_menu_valid_items);
u32 v4l2_ctrl_next(const u32 * const * ctrl_classes, u32 id)
EXPORT_SYMBOL(v4l2_ctrl_next);
int v4l2_chip_match_host(const struct v4l2_dbg_match *match)
EXPORT_SYMBOL(v4l2_chip_match_host);
#if defined(CONFIG_I2C) || (defined(CONFIG_I2C_MODULE) && defined(MODULE))
int v4l2_chip_match_i2c_client(struct i2c_client *c, const struct v4l2_dbg_match *match)
EXPORT_SYMBOL(v4l2_chip_match_i2c_client);
int v4l2_chip_ident_i2c_client(struct i2c_client *c, struct v4l2_dbg_chip_ident *chip,
u32 ident, u32 revision)
EXPORT_SYMBOL(v4l2_chip_ident_i2c_client);
void v4l2_i2c_subdev_init(struct v4l2_subdev *sd, struct i2c_client *client,
const struct v4l2_subdev_ops *ops)
EXPORT_SYMBOL_GPL(v4l2_i2c_subdev_init);
struct v4l2_subdev *v4l2_i2c_new_subdev_board(struct v4l2_device *v4l2_dev,
struct i2c_adapter *adapter, struct i2c_board_info *info,
const unsigned short *probe_addrs)
EXPORT_SYMBOL_GPL(v4l2_i2c_new_subdev_board);
struct v4l2_subdev *v4l2_i2c_new_subdev(struct v4l2_device *v4l2_dev,
struct i2c_adapter *adapter, const char *client_type,
u8 addr, const unsigned short *probe_addrs)
EXPORT_SYMBOL_GPL(v4l2_i2c_new_subdev);
unsigned short v4l2_i2c_subdev_addr(struct v4l2_subdev *sd)
EXPORT_SYMBOL_GPL(v4l2_i2c_subdev_addr);
const unsigned short *v4l2_i2c_tuner_addrs(enum v4l2_i2c_tuner_type type)
EXPORT_SYMBOL_GPL(v4l2_i2c_tuner_addrs);
#if defined(CONFIG_SPI)
void v4l2_spi_subdev_init(struct v4l2_subdev *sd, struct spi_device *spi,
const struct v4l2_subdev_ops *ops)
EXPORT_SYMBOL_GPL(v4l2_spi_subdev_init);
struct v4l2_subdev *v4l2_spi_new_subdev(struct v4l2_device *v4l2_dev,
struct spi_master *master, struct spi_board_info *info)
EXPORT_SYMBOL_GPL(v4l2_spi_new_subdev);
static unsigned int clamp_align(unsigned int x, unsigned int min,
unsigned int max, unsigned int align)
void v4l_bound_align_image(u32 *w, unsigned int wmin, unsigned int wmax,
unsigned int walign,
u32 *h, unsigned int hmin, unsigned int hmax,
unsigned int halign, unsigned int salign)
EXPORT_SYMBOL_GPL(v4l_bound_align_image);
int v4l_fill_dv_preset_info(u32 preset, struct v4l2_dv_enum_preset *info)
EXPORT_SYMBOL_GPL(v4l_fill_dv_preset_info);
const struct v4l2_frmsize_discrete *v4l2_find_nearest_format(
const struct v4l2_discrete_probe *probe,
s32 width, s32 height)
EXPORT_SYMBOL_GPL(v4l2_find_nearest_format);

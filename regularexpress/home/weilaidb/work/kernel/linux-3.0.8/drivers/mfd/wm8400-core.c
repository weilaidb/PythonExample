static struct  reg_data[] = ;
static int wm8400_read(struct wm8400 *wm8400, u8 reg, int num_regs, u16 *dest)
static int wm8400_write(struct wm8400 *wm8400, u8 reg, int num_regs,
u16 *src)
u16 wm8400_reg_read(struct wm8400 *wm8400, u8 reg)
EXPORT_SYMBOL_GPL(wm8400_reg_read);
int wm8400_block_read(struct wm8400 *wm8400, u8 reg, int count, u16 *data)
EXPORT_SYMBOL_GPL(wm8400_block_read);
int wm8400_set_bits(struct wm8400 *wm8400, u8 reg, u16 mask, u16 val)
EXPORT_SYMBOL_GPL(wm8400_set_bits);
void wm8400_reset_codec_reg_cache(struct wm8400 *wm8400)
EXPORT_SYMBOL_GPL(wm8400_reset_codec_reg_cache);
static int wm8400_register_codec(struct wm8400 *wm8400)
static int wm8400_init(struct wm8400 *wm8400,
struct wm8400_platform_data *pdata)
static void wm8400_release(struct wm8400 *wm8400)
#if defined(CONFIG_I2C) || defined(CONFIG_I2C_MODULE)
static int wm8400_i2c_read(void *io_data, char reg, int count, u16 *dest)
static int wm8400_i2c_write(void *io_data, char reg, int count, const u16 *src)
static int wm8400_i2c_probe(struct i2c_client *i2c,
const struct i2c_device_id *id)
static int wm8400_i2c_remove(struct i2c_client *i2c)
static const struct i2c_device_id wm8400_i2c_id[] = ;
MODULE_DEVICE_TABLE(i2c, wm8400_i2c_id);
static struct i2c_driver wm8400_i2c_driver = ;
static int __init wm8400_module_init(void)
subsys_initcall(wm8400_module_init);
static void __exit wm8400_module_exit(void)
module_exit(wm8400_module_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Mark Brown <broonie@opensource.wolfsonmicro.com>");

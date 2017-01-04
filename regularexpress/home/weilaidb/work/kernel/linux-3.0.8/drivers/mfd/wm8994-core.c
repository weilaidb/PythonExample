static int wm8994_read(struct wm8994 *wm8994, unsigned short reg,
int bytes, void *dest)
int wm8994_reg_read(struct wm8994 *wm8994, unsigned short reg)
EXPORT_SYMBOL_GPL(wm8994_reg_read);
int wm8994_bulk_read(struct wm8994 *wm8994, unsigned short reg,
int count, u16 *buf)
EXPORT_SYMBOL_GPL(wm8994_bulk_read);
static int wm8994_write(struct wm8994 *wm8994, unsigned short reg,
int bytes, const void *src)
int wm8994_reg_write(struct wm8994 *wm8994, unsigned short reg,
unsigned short val)
EXPORT_SYMBOL_GPL(wm8994_reg_write);
int wm8994_bulk_write(struct wm8994 *wm8994, unsigned short reg,
int count, const u16 *buf)
EXPORT_SYMBOL_GPL(wm8994_bulk_write);
int wm8994_set_bits(struct wm8994 *wm8994, unsigned short reg,
unsigned short mask, unsigned short val)
EXPORT_SYMBOL_GPL(wm8994_set_bits);
static struct mfd_cell wm8994_regulator_devs[] = ;
static struct resource wm8994_codec_resources[] = ;
static struct resource wm8994_gpio_resources[] = ;
static struct mfd_cell wm8994_devs[] = ;
static const char *wm8994_main_supplies[] = ;
static const char *wm8958_main_supplies[] = ;
static int wm8994_suspend(struct device *dev)
static int wm8994_resume(struct device *dev)
static int wm8994_ldo_in_use(struct wm8994_pdata *pdata, int ldo)
static int wm8994_ldo_in_use(struct wm8994_pdata *pdata, int ldo)
static int wm8994_device_init(struct wm8994 *wm8994, int irq)
static void wm8994_device_exit(struct wm8994 *wm8994)
static int wm8994_i2c_read_device(struct wm8994 *wm8994, unsigned short reg,
int bytes, void *dest)
static int wm8994_i2c_write_device(struct wm8994 *wm8994, unsigned short reg,
int bytes, const void *src)
static int wm8994_i2c_probe(struct i2c_client *i2c,
const struct i2c_device_id *id)
static int wm8994_i2c_remove(struct i2c_client *i2c)
static const struct i2c_device_id wm8994_i2c_id[] = ;
MODULE_DEVICE_TABLE(i2c, wm8994_i2c_id);
static UNIVERSAL_DEV_PM_OPS(wm8994_pm_ops, wm8994_suspend, wm8994_resume,
NULL);
static struct i2c_driver wm8994_i2c_driver = ;
static int __init wm8994_i2c_init(void)
module_init(wm8994_i2c_init);
static void __exit wm8994_i2c_exit(void)
module_exit(wm8994_i2c_exit);
MODULE_DESCRIPTION("Core support for the WM8994 audio CODEC");
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Mark Brown <broonie@opensource.wolfsonmicro.com>");

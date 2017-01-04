static int wm8350_i2c_read_device(struct wm8350 *wm8350, char reg,
int bytes, void *dest)
static int wm8350_i2c_write_device(struct wm8350 *wm8350, char reg,
int bytes, void *src)
static int wm8350_i2c_probe(struct i2c_client *i2c,
const struct i2c_device_id *id)
static int wm8350_i2c_remove(struct i2c_client *i2c)
static const struct i2c_device_id wm8350_i2c_id[] = ;
MODULE_DEVICE_TABLE(i2c, wm8350_i2c_id);
static struct i2c_driver wm8350_i2c_driver = ;
static int __init wm8350_i2c_init(void)
subsys_initcall(wm8350_i2c_init);
static void __exit wm8350_i2c_exit(void)
module_exit(wm8350_i2c_exit);
MODULE_DESCRIPTION("I2C support for the WM8350 AudioPlus PMIC");
MODULE_LICENSE("GPL");

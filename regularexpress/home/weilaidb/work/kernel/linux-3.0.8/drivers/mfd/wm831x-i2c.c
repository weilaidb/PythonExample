static int wm831x_i2c_read_device(struct wm831x *wm831x, unsigned short reg,
int bytes, void *dest)
static int wm831x_i2c_write_device(struct wm831x *wm831x, unsigned short reg,
int bytes, void *src)
static int wm831x_i2c_probe(struct i2c_client *i2c,
const struct i2c_device_id *id)
static int wm831x_i2c_remove(struct i2c_client *i2c)
static int wm831x_i2c_suspend(struct device *dev)
static const struct i2c_device_id wm831x_i2c_id[] = ;
MODULE_DEVICE_TABLE(i2c, wm831x_i2c_id);
static const struct dev_pm_ops wm831x_pm_ops = ;
static struct i2c_driver wm831x_i2c_driver = ;
static int __init wm831x_i2c_init(void)
subsys_initcall(wm831x_i2c_init);
static void __exit wm831x_i2c_exit(void)
module_exit(wm831x_i2c_exit);

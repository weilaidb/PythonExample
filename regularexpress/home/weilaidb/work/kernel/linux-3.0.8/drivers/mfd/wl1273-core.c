#define DRIVER_DESC "WL1273 FM Radio Core"
static const struct i2c_device_id wl1273_driver_id_table[] = ;
MODULE_DEVICE_TABLE(i2c, wl1273_driver_id_table);
static int wl1273_fm_read_reg(struct wl1273_core *core, u8 reg, u16 *value)
static int wl1273_fm_write_cmd(struct wl1273_core *core, u8 cmd, u16 param)
static int wl1273_fm_write_data(struct wl1273_core *core, u8 *data, u16 len)
static int wl1273_fm_set_audio(struct wl1273_core *core, unsigned int new_mode)
static int wl1273_fm_set_volume(struct wl1273_core *core, unsigned int volume)
static int wl1273_core_remove(struct i2c_client *client)
static int __devinit wl1273_core_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static struct i2c_driver wl1273_core_driver = ;
static int __init wl1273_core_init(void)
static void __exit wl1273_core_exit(void)
late_initcall(wl1273_core_init);
module_exit(wl1273_core_exit);
MODULE_AUTHOR("Matti Aaltonen <matti.j.aaltonen@nokia.com>");
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE("GPL");

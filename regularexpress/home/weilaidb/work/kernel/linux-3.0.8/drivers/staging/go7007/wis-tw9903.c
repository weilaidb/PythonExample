struct wis_tw9903 ;
static u8 initial_registers[] =
;
static int write_reg(struct i2c_client *client, u8 reg, u8 value)
static int write_regs(struct i2c_client *client, u8 *regs)
static int wis_tw9903_command(struct i2c_client *client,
unsigned int cmd, void *arg)
static int wis_tw9903_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int wis_tw9903_remove(struct i2c_client *client)
static const struct i2c_device_id wis_tw9903_id[] = ;
MODULE_DEVICE_TABLE(i2c, wis_tw9903_id);
static struct i2c_driver wis_tw9903_driver = ;
static int __init wis_tw9903_init(void)
static void __exit wis_tw9903_cleanup(void)
module_init(wis_tw9903_init);
module_exit(wis_tw9903_cleanup);
MODULE_LICENSE("GPL v2");

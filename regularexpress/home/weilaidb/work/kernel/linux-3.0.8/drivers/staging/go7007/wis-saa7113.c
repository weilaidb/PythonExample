struct wis_saa7113 ;
static u8 initial_registers[] =
;
static int write_reg(struct i2c_client *client, u8 reg, u8 value)
static int write_regs(struct i2c_client *client, u8 *regs)
static int wis_saa7113_command(struct i2c_client *client,
unsigned int cmd, void *arg)
static int wis_saa7113_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int wis_saa7113_remove(struct i2c_client *client)
static const struct i2c_device_id wis_saa7113_id[] = ;
MODULE_DEVICE_TABLE(i2c, wis_saa7113_id);
static struct i2c_driver wis_saa7113_driver = ;
static int __init wis_saa7113_init(void)
static void __exit wis_saa7113_cleanup(void)
module_init(wis_saa7113_init);
module_exit(wis_saa7113_cleanup);
MODULE_LICENSE("GPL v2");

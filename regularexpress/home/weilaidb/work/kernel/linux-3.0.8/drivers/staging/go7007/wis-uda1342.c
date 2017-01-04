static int write_reg(struct i2c_client *client, int reg, int value)
static int wis_uda1342_command(struct i2c_client *client,
unsigned int cmd, void *arg)
static int wis_uda1342_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int wis_uda1342_remove(struct i2c_client *client)
static const struct i2c_device_id wis_uda1342_id[] = ;
MODULE_DEVICE_TABLE(i2c, wis_uda1342_id);
static struct i2c_driver wis_uda1342_driver = ;
static int __init wis_uda1342_init(void)
static void __exit wis_uda1342_cleanup(void)
module_init(wis_uda1342_init);
module_exit(wis_uda1342_cleanup);
MODULE_LICENSE("GPL v2");

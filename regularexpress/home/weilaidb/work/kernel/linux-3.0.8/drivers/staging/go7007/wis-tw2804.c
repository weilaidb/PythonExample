struct wis_tw2804 ;
static u8 global_registers[] =
;
static u8 channel_registers[] =
;
static int write_reg(struct i2c_client *client, u8 reg, u8 value, int channel)
static int write_regs(struct i2c_client *client, u8 *regs, int channel)
static int wis_tw2804_command(struct i2c_client *client,
unsigned int cmd, void *arg)
static int wis_tw2804_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int wis_tw2804_remove(struct i2c_client *client)
static const struct i2c_device_id wis_tw2804_id[] = ;
MODULE_DEVICE_TABLE(i2c, wis_tw2804_id);
static struct i2c_driver wis_tw2804_driver = ;
static int __init wis_tw2804_init(void)
static void __exit wis_tw2804_cleanup(void)
module_init(wis_tw2804_init);
module_exit(wis_tw2804_cleanup);
MODULE_LICENSE("GPL v2");

struct wis_ov7640 ;
static u8 initial_registers[] =
;
static int write_regs(struct i2c_client *client, u8 *regs)
static int wis_ov7640_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int wis_ov7640_remove(struct i2c_client *client)
static const struct i2c_device_id wis_ov7640_id[] = ;
MODULE_DEVICE_TABLE(i2c, wis_ov7640_id);
static struct i2c_driver wis_ov7640_driver = ;
static int __init wis_ov7640_init(void)
static void __exit wis_ov7640_cleanup(void)
module_init(wis_ov7640_init);
module_exit(wis_ov7640_cleanup);
MODULE_LICENSE("GPL v2");

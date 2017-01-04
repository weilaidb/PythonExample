static int
process_sigma_action(struct i2c_client *client, struct sigma_firmware *ssfw)
static int
process_sigma_actions(struct i2c_client *client, struct sigma_firmware *ssfw)
int process_sigma_firmware(struct i2c_client *client, const char *name)
EXPORT_SYMBOL(process_sigma_firmware);
MODULE_LICENSE("GPL");

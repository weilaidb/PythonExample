static struct pmac_keywest *keywest_ctx;
static int keywest_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int keywest_attach_adapter(struct i2c_adapter *adapter)
static int keywest_remove(struct i2c_client *client)
static const struct i2c_device_id keywest_i2c_id[] = ;
static struct i2c_driver keywest_driver = ;
void snd_pmac_keywest_cleanup(struct pmac_keywest *i2c)
int __devinit snd_pmac_tumbler_post_init(void)
int __devinit snd_pmac_keywest_init(struct pmac_keywest *i2c)

static int i2c_xfer(struct i2c_adapter *i2c_adap, struct i2c_msg *msgs, int num)
void saa7164_call_i2c_clients(struct saa7164_i2c *bus, unsigned int cmd,
void *arg)
static u32 saa7164_functionality(struct i2c_adapter *adap)
static struct i2c_algorithm saa7164_i2c_algo_template = ;
static struct i2c_adapter saa7164_i2c_adap_template = ;
static struct i2c_client saa7164_i2c_client_template = ;
int saa7164_i2c_register(struct saa7164_i2c *bus)
int saa7164_i2c_unregister(struct saa7164_i2c *bus)

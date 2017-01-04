MODULE_DESCRIPTION("driver for cx2388x VP3054 design");
MODULE_AUTHOR("Chris Pascoe <c.pascoe@itee.uq.edu.au>");
MODULE_LICENSE("GPL");
static void vp3054_bit_setscl(void *data, int state)
static void vp3054_bit_setsda(void *data, int state)
static int vp3054_bit_getscl(void *data)
static int vp3054_bit_getsda(void *data)
static const struct i2c_algo_bit_data vp3054_i2c_algo_template = ;
int vp3054_i2c_probe(struct cx8802_dev *dev)
void vp3054_i2c_remove(struct cx8802_dev *dev)
EXPORT_SYMBOL(vp3054_i2c_probe);
EXPORT_SYMBOL(vp3054_i2c_remove);

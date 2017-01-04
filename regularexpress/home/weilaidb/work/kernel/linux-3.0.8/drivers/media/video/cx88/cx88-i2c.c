static unsigned int i2c_debug;
module_param(i2c_debug, int, 0644);
MODULE_PARM_DESC(i2c_debug,"enable debug messages [i2c]");
static unsigned int i2c_scan;
module_param(i2c_scan, int, 0444);
MODULE_PARM_DESC(i2c_scan,"scan i2c bus at insmod time");
static unsigned int i2c_udelay = 5;
module_param(i2c_udelay, int, 0644);
MODULE_PARM_DESC(i2c_udelay,"i2c delay at insmod time, in usecs "
"(should be 5 or higher). Lower value means higher bus speed.");
#define dprintk(level,fmt, arg...)	if (i2c_debug >= level) \
printk(KERN_DEBUG "%s: " fmt, core->name , ## arg)
static void cx8800_bit_setscl(void *data, int state)
static void cx8800_bit_setsda(void *data, int state)
static int cx8800_bit_getscl(void *data)
static int cx8800_bit_getsda(void *data)
static const struct i2c_algo_bit_data cx8800_i2c_algo_template = ;
static const char * const i2c_devs[128] = ;
static void do_i2c_scan(const char *name, struct i2c_client *c)
int cx88_i2c_init(struct cx88_core *core, struct pci_dev *pci)

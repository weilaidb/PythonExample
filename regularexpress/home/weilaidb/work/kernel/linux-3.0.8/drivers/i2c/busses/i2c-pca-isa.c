#define DRIVER "i2c-pca-isa"
#define IO_SIZE 4
static unsigned long base;
static int irq = -1;
static int clock  = 59000;
static struct i2c_adapter pca_isa_ops;
static wait_queue_head_t pca_wait;
static void pca_isa_writebyte(void *pd, int reg, int val)
static int pca_isa_readbyte(void *pd, int reg)
static int pca_isa_waitforcompletion(void *pd)
static void pca_isa_resetchip(void *pd)
static irqreturn_t pca_handler(int this_irq, void *dev_id)
static struct i2c_algo_pca_data pca_isa_data = ;
static struct i2c_adapter pca_isa_ops = ;
static int __devinit pca_isa_match(struct device *dev, unsigned int id)
static int __devinit pca_isa_probe(struct device *dev, unsigned int id)
static int __devexit pca_isa_remove(struct device *dev, unsigned int id)
static struct isa_driver pca_isa_driver = ;
static int __init pca_isa_init(void)
static void __exit pca_isa_exit(void)
MODULE_AUTHOR("Ian Campbell <icampbell@arcom.com>");
MODULE_DESCRIPTION("ISA base PCA9564/PCA9665 driver");
MODULE_LICENSE("GPL");
module_param(base, ulong, 0);
MODULE_PARM_DESC(base, "I/O base address");
module_param(irq, int, 0);
MODULE_PARM_DESC(irq, "IRQ");
module_param(clock, int, 0);
MODULE_PARM_DESC(clock, "Clock rate in hertz.\n\t\t"
"For PCA9564: 330000,288000,217000,146000,"
"88000,59000,44000,36000\n"
"\t\tFor PCA9665:\tStandard: 60300 - 100099\n"
"\t\t\t\tFast: 100100 - 400099\n"
"\t\t\t\tFast+: 400100 - 10000099\n"
"\t\t\t\tTurbo: Up to 1265800");
module_init(pca_isa_init);
module_exit(pca_isa_exit);

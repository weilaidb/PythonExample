#define DEFAULT_BASE 0x330
static int base;
static u8 __iomem *base_iomem;
static int irq;
static int clock  = 0x1c;
static int own    = 0x55;
static int mmapped;
static wait_queue_head_t pcf_wait;
static int pcf_pending;
static spinlock_t lock;
static struct i2c_adapter pcf_isa_ops;
static void pcf_isa_setbyte(void *data, int ctl, int val)
static int pcf_isa_getbyte(void *data, int ctl)
static int pcf_isa_getown(void *data)
static int pcf_isa_getclock(void *data)
static void pcf_isa_waitforpin(void *data)
static irqreturn_t pcf_isa_handler(int this_irq, void *dev_id)
static int pcf_isa_init(void)
static struct i2c_algo_pcf_data pcf_isa_data = ;
static struct i2c_adapter pcf_isa_ops = ;
static int __devinit elektor_match(struct device *dev, unsigned int id)
static int __devinit elektor_probe(struct device *dev, unsigned int id)
static int __devexit elektor_remove(struct device *dev, unsigned int id)
static struct isa_driver i2c_elektor_driver = ;
static int __init i2c_pcfisa_init(void)
static void __exit i2c_pcfisa_exit(void)
MODULE_AUTHOR("Hans Berglund <hb@spacetec.no>");
MODULE_DESCRIPTION("I2C-Bus adapter routines for PCF8584 ISA bus adapter");
MODULE_LICENSE("GPL");
module_param(base, int, 0);
module_param(irq, int, 0);
module_param(clock, int, 0);
module_param(own, int, 0);
module_param(mmapped, int, 0);
module_init(i2c_pcfisa_init);
module_exit(i2c_pcfisa_exit);

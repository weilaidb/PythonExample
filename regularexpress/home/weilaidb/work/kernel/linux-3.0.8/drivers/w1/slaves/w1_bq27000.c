#define HDQ_CMD_READ	(0)
#define HDQ_CMD_WRITE	(1<<7)
static int F_ID;
void w1_bq27000_write(struct device *dev, u8 buf, u8 reg)
EXPORT_SYMBOL(w1_bq27000_write);
int w1_bq27000_read(struct device *dev, u8 reg)
EXPORT_SYMBOL(w1_bq27000_read);
static int w1_bq27000_add_slave(struct w1_slave *sl)
static void w1_bq27000_remove_slave(struct w1_slave *sl)
static struct w1_family_ops w1_bq27000_fops = ;
static struct w1_family w1_bq27000_family = ;
static int __init w1_bq27000_init(void)
static void __exit w1_bq27000_exit(void)
module_init(w1_bq27000_init);
module_exit(w1_bq27000_exit);
module_param(F_ID, int, S_IRUSR);
MODULE_PARM_DESC(F_ID, "1-wire slave FID for BQ device");
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Texas Instruments Ltd");
MODULE_DESCRIPTION("HDQ/1-wire slave driver bq27000 battery monitor chip");

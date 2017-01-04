#define I2C_PCF_PIN	0x80
#define I2C_PCF_ESO	0x40
#define I2C_PCF_ES1	0x20
#define I2C_PCF_ES2	0x10
#define I2C_PCF_ENI	0x08
#define I2C_PCF_STA	0x04
#define I2C_PCF_STO	0x02
#define I2C_PCF_ACK	0x01
#define I2C_PCF_START    (I2C_PCF_PIN | I2C_PCF_ESO | I2C_PCF_ENI | I2C_PCF_STA | I2C_PCF_ACK)
#define I2C_PCF_STOP     (I2C_PCF_PIN | I2C_PCF_ESO | I2C_PCF_STO | I2C_PCF_ACK)
#define I2C_PCF_REPSTART (              I2C_PCF_ESO | I2C_PCF_STA | I2C_PCF_ACK)
#define I2C_PCF_IDLE     (I2C_PCF_PIN | I2C_PCF_ESO               | I2C_PCF_ACK)
#define I2C_PCF_INI 0x40
#define I2C_PCF_STS 0x20
#define I2C_PCF_BER 0x10
#define I2C_PCF_AD0 0x08
#define I2C_PCF_LRB 0x08
#define I2C_PCF_AAS 0x04
#define I2C_PCF_LAB 0x02
#define I2C_PCF_BB  0x01
static void set_device_claimage(struct bbc_i2c_bus *bp, struct platform_device *op, int val)
#define claim_device(BP,ECHILD)		set_device_claimage(BP,ECHILD,1)
#define release_device(BP,ECHILD)	set_device_claimage(BP,ECHILD,0)
struct platform_device *bbc_i2c_getdev(struct bbc_i2c_bus *bp, int index)
struct bbc_i2c_client *bbc_i2c_attach(struct bbc_i2c_bus *bp, struct platform_device *op)
void bbc_i2c_detach(struct bbc_i2c_client *client)
static int wait_for_pin(struct bbc_i2c_bus *bp, u8 *status)
int bbc_i2c_writeb(struct bbc_i2c_client *client, unsigned char val, int off)
int bbc_i2c_readb(struct bbc_i2c_client *client, unsigned char *byte, int off)
int bbc_i2c_write_buf(struct bbc_i2c_client *client,
char *buf, int len, int off)
int bbc_i2c_read_buf(struct bbc_i2c_client *client,
char *buf, int len, int off)
EXPORT_SYMBOL(bbc_i2c_getdev);
EXPORT_SYMBOL(bbc_i2c_attach);
EXPORT_SYMBOL(bbc_i2c_detach);
EXPORT_SYMBOL(bbc_i2c_writeb);
EXPORT_SYMBOL(bbc_i2c_readb);
EXPORT_SYMBOL(bbc_i2c_write_buf);
EXPORT_SYMBOL(bbc_i2c_read_buf);
static irqreturn_t bbc_i2c_interrupt(int irq, void *dev_id)
static void __init reset_one_i2c(struct bbc_i2c_bus *bp)
static struct bbc_i2c_bus * __init attach_one_i2c(struct platform_device *op, int index)
extern int bbc_envctrl_init(struct bbc_i2c_bus *bp);
extern void bbc_envctrl_cleanup(struct bbc_i2c_bus *bp);
static int __devinit bbc_i2c_probe(struct platform_device *op)
static int __devexit bbc_i2c_remove(struct platform_device *op)
static const struct of_device_id bbc_i2c_match[] = ;
MODULE_DEVICE_TABLE(of, bbc_i2c_match);
static struct platform_driver bbc_i2c_driver = ;
static int __init bbc_i2c_init(void)
static void __exit bbc_i2c_exit(void)
module_init(bbc_i2c_init);
module_exit(bbc_i2c_exit);
MODULE_LICENSE("GPL");

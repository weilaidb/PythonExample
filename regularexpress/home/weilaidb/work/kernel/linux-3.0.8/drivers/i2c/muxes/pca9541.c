#define PCA9541_CONTROL		0x01
#define PCA9541_ISTAT		0x02
#define PCA9541_CTL_MYBUS	(1 << 0)
#define PCA9541_CTL_NMYBUS	(1 << 1)
#define PCA9541_CTL_BUSON	(1 << 2)
#define PCA9541_CTL_NBUSON	(1 << 3)
#define PCA9541_CTL_BUSINIT	(1 << 4)
#define PCA9541_CTL_TESTON	(1 << 6)
#define PCA9541_CTL_NTESTON	(1 << 7)
#define PCA9541_ISTAT_INTIN	(1 << 0)
#define PCA9541_ISTAT_BUSINIT	(1 << 1)
#define PCA9541_ISTAT_BUSOK	(1 << 2)
#define PCA9541_ISTAT_BUSLOST	(1 << 3)
#define PCA9541_ISTAT_MYTEST	(1 << 6)
#define PCA9541_ISTAT_NMYTEST	(1 << 7)
#define BUSON		(PCA9541_CTL_BUSON | PCA9541_CTL_NBUSON)
#define MYBUS		(PCA9541_CTL_MYBUS | PCA9541_CTL_NMYBUS)
#define mybus(x)	(!((x) & MYBUS) || ((x) & MYBUS) == MYBUS)
#define busoff(x)	(!((x) & BUSON) || ((x) & BUSON) == BUSON)
#define ARB_TIMEOUT	(HZ / 8)
#define ARB2_TIMEOUT	(HZ / 4)
#define SELECT_DELAY_SHORT	50
#define SELECT_DELAY_LONG	1000
struct pca9541 ;
static const struct i2c_device_id pca9541_id[] = ;
MODULE_DEVICE_TABLE(i2c, pca9541_id);
static int pca9541_reg_write(struct i2c_client *client, u8 command, u8 val)
static int pca9541_reg_read(struct i2c_client *client, u8 command)
static void pca9541_release_bus(struct i2c_client *client)
static const u8 pca9541_control[16] = ;
static int pca9541_arbitrate(struct i2c_client *client)
static int pca9541_select_chan(struct i2c_adapter *adap, void *client, u32 chan)
static int pca9541_release_chan(struct i2c_adapter *adap,
void *client, u32 chan)
static int pca9541_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int pca9541_remove(struct i2c_client *client)
static struct i2c_driver pca9541_driver = ;
static int __init pca9541_init(void)
static void __exit pca9541_exit(void)
module_init(pca9541_init);
module_exit(pca9541_exit);
MODULE_AUTHOR("Guenter Roeck <guenter.roeck@ericsson.com>");
MODULE_DESCRIPTION("PCA9541 I2C master selector driver");
MODULE_LICENSE("GPL v2");

#define DEB1(fmt, args...) do  while (0)
#define DEB2(fmt, args...) do  while (0)
#define DEB3(fmt, args...) do  while (0)
static int i2c_debug;
#define pca_outw(adap, reg, val) adap->write_byte(adap->data, reg, val)
#define pca_inw(adap, reg) adap->read_byte(adap->data, reg)
#define pca_status(adap) pca_inw(adap, I2C_PCA_STA)
#define pca_clock(adap) adap->i2c_clock
#define pca_set_con(adap, val) pca_outw(adap, I2C_PCA_CON, val)
#define pca_get_con(adap) pca_inw(adap, I2C_PCA_CON)
#define pca_wait(adap) adap->wait_for_completion(adap->data)
#define pca_reset(adap) adap->reset_chip(adap->data)
static void pca9665_reset(void *pd)
static int pca_start(struct i2c_algo_pca_data *adap)
static int pca_repeated_start(struct i2c_algo_pca_data *adap)
static void pca_stop(struct i2c_algo_pca_data *adap)
static int pca_address(struct i2c_algo_pca_data *adap,
struct i2c_msg *msg)
static int pca_tx_byte(struct i2c_algo_pca_data *adap,
__u8 b)
static void pca_rx_byte(struct i2c_algo_pca_data *adap,
__u8 *b, int ack)
static int pca_rx_ack(struct i2c_algo_pca_data *adap,
int ack)
static int pca_xfer(struct i2c_adapter *i2c_adap,
struct i2c_msg *msgs,
int num)
static u32 pca_func(struct i2c_adapter *adap)
static const struct i2c_algorithm pca_algo = ;
static unsigned int pca_probe_chip(struct i2c_adapter *adap)
static int pca_init(struct i2c_adapter *adap)
int i2c_pca_add_bus(struct i2c_adapter *adap)
EXPORT_SYMBOL(i2c_pca_add_bus);
int i2c_pca_add_numbered_bus(struct i2c_adapter *adap)
EXPORT_SYMBOL(i2c_pca_add_numbered_bus);
MODULE_AUTHOR("Ian Campbell <icampbell@arcom.com>, "
"Wolfram Sang <w.sang@pengutronix.de>");
MODULE_DESCRIPTION("I2C-Bus PCA9564/PCA9665 algorithm");
MODULE_LICENSE("GPL");
module_param(i2c_debug, int, 0);

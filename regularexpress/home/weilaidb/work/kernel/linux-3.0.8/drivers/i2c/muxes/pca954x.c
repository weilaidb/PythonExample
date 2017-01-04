#define PCA954X_MAX_NCHANS 8
enum pca_type ;
struct pca954x ;
struct chip_desc ;
static const struct chip_desc chips[] = ;
static const struct i2c_device_id pca954x_id[] = ;
MODULE_DEVICE_TABLE(i2c, pca954x_id);
static int pca954x_reg_write(struct i2c_adapter *adap,
struct i2c_client *client, u8 val)
static int pca954x_select_chan(struct i2c_adapter *adap,
void *client, u32 chan)
static int pca954x_deselect_mux(struct i2c_adapter *adap,
void *client, u32 chan)
static int pca954x_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int pca954x_remove(struct i2c_client *client)
static struct i2c_driver pca954x_driver = ;
static int __init pca954x_init(void)
static void __exit pca954x_exit(void)
module_init(pca954x_init);
module_exit(pca954x_exit);
MODULE_AUTHOR("Rodolfo Giometti <giometti@linux.it>");
MODULE_DESCRIPTION("PCA954x I2C mux/switch driver");
MODULE_LICENSE("GPL v2");

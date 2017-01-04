static struct i2c_client *cdce_i2c_client;
static DEFINE_MUTEX(cdce_mutex);
struct cdce_reg ;
struct cdce_freq ;
#define CDCE_FREQ_TABLE_ENTRY(line, out)		\
struct cdce_output ;
static struct cdce_reg cdce_y1_148500[] = ;
static struct cdce_reg cdce_y1_74250[] = ;
static struct cdce_reg cdce_y1_27000[] = ;
static struct cdce_freq cdce_y1_freqs[] = ;
static struct cdce_reg cdce_y5_13500[] = ;
static struct cdce_reg cdce_y5_16875[] = ;
static struct cdce_reg cdce_y5_27000[] = ;
static struct cdce_reg cdce_y5_54000[] = ;
static struct cdce_reg cdce_y5_81000[] = ;
static struct cdce_freq cdce_y5_freqs[] = ;
static struct cdce_output output_list[] = ;
int cdce_set_rate(struct clk *clk, unsigned long rate)
static int cdce_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int __devexit cdce_remove(struct i2c_client *client)
static const struct i2c_device_id cdce_id[] = ;
MODULE_DEVICE_TABLE(i2c, cdce_id);
static struct i2c_driver cdce_driver = ;
static int __init cdce_init(void)
subsys_initcall(cdce_init);
static void __exit cdce_exit(void)
module_exit(cdce_exit);
MODULE_AUTHOR("Texas Instruments");
MODULE_DESCRIPTION("CDCE949 clock synthesizer driver");
MODULE_LICENSE("GPL v2");

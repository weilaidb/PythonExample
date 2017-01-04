static int i2c_id;
static inline unsigned char
iic_cook_addr(struct i2c_msg *msg)
static void
iop3xx_i2c_reset(struct i2c_algo_iop3xx_data *iop3xx_adap)
static void
iop3xx_i2c_enable(struct i2c_algo_iop3xx_data *iop3xx_adap)
static void
iop3xx_i2c_transaction_cleanup(struct i2c_algo_iop3xx_data *iop3xx_adap)
static irqreturn_t
iop3xx_i2c_irq_handler(int this_irq, void *dev_id)
static int
iop3xx_i2c_error(u32 sr)
static inline u32
iop3xx_i2c_get_srstat(struct i2c_algo_iop3xx_data *iop3xx_adap)
typedef int (* compare_func)(unsigned test, unsigned mask);
static int
iop3xx_i2c_wait_event(struct i2c_algo_iop3xx_data *iop3xx_adap,
unsigned flags, unsigned* status,
compare_func compare)
static int
all_bits_clear(unsigned test, unsigned mask)
static int
any_bits_set(unsigned test, unsigned mask)
static int
iop3xx_i2c_wait_tx_done(struct i2c_algo_iop3xx_data *iop3xx_adap, int *status)
static int
iop3xx_i2c_wait_rx_done(struct i2c_algo_iop3xx_data *iop3xx_adap, int *status)
static int
iop3xx_i2c_wait_idle(struct i2c_algo_iop3xx_data *iop3xx_adap, int *status)
static int
iop3xx_i2c_send_target_addr(struct i2c_algo_iop3xx_data *iop3xx_adap,
struct i2c_msg* msg)
static int
iop3xx_i2c_write_byte(struct i2c_algo_iop3xx_data *iop3xx_adap, char byte,
int stop)
static int
iop3xx_i2c_read_byte(struct i2c_algo_iop3xx_data *iop3xx_adap, char* byte,
int stop)
static int
iop3xx_i2c_writebytes(struct i2c_adapter *i2c_adap, const char *buf, int count)
static int
iop3xx_i2c_readbytes(struct i2c_adapter *i2c_adap, char *buf, int count)
static int
iop3xx_i2c_handle_msg(struct i2c_adapter *i2c_adap, struct i2c_msg* pmsg)
static int
iop3xx_i2c_master_xfer(struct i2c_adapter *i2c_adap, struct i2c_msg *msgs,
int num)
static u32
iop3xx_i2c_func(struct i2c_adapter *adap)
static const struct i2c_algorithm iop3xx_i2c_algo = ;
static int
iop3xx_i2c_remove(struct platform_device *pdev)
static int
iop3xx_i2c_probe(struct platform_device *pdev)
static struct platform_driver iop3xx_i2c_driver = ;
static int __init
i2c_iop3xx_init (void)
static void __exit
i2c_iop3xx_exit (void)
module_init (i2c_iop3xx_init);
module_exit (i2c_iop3xx_exit);
MODULE_AUTHOR("D-TACQ Solutions Ltd <www.d-tacq.com>");
MODULE_DESCRIPTION("IOP3xx iic algorithm and driver");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:IOP3xx-I2C");

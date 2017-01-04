#define I2C_PNX_TIMEOUT		10
#define I2C_PNX_SPEED_KHZ	100
#define I2C_PNX_REGION_SIZE	0x100
static inline int wait_timeout(long timeout, struct i2c_pnx_algo_data *data)
static inline int wait_reset(long timeout, struct i2c_pnx_algo_data *data)
static inline void i2c_pnx_arm_timer(struct i2c_pnx_algo_data *alg_data)
static int i2c_pnx_start(unsigned char slave_addr,
struct i2c_pnx_algo_data *alg_data)
static void i2c_pnx_stop(struct i2c_pnx_algo_data *alg_data)
static int i2c_pnx_master_xmit(struct i2c_pnx_algo_data *alg_data)
static int i2c_pnx_master_rcv(struct i2c_pnx_algo_data *alg_data)
static irqreturn_t i2c_pnx_interrupt(int irq, void *dev_id)
static void i2c_pnx_timeout(unsigned long data)
static inline void bus_reset_if_active(struct i2c_pnx_algo_data *alg_data)
static int
i2c_pnx_xfer(struct i2c_adapter *adap, struct i2c_msg *msgs, int num)
static u32 i2c_pnx_func(struct i2c_adapter *adapter)
static struct i2c_algorithm pnx_algorithm = ;
static int i2c_pnx_controller_suspend(struct platform_device *pdev,
pm_message_t state)
static int i2c_pnx_controller_resume(struct platform_device *pdev)
#define i2c_pnx_controller_suspend	NULL
#define i2c_pnx_controller_resume	NULL
static int __devinit i2c_pnx_probe(struct platform_device *pdev)
static int __devexit i2c_pnx_remove(struct platform_device *pdev)
static struct platform_driver i2c_pnx_driver = ;
static int __init i2c_adap_pnx_init(void)
static void __exit i2c_adap_pnx_exit(void)
MODULE_AUTHOR("Vitaly Wool, Dennis Kovalev <source@mvista.com>");
MODULE_DESCRIPTION("I2C driver for Philips IP3204-based I2C busses");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:pnx-i2c");
subsys_initcall(i2c_adap_pnx_init);
module_exit(i2c_adap_pnx_exit);

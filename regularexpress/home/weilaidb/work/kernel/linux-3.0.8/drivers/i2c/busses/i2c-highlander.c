#define SMCR		0x00
#define SMCR_START	(1 << 0)
#define SMCR_IRIC	(1 << 1)
#define SMCR_BBSY	(1 << 2)
#define SMCR_ACKE	(1 << 3)
#define SMCR_RST	(1 << 4)
#define SMCR_IEIC	(1 << 6)
#define SMSMADR		0x02
#define SMMR		0x04
#define SMMR_MODE0	(1 << 0)
#define SMMR_MODE1	(1 << 1)
#define SMMR_CAP	(1 << 3)
#define SMMR_TMMD	(1 << 4)
#define SMMR_SP		(1 << 7)
#define SMSADR		0x06
#define SMTRDR		0x46
struct highlander_i2c_dev ;
static int iic_force_poll, iic_force_normal;
static int iic_timeout = 1000, iic_read_delay;
static inline void highlander_i2c_irq_enable(struct highlander_i2c_dev *dev)
static inline void highlander_i2c_irq_disable(struct highlander_i2c_dev *dev)
static inline void highlander_i2c_start(struct highlander_i2c_dev *dev)
static inline void highlander_i2c_done(struct highlander_i2c_dev *dev)
static void highlander_i2c_setup(struct highlander_i2c_dev *dev)
static void smbus_write_data(u8 *src, u16 *dst, int len)
static void smbus_read_data(u16 *src, u8 *dst, int len)
static void highlander_i2c_command(struct highlander_i2c_dev *dev,
u8 command, int len)
static int highlander_i2c_wait_for_bbsy(struct highlander_i2c_dev *dev)
static int highlander_i2c_reset(struct highlander_i2c_dev *dev)
static int highlander_i2c_wait_for_ack(struct highlander_i2c_dev *dev)
static irqreturn_t highlander_i2c_irq(int irq, void *dev_id)
static void highlander_i2c_poll(struct highlander_i2c_dev *dev)
static inline int highlander_i2c_wait_xfer_done(struct highlander_i2c_dev *dev)
static int highlander_i2c_read(struct highlander_i2c_dev *dev)
static int highlander_i2c_write(struct highlander_i2c_dev *dev)
static int highlander_i2c_smbus_xfer(struct i2c_adapter *adap, u16 addr,
unsigned short flags, char read_write,
u8 command, int size,
union i2c_smbus_data *data)
static u32 highlander_i2c_func(struct i2c_adapter *adapter)
static const struct i2c_algorithm highlander_i2c_algo = ;
static int __devinit highlander_i2c_probe(struct platform_device *pdev)
static int __devexit highlander_i2c_remove(struct platform_device *pdev)
static struct platform_driver highlander_i2c_driver = ;
static int __init highlander_i2c_init(void)
static void __exit highlander_i2c_exit(void)
module_init(highlander_i2c_init);
module_exit(highlander_i2c_exit);
MODULE_AUTHOR("Paul Mundt");
MODULE_DESCRIPTION("Renesas Highlander FPGA I2C/SMBus adapter");
MODULE_LICENSE("GPL v2");
module_param(iic_force_poll, bool, 0);
module_param(iic_force_normal, bool, 0);
module_param(iic_timeout, int, 0);
module_param(iic_read_delay, int, 0);
MODULE_PARM_DESC(iic_force_poll, "Force polling mode");
MODULE_PARM_DESC(iic_force_normal,
"Force normal mode (100 kHz), default is fast mode (400 kHz)");
MODULE_PARM_DESC(iic_timeout, "Set timeout value in msecs (default 1000 ms)");
MODULE_PARM_DESC(iic_read_delay,
"Delay between data read cycles (default 0 ms)");

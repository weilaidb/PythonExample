#define DRIVER_NAME "mxs-i2c"
#define MXS_I2C_CTRL0		(0x00)
#define MXS_I2C_CTRL0_SET	(0x04)
#define MXS_I2C_CTRL0_SFTRST			0x80000000
#define MXS_I2C_CTRL0_SEND_NAK_ON_LAST		0x02000000
#define MXS_I2C_CTRL0_RETAIN_CLOCK		0x00200000
#define MXS_I2C_CTRL0_POST_SEND_STOP		0x00100000
#define MXS_I2C_CTRL0_PRE_SEND_START		0x00080000
#define MXS_I2C_CTRL0_MASTER_MODE		0x00020000
#define MXS_I2C_CTRL0_DIRECTION			0x00010000
#define MXS_I2C_CTRL0_XFER_COUNT(v)		((v) & 0x0000FFFF)
#define MXS_I2C_CTRL1		(0x40)
#define MXS_I2C_CTRL1_SET	(0x44)
#define MXS_I2C_CTRL1_CLR	(0x48)
#define MXS_I2C_CTRL1_BUS_FREE_IRQ		0x80
#define MXS_I2C_CTRL1_DATA_ENGINE_CMPLT_IRQ	0x40
#define MXS_I2C_CTRL1_NO_SLAVE_ACK_IRQ		0x20
#define MXS_I2C_CTRL1_OVERSIZE_XFER_TERM_IRQ	0x10
#define MXS_I2C_CTRL1_EARLY_TERM_IRQ		0x08
#define MXS_I2C_CTRL1_MASTER_LOSS_IRQ		0x04
#define MXS_I2C_CTRL1_SLAVE_STOP_IRQ		0x02
#define MXS_I2C_CTRL1_SLAVE_IRQ			0x01
#define MXS_I2C_IRQ_MASK	(MXS_I2C_CTRL1_DATA_ENGINE_CMPLT_IRQ | \
MXS_I2C_CTRL1_NO_SLAVE_ACK_IRQ | \
MXS_I2C_CTRL1_EARLY_TERM_IRQ | \
MXS_I2C_CTRL1_MASTER_LOSS_IRQ | \
MXS_I2C_CTRL1_SLAVE_STOP_IRQ | \
MXS_I2C_CTRL1_SLAVE_IRQ)
#define MXS_I2C_QUEUECTRL	(0x60)
#define MXS_I2C_QUEUECTRL_SET	(0x64)
#define MXS_I2C_QUEUECTRL_CLR	(0x68)
#define MXS_I2C_QUEUECTRL_QUEUE_RUN		0x20
#define MXS_I2C_QUEUECTRL_PIO_QUEUE_MODE	0x04
#define MXS_I2C_QUEUESTAT	(0x70)
#define MXS_I2C_QUEUESTAT_RD_QUEUE_EMPTY        0x00002000
#define MXS_I2C_QUEUECMD	(0x80)
#define MXS_I2C_QUEUEDATA	(0x90)
#define MXS_I2C_DATA		(0xa0)
#define MXS_CMD_I2C_SELECT	(MXS_I2C_CTRL0_RETAIN_CLOCK |	\
MXS_I2C_CTRL0_PRE_SEND_START |	\
MXS_I2C_CTRL0_MASTER_MODE |	\
MXS_I2C_CTRL0_DIRECTION |	\
MXS_I2C_CTRL0_XFER_COUNT(1))
#define MXS_CMD_I2C_WRITE	(MXS_I2C_CTRL0_PRE_SEND_START |	\
MXS_I2C_CTRL0_MASTER_MODE |	\
MXS_I2C_CTRL0_DIRECTION)
#define MXS_CMD_I2C_READ	(MXS_I2C_CTRL0_SEND_NAK_ON_LAST | \
MXS_I2C_CTRL0_MASTER_MODE)
struct mxs_i2c_dev ;
static void mxs_i2c_reset(struct mxs_i2c_dev *i2c)
static void mxs_i2c_pioq_setup_read(struct mxs_i2c_dev *i2c, u8 addr, int len,
int flags)
static void mxs_i2c_pioq_setup_write(struct mxs_i2c_dev *i2c,
u8 addr, u8 *buf, int len, int flags)
static int mxs_i2c_wait_for_data(struct mxs_i2c_dev *i2c)
static int mxs_i2c_finish_read(struct mxs_i2c_dev *i2c, u8 *buf, int len)
static int mxs_i2c_xfer_msg(struct i2c_adapter *adap, struct i2c_msg *msg,
int stop)
static int mxs_i2c_xfer(struct i2c_adapter *adap, struct i2c_msg msgs[],
int num)
static u32 mxs_i2c_func(struct i2c_adapter *adap)
static irqreturn_t mxs_i2c_isr(int this_irq, void *dev_id)
static const struct i2c_algorithm mxs_i2c_algo = ;
static int __devinit mxs_i2c_probe(struct platform_device *pdev)
static int __devexit mxs_i2c_remove(struct platform_device *pdev)
static struct platform_driver mxs_i2c_driver = ;
static int __init mxs_i2c_init(void)
subsys_initcall(mxs_i2c_init);
static void __exit mxs_i2c_exit(void)
module_exit(mxs_i2c_exit);
MODULE_AUTHOR("Wolfram Sang <w.sang@pengutronix.de>");
MODULE_DESCRIPTION("MXS I2C Bus Driver");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:" DRIVER_NAME);

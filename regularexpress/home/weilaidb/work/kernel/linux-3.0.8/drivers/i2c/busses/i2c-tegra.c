#define TEGRA_I2C_TIMEOUT (msecs_to_jiffies(1000))
#define BYTES_PER_FIFO_WORD 4
#define I2C_CNFG				0x000
#define I2C_CNFG_DEBOUNCE_CNT_SHIFT		12
#define I2C_CNFG_PACKET_MODE_EN			(1<<10)
#define I2C_CNFG_NEW_MASTER_FSM			(1<<11)
#define I2C_STATUS				0x01C
#define I2C_SL_CNFG				0x020
#define I2C_SL_CNFG_NACK			(1<<1)
#define I2C_SL_CNFG_NEWSL			(1<<2)
#define I2C_SL_ADDR1				0x02c
#define I2C_SL_ADDR2				0x030
#define I2C_TX_FIFO				0x050
#define I2C_RX_FIFO				0x054
#define I2C_PACKET_TRANSFER_STATUS		0x058
#define I2C_FIFO_CONTROL			0x05c
#define I2C_FIFO_CONTROL_TX_FLUSH		(1<<1)
#define I2C_FIFO_CONTROL_RX_FLUSH		(1<<0)
#define I2C_FIFO_CONTROL_TX_TRIG_SHIFT		5
#define I2C_FIFO_CONTROL_RX_TRIG_SHIFT		2
#define I2C_FIFO_STATUS				0x060
#define I2C_FIFO_STATUS_TX_MASK			0xF0
#define I2C_FIFO_STATUS_TX_SHIFT		4
#define I2C_FIFO_STATUS_RX_MASK			0x0F
#define I2C_FIFO_STATUS_RX_SHIFT		0
#define I2C_INT_MASK				0x064
#define I2C_INT_STATUS				0x068
#define I2C_INT_PACKET_XFER_COMPLETE		(1<<7)
#define I2C_INT_ALL_PACKETS_XFER_COMPLETE	(1<<6)
#define I2C_INT_TX_FIFO_OVERFLOW		(1<<5)
#define I2C_INT_RX_FIFO_UNDERFLOW		(1<<4)
#define I2C_INT_NO_ACK				(1<<3)
#define I2C_INT_ARBITRATION_LOST		(1<<2)
#define I2C_INT_TX_FIFO_DATA_REQ		(1<<1)
#define I2C_INT_RX_FIFO_DATA_REQ		(1<<0)
#define I2C_CLK_DIVISOR				0x06c
#define DVC_CTRL_REG1				0x000
#define DVC_CTRL_REG1_INTR_EN			(1<<10)
#define DVC_CTRL_REG2				0x004
#define DVC_CTRL_REG3				0x008
#define DVC_CTRL_REG3_SW_PROG			(1<<26)
#define DVC_CTRL_REG3_I2C_DONE_INTR_EN		(1<<30)
#define DVC_STATUS				0x00c
#define DVC_STATUS_I2C_DONE_INTR		(1<<30)
#define I2C_ERR_NONE				0x00
#define I2C_ERR_NO_ACK				0x01
#define I2C_ERR_ARBITRATION_LOST		0x02
#define I2C_ERR_UNKNOWN_INTERRUPT		0x04
#define PACKET_HEADER0_HEADER_SIZE_SHIFT	28
#define PACKET_HEADER0_PACKET_ID_SHIFT		16
#define PACKET_HEADER0_CONT_ID_SHIFT		12
#define PACKET_HEADER0_PROTOCOL_I2C		(1<<4)
#define I2C_HEADER_HIGHSPEED_MODE		(1<<22)
#define I2C_HEADER_CONT_ON_NAK			(1<<21)
#define I2C_HEADER_SEND_START_BYTE		(1<<20)
#define I2C_HEADER_READ				(1<<19)
#define I2C_HEADER_10BIT_ADDR			(1<<18)
#define I2C_HEADER_IE_ENABLE			(1<<17)
#define I2C_HEADER_REPEAT_START			(1<<16)
#define I2C_HEADER_MASTER_ADDR_SHIFT		12
#define I2C_HEADER_SLAVE_ADDR_SHIFT		1
struct tegra_i2c_dev ;
static void dvc_writel(struct tegra_i2c_dev *i2c_dev, u32 val, unsigned long reg)
static u32 dvc_readl(struct tegra_i2c_dev *i2c_dev, unsigned long reg)
static unsigned long tegra_i2c_reg_addr(struct tegra_i2c_dev *i2c_dev,
unsigned long reg)
static void i2c_writel(struct tegra_i2c_dev *i2c_dev, u32 val,
unsigned long reg)
static u32 i2c_readl(struct tegra_i2c_dev *i2c_dev, unsigned long reg)
static void i2c_writesl(struct tegra_i2c_dev *i2c_dev, void *data,
unsigned long reg, int len)
static void i2c_readsl(struct tegra_i2c_dev *i2c_dev, void *data,
unsigned long reg, int len)
static void tegra_i2c_mask_irq(struct tegra_i2c_dev *i2c_dev, u32 mask)
static void tegra_i2c_unmask_irq(struct tegra_i2c_dev *i2c_dev, u32 mask)
static int tegra_i2c_flush_fifos(struct tegra_i2c_dev *i2c_dev)
static int tegra_i2c_empty_rx_fifo(struct tegra_i2c_dev *i2c_dev)
static int tegra_i2c_fill_tx_fifo(struct tegra_i2c_dev *i2c_dev)
static void tegra_dvc_init(struct tegra_i2c_dev *i2c_dev)
static int tegra_i2c_init(struct tegra_i2c_dev *i2c_dev)
static irqreturn_t tegra_i2c_isr(int irq, void *dev_id)
static int tegra_i2c_xfer_msg(struct tegra_i2c_dev *i2c_dev,
struct i2c_msg *msg, int stop)
static int tegra_i2c_xfer(struct i2c_adapter *adap, struct i2c_msg msgs[],
int num)
static u32 tegra_i2c_func(struct i2c_adapter *adap)
static const struct i2c_algorithm tegra_i2c_algo = ;
static int tegra_i2c_probe(struct platform_device *pdev)
static int tegra_i2c_remove(struct platform_device *pdev)
static int tegra_i2c_suspend(struct platform_device *pdev, pm_message_t state)
static int tegra_i2c_resume(struct platform_device *pdev)
static struct platform_driver tegra_i2c_driver = ;
static int __init tegra_i2c_init_driver(void)
static void __exit tegra_i2c_exit_driver(void)
subsys_initcall(tegra_i2c_init_driver);
module_exit(tegra_i2c_exit_driver);
MODULE_DESCRIPTION("nVidia Tegra2 I2C Bus Controller driver");
MODULE_AUTHOR("Colin Cross");
MODULE_LICENSE("GPL v2");

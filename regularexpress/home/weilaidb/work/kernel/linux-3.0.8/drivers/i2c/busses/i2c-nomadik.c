#define DRIVER_NAME "nmk-i2c"
#define I2C_CR		(0x000)
#define I2C_SCR		(0x004)
#define I2C_HSMCR	(0x008)
#define I2C_MCR		(0x00C)
#define I2C_TFR		(0x010)
#define I2C_SR		(0x014)
#define I2C_RFR		(0x018)
#define I2C_TFTR	(0x01C)
#define I2C_RFTR	(0x020)
#define I2C_DMAR	(0x024)
#define I2C_BRCR	(0x028)
#define I2C_IMSCR	(0x02C)
#define I2C_RISR	(0x030)
#define I2C_MISR	(0x034)
#define I2C_ICR		(0x038)
#define I2C_CR_PE		(0x1 << 0)
#define I2C_CR_OM		(0x3 << 1)
#define I2C_CR_SAM		(0x1 << 3)
#define I2C_CR_SM		(0x3 << 4)
#define I2C_CR_SGCM		(0x1 << 6)
#define I2C_CR_FTX		(0x1 << 7)
#define I2C_CR_FRX		(0x1 << 8)
#define I2C_CR_DMA_TX_EN	(0x1 << 9)
#define I2C_CR_DMA_RX_EN	(0x1 << 10)
#define I2C_CR_DMA_SLE		(0x1 << 11)
#define I2C_CR_LM		(0x1 << 12)
#define I2C_CR_FON		(0x3 << 13)
#define I2C_CR_FS		(0x3 << 15)
#define I2C_MCR_OP		(0x1 << 0)
#define I2C_MCR_A7		(0x7f << 1)
#define I2C_MCR_EA10		(0x7 << 8)
#define I2C_MCR_SB		(0x1 << 11)
#define I2C_MCR_AM		(0x3 << 12)
#define I2C_MCR_STOP		(0x1 << 14)
#define I2C_MCR_LENGTH		(0x7ff << 15)
#define I2C_SR_OP		(0x3 << 0)
#define I2C_SR_STATUS		(0x3 << 2)
#define I2C_SR_CAUSE		(0x7 << 4)
#define I2C_SR_TYPE		(0x3 << 7)
#define I2C_SR_LENGTH		(0x7ff << 9)
#define I2C_IT_TXFE 		(0x1 << 0)
#define I2C_IT_TXFNE		(0x1 << 1)
#define I2C_IT_TXFF		(0x1 << 2)
#define I2C_IT_TXFOVR		(0x1 << 3)
#define I2C_IT_RXFE		(0x1 << 4)
#define I2C_IT_RXFNF		(0x1 << 5)
#define I2C_IT_RXFF		(0x1 << 6)
#define I2C_IT_RFSR		(0x1 << 16)
#define I2C_IT_RFSE		(0x1 << 17)
#define I2C_IT_WTSR		(0x1 << 18)
#define I2C_IT_MTD		(0x1 << 19)
#define I2C_IT_STD		(0x1 << 20)
#define I2C_IT_MAL		(0x1 << 24)
#define I2C_IT_BERR		(0x1 << 25)
#define I2C_IT_MTDWS		(0x1 << 28)
#define GEN_MASK(val, mask, sb)  (((val) << (sb)) & (mask))
#define I2C_CLEAR_ALL_INTS	0x131f007f
#define IRQ_MASK(mask)		(mask & 0x1fffffff)
#define MAX_I2C_FIFO_THRESHOLD	15
enum i2c_status ;
enum i2c_operation ;
struct i2c_nmk_client ;
struct nmk_i2c_dev ;
static const char *abort_causes[] = ;
static inline void i2c_set_bit(void __iomem *reg, u32 mask)
static inline void i2c_clr_bit(void __iomem *reg, u32 mask)
static int flush_i2c_fifo(struct nmk_i2c_dev *dev)
static void disable_all_interrupts(struct nmk_i2c_dev *dev)
static void clear_all_interrupts(struct nmk_i2c_dev *dev)
static int init_hw(struct nmk_i2c_dev *dev)
#define DEFAULT_I2C_REG_CR 	((1 << 1) | I2C_CR_PE)
static u32 load_i2c_mcr_reg(struct nmk_i2c_dev *dev)
static void setup_i2c_controller(struct nmk_i2c_dev *dev)
static int read_i2c(struct nmk_i2c_dev *dev)
static void fill_tx_fifo(struct nmk_i2c_dev *dev, int no_bytes)
static int write_i2c(struct nmk_i2c_dev *dev)
static int nmk_i2c_xfer_one(struct nmk_i2c_dev *dev, u16 flags)
static int nmk_i2c_xfer(struct i2c_adapter *i2c_adap,
struct i2c_msg msgs[], int num_msgs)
static int disable_interrupts(struct nmk_i2c_dev *dev, u32 irq)
static irqreturn_t i2c_irq_handler(int irq, void *arg)
static int nmk_i2c_suspend(struct device *dev)
static int nmk_i2c_resume(struct device *dev)
#define nmk_i2c_suspend	NULL
#define nmk_i2c_resume	NULL
static const struct dev_pm_ops nmk_i2c_pm = ;
static unsigned int nmk_i2c_functionality(struct i2c_adapter *adap)
static const struct i2c_algorithm nmk_i2c_algo = ;
static int __devinit nmk_i2c_probe(struct platform_device *pdev)
static int __devexit nmk_i2c_remove(struct platform_device *pdev)
static struct platform_driver nmk_i2c_driver = ;
static int __init nmk_i2c_init(void)
static void __exit nmk_i2c_exit(void)
subsys_initcall(nmk_i2c_init);
module_exit(nmk_i2c_exit);
MODULE_AUTHOR("Sachin Verma, Srinidhi KASAGAR");
MODULE_DESCRIPTION("Nomadik/Ux500 I2C driver");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:" DRIVER_NAME);

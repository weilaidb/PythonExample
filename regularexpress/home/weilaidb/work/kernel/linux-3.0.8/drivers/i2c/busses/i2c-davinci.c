#define DAVINCI_I2C_TIMEOUT	(1*HZ)
#define DAVINCI_I2C_MAX_TRIES	2
#define I2C_DAVINCI_INTR_ALL    (DAVINCI_I2C_IMR_AAS | \
DAVINCI_I2C_IMR_SCD | \
DAVINCI_I2C_IMR_ARDY | \
DAVINCI_I2C_IMR_NACK | \
DAVINCI_I2C_IMR_AL)
#define DAVINCI_I2C_OAR_REG	0x00
#define DAVINCI_I2C_IMR_REG	0x04
#define DAVINCI_I2C_STR_REG	0x08
#define DAVINCI_I2C_CLKL_REG	0x0c
#define DAVINCI_I2C_CLKH_REG	0x10
#define DAVINCI_I2C_CNT_REG	0x14
#define DAVINCI_I2C_DRR_REG	0x18
#define DAVINCI_I2C_SAR_REG	0x1c
#define DAVINCI_I2C_DXR_REG	0x20
#define DAVINCI_I2C_MDR_REG	0x24
#define DAVINCI_I2C_IVR_REG	0x28
#define DAVINCI_I2C_EMDR_REG	0x2c
#define DAVINCI_I2C_PSC_REG	0x30
#define DAVINCI_I2C_IVR_AAS	0x07
#define DAVINCI_I2C_IVR_SCD	0x06
#define DAVINCI_I2C_IVR_XRDY	0x05
#define DAVINCI_I2C_IVR_RDR	0x04
#define DAVINCI_I2C_IVR_ARDY	0x03
#define DAVINCI_I2C_IVR_NACK	0x02
#define DAVINCI_I2C_IVR_AL	0x01
#define DAVINCI_I2C_STR_BB	BIT(12)
#define DAVINCI_I2C_STR_RSFULL	BIT(11)
#define DAVINCI_I2C_STR_SCD	BIT(5)
#define DAVINCI_I2C_STR_ARDY	BIT(2)
#define DAVINCI_I2C_STR_NACK	BIT(1)
#define DAVINCI_I2C_STR_AL	BIT(0)
#define DAVINCI_I2C_MDR_NACK	BIT(15)
#define DAVINCI_I2C_MDR_STT	BIT(13)
#define DAVINCI_I2C_MDR_STP	BIT(11)
#define DAVINCI_I2C_MDR_MST	BIT(10)
#define DAVINCI_I2C_MDR_TRX	BIT(9)
#define DAVINCI_I2C_MDR_XA	BIT(8)
#define DAVINCI_I2C_MDR_RM	BIT(7)
#define DAVINCI_I2C_MDR_IRS	BIT(5)
#define DAVINCI_I2C_IMR_AAS	BIT(6)
#define DAVINCI_I2C_IMR_SCD	BIT(5)
#define DAVINCI_I2C_IMR_XRDY	BIT(4)
#define DAVINCI_I2C_IMR_RRDY	BIT(3)
#define DAVINCI_I2C_IMR_ARDY	BIT(2)
#define DAVINCI_I2C_IMR_NACK	BIT(1)
#define DAVINCI_I2C_IMR_AL	BIT(0)
struct davinci_i2c_dev ;
static struct davinci_i2c_platform_data davinci_i2c_platform_data_default = ;
static inline void davinci_i2c_write_reg(struct davinci_i2c_dev *i2c_dev,
int reg, u16 val)
static inline u16 davinci_i2c_read_reg(struct davinci_i2c_dev *i2c_dev, int reg)
static void generic_i2c_clock_pulse(unsigned int scl_pin)
static void i2c_recover_bus(struct davinci_i2c_dev *dev)
static inline void davinci_i2c_reset_ctrl(struct davinci_i2c_dev *i2c_dev,
int val)
static void i2c_davinci_calc_clk_dividers(struct davinci_i2c_dev *dev)
static int i2c_davinci_init(struct davinci_i2c_dev *dev)
static int i2c_davinci_wait_bus_not_busy(struct davinci_i2c_dev *dev,
char allow_sleep)
static int
i2c_davinci_xfer_msg(struct i2c_adapter *adap, struct i2c_msg *msg, int stop)
static int
i2c_davinci_xfer(struct i2c_adapter *adap, struct i2c_msg msgs[], int num)
static u32 i2c_davinci_func(struct i2c_adapter *adap)
static void terminate_read(struct davinci_i2c_dev *dev)
static void terminate_write(struct davinci_i2c_dev *dev)
static irqreturn_t i2c_davinci_isr(int this_irq, void *dev_id)
static int i2c_davinci_cpufreq_transition(struct notifier_block *nb,
unsigned long val, void *data)
static inline int i2c_davinci_cpufreq_register(struct davinci_i2c_dev *dev)
static inline void i2c_davinci_cpufreq_deregister(struct davinci_i2c_dev *dev)
static inline int i2c_davinci_cpufreq_register(struct davinci_i2c_dev *dev)
static inline void i2c_davinci_cpufreq_deregister(struct davinci_i2c_dev *dev)
static struct i2c_algorithm i2c_davinci_algo = ;
static int davinci_i2c_probe(struct platform_device *pdev)
static int davinci_i2c_remove(struct platform_device *pdev)
static int davinci_i2c_suspend(struct device *dev)
static int davinci_i2c_resume(struct device *dev)
static const struct dev_pm_ops davinci_i2c_pm = ;
#define davinci_i2c_pm_ops (&davinci_i2c_pm)
#define davinci_i2c_pm_ops NULL
MODULE_ALIAS("platform:i2c_davinci");
static struct platform_driver davinci_i2c_driver = ;
static int __init davinci_i2c_init_driver(void)
subsys_initcall(davinci_i2c_init_driver);
static void __exit davinci_i2c_exit_driver(void)
module_exit(davinci_i2c_exit_driver);
MODULE_AUTHOR("Texas Instruments India");
MODULE_DESCRIPTION("TI DaVinci I2C bus adapter");
MODULE_LICENSE("GPL");

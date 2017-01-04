#define clk_get(dev, id)	NULL
#define clk_put(clk)		do  while (0)
#define clk_disable(clk)	do  while (0)
#define clk_enable(clk)		do  while (0)
struct pxa_reg_layout ;
enum pxa_i2c_types ;
static struct pxa_reg_layout pxa_reg_layout[] = ;
static const struct platform_device_id i2c_pxa_id_table[] = ;
MODULE_DEVICE_TABLE(platform, i2c_pxa_id_table);
#define ICR_START	(1 << 0)
#define ICR_STOP	(1 << 1)
#define ICR_ACKNAK	(1 << 2)
#define ICR_TB		(1 << 3)
#define ICR_MA		(1 << 4)
#define ICR_SCLE	(1 << 5)
#define ICR_IUE		(1 << 6)
#define ICR_GCD		(1 << 7)
#define ICR_ITEIE	(1 << 8)
#define ICR_IRFIE	(1 << 9)
#define ICR_BEIE	(1 << 10)
#define ICR_SSDIE	(1 << 11)
#define ICR_ALDIE	(1 << 12)
#define ICR_SADIE	(1 << 13)
#define ICR_UR		(1 << 14)
#define ICR_FM		(1 << 15)
#define ISR_RWM		(1 << 0)
#define ISR_ACKNAK	(1 << 1)
#define ISR_UB		(1 << 2)
#define ISR_IBB		(1 << 3)
#define ISR_SSD		(1 << 4)
#define ISR_ALD		(1 << 5)
#define ISR_ITE		(1 << 6)
#define ISR_IRF		(1 << 7)
#define ISR_GCAD	(1 << 8)
#define ISR_SAD		(1 << 9)
#define ISR_BED		(1 << 10)
struct pxa_i2c ;
#define _IBMR(i2c)	((i2c)->reg_ibmr)
#define _IDBR(i2c)	((i2c)->reg_idbr)
#define _ICR(i2c)	((i2c)->reg_icr)
#define _ISR(i2c)	((i2c)->reg_isr)
#define _ISAR(i2c)	((i2c)->reg_isar)
#define I2C_PXA_SLAVE_ADDR      0x1
struct bits ;
#define PXA_BIT(m, s, u)
static inline void
decode_bits(const char *prefix, const struct bits *bits, int num, u32 val)
static const struct bits isr_bits[] = ;
static void decode_ISR(unsigned int val)
static const struct bits icr_bits[] = ;
static void decode_ICR(unsigned int val)
static unsigned int i2c_debug = DEBUG;
static void i2c_pxa_show_state(struct pxa_i2c *i2c, int lno, const char *fname)
#define show_state(i2c) i2c_pxa_show_state(i2c, __LINE__, __func__)
static void i2c_pxa_scream_blue_murder(struct pxa_i2c *i2c, const char *why)
#define i2c_debug	0
#define show_state(i2c) do  while (0)
#define decode_ISR(val) do  while (0)
#define decode_ICR(val) do  while (0)
#define i2c_pxa_scream_blue_murder(i2c, why) do  while (0)
static void i2c_pxa_master_complete(struct pxa_i2c *i2c, int ret);
static irqreturn_t i2c_pxa_handler(int this_irq, void *dev_id);
static inline int i2c_pxa_is_slavemode(struct pxa_i2c *i2c)
static void i2c_pxa_abort(struct pxa_i2c *i2c)
static int i2c_pxa_wait_bus_not_busy(struct pxa_i2c *i2c)
static int i2c_pxa_wait_master(struct pxa_i2c *i2c)
static int i2c_pxa_set_master(struct pxa_i2c *i2c)
static int i2c_pxa_wait_slave(struct pxa_i2c *i2c)
static void i2c_pxa_set_slave(struct pxa_i2c *i2c, int errcode)
#define i2c_pxa_set_slave(i2c, err)	do  while (0)
static void i2c_pxa_reset(struct pxa_i2c *i2c)
static void i2c_pxa_slave_txempty(struct pxa_i2c *i2c, u32 isr)
static void i2c_pxa_slave_rxfull(struct pxa_i2c *i2c, u32 isr)
static void i2c_pxa_slave_start(struct pxa_i2c *i2c, u32 isr)
static void i2c_pxa_slave_stop(struct pxa_i2c *i2c)
static void i2c_pxa_slave_txempty(struct pxa_i2c *i2c, u32 isr)
static void i2c_pxa_slave_rxfull(struct pxa_i2c *i2c, u32 isr)
static void i2c_pxa_slave_start(struct pxa_i2c *i2c, u32 isr)
static void i2c_pxa_slave_stop(struct pxa_i2c *i2c)
static inline unsigned int i2c_pxa_addr_byte(struct i2c_msg *msg)
static inline void i2c_pxa_start_message(struct pxa_i2c *i2c)
static inline void i2c_pxa_stop_message(struct pxa_i2c *i2c)
static int i2c_pxa_pio_set_master(struct pxa_i2c *i2c)
static int i2c_pxa_do_pio_xfer(struct pxa_i2c *i2c,
struct i2c_msg *msg, int num)
static int i2c_pxa_do_xfer(struct pxa_i2c *i2c, struct i2c_msg *msg, int num)
static int i2c_pxa_pio_xfer(struct i2c_adapter *adap,
struct i2c_msg msgs[], int num)
static void i2c_pxa_master_complete(struct pxa_i2c *i2c, int ret)
static void i2c_pxa_irq_txempty(struct pxa_i2c *i2c, u32 isr)
static void i2c_pxa_irq_rxfull(struct pxa_i2c *i2c, u32 isr)
#define VALID_INT_SOURCE	(ISR_SSD | ISR_ALD | ISR_ITE | ISR_IRF | \
ISR_SAD | ISR_BED)
static irqreturn_t i2c_pxa_handler(int this_irq, void *dev_id)
static int i2c_pxa_xfer(struct i2c_adapter *adap, struct i2c_msg msgs[], int num)
static u32 i2c_pxa_functionality(struct i2c_adapter *adap)
static const struct i2c_algorithm i2c_pxa_algorithm = ;
static const struct i2c_algorithm i2c_pxa_pio_algorithm = ;
static int i2c_pxa_probe(struct platform_device *dev)
static int __exit i2c_pxa_remove(struct platform_device *dev)
static int i2c_pxa_suspend_noirq(struct device *dev)
static int i2c_pxa_resume_noirq(struct device *dev)
static const struct dev_pm_ops i2c_pxa_dev_pm_ops = ;
#define I2C_PXA_DEV_PM_OPS (&i2c_pxa_dev_pm_ops)
#define I2C_PXA_DEV_PM_OPS NULL
static struct platform_driver i2c_pxa_driver = ;
static int __init i2c_adap_pxa_init(void)
static void __exit i2c_adap_pxa_exit(void)
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:pxa2xx-i2c");
subsys_initcall(i2c_adap_pxa_init);
module_exit(i2c_adap_pxa_exit);
